#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <FluxGarage_RoboEyes.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// ==================================================
// RoboEyes
// ==================================================

RoboEyes<Adafruit_SSD1306> roboEyes(display);

// ==================================================
// Mostrar texto centrado
// ==================================================

void mostrarTexto(const char* texto, int tamano) {

  display.clearDisplay();

  display.setTextSize(tamano);
  display.setTextColor(SSD1306_WHITE);

  int16_t x1, y1;
  uint16_t w, h;

  display.getTextBounds(texto, 0, 0, &x1, &y1, &w, &h);

  int x = (SCREEN_WIDTH - w) / 2;
  int y = (SCREEN_HEIGHT - h) / 2;

  display.setCursor(x, y);
  display.println(texto);

  display.display();
}

// ==================================================
// RoboEyes funcionando durante cierto tiempo
// ==================================================

void ojosDurante(unsigned long tiempo) {

  unsigned long inicio = millis();

  while (millis() - inicio < tiempo) {

    roboEyes.update();
  }
}

// ==================================================
// Animación de los tres puntos
// ==================================================

void animacionCarga() {

  unsigned long inicio = millis();

  while (millis() - inicio < 3000) {

    mostrarTexto(".", 2);
    delay(2000);

    mostrarTexto("..", 2);
    delay(2000);

    mostrarTexto("...", 2);
    delay(8000);
  }
}

// ==================================================
// Corazón que aparece pequeño y crece
// ==================================================

void corazonDurante(unsigned long tiempo) {

  unsigned long inicio = millis();

  int tamanos[] = {
    4, 6, 8, 10, 12, 14, 16, 18, 20
  };

  for (int i = 0; i < 9; i++) {

    if (millis() - inicio >= tiempo) {
      break;
    }

    int t = tamanos[i];

    display.clearDisplay();

    int centroX = SCREEN_WIDTH / 2;
    int centroY = SCREEN_HEIGHT / 2 - 5;

    // Parte superior del corazón

    display.fillCircle(
      centroX - t / 2,
      centroY - t / 4,
      t / 2,
      SSD1306_WHITE
    );

    display.fillCircle(
      centroX + t / 2,
      centroY - t / 4,
      t / 2,
      SSD1306_WHITE
    );

    // Parte inferior del corazón

    display.fillTriangle(
      centroX - t,
      centroY,
      centroX + t,
      centroY,
      centroX,
      centroY + (t * 3 / 2),
      SSD1306_WHITE
    );

    display.display();

    delay(400);
  }

  // Mantener el corazón grande hasta completar
  // los 8 segundos

  while (millis() - inicio < tiempo) {

    display.display();
  }
}

// ==================================================
// SETUP
// ==================================================

void setup() {

  Serial.begin(9600);

  // ==================================================
  // Iniciar pantalla OLED
  // ==================================================

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {

    Serial.println(F("SSD1306 allocation failed"));

    for (;;) {
    }
  }

  // ==================================================
  // Iniciar RoboEyes
  // ==================================================

  // IMPORTANTE:
  // Limita RoboEyes a 30 cuadros por segundo.
  // Esto puede ayudar a reducir el parpadeo
  // visible en la grabación de la cámara.

  roboEyes.begin(SCREEN_WIDTH, SCREEN_HEIGHT, 30);

  // ==================================================
  // Configuración inicial
  // ==================================================

  roboEyes.anim_confused();

  // Comportamiento normal de los ojos

  roboEyes.setAutoblinker(ON, 2, 2);

  roboEyes.setIdleMode(ON, 4, 4);

  // ==================================================
  // 1. ANIMACIÓN DE CARGA
  // ==================================================

  animacionCarga();

  // ==================================================
  // 2. ROBO EYES
  // ==================================================

  ojosDurante(5000);

  // ==================================================
  // 3. HOLA
  // ==================================================

  roboEyes.setAutoblinker(OFF);
  roboEyes.setIdleMode(OFF);

  mostrarTexto("HOLA", 4);

  delay(2000);

  // ==================================================
  // 4. PAPA
  // ==================================================

  mostrarTexto("PAPA?", 4);

  delay(2000);

  // ==================================================
  // 5. CORAZÓN
  // ==================================================

  corazonDurante(8000);

  // ==================================================
  // 6. SUSCRIBETE
  // ==================================================

  mostrarTexto("SUSCRIBETE", 2);

  delay(8000);

  // ==================================================
  // 7. ROBO EYES NORMAL
  // ==================================================

  roboEyes.setMood(DEFAULT);

  roboEyes.setAutoblinker(ON, 3, 2);

  roboEyes.setIdleMode(ON, 2, 2);
}

// ==================================================
// LOOP
// ==================================================

void loop() {

  roboEyes.update();
}

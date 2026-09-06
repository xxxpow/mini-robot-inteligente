# 🤖 Mini Robot Inteligente

Bienvenido al proyecto **Mini Robot Inteligente**.

En este proyecto construiremos paso a paso un pequeño robot utilizando Arduino, electrónica, sensores, motores, pantalla OLED y programación.

El proyecto acompaña la serie de videos **Mini Robot Inteligente** del canal **INVENTOS Y PROYECTOS**, donde podrás seguir el proceso de construcción desde cero.

---

## 🎬 Capítulo 01 — Pantalla OLED y RoboEyes

En el primer capítulo comenzamos a darle vida al robot utilizando:

* Arduino UNO
* Pantalla OLED 0.96" 128×64 I2C
* Biblioteca FluxGarage RoboEyes

El programa muestra diferentes animaciones y expresiones en los ojos del robot.

### 📺 Ver el video

👉 https://youtu.be/RubKAwhqtq0

---

# 🧰 Componentes

Para este capítulo necesitas:

* **Arduino UNO**
* **Pantalla OLED 0.96" 128×64 I2C**
* **Cable USB**
* **Cables Dupont**

---

# 💻 Software necesario

## 1. Arduino IDE

Necesitas instalar **Arduino IDE** para abrir, compilar y cargar el programa en el Arduino UNO.

### 🔗 Descargar Arduino IDE

👉 https://www.arduino.cc/en/software

Actualmente la página oficial de Arduino ofrece **Arduino IDE 2.3.10**.

---

## 2. Adafruit GFX Library

Esta biblioteca proporciona las funciones gráficas utilizadas por el programa.

### Instalación

Abre Arduino IDE y selecciona:

**Sketch → Include Library → Manage Libraries...**

Busca:

`Adafruit GFX Library`

y pulsa **Install**.

### 🔗 Repositorio oficial

👉 https://github.com/adafruit/Adafruit-GFX-Library

---

## 3. Adafruit SSD1306

Esta biblioteca permite controlar la pantalla OLED basada en el controlador SSD1306.

### Instalación

En Arduino IDE selecciona:

**Sketch → Include Library → Manage Libraries...**

Busca:

`Adafruit SSD1306`

y pulsa **Install**.

### 🔗 Repositorio oficial

👉 https://github.com/adafruit/Adafruit_SSD1306

---

## 4. FluxGarage RoboEyes

Esta es la biblioteca utilizada para crear los ojos animados del robot.

### Instalación

En Arduino IDE selecciona:

**Sketch → Include Library → Manage Libraries...**

Busca:

`FluxGarage RoboEyes`

y pulsa **Install**.

Después de instalarla podrás encontrar sus ejemplos en:

**File → Examples → FluxGarage RoboEyes**

### 🔗 Repositorio oficial

👉 https://github.com/FluxGarage/RoboEyes

La instalación y ubicación de los ejemplos están indicadas en la documentación oficial de RoboEyes.

---

# 📥 Código

El código del Capítulo 01 se encuentra en:

```text
codigo/
└── Capitulo-01/
    └── robot_capitulo_01.ino
```

👉 **Código del Capítulo 01:**
https://github.com/xxxpow/mini-robot-inteligente/tree/main/codigo/Capitulo-01

> ⚠️ El código publicado en este repositorio corresponde a la versión utilizada en el proyecto y puede actualizarse a medida que avance la serie.

---

# 🔌 Conexión de la pantalla OLED

La pantalla utiliza comunicación **I2C**.

Para el Arduino UNO:

| Pantalla OLED | Arduino UNO |
| ------------- | ----------- |
| GND           | GND         |
| VCC           | 5V          |
| SDA           | A4          |
| SCL           | A5          |

### 📌 Resumen

```text
OLED       Arduino UNO

GND   →    GND
VCC   →    5V
SDA   →    A4
SCL   →    A5
```

> ⚠️ Verifica siempre las especificaciones de tu pantalla antes de conectarla.

---

# ⚙️ Cómo cargar el programa

### 1️⃣ Instala Arduino IDE

Descarga e instala Arduino IDE desde:

https://www.arduino.cc/en/software

### 2️⃣ Instala las bibliotecas

Desde Arduino IDE:

**Sketch → Include Library → Manage Libraries...**

Instala:

* Adafruit GFX Library
* Adafruit SSD1306
* FluxGarage RoboEyes

Si Arduino IDE solicita instalar alguna dependencia adicional, acepta la instalación.

### 3️⃣ Conecta el Arduino

Conecta el Arduino UNO a la computadora mediante USB.

### 4️⃣ Abre el código

Abre:

`robot_capitulo_01.ino`

con Arduino IDE.

### 5️⃣ Selecciona la placa

Selecciona:

**Tools → Board → Arduino AVR Boards → Arduino UNO**

### 6️⃣ Selecciona el puerto

Selecciona el puerto COM correspondiente al Arduino UNO.

### 7️⃣ Verifica el código

Pulsa:

**✓ Verify**

para comprobar que el programa compile correctamente.

### 8️⃣ Sube el programa

Pulsa:

**→ Upload**

Cuando termine la carga, el programa comenzará a ejecutarse en el Arduino.

La pantalla OLED debería mostrar las animaciones programadas.

---

# ❗ Solución de problemas

## El programa no compila

Comprueba que estén instaladas:

* Adafruit GFX Library
* Adafruit SSD1306
* FluxGarage RoboEyes

También verifica que hayas seleccionado **Arduino UNO** como placa.

---

## La pantalla no muestra nada

Comprueba las conexiones:

* GND → GND
* VCC → 5V
* SDA → A4
* SCL → A5

También verifica que la pantalla sea una OLED compatible con el controlador SSD1306.

---

## Arduino IDE no encuentra el puerto

Comprueba:

* Que el Arduino esté conectado.
* Que el cable USB permita transferencia de datos.
* Que el Arduino aparezca correctamente en el sistema operativo.

---

# 📂 Estructura del repositorio

El proyecto está organizado de la siguiente manera:

```text
mini-robot-inteligente/
│
├── codigo/
│
├── documentacion/
│
├── esquemas/
│
├── imagenes/
│
└── README.md
```

### 📁 `codigo`

Contiene los programas utilizados para controlar el robot.

### 📁 `documentacion`

Contiene información y documentación relacionada con el proyecto.

### 📁 `esquemas`

Aquí se irán agregando los esquemas de conexión del robot.

### 📁 `imagenes`

Contiene fotografías, ilustraciones y otros recursos visuales del proyecto.

### 📄 `README.md`

Es esta página. Aquí encontrarás la información principal para comenzar con el proyecto.

---

# 🚀 Próximos capítulos

El robot irá incorporando progresivamente nuevas funciones y componentes.

Entre ellos:

* 👀 Pantalla OLED y ojos animados
* 👂 Movimiento de las orejas
* 🛞 Movimiento mediante motores
* 📏 Sensores
* 🎤 Micrófono
* 🔊 Reproducción de sonidos
* 🧠 Nuevas funciones
* 🔋 Sistema de alimentación
* 🤖 Integración de todos los componentes

El proyecto se encuentra actualmente **en desarrollo**, por lo que las características y componentes pueden cambiar durante la construcción.

---

# 📺 Sigue el proyecto

Puedes seguir todo el proceso de construcción en el canal:

**INVENTOS Y PROYECTOS**

### 🎬 Capítulo 01

👉 https://youtu.be/RubKAwhqtq0

El repositorio se irá actualizando a medida que avance la serie.

---

# ⭐ Apoya el proyecto

Si este proyecto te resulta útil:

⭐ Dale una estrella al repositorio.

📺 Suscríbete al canal de YouTube.

👍 Comparte el proyecto con otras personas interesadas en Arduino, electrónica y robótica.

---

**INVENTOS Y PROYECTOS**
🤖 Arduino • Electrónica • Robótica • DIY

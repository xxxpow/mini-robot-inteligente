# 🤖 Mini Robot Inteligente

Bienvenido al proyecto **Mini Robot Inteligente**.

En este proyecto construiremos paso a paso un pequeño robot utilizando Arduino, sensores, motores, pantalla OLED y otros componentes electrónicos.

El proyecto está dividido en capítulos para que puedas seguir el desarrollo desde cero y construir tu propio robot.

---

## 🎬 Serie en YouTube

Este repositorio acompaña la serie de videos **Mini Robot Inteligente**.

### 📺 Capítulo 01 — Pantalla OLED y RoboEyes

En este primer capítulo comenzamos a darle vida al robot utilizando un **Arduino UNO** y una pantalla OLED de **0.96" 128×64 con comunicación I2C**.

▶️ **Ver el video en YouTube:**

https://youtu.be/RubKAwhqtq0

---

# 📂 Estructura del proyecto

```text
mini-robot-inteligente/
│
├── README.md
│
├── codigo/
│   └── Capitulo-01/
│       └── robot_capitulo_01.ino
│
├── componentes/
│   └── Capitulo-01/
│
└── imagenes/
    └── Capitulo-01/
```

### 📁 `codigo`

Aquí encontrarás los programas utilizados para controlar el robot.

Cada capítulo tendrá su propia carpeta con el código correspondiente.

### 📁 `componentes`

Aquí iremos colocando información sobre los componentes utilizados en cada capítulo.

### 📁 `imagenes`

Aquí se almacenarán imágenes, diagramas y otros recursos del proyecto.

---

# 🚀 Capítulo 01 — Pantalla OLED y RoboEyes

En este capítulo utilizamos un **Arduino UNO** y una pantalla OLED de **0.96" 128×64 con comunicación I2C**.

El programa utiliza la biblioteca **FluxGarage RoboEyes** para mostrar diferentes animaciones de ojos en la pantalla OLED.

## 🧰 Componentes

* Arduino UNO
* Pantalla OLED 0.96" 128×64 I2C
* Cable USB
* Cables Dupont

---

# 💻 Software necesario

Antes de cargar el programa necesitas instalar **Arduino IDE** y las bibliotecas utilizadas por el proyecto.

## 1. Arduino IDE

Descarga Arduino IDE desde la página oficial de Arduino:

https://www.arduino.cc/en/software

Arduino IDE 2 es el entorno recomendado para trabajar con este proyecto. La página oficial de Arduino proporciona las versiones actuales para Windows, macOS y Linux.

### 📚 Documentación oficial

https://docs.arduino.cc/software/ide/

---

## 2. Adafruit GFX Library

Esta biblioteca proporciona las funciones gráficas utilizadas por la pantalla OLED.

### Instalación

Abre Arduino IDE y selecciona:

**Herramientas → Gestionar bibliotecas...**

Busca:

```text
Adafruit GFX Library
```

y pulsa **Instalar**.

### Repositorio oficial

https://github.com/adafruit/Adafruit-GFX-Library

Adafruit indica que esta biblioteca se instala fácilmente desde el Library Manager de Arduino IDE.

---

## 3. Adafruit SSD1306

Esta biblioteca permite controlar la pantalla OLED basada en el controlador **SSD1306**.

### Instalación

En Arduino IDE selecciona:

**Herramientas → Gestionar bibliotecas...**

Busca:

```text
Adafruit SSD1306
```

y pulsa **Instalar**.

### Repositorio oficial

https://github.com/adafruit/Adafruit_SSD1306

La biblioteca Adafruit SSD1306 utiliza Adafruit GFX y está diseñada para pantallas OLED con controladores SSD1306, incluyendo comunicación I2C.

> **Nota:** Arduino IDE puede instalar automáticamente las bibliotecas necesarias como dependencias. Si el IDE solicita instalar **Adafruit BusIO**, acepta la instalación.

---

## 4. FluxGarage RoboEyes

Esta es la biblioteca utilizada para crear los ojos animados del robot.

### Instalación

En Arduino IDE selecciona:

**Herramientas → Gestionar bibliotecas...**

Busca:

```text
FluxGarage RoboEyes
```

y pulsa **Instalar**.

### Repositorio oficial

https://github.com/FluxGarage/RoboEyes

La documentación de RoboEyes indica que puede instalarse directamente desde el Library Manager y que sus ejemplos aparecen posteriormente en:

**Archivo → Ejemplos → FluxGarage RoboEyes**.

---

# 📥 Código del Capítulo 01

El código utilizado en este capítulo se encuentra en:

```text
codigo/
└── Capitulo-01/
    └── robot_capitulo_01.ino
```

Puedes abrir el archivo directamente desde este repositorio o descargar el proyecto completo.

---

# ⚙️ Cómo instalar y cargar el programa

### Paso 1 — Instala Arduino IDE

Descarga e instala Arduino IDE desde:

https://www.arduino.cc/en/software

---

### Paso 2 — Instala las bibliotecas

Desde Arduino IDE abre:

**Herramientas → Gestionar bibliotecas...**

Instala:

* **Adafruit GFX Library**
* **Adafruit SSD1306**
* **FluxGarage RoboEyes**

Si Arduino IDE solicita instalar alguna dependencia adicional, acepta la instalación.

---

### Paso 3 — Conecta el Arduino

Conecta el **Arduino UNO** a tu computadora mediante el cable USB.

---

### Paso 4 — Abre el código

Abre:

```text
robot_capitulo_01.ino
```

con Arduino IDE.

---

### Paso 5 — Selecciona la placa

En Arduino IDE selecciona:

**Herramientas → Placa → Arduino AVR Boards → Arduino UNO**

---

### Paso 6 — Selecciona el puerto

Selecciona el puerto COM correspondiente a tu Arduino UNO.

---

### Paso 7 — Verifica el programa

Pulsa el botón:

**✓ Verificar**

para comprobar que el código compile correctamente.

---

### Paso 8 — Sube el programa

Pulsa:

**→ Subir**

Arduino IDE cargará el programa en el Arduino UNO.

Cuando termine, la pantalla OLED debería comenzar a mostrar las animaciones programadas.

---

# 🔌 Conexión de la pantalla OLED

La pantalla OLED utiliza comunicación **I2C**.

Para el Arduino UNO:

| OLED | Arduino UNO |
| ---- | ----------- |
| GND  | GND         |
| VCC  | 5V          |
| SCL  | A5          |
| SDA  | A4          |

> ⚠️ Verifica siempre las especificaciones de tu pantalla OLED antes de conectarla.

---

# ❗ Solución de problemas

### El programa no compila

Comprueba:

1. Que **Adafruit GFX Library** esté instalada.
2. Que **Adafruit SSD1306** esté instalada.
3. Que **FluxGarage RoboEyes** esté instalada.
4. Que las dependencias solicitadas por Arduino IDE también estén instaladas.
5. Que hayas seleccionado **Arduino UNO** como placa.

### Arduino IDE no encuentra el puerto

Comprueba que:

* El Arduino esté conectado mediante USB.
* El cable USB permita transferencia de datos.
* El Arduino aparezca en el administrador de dispositivos de Windows.

### La pantalla no muestra nada

Revisa las conexiones:

* GND
* VCC
* SDA
* SCL

En el Arduino UNO:

* **SDA → A4**
* **SCL → A5**

---

# 🔜 Próximos capítulos

Este proyecto continuará creciendo capítulo a capítulo.

En los próximos capítulos iremos incorporando nuevas funciones y componentes al robot.

Algunas de las características que iremos desarrollando son:

* 👀 Animaciones de los ojos
* 🎤 Micrófono
* 🔊 Reproducción de sonidos
* 📡 Sensores
* 🚗 Motores
* 👂 Movimiento de las orejas
* 🧠 Nuevas funciones inteligentes
* 🔋 Sistema de alimentación
* 🤖 Integración de todos los componentes

---

# ⭐ Apoya el proyecto

Si este proyecto te resulta útil:

⭐ Dale una estrella al repositorio.

📺 Suscríbete al canal de YouTube.

👍 Comparte el proyecto con otras personas interesadas en Arduino y robótica.

¡Gracias por acompañarme en la construcción del **Mini Robot Inteligente**! 🤖

# SEMÁFORO ELECTRÓNICO AUTOMATIZADO CON ARDUINO UNO

## 1. Nombre del proyecto

**Diseño de un semáforo electrónico automatizado utilizando Arduino UNO.**

En este proyecto desarrollamos el diseño de un semáforo electrónico automatizado mediante una placa Arduino UNO, tres diodos LED de diferentes colores y un programa que controla la secuencia de encendido y apagado de cada luz.

Nuestro propósito principal fue representar el funcionamiento de un semáforo convencional aplicando conocimientos de electrónica básica, programación de microcontroladores y automatización.

El sistema utiliza tres luces: roja, amarilla y verde. Cada una tiene un tiempo de funcionamiento establecido mediante un código de programación, simulando el comportamiento básico de un semáforo utilizado para regular el tránsito.

El proyecto también fue complementado con una representación tridimensional del prototipo para mostrar cómo podría verse su estructura física.

## 2. Integrantes

- **Estudiantes:** Angel Gabriel Martínez Olandete, Andres Bruges y Jesus Manuel Aguilar Bello.
- **Asignatura:** Mecatrónica.
- **Institución:** Corporación Universitaria Americana.
- **Proyecto:** Semáforo electrónico automatizado con Arduino UNO.
- **Año:** 2026.

## 3. Problema identificado

La regulación del tránsito es fundamental para mantener el orden y prevenir accidentes en las vías. Los semáforos cumplen una función importante porque permiten organizar el paso de vehículos y peatones mediante señales luminosas.

A partir de esta necesidad, como grupo propusimos desarrollar un semáforo electrónico automatizado que nos permitiera representar cómo funciona un sistema de control de tráfico utilizando componentes electrónicos y un microcontrolador.

El problema que buscamos abordar mediante este proyecto es comprender cómo se puede automatizar un sistema de señalización mediante instrucciones programadas, logrando que diferentes luces se activen y desactiven en un orden establecido sin necesidad de intervención manual.

De esta manera, buscamos aplicar los conocimientos adquiridos durante el semestre en electrónica, programación y sistemas de control.

## 4. Objetivos

### Objetivo general

Diseñar un sistema de semáforo electrónico automatizado mediante una placa Arduino UNO, utilizando diodos LED y programación para establecer una secuencia de señales luminosas.

### Objetivos específicos

- Identificar los componentes electrónicos necesarios para desarrollar un semáforo automatizado.
- Comprender el funcionamiento de las salidas digitales de Arduino.
- Identificar las conexiones eléctricas necesarias para los tres LED y sus resistencias de protección.
- Desarrollar una programación para controlar las luces roja, amarilla y verde.
- Aplicar conceptos básicos de electrónica, programación y automatización.
- Representar el diseño del proyecto mediante una maqueta tridimensional.
- Explicar el funcionamiento de las diferentes etapas del semáforo.

## 5. Descripción del funcionamiento

Nuestro proyecto utiliza una placa Arduino UNO, que funciona como el cerebro principal del sistema. Su responsabilidad es enviar señales eléctricas a los diferentes LED para controlar su encendido y apagado.

El semáforo utiliza tres luces:

**Luz verde:** representa la autorización para continuar la circulación. Permanece encendida durante cinco segundos.

**Luz amarilla:** representa una señal de precaución. Se activa después de la luz verde y permanece encendida durante dos segundos.

**Luz roja:** representa la obligación de detenerse. Se activa después de la luz amarilla y permanece encendida durante cinco segundos.

### Secuencia de funcionamiento

1. Arduino activa la luz verde durante cinco segundos.
2. Después del tiempo programado, apaga la luz verde y activa la amarilla durante dos segundos.
3. Cuando termina el tiempo de la luz amarilla, la apaga y activa la roja durante cinco segundos.
4. Después de terminar el tiempo de la luz roja, el programa vuelve a activar la luz verde.
5. El proceso se repite continuamente.

La duración total de una secuencia completa es de 12 segundos.

Mediante esta programación representamos el comportamiento básico de un semáforo convencional utilizando un sistema automatizado.

## 6. Componentes utilizados

| Componente | Cantidad | Función |
|---|---:|---|
| Arduino UNO | 1 | Controla el funcionamiento del sistema. |
| LED rojo | 1 | Representa la señal de detenerse. |
| LED amarillo | 1 | Representa la señal de precaución. |
| LED verde | 1 | Representa la señal de circulación. |
| Resistencias de 220 Ω o 330 Ω | 3 | Limitan la corriente para proteger los LED. |
| Cables de conexión | Según necesidad | Permiten conectar los componentes electrónicos. |
| Protoboard | 1 | Facilita la organización de las conexiones. |

## 7. Arquitectura del sistema

Organizamos la arquitectura de nuestro proyecto en tres partes principales:

### 1. Unidad de control

La placa Arduino UNO funciona como el cerebro principal del sistema. Recibe el programa y ejecuta las instrucciones necesarias para controlar el semáforo.

### 2. Etapa de salida

Está conformada por los tres LED de colores. Cada uno se encuentra conectado a un pin digital diferente de Arduino mediante una resistencia de protección.

### 3. Alimentación y conexiones

El circuito utiliza la alimentación proporcionada por Arduino y una conexión común a tierra (GND), que permite completar los circuitos eléctricos.

La interacción entre estos elementos permite establecer una secuencia automática de encendido y apagado de las luces.

### Flujo general del sistema


        ARDUINO UNO
             |
       PROGRAMA C/C++
             |
      CONTROL DE SALIDAS
             |
       +-----+-----+
       |     |     |
      ROJO AMARILLO VERDE
       |     |     |
       +-----+-----+
             |
      SECUENCIA AUTOMÁTICA
             |
       REPETICIÓN DEL CICLO


## 8. Diagrama de conexiones electrónicas

Para el diseño del circuito establecimos tres salidas digitales de Arduino UNO.

### Distribución de los pines

| Luz del semáforo | Pin de Arduino |
|---|---|
| LED rojo | Pin digital 13 |
| LED amarillo | Pin digital 12 |
| LED verde | Pin digital 11 |

### Explicación de las conexiones

**LED rojo:**

- La pata larga (ánodo) se conecta a una resistencia de 220 Ω o 330 Ω.
- El otro extremo de la resistencia se conecta al pin digital 13 de Arduino.
- La pata corta (cátodo) se conecta a GND.

**LED amarillo:**

- La pata larga (ánodo) se conecta a una resistencia de 220 Ω o 330 Ω.
- El otro extremo de la resistencia se conecta al pin digital 12.
- La pata corta (cátodo) se conecta a GND.

**LED verde:**

- La pata larga (ánodo) se conecta a una resistencia de 220 Ω o 330 Ω.
- El otro extremo de la resistencia se conecta al pin digital 11.
- La pata corta (cátodo) se conecta a GND.

Es importante utilizar una resistencia independiente para cada LED, ya que su función es limitar la corriente eléctrica y evitar daños en los componentes.

### Consideraciones eléctricas

- La placa utilizada es Arduino UNO.
- Las salidas digitales trabajan con niveles lógicos de 0 V y aproximadamente 5 V.
- Los tres LED comparten la conexión GND.
- Cada LED utiliza su propia resistencia de protección.
- No se deben conectar los LED directamente a los pines sin utilizar resistencias.



## 9. Desarrollo del software y explicación del código

Para desarrollar el software utilizamos el lenguaje de programación basado en C/C++ para Arduino UNO.

La función principal del programa es controlar automáticamente el encendido y apagado de tres luces LED, siguiendo una secuencia que representa el funcionamiento de un semáforo convencional.

El programa utiliza tres pines digitales de Arduino, cada uno destinado a controlar un LED de diferente color.

### 9.1. Código fuente completo



// Definición de los pines según nuestra conexión
const int luzRoja = 13;
const int luzAmarilla = 12;
const int luzVerde = 11;

void setup() {
  // Configuramos los pines como salidas
  pinMode(luzRoja, OUTPUT);
  pinMode(luzAmarilla, OUTPUT);
  pinMode(luzVerde, OUTPUT);
}

void loop() {
  // 1. Luz Verde encendida (5 segundos)
  digitalWrite(luzVerde, HIGH);
  digitalWrite(luzAmarilla, LOW);
  digitalWrite(luzRoja, LOW);
  delay(5000);

  // 2. Luz Amarilla encendida (2 segundos)
  digitalWrite(luzVerde, LOW);
  digitalWrite(luzAmarilla, HIGH);
  digitalWrite(luzRoja, LOW);
  delay(2000);

  // 3. Luz Roja encendida (5 segundos)
  digitalWrite(luzVerde, LOW);
  digitalWrite(luzAmarilla, LOW);
  digitalWrite(luzRoja, HIGH);
  delay(5000);
}


### 9.2. Declaración de los pines


const int luzRoja = 13;
const int luzAmarilla = 12;
const int luzVerde = 11;


En esta parte definimos tres variables constantes que representan los pines digitales destinados a controlar los LED.

- `luzRoja`: identifica el pin 13.
- `luzAmarilla`: identifica el pin 12.
- `luzVerde`: identifica el pin 11.

La palabra `const` indica que estos valores permanecen constantes durante la ejecución del programa.

### 9.3. Función setup()


void setup() {
  pinMode(luzRoja, OUTPUT);
  pinMode(luzAmarilla, OUTPUT);
  pinMode(luzVerde, OUTPUT);
}


Esta función se ejecuta una sola vez cuando Arduino inicia o se reinicia.

Su objetivo es configurar los tres pines como salidas digitales mediante la instrucción `pinMode()`.

La palabra `OUTPUT` indica que Arduino utilizará estos pines para enviar señales eléctricas y controlar el encendido de los LED.

### 9.4. Función loop()


void loop() {


Esta función contiene las instrucciones principales de nuestro semáforo.

Arduino ejecuta continuamente las instrucciones que se encuentran dentro de `loop()`, permitiendo que la secuencia de luces se repita automáticamente.

### 9.5. Primera etapa: encendido de la luz verde


digitalWrite(luzVerde, HIGH);
digitalWrite(luzAmarilla, LOW);
digitalWrite(luzRoja, LOW);
delay(5000);


En esta etapa se enciende el LED verde utilizando `HIGH`.

Al mismo tiempo, los LED amarillo y rojo permanecen apagados mediante `LOW`.

La instrucción `delay(5000)` establece una espera de 5.000 milisegundos, equivalentes a cinco segundos.

### 9.6. Segunda etapa: encendido de la luz amarilla


digitalWrite(luzVerde, LOW);
digitalWrite(luzAmarilla, HIGH);
digitalWrite(luzRoja, LOW);
delay(2000);


En esta parte se apaga la luz verde y se enciende la luz amarilla.

La luz roja permanece apagada.

El programa espera 2.000 milisegundos, equivalentes a dos segundos, antes de continuar.

### 9.7. Tercera etapa: encendido de la luz roja


digitalWrite(luzVerde, LOW);
digitalWrite(luzAmarilla, LOW);
digitalWrite(luzRoja, HIGH);
delay(5000);


En esta última etapa se apagan las luces verde y amarilla, mientras que se enciende la luz roja.

La instrucción `delay(5000)` mantiene la luz roja encendida durante cinco segundos.

Después de terminar este tiempo, Arduino vuelve al comienzo de la función `loop()` y comienza nuevamente con la luz verde.

### 9.8. Funciones principales utilizadas

| Instrucción | Función |
|---|---|
| `const int` | Declara variables constantes. |
| `pinMode()` | Configura un pin como entrada o salida. |
| `OUTPUT` | Establece el pin como salida. |
| `digitalWrite()` | Enciende o apaga una salida digital. |
| `HIGH` | Envía una señal de nivel alto. |
| `LOW` | Envía una señal de nivel bajo. |
| `delay()` | Establece una pausa en milisegundos. |
| `setup()` | Configura inicialmente el sistema. |
| `loop()` | Repite continuamente el funcionamiento. |

### 9.9. Resumen de la secuencia programada

| Etapa | LED verde | LED amarillo | LED rojo | Tiempo |
|---|---|---|---|---|
| Primera | Encendido | Apagado | Apagado | 5 segundos |
| Segunda | Apagado | Encendido | Apagado | 2 segundos |
| Tercera | Apagado | Apagado | Encendido | 5 segundos |

La duración total del ciclo es de 12 segundos.

### Conclusión del desarrollo del software

Mediante este código establecimos una secuencia automática de tres señales luminosas utilizando Arduino UNO. La programación permite controlar individualmente cada LED, establecer tiempos específicos de funcionamiento y repetir el proceso continuamente.

Con este desarrollo aplicamos conceptos fundamentales de programación de microcontroladores, control de salidas digitales y automatización.


## 10. Análisis del funcionamiento del proyecto

De acuerdo con el código desarrollado, podemos identificar tres etapas principales en el funcionamiento del semáforo.

### Primera etapa. Luz verde

**Objetivo:** Identificar el funcionamiento de la luz verde dentro de la secuencia programada.

**Funcionamiento esperado:** El LED verde, conectado al pin digital 11, debe permanecer encendido durante cinco segundos, mientras las otras dos luces permanecen apagadas.

### Segunda etapa. Luz amarilla

**Objetivo:** Identificar el cambio de la luz verde a la amarilla.

**Funcionamiento esperado:** La luz verde debe apagarse y la amarilla, conectada al pin digital 12, debe encenderse durante dos segundos.

### Tercera etapa. Luz roja

**Objetivo:** Identificar la etapa final de la secuencia del semáforo.

**Funcionamiento esperado:** La luz roja, conectada al pin digital 13, debe permanecer encendida durante cinco segundos. Después, el programa debe comenzar nuevamente con la luz verde.

### Resumen del funcionamiento

| Etapa | Luz activada | Tiempo programado |
|---|---|---|
| Primera | Verde | 5 segundos |
| Segunda | Amarilla | 2 segundos |
| Tercera | Roja | 5 segundos |

La secuencia está definida en el código fuente y tiene una duración total de 12 segundos por ciclo.

Esta explicación permite comprender cómo debería comportarse el sistema de acuerdo con las instrucciones de programación.

## 11. Evidencias fotográficas y visuales


<img width="450" alt="Evidencia del proyecto" src="https://github.com/user-attachments/assets/ece49bd8-87ab-4f30-af66-1ac4e3e4b433" />



## 12. Video demostrativo



https://github.com/user-attachments/assets/ab6c1f60-d206-46ed-bb02-1e346a0d4af6



## 13. Dificultades y soluciones

Durante el desarrollo de nuestro proyecto tuvimos en cuenta diferentes aspectos técnicos necesarios para comprender el funcionamiento de un semáforo electrónico.

### Dificultad 1. Identificación de las conexiones electrónicas

Al trabajar con varios LED es necesario identificar correctamente las terminales positivas y negativas de cada componente. Una conexión incorrecta puede impedir que una luz funcione.

**Solución propuesta:** Identificar la polaridad de cada LED, revisar la distribución de los pines digitales y tener en cuenta la conexión a tierra para organizar correctamente el circuito.

### Dificultad 2. Organización de la secuencia de encendido

La programación debe establecer que las luces se activen en el orden correcto y que cada una tenga un tiempo determinado.

**Solución:** Organizamos las instrucciones de encendido, apagado y espera mediante las funciones de Arduino, teniendo en cuenta los tiempos establecidos para cada luz.

## 14. Conclusiones y estado actual del proyecto

El desarrollo de nuestro semáforo electrónico nos permitió trabajar con conocimientos fundamentales de electrónica, programación y automatización mediante el uso de Arduino UNO.

A través de este proyecto comprendimos la importancia de los microcontroladores en el control de dispositivos electrónicos y cómo, mediante instrucciones de programación, podemos establecer el funcionamiento automático de un sistema.

También estudiamos la identificación de componentes electrónicos, la conexión de LED, el uso de resistencias para limitar la corriente y la configuración de salidas digitales.

La programación nos permitió establecer una secuencia de funcionamiento con tiempos definidos de cinco segundos para la luz verde, dos segundos para la amarilla y cinco segundos para la roja.

Adicionalmente, elaboramos una maqueta tridimensional que complementó el diseño electrónico con una representación visual de cómo podría presentarse el prototipo terminado.

### Estado actual

Nuestro proyecto cuenta con el diseño del semáforo electrónico, el código de programación y una representación tridimensional del prototipo.

El montaje físico no se presenta como una implementación realizada. Por esta razón, la documentación describe el diseño, la programación y la propuesta de funcionamiento del sistema.

### Mejoras futuras

Como grupo consideramos que nuestro proyecto puede ampliarse mediante nuevas funcionalidades:

- Incorporar un botón para solicitar el paso peatonal.
- Agregar una pantalla LCD para mostrar el tiempo restante.
- Implementar un sistema de control para dos semáforos que regulen diferentes direcciones.
- Incorporar un zumbador para generar una señal sonora.
- Diseñar una estructura física que represente una intersección vial.
- Mejorar la programación para controlar diferentes tiempos según las necesidades del sistema.

En conclusión, este proyecto nos permitió comprender cómo se pueden integrar los componentes electrónicos con la programación para diseñar un sistema automatizado. Además, fue una oportunidad para fortalecer nuestros conocimientos, trabajar en equipo y aplicar lo aprendido durante el semestre en una propuesta relacionada con la regulación del tránsito.

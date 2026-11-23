 SEMÁFORO ELECTRÓNICO AUTOMATIZADO CON ARDUINO UNO

## 1. Nombre del proyecto

**Diseño y simulación de un semáforo electrónico automatizado utilizando Arduino UNO.**

El presente proyecto consiste en el diseño y desarrollo de un semáforo electrónico automatizado mediante una placa Arduino UNO, tres diodos LED de diferentes colores y un programa que controla la secuencia de encendido y apagado de cada luz.

El propósito principal es representar el funcionamiento de un semáforo convencional utilizando conocimientos de electrónica básica, programación de microcontroladores y automatización.

El sistema permite controlar las luces roja, amarilla y verde mediante una secuencia programada, simulando el comportamiento de un semáforo utilizado para regular el tránsito vehicular.

El proyecto fue desarrollado mediante simulación en Tinkercad y complementado con una representación tridimensional del prototipo.

---

## 2. Integrantes

- **Estudiante:** Ángel Gabriel Martínez Olandete.
- **Asignatura:** Mecatrónica.
- **Institución:** Corporación Universitaria Americana.
- **Proyecto:** Semáforo electrónico automatizado con Arduino UNO.
- **Año:** 2026.

---

## 3. Problema identificado

La regulación del tránsito es fundamental para mantener el orden y prevenir accidentes en las vías. Los semáforos cumplen una función importante porque permiten organizar el paso de vehículos y peatones mediante señales luminosas.

A partir de esta necesidad, se propuso desarrollar un semáforo electrónico automatizado que permitiera representar cómo funciona un sistema de control de tráfico utilizando componentes electrónicos y un microcontrolador.

El problema que se busca abordar mediante este proyecto es comprender cómo se puede automatizar un sistema de señalización mediante instrucciones programadas, logrando que diferentes luces se activen y desactiven en un orden establecido sin necesidad de intervención manual.

De esta manera, se busca aplicar los conocimientos adquiridos durante el semestre en electrónica, programación y sistemas de control.

## 4. Objetivos

### Objetivo general

Diseñar y simular un sistema de semáforo electrónico automatizado mediante una placa Arduino UNO, utilizando diodos LED y programación para controlar la secuencia de las señales luminosas.

### Objetivos específicos

- Identificar los componentes electrónicos necesarios para construir un semáforo automatizado.
- Comprender el funcionamiento de las salidas digitales de Arduino.
- Realizar las conexiones eléctricas de los tres LED utilizando resistencias de protección.
- Programar una secuencia automática para controlar las luces roja, amarilla y verde.
- Aplicar conceptos básicos de electrónica, programación y automatización.
- Representar el diseño del proyecto mediante una maqueta tridimensional.
- Comprobar mediante simulación el funcionamiento de las diferentes etapas del semáforo.

---

## 5. Descripción del funcionamiento

El proyecto funciona mediante una placa Arduino UNO, que actúa como el cerebro principal del sistema. Su responsabilidad es enviar señales eléctricas a los diferentes LED para controlar su encendido y apagado.

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

Este funcionamiento permite representar el comportamiento básico de un semáforo convencional mediante un sistema automatizado.

---

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
| Tinkercad | 1 plataforma | Permite diseñar y simular el circuito electrónico. |

---

## 7. Arquitectura del sistema

La arquitectura del proyecto está organizada en tres partes principales:

### 1. Unidad de control

La placa Arduino UNO funciona como el cerebro principal del sistema. Recibe el programa y ejecuta las instrucciones necesarias para controlar el semáforo.

### 2. Etapa de salida

Está conformada por los tres LED de colores. Cada uno se encuentra conectado a un pin digital diferente de Arduino mediante una resistencia de protección.

### 3. Alimentación y conexiones

El circuito utiliza la alimentación proporcionada por Arduino y una conexión común a tierra (GND), que permite completar los circuitos eléctricos.

La interacción entre estos elementos permite que el sistema funcione de manera automática y ordenada.

### Flujo general del sistema

```text
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
```

---

## 8. Diagrama de conexiones electrónicas

Para desarrollar el circuito se utilizaron tres salidas digitales de Arduino UNO.

### Distribución de los pines

| Luz del semáforo | Pin de Arduino |
|---|---|
| LED rojo | Pin digital 13 |
| LED amarillo | Pin digital 12 |
| LED verde | Pin digital 11 |

### Explicación detallada de las conexiones

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

**Nota:** En esta sección se debe insertar una captura real del circuito desarrollado en Tinkercad.

---

## 9. Desarrollo del software y explicación del código

El software del proyecto fue desarrollado utilizando el lenguaje de programación basado en C/C++ para Arduino UNO.

Su función principal es controlar automáticamente el encendido y apagado de tres luces LED, simulando el funcionamiento de un semáforo convencional.

El programa utiliza tres pines digitales de Arduino, cada uno conectado a un LED de diferente color.

### 9.1. Código fuente completo

**Archivo:** `codigo/semaforo.ino`


// Definición de los pines según tu conexión
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
```

### 9.2. Declaración de los pines


const int luzRoja = 13;
const int luzAmarilla = 12;
const int luzVerde = 11;
```

En esta parte se definen tres variables constantes que representan los pines digitales donde están conectados los LED.

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

```cpp
void loop() {
```

Esta función contiene las instrucciones principales del semáforo.

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

Mediante este código se logró establecer una secuencia automática de tres señales luminosas utilizando Arduino UNO. La programación permite controlar individualmente cada LED, establecer tiempos específicos de funcionamiento y repetir el proceso continuamente.

Este desarrollo demuestra la aplicación de conceptos fundamentales de programación de microcontroladores, control de salidas digitales y automatización.

---

## 10. Instalación y puesta en funcionamiento

Para reproducir el proyecto mediante Tinkercad se deben seguir los siguientes pasos:

1. Ingresar a la plataforma Tinkercad.
2. Acceder a la sección de circuitos.
3. Crear un nuevo circuito electrónico.
4. Agregar una placa Arduino UNO.
5. Incorporar tres LED de diferentes colores.
6. Agregar tres resistencias de 220 Ω o 330 Ω.
7. Realizar las conexiones correspondientes a los pines 13, 12 y 11.
8. Conectar los cátodos de los LED a GND.
9. Ingresar el código de programación en el editor de Arduino.
10. Iniciar la simulación.
11. Observar cómo se encienden las luces siguiendo la secuencia programada.

Para una implementación física, se debe realizar el mismo circuito utilizando los componentes electrónicos reales y alimentar correctamente la placa Arduino.

---

## 11. Pruebas realizadas

Para verificar el comportamiento del proyecto se establecieron tres pruebas principales mediante la simulación del circuito.

### Prueba 1. Encendido de la luz verde

**Objetivo:** Comprobar que el LED verde se encienda correctamente durante el inicio de la secuencia.

**Procedimiento:** Iniciar la simulación y observar el comportamiento del LED conectado al pin digital 11.

**Resultado esperado:** El LED verde debe encenderse durante cinco segundos, mientras los otros dos permanecen apagados.

**Resultado obtenido:** Documentar el resultado observado en Tinkercad.

**Evidencia:** Captura de pantalla de la simulación con el LED verde encendido.

### Prueba 2. Cambio de la luz verde a la amarilla

**Objetivo:** Comprobar que el sistema realice correctamente el cambio entre la luz verde y la amarilla.

**Procedimiento:** Mantener activa la simulación y observar el cambio de las luces después de los primeros cinco segundos.

**Resultado esperado:** La luz verde debe apagarse y la luz amarilla debe encenderse durante dos segundos.

**Resultado obtenido:** Documentar el resultado observado en Tinkercad.

**Evidencia:** Captura de pantalla de la simulación con el LED amarillo encendido.

### Prueba 3. Activación de la luz roja y reinicio del ciclo

**Objetivo:** Verificar que el sistema active la luz roja y posteriormente reinicie la secuencia.

**Procedimiento:** Observar el funcionamiento después de la etapa amarilla y comprobar el comportamiento al finalizar los cinco segundos de la etapa roja.

**Resultado esperado:** La luz roja debe encenderse durante cinco segundos. Después, el programa debe volver a activar la luz verde.

**Resultado obtenido:** Documentar el resultado observado en Tinkercad.

**Evidencia:** Capturas de pantalla de la luz roja encendida y del reinicio del ciclo.

### Tabla general de pruebas

| Prueba | Resultado esperado | Resultado obtenido |
|---|---|---|
| Encendido del LED verde | Encender durante 5 segundos. | Pendiente de documentar con evidencia real. |
| Activación del LED amarillo | Encender durante 2 segundos. | Pendiente de documentar con evidencia real. |
| Activación del LED rojo | Encender durante 5 segundos y reiniciar el ciclo. | Pendiente de documentar con evidencia real. |

**Nota:** Las pruebas corresponden a la validación mediante simulación. Los resultados definitivos deben registrarse después de observar cada comportamiento y adjuntar las capturas correspondientes.

---

## 12. Evidencias fotográficas y visuales

Las evidencias 
<img width="700" alt="Evidencia del proyecto" src="https://github.com/user-attachments/assets/ece49bd8-87ab-4f30-af66-1ac4e3e4b433" />


### Representación tridimensional

Como complemento al desarrollo electrónico, se elaboró una representación tridimensional del semáforo para mostrar cómo podría visualizarse el prototipo en una estructura física.

La maqueta permite representar la distribución de las luces, la organización del semáforo y su apariencia general.

Este diseño complementa el trabajo de simulación electrónica y permite visualizar una posible implementación física del proyecto.

**Importante:** Las imágenes deben corresponder al trabajo realmente realizado. La maqueta 3D y las capturas de Tinkercad se identifican como representaciones digitales, no como fotografías de un montaje físico.

---

## 13. Video demostrativo

Se propone realizar un video de entre tres y cinco minutos para presentar el desarrollo y funcionamiento del proyecto.

El video debe incluir:

1. Presentación del semáforo electrónico.
2. Explicación del problema y los objetivos.
3. Presentación de los componentes electrónicos.
4. Explicación de las conexiones realizadas.
5. Explicación del código de Arduino.
6. Demostración de la simulación y los cambios de las luces.
7. Presentación de la maqueta tridimensional.
8. Conclusiones sobre el desarrollo del proyecto.

**Enlace del video:** Pendiente de agregar.

---

## 14. Dificultades y soluciones

Durante el desarrollo de un proyecto de estas características pueden presentarse diferentes dificultades técnicas. A continuación, se describen dos aspectos importantes que deben revisarse durante el proceso de construcción y validación.

### Dificultad 1. Organización de las conexiones electrónicas

Al trabajar con varios LED es necesario identificar correctamente las terminales positivas y negativas de cada componente. Una conexión incorrecta puede impedir que una luz funcione.

**Solución:** Revisar la polaridad de cada LED, verificar las conexiones a los pines digitales y comprobar que todos compartan la conexión a tierra.

### Dificultad 2. Control de la secuencia de encendido

La programación debe garantizar que las luces se activen en el orden correcto y que no se produzcan combinaciones de señales no previstas.

**Solución:** Organizar las instrucciones de encendido, apagado y espera mediante las funciones de Arduino, verificando cada etapa durante la simulación.

---

## 15. Conclusiones y estado actual del proyecto

El desarrollo del semáforo electrónico permitió aplicar conocimientos fundamentales de electrónica, programación y automatización mediante el uso de Arduino UNO.

A través de este proyecto se comprendió la importancia de los microcontroladores en el control de dispositivos electrónicos y cómo, mediante instrucciones de programación, es posible automatizar un proceso que normalmente requiere la intervención de un sistema de control.

También se trabajó en la identificación de componentes electrónicos, la conexión de LED, el uso de resistencias para limitar la corriente y la configuración de salidas digitales.

La programación permitió establecer una secuencia de funcionamiento con tiempos definidos de cinco segundos para la luz verde, dos segundos para la amarilla y cinco segundos para la roja.

La simulación en Tinkercad permitió representar el circuito y comprobar visualmente la relación entre el código y el comportamiento de los componentes.

Adicionalmente, la elaboración de una maqueta tridimensional permitió complementar la parte electrónica con una representación visual de cómo podría presentarse el prototipo terminado.

### Estado actual

El proyecto cuenta con el diseño y la simulación del semáforo electrónico, además de su representación tridimensional.

El montaje físico no se presenta como una implementación realizada. Por esta razón, las evidencias técnicas corresponden al diseño digital y a las pruebas realizadas en el entorno de simulación.

### Mejoras futuras

El proyecto puede ampliarse mediante nuevas funcionalidades:

- Incorporar un botón para solicitar el paso peatonal.
- Agregar una pantalla LCD para mostrar el tiempo restante.
- Implementar un sistema de control para dos semáforos que regulen diferentes direcciones.
- Incorporar un zumbador para generar una señal sonora.
- Diseñar una estructura física que represente una intersección vial.
- Mejorar la programación para controlar diferentes tiempos según las necesidades del sistema.

En conclusión, este proyecto permitió comprender cómo se integran los componentes electrónicos con la programación para desarrollar un sistema automatizado. Además, representó una oportunidad para fortalecer los conocimientos adquiridos durante el semestre y aplicarlos en una solución práctica relacionada con la regulación del tránsito.





**Corporación Universitaria Americana – 2026.**

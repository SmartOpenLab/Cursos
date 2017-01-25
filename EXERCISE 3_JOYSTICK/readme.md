# ARDUINO BASIC COURSE (16/17)
---
######  JORGE BOTE ALBALÁ
###### MARÍA SALGUERO GALLEGO
### SMART OPEN LAB (SOL) EPCC (UEx)  
---
##### EJERCICIO 3: JOYSTICK

En este montaje vamos a aprender a usar los pines analógicos de Arduino. Esta señal analógica puede variar entre –Vcc y + Vcc, en nuestro caso desde 0v a 5v. 

El dispositivo que vamos a manejar tiene internamente dos potenciómetros que varían el voltaje de salida en función del giro de este, es decir, tendremos un valor entre 0 y 5 voltios, el cual transformaremos mediante un mapeado con un valor entre 0 y 1023.

Para este montaje necesitamos los siguientes componentes:

- 1 JOYSTICK
- 1 PLACA ARDUINO (uno)
- 1 PROTOBOARD
- 1 CABLE USB
- CABLES MACHO-MACHO

El esquema a seguir es el que se muestra en el siguiente archivo:

VER: ![Alt text](EXERCISE 3_JOYSTICK/ESQUEMA3_JOYSTICK.jpg?raw=true "ESQUEMA3_JOYSTICK")

Para este montaje vamos a diseñar un pequeño sistema que nos muestre hacia qué posición está accionado el joystick (norte, sur, este y oeste), en función de los valores que nos lleguen por los pines analógicos




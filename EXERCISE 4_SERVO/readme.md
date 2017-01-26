# ARDUINO BASIC COURSE (16/17)
---
######  JORGE BOTE ALBALÁ
###### MARÍA SALGUERO GALLEGO
### SMART OPEN LAB (SOL) EPCC (UEx)  
---
##### EJERCICIO 4: SERVOMOTOR

Con el montaje de este circuito vamos a aprender a enviar pulsos a un servomotor utilizando para ello una biblioteca que nos simplifica el uso y manejo de los aparatos, estas bibliotecas pueden ser usadas para multitud de dispositivos, en nuestro caso echaremos mano de la biblioteca <Servo.h>.

Un servomotor es un motor de corriente continua que incorpora un potenciómetro que le permite controlar la velocidad. Para controlar este potenciómetro se envían pulsos cada 20ms, o lo que es lo mismo a una frecuencia de 50Hz, la anchura del pulso codifica el ángulo de giro, es decir lo que se conoce como PWM (Pulse Width modulation), o codificación por ancho de pulso. Dependiendo del modelo del servomotor esta anchura varía, pero suele estar en el intervalo entre 0.5 y 2.5ms (consultar el datasheet del servo). 

Para no tener la tarea de pelearnos con los pulsos usaremos los métodos proporcionados por la biblioteca Servo.h:

* Attach(pin): Indica el pin al que está conectado el servo.
* Detach(): Desconecta el servo del control del arduino.
* Attached(): Comprueba si el servo está conectado a un pin.
* Write(angulo): Indica al servo a que ángulo, en grados, quiere moverse.
* Read(): Devuelve el ángulo en el que se encuentra el servo.

Para el montaje vamos a necesitar los siguientes componentes electrónicos:
- 1x Placa Arduino Uno
- 1x Cable USB
- 3x Cable Macho-Macho

Para este montaje vamos a diseñar un pequeño sistema que varíe el ángulo del servo comenzando por el ángulo 0, e incrementándolo cada segundo 10 grados hasta llegar a 180 grados, posteriormente volverá al ángulo 90 durante 2 segundos, y por último se pondrá a 45 grados e inmediatamente después a 135 grados.
 
Siguiendo el siguiente esquema, vamos a tener una alimentación de 5 voltios, una conexión de masa, y una conexión a un pin PWM, conectados a los mismos del servo:
   
![Alt text](ESQUEMA4_SERVOMOTOR.jpg?raw=true "ESQUEMA4_SERVO")






# ARDUINO BASIC COURSE (16/17)
---
######  JORGE BOTE ALBALÁ
###### MARÍA SALGUERO GALLEGO
### SMART OPEN LAB (SOL) EPCC (UEx)  
---
##### EJERCICIO 5: ULTRASONIDOS

Con el montaje de este circuito vamos a manejar un envío y una recepción de datos a través de los pines del arduino. Nos valdremos de un par de funciones muy valiosas:

-  PulseIn: nos devuelve el tiempo transcurrido entre el envío de un pulso y la recepción de otro, para nuestro caso será el retorno del pulso.
-  DelayMicrosenconds: utilizada para establecer tiempos de espera muy cortos.

Un sensor de ultrasonidos, se basa en el mismo principio que utilizan los murcielagos para guiarse y volar: emite un pulso ultrasonico, imperceptible para el oido humano, y cuando choca con algún objeto rebota. Este rebote es captado por un receptor. Capturando el tiempo invertido en el proceso y utilizando la velocidad de propagación del sonido en el aire, podremos calcular las distancias entre el sensor y los objetos.
  
Para el montaje vamos a necesitar los siguientes componentes electrónicos:
- 1x Placa Arduino Uno
- 1x Cable USB
- 1x Protoboard
- 4x Cable Macho-Macho
- 1x Sensor Ultrasonidos

Para este montaje vamos a diseñar un pequeño sistema que calcule la distancia desde el sensor a un objeto, además si el objeto se encuentra cerca hará parpadear el led interno del arduino, mientras que si su posición es muy lejana el led estará encendido. Seguiremos el siguiente esquema:

VER: ESQUEMA5_ULTRASONIDOS.jpg
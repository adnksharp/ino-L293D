# L293D
[![l293d-bb.png](https://i.postimg.cc/FFMgbrkY/l293d-bb.png)](https://postimg.cc/z3kg81jN)


Uso del modulo L293D para controlar la dirección y velocidad de dos motores.

## Hardware y software necesarios
- Placa de desarrollo Arduino.
- 2 motores 12V.
- 1 Fuente de alimentación de 12V.
- Modulo L293D.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
### Variables
- ```motor```: Matriz que contiene los pines de las entradas del modulo L293D.
- ```c``` e ```i```: Variables para funcionamiento de bucles.
- ```f``` y ```g```: Variables para controlar la velocidad de los motores.
- ```right```: Variable para controlar la dirección de los motores.

### Funcionamiento
#### Speed
Usando la función **analogWrite** y la variable ```g``` se controla la velocidad de los motores. Para esto la variable ```g``` varia de 0 a 255 y de 255 a 0 usando la variable ```f``` que cambia entre -1 y 1.
```arduino
for (c = 0; c < 2; c++)
        analogWrite(motor[c][0], g);
```
#### Direction
Para controlar la dirección de los motores se usa la variable ```right``` que cambia entre 0 y 1. Si ```right``` es 1 los pines motor[0][1] y motor[1][1] se ponen a 1 y los pines motor[0][2] y motor[1][2] se ponen a 0. Si ```right``` es 0 los pines motor[0][2] y motor[1][2] se ponen a 1 y los pines motor[0][1] y motor[1][1] se ponen a 0.

[![l293d-esquem-tico.png](https://i.postimg.cc/CMBsfB5y/l293d-esquem-tico.png)](https://postimg.cc/V5wCxNX4)

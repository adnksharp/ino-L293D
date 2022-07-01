# L293D
[![l293d-bb.png](https://i.postimg.cc/FFMgbrkY/l293d-bb.png)](https://postimg.cc/z3kg81jN)
Uso de un L293D para controlar la dirección y velocidad de dos motores.

# Dirección
Para controlar la dirección de un motor, es necesario poner una salida de cada motor en 1 y en 0 la otra salida. Mientras que para invertir la dirección de un motor, es necesario invertir las salidas de cada motor.

Para esto, primero se ponen en 0 las salidas de cada motor y luego se ponen en 1 las salidas de los motores que se quieren invertir usando como referencia una variable de tipo bool que cambia cada 5.1s.

```arduino
digitalWrite(motor1_dir1, HIGH); 
    digitalWrite(motor1_dir2, LOW);
digitalWrite(motor2_dir1, HIGH); 
    digitalWrite(motor2_dir2, LOW);
delay(5100);

digitalWrite(motor1_dir1, LOW); 
    digitalWrite(motor1_dir2, HIGH);
digitalWrite(motor2_dir1, LOW); 
    digitalWrite(motor2_dir2, HIGH);
delay(5100);
```

# Velocidad
Para controlar la velocidad de un motor, se necesita una salida de tipo PWM que se puede controlar con una variable de tipo byte que cambia cada 20ms de 0 a 255 y de 255 a 0.

```arduino
g++ || g--;
analogWrite(motor, g);
```


[![l293d-esquem-tico.png](https://i.postimg.cc/CMBsfB5y/l293d-esquem-tico.png)](https://postimg.cc/V5wCxNX4)
# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? no, ya que en c++ el operador modulo solo funciona con números enteros. 
¿Se puede usar con números negativos?si, si se puede
 Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; |   7    |
   | 0        | 100      | cout << 0 % 100; |   0    |
   | 100      | 0        | cout << 100 % 0; | error  |
   | -3       | 3        | cout << -3 % 3;  |    0   |
   | 9        | 4.5      | cout << 9 % 4.5; |    1   | porque la variable es entera y no acepta decimales
   | 16       | 2        | cout << 16 % 2;  |    0   |


   respecto al punto 3, da error ya que el operador modulo busca los residuos de una division y al no poder dividirse ningun número entre 0 marca error  

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if? marca error ya que despues de la declaracion van llaves 

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

## ✅ Resultado

![Texto alternativo](./ejecucion2.png)

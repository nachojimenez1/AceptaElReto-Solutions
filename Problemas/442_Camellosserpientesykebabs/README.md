# [442] Camellos, serpientes y kebabs

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=442)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.024 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1132643` |
| **Fecha de resolución** | `3/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000 sMemoria máxima: 4096 KiB`

Lador, el "compi" con quien hago las prácticas de
      programación, me dice que hay que poner nombres de variables
      significativos, que ayuden a entender qué guarda cada
      una. Siempre me critica si uso identificadores como i,
      otra o aux.

Para darle un escarmiento, intenté poner una variable que se
      llamaba
      suma de los impares menores que n. Pero
      el compilador me gritó cosas muy feas que no entendí. Cuando
      preguntamos a la profesora nos dijo que no se podían poner
      espacios en los nombres. Si queríamos poner nombres con varias
      palabras (aunque nos dijo que no pusiéramos tantas) entonces
      teníamos que usar algún truco para que el nombre se leyera bien
      sin los espacios.

Nos contó que hay varias formas, y se usa una u otra dependiendo
      de las preferencias personales, o del convenio usado en el
      lenguaje. Y nos soltó un sermón sobre las mayúsculas del
      camello, serpientes y kebabs que nos dejaron muy
      confundidos. Buscando luego en Internet vimos que hay
      principalmente tres opciones:

Lo peor de todo fue que a Lador, después de que la profesora nos
      contara todo esto, se le ocurrió la feliz idea de preguntarle
      cuántos espacios utilizar para sangrar el código, y en qué línea
      colocar las llaves. Al final, terminamos perdiendo el autobús.


### Entrada

Cada caso de prueba es un nombre de variable en alguna de las
      tres notaciones anteriores seguida de la notación a la que se
      quiere convertir (CamelCase, snake_case o
      kebab-case).

Ningún nombre de variable tendrá más de 20 caracteres y se
      garantiza que será correcta en alguna de las notaciones.


### Salida

Para cada caso de prueba se escribirá el nombre de la variable
      en la notación solicitada. Tanto en la entrada como en la salida
      se utilizará UpperCamelCase (y no lowerCamelCase).


### Entrada de ejemplo

```text
MiVar snake_case
es_primo kebab-case
suma-de-impares CamelCase
j CamelCase
```


### Salida de ejemplo

```text
mi_var
es-primo
SumaDeImpares
J
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

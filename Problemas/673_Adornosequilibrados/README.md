# [673] Adornos equilibrados

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=673)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.292 segs.` |
| **Memoria consumida** | `7288 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1132485` |
| **Fecha de resolución** | `3/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 8192 KiB`

Después de varias horas dando vueltas por distintos puestos,
      acabas de hacerte con un flamante árbol de Navidad nuevo. Pero
      ahora se ha hecho tarde y tienes solo un momento para comprar
      los adornos que colgarás.

Estás enfrente de un puesto donde tienen un montón de ellos,
      todos en fila y todos al mismo precio. Con tu esquilmado
      presupuesto (no has escatimado en gastos con el árbol) sabes
      exactamente cuántos podrás adquirir y, para no perder mucho
      tiempo, has decidido que los cogerás todos contiguos en la fila
      de la tienda.

El problema es que también los colocarás en el árbol en el mismo
      orden y te da miedo que, al tener distintos pesos, el árbol se
      te desequilibre y se vuelque. Por eso, quieres comprar una
      secuencia de adornos tal que los primeros pesen exactamente lo
      mismo que los últimos.


### Entrada

El programa deberá leer, de la entrada estándar, múltiples casos
      de prueba, cada uno ocupando dos líneas.

La primera contiene dos números. El primero,
      2 ≤ n ≤ 700.000, indica
      la cantidad de adornos para el árbol que tienen
      colocados, en fila, en la tienda. El segundo,
      2 ≤ c ≤ n, indica
      cuántos adornos vas a comprar.

La segunda línea del caso de prueba tiene n números,
      menores que 100, con el peso de cada uno de los adornos, en el
      orden en el que están colocados en la tienda.


### Salida

Por cada caso de prueba el programa escribirá la posición del
      primer adorno que tienes que comprar, de modo que los c
      adornos a partir de ese puedan ser separados en dos partes
      consecutivas cuyos pesos sean exactamente el mismo. Si hay
      varias posibles respuestas, se dará aquella que tenga un mayor
      peso (¡burro grande, ande o no ande!). Si, aun así, sigue
      habiendo varias opciones se dará la menor posible (la situada
      antes en la entrada).

Se considera que el primer adorno de la lista está en la
      posición 1. Si no hay ninguna solución, se escribirá "SIN
      ADORNOS"


### Entrada de ejemplo

```text
4 2
1 2 2 1
4 2
1 2 1 2
7 3
2 1 1 6 3 3 6
```


### Salida de ejemplo

```text
2
SIN ADORNOS
4
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

# [167] Pintando fractales

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=167)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.048 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1131718` |
| **Fecha de resolución** | `1/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

Un fractal es un objeto geométrico cuya estructura básica se
      repite a diferentes escalas. Los fractales, conocidos por los
      matemáticos desde principios del siglo XX, llegaron al gran público
      con el auge de los ordenadores pues permiten generar figuras vistosas
      utilizando fórmulas matemáticas.

La figura que hoy nos planteamos, no obstante, no es de una gran
      vistosidad. Consiste en un simple cuadrado de longitud l cuyas
      cuatro esquinas son el centro de otros tantos cuadrados de
      longitud l/2. Las esquinas de cada uno de ellos, a su vez, son
      el centro de otros cuatro cuadrados con longitud l/4, y así
      sucesivamente hasta llegar a cuadrados de longitud 1. La
      figura se construye de tal forma que las longitudes son
      siempre enteras, por lo que si empezamos con un cuadrado de
      longitud, pongamos, 5, los cuadrados siguientes serán de
      longitud 2.

La imagen muestra la figura generada si empezamos con un
      cuadrado cuyo lado tiene longitud 10. Los cuadrados en sus
      esquinas tienen longitud 5, los siguientes tienen longitud 2
      para terminar con los cuadrados más pequeños con lados de
      longitud 1. Se han marcado una sucesión de cuadrados según van
      disminuyendo de tamaño (hacia arriba y a la derecha) para poner
      de manifiesto esta reducción y la repetición del patrón.

La pregunta que nos hacemos es la cantidad de tinta que
      necesitaremos para pintar la figura dada la longitud del
      cuadrado más grande. O, dicho de otra forma, cuál es la suma de
      las longitudes de los lados de todos los cuadrados.


### Entrada

La entrada contiene varios casos de prueba. Cada uno aparece en
      una línea independiente que contiene un número con la longitud
      de los lados del cuadrado más grande que hay que pintar.


### Salida

Para cada caso de prueba se deberá escribir la suma de las
      longitudes de los lados de todos los cuadrados que forman la
      figura. Se garantiza que esa longitud será menor que 231.


### Entrada de ejemplo

```text
1
3
5
```


### Salida de ejemplo

```text
4
28
116
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

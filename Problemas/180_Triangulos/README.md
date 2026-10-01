# [180] Triángulos

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=180)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.008 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1131471` |
| **Fecha de resolución** | `1/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

Es bien sabido que la suma de los ángulos de cualquier triángulo
      es siempre 180 grados. En función del ángulo mayor, los
      triángulos se pueden clasificar en tres tipos:

¿Eres capaz de, a partir de la longitud de tres segmentos, decir el tipo de triángulo que forman?


### Entrada

La entrada consistirá en un primer número indicando el número de
      casos de prueba que vendrán después.

Cada caso de prueba ocupará una línea, y estará compuesto de
      tres números enteros no negativos menores que
      215 − 1, separados por espacios y
      no necesariamente ordenados. Cada entero representará la
      longitud de cada uno de los lados de un triángulo.


### Salida

Para cada caso de prueba, el programa indicará el tipo de
      triángulo, escribiendo ACUTANGULO, RECTANGULO
      u OBTUSANGULO. Si resulta imposible formar un triángulo
      con esos segmentos, escribirá IMPOSIBLE.


### Entrada de ejemplo

```text
4
3 4 4
5 3 4
3 4 6
3 4 7
```


### Salida de ejemplo

```text
ACUTANGULO
RECTANGULO
OBTUSANGULO
IMPOSIBLE
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

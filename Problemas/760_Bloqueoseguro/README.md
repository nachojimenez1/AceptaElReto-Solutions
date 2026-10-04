# [760] Bloqueo seguro

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=760)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.544 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1132752` |
| **Fecha de resolución** | `4/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

Jerry Fletcher es un taxista paranoico que ve conspiraciones en
      todos los sitios. Pese a eso, siempre lleva un móvil, y no se ha
      parado a pensar en la posibilidad de que aquellos que quieren
      controlar el mundo puedan estar escuchando sus conversaciones a
      través de él. Que sea un paranoico no significa que tenga que
      ser coherente.

Eso sí, le ha puesto un código de bloqueo para que si en algún
      momento se lo roban, nadie pueda indagar en su historial de
      navegación o en sus mensajes. Cuando se activa el móvil, éste
      muestra una cuadrícula de 3×3 puntos en los que se graba
      el patrón. Éste consiste en una figura creada deslizando el dedo
      por encima de los puntos. Jerry tiene los dedos finos y puede ir
      desde cualquier punto a cualquier otro aunque haya otros en
      medio. Eso sí, el móvil no permite que el patrón de desbloqueo
      tenga dos veces el mismo punto.

Pese a haber puesto el patrón de desbloqueo, se sigue sintiendo
      inseguro. Piensa que la CIA, el FBI o alguna otra agencia
      gubernamental de cualquier país puede dedicarse a probar todas
      las opciones para conseguir desbloquear su dispositivo tras
      quitárselo. Ha preguntado a Alice Sutton si sabe el número de
      patrones existentes, para quedarse más tranquilo, pero Alice le
      ha dicho que ella es solo una abogada del Departamento de
      Justicia, y las matemáticas no se le dan bien.


### Entrada

La entrada comienza con un número indicando la cantidad de casos
      de prueba que vendrán a continuación. Cada uno está compuesto
      por tres números. El primero,
      1 ≤ T ≤ 5000, indica el
      número de filas y columnas de la cuadrícula de puntos que
      muestra el móvil para dibujar el patrón. Los dos siguientes,
      1 ≤ A ≤ B ≤ T×T,
      indican la menor y mayor longitud (en número de puntos) del
      patrón de desbloqueo que el móvil permite establecer.

Entre todos los casos de prueba, la suma de las distancias entre la menor y mayor longitud de
      los códigos de desbloqueo puede llegar a 15×106.


### Salida

Por cada caso de prueba el programa escribirá el número de
      posibles patrones que se pueden crear. Como el resultado puede
      ser muy alto se dará módulo 1.000.000.007.


### Entrada de ejemplo

```text
3
3 1 1
3 1 2
5 6 7
```


### Salida de ejemplo

```text
9
81
550239986
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

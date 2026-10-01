# [104] Móviles

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=104)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.012 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1131724` |
| **Fecha de resolución** | `1/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000 sMemoria máxima: 4096 KiB`

Antes de ser ese dispositivo de comunicación tan extendido, se entendía por móvil una estructura hecha con alambres y cuerdas de las que colgaban figuras coloridas, y que se colocaban sobre las cunas de los bebés para estimularles y entretenerles.

La figura representa un móvil simple. Tiene un único alambre colgado de una cuerda, con un objeto a cada lado. En realidad se puede ver como una "balanza" con el punto de apoyo en el sitio donde la cuerda está unida al alambre. Según el principio de la palanca, sabemos que está en equilibrio si el producto del peso de los objetos por sus distancias al punto de apoyo son iguales. Es decir si consideramos pi como el peso colgado en el lado izquierdo, pd el peso del lado derecho, y di la distancia desde el peso izquierdo a la cuerda y dd de la cuerda al peso derecho, podremos decir que el móvil está en equilibrio si se cumple que pi × di = pd × dd.

En móviles más complejos, cada peso puede ser sustituido por un "submóvil". En este caso se considera el peso del submóvil como la suma de los pesos de todos sus objetos, despreciando la cuerda y los alambres. Y consideraremos que está balanceado si pi × di = pd × dd y, además los submóviles de la izquierda y los de la derecha estan a su vez balanceados.

En ese caso no es tan trivial averiguar si está o no balanceado, por lo que te pedimos que nos escribas un programa que, dada una descripción de un móvil como entrada, determine si está o no en equilibrio.


### Entrada

La entrada está compuesta por una sucesión de casos de prueba, cada una representando un móvil.

Un móvil se describe con una o más líneas, cada una de ellas conteniendo cuatro números enteros positivos, separados por un único espacio. Esos cuatro enteros representan las distancias de los extremos al punto de apoyo, así como sus pesos, en el orden pi, di, pd, dd.

Si pi o pd (alguno de los pesos) es 0, en el extremo habrá colgado un submóvil, que estará descrito a continuación.  Si un móvil tiene un submóvil en cada lado, primero se describirá el submóvil izquierdo.

La entrada finalizará con un móvil especial, 0 0 0 0, indicando que no tiene pesos ni distancias y, por tanto, no hay móvil.


### Salida

Para cada caso de prueba, el programa indicará SI si el móvil que representa está en equilibrio, y NO en otro caso. Recuerda que se dice que un móvil está en equilibrio si todos sus submóviles y él mismo lo están.


### Entrada de ejemplo

```text
0 2 0 4
0 3 0 1
1 1 1 1
2 4 4 2
1 6 3 2
0 1 3 4
2 3 3 2
0 0 0 0
```


### Salida de ejemplo

```text
SI
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*

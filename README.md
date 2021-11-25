
# SUMA VECTORIAL

## Sobre el proyecto

Este proyecto contiene dos progamas C++ para el cálculo de la suma vectorial.  Uno de ellos utiliza una versión tradicional de suma vectorial, mientras que el otro hace uso de intrínsecos SIMD de GCC. El objetivo de este proyecto es comparar los tiempos de ejecución de ambas versiones.



## Diseñado con 
* [C++](https://www.cplusplus.com/)
* [Intrínsecos GCC](https://gcc.gnu.org/onlinedocs/gcc/Vector-Extensions.html)


## Prerequisitos

* gcc

	Linux:
  ```sh
  sudo apt-get install gcc
  ```
	Mac:
  ```sh
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```
	Windows:

	Descargar e instalar [MinGW](https://sourceforge.net/projects/mingw/)

## Uso
* Primera opción:
1. Compilar los proyectos usando GNU Compiler Collection
	 ```sh
  	gcc sumaVectorial.cpp -o nombre-ejecutable1
	gcc sumaVectorialSIMD.cpp -o nombre-ejecutable2
 	 ```
	
2. Ejecución
   ```sh
   ./nombre-ejecutable1 > output.txt
   ./nombre-ejecutable2 > outputSIMD.txt
   ```
* Segunda opción: ejecutar el .sh directamente:
     ```sh
   ./sumaVectorial.sh
   ./sumaVectorialSIMD.sh
    ```
## Descripción de archivos

* [sumaVectorial.cpp](sumaVectorial.cpp) - programa que realiza la suma vectorial en C++
* [sumaVectorialSIMD.cpp] - programa que realiza la suma vectorial en C++ con incorporación de SIMD
* output.txt - contiene los tiempos de ejecución de sumaVectorial.cpp
* outputSIMD.txt - contiene los tiempos de ejecución de sumaVectorialSIMD.cpp
* sumaVectorial.sh - contiene las instrucciones descritas en el apartado Uso
* sumaVectorialSIMD.sh - contiene las instrucciones descritas en el apartado Uso
* resultados.xlsx - hoja de cálculo con algunos resultados significativos de las ejecuciones y una representación gráfica


## Resultados

Los tiempos de ejecución para distintas cantidades de sumas se guardarán en output.txt y outputSIMD.txt para la versión tradicional y la versión SIMD respectivamente.

En una de las ejecuciones obtuvimos los siguientes tiempos:
	*Versión sin SIMD: 218,083455 segundos (para 100.000 sumas)
	*Versión con SIMD: 0,857616 segundos (para 100.000 sumas)

Siendo la versión SIMD aproximadamente 256 veces más rápida que la versión tradicional.

En el archivos resultados.xlsx hemos comparado los tiempos de ejecución para 1, 1.000, 5.000, 10.000, 20.000, 50.000 y 100.000 sumas. Generando al siguiente representación gráfica:

![](https://www.linkpicture.com/q/grafica_1.jpg)

Aproximadamente a partir de 262 sumas es más efectivo utilizar sumaVectorialSIMD.cpp, pues su tiempo de ejecución a penas crece con respecto al número de sumas. 

## Autores

Ane Romero  - aromero066@ikasle.ehu.eus

Diego Sanz - dsanz016@ikasle.ehu.eus

Natalia Sebastián  - nsebastian004@ikasle.ehu.eus





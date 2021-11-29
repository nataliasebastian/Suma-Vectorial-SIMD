
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
	MacOS:
  ```sh
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```
	Windows:

	Descargar e instalar [MinGW](https://sourceforge.net/projects/mingw/)

## Descripción de archivos

* [sumaVectorialIndividual.cpp](sumaVectorialIndividual.cpp) - programa que realiza 1 suma vectorial en C++
* [sumaVectorialIndividualSIMD.cpp](sumaVectorialIndividualSIMD.cpp) - programa que realiza 1 suma vectorial en C++ con incorporación de SIMD
* [sumaVectorial.cpp](sumaVectorial.cpp) - programa que realiza 100.000 sumas vectoriales en C++
* [sumaVectorialSIMD.cpp](sumaVectorialSIMD.cpp) - programa que realiza 100.000 sumas vectoriales en C++ con incorporación de SIMD
* [output.txt](output.txt) - contiene los tiempos de ejecución de sumaVectorial.cpp
* [outputSIMD.txt](outputSIMD.txt) - contiene los tiempos de ejecución de sumaVectorialSIMD.cpp
* [sumaVectorial.sh](sumaVectorial.sh) - contiene las instrucciones descritas en el apartado Uso
* [sumaVectorialSIMD.sh](sumaVectorialSIMD.sh) - contiene las instrucciones descritas en el apartado Uso
* [resultados.xlsx](resultados.xlsx) - hoja de cálculo los tiempos obtenidos en las ejecuciones y representaciones gráficas

## Uso
* Primera opción:
1. Compilar los proyectos usando GNU Compiler Collection
	 ```sh
  	g++ -O0 sumaVectorial.cpp -o nombre-ejecutable1
	g++ -O0 sumaVectorialSIMD.cpp -o nombre-ejecutable2
 	 ```
	
2. Ejecución
   ```sh
   ./nombre-ejecutable1 > output.txt
   ./nombre-ejecutable2 > outputSIMD.txt
   ```
* Segunda opción: ejecutar el .sh directamente (solo disponible para Linux y MacOS)
     ```sh
   ./sumaVectorial.sh
   ./sumaVectorialSIMD.sh
    ```



## Resultados

Los tiempos de ejecución para distintas cantidades de sumas se guardarán en output.txt y outputSIMD.txt para la versión tradicional y la versión SIMD respectivamente. 

En una de las ejecuciones obtuvimos los siguientes tiempos:
* Versión sin SIMD: 218,508762  segundos (para 100.000 sumas)
* Versión con SIMD: 0,881725 segundos (para 100.000 sumas)

Siendo la versión SIMD aproximadamente 192 veces más rápida que la versión tradicional.

En el archivo [resultados.xlsx](resultados.xlsx) hemos comparado los tiempos de ejecución generando la siguiente representación gráfica:

![](https://www.linkpicture.com/q/grafica_1.jpg)

Aproximadamente a partir de 248 sumas es más efectivo utilizar sumaVectorialSIMD.cpp, pues su tiempo de ejecución a penas crece con respecto al número de sumas. 

## Autores

Ane Romero  - aromero066@ikasle.ehu.eus

Diego Sanz - dsanz016@ikasle.ehu.eus

Natalia Sebastián  - nsebastian004@ikasle.ehu.eus





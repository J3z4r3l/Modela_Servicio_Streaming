# 🌆 Modelo Servicio de Streaming

Bienvenido al repositorio del **Proyecto Final de Programacion Orientada a Objetos**. El objetivo de este proyecto fue utilizar el lenguaje de
programación C + + y la programación orientada a objetos para crear un programa en el que se
pueden guardar estos vídeos y que un usuario pueda fácilmente acceder a ellos para ver sus
características como su duración o su género. Para este proyecto aplicamos la programación
orientada a objetos este tipo de programación se enfoca en utilizar clases para reducir cuanto
código se tiene que escribir.

## Argumentación

A) Se identifican de manera correcta las clases a utilizar
Decidimos utilizar una clase de Videos, otra de Series y otra de Películas. La clase Video tiene
atributos que puedan ser utilizados en las otras dos clases. Y las clases de Series y Películas
tienen sus atributos y métodos en público.
B) Se plantea de manera correcta el concepto de Herencia
Como se mencionó en el inciso a) la clase Video hereda sus atributos a la clase Película y clase
Series para de esta manera disminuir la cantidad de código y que sea más funcional.
C) Se emplea de manera correcta los modificadores de acceso
Se han implantado distintos modificadores públicos por todo el programa. Casi todos los
atributos fueron heredados de la Clase Video pero también cada clase tiene su propios métodos y
atributos
D) Se emplea de manera correcta la sobreescritura de métodos
En la clase Video se utilizó un “virtual void” que lo convierte en una clase abstracta. Se
sobreescriben los valores del virtual void en las otras clases.
E) Se emplea de manera correcta el concepto de Polimorfismo
El polimorfismo se encuentra dentro del programa, por ejemplo el “changeCalificación” es una
función heredada, sin embargo es distinta para cada una de las clases.
F) Se emplea de manera correcta el concepto de Clases Abstractas
Utilizamos un método virtual llamado changeCalificacion decidimos que este método lo
haríamos virtual ya que para las series se califican los episodios y no las series pero si se
califican las películas entonces podemos observar sobrescritura y el uso de clases abstractas en
este método.
G) En el program principal se utilizan funciones para cada opción del menú
Para cada opción del menú, se utilizaron los métodos para llamar las diferentes clases dentro de
cada if statement.
H) Dentro del programa manejamos excepciones a la hora de calificar videos. Si el usuario
introduce un número que está fuera del rango de calificaciones que maneja el programa (1-5) se
despliega un mensaje de error también manejamos excepciones a la hora de buscar películas y
series. Cuando el programa pide que atributo quiere utilizar para buscar videos si el usuario
introduce un número que está fuera del rango (1-3) se despliega un mensaje de error similar

## Diagrama UML

![Diagrama UML](Simulink_Reto.jpg)

## Requisitos

- C++

## Colaboradores
Aaron Inzunza Inzunza - A01114528

Julian Lawrence Gil Soares - A00832272

José Jezarel Sánchez Mijares - A01735226

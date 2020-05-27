#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//La estructura para el registro alumno

struct Alumno { //nombre de la estructura
  char nombre[20];
  int edad;
  float promedio;
}alumnos[3];

int f53(){
  setlocale(LC_ALL, "es_ES");
  //variables locales
  int i, pos;
  float mejorNota = 0.0;

  /* El for es para trabajar 3 registros,
   * si desean más pueden agregar en lugar de 3
   * pueden ser 10 o los que ustedes necesiten,
   * lo único que deben hacer es agregar el número de registros que necesitan.
  */

  //arreglo para tres registros
  
  //Aqui se CAPTURA la base de datos
  printf("\n********Captura:Base de datos Promedio*********\n");
  for (int i = 0; i < 3; ++i) {
    printf("\nCaptura registro numero: %i\n", i+1);
    printf("\n******************************\n");
    fflush(stdin);
    printf("%i. Digite su nombre:", i+1);
    scanf(" %s", &alumnos[i].nombre);
    printf("%i. Digite su edad: ", i+1);
    scanf("%i", &alumnos[i].edad);
    printf("%i. Digite su promedio: ",i+1);
    scanf("%f", &alumnos[i].promedio);
    printf("\n");
    printf("\n******************************\n");
  }
  //Aqui se IMPRIME la base de datos
  printf("\n********Reporte:Base de datos Promedio*********\n");
  for (int i = 0; i < 3; ++i) {
    //compara la edad, buscando el mejor promedio
    if (alumnos[i].promedio > mejorNota) {
      mejorNota = alumnos[i].promedio;
      pos = i;
    }
  }
  //Imprimimos los datos del mejor promedio
  system("cls");//limpiar pantalla
  //Aqui se IMPRIME la base de datos
  printf("\n********Reporte de la base de datos Promedio*********\n");
  printf("\n****************************************\n");
  printf("\nEl alumno con la mejor nota es: \n");
  printf("\n****************************************\n");
  printf("\nNombre: %s\n", alumnos[pos].nombre);
  printf("\nEdad: %i\n", alumnos[pos].edad);
  printf("\nPromedio: %.2f\n\n", alumnos[pos].promedio);
  printf("\n****************************************\n");
  printf("\n\n\n");
  //mensaje de salida
  system("pause");
  return 0;
}

//La estructura para un registro
struct Corredor {
  char nombre[20], club[20], sexo[10];
  int edad;
}corredor1;

//Programa principal, captura e impresion de la base de datos un solo registro

void f6() {
  /* Programa 52: Corredor
   * Estructuras y registros
   * Autor: David Uziel Guevara Hernández
   * No. Lista: 10
   */
  char categoria[20];
  printf("\n**********Captura: Base de datos**********\n\n\n");
  printf("Digite su nombre: \n");
  scanf(" %s", &corredor1.nombre);
  printf("Digite su edad: \n");
  scanf("%i", &corredor1.edad);
  fflush(stdin);
  printf("Digite su sexo: \n");
  scanf(" %s", &corredor1.sexo);
  printf("Digite su sexo: \n");
  scanf(" %s", &corredor1.club);
  //Categoria de competición de acuerdo a la edad
  if (corredor1.edad<=18) {
    strcpy(categoria, "Senior");//categoria = señor
  } else {
    strcpy(categoria, "Veterano");
  }
  system("cls");//limpiar pantalla

  //Un solo registro
  printf("\n**********Reporte: Base de datos**********\n\n");
  printf("\n******************************************");
  printf("\nSu categoria es: %s", categoria);
  printf("\n******************************************\n\n");
  printf("\nSu nombre es %s", corredor1.nombre);
  printf("\nSu edad es: %i", corredor1.edad);
  printf("\nSu sexo es: %s", corredor1.sexo);
  printf("\nSu club es: %s", corredor1.club);
  printf("\n******************************************\n\n\n\n");
  system("pause");
}
 
//Inicio de f5
void chiste01() {
  printf("Un señor va por el campo con su mula y su perro\n");
}
void chiste02() {
  printf("La mula, muy cargada, no puede mas y se para\n");
  printf("hincando las rodillas en tierra, a punto de desplomarse\n");
}

void chiste03() {
  printf("años en los que te he ayudado fielmente, sin\n");
  printf("flaquear ni una sola vez hasta hoy, que estoy\n");
}

void chiste04() {
  printf("-¡¡Joder!!--dice el perro--, ¡¡Menudo susto nos\n");
}

void chiste05() {
  printf("ya cansada y mayor?\n");
  printf("El hombre se asusta y sale corriendo con el perro\n");
}

void chiste06() {
  printf("a su lado. Se detienen casi medio kilómetro más\n");
  printf("lejos, apoyándose en un árbol mientra intentan\n");
  printf("recuperar el aliento.\n");
}

void chiste07() {
  printf("-Antonio, ¿Así me tratas después de todoes estos\n");
}

void chiste08() {
  printf("Comienza a azotar con una vara al pobre animal\n");
  printf("Hasta que la mula coge y le dice\n");
}

void chiste09() {
  printf("El hombre, cada vez más molesto e impaciente\n");
}

void chiste10() {
  printf("ha dado la mula cuando se ha puesto a hablar!!\n");
}
void f5(){
  chiste01();
  chiste02();
  chiste09();
  chiste08();
  chiste07();
  chiste03();
  chiste05();
  chiste06();
  chiste04();
  chiste10();
}
//Fin de f5

//Inicio de f4
void aerobicoFem(int edad){
  printf("Sus pulsaciones por 10 segundos de aeróbicos son:");
  float pulsaciones = (220 - edad)/10;
  printf("%.2f\n", pulsaciones);
}
void aerobicoMas(int edad){
  printf("Sus pulsaciones por 10 segundos de aeróbicos son:");
  float pulsaciones = (210 - edad)/10;
  printf("%.2f\n", pulsaciones);
}
void f4() {
  /* Programa_48: Pulsaciones de ejercicio aeróbico
   * Funciones con parámetros
   * Autor: David Uziel Guevara Hernández
   * No. Lista: 10
   */
  char sexo;
  int edad;
  printf("Cual es su edad?\n");
  scanf("%i", &edad);
  printf("Cual es su sexo?(M/F)\n");
  scanf(" %c", &sexo);
  if (sexo == 'M') {
    aerobicoMas(edad);
  } else{
    if (sexo == 'F') {
      aerobicoFem(edad);
    } else {
      printf("Opción invalida\n");
    }
  }

}
//Fin de f4

//Inicio de f3
void operacionesSuma(float a,float b){
  printf("El resultado es: %f\n", a+b);
}
void operacionesResta(float a,float b){
  printf("El resultado es: %f\n", a-b);
}
void f3(){
  /* Programa 46: Operaciones Básicas
   * Funciones con parametros
   * Autor: David Uziel Guevara Hernández
   * No. Lista: 10
   */
  char opc;
  do {
    float dato1, dato2;
    printf("Ingrese el primer operando\n");
    scanf("%f", &dato1);
    printf("Ingrese el segundo operando\n");
    scanf("%f", &dato2);
    printf("Operaciones Básicas\n");
    printf("a) Suma\n");
    printf("b) Resta\n");
    printf("c) Salir\n");
    scanf(" %c", &opc);
    switch(opc){
      case 'a':
	operacionesSuma(dato1, dato2);
	break;
      case 'b':
	operacionesResta(dato1, dato2);
	break;
      case 'c':
	break;
      default: printf("Opción invalida\n");break;
    }
  } while (opc != 'c');
}
//Fin de f3

//Inicio de 2

void sinParamsSuma() {
  float dato1, dato2;
  printf("Ingrese el primer número a sumar\n");
  scanf("%f", &dato1);
  printf("Ingrese el segundo número a sumar\n");
  scanf("%f", &dato2);
  printf("El resultado es %f\n", dato1+dato2);
}

void sinParamsResta() {
  float dato1, dato2;
  printf("Ingrese el primer número a restar\n");
  scanf("%f", &dato1);
  printf("Ingrese el segundo número a restar\n");
  scanf("%f", &dato2);
  printf("El resultado es %f\n", dato1-dato2);
}

void f2() {
  /* Programa 40: Operaciones basicas
   * Funciones sin parametros
   * Autor: David Uziel Guevara Hernández
   * No. Lista: 10
   */
  char opc;
  do {
    printf("Operaciones Básicas\n");
    printf("a) Suma\n");
    printf("b) Resta\n");
    printf("c) Salir\n");
    scanf(" %c", &opc);
    switch(opc){
      case 'a':
	sinParamsSuma();
	break;
      case 'b':
	sinParamsResta();
	break;
      case 'c':
	break;
      default: printf("Opción Invalida\n");break;
    }
  } while(opc != 'c');
}
//Fin de 2
//Inicio de 1
void sumaTablas2x3() {
  int tabla1[2][3] = {{1,2,3},{4,5,6}};
  int tabla2[2][3] = {{7,8,9},{10,11,12}};
  printf("Tabla 1.\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%i, ", tabla1[i][j]);
    }
    printf("\n");
  }
  printf("Tabla 2.\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%i, ", tabla2[i][j]);
    }
    printf("\n");
  }
  printf("Tabla resultado\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%i, ", tabla1[i][j]+tabla2[i][j]);
    }
    printf("\n");
  }
}
void restaTablas2x3() {
  int tabla1[2][3] = {{1,2,3},{4,5,6}};
  int tabla2[2][3] = {{7,8,9},{10,11,12}};
  int tablaR[2][3];
  printf("Tabla 1.\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%i, ", tabla1[i][j]);
    }
    printf("\n");
  }
  printf("Tabla 2.\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%i, ", tabla2[i][j]);
    }
    printf("\n");
  }
  printf("Tabla resultado\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      tablaR[i][j] = tabla2[i][j]-tabla1[i][j];
      printf("%i, ", tablaR[i][j]);
    }
    printf("\n");
  }
}

void f1() {
  char opc;
  do {
    printf("Suma y resta de tablas de 2*3\n");
    printf("a)Suma de dos tablas de 2*3\n");
    printf("b)Resta de dos tablas de 2*3\n");
    printf("c)Salir\n");
    scanf(" %c", &opc);
    switch(opc){
      case 'a':
	sumaTablas2x3();
	break;
      case 'b':
	restaTablas2x3();
	break;
      case 'c':
	break;
      default:break;
    }
  } while (opc != 'c');
}
//Fin de 1
int main()
{
  int opc = 0;
  do {
    printf("MENU\n");
    printf("1. Tarea 1\n");
    printf("2. Tarea 2\n");
    printf("3. Tarea 3\n");
    printf("4. Tarea 4\n");
    printf("5. Tarea 5\n");
    printf("6. Tarea 6\n");
    printf("7. Salir\n");
    scanf("%i", &opc);
    switch(opc){
      case 1:
	f1();
	break;
      case 2:
	f2();
	break;
      case 3:
	f3();
	break;
      case 4:
	f4();
	break;
      case 5:
	f5();
      case 6:
	f6();
	break;
      case 7: break;
      default: printf("Opción Invalida\n");break;
    }
  } while(opc != 7);
  return 0;
}


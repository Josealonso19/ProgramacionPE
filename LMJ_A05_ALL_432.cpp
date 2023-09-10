// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 07/09/2023   Fecha fin: 09/09/2023
// En este programa de manera (Opcional) decidi trabajar con el prototipo de programa (Esqueleto)
//para hacer todos los siete programas de esta practica en uno solo usando (Funciones), para poder
//asi tenga una interfaz mucho mas entendible tanto en el codigo como en la ejecucion del programa
//la mayoria de los progrmas ya los habiamos hecho, algunos con un ligero cambio como que en esta 
//practica algunos ejercicios los teniamos que hacer usando (&&) o (||) para poder hacerlos, y en el
//caso del ultimo programa constaba de solo pedirle al usuario sus datos requeridos para asi proceder
//a decir que signo del zodiaco y horoscopo tiene el usuario.
// Pero volviendo al funcionamiento del programa con la implementacion de funciones su modus operandi
//consta de definir el prototipo abajo de las librerias dicha funcion como (void) con su respectivo nombre que 
//describa bien la funcion , despues desarrollar la funcion afuera del (int main) y asu vez mandarla a
//llamar en el int main, ya que todo esto hace que nuestro codigo y programa queden de una manera mas 
//entendible, y con una buena descripcion que hace que cualquier persona pueda aplicar el programa
//de una manera mas bonita, eficaz y entendible.
// LMJ_A05_ALL_432


//Aqui declaramos las librerias con su herramientas que nos ayudaran a lo largo del programa.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constantes:
#define PIEDRA 1
#define PAPEL 2
#define TIJERA 3


//*** PROTOTIPOS DE FUNCIONES  *******************
int msges();
void menu();
void Promedios_optimizado (void);
void Chinchanpu_anidado (void);
void Chinchanpu_seleccion_multiple (void);
void Elnumero_mayor (void);
void Elnumero_delmedio (void);
void Numeros_ascendentes (void);
void signoszodiacales_yhoroscopo_deldia (void);

//************************************************






//****  MAIN PRINCIPAL ****************************
int main()
{


    srand(time(NULL));  //Es lo que inicializa los numeros aleatorios, del programa del CHINCHANPU ANIDADO.
    menu();
	return 0;


}
//*************************************************






//*************************************************************************************************************
//  *** DESARROLLO DE LAS FUNCIONES DE MENSAJES Y MENU ******
int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");

  printf("1.- Promedio (OPTIMIZADO) \n");

  printf("2.- Chinchanpu (ANIDADO) \n");

  printf("3.- Chinchanpu (SELECCION MULTIPLE) \n");

  printf("4.- Sacar el numero MAYOR de tres numeros \n");

  printf("5.- Sacar el numero del MEDIO de tres numeros \n");

  printf("6.- Poner tres numeros en forma ASCENDENTE \n");

  printf("7.- Sacar el signo zodiacal y el horoscopo del dia \n");

  printf("0.- SALIR  \n");

  printf("ESCOGE UNA OPCION: ");
    scanf ("%d",&op);

  return op;
}
//************************************************************************************************************






//************************************************************************************************************
// ********* FUNCION PARA QUE EL USUARIO PUEDA ELEGIR LOS DISTINTOS PROGRAMAS ***********
void menu()
{
  int op;
  do{

      op=msges();
        switch (op)
        {

            case 1:
                Promedios_optimizado();
              
            break;


            case 2:
                Chinchanpu_anidado();

            break;


            case 3:
                Chinchanpu_seleccion_multiple();

            break;


            case 4:
                Elnumero_mayor();

            break;


            case 5:
                Elnumero_delmedio();

            break;    


            case 6:
                Numeros_ascendentes();

            break; 


            case 7:
                signoszodiacales_yhoroscopo_deldia();

            break;        

        }

    }while (op != 0);
    
}
//*********************************************************************************************************






// *********************** P R O G R A M A S *****************************************************************
//************************************************************************************************************
//  ****** Programa del promedio del alumno pero optimizado (forma arbol) ******
void Promedios_optimizado  (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    
    int cal1, cal2, cal3;
    float promedio;

    printf("Hola usuario, bienvenido al programa de tu promedio de calificaciones \n");
    printf("Por favor llena lo siguiente: \n");

    printf("Ingresa la primera calificacion: ");
    scanf("%d", &cal1);

    printf("Ingresa la segunda calificacion: ");
    scanf("%d", &cal2);

    printf("Ingresa la tercera calificacion: ");
    scanf("%d", &cal3);                //Aqui pedimos los tres numeros al usuario.

    promedio = (cal1 + cal2 + cal3) / 3; //Aqui calculamos el promedio.


    if(promedio<80)
    {
        if(promedio<70)
        {
                if(promedio<60)
                    {
                        if(promedio<30)
                        {

                            printf("REPITES \n");

                        }

                        else
                        {

                            printf("EXTRAORDINARIO \n");    

                        }
                    }

                    else
                    {

                        printf("SUFICIENTE \n");  
                     
                    }                 
        }

        else
        {
            printf("REGULAR \n");
        }
        
//Aqui partimos el diagrama de arbol para poder enterderlo de una manera mas clara aparte del diagrama de flujo.
//----------------------------------------------------

    }

    else
    {
        if(promedio < 98)
        {
                if(promedio < 90)
                {

                    printf("BIEN \n");
                }

                else
                {

                    printf("MUY BIEN \n");
                }
        }
        else
        {
            if(promedio <= 100)
            {

                printf("EXCELENTE \n");
            }

            else
            {

                printf("ERROR \n");
            }
        }
    
    }
    system ("PAUSE");
}
//**********************************************************************************************************






//**********************************************************************************************************
//  ****** Programa del Chinchanpu pero anidado pero con condicionales anidadas ******
void Chinchanpu_anidado (void)
{

    //  VARIALES LOCALES 
    system ("CLS");
    
       int player,pc;    // Aqui delacaramos la variables de tipo entero.
       char nombre [20]; //Los espacios que puede ocupar el nombre del jugador.
       
  
        printf("Hola usuario, por favor juguemos CHINCHAMPU con condiones anidadas\n");

        printf("Pero primero dime tu primer nombre nadamas por favor: \n");
         scanf("%s", &nombre);

        printf("Ahora si %s ,por favor elije tu jugada:\n",&nombre);
        printf("[1 - Piedra] \n");
        printf("[2 - Papel] \n");
        printf("[3 - Tijera] \n");
         scanf("%d", &player);
        

         pc = rand() % 3 + 1; //Aleatorio hasta el 2, ya que contamos desde el 0 al 2, pero ponemos 3 porque es 3-1.

            if(pc == 1)
            {
                if(player == 3)
                {

                  printf("La piedra rompe a las tijeras: \n");
                  printf("LA COMPUTADORA GANO \n");
                  
                  printf("Lo siento, pero elegiste tijeras %s \n",&nombre);
                  printf("Vuelve a intentarlo :( \n");
                }

                else
                {
                    if(player == 2)
                    {

                        printf("El papel cubre a la piedra: \n");
                        printf("%s GANO \n",&nombre);

                        printf("Porque la computadora elegio la Piedra \n");
                    }

                    else
                    {
                        if(pc == player)
                        {

                            printf("EMPATE \n");
                            printf("Si los numeros son iguales es un empate. \n");
                        }
                    }
                }
            }


         //-----------------------------------------------------------------------------------------------------------------------------

        else
        {
            if(pc == 2)
            {
                    if(player == 1)
                    {

                        printf("El papel cubre a la piedra: \n");
                        printf("LA COMPUTADORA GANO \n");

                        printf("Lo siento, pero elegiste piedra %s \n",&nombre);
                        printf("Vuelve a intentarlo :( \n");
                    }

                    else
                    {
                        if(player == 3)
                        {

                           printf("La tijera corta el papel: \n");
                           printf("%s GANO \n",&nombre);

                           printf("Porque la computadora elegio el Papel \n");
                        }

                        else
                        {
                           if(pc == player)
                           {

                              printf("EMPATE \n");
                              printf("Si los numeros son iguales es un empate. \n");
                           }
                        }
                    }
            }

            else
            {
                    if(pc == 3)
                    {
                        if(player == 2)
                        {

                           printf("La tijera corta el papel: \n");
                           printf("LA COMPUTADORA GANO \n");

                           printf("Lo siento, pero elegiste papel %s \n",&nombre);
                           printf("Vuelve a intentarlo :( \n");
                        }

                        else
                        {
                                if(player == 1)
                                {

                                    printf("La piedra rompe las tijeras: \n");
                                    printf("%s GANO \n",&nombre);

                                    printf("Porque la computadora elegio las Tijeras \n");
                                }

                                else
                                {
                                    if(pc == player)
                                    {

                                        printf("EMPATE \n");
                                        printf("Si los numeros son iguales es un empate. \n");
                                    }
                                }
                        }
                    }
            }

        }
    system ("PAUSE");
}


//*******************************************************************************************************






//*******************************************************************************************************
// ** Programa del Chinchanpu pero anidado pero con estructuras de seleccion multiple **
void Chinchanpu_seleccion_multiple (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
   
        int player,pc;    // Aqui delacaramos la variables de tipo entero.
        char nombre [20]; //Los espacios que puede ocupar el nombre del jugador.
  
        printf("Hola usuario, por favor juguemos CHINCHAMPU con seleccion multiple\n");

        printf("Pero primero dime tu primer nombre nadamas por favor: \n");
         scanf("%s", &nombre);

        printf("Ahora si %s ,por favor elije tu jugada:\n",&nombre);
        printf("[1 - Piedra] \n");
        printf("[2 - Papel] \n");
        printf("[3 - Tijera] \n");
         scanf("%d", &player);
        

         pc = rand() % 3 + 1; //Aleatorio hasta el 2, ya que contamos desde el 0 al 2, pero ponemos 3 porque es 3-1.


    //Switch del jugador:
        switch (player) 
        {
            case PIEDRA:

                if(pc == TIJERA)
                {

                    printf("La piedra rompe las tijeras: \n");
                    printf("%s GANO \n",&nombre);

                    printf("Porque la computadora elegio las Tijeras \n");
                }

                else
                {
                    if(pc == PAPEL)
                    {

                        printf("El papel cubre a la piedra: \n");
                        printf("LA COMPUTADORA GANO \n");

                        printf("Lo siento, pero elegiste piedra %s \n",&nombre);
                        printf("Vuelve a intentarlo :( \n");
                    }
                }

            break;

//-----------------------------------------     

            case PAPEL:
            
                if(pc == TIJERA)
                {

                    printf("La tijera corta el papel: \n");
                    printf("LA COMPUTADORA GANO \n");

                    printf("Lo siento, pero elegiste papel %s \n",&nombre);
                    printf("Vuelve a intentarlo :( \n");
                }

                else
                {
                    if(pc == PIEDRA)
                    {

                        printf("El papel cubre a la piedra: \n");
                        printf("LA COMPUTADORA GANO \n");

                        printf("Lo siento, pero elegiste piedra %s \n",&nombre);
                        printf("Vuelve a intentarlo :( \n");
                    }
                }

            break;

//--------------------------------------------

            case TIJERA:

                if(pc == PIEDRA)
                {

                    printf("La piedra rompe las tijeras: \n");
                    printf("LA COMPUTADORA GANO \n");

                    printf("Lo siento, pero elegiste tijeras %s \n",&nombre);
                    printf("Vuelve a intentarlo :( \n"); 
                }

                else
                {
                    if(pc == PAPEL)
                    {

                        printf("Las tijeras cortan el papel: \n");
                        printf("%s GANO \n",&nombre);

                        printf("Porque la computadora eligio papel \n");  
                    }
                }
        }
     
//-----------------------------------------------


                     //Por si acaso si los dos eligen lo mismo, sera un empate.
                        if (player == pc) 
                        {
                           printf("Empate\n");
                        }     


    system ("PAUSE");

}
//*********************************************************************************************************






//*********************************************************************************************************
//  *** Programa para saber el numero mayor de tres numeros que inserta el usuario ***

void Elnumero_mayor (void)
{
    system ("CLS"); 
    int num1, num2, num3;

    printf("Hola usuario, bienvenido al programa que te saca el numero mayor de tres numeros: \n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);


    if (num1 > num2 && num1 > num3) 
    {

        printf("El primer número (%d) es el MAYOR.\n", num1);
    } 

        if (num2 > num1 && num2 > num3) 
        {

            printf("El segundo número (%d) es el MAYOR.\n", num2);
        } 

                if (num3 > num1 && num3 > num2) 
                {

                    printf("El tercer número (%d) es el MAYOR.\n", num3);
                } 

                        if (num1 == num2 || num1 == num3 || num2 == num3) 
                        {

                            printf("Lo siento usuario pero los numeros no pueden ser iguales .\n");
                        }

    system ("PAUSE");    
}

//********************************************************************************************************






//********************************************************************************************************
//  ** Programa para saber el numero del medio de tres numeros que inserta el usuario **
void Elnumero_delmedio (void)
{
    //  VARIALES LOCALES 
       system ("CLS");    
       int num1, num2, num3;

       printf("Hola usuario, bienvenido al programa que te saca el numero del medio de tres numeros: \n"); 
       printf("Ingrese el primer numero: \n");
       scanf("%d", &num1);
    
       printf("Ingrese el segundo numero: \n");
       scanf("%d", &num2);
    
       printf("Ingrese el tercer numero: \n");
       scanf("%d", &num3);  //Aqui pedimos los tres numeros.


        if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) 
        {

            printf("El número del MEDIO es: %d\n", num1);
        } 

            if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) 
            {

                printf("El número del MEDIO es: %d\n", num2);
            } 

                if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) 
                {

                    printf("El número del MEDIO es: %d\n", num3);
                } 

//Por si acaso, esta habilitada la opcion de que alguno de los tres numeros sean iguales como algo negativo.
                    if (num1 == num2 || num1 == num3 || num2 == num3) 
                    {

                        printf("Lo siento usuario pero los numeros no pueden ser iguales .\n");
                    }

    system ("PAUSE");

}
//*******************************************************************************************************






//*******************************************************************************************************
//  ** Programa para sacar tres numeros en orden ascendente. **
void Numeros_ascendentes (void)
{
    //  VARIALES LOCALES 
    system ("CLS");    
    int num1, num2, num3;

    printf("Hola usuario, bienvenido al programa que pone tres numeros en forma ascendente : \n"); 

    printf("Por favor ingresa el primer numero: \n");
    scanf("%d", & num1);

    printf("Por favor ingresa el segundo numero: \n");
    scanf("%d", & num2);

    printf("Por favor ingresa el tercer numero: \n");
    scanf("%d", & num3);                            //Aqui pido los tres numeros.


        if(num1 < num2 && num1 < num3) //Si todos son mayores que el numero uno.
        {

            if(num2 < num3)  //Pero si el numero dos es menor al numero tres:
            {

                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num1, num2, num3);
            }

            else //Si el numero tres es menor que el numero dos:
            {

                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num1, num3, num2);
            }

        }

//--------------------------------------------------------------------------------------------------------


        if(num2 < num1 && num2 < num3) //Si todos son mayores que el numero dos.
        {

            if(num1 < num3) //Pero si el numero uno es menor al numero tres:
            {

                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num2, num1, num3);
            }

            else  //Si el numero tres es menor al numero uno:
            {

                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num2, num3, num1);
            }

        }

//---------------------------------------------------------------------------------------------------------
     

        if(num3 < num1 && num3 < num2)  //Si todos son mayores que el numero tres.
        {

            if(num1 < num2)  //Pero si el numero uno es menor al numero dos:
            {

                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num3, num1, num2);
            }

            else  //Si el numero dos es menor al numero uno:
            {
                printf("Los numeros en orden ascendente son: %d, %d, %d \n" , num3, num2, num1);
            }

        }


    system ("PAUSE");
}
//************************************************************************************************************








//********************************************************************************************************************************************************************************************************
//  ** Programa para saber el numero del medio de tres numeros que inserta el usuario **
void signoszodiacales_yhoroscopo_deldia  (void)
{
    //  VARIALES LOCALES 
    system ("CLS");    
    int mes, dia;

       printf("Hola usuario, bienvenido al programa que te saca el signo zodiacal y el horoscopo del dia: \n");

       printf("Ingresa tu mes de nacimiento: \n");
       scanf("%d", &mes);
    
       printf("Ingresa tu dia de nacimiento: \n");
       scanf("%d", &dia);     

       if(dia >= 22 && mes == 12 || dia <= 20 && mes == 2)
       {

            printf("Tu signo del zodiaco es el: (Capricornio) \n");

            printf("Distraete, habla con tu gente de confianza y a diario ocupa tu mente en temas de tu interes. \n");
            printf("No des hoy mas vueltas a los problemas y dedica el dia a descansar y relajarte. \n");
            printf("Si en estos momentos estas sentimentalmente sola, tambien esto ha empezado \n");
            printf("a cambiar. Sobre todo, no te desanimes. \n");

        }

            if(dia >= 21 && mes == 1 || dia <= 19 && mes == 2)
            {

                printf("Tu signo del zodiaco es el: (Acuario) \n");

                printf("No te sirve de nada estar preocupado(a) a diario por el tema economico, Acuario. \n");
                printf("Hoy que tienes tiempo, piensa detenidamente en como se ha originado esta crisis \n");
                printf("y de que forma puedes salir de ella. Hallaras la respuesta, el camino que tienes que seguir. \n");
                printf("Se resolvera muy pronto. \n");

            }

                if(dia >= 20 && mes == 2 || dia <= 20 && mes == 3)
                {

                    printf("Tu signo del zodiaco es el: (Piscis) \n");

                    printf("Hoy libera espacio para que a diario entren las buenas energias en casa. \n");
                    printf("Tambien te ira bien salir a comprar aquello que necesitas, con una lista en la mano, \n");
                    printf("evitando los gastos innecesarios. \n");
                    
                }
                    
                    if(dia >= 21 && mes == 3 || dia <= 19 && mes == 4)
                    {

                        printf("Tu signo del zodiaco es el: (Aries) \n");

                        printf("Si a diario no has tenido tiempo, Aries, haz hoy un hueco \n");
                        printf("para visitar a la familia. Quiza te tengan preparada una sorpresa que te encantara. \n");
                        
                    }

                        if(dia >= 20 && mes == 4 || dia <= 20 && mes == 5)
                        {

                            printf("Tu signo del zodiaco es el: (Tauro) \n");

                            printf("Si hoy amaneces con poco animo de salir a pasarlo bien, Tauro, es porque   \n");
                            printf("te sientes desganada por la conducta de algunas personas, o por lo que te han dicho de ellas.  \n");
                            printf("Quiza ha llegado  tus oidos un chismorreo que pone en cuestion a \n");
                            printf("una persona que tiene tu confianza a diario. \n");
                            
                        }

                            if(dia >= 21 && mes == 5 || dia <= 21 && mes == 6)
                            {

                                printf("Tu signo del zodiaco es el: (Geminis) \n");

                                printf("Alegrate, Geminis, porque ese tema que te tenia tan preocupada a diario \n");
                                printf("en los ultimos tiempos esta a punto de resolverse y hoy empezaras a darte cuenta. \n");
                                printf("Tambien veras que no habia para tanto y que inconscientemente has estado exagerando tu preocupacion. \n");
                                
                            }

                                if(dia >= 22 && mes == 6 || dia <= 21 && mes == 7)
                                {

                                    printf("Tu signo del zodiaco es el: (Cancer) \n");

                                    printf("Podrias recibir hoy la llamada de alguna persona que te ha demostrado que no es de fiar, Cancer. \n");
                                    printf("No aceptes su propuesta para una salida porque tienes que empezar a librarte de la gente que te rodea \n");
                                    printf("a diario que no te aporta nada positivo o que incluso te causa algun problema. \n");

                                }
                                
                                    if(dia >= 22 && mes == 7 || dia <= 22 && mes == 8)
                                    {

                                        printf("Tu signo del zodiaco es el: (Leo) \n");

                                        printf("Si tienes preocupaciones que necesitas explicar a alguien, Leo, \n");
                                        printf("aprovecha hoy mismo o en un futuro para reunirte con alguna amiga o amigo de confianza, \n");
                                        printf("quiza con mas y explícales lo que te esta atormentando a diario. \n");
                                        
                                    }

                                        if(dia >= 22 && mes == 8 || dia <= 22 && mes == 9)
                                        {

                                            printf("Tu signo del zodiaco es el: (Virgo) \n");

                                            printf("Estas pasando por un momento excelente, Virgo, aunque quiza no has sabido reconocerlo todavia. \n");
                                            printf("No te pierdas todo lo bueno que te ofrece la vida a diario y lo que tienes alrededor, \n");
                                            printf("sólo porque sigues pensando en negativo. \n");
                                            
                                        }

                                            if(dia >= 23 && mes == 9 || dia <= 22 && mes == 10)
                                            {

                                                printf("Tu signo del zodiaco es el: (Libra) \n");

                                                printf("Si estas pensando en volar del nido familiar, Libra, empieza desde hoy mismo a \n");
                                                printf("hablar de ello con tus padres y la gente mas próxima. Introduce el tema de forma que lo vean como \n");
                                                printf("algo positivo para tu avance personal y coméntalo a diario. Si lo enfocas bien no se lo tomarán a la tremenda. \n");
                                                
                                            }

                                                if(dia >= 23 && mes == 10 || dia <= 21 && mes == 11)
                                                {

                                                    printf("Tu signo del zodiaco es el: (Escorpio) \n");

                                                    printf("Hoy sera un dia de situaciones inesperadas, preparate para adaptarte rapidamente a las circunstancias, \n");
                                                    printf("como deberias hacer a diario. Si has conocido a alguien recientemente con quien te has ilusionado, \n");
                                                    printf("hoy alguien te revelará una realidad que desconocias de esa persona y que no te hara ni pizca de gracia. \n");
                                                    
                                                }

                                                    if(dia >= 22 && mes == 11 || dia <= 21 && mes == 2)
                                                    {

                                                        printf("Tu signo del zodiaco es el: (Sagitario) \n");

                                                        printf("Por fin te sientes bien en tu piel, Sagitario. Estás en una etapa genial \n");
                                                        printf("en la que sabes apreciar lo que has conseguido a diario con tu trabajo y tu esfuerzo, \n");
                                                        printf("no sólo en el terreno laboral. No te ha resultado facil y esto lo hace todavia mas valioso. \n");
                                                        
                                                    }

    //Easter Egg:
    if(dia == 1 && mes == 12)
    {

        printf("Tu signo del zodiaco es el: (Pegaso) \n");

        printf("Hola Seiya. ¡Dame tu fuerza Pegaso!  \n");
    
    }                                                


    system ("PAUSE");
}
//***************************************************************************************************************************************************************************************
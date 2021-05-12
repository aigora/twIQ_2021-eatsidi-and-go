#include<stdio.h>
#include <string.h>

struct Persona
{

    char nombre[50];
    char apellido[50];
    int tlf;
    char direccion[100];
    char mail[50];
    char contra[20];
};
void banner(){
	printf("\n");
	printf("   |======     /|   ===========   ==========   |     |  ---        |     \n");
	printf("   |          / |        |        |            |     |      ---    |    \n");
	printf("   |___      /__|        |        |_________   |     |       ---   |   \n");
	printf("   |        /   |        |                 |   |     |      ---    |     \n");
	printf("   |       /    |        |                 |   |     |    ---      |   \n");
	printf("   |______/     |        |       __________|   |     | ---         |     \n");
}
int main(){
	banner();
	    int arroba = 0, punto = 0;
	    	char tipo;
            char letra;
            int busqueda,bus2;
             int nitaliano;
			 char ritaliano[200];
			 int noriental;
			 char roriental[200];
			 int nmexicano;
			 char rmexicano[200];
			 int nrapida;
			 char rrapida[200];
			 int eleccion;
			 
            int fentrada;
    struct Persona persona;

    int opcion1, i, opcion, a = 0;

        printf("Bienvenido a EATSIDI AND GO, donde comer es nuestro deber\n");
        printf("A PEDIR!\n");
        printf("Seleccione la opcion para ingresar:\n");
        printf("1.Registrarse\n");
        printf("2.Iniciar Sesion\n3.Salir del programa\n");

        scanf("%d", &opcion1);

        if (opcion1 == 1)

        {

            printf("datos de la persona\n");
            printf("introduzca el nombre\n");

            fflush(stdin);

            gets(persona.nombre);

            printf("introduzca apellido\n");

            gets(persona.apellido);

            printf("introduzca su direccion\n");

            gets(persona.direccion);

            printf("introduzca su tlf\n");

            scanf("%d", &persona.tlf);

//            do
//            {

                printf("introduzca su mail\n");
                scanf("%s", persona.mail);

                for (i = 0; i < 15; i++)

                {

                    if (persona.mail[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (persona.mail[i] == '.')
                    {

                        punto = 1;
                    }
                }

                if (arroba == 1 && punto == 1)
                {

                    printf("Correo valido\n");
                }
                else
                {

                    printf("Correo invalido\n");
                }

//           } while ('arroba' != 1 && 'punto' != 1);

            printf("introduzca la contrasena\n");

            scanf("%s", persona.contra);
 
	}if (opcion1==2) {
//            do
//           {

                printf("introduzca su mail\n");

                scanf("%s", persona.mail);

                for (i = 0; i < 15; i++)

                {

                    if (persona.mail[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (persona.mail[i] == '.')
                    {

                        punto = 1;
                    }
                }
          
			
                if (arroba == 1 && punto == 1)
                {

                    printf("Correo valido\n");
                }
                else
                {

                    printf("Correo invalido\n");
                }

//            } while ('arroba' !=1 && 'punto' !=1);{

            printf("introduzca su contrasena\n");

            scanf("%s", persona.contra);
        
    } if (opcion1==3){
	
    printf("Vuelva pronto\n");
    }

    
    if (opcion1 ==1 || opcion1==2){
    	
     printf("bienvenido\n Â¿Como desea encontrar su restaurante?\n Introduzca:\n 1. Para buscar por tipo de comida\n 2. Por distancia\n 3. Valoracion\n 4. Precio\n 5. Salir del programa\n");
	         
			scanf("%d",&busqueda);

      	if (busqueda==1){
			     
             printf("Seleccione 1 para pedir comida italiana\n");
             printf("Seleccione 2 para pedir comida oriental\n");
             printf("Seleccione 3 para pedir comida mexicana\n");
             printf("Seleccione 4 para pedir comida rapida\n");
             printf("Seleccione 5 para salir del programa\n");
             
            scanf("%d",&bus2);

                  if(bus2==1) {
                 
     		          printf("Usted ha selecionado comida italiana\n");
     		          
     		          FILE * fentrada;
						fentrada = fopen("italianos.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<4; i++){
							fscanf(fentrada, "%d %s", &nitaliano, ritaliano);
							printf("%d - %s\n", nitaliano, ritaliano);
						}	scanf("%d",&eleccion);
						if(eleccion!=0){
						
							 printf ("1.Pizza 4 fomaggi\n2.Pizza diabola\n3.Fetuccini a la carbonara\n4.Lasaña piccola\n  ");
						}	
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
     	          }
     	            if(bus2==2) {
     	               printf("Usted ha selecionado comida oriental\n");
     	                FILE * fentrada;
						fentrada = fopen("oriental.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<3; i++){
							fscanf(fentrada, "%d %s", &noriental, roriental);
							printf("%d - %s\n", noriental, roriental);
    	               }
    	            }
     	            if(bus2==3) {
     		          printf("Usted ha seleccionado comida mexicana\n");
     		          FILE * fentrada;
						fentrada = fopen("mexicano.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<3; i++){
							fscanf(fentrada, "%d %s", &nmexicano, rmexicano);
							printf("%d - %s\n", nmexicano, rmexicano);
     		            }
     		         }
     	           if(bus2==4) {
     		          printf("Usted ha selecionado comida rapida\n");
     		          FILE * fentrada;
						fentrada = fopen("rapida.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<3; i++){
							fscanf(fentrada, "%d %s", &nrapida, rrapida);
							printf("%d - %s\n", nrapida, rrapida);
     		            }
     		        } 
				  if(bus2==5){
     		     	printf("vuelva pronto");
				     }
	  }
	  
}
            
	    if (busqueda==2){
		
	         printf("Introduzca:\n 1 para buscar a 10 km\n 2 para buscar a 25 km\n 3 para buscar a 35 km\n 4 salir del programa\n");
		     scanf("%d",tipo);
		             if (bus2==1) {
	                    printf ("Usted ha seleccionado a 10 km\n");
	
	                    FILE * fentrada;
	                    fentrada = fopen("10km.txt", "r");
	                    if(fentrada == NULL){
	                     	printf("Error en la apertura del fichero\n");
	                     	return 0;
	                         }
	                        printf("¿Que restaurante prefiere? \n");
		                    for(i=0; i<6; i++) {
		                     fscanf(fentrada, "%d %s", &n10km, r10km);
		                     printf("%d - %s\n", n10km, r10km);
	                       }	
                     }			
                     if (bus2==2) {
                    	printf ("Usted ha seleccionado a 25 km\n");
	
	                    FILE * fentrada;
	                    fentrada = fopen("25km.txt", "r");
	                    if(fentrada == NULL){
	                        printf("Error en la apertura del fichero\n");
		                    return 0;
	                    }
                        	printf("¿Que restaurante prefiere? \n");
		                    for(i=0; i<5; i++){
	                       	 fscanf(fentrada, "%d %s", &n25km, r25km);
		                     printf("%d - %s\n", n25km, r25km);
	                        }
                     }
                     if (bus2==3) {
	                   printf ("Usted ha seleccionado a 35 km\n");
	
	                   FILE * fentrada;
	                   fentrada = fopen("35km.txt", "r");
                       if(fentrada == NULL){
		                    printf("Error en la apertura del fichero\n");
		                    return 0;
                     	}
	                          printf("¿Que restaurante prefiere? \n");
		                      for(i=0; i<4; i++){
		                      fscanf(fentrada, "%d %s", &n35km, r35km);
		                      printf("%d - %s\n", n35km, r35km);
                           }	
                     }
                     if(bus2==4) {
                       printf("Vuelva pronto");
                     }
	}
		if (busqueda==3){
			printf("Introduzca numero de estrellas:\n 1 para 5 estrellas\n 2 para 4 estrellas\n 3 para 3 estrellas\n 0. 4 para salir del programa\n");
			 scanf("%d",tipo);
			 	    if(bus2==1) {
                 
     		          printf("Usted ha selecionado 5 estrellas\n");
     		          
     		          FILE * fentrada;
						fentrada = fopen("5estrellas.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<4; i++){
							fscanf(fentrada, "%d %s", &5estrellas, r5estrellas);
							printf("%d - %s\n", n5estrellas, r5estrellas);
						}
                   }
     	             if(bus2==2) {
     	               printf("Usted ha selecionado 4 estrellas\n");
     	              FILE * fentrada;
						fentrada = fopen("oriental.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<7; i++){
							fscanf(fentrada, "%d %s", &4estrellas, r4estrellas);
							printf("%d - %s\n", n4estrellas, r4estrellas);
    	               }
    	           }
                     if(bus2==3) {
     		          printf("Usted ha seleccionado 3 estrellas\n");
     		          FILE * fentrada;
						fentrada = fopen("3estrellas.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<4; i++){
							fscanf(fentrada, "%d %s", &n3estrellas, r3estrellas);
							printf("%d - %s\n", n3estrellas, r3estrellas);
     		           }
     		       } 
				     if(bus2==4){
     		     	printf("vuelva pronto");
				     }
	  }
		}
		if (busqueda==4){
			printf("Introduzca el tipo de precio:\n 1.Precio bajo\n 2.Gama media\n 3.Precio alto\n");
	         scanf("%d",tipo);
			 }
		if (busqueda==5){
			printf("Vuelva pronto");
		}
	         
    


return 0;
}


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
printf(  "__________        _   __________   ____  ___________  ____             _     ___      ___________            ____      ____ \n"  );
printf("`MMMMMMMMM       dM.  MMMMMMMMMM  6MMMMb\`MM`MMMMMMMb.`MM'            dM.    `MM\     `M'`MMMMMMMb.         6MMMMb/   6MMMMb\n"  );
printf( " MM      \      ,MMb  /   MM    \ 6M'    ` MM MM    `Mb MM            ,MMb     MMM\     M  MM    `Mb        8P    YM  8P    Y8\n"  );
printf( "MM             d'YM.     MM     MM       MM MM     MM MM            d'YM.    M\MM\     M  MM     MM       6M      Y 6M      Mb\n"  );
printf( "MM    ,       ,P `Mb     MM     YM.      MM MM     MM MM           ,P `Mb    M \MM\    M  MM     MM       MM        MM      MM\n"  );
printf( "MMMMMMM       d'  YM.    MM      YMMMMb  MM MM     MM MM           d'  YM.   M  \MM\   M  MM     MM       MM        MM      MM\n"  );
printf( "MM    `      ,P   `Mb    MM          `Mb MM MM     MM MM          ,P   `Mb   M   \MM\  M  MM     MM       MM     ___MM      MM\n"  );
printf( "MM           d'    YM.   MM           MM MM MM     MM MM          d'    YM.  M    \MM\ M  MM     MM       MM     `M'MM      MM \n"  );
printf( "MM          ,MMMMMMMMb   MM           MM MM MM     MM MM         ,MMMMMMMMb  M     \MMM  MM     MM       YM      M YM      M9\n"  );                                                                                                                             
printf( "MM      /   d'      YM.  MM     L    ,M9 MM MM    .M9 MM         d'      YM. M      \MM  MM    .M9        8b    d9  8b    d8 \n"  );    
printf( "MMMMMMMMM _dM_     _dMM__MM_    MYMMMM9 _MM_MMMMMMM9'_MM_      _dM_     _dMM_M_      \M _MMMMMMM9'         YMMMM9    YMMMM9 \n"  );
printf(".\n.\n");
}
int main(){
	banner();
	    int arroba = 0, punto = 0;
	    	int tipo;
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
			 int n10km;
			 char r10km[200];
			 int n25km;
			 char r25km[200];
			 int n35km;
			 char r35km[200];
			 int n3estrellas;
			 char r3estrellas[200];
			 int n4estrellas;
			 char r4estrellas[200];
			 int n5estrellas;
			 char r5estrellas[200];
			 int nprecio_bajo;
			 char rprecio_bajo[200];
			 int ngama_media;
			 char rgama_media[200];
			 int nprecio_alto;
			 char rprecio_alto[200];
			 
			 
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
						
							 printf ("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n ");
						}	
						 scanf("%d",&eleccion);
						 printf("Su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
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
    	               }scanf("%d",&eleccion);
						if(eleccion!=0){		 	
						 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n ");
						}	
						 scanf("%d",&eleccion);
						 printf("Su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
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
     		            }scanf("%d",&eleccion);
					if(eleccion!=0){
						
					 printf ("1.Nachos con Guacamole\n2.Burritos\n3.Quesadilla\n4.Tacos variados\n");
						}	
						 scanf("%d",&eleccion);
						 printf("Su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
					
    	            
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
     		            } scanf("%d",&eleccion);
						if(eleccion!=0){
						
						 printf ("1.Menu Cheeseburger\n 2.Menu Alitas de pollo\n 3.Menu Signature\n 4.Menu Nuggets\n 5.Menu Galaxy\n");
						}	
						 scanf("%d",&eleccion);
						 printf("Su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
     		        } 
				  if(bus2==5){
     		     	printf("vuelva pronto");
				     }
	  }
	  
}
            
	    if (busqueda==2){
		
	         printf("Introduzca:\n 1 para buscar a 10 km\n 2 para buscar a 25 km\n 3 para buscar a 35 km\n 4 salir del programa\n");
		     scanf("%d", &bus2);
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
	                       }	scanf("%d",&eleccion);
						if(eleccion==1  || eleccion==2 || eleccion==6){
						
						 printf ("1.Menu Cheeseburger\n 2.Menu Alitas de pollo\n 3.Menu Signature\n 4.Menu Nuggets\n 5.Menu Galaxy\n");
						}	else if (eleccion==3){
						 printf ("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n");
						}else if (eleccion == 4){
						 printf ("1.Nachos con Guacamole\nv2.Burritos\nv3.Quesadilla\nv4.Tacos variados\n");
						}else if(eleccion == 5){
						 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n");
						}
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
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
	                        }scanf("%d",&eleccion);
						if(eleccion==1 ){
						
			             printf ("1.Menu Cheeseburger\n 2.Menu Alitas de pollo\n 3.Menu Signature\n 4.Menu Nuggets\n 5.Menu Galaxy\n");
						}	else if (eleccion==3 || eleccion==5){
						 printf ("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n");
						}else if (eleccion == 2){
						 printf ("1.Nachos con Guacamole\n 2.Burritos\n 3.Quesadilla\n 4.Tacos variados\n");
						}else if(eleccion == 4){
						 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n");
						}
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
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
                           } scanf("%d",&eleccion);
                        if (eleccion==1){
                         printf("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n");
						} else if (eleccion==2){
						 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n");
						} else if (eleccion==3 || eleccion==4){
						 printf ("1.Nachos con Guacamole\n 2.Burritos\n 3.Quesadilla\n 4.Tacos variados\n");
						}
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
                     }
                     if(bus2==4) {
                       printf("Vuelva pronto");
                     }
	
		if (busqueda==3){
			printf("Introduzca numero de estrellas:\n 1 para 5 estrellas\n 2 para 4 estrellas\n 3 para 3 estrellas\n 0. 4 para salir del programa\n");
			 scanf("%d",&bus2);
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
							fscanf(fentrada, "%d %s", &n5estrellas, r5estrellas);
							printf("%d - %s\n", n5estrellas, r5estrellas);
						}
						if (eleccion==1){
						 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n");
						} else if (eleccion==2 || eleccion==3){
						 printf ("1.Nachos con Guacamole\n 2.Burritos\n 3.Quesadilla\n 4.Tacos variados\n");
						} else if (eleccion==4){
						 printf ("1.Menu durum doble XL\n 2.Menu kebab ternera\n 3.Menu kebab pollo\n 4.Menu durum normal con patatas\n");
						}
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
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
							fscanf(fentrada, "%d %s", &n4estrellas, r4estrellas);
							printf("%d - %s\n", n4estrellas, r4estrellas);
    	               }
    	               if (eleccion==1){
    	                 printf ("1.Nachos con Guacamole\n 2.Burritos\n 3.Quesadilla\n 4.Tacos variados\n");
					   } else if (eleccion==2 || eleccion==3 || eleccion==4){
					   	 printf("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n");
					   } else if (eleccion==5 | eleccion==7){
					   	 printf ("1.Tallarines Teriyaki\n 2.Pato Cantones\n 3.Arroz Tres Delicias\n 4.Sopa Agripicante\n 5.Sushi\n");
					   } else if (eleccion==6){
					   	 printf ("1.Nachos con Guacamole\n 2.Burritos\n 3.Quesadilla\n 4.Tacos variados\n");
					   }
					     scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
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
     		           if (eleccion==1){
     		           	 printf("1.Pizza 4 fomaggi\n 2.Pizza diabola\n 3.Fetuccini a la carbonara\n 4.Lasaña piccola\n");
						} else if (eleccion==2 || eleccion==3 || eleccion==4){
						 printf ("1.Menu Cheeseburger\n 2.Menu Alitas de pollo\n 3.Menu Signature\n 4.Menu Nuggets\n 5.Menu Galaxy\n");
						} 
						 scanf("%d",&eleccion);
						 printf("su pedido del plato numero %d sido realizado con exito. Llegara en 20 min .Vuelva pronto",eleccion);
						 banner();
     		       } 
				     if(bus2==4){
     		     	printf("vuelva pronto");
				     }
	  }
		
		
		if (busqueda==4){
			printf("Introduzca el tipo de precio:\n 1.Precio bajo\n 2.Gama media\n 3.Precio alto\n");

	         scanf("%d",bus2);



	               if(bus2==1) {
                 
     		          printf("Usted ha selecionado precio bajo\n");
     		          
     		          FILE * fentrada;
						fentrada = fopen("precio_bajo.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<3; i++){
							fscanf(fentrada, "%d %s", &nprecio_bajo, rprecio_bajo);
							printf("%d - %s\n", nprecio_bajo, rprecio_bajo);
						}
                     }
     	           if(bus2==2) {
     	               printf("Usted ha selecionado gama media\n");
     	              FILE * fentrada;
						fentrada = fopen("gama_media.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<5; i++){
							fscanf(fentrada, "%d %s", &ngama_media, rgama_media);
							printf("%d - %s\n", ngama_media, rgama_media);
    	               }
    	            }

     	           if(bus2==3) {
     		          printf("Usted ha seleccionado precio alto\n");
     		          FILE * fentrada;
						fentrada = fopen("precio_alto.txt", "r");
						if(fentrada == NULL){
							printf("Error en la apertura del fichero\n");
							return 0;
						}
						printf("¿Que restaurante prefiere? \n");
						for(i=0; i<5; i++){
							fscanf(fentrada, "%d %s", &nprecio_alto, rprecio_alto);
							printf("%d - %s\n", nprecio_alto, rprecio_alto);
     		            }
     		        } 
		}
	   if (busqueda==5){
			printf("Vuelva pronto");
		}
	         
    


return 0;
}
}


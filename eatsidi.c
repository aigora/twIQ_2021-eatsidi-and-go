#include <stdio.h>
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

int main(){
	    int arroba = 0, punto = 0;
	    	char tipo;
            char letra;
            int busqueda,bus2;
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
    	
     printf("bienvenido\n ¿Como desea encontrar su restaurante?\n Introduzca:\n 1. Para buscar por tipo de comida\n 2. Por distancia\n 3. Valoracion\n 4. Salir del programa\n");
	         
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
     	          }
     	            if(bus2==2) {
     	               printf("Usted ha selecionado comida oriental\n");
    	               }
     	            if(bus2==3) {
     		          printf("Usted ha seleccionado comida mexicana\n");
     		          }
     	           if(bus2==4) {
     		          printf("Usted ha selecionado comida rapida\n");
     		     } if(bus2==5){
     		     	printf("vuelva pronto");
				  }
	  }
            
		if (busqueda==2){
		
		printf(" introduzca:\n 1 para buscar a 10 km\n 2 para buscar a 25 km\n 3 para buscar a 35 km\n 4 salir del programa");
		    scanf("%d",tipo);
		}
		if (busqueda==3){
			printf(" introduzca numero de estrellas:\n 5 estrellas\n 4 estrellas\n 3 estrellas\n 0. salir del programa\n");
			 scanf("%d",tipo);
			 
		}
		if (busqueda==4){
				printf("Vuelva pronto");
	         }
    
}

return 0;
}


	  


    








    
 

	     
	 


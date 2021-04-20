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
	    	char busqueda,tipo;

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
    	
     printf("bienvenido\n ¿como desea encontrar su restaurante?\n introduzca:\n 1 para buscar por tipo de comida\n 2 por distancia\n 3 valoracion\n 4 salir del programa\n");
	         
			scanf("%c",&busqueda);
			
	

	switch(busqueda){
		case'1':
			printf("introduzca:\n 1 italiano\n 2 comida rapida\n 3 asiatico\n 5 kebab\n 4 salir del programa");
			 printf("comprobacion");
			break;
			
		case '2':
		printf(" introduzca:\n 1 para buscar a 10 km\n 2 para buscar a 25 km\n 3 para buscar a 35 km\n 4 salir del programa");
		    scanf("%c",tipo);
		    break;
		case '3':
			printf(" introduzca:\n 1. 5 estrellas\n 2. 4 estrellas\n 3. 3 estrellas\n 4. salir del programa");
			 scanf("%c",tipo);
		    break;
		case '4':
				printf("Vuelva pronto");
				break;
		default:
			printf("error");
			break;
	}
    
}

    char letra;
printf("Seleccione el tipo de comida que le apetece hoy:\n");
printf("Seleccione A para pedir comida italiana\n");
printf("Seleccione B para pedir comida oriental\n");
printf("Seleccione C para pedir comida mexicana\n");
printf("Seleccione D para pedir comida rapida\n");
scanf("%c",&letra);

switch (letra) {
     	case'a':
     		printf("Usted ha selecionado comida italiana\n");
     		break;
     	case 'b':
     	    printf("Usted ha selecionado comida oriental\n");
     	    break;
     	case 'c':
     		printf("Usted ha seleccionado comida mexicana\n");
     		break;
     	case 'd':
     		printf("Usted ha selecionado comida rapida\n");
     		break;
	 }


return 0;
}


	  


    








    
 

	     
	 


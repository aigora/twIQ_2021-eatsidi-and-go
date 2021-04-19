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

    struct Persona persona;

 

    int opcion1, i, opcion, a = 0;




    
		
        printf("Bienvenido a EATSIDI AND GO, donde comer es nuestro deber\n");
        printf("A PEDIR!\n");
        printf("Seleccione la opcion para ingresar:\n");
        printf("1.Registrarse\n");
        printf("2.Iniciar Sesion\n");

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

            do
            {

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

            } while (arroba != 1 && punto != 1);

            printf("introduzca la contrasena\n");

            scanf("%s", persona.contra);
        }

        else

        {
            do
            {

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

            } while (arroba != 1 && punto != 1);{

            printf("introduzca su contrasena\n");

            scanf("%s", persona.contra);
        }
    }
}


	  


    








    
 

	     
	 


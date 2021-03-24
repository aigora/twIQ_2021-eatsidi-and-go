#include<stdio.h>
#include<string.h>
#define n 100

int main(){

		char nombre[50];
		char apellido[50];
		char correo[20];
		char contra[20];
	char arroba,punto;
		
	int opcion,dia, mes, an ,numero,rest,i;

	printf("Bienvenido a EATSIDI AND GO\n");
	
	printf("Seleccione la accion a realizar\n");
	printf("1.Registrarse\n2.Iniciar sesion\n3.Salir del programa\n");

	scanf("%d",&numero);
	
	switch (numero){
	
	case 1:
		
		printf("introduzca nombre:\n");
		scanf("%s",nombre);
		
		printf("introduzca apellido:\n");
			scanf("%s",apellido);
			
		printf("introduzca correo electronico:\n");
			scanf("%s",correo);
				for (i = 0; i <= 20; i++) {
			

                    if (correo[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (correo[i] == '.')
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
						printf("introduzca correo electronico:\n");
			        scanf("%s",correo);
                }

      while (arroba != 1 && punto != 1);
      

		printf("introduzca contrasena:\n");
			scanf("%s",contra);
		printf("introduzca dia\n");
			scanf("%d",dia);
			printf("introduzca mes\n");
			scanf("%d",mes);
			printf("introduzca  anno\n");
			scanf("%d",an);
	 
		break;	 
	 case 2:
		printf("correo electronico\n");
		scanf("%s",correo);
		for (i = 0; i < 20; i++){

                  	for (i = 0; i <= 20; i++) {
			

                    if (correo[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (correo[i] == '.')
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
						printf("introduzca correo electronico:\n");
			        scanf("%s",correo);
                }

       while (arroba != 1 && punto != 1);
      
		printf("contrasena\n");
		scanf("%c",contra);
         break;
	case 3:
		printf("FIN DE LA APLICACION, GRACIAS POR USAR EATSIDI AND GO\n");
		
		scanf("%d",&rest);
if(1 || 2){
	printf("como desea encontrar su restaurante\n1.tipo de comida\n2.restaurantes disponibles\n3.precio\n4.ofertas\n");
	
//	switch (rest)
//	case 1:
		
return 0;		
	
}

}
		


}

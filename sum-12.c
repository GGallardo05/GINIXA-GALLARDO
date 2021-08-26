#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>

//simule un gestor de contactos simple de un dispositivo móvil. 
//Esta programa debe permitir agregar nuevos registros, listarlos, modificarlos, buscar contactos guardados, eliminar registros telefónicos.
// Tome en consideración que la información personal por almacenar debe ser nombre, teléfono y correo electrónico.

struct contacto
{
	long ph;
	char nombre[20],agregar[20],correo[30];
}lista;

	char query[20],nombre[20];
	FILE *fp, *ft;
	int i,n,ch,l,found;

int main()
{



//agregar contacto
main:
	system("cls");  
		printf("\n \t              ** BIENVENIDO **");
		printf("\n\n\n\t\t\t Menu principal\n\t\t ************************* \n\t\t[1] Agregar un contacto nuevo\n\t\t[2] Lista de contactos guardados \n\t\t[3] Buscar un contacto\n\t\t[4] Editar un contacto \n\t\t[5] Borrar contacto existente\n\t\t[0] Salir\n\t\t ************************* \n\t\t");
		printf("Elige una opcion:");
			scanf("%d",&ch);

switch(ch)
{
case 0:
	printf("\n\n\t\t deseas salir?");
break;
	
case 1:

system("cls");
	fp=fopen("Contacto","a");
		for (;;)
		{ fflush(stdin);
			printf("coloca un espacio si has terminado \n Name :");
			scanf("%[^\n]",&lista.nombre);

			if(stricmp(lista.nombre,"")==0 || stricmp(lista.nombre," ")==0)
break;
	fflush(stdin);
		printf("Telefono:");
		scanf("%ld",&lista.ph);
		
		
	fflush(stdin);
		printf("Correo electronico:");
		gets(lista.correo);
		printf("\n");
		
	fwrite(&lista,sizeof(lista),1,fp);
}
	fclose(fp);
break;

//lista de contactos
case 2:
	system("cls");
		printf("\n\t\t*********************\n\t\t Lista de contactos \n\t\t*********************\n\nName\t\t Numero de telefono\t  \n\n");

			for(i=97;i<=122;i=i+1)
			{

	fp=fopen("Contacto","r");
		fflush(stdin);
		found=0;
		
while(fread(&lista,sizeof(lista),1,fp)==1)
{
	if(lista.nombre[0]==i || lista.nombre[0]==i-32)
	{
		printf("Nombre\t: %s \nTelefono\t: %d \nCorreo electronico\t: %d%s \n",lista.nombre, lista.ph, lista.agregar, lista.correo);
		found++;
	}
}
	if(found!=0)
	{
    printf("******************** [%c]-(%d)\n\n",i-32,found);
    getch();

	}
fclose(fp);

	}

break;



//Buscar contactos
case 3:
	system("cls");
	do
{
found=0;
	printf("\n\n\t..::Buscar contactos\n\t********************\n\t..::Nombre del contacto que deseas buscar: ");
	fflush(stdin);
	
	scanf("%[^\n]",&query);
	l=strlen(query);
	fp=fopen("contacto","r");

	system("cls");
		printf("\n\n..::Resultado de la busqueda '%s' \n********************\n",query);
while(fread(&lista,sizeof(lista),1,fp)==1)
{
	for(i=0;i<=l;i++)
		nombre[i]=lista.nombre[i];
		nombre[l]='\0';
		
	if(stricmp(nombre,query)==0)
	{
		printf("\n..::nombre\t: %s\n..::telefonot: %ld\n..::correo electronico\t:%d%s \n",lista.nombre,lista.ph,lista.agregar,lista.correo);
		found++;
		
	if (found%4==0)
	{
printf("..::Pulse cualquier tecla para continuar...");
getch();
	}
	}
}

	if(found==0)
		printf("\n..::No se encontraron coincidencias!");
	else
	printf("\n..::%d match(s) found!",found);
	fclose(fp);
	
	printf("\n ..::Quieres volver a intentar?\n\n\t[1] Si\t\t[0] No\n\t");
	scanf("%d",&ch);
	
}while(ch==1);
break;


//editar contacto
case 4:
	system("cls");
	fp=fopen("Contacto","r");
	ft=fopen("temp.dat","w");
	
	fflush(stdin);
	printf("..::Editar contacto\n********************n\n\t..::Ingrese el nombre del contacto a editar:");
	scanf("%[^\n]",nombre);
	
while(fread(&lista,sizeof(lista),1,fp)==1)
{
	if(stricmp(nombre,lista.nombre)!=0)
fwrite(&lista,sizeof(lista),1,ft);
}
	fflush(stdin);
		printf("\n\n..::Editando... '%s'\n\n",nombre);
		printf("..::Nombre:");
		scanf("%[^\n]",&lista.nombre);
	fflush(stdin);
		printf("..::Telefono:");
		scanf("%ld",&lista.ph);
	fflush(stdin);
		printf("..::Correo electronico:");
		gets(lista.correo);
printf("\n");
	fwrite(&lista,sizeof(lista),1,ft);
	
	fclose(fp);
	fclose(ft);
remove("Contacto");
rename("temp.dat","Contacto ");
break;


//Borrar contacto
case 5:
system("cls");
	fflush(stdin);
		printf("\n\n\t..::Borrar contacto\n\t********************\n\t..::Ingresar el contacto a eliminar:");
		scanf("%[^\n]",&nombre);
	fp=fopen("Contacto","r");
	ft=fopen("temp.dat","w");
	
while(fread(&lista,sizeof(lista),1,fp)!=0)

	if (stricmp(nombre,lista.nombre)!=0)
		fwrite(&lista,sizeof(lista),1,ft);
	fclose(fp);
	fclose(ft);
		remove("contacto");
		rename("temp.dat","contacto");
break;

default:
	printf("Elección inválida");
break;
}


	printf("\n\n\n..::+:\n\n\t[1] Menu principal\t\t[0] Salir\n");
	scanf("%d",&ch);
switch (ch)
{
case 1:
goto main;


case 0:
break;

default:
	printf("Elección inválida");
break;
}

return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int res,b;
	
	system("color 6");
	printf("¿Cuántas películas conforman la saga cinematográfica Harry Potter? \n");
	system("color 1");
	printf("1. 4 \n");
	printf("2. 8 \n");
	printf("3. 5 \n");
	
	scanf("%d",&res);
	if(res==2){
			system("color 2");
		printf("Correcto");
		b=1;
	}else{
		system("color");
		printf("Incorrecto");
		b=0;
		
}
	system("color 6");
	printf(" ¿Quien protagonizo la película En Busca de la Felicidad? \n");
	system("color 1");
	printf("1.jonny deep \n");
	printf("2.Will Smith\n");
	printf("3.vin diesel\n");
	
	scanf("%d",&res);
	if(res==2){
			system("color 2");
		printf("Correcto");
		b=b+1;
	}else{
		system("color 2");
		printf("Incorrecto");
		b=b+0;
		
}
	system("color 6");
	printf(" ¿Por qué película ganó Leonardo DiCaprio su primer Óscar?\n");
	system("color 1");
	printf("1.Titanic\n");
	printf("2.solo un sueño\n");
	printf("3.El Renacido\n");
	
	scanf("%d",&res);
	if(res==3){
			system("color 2");
		printf("Correcto");
		b=b+1;
	}else{
		system("color 2");
		printf("Incorrecto");
		b=b+0;
		
}
	system("color 6");
	printf("¿En qué película podemos encontrar a un payaso asesino llamado Pennywise?\n");
	system("color 1");
	printf("1.It\n");
	printf("2.Shrek\n");
	printf("3.Conjuro\n");
	
	scanf("%d",&res);
	if(res==1){
			system("color 2");
		printf("Correcto");
		b=b+1;
	}else{
		system("color 2");
		printf("Incorrecto");
		b=b+0;
		
}
	system("color 6");
	printf(" ¿Qué actor protagoniza la película Rocky? \n");
	system("color 1");
	printf("1.Carl Weathers\n");
	printf("2.Sylvester Stallone\n");
	printf("3.Lou Filippo\n");
	
	scanf("%d",&res);
	if(res==2){
			system("color 2");
		printf("Correcto ");
		b=b+1;
	}else{
		system("color 2");
		printf("Incorrecto");
		b=b+0;
		
}


return 0;
}

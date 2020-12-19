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
	system("color 6");
	printf("¿Durante la presidencia de Sixto Duran Ballén (1992-1996) el Ecuador se enfrentó bélicamente con el Perú  en las zonas denominadas? \n");
	system("color 1");
	printf("1.Paquisha, Mayaycu y  Machinaza\n");
	printf("2.Altos del Cenepa, Cueva de los Tallos, Cóndor Mirador\n");
	printf("3.Macara, Loja, Zamora\n");
	
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
	printf(" ¿Cual fue el presidente de Ecuador que murió en cumplimiento de sus funciones el 24 de mayo de 1981?\n");
	system("color 1");
	printf("1.Jaime Roldos Aguilera\n");
	printf("2.Velasco Ibarra\n");
	printf("3.Rodrigo Borja\n");
	
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
	printf(" ¿Entre los logros más importantes del pueblo Ecuatoriano, alcanzados en la revolución liberal de 1995 se pueden mencionar?\n");
	system("color 1");
	printf("1.La adopción de los símbolos patrios actuales\n");
	printf("2.construcción del ferrocarril\n");
	printf("3.construcción del puente de la unidad nacional\n");
	
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
	printf("¿La constitución que se encuentra en la vigencia fue aprobada por la última  Asamblea  Nacional que funcionaba en la denominada?\n");
	system("color 1");
	printf("1.Ciudad Futura\n");
	printf("2.Ciudad Alfaro\n");
	printf("3.Ciudad Alegría\n");
	
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
	printf(" ¿El Ecuador dolarizo su economía un ? \n");
	system("color 1");
	printf("1.9 de enero 2000\n");
	printf("2.9 de enero 2010\n");
	printf("3.9 de enero 1999\n");
	
	scanf("%d",&res);
	if(res==1){
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

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int res,b1,b2,b3;
	float suma;
	system ("color 17");
	printf("\n\n\t\t\t\t   Bienvenidos a esta trivia  \n");
	getch();
	printf("\t\t  las preguntas se clasifican en 3: peliculas, Ecuador y general  \n");
	getch();
	printf("\t\t  cada pregunta tendra un valor de 1,3 y 2 puntos respectivamente \n");
	getch();
	printf("\t\t  al final de juego se le dara el resultado de cada clasificacion \n\n");
	getch();
	printf("\t\t\t\t\t BUENA SUERTE \n");
	getch();
	system("cls");
	printf("\n\n\t\t\t\t\t   ADVERTENCIA  \n");
	getch();
	printf("\t\t\t Las preguntas solo se respoderna aplastando los numeros  \n");
	getch();
	printf("\t\t\t                     1, 2 y 3 \n");
	getch();
	printf("\t\t\tcualquie otra tecla marcara como puntuacion 0 puntos al final \n");
	getch();
	system("cls");
	system("color 76");
	printf("\t\t\t\t  Clasificacion PELICULAS(Valor 1 punto) \n");
	getch();
	printf("\t\t\t\tVeamos tu conocimiento en el mundo del cine \n");
	getch();
	system("cls");
	printf("\n\n\t\t\tNumeros de peliculas que conforman la saga\n\t\t\tcinematografica Harry Potter:\n\n");
	printf("\t\t\t1. 9 \n");
	printf("\t\t\t2. 8 \n");
	printf("\t\t\t3. 7 \n");
	scanf("%d",&res);
	if(res==2){
		b1=1;
	}else{
		b1=0;
}
	system("cls");
	printf("\n\n\t\t\tProtagonista de la pelicula En Busca\n\t\t\tde la Felicidad: \n\n");
	printf("\t\t\t1. Jonny Deep \n");
	printf("\t\t\t2. Will Smith\n");
	printf("\t\t\t3. Vin Diesel\n");
	scanf("%d",&res);
	if(res==2){
		b1=b1+1;
	}else{
		b1=b1+0;
}
	system("cls");
	printf("\n\n\t\t\tPelicula por la cual gano Leonardo DiCaprio \n\t\t\tsu primer Oscar\n\n");
	printf("\t\t\t1. Titanic\n");
	printf("\t\t\t2. El lobo de Wall Street\n");
	printf("\t\t\t3. El Renacido\n");
	scanf("%d",&res);
	if(res==3){
		b1=b1+1;
	}else{
		b1=b1+0;
}
	system("cls");
	printf("\n\n\t\t\tPelicula podemos encontrar a un\n\t\t\tpayaso asesino llamado Pennywise:\n\n");
	printf("\t\t\t1. It\n");
	printf("\t\t\t2. Jeepers Creepers\n");
	printf("\t\t\t3. Hallowem\n");
	scanf("%d",&res);
	if(res==1){
		b1=b1+1;
	}else{
		b1=b1+0;
}
	system("cls");
	printf("\n\n\t\t\tProtagoniza de la pelicula Rocky:\n \n");
	printf("\t\t\t1. Carl Weathers\n");
	printf("\t\t\t2. Sylvester Stallone\n");
	printf("\t\t\t3. Lou Filippo\n");
	scanf("%d",&res);
	if(res==2){
		b1=b1+1;
	}else{
		b1=b1+0;
}
	system("cls");
	system("color E4");
	printf("\t\t\t\t  Clasificacion ECUADOR(Valor 3 punto) \n");
	getch();
	printf("\t\t\t\tSolo para quienes sepan de nuestro pais \n");
	getch();
	system("cls");
	printf("\n\n\t\t\tDurante la presidencia de Sixto Duran Ballen (1992-1996)\n\t\t\tel Ecuador se enfrento belicamente con el Peru  en las zonas denominadas:\n\n");
	printf("\t\t\t1. Paquisha, Mayaycu y  Machinaza\n");
	printf("\t\t\t2. Altos del Cenepa, Cueva de los Tallos, Condor Mirador\n");
	printf("\t\t\t3. Macara, Loja, Zamora\n");
	scanf("%d",&res);
	if(res==2){
		b2=3;
	}else{
		b2=0;
}
	system("cls");
	printf("\n\n\t\t\tEl presidente del Ecuador que murio en cumplimiento de sus\n\t\t\tfunciones el 24 de mayo de 1981:\n\n");
	printf("\t\t\t1. Jaime Roldos Aguilera\n");
	printf("\t\t\t2. Velasco Ibarra\n");
	printf("\t\t\t3. Rodrigo Borja\n");
	scanf("%d",&res);
	if(res==1){
		b2=b2+3;
	}else{
		b2=b2+0;
}
	system("cls");
	printf("\n\n\t\t\tEntre los logros mas importantes del pueblo Ecuatoriano alcanzados\n\t\t\ten la revolucion liberal de 1995 se pueden mencionar:\n\n");
	printf("\t\t\t1. La adopcion de los simbolos patrios actuales\n");
	printf("\t\t\t2. Construccion del ferrocarril\n");
	printf("\t\t\t3. Construccion del puente de la unidad nacional\n");
	scanf("%d",&res);
	if(res==2){
		b2=b2+3;
	}else{
		b2=b2+0;
}
	system("cls");
	printf("\n\n\t\t\tLa constitucion que se encuentra en la vigencia fue aprobada por la\n\t\t\tultima  Asamblea  Nacional que funcionaba en la denominada:\n\n");
	printf("\t\t\t1. Ciudad Futura\n");
	printf("\t\t\t2. Ciudad Alfaro\n");
	printf("\t\t\t3. Ciudad Alegria\n");
	scanf("%d",&res);
	if(res==2){
		b2=b2+3;
	}else{
		b2=b2+0;
}
	system("cls");
	printf("\n\n\t\t\tEl Ecuador dolarizo su economia en: \n\n");
	printf("\t\t\t1. 9 de enero 2000\n");
	printf("\t\t\t2. 8 de enero 2000\n");
	printf("\t\t\t3. 9 de enero 1999\n");
	scanf("%d",&res);
	if(res==1){
		b2=b2+3;
	}else{
		b2=b2+0;		
}
	system("cls");
	system("color A5");
	printf("\t\t\t\t     Clasificacion GENERAL(Valor 2 punto) \n");
	getch();
	printf("\t\t\t\t Esta es una recopilacion alazar de varios temas\n");
	getch();
	system("cls");
	printf("\n\n\t\t\tEl ultimo protecto animado de \n\t\t\tDragon Ball es:\n\n");
	printf("\t\t\t1. Dragon Ball Super \n");
	printf("\t\t\t2. Dragon Ball Super Broly la Pelicula \n");
	printf("\t\t\t3. Dragon Ball Super Heroes \n");
	scanf("%d",&res);
	if(res==3){
		b3=2;
	}else{
		b3=0;
}
	system("cls");
	printf("\n\n\t\t\tUn paralelogramo es una: \n\n");
	printf("\t\t\t1. Figura de 4 lados \n");
	printf("\t\t\t2. Figura de 4 dimensiones\n");
	printf("\t\t\t3. Figura de 2 lineas paralelas\n");
	scanf("%d",&res);
	if(res==1){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tPais mas pequeño de todo el \n\t\t\tglobo terraqueo:\n\n");
	printf("\t\t\t1. El Baticano\n");
	printf("\t\t\t2. Stanbul\n");
	printf("\t\t\t3. Cheskolovaquia\n");
	scanf("%d",&res);
	if(res==1){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tFrase dicha por el tio Ben en el comic\n\t\t\tde Amazing Spider man Numero 1:\n\n");
	printf("\t\t\t1. Un gran poder conlleva una gran responasbilidad\n");
	printf("\t\t\t2. Hola Peter\n");
	printf("\t\t\t3. Me gusta los nachos\n");
	scanf("%d",&res);
	if(res==2){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tEx estrella de la WWE que no se volvio actor:\n \n");
	printf("\t\t\t1. The Rock\n");
	printf("\t\t\t2. Jonh Cena\n");
	printf("\t\t\t3. Daniel Brayan\n");
	scanf("%d",&res);
	if(res==3){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tTitulo mundial que no consta como capeonatos\n\t\t\tmundial segun Dave Meltzer:\n\n");
	printf("\t\t\t1. El Titulo Universal \n");
	printf("\t\t\t2. El Titulo de la AAA\n");
	printf("\t\t\t3. El Titulo de NJPW\n");
	scanf("%d",&res);
	if(res==2){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tEl primer pais donde se realizo una revolucion\n\t\t\tpara terminar el feudalismo:\n\n");
	printf("\t\t\t1. Francia\n");
	printf("\t\t\t2. Gran Bretaña\n");
	printf("\t\t\t3. Estado Unidos\n");
	scanf("%d",&res);
	if(res==1){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tPais del donde es presedente la marca de celures\n\t\t\tSamsung:\n\n");
	printf("\t\t\t1. Estados Unidos\n");
	printf("\t\t\t2. China\n");
	printf("\t\t\t3. Corea del Sur\n");
	scanf("%d",&res);
	if(res==3){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tLos tres grandes Imperios que habian en America\n\t\t\tantes del descubrimiento de America son:\n\n");
	printf("\t\t\t1. Mesopotamia,Azteca,Maya\n");
	printf("\t\t\t2. Azteca, Maya e Inca\n");
	printf("\t\t\t3. Inca, Azteca y Mesopotamica\n");
	scanf("%d",&res);
	if(res==2){
		b3=b3+2;
	}else{
		b3=b3+0;
}
	system("cls");
	printf("\n\n\t\t\tEl valor de dolar en euros: \n\n");
	printf("\t\t\t1. 1,13 euros\n");
	printf("\t\t\t2. 0.78 euros\n");
	printf("\t\t\t3. 0,82 euros\n");
	scanf("%d",&res);
	if(res==3){
		b3=b3+2;
	}else{
		b3=b3+0;		
}
	system("cls");
	system("color 02");
	printf("\n\n\t\t\t\t PUNTUACIONES FINALES \n\n");
	getch();
	printf("\n\n\t\t\tClasificacion PELICULAS: %d\n\n",b1);
	if(b1<=3){
		printf("\t\t\tTe falta cine muchacho");
	}else if(b1>3){
		printf("\t\t\tVeo que eres un hombre de cultura");
	}
	getch();
	printf("\n\n\t\t\tClasificacion ECUADOR: %d\n\n",b2);
	if(b2<9){
		printf("\t\t\tExtanjero has de ser");
	}else if(b2>=9){
		printf("\t\t\tSi eres de aqui mijin");
	}
	getch();
	printf("\n\n\t\t\tClasificacion GENERAL: %d\n\n",b3);
	if(b3<16){
		printf("\t\t\tNecesitas conectarte con la gente");
	}else if(b3>=16){
		printf("\t\t\tSi que eres alguien listo");
	
	}
	getch();
   	printf("\n\n\n\t\t\tGRACIAS POR JUGAR\n\n");
   	getch();
	system("pause");
	return 0;
}

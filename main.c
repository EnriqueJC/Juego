#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int res,b[25],i;
	
	System("color ");
	printf("SDSD\n");
	System("color");
	printf("1.\n");
	printf("2.\n");
	printf("3.\n");
	
	scanf("%d",&res);
	if(res==1){
			System("color");
		printf("Correcto");
		b[0]=1;
	}else{
		System("color");
		printf("Incorrecto");
		b[0]=0;
		
}

return 0;
}

#include <stdio.h>

int main(){

float temp[3][3];
int dia, hora, suptemp=0;
float maxh=-100, minh=100, suma=0, prom, maxsem=-100, minsem=100, sumadia=0, prom2;
for(dia=0; dia<3; dia++){
	maxh=-1000;
	minh=1000;
	sumadia=0;
    for(hora=0; hora<3; hora++){
        printf("Del dia %d, ingrese la temperatura de la hora %d: ", dia+1, hora);
        scanf("%f", &temp[dia][hora]);
        if(maxh<temp[dia][hora]){
        	maxh=temp[dia][hora];
		}
		if(minh>temp[dia][hora]){
			minh=temp[dia][hora];
		}
		suma=(suma+temp[dia][hora]);
		sumadia=(sumadia+temp[dia][hora]);
		
		if(temp[dia][hora]>=30){
          suptemp++;
        }
    }
        
       if(maxsem<maxh){
    	maxsem=maxh;
	}
	if(minsem>minh){
		minsem=minh;
	}
        prom=sumadia/3;
        prom2=suma/9;
    	printf("\nTemperatura maxima del dia: [%.2f]", maxh);
    	printf("\nTemperatura minima del dia: [%.2f]", minh);
    	printf("\nTemperatura media del dia: [%.2f]", prom);
    	
    	printf("\n\n");
}
    	printf("\nTemperatura maxima de la semana: [%.2f]", maxsem);
    	printf("\nTemperatura minima de la semana: [%.2f]", minsem);
    	printf("\nTemperatura media del semana: [%.2f]", prom2);
    	
    	printf("\n\n");

        printf("\nDias donde la temperatura fue mayor a 30 grados: %d", suptemp);

return 0;
}

/*
15. Ivesti sveika skaiciu N. 
Ivesti N*N sveiku skaiciu, kurie sudarys kvadratine matrica.
Patikrinti, ar ji yra magiskas kvadratas, t.y. 
visu stulpeliu, eiluciu ir istrizainiu sumos vienodos. 
*/

#include <stdlib.h>
#include <stdio.h>

void Inicijavimas (int**, int);
void Atsakymas (int, int**);
void dinaminis (int, int**);

main(){ 
    int dydis;
    int** matrix;
    int** matrica;
	
	printf ("Iveskite Kvadratinio masyvo dydi: ");
    scanf("%d", &dydis);

	dinaminis(dydis, matrica);
	**matrica=*(*(matrix+dydis)+dydis);
    Inicijavimas (matrica, dydis);
    Atsakymas (dydis, matrica);
    
    return 0;
}

void Inicijavimas(int** matrica, int dydis) {
    int i,j;
	printf ("Dabar ivedinekite matricos elementus: \n");		
    for (i=0 ; i < dydis ; i++){
    	for (j=0 ; j < dydis ; j++){
        	scanf("%d", &matrica[i][j]);
        }	
    }
    for (i=0 ; i < dydis ; i++){
    	for (j=0 ; j < dydis ; j++){
        	printf("%d  ", matrica[i][j]);
        }
		printf("\n");	
    }
}

void Atsakymas(int dydis, int** matrica) {
	int SumEil1 = 0;									// I eilutes suma
	int SumStulp1 = 0;									// I stulpelio suma
	int Sum=0;											// Istrizaine 
	int SumEil2 = 0;									// Eiluciu sumos
	int SumStulp2 = 0;									// Stulpeliu sumos
	int x, y, k;
	int i, j;
	int saugiklis=0;
	
//perdavimo budas
//call by value
//call by refference
 
	for (x=0; x<dydis; x++){							//Istrizaine								
		for(y=0; y<dydis; y++){
			if(x==y)	
			Sum+=matrica[x][y];
		}
	}
	
	for (k=0; k<dydis; k++){							//Skaiciuojam pirmos eilutes ir pirmo stulpelio sumas
		SumEil1 += matrica[k][0];
		SumStulp1 += matrica[0][k];
	}
	
	for (i=0; i<dydis; i++){							
		for (j=0; j<dydis; j++){						
			SumEil2 += matrica[i][j];					
			SumStulp2 += matrica[j][i];					
		}
		if (SumEil1!=Sum ||
			SumEil1!=SumEil2 ||  
			SumEil1!=SumStulp1 ||
			SumEil1!=SumStulp2 ){
			saugiklis++;
		}
		SumEil2 = 0;
		SumStulp2 = 0;
	}
	if (saugiklis<1)
	printf("Taip, tai yra magiskasis kvadratas");
	if (saugiklis>0)
	printf("Ne, tai nera magiskasis kvadratas");
}

void dinaminis (int dydis, int** matrix){
	int i;
	matrix=(int**)malloc(sizeof(int*)*dydis);
    for (i=0 ; i < dydis ; i++) {
        matrix[i]=(int*)malloc(sizeof(int)*dydis);
    }
}

#include <stdio.h>							
main(){
	int skaicius;	// momentinis skaicius
	int kiekis=0;	// Skaiciu, kurie prasideda "1" kiekis

    printf("Dabar ivedinekite sveikus skaicius. Sekos pabaiga = 0 \n");
	scanf("%d",&skaicius);

    while(skaicius!=0){
		for(int i=0; i<=10; i++){
			if(skaicius>9)	skaicius/=10;
			if(skaicius==1){
				kiekis++;
				break;}
			if(skaicius<10 && skaicius!=1)	
				break;}
			scanf("%d",&skaicius);}
	
	printf("Skaiciu, kurie prasideda skaitmeniu 1 kiekis: %d", kiekis);
    
	getchar();
    getchar();

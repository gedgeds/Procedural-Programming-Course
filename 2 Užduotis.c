#include <stdio.h>

main(){
    int G;
    int skaicius;
    int sand=1;
    int sumaT=0;
    int sumaN=0;
    int kiek=0;
    int kiekT=0;
    int kiekN=0;

    printf("Iveskite SVEIKA skaiciu G: \n");
    scanf("%d", &G);
    printf("Dabar ivedinekite skaicius. Sekos pabaiga = G \n");

    scanf("%d",&skaicius);

    while(skaicius!=G){
        kiek++;
        sand*=skaicius;
        if(skaicius>0){
            sumaT+=skaicius;
            kiekT++;}
        if(skaicius<0){
            sumaN+=skaicius;
            kiekN++;}
			scanf("%d",&skaicius);}

    if(kiek==0)
        printf("Skaiciu neivedete \n");
    if(kiek!=0)
    printf("Ivestu nariu skaicius: %d \n",kiek);

    if(kiekT==0)
        printf("Teigiamu nariu neivedete, todel suma negalima \n");
    if(kiekT!=0)
    printf("Teigiamu nariu suma: %d \n",sumaT);

    if(kiekN==0)
        printf("Neigiamu nariu neivedete, todel suma negalima \n");
    if(kiekN!=0)
    printf("Neigiamu nariu suma: %d \n",sumaN);

    if(kiek==0)
        printf("Skaiciu neivedete, todel sandauga negalima \n");
    if(kiek!=0)
    printf("ivestu skaiciu sandauga: %d \n",sand);}


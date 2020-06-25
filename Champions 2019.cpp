#include<stdio.h>
#include<stdlib.h>
int main(){
	int opc; 
	int octavos_de_final,cuartos_de_final, semifinales, final;
	printf("\n************UEFA Champions League 2019********\n");
	printf("\n1. Equipos Octavos De Final \n");
	printf("2. Equipos Cuartos De Final\n");
	printf("3. Equipos Semifinal\n");
	printf("4. Equipos Final\n");
	printf("5. Ganador Champions\n");
	printf("\n Elija la opcion \n");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			printf("\n Estos son los equipos que quedaron jugaron durante los octavos de final: \n");
			printf("\n SCHALKE VS MANCHESTER CITY \n");
			printf("\n ATLETICO VS JUVENTUS \n");
			printf("\n MANCHESTER UNITED VS PARIS \n");
			printf("\n TOTTENHAM VS DORTMUND \n");
			printf("\n LYON VS BARCELONA \n");
			printf("\n ROMA VS OPORTO \n");
			printf("\n AJAX VS REAL MADRID \n");
			printf("\n LIVERPOOL VS BAYERN DE MUNICH \n");
			break;
		case 2:
			printf("\n Estos son los equipos que quedaron y jugaron durante los cuartos de final: \n");
			printf("\n TOTTENHAM VS MANCHESTER CITY \n");
			printf("\n AJAX VS JUVENTUS\n");
			printf("\n MANCHESTER UNITED VS BARCELONA \n");
			printf("\n LIVERPOOL VS PORTO \n");
			break;
		case 3:
			printf("\n Estos son los equipos que jugaran la semifinal de la UEFA Champions League: \n");
			printf("\n TOTTENHAM VS AJAX \n");
			printf("\n BARCELONA VS LIVERPOOL\n");
			break;
		case 4:
			printf("\n Estos son los equipos que jugaran la GRAN FINAL DE LA UEFA Champions League: \n");
			printf("\n TOTTENHAM VS LIVERPOOL \n");
			break;
		case 5: 
		    printf("\n EL GRAN GANADOR DEL TORNEO FUE EL LIVERPOOL!!!!!!! \n");
		    break;
		    default: 
		    printf("Gracias por seguirnos de cerca en este gran torneo");
		    return 0;
		}
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
	
int qntd=0, i=0, f=0, r=0, m=0, outra=0, soma=0;
char equipe;
	
	printf("Informe a quantidade de pessoas que serao entrevistadas: \n");
	scanf(" %d", &qntd);
	
	if(qntd > 5){
		for(i=1;i<qntd;i++){
			printf("Informe a opiniao do entrevistado numero %d\n", i);
			printf("Considere: F = Ferrari, R = Red Bull, M = Mercedes\n");
			scanf(" %c", &equipe);
			
				if(toupper(equipe) == 'F'){
					f++;
				}else if(toupper(equipe) == 'R'){
					r++;
				}else if(toupper(equipe) == 'M'){
					m++;
				}else{
					outra++;
			}
		}
	}else{
printf("A quantidade de pessoas entrevistadas tem que ser maior que 5");
return 0;
	}
	
	system("cls");
	
	printf("Quantidade de votos, equipe Ferrari: %d\n", f);
	printf("Quantidade de votos, equipe RedBull: %d\n", r);
	printf("Quantidade de votos, equipe Mercedes: %d\n", m);
	printf("Quantidade de votos em outra equipe: %d\n", outra);
	
soma = f + r + m;
	
	if(outra > soma){
		printf("-----------------------------------\n");
		printf("Outra equipe privilegiada");
	}else if (outra == soma){
		printf("-----------------------------------\n");
		printf("Empate");
	}else{
		if(f > r && f > m){
			printf("-----------------------------------\n");
			printf("Ferrari");
		}else if(r > f && r > m){
			printf("-----------------------------------\n");
			printf("Redbull");
		}else if(m > f && m > r){
			printf("-----------------------------------\n");
			printf("Mercedes");
		}
	}
	
	return 0;
}

/* 
Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno.
A seguir,calcule a m�dia do aluno...
*/

#include<stdio.h>
int main (){
	double A, B, C, D, media; // double %lf - real - dupla precis�o
    	printf("Digite a nota A: ");
	scanf("%lf", &A);
    	printf("Digite a nota B: ");
	scanf("%lf", &B);
    	printf("Digite a nota C:");
	scanf("%lf", &C);
    	printf("Digite D");
	scanf("Media D", &D);
	media = (A*2+B*3+C*5)/10;
	   printf("Nota A %.1lf\n", A);
	   printf("Nota B %.1lf\n", B);
	   printf("Nota C %.1lf\n", C);
	   printf("media: %.1lf\n", media);
	
	
	
	return 0;
}

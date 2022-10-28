#include<stdio.h>
#include<math.h>

void Tabela(double k){
  printf("\n");
  printf("O K e igual a: %.g \n\n", k);
  printf("------------------------------------------------------------------------------------------------\n");
  printf("|K|\tA     |     B   |     Xo   |");
  printf(" F(x) = a^2 - 3  |"   );
  printf(" F(x) = X0^2 - 3  |"   );
  printf("\t    E          |");
  printf("\n");
}
void Calculo(double k, double a, double b){
	int  i;
	double Fa, Fx, E, M;
	
	for(i=0;i<=k+1;i++){
		M = (a+b)/2;
		printf("|%i|  ",i);
		printf(" %f|",a);
		printf(" %f|",b);
		printf("  %f|",M);
		Fa = (pow(a,2)-3);
		Fx = (pow(M,2)-3);
		E = (b-a);

		if (Fa*Fx>0){
			a = M;
		}
		if(Fa*Fx<0){
			b = M;
		}
		if(Fa*Fx ==0){
			if(Fa < 0 || Fx < 0){
				b = M;
			}
			if(Fa > 0 || Fx > 0){
				a = M;
			}
		}
		
		
		printf("\t%f    |", Fa);
		printf("\t  %f     |", Fx);
		printf("\t%f       |", E);
		printf("\n");
		
	}
	printf("------------------------------------------------------------------------------------------------");	
}
int main(void){
	double e=0.01, a=1, b=2,k = (log(b-a)-log(e))/log(2);
	printf("--CALCULADORA DE BISSECCAO--\n");
	Tabela(k);
	Calculo(k,a,b);
	return 0;
}



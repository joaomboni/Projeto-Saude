/*Programa que calcula o IMC das pessoas.
 * João Bonifácio.
 * 11 de Jun, 2021.
 */
#include <stdio.h>
#include <stdlib.h>


//Prototipos de funções.

double func_imc(int peso, float altura);

double func_bf(double imc, int idade, int sexo);

int func_sex(int sexo);


//Inicio do Codigo.
int
main(){



	printf("\n\n\t\tBem-vindo\n\n");



	//Variaveis separadas.


	int idade, sexo, f_sexo;
	float peso, altura;
	double imc, bf;
	
	//Realiaza as perguntas para gerar os resultados.
	printf("\nInforme seu peso:\n");
	scanf("%f", &peso);
	printf("\nInforme sua altura:\n");
	scanf("%f", &altura);
	printf("\nInforme seu idade:\n");
	scanf("%d", &idade);
//	printf("\nAperte <1> para masculino ou <0> para feminino:\n");
//	scanf("%d", &sexo);

	f_sexo = func_sex(sexo);
	printf("sexo = %d", f_sexo);

	if (sexo == 1){//se for homen deve ser valor 1
		printf("\nOla, cara!!\n\n");
		imc = func_imc(peso, altura);//chamada da funcao.
		printf("imc = %.2lf\n", imc);//Imprime o resultado do IMC.
		if (imc <= 25.00){//se for meno que 25 voce esta saudavel.
			printf("\n\nVoce esta saudavel!!\n\n");
		}	
		if (imc > 25.00){
			printf("\n\nVoce nao esta saudavel!!\n\n");
		}
		bf = func_bf(imc, idade, sexo);
		printf("BF = %.2lf\n", bf);


	}

	if (sexo == 2){	
		printf("\nOla, moca!\n\n");
		imc = func_imc(peso, altura);
		printf("imc = %.2lf\n", imc);
		if (imc <= 25.00){
			printf("\n\nVoce esta saudavel!!\n\n");
		}
		if (imc > 25.00){
			printf("\n\nVoce nao esta saudavel!!\n\n");
				}
		bf = func_bf (imc, idade, sexo);
		printf("BF = %.2lf\n", bf);
		
	}
	return 0;
}

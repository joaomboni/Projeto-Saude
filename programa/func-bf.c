/*Parte do programa com as funcao itulizdas.
 * João Bonifacio.
 * 18 de jul, 2021.
 */

#include <stdio.h>

//Funcao para descobrir o percentual de gorudura.
//bf = (1.20 * IMC) + (0,23 * IDADE) - (10.8 * SEXO) - 5.4.
//imc = PESO / (ALTURA * ALTURA).

//Funcão de IMC.
double func_imc(int peso, float altura){
	return (peso / (altura * altura));
}

//Funcao de BF.
double func_bf(double imc, int idade, int sexo){
	return ((1.20 * imc) + (0,23 * idade) - (10.8 * sexo) - 5.4);
}

//Funcao sexo.
int func_sex(int sexo){
	while(sexo != 1 && sexo != 2){
		printf("\nValor de sexo INCORRETO, tente novamente\n\n");
		printf("\nAperte <1> para masculino ou <2> para feminino \n\n");
		scanf("%d\n", &sexo);
		return sexo;
	}
}

#include <stdio.h>
#include <stdlib.h>

main(){

	float cod_vendedor = 0;
	float cod_peca = 0;
	float preco_peca = 0;
	float qtd_peca = 0;
	float comissao = 0;
	float porcentagem_por_peca = 0;
	
	printf("Digite o codigo do vendedor: ");
	scanf("%f", &cod_vendedor);
	
	printf("\n\n Digite o codigo da peca: ");
	scanf("%f", &cod_peca);
	
	printf("\n\n Digite o preco da peca: ");
	scanf("%f", &preco_peca);
	
	printf("\n\n Digite a quantidade de peca vendida: ");
	scanf("%f", &qtd_peca);
	
	porcentagem_por_peca = (preco_peca * 5)/100;
	comissao = porcentagem_por_peca + qtd_peca;
	
	printf("\n\n O codigo do vendedor e : %f \n\n O cogido da peca e: %f \n\n A comissao do vendedor sobre as pecas vendidas e de %4.2f R$ \n\n ",cod_vendedor,cod_peca,comissao);
	system("PAUSE");
	

}



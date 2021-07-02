#include <stdio.h>
#include <stdlib.h>

main(){

	float N_anos = 0;
	float N_cigarros = 0;
	float preco_cigarro = 0;
	float qtd_dinheirogasto = 0;
	float qtd_dinheironoano = 0;
	
	printf("Digite a quantos anos voce fuma: ");
	scanf("%f", &N_anos);
	
	printf("\n\n Digite a quantidade de cigarros que voce fuma por dia: ");
	scanf("%f", &N_cigarros);
	
	printf("\n\n Digite o preco de cada de cigarro: ");
	scanf("%f", &preco_cigarro);
	
	qtd_dinheirogasto = N_cigarros * preco_cigarro;
	qtd_dinheironoano = (N_cigarros * preco_cigarro) * 365;
	
	printf("\n\n Voce fuma a: %4.2f anos \n\n voce fuma: %4.2f cigarros por dia \n\n O preco de cada cigarro fumado e de %4.2f R$ \n\n Com essas informacoes voce gastou %4.2f R$ em cigarros \n\n\n",N_anos,N_cigarros,preco_cigarro,qtd_dinheirogasto);
	system("PAUSE");
	system("cls");
	system("color 4");
	printf("\n\n Mantendo essa quantidades de cigarros fumados *por um ano* daria %4.2f R$ \n\n ",qtd_dinheironoano);
	system("PAUSE");
	
	
}

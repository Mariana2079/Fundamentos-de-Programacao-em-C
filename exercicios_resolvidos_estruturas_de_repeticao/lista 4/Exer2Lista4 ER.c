/*2) Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o valor
unitário de cada produto. Calcule o valor total da compra. Informe esse valor para o usuário e
o usuário informa o valor para pagamento. O programa calcula o troco e informa-o ao usuário
em notas de 10, 5, 2, 1 e os centavos. Prosseguir a leitura enquanto a quantidade informada é
maior que zero. Se informado zero ou valor negativo para a quantidade não ler o valor
unitário.
Observação: fornecer o troco, de 57.30, por exemplo, na forma:
5 cédulas de 10 reais, 1 cédula de 5 reais, 1 cédula de 2 reais e 30 centavos.*/

 #include<stdio.h>
 int main(void)

 {
     float produto,total=0,pagamento,compra=0,troco=0;
     int qtde;
     int cedulas10, cedulas5, cedulas2, moedas1, centavos;

     do
     {
         printf("Informe a quantidade de produtos comprados: ");
         scanf("%d",&qtde);
         if(qtde>0)
         {
            printf("Informe o valor unitario do produto: ");
            scanf("%f",&produto);
            total=qtde*produto;
            compra=compra+total;
         }
    }while(qtde>0);

     printf("Valor total da compra: %.2f ",compra);
     printf("\nInforme o valor fornecido: ");
     scanf("%f",&pagamento);

     if(compra==pagamento)
     {
         printf("Sem troco");
     }
     else
     {
        troco = pagamento - compra;
        cedulas10 = (int)troco / 10;
        cedulas5 = (int)troco % 10 /10;
        cedulas2 = (int)troco % 5 / 2;
        moedas1 = (int)troco % 5 % 2;
        centavos = (troco - (int)troco) * 100;
        printf("O troco sera = %.2f\nEm:\n%d cedulas de 10\n%d cedulas de 5\n",troco,cedulas10, cedulas5);
        printf("%d cedulas de 2\n%d moedas de 1\n%d centavos\n",cedulas2,moedas1,centavos);
     }






 }

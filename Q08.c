#include<stdio.h>
main()
{
int link,num;
printf("====POSITIVO OU NEGATIVO====\n\n");
for(link=1;link<=10;link++)
{
printf("Digite um numero qualquer: ");
scanf("%d",&num);
if(num>0)
printf("O numero eh positivo\n");
else
printf("O numero eh negativo\n");
}
return(0);
}
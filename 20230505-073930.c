#include<stdio.h>
#include<math.h>
main()
{
float a,result;
int b;
while(b>0)
{
printf("Digite o numero 'A': ");
scanf("%f", &a);
printf("Digite o número 'B': ");
scanf("%d", &b);
result=pow(a,b);
printf("A potência de 'A' por 'B' eh igual a %.1f\n\n", result);
}
return(0);
}
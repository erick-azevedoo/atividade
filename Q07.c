#include<stdio.h>
main()
{
    int link,num,bg=0;
    printf("====QUAL O MAIOR?====\n\n");
    for(link=0; link<=10; link++)
    {
        printf("Digite um numero qualquer: ");
        scanf("%d",&num);
        if(num>bg)
        printf("%d eh maior que 0\n");
        else
        printf("%d eh menor que 0\n");
    }
    return(0);
}
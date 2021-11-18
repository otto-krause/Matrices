#include<stdio.h>
int main()
{
    int num[20][6],sum=0,prom=0;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("Ingrese la cantidad de habitantes del departamento %d del piso %d: ",j+1,i+1);
            scanf("%d",&num[i][j]);
        }
    }
    system("cls");
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<6;j++)
        {
            sum=sum+num[i][j];
            prom=sum/6;
        }
        printf("En el piso %d hay en promedio unos %d de personas",i+1,prom);

        printf("\n");
    }
    printf("En total hay unos %d de personas",sum);
    return 0;
}

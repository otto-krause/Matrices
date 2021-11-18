#include<stdio.h>
int main()
{
    int num[3][12],sum=0,sum2=0,i=0,j=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<12;j++)
        {
            printf("La recaudacion de la linea %d con el colectivo %d es de: \n",i+1,j+1);
            scanf("%d",&num[i][j]);
        }
    }
    system("cls");
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<12;j++)
        {
            printf("La recaudacion de la linea %d con el colectivo %d es de :%d \n",i+1,j+1,num[i][j]);
            sum=sum+num[i][j];
        }
        printf("\n");
        sum2=sum2+sum;
        printf("La recaudacion de la linea %d es de: %d\n",i+1,sum);
    }
    printf("La recaudación total es de: %d",sum2);
    return 0;
}

#include<stdio.h>
int main()
{
    int num[4][13]={0},sum=0,sum2=0,i=0,j=0;
    do
    {
        printf("Ingrese el numero del coche(0-12):\n");
        scanf("%d",&j);
        if(j>=1)
        {
            printf("Ingrese la linea(1-3):\n");
            scanf("%d",&i);
            printf("Ingrese la recaudacion:");
            scanf("%d",&num[i][j]);
        }
        else
        {
            break;
        }
    }
    while(j>=1);
    {
        if(j<=1)
        {
        for(int i=1;i<=3;i++)
        {
            sum=0;
            for(int j=1;j<=12;j++)
            {
                if(num[i][j]>0)
                {
                    printf("La recaudacion de la linea %d con el colectivo %d es de :%d \n",i,j,num[i][j]);
                    sum=sum+num[i][j];
                }
            }

                sum2=sum2+sum;
        }
        }

    }
    printf("La recaudacion total es de: %d",sum2);
    return 0;
}

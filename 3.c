#include<stdio.h>
int main()
{
    int num[2][3],men=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Ingrese el valor de %d, %d ",i,j);
            scanf("%d",&num[i][j]);

        }
    }
    system("cls");
    printf("La matriz ingresada es: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                num[i][j]=num[i][j]*4;
            }
            if(j==2)
            {
                num[i][j]=num[i][j]*3;
            }
            if(i==0 && j==0)
            {
                if(men<num[i][j])
                {
                    men=num[i][j];
                }
            }

            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    printf("El numero menor es : %d ",men);
    return 0;
}


#include<stdio.h>
int main()
{
    int num[2][3];
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
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int num[100][3],i,j,a;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Ingrese la nota del %d trimestre del alumno %d: ",j+1,i+1);
            scanf("%d",&num[i][j]);
        }
    }
    system("cls");
 do{
    printf("Quiere cambiar alguna nota?\n");
    printf("1=Si quiero cambiar | 2=No quiero cambiar  \n");
    scanf("%d",&a);
    if(a!=2)
        {
        printf("Ingrese el alumno:");
        scanf("%d",&i);
        printf("Ingrese el trimestre:");
        scanf("%d",&j);
        printf("Ingrese la nota:");
        scanf("%d",&num[i][j]);
        }
    }
    while(a!=2);
}

#include <stdio.h>
#include <stdlib.h>

    ///2. Write a program that reads a 2D array and prints transpose of the array.

void citire(int n, int m, int a[20][20])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        printf("a[%d][%d]=", i, j);
       scanf("%d", &a[i][j]);
    }
}
void transpose(int n, int m, int a[20][20], int b[20][20])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        b[j][i]=a[i][j];
}
void afisare_matrice(int n,int m, int a[20][20])
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int n,m, a[20][20], b[20][20],i,j;
    printf("Dati numarul de linii: ");
    scanf("%d", &n);
    printf("Dati numarul de coloane: ");
    scanf("%d", &m);
    citire(n,m, a);
    transpose(n,m,a,b);
    printf("Transpusa matricei este:\n");
    afisare_matrice(m,n,b);
    return 0;
}

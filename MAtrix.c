#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the row and column of the matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];
      printf("enter the element of  matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the row and colummn of a matrix");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("enter the component of a matrix 1");
    
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 printf("enter the component of a matrix 2");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("multiplication \n");
       for(i=0;i<m;i++)
    {
        c[i][j]=0;
        for(j=0;j<n;j++)
        {
           c[i][j]+=a[i][j]*b[i][j];
        }
    }
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
     
}
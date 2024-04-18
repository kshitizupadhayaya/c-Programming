#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the no of rows ");
    scanf("%d",&m);
     printf("enter the no of columns ");
     scanf("%d",&n);
     int a[m][n],b[m][n],c[m][n];
     printf("enter the elements of matrix a");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
       
     }
       printf("enter the elements of matrix b");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
     }
   printf("Addition of both is given as ");

for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
     }
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
           printf("matrix is %d",c[m][n]);
        }
        printf("\n");
     }
    
}
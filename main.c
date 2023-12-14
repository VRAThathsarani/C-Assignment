#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int m,n;
    int i,j;
    int product[m][1];
    int sum;


    printf("Enter the rows of the Table A:");
    scanf("%d",&m);
    printf("Enter the columns of the Table A and Enter the rows of the matrix X:");
    scanf("%d",&n);

    int A[m][n];
    int X[n][1];
    int Y[m][1];

    printf("Enter the elements of Table A:\n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements of Table X:\n");

    for (j=0; j<n; j++)
    {
        scanf("%d",&X[j][0]);
    }

    printf("AX=Y\n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sum += A[i][j] * X[j][0];
        }
        Y[i][0] = sum;
        sum=0;
    }

    printf("Resulting Matrix\n");

    for (i=0; i<m; i++)
    {
        printf("%d\n",Y[i][0]);
    }


    return 0;
}

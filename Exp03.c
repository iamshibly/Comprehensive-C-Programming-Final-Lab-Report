#include <stdio.h>

int main()
{
    int n,i,j,sum=0,max_sum = 0,max_i, max_j;
    printf("Enter a positive integer for the size of the 2D grid: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter positive integer elements of the 2D grid:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The 2D grid is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The 2D grid with the sum of adjacent cells is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                if(j==0)
                {
                    sum=a[i][j+1]+a[i+1][j]+a[i+1][j+1];
                }
                else if(j==n-1)
                {
                    sum=a[i][j-1]+a[i+1][j-1]+a[i+1][j];
                }
                else
                {
                    sum=a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
                }
            }
            else if(i==n-1)
            {
                if(j==0)
                {
                    sum=a[i-1][j]+a[i-1][j+1]+a[i][j+1];
                }
                else if(j==n-1)
                {
                    sum=a[i-1][j-1]+a[i-1][j]+a[i][j-1];
                }
                else
                {
                    sum=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1];
                }
            }
            else
            {
                if(j==0)
                {
                    sum=a[i-1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
                }
                else if(j==n-1)
                {
                    sum=a[i-1][j-1]+a[i-1][j]+a[i][j-1]+a[i+1][j-1]+a[i+1][j];
                }
                else
                {
                    sum=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
                }
            }
            if(sum>max_sum)
            {
                max_sum=sum;
                max_i=i;
                max_j=j;
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("The maximum sum of adjacent cells is %d and the cell with the maximum sum is (%d,%d).\n",max_sum,max_i, max_j);
    return 0;
}

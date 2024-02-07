#include<stdio.h>
int main(){
    int p,e;
    printf("Enter the threshold value of the passing number:");
    scanf("%d",&p);
    printf("Enter the threshold value of the excellence number:");
    scanf("%d",&e);
     if(e>=p){
         int n;
         printf("Enter a number:");
         scanf("%d",&n);
         if(n<p)
              {
              printf("It is a failing number");
              }
         else {
         if(n>=p)
              {
                     printf("It is a passing number\n");
              }
         if(n>=e)
              {
                     printf("It is an excellent number");
              }
              }
            }
         else
              {
            printf("Input is invalid");
              }
return 0;
}


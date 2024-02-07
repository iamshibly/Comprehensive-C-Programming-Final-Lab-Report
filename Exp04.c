#include<stdio.h>
int calSum(int oddN);
int main(){
    int n;
    printf("Enter only odd number: ");
    scanf("%d",&n);
    printf("%d",calSum(n));
    return 0;
}
int calSum(int oddN){
    if(oddN==1)
    return 3;
    return calSum(oddN-2)+(oddN*(oddN+2));
}

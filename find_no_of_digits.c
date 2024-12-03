// Number : 123 Output : 3
//last digit get using %10 and rest digits using /10
//for both positive and negative numbers 
#include<stdio.h>
int main()
{

    int n,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==0)
    {
        count+=1; 
    }
    while(n!=0) 
    {
        n=n/10; //do as many times as the number of digits; using while loop as not aware of constant iterations
        count+=1;
    }
    printf("The number of digits is %d",count);
    return 0;
}
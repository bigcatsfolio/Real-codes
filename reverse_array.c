#include<stdio.h>
int main()
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    if(n<=0)
    {
        printf("Array Empty!!! or Invalid size");
        return 0;
    }

    //Enter the elements of the array
    printf("Enter the element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //swapping in the same array
    int temp; 
    for(int j=0;j<n/2;j++)
    {
        temp=a[j];
        a[j]=a[n-j-1];
        a[n-j-1]=temp;
    }

    //printing the reversed array
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}



//TC: O(n)
//SC: O(n)

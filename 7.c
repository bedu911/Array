#include<stdio.h>
// Function to take input from user
void input(int a[], int n) 
{
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}
// Function to display the array elements
void display(int a[], int n)
{
    printf("Array elements:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
//Function To sort in Ascending order
void decending(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int a[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n > 100 || n < 0)
    {
        printf("Invalid size.\n");
        return 0;
    }
    input(a, n);
    printf("Before Sorting\n");
    display(a, n);
   printf("After Sorting\n");
   decending(a,n);
   display(a,n);
    return 0;
}

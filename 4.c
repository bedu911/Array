//Linary Search
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
//Function To Search
void search(int a[],int n)
{
    int key,f=-1;
    printf("Enter the Data To Be Search:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f=i;
        }
    }
    if(f!=-1)
    {
        printf("%d Is Found in Array--->At Index:%d",key,f);
    }
    else{
        printf("Not Found\n");
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
    display(a, n);
    search(a,n);
    return 0;
}

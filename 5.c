//Binary Search
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
//Function To Search -> only For Sorted Array
void search(int a[],int n)// This Only For Ascending Order
{
    int key,f=-1,low=0,mid,high=n-1;
    printf("Enter the Data To Be Search:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            f=mid;
            break;
        }
        else if (a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(f!=-1)
    {
        printf("%d is Found In the Array -->At index %d\n",key,f);
    }
    else
    {
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

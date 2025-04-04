//  Traversing a 1D Array 
#include<stdio.h>
//Function To Take Data From User
void input(int a[],int n) 
{
    printf("Enter the Elements of Array\n");
   for(int i=0;i<n;i++) //TC:O(n)
   {
       scanf("%d",&a[i]);
   }
}
//Function To Display The Elements of Array
void display(int a[],int n)
{
    printf("Array Elements\n");
    for(int i=0;i<n;i++)//TC:O(n)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[100],n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    if(n>100){ 
        return 0;
    }
    input(a,n);
    display(a,n);
    return 0;
}
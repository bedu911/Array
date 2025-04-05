#include<stdio.h>
void input(int a[],int n) // To Take Data From User
{
    printf("Enter Array Elements\n");
    for(int i=0;i<n;i++)
    {
        printf("[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n) //To Display ELements of Array
{
    printf("Array ELements\n");
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i,a[i]);
    }
}
int deletion(int a[],int n) //Delete GIven Key
{
    int key,found=-1;
    printf("Enter the ELement To be Delete:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key){
            found=i;
            break;
        }
    }
    if(found==-1)
    {
        printf("ELement Not Found\n");
        return n;
    }
    else
    {
       for(int i=found;i<n-1;i++)
       {
           a[i]=a[i+1];
       }
       return n-1;
    }
}
int delection1(int a[],int n)//Delete Given Index
{
    int index;
    printf("Enter the Index To be Delete:");
    scanf("%d",&index);
    if(index>=0 && index<n)
    {
        for(int i=index;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        return n-1;
    }
    else
    {
        printf("Invalid Index\n");
        return n;
    }
}
int insertion(int a[],int n) //Insert ELement At Specific  
//Index
{
    int val,index;
    printf("Enter the Data to be insert:");
    scanf("%d",&val);
    printf("Enter the Index:");
    scanf("%d",&index);
    if(index>=0 && index<=n)
    {
       for(int i=n;i>index;i--)
       {
           a[i]=a[i-1];
       }
       a[index]=val;
       return n+1;
    }
    else
    {
        printf("Invalid Position\n");
        return n;
    }
}
void linearsearch(int a[],int n) //Search ELement For Sort and //Unsorted Array
{
    int key,found=-1;
    printf("Enter the Element To be Search:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=i;
            break;
        }
    }
    if(found==-1){
        printf("Not Found\n");
    }else{
        printf("Found ->At %d index",found);
    }
}
void binarysearch1(int a[],int n){ //for ascending order
    int key,low=0,mid,high=n-1,found=-1;
    printf("Enter the Element To Be search:");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            found=mid;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     if(found==-1){
        printf("Not Found\n");
    }else{
        printf("Found ->At %d index",found);
    }
}
void binarysearch2(int a[],int n){ //for decending order
    int key,low=0,mid,high=n-1,found=-1;
    printf("Enter the Element To Be search:");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            found=mid;
            break;
        }
        else if(a[mid]<key)
        {
           high=mid-1;
        }
        else{
             low=mid+1;
        }
    }
     if(found==-1){
        printf("Not Found\n");
    }else{
        printf("Found ->At %d index",found);
    }
}
void ascending(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
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
void minmax(int a[],int n)
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
    printf("Largest ELement:%d\n",a[0]);
    printf("Smallest Element:%d\n",a[n-1]);
}
void min(int a[],int n)
{
    int s=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<s){
            s=a[i];
        }
    }
    printf("smallest Element:%d\n",s);
}
void max(int a[],int n)
{
    int h=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];
        }
    }
    printf("Largest Element:%d\n",h);
}
void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
int main()
{
    int a[100],n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    input(a,n);
    //call any function as you wish
    int choice;
do {
    printf("\nMenu:\n");
    printf("1. Display\n2. Insert\n3. Delete by Value\n4. Delete by Index\n5. Linear Search\n6. Binary Search (Asc)\n7. Binary Search (Desc)\n8. Sort Ascending\n9. Sort Descending\n10. Min\n11. Max\n12. Min & Max (Sorted)\n13. Reverse\n0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: display(a, n); break;
        case 2: n = insertion(a, n); break;
        case 3: n = deletion(a, n); break;
        case 4: n = delection1(a, n); break;
        case 5: linearsearch(a, n); break;
        case 6: binarysearch1(a, n); break;
        case 7: binarysearch2(a, n); break;
        case 8: ascending(a, n); break;
        case 9: decending(a, n); break;
        case 10: min(a, n); break;
        case 11: max(a, n); break;
        case 12: minmax(a, n); break;
        case 13: reverse(a, n); break;
        case 0: printf("Exiting...\n"); break;
        default: printf("Invalid Choice\n");
    }
} while(choice != 0);
return 0;

}
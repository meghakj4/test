#include<stdio.h>

void sort_array(int *arr,int size){
    int temp,i,j;
    for (i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    printf("!!SORTED ARRAY!!\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }printf("\n");
    
}

void main(){

int n,i,j;
printf("enter size of array: \n");
scanf("%d",&n);

int arr[n];
printf("enter elements to array");

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

int target,flag=0;
printf("enter search data: \n");
scanf("%d",&target);

sort_array(arr,n);

int low = 0,high = n-1;
while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
        flag=1;
    }

    if(arr[mid]<target){
        low = mid+1;
    }else{
        high = mid-1;
    }
}

flag?printf("element found"):printf("element not found");
}
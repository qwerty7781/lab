#include<stdio.h>

void main(){
    int limit,i,arr[50],flag=0,key,j,temp,high,low,mid;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("Enter the elements: ");
    for(i=0;i<limit;i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements in sorted way\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }


    printf("Enter the key to search");
    scanf("%d",&key);
    high=limit-1;
    low=0;
    
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key){
            flag=1;
            break;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
    }
    if(flag==1){
        printf("element is found at %d",mid+1);
    }else{
        printf("Element not found");
    }
}

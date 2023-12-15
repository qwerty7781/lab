#include <stdio.h>

void main(){
    int limit,i,arr[50],flag=0,key;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("Enter the elements: ");
    for(i=0;i<limit;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search");
    scanf("%d",&key);
    for(i=0;i<limit;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("element is found at %d",i+1);
    }else{
        printf("Element not Found!");
    }
}

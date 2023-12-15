#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
}a[10],b[10],c[10];

void main(){
    
    int i,n1,n2,j,k;

    printf("\nenter the number of first polynomial: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("\nenter the %d coeffeciant: ",i+1);
        scanf("%d",&a[i].coeff);
        printf("enter the %d expononent: ",i+1);
        scanf("%d",&a[i].exp);
    }
      printf("\nenter the number of second polynomial: ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        printf("\nenter the %d coeffeciant: ",i+1);
        scanf("%d",&b[i].coeff);
        printf("enter the %d expononent: ",i+1);
        scanf("%d",&b[i].exp);
    }
    i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i].exp==b[j].exp){
            c[k].exp=a[i].exp;
            c[k].coeff=a[i].coeff+b[j].coeff;
            i++,k++,j++;
        }
        else if(a[i].exp>b[j].exp){
            c[k].exp=a[i].exp;
            c[k].coeff=a[i].coeff;
            i++,k++;
        }
        else if(a[i].exp<b[j].exp){
            c[k].exp=b[j].exp;
            c[k].coeff= b[j].coeff;
            j++;
            k++;
        }}
        while(i<n1){
            c[k].exp=a[i].exp;
            c[k].coeff=a[i].coeff;
            i++;
            k++;
        }
         while(j<n2){
            c[k].exp=b[j].exp;
            c[k].coeff=b[j].coeff;
            k++;
            j++;
        }
        printf("\n\nThe Added poly is: \n\n");
        for(i=0;i<k;i++){
            if(i!=k-1){
                printf("%d^%d+",c[i].coeff,c[i].exp);
            }else{
                printf("%d^%d",c[i].coeff,c[i].exp);
            }
        }
        printf("\n");
    }

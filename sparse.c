//sparse matrix

#include<stdio.h>

void main(){

    int i,j,sp[20][20],arr[20][20],row,col,seti=0,setj=0;

    printf("enter the number of rows");
    scanf("%d",&row);
     printf("enter the number of columns");
    scanf("%d",&col);

    printf("enter the elements: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
           
        }
    }
       printf("the matrix you entered is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    i=0,j=0;
    while(i<row){
        j=0;
        while(j<col){
            
            if(arr[i][j]!=0){
                printf("%d",arr[i][j]);
                sp[seti][setj]=i;
                sp[seti][setj+1]=j;
                sp[seti][setj+2]=arr[i][j];
                seti++;
                setj=0;
            }
            j++;
        }
        i++;

    }
    printf("the sparse matrix is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sp[i][j]);
        }
        printf("\n");
    }

}

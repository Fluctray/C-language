#include<stdio.h>

void main(){
    
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p)[4];
    int i,j;
    p = a;
    printf("Enter i = " );
    scanf("%d",&i);
    while(i>3||i<0){
        printf("Enter again i = ");
        scanf("%d",&i);
    }
    printf("Enter j = " );
    scanf("%d",&j);
    while(j>4||j<0){
        printf("Enter again j = ");
        scanf("%d",&j);
    }
    printf("a[%d][%d] = %d",i,j, *(*(p+i)+j));
}
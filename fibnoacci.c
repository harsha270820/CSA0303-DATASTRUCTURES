#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,num,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\t",n1,n2);
    }
     
   
}
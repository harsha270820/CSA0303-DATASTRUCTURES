#include<stdio.h>
void factorial(){
    int number,sum=1;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        sum=sum*i;
    }
    printf("THE FACTORIAL OF GIVEN NUMBER  %d",sum);
}

int main(){
    factorial();
    return 0;
}
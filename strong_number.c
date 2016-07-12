#include <stdio.h>

void main(){
    int i=2, num, sum=0;
    printf("Enter a number to see if it is strong: ");
    scanf("%d", &num);

    int temp = num;
    while(temp){
        int p = temp%10;
        temp = temp/10;
        int j, k=1;
        for(j=1;j<=p;j++){
            k *= j;
        }
        sum += k;
    }

    if(sum==num)
        printf("%d is strong\n", num);
    else
        printf("%d is NOT strong\n", num);
}

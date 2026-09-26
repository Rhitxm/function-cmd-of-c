//printing hello world five times using recursion
#include <stdio.h>
void printHW(int count);
int  main(){
    printHW(5);
    return 0;
}
//recursive funtion
void printHW(int count){
    if (count==0){
        return;
    }
    printf("hello world\n");
printHW(count-1);
}

//print sum of first n natural numbers using recursion
#include <stdio.h>
int sum(int n);
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}
//calculate factorial of n natural numbers


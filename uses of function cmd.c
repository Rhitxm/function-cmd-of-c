//print namaste and bonjour for different type of nationality
#include <stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter your language, i for Indian and f for French");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
   
    return 0;
}
void namaste(){
        printf("Namaste\n");
    }
void bonjour(){
        printf("Bonjour\n");
    }
//two print sum of two  numbers using function cmd
#include <stdio.h> 
int sum(int a, int b);
int main(){
int a, b;
printf("enter first number:\n");
scanf("%d", &a);
printf("enter second number:\n");
scanf("%d", &b);

int s=sum(a, b);
    printf("sum is :%d\n", s);
    return 0;
}
int sum(int x, int y){
    return x+y;
}

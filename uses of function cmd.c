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


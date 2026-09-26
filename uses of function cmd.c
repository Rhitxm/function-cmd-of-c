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

//calculating price using GST 

#include <stdio.h> 
void calculatePrice(float value);
    
int main(){
    float value=100.0;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){
    value=value+(value*0.18);
    printf("final value is:%f\n", value);
}
//to calculate area of square, rectangle and circle using functions
#include<stdio.h>
#include<math.h>
float areaofSquare(float side);
float areaofRectangle(float length, float breadth);
float areaofCircle(float radius);

int main(){
    float length=4.0;
    float breadth=10.0;
    printf("area is:%f", areaofRectangle(length, breadth));
return 0;
}
float areaofSquare(float side){
    return side*side;
}
float areaofRectangle(float length, float breadth){
    return length*breadth;
}
float areaofCircle(float radius){
    return 3.14*radius*radius;
}

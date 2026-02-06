//
// Created by Selin Ekici on 4.02.2026.
//

#include <stdio.h>

void hello(){
    printf("Hellooo!!!\n");
}

void print_age(int a){
    printf("Age: %d\n", a);
}

void get_age(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    print_age(age);
}

int get_num(){
    int x;
    printf("Enter the number:" );
    scanf("%d", &x);
    return x;
}

int addition(int a, int b) {
    return a + b;
}

void print_symbol(){
    putchar('#');
    putchar('\n');
}

void print_array() {
    char *sentence = "Hello C programming!";
    while(*sentence) {
        putchar(*sentence++);
    }
}


int get_number(){
    int a;
    scanf("%d", &a);
    return a;
}

void print_result(int result){
    printf("Result is %d", result);
}

int subtraction(int a, int b){
    return a - b;
}


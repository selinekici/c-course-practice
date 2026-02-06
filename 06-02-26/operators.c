//
// Created by Selin Ekici on 6.02.2026.
//

#include <stdio.h>

void binary_arithmetic_operators(int a, int b){

    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
}

void unary_arithmetic_operators(int a){

    printf("%d\n", a++);
    printf("%d\n", ++a);
    printf("%d\n", --a);
    printf("%d\n", a--);
    printf("%d\n", +a);
    printf("%d\n", -a);
}

int multiple_operators(int a, int b, int c){
    int result = a * b + a / c;
    return result;
}


void logical_operators(){
    int a = 0;
    int b = 0;

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);
}

void log_comparison(){
    int a = -1;
    int b = 20;
    printf("OR operator\n");
    printf("a = %d b = %d\n", a, b);

    if(a > 0 || b > 0){
        printf("Any one of the given value is greater than 0\n");
    } else {
        printf("Both values are less than 0\n");
    }
}


void log_comparison2(){
    int a = 10;
    int b = 20;
    printf("AND operator\n");
    printf("a = %d b = %d\n", a, b);

    if(a > 0 && b > 0){
        printf("Both values are greater than 0\n");
    } else {
        printf("Both values are less than 0\n");
    }
}

void precedence_operator() {
    int r;

    r = 3 + 4 * 2 > 10 && 5; // [( 3 + (4*2) ) > 10 ] && 5 =====> 11> 10 = 1 && 5 =>   res = 1
    printf("result = %d\n", r);
}

void what_time(){
    int hour;
    printf("What time is it?");
    scanf("%d", &hour);


    int n;
    printf("How many hours later?");
    scanf("%d", &n);

    printf("hour: %d\n", hour + n % 24);
}

void mod_operator(){
    int a = 20;
    int b = 5;

    int c = ++a % b--;

    printf("c = %d\n", c);
}

void comparison_operator(){
    int x;
    int y;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);

    printf("%d > %d = %d\n", x,y, x > y);
    printf("%d >= %d = %d\n", x,y, x >= y);
    printf("%d < %d = %d\n", x,y, x < y);
    printf("%d <= %d = %d\n", x,y, x <= y);
    printf("%d == %d = %d\n", x,y, x == y);
    printf("%d != %d = %d\n", x,y, x != y);

}

void condition_num(){
    double d = 0.;
    for(int i = 0; i < 11; ++i){
        d += 0.1;
    }
    if(d == 1){
        printf("true\n");
    } else {
        printf("false\n");
    }
}


void mixed_operator(){

    int a = 2;
    int b = 4;

    printf("%d\n", a++ + ++b > 5 && b--);
}


int is_fine(int speed, int seatbelt, int alcohol){
    return alcohol || (speed >= 120 && !seatbelt);
}

void calculate_exam(float midterm, float final, int non_attendance){

    float gpa;
    int is_pass;
    gpa = (midterm * 0.4) + (final * 0.6);
    int bonus = 0;

    if (gpa >= 55 && gpa < 60 && final >= 50) {
        bonus = 5;
    }

    if(non_attendance){
        bonus = 0;
    }

    gpa = gpa + bonus;

    is_pass = (gpa >= 60) && (final >= 50);

    printf("Gpa: %.2f\n", gpa);
    printf("Bonus: %d\n", bonus);
    printf("Is passed? %d\n", is_pass);
}







//
// Created by Selin Ekici on 2.02.2026.
//
#include <printf.h>
#include "functions.h"


int sum(int x, int y) {
    return x + y;
}

int sum2(int x, int y) {
    int result = x + y;
    return result;
}


int get_abs(int x) {
    if(x < 0) {
        return -x;
    } else {
        return x;
    }
}

int get_abs2(int x) {
    if(x < 0) {
        return -x;
    }
    return x;
}


int get_max(int x, int y) {
    if(x > y) {
        return x;
    }
    return y;
}

int get_max2(int x, int y) {
    return x > y ? x : y;  //turner operator
}

int get_abs3(int x) {
    return x < 0 ? -x : x;
}



int ndigit(int x) {
    if(x == 0) {
        return 1;
    }
    int count = 0;

    while (x != 0) {
        ++count;
        x = x/10;
    }
    return count;
}


int max3(int x, int y, int z) {
    int max = x;

    if( y > max) {
        return y;
    }
    if(z > max) {
        return z;
    }
    return max;
}


void foo(int x) {

    printf("foo called! x = %d\n", x);

}

void writing() {

    int a = 5;
    int b = 10;

    foo(a * b);

}

int square(int a) {
    return a * a;
}

void func(int x, ...);

double get_note_average(double a, double b) {
    double midterm = a * 0.40;
    double final = b * 0.60;

    return midterm + final;
}

void test(){
    printf("%.2f", get_note_average(50, 80));
}



int maxValue(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}



int maxValue2(int *arr, int size){
    int max = *arr;
    for(int i = 0; i < size; i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }
    return max;
}

























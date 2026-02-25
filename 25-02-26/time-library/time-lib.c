//
// Created by Selin Ekici on 25.02.2026.
//

#include "time-lib.h"
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void f(){
    time_t current_time;
    time(&current_time);

    printf("current time pc language: %ld\n", current_time);
    printf("current time: %s", ctime(&current_time));
}

void f1(){
    time_t current_time = time(NULL);

    char *human = ctime(&current_time);
    printf("current time is -> %s ", human);
}

void f2(){
    time_t current = time(NULL);
    struct tm *t = localtime(&current);

    printf("%d\n", t->tm_year+1900);
    printf("%d\n", t->tm_mon+1);
    printf("%d", t->tm_hour);

}

void f3(){
    time_t t1 = time(NULL);
    for(long i = 0; i < 100000000000; i++);

    time_t t2 = time(NULL);
    double elapsed = difftime(t2,t1);

    printf("time: %.2f", elapsed);
}

void f4(){
    clock_t start = clock();
    for(long i = 0; i < 1000000000; i++);
    clock_t end = clock();

    double elapsed = (double)(end-start) / CLOCKS_PER_SEC;
    printf("CPU Time: %f", elapsed);
}

void f5(){

    time_t t1 = time(NULL);
    sleep(3);

    time_t t2 = time(NULL);
    double elapsed = difftime(t2,t1);

    printf("elapsed time: %f", elapsed);
}

void f6(){

    time_t time1 = time(NULL);
    struct tm *t = localtime(&time1);
    //char buffer[100];
    char *buf = malloc(50);
    //strftime(buffer, 100, "%Y-%m-%d", t);
    strftime(buf, 50, "%H.%M.%S", t);
    printf("%s", buf);

    free(buf);
}
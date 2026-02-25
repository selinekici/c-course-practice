//
// Created by Selin Ekici on 9.02.2026.
//
#include <stdio.h>

void cal_age(){
    int bornYear;
    int currentYear;

    printf("Enter the born year: ");
    scanf("%d", &bornYear);

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    int age = currentYear - bornYear;

    printf("Age is %d", age);
}

void calculate_interest(){
    double mainMoney;
    double interestRate;

    printf("Enter the main money: ");
    scanf("%lf", &mainMoney);

    printf("Enter the interest rate (ex: 0.15): ");
    scanf("%lf", &interestRate);

    double profit = mainMoney * interestRate;
    printf("Interest profit: %.4lf\n", profit);
}

void divide_per_person() {
    int totalMoney;
    int personNum;

    printf("Enter the total money: ");
    scanf("%d", &totalMoney);

    printf("How many person? ");
    scanf("%d", &personNum);

    float money = (float)totalMoney / personNum;
    printf("money per person: %.2f\n", money);
}



void size(){
    printf("char: %d byte\n", sizeof(char));
    printf("int: %d byte\n", sizeof(int));
    printf("float: %d byte\n", sizeof(float));
    printf("double: %d byte\n", sizeof(double));
}
















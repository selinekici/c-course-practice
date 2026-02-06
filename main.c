#include <stdio.h>
#include "functions/functions.h"
#include "04-02-26/stdio.h"

int main() {


    hello();
    print_age(10);

    get_age();

    int a = get_num();
    printf("Entered num: %d\n", a);

    int b;
    int c;
    printf("Enter the two numbers: ");
    scanf("%d%d", &b, &c);

    int result = addition(b, c);
    printf("Result is %d", result);

    print_symbol();

    print_array();

    int k;
    int t;

    printf("Enter the two numbers: ");
    k = get_number();
    t = get_number();

    int res = subtraction(k, t);
    print_result(res);


    puts("AX211BBB//A!!");


}





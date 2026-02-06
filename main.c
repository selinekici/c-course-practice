#include <stdio.h>
#include "functions/functions.h"
#include "04-02-26/stdio.h"
#include "06-02-26/operators.h"

int main() {

    binary_arithmetic_operators(10, 5);

    unary_arithmetic_operators(2);


    int result = multiple_operators(10, 5, 2);

    printf("Expression result is %d\n", result);


    logical_operators();

    log_comparison();
    log_comparison2();

    precedence_operator();

    what_time();

    mod_operator();

    comparison_operator();

    condition_num();

    mixed_operator();



    //0 is false, non zero is true
    int speed = 120;
    int seatbelt = 0;
    int alcohol = 0;

    if (is_fine(speed, seatbelt, alcohol)) {
        printf("Fine applied\n");
    } else {
        printf("No fine\n");
    }

    calculate_exam(57, 55, 0);


}





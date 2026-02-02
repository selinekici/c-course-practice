#include <stdio.h>
#include "functions/functions.h"

int main() {


    int x =  ndigit(square(get_max2(2,5)));
    printf("%d\n", x);



    int a, b, c, d;

    printf("Enter the 4 number: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int max = get_max(get_max(a, b), get_max(c, d));

    printf("max = %d\n", max);


    test();


    int arr[] = {21, 522, 31, 1, 90, 11};

    int size = 6;

    int result = maxValue(arr, size);
    printf("%d", result);



    int N = sizeof(arr)/ sizeof(arr[0]);

    printf("%d", maxValue(arr, N));


}


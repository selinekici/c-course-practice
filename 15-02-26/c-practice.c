//
// Created by Selin Ekici on 15.02.2026.
//
#include <stdio.h>
#include "c-practice.h"

int bar(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("%d\n", *(p+1));
}

int foo1(){
    int a[] = {20, 40, 50, 80};
    int *p = a;

    printf("%d\n", *p);
}

int foo2(){
    int x = 5;
    int *p = &x;
    int **pp = &p;

    printf("%d", **pp);
}

int foo3(){
    int x = 10;
    const int *p = &x;
    x = 5;

    printf("%d", *p);
}

int foo4(){
    int *p = NULL;
    printf("%d", *p); //ub
}

int foo5(){
    int x = 4;
    int *p = &x;
    *p += 2;

    printf("%d\n", x);
}

int foo6(){
    int a = 5;
    int *p = &a;

    printf("%d\n", *p + 1);
}

int foo7(){
    int a = 5;
    int *p = &a;

    printf("%d\n", *p++);
}

int foo8(){
    int a = 5;
    int *p = &a;

    printf("%d\n", (*p)++);
    printf("%d\n", *p);

}

int foo9(){
    int a = 5;
    int *p = &a;

    printf("%d\n", a);
    printf("%d\n", (*p)++);
    printf("%d\n", a);
}

int foo10(){
    int x = 7;
    int *p = &x;
    int **pp = &p;
    **pp += 10;

    printf("%d\n", x);
}

int foo11(){
    int a = 6;
    int *p = &*(&a);

    printf("%d", *p);
}

int foo12(){
    int i = 10;
    int *p = &*&*&i;

    printf("%d", *p);
}

int foo13(){
    int a = 7;
    int *p = &a;
    int **pp = &p;
    **pp = **pp + 13;

    printf("%d", a);

}

int foo14(){
    int a[] = {10, 20, 30, 40, 50};
    printf("%d %d", a[0], 0[a]);
}

int foo15(){
    int a[] = {1, 2, 3};
    int (*pa)[] = &a;
    printf("%d %d", (*pa)[0], (*pa)[2]);

}

int foo16(){
    int x = 1;
    int *p = *&x;
    printf("%p\n",(void*)p); //ub

}

int foo17(){
    int a[] = {1, 2, 3, 4};
    const int *p = a;
    p++;
    printf("%d\n", *p);
}

int foo18(){
    int x=10, y=20;
    int *p = &x;
    int * const *pp = &p;
    **pp = 106;
    **pp = &y;
    printf("%d\n", **pp);


}

int foo25(){
    int x = 0x15678;
    char *p = (char *)&x;

    printf("Byte 0: %02x\n", p[0]);
    printf("Byte 1: %02x\n", p[1]);
    printf("Byte 2: %02x\n", p[2]);
    printf("Byte 3: %02x\n", p[3]);

}

int foo26(){
    struct A{
        char c;
        int i;
        char d;
    };

    printf("%zu\n", sizeof(struct A));
    printf("%zu", _Alignof(struct A));

}

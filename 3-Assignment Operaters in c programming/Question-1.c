#include <stdio.h>
// #include <stdio.h>

int main() {
    int a=5,b=-1,c=0;
    c=++a + --b + a++ + b++ - ++b;
    printf("a=%d, b=%d, c=%d",a,b,c);

    return 0;
}
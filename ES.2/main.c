#include<stdio.h>
int main(){
    int x = 5;
    int y = 10;
    int tmp;
    int *ptr = &x;
    int *ptr2 = &y;

    printf("%d ", *ptr);
    printf("%d\n", *ptr2);

    tmp = *ptr;
    *ptr = *ptr2;
    *ptr2 = tmp;

    printf("%d ", *ptr);
    printf("%d", *ptr2);

    return 0;
}
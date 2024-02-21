#include <stdio.h>

void swap(int *x, int *y) {
    int t;
    
	t = *x;
    *x = *y;
    *y = t;
}

main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

}

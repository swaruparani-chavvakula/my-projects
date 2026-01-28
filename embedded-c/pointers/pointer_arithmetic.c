//pointer arithmetics
#include <stdio.h>

int main(void) {
    int arr[3] = {10, 20, 30};
    int *p = arr;
 //p points to arr[0], so *(p + 1) gives arr[1] which is 20
    printf("%d\n", *(p + 1));
    return 0;
}

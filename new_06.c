#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("you entered 1\n");
            break;
        case 2:
            printf("you entered 2\n");
            break;
        case 3:
            printf("you entered 3\n");
            break;
        default:
            printf("nothing matched\n");
            break; // Add break statement here
    }

    return 0;
}
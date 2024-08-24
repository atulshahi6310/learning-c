#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input values using scanf
    printf("Enter the first value (a): ");
    scanf("%d", &a);
    printf("Enter the second value (b): ");
    scanf("%d", &b);
    // Swap the values using a temporary variable
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value stored in temp (original a) to b

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

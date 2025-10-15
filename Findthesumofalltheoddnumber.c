/*
Name of Student: Sayyed Affan Ahmed Maqsood Ahmed
UIN: 251P088
Class: Computer Engineering First Year
Division: D
*/
#include <stdio.h>

int main() {
    int lim;
    int sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &lim);

    for (int i = 0; i <= lim; i++) {
        if (i % 2 == 1) {  
            sum += i;
        }
    }

    printf("Sum of odd numbers is %d", sum);
    return 0;
}
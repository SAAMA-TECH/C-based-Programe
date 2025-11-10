/* NAME: Sayyed Affan Ahmed
BRANCH/YEAR: Computer Engineering/F.E
UIN: 251P088
ROLL NO: 13
DIV: D */
#include <stdio.h>

void counter() {
    static int count = 70; 
    count++;
    printf("count = %d \n", count);
}
int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}

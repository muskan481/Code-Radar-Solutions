#include <stdio.h>

char* welcome() {
    float a;
    scanf("You entered: %f",&a);
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}
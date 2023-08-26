
#include <stdlib.h>
#include <stdio.h>

int main() {
    char array[100] = "Mohamed Moustafa";
    int i = 0;
    while (array[i] != '\0') {
        printf("%c", array[i]);
        i++;
    }

    return 0;
}

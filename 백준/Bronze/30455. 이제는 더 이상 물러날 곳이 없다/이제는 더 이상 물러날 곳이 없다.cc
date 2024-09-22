
#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);

    if(input % 2 ==0) {
        printf("Duck");
    } else {
        printf("Goose");
    }
}
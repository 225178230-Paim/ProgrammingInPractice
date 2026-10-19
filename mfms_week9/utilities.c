#include <stdio.h>

int readINT(){
    int number=0;
    scanf("%d", &number);
    return number;
}

//second seccion
double readDouble(){
    double number=0;
    scanf("%lf", &number);
    return number;
}


//Third seccion
float readFloat(){
    float number=0;
    scanf("%f", &number);
    return number;
}

// fourth seccion
int getValidInt(const char *prompt, int min, int max) {
    int value;
    char extra;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d%c", &value, &extra) == 2 && extra == '\n'
            && value >= min && value <= max) {
            return value;
        }
        printf("Invalid input. Enter a number from %d to %d.\n", min, max);
        while ((extra = getchar()) != '\n' && extra != EOF);
    }
}
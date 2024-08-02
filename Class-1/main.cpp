#include <cstdio>
#include <cstring>
void printInFahrenheight(int num){
    double fahrenheit = (num * 9.0 / 5.0) + 32;
    printf("%d Celsius is %.2f Fahrenheit\n", num, fahrenheit);
}
void numbersGame(){
    char x[10];
    int y;
    printf("Enter desired datatype:\n'int'\n'string'\n'double'\n'char'\n");
    scanf("%9s", x);
    if (strcmp(x, "int") == 0) y = sizeof(int);
    else if (strcmp(x, "string") == 0) y = sizeof(char *);
    else if (strcmp(x, "double") == 0) y = sizeof(double);
    else if (strcmp(x, "char") == 0) y = sizeof(char);
    else y = 0;
    printf("Size of %s: %d bytes\n", x, y);
    if (y ==4){
        int a, b;
        printf("enter num 1:\n");
        scanf("%d",&a);
        printf("enter num 2:\n");
        scanf("%d",&b);
        int z = a +b;
        printf("sum of 1,2 is%d\n",z);
        int w = a>b;
        if (++w== 1){
            printf("first num is smaller than second num\n");
        }
        else {
            printf("first num is bigger than second num\n");
        }
        a = b = z;
        printInFahrenheight(b);
    }
}
void incrementTest(){
    int x =0;
    if (x++ > ++x){
        printf("%d\n",x);
    }
    if (++x > x++){
        printf("%d\n",x);
    }
}
void loopTest(){
    for (int i = 0; i < 5;i++){
        printf("%d\n",i);
    }
    for (int i = 0; i <= 5;i++){
        printf("%d\n",i);
    }
    for (int i = 0; i <= 5;++i){
        printf("%d\n",i);
    }
    for (int i = 0; i < 5;++i){
        printf("%d\n",i);
    }
}
int main() {
    numbersGame();
    return 0;
}

#include <iostream>
#include "other.h"
#define HELLO "Hello, World!\n"
#include <cstring>
void stringOperations() {
    // Strings for demonstration
    const char* str1 = "Hello";
    const char* str2 = "World";
    char str3[50]; // Destination for strcpy and strcat
    char str4[50]; // Another destination for strcpy

    // strlen
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    std::cout << "Length of str1: " << len1 << "\n";
    std::cout << "Length of str2: " << len2 << "\n";

    // strcmp
    int cmpResult = strcmp(str1, str2);
    std::cout << "Comparison result of str1 and str2: " << cmpResult << "\n";

    // strcpy
    strcpy(str3, str1);
    std::cout << "str3 after strcpy: " << str3 << "\n";

    // strcat
    strcat(str3, " ");
    strcat(str3, str2);
    std::cout << "str3 after strcat: " << str3 << "\n";

    // strcpy another example
    strcpy(str4, "Example");
    std::cout << "str4 after another strcpy: " << str4 << "\n";
}
void increment(){
    //LOCAL SCOPE
    static int x = 0; //address saved between calls on static variables
    x++;
    int y;
    y++; //*bad code* DONT DO THIS. y is uninitialized so the value is unpredictable, the memory carries over
    //y is initialized at 1 (true) because thats how indefinite values are treated in c
    int z = 0; //z initialized and safe
    z++;
    std::cout<<"x:"<<x<<"\n";
    std::cout<<"y:"<<y<<"\n";
    std::cout<<"z:"<<z<<"\n";
}
void uninitializedValues(){
    if (10){
        std::cout<<"hello 10\n";
    }
    if (-5){
        std::cout<<"hello -5\n";
    }
    if (0){
        std::cout<<"hello 0\n";
    }
}
void scope(){
    //LOCAL SCOPE
    {
        //LOCAL SCOPE LEVEL 2
        int x = 5;
        //    std::cout<<x; //NOT ALLOWED
        if (x == 5){
            //LOCAL SCOPE LEVEL 3
            std::cout<<"scope lvl 3 reached\n";
        }
    }
//    std::cout<<x; //NOT ALLOWED
}
void types(){
    typedef char blahblah;
    blahblah character = 'x';
    std::cout<<character<<"\n";
    std::cout<<HELLO;
}
void intArray(int arr[], int size){
    // int arrsize = sizeof(arr)/sizeof(arr[0]); //doesnt work since we passed in a pointer
    //arrays decay into pointers when passed into functions, so you must pass in a size value as well
    std::cout<<size<<"\n";
    arr[size] = 69;
    std::cout<<arr[10]<<"\n";
    std::cout<<*(arr + 10)<<"\n";
}
void init2DArray(int arr2D[][3], int rows, int cols){
    //we need to pass in the amount of pointers (3)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr2D[i][j] << " ";
        }
        std::cout << "\n";
    }
}
int main() {
//    int arr2D[3][3] = {
//            {1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}
//    };
//
//    init2DArray(arr2D, 3, 3); // Pass the 2D array and its dimensions to the function
//    int arr[10];
//    int arrsize = sizeof(arr)/sizeof(arr[0]); //works
//    intArray(arr, arrsize);
    //GLOBAL SCOPE
    //static functions not directly accessable in other files
    nonStaticPrintFunction(); //works
//    staticPrintFunction(); //doesnt work
    return 0;
}

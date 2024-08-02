//
// Created by benra on 8/2/2024.
//
#include "iostream"
#include "other.h"
static void staticPrintFunction(){
    //PRIVATE SCOPE
    std::cout<<"static function\n";
}
void nonStaticPrintFunction(){
    //LOCAL SCOPE
    std::cout<<"not static function\n";
}
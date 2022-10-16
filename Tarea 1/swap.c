#include<stdio.h>

int main(int argc, char const *argv[]){
    int x = 5;
    int y = 10;
    printf("x: %d, y: %d",x,y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("x: %d, y: %d",x,y);
    return 0;
}

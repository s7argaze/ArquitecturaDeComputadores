#include<stdio.h>

int main(int argc, char const *argv[]){
    unsigned int x = 3221225472;
    x = x >> 29;
    printf("%d",x);
    return 0;
}
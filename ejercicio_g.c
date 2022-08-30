#include<stdio.h>

int main(int argc, char const *argv[]){
    unsigned int x;
    printf("%d\n",!(0));
    for (x = 0; x < 64; x++){
        if(x && !(x & (x-1))) printf("x es potencia de dos : %d\n",x);
    }
    
    return 0;
}

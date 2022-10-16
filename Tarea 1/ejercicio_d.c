#include<stdio.h>

int main(int argc, char const *argv[]){
    int x, y;
    for (x = -10; x < 10; x++){
        for (y = -10; y < 10; y++)
        {
            printf("x: %d  y: %d z:%d\n",x,y,(x^y));
        }
        
    }
    

    return 0;
}

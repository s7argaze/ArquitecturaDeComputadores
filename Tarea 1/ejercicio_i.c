#include<stdio.h>

int main(int argc, char const *argv[]){
    int x, y ,z;

    for (x = -10; x < 10; x++){
        for (y = -10; y < 10; y++){
            z = y ^ ((x^y) & -(x < y));
            printf("x: %d, y: %d, z: %d\n",x,y,z);
        }
    }
    


    return 0;
}

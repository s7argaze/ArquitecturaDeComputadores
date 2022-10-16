#include <stdio.h>

long factorial(int n){
	long result;
    while(n--){
        result *= n;
    }
	return result;
}

int main(int argc, char ** argv){
    int n = atoi(argv[1]);
	long result;
	result = factorial(n);
    printf("El factorial de %d es %ld \n", n, result);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    char A[] = "Anubhav";
    
    char B[7];// Another char Array for storing reverse character
    int i,j;

    for(i=0; A[i] != '\0'; i++){}
    i = i-1;
    for(j = 0; i >=0; i--,j++) {
        B[j] = A[i];
    }
    B[j] = '\0';
    printf("%s \n",B);

    return 0;
}

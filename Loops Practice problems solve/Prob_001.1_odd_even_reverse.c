#include <stdio.h>
int main(){
    int i;
    printf("The odd numbers form (1-500) in reverse are:\n");
    for(i = 500; i >= 0; i-=2){
        printf("%d ", i);
    }
    printf("\nThe even numbers form (1-500) in reverse are:\n");
    for(i = 499; i >= 0; i-=2){
        printf("%d ", i);
    }

    return 0;
}

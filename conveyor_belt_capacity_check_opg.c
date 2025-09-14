
#include <stdio.h>

int main() {
    double motor = 5.6;
    int motorPrompt;
    double kgPrompt;
    
    printf("How many motors are carrying the packages? \n");
    scanf("%d", &motorPrompt);
    
    printf("How many kg of packages do we expect? \n");
    scanf("%lf", &kgPrompt);
    
    if (kgPrompt / motorPrompt <= motor){
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
    return 0;
}
//you've given height and weight
// make a new variable BMI 
//and calculate the respective BMI

#include <stdio.h>


int main() {
    float height = 2.32;
    float weight = 102;
    float bmi;
    bmi = weight /(height*height);
    printf("%f",bmi);
    
    return 0;
}

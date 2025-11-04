#include <stdio.h>


int main(){
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0f / 3.0f) * 3.14f * radius * radius * radius;
    printf("Volume: %.2f\n", volume);


    return 0;
}

//Volume: 4186.67
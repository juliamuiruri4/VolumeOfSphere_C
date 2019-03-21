#include <stdio.h>
#define PI 3.142

int main()
{
    float radius;
    float volume;

    printf("enter radius of the sphere\n");
    scanf("%f",&radius);

    volume=1.333*PI*radius*radius*radius;
     printf("the volume of that sphere is %f",volume);
    return 0;
}

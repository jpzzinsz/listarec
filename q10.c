#include <stdio.h>

int main()
{

float gGasta(float tGasto, float vMedia) {
    float distance = tempoGasto * vMedia;
    return distance / 12;
}

     float tGasto, vMedia;

     scanf("%f", &tGasto);
     scanf("%f", &vMedia);

     printf("%.3f\n", gGasta(tGasto, vMedia));

     return 0;
}
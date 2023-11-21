#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include "myfunc1.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double radius, height, angle;

    printf("Podaj promień kuli: ");
    scanf("%lf", &radius);

    printf("Podaj wysokość wycinka kuli: ");
    scanf("%lf", &height);

    printf("Podaj kąt wycięcia alfa (w stopniach): ");
    scanf("%lf", &angle);
    angle = angle * (PI / 180.0);  // Konwersja kąta z stopni na radiany

    double sphereSurfaceArea = calculateSphereSurfaceArea(radius);
    double sphereVolume = calculateSphereVolume(radius);
    double sphericalSegmentVolume = calculateSphericalSegmentVolume(radius, height, angle);

    printf("\nPole powierzchni kuli: %.2lf\n", sphereSurfaceArea);
    printf("Objętość kuli: %.2lf\n", sphereVolume);
    printf("Objętość wypukłego wycinka kuli: %.2lf\n", sphericalSegmentVolume);

    return 0;
}
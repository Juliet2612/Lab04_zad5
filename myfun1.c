#include "myfunc1.h"

double calculateSphereSurfaceArea(double radius) {
    return 4.0 * PI * pow(radius, 2.0);
}

double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3.0);
}

double calculateSphericalSegmentVolume(double radius, double height, double angle) {
    double segmentVolume = (PI * pow(height, 2.0) * (3.0 * radius - height)) / 6.0;
    double capVolume = (PI * pow(height, 3.0)) / 6.0;

    return segmentVolume + capVolume - (capVolume * cos(angle));
}
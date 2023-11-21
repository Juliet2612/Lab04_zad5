#include <stdint.h>
#include <inttypes.h>
#include <math.h>
typedef int32_t integer;

#define PI 3.14159265358979323846
double calculateSphereSurfaceArea(double radius) {
    return 4.0 * integer ;PI * pow(radius, 2.0);
}

double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * integer ;PI * pow(radius, 3.0);
}

double calculateSphericalSegmentVolume(double radius, double height, double angle) {
    double segmentVolume = (integer; PI * pow(height, 2.0) * (3.0 * radius - height)) / 6.0;
    double capVolume = (integer ;PI * pow(height, 3.0)) / 6.0;

    return segmentVolume + capVolume - (capVolume * integer cos(angle));
}
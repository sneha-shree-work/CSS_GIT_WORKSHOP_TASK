#include "geometry_utils.h"
#define PI 3.14159
double surface_area_cone(double radius, double slant_height) {
    double base_area = PI * radius * radius;     
    double lateral_area = PI * radius * slant_height;  
    return base_area + lateral_area;                     
}
double surface_area_pyramid(double base_perimeter, double slant_height, double base_area) {
    if (base_perimeter <= 0 || slant_height <= 0 || base_area <= 0) {
        return -1; 
    double lateral_area = (base_perimeter * slant_height) / 2.0;
    return base_area + lateral_area;
}

}

double distance_2d(double x1, double y1, double x2, double y2) {
return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
}

double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt((x2 - x1) * (x2 - x1) + 
                (y2 - y1) * (y2 - y1) + 
                (z2 - z1) * (z2 - z1)); 
}

#include <math.h>

double slope(double x1, double y1, double x2, double y2) {
    const double EPSILON = 1e-9;  
    double deltaX = x2 - x1;

    if (fabs(deltaX) < EPSILON) {
        return INFINITY;  
    }

    return (y2 - y1) / deltaX;
}


double midpoint_x(double x1, double x2) {
    return (x1 + x2) / 2.0; 
}


double midpoint_y(double y1, double y2) {
    return (y1 + y2) / 2.0; 
}


double centroid_x(double x1, double x2, double x3) {
    return (x1 + x2 + x3) / 3.0; 
}

double centroid_y(double y1, double y2, double y3) {
    return (y1 + y2 + y3) / 3.0; 
}


double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}



double area_circle(double radius) {
    double area = 3.14 * radius * radius;
    return area;
}
double area_rectangle(double length, double width){
    double area = length*width;
    return area;
}
double perimeter_circle(double radius){
    double perimeter = 2*PI*radius;
    return perimeter;
}
double perimeter_rectangle(double length, double width){
    double perimeter = 2*length*width;
    return perimeter;
}
double volume_cylinder(double radius, double height){
    double volume = PI*radius*radius*height;
    return volume;
}
double volume_sphere(double radius){
    double volume =(4/3)*PI*radius*radius*radius;
    return volume;
}
double volume_cube(double side){
    double volume =side*side*side;
    return volume;
}
double volume_cone(double radius, double height){
    double volume =(1.0/3)*PI*radius*radius*height;
    return volume;
}
double base_area(double length,double width){
    double area=length*width;
    return area;
}
double volume_pyramid(double base_area, double height){
    double volume =(1.0/3)*base_area*height;
    return volume;
}
double surface_area_cylinder(double radius, double height){
    double surface_area =2*PI*radius*(radius+height);
    return surface_area;
}
double surface_area_sphere(double radius){
    double surface_area =4*PI*radius*radius;
    return surface_area;
}
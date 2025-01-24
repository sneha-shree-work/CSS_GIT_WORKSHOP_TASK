#ifndef GEOMETRY_UTILS_H
#define GEOMETRY_UTILS_H

double area_circle(double radius);
double area_rectangle(double length, double width);
double perimeter_circle(double radius);
double perimeter_rectangle(double length, double width);
double volume_cylinder(double radius, double height);
double volume_sphere(double radius);
double volume_cube(double side);
double volume_cone(double radius, double height);
double volume_pyramid(double base_area, double height);
double surface_area_cylinder(double radius, double height);
double surface_area_sphere(double radius);
double surface_area_cube(double side);
double surface_area_cone(double radius, double slant_height);
double surface_area_pyramid(double base_perimeter, double slant_height);
double distance_2d(double x1, double y1, double x2, double y2);
double distance_3d(double x1, double y1, double z1, double x2, double y2, double z2);
double slope(double x1, double y1, double x2, double y2);
double midpoint_x(double x1, double x2);
double midpoint_y(double y1, double y2);
double centroid_x(double x1, double x2, double x3);
double centroid_y(double y1, double y2, double y3);
double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3);
double perimeter_triangle(double x1, double y1, double x2, double y2, double x3, double y3);



#endif

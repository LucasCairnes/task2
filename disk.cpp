#include "disk.h"
#include <cmath>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Disk::move(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

double Disk::distance(Disk& other){
    double delta_x = this->x - other.x;
    double delta_y = this->y - other.y;
    double distance = std::sqrt(delta_x*delta_x + delta_y*delta_y);
    
    return distance;
}
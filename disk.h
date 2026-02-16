#ifndef DISK_H
#define DISK_H

class Disk {
    public:
        // Initialisation function
        Disk(double x, double y, double r);
        // Public Attributes
        double x;
        double y;
        double radius;
        // Other public functions
        void move(double dx, double dy);
        double distance(Disk &d);
};

#endif
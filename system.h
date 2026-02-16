#ifndef SYSTEM_H
#define SYSTEM_H

#include <string> // Only including imports needed for the header file
#include <vector>
#include <random>

#include "disk.h"

class System {
    public:
        // Initialisation Function
        System(int N, double displacement, double radius, double box_size, int seed);
        // Public Attributes
        std::vector< Disk > disks;
        double boxSize;
        double displacement;
        std::mt19937 gen;
        std::uniform_real_distribution< double > dist;
        // Other Public Functions
        void step();
        void save(const std::string &filename);
        bool overlap(int i);
        void enforceBoundaries(Disk &disk);
        double uniform(double min, double max);
}

#endif
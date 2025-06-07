#ifndef MODULES_LASTNAME_H
#define MODULES_LASTNAME_H

#include <cmath>
#include <stdexcept>
#include <string>

class ClassLab12_LastName {
private:
    double radius;
    const double PI = 3.14159265358979323846;

public:
    explicit ClassLab12_LastName(double r = 1.0) {
        if (r <= 0) throw std::invalid_argument("Радіус має бути додатнім");
        radius = r;
    }

    double getRadius() const { return radius; }

    double calculateVolume() const {
        return (4.0/3.0) * PI * radius * radius * radius;
    }

    void setRadius(double r) {
        if (r <= 0) throw std::invalid_argument("Радіус має бути додатнім");
        radius = r;
    }

    std::string getInfo() const {
        return "Куля (радіус: " + std::to_string(radius) + 
               ", об'єм: " + std::to_string(calculateVolume()) + ")";
    }
};

#endif

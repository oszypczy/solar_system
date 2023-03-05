#pragma once
#include "celestialBody.h"

class Star : public CelestialBody {
    private:
        double starLuminosity;
    public:
        Star(std::string name, std::vector<int> location, double luminosity=100.0, ObjectType type = ObjectType::Star);
        double getLuminosity();
        void setLuminosity(double newLuminocity);
        std::string getInfo();
};
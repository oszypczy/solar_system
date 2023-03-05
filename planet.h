#pragma once
#include "celestialBody.h"

class Planet : public CelestialBody {
    private:
        double orbitalTime;
    public:
        Planet(std::string name, std::vector<int> location, double time = 0.0, ObjectType type = ObjectType::Planet);
        double getTime();
        void setTime(double newTime);
        std::string getInfo();
};
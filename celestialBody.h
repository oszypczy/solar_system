#pragma once
#include <iostream>
#include <vector>

enum class ObjectType {Star, Planet};

class CelestialBody{
    protected:
        ObjectType bodyType;
        std::string bodyName;
        std::vector<int> bodylLocation;
    public:
        CelestialBody(ObjectType type, std::string name = "", std::vector<int> location = {0, 0, 0});
        std::string getInfo();
        ObjectType getType();
        std::string getName();
        std::vector<int> getLocation();
        std::string getStrLocation();
        void setType(ObjectType newType);
        void setName(std::string newName);
        void setLocation(std::vector<int> newLocation);
        double measureDistance(CelestialBody otherBody);
};
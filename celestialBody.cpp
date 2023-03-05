#include "celestialBody.h"
#include <sstream>
#include <math.h>
#include <map>

std::map<ObjectType, std::string> dictionary = {
    {ObjectType::Star, "Star - center of the sysem."},
    {ObjectType::Planet, "Planet - orbiting a star"}
};

CelestialBody::CelestialBody(ObjectType type, std::string name, std::vector<int> location){
    bodyType = type;
    bodyName = name;
    bodylLocation = location;
}

std::string CelestialBody::getStrLocation(){
    std::string finalString = "[";
    for (const auto& elem : bodylLocation) {
        finalString += std::to_string(elem) + ", ";
    }
    finalString.erase(finalString.length() - 2, 2);
    finalString += "]";
    return finalString;
}

std::string CelestialBody::getInfo(){
    std::stringstream stream;
    stream << "Type: " << dictionary[bodyType] << std::endl;
    stream << "Name: " << bodyName << std::endl;
    stream << "Location (x, y, z): " << getStrLocation();
    return stream.str();
}

ObjectType CelestialBody::getType() {
    return bodyType;
}

std::string CelestialBody::getName() {
    return bodyName;
}

std::vector<int> CelestialBody::getLocation() {
    return bodylLocation;
}

void CelestialBody::setType(ObjectType newType) {
    bodyType = newType;
}

void CelestialBody::setName(std::string newName) {
    bodyName = newName;
}

void CelestialBody::setLocation(std::vector<int> newLocation) {
    bodylLocation = newLocation;
}

double CelestialBody::measureDistance(CelestialBody otherBody){
    int x1 = getLocation()[0];
    int y1 = getLocation()[1];
    int z1 = getLocation()[2];
    int x2 = otherBody.getLocation()[0];
    int y2 = otherBody.getLocation()[1];
    int z2 = otherBody.getLocation()[2];
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
}
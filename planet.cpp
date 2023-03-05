#include "planet.h"
#include <sstream>

Planet::Planet(std::string name, std::vector<int> location, double time, ObjectType type) : CelestialBody(type, name, location){
    orbitalTime = time;
}

double Planet::getTime(){
    return orbitalTime;
}

void Planet::setTime(double newTime){
    orbitalTime = newTime;
}

std::string Planet::getInfo(){
    std::stringstream stream;
    stream << CelestialBody::getInfo() << std::endl
           << "Orbital time: " << orbitalTime << " days" << std::endl;
    return stream.str();
}
#include "star.h"
#include <sstream>

Star::Star(std::string name, std::vector<int> location, double luminosity, ObjectType type) : CelestialBody(type, name, location){
    starLuminosity = luminosity;
}

double Star::getLuminosity(){
    return starLuminosity;
}


void Star::setLuminosity(double newLuminocity){
    starLuminosity = newLuminocity;
}


std::string Star::getInfo(){
    std::stringstream stream;
    stream << CelestialBody::getInfo() << std::endl
           << "Luminosity: " << starLuminosity << std::endl;
    return stream.str();
}
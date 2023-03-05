#include "celestialBody.h"
#include "star.h"
#include "planet.h"

int main(){
    Planet Earth("Earth", {1, 2, 3}, 365);
    Planet Jupiter("Jupiter", {34, 586, -98}, 876);
    Star Sun("Sun", {0, 0, 0}, 675.9);
    std::cout << Sun.getInfo() << std::endl;
    std::cout << Earth.getInfo() << std::endl;
    std::cout << Jupiter.getInfo() << std::endl;
    return 0;
}

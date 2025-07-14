#include "GPSSensor.hpp"
#include <iostream>
using namespace std;
// Initializes the GPS sensor
void GPSSensorInput::initialize() {
    cout << "GPS sensor initialized." <<::endl;
}

// Reads simulated data from the sensor
string GPSSensorInput::readData() {
    // This would normally come from a sensor so this just a simulated response
    return "GPS Location: 37.7749° N, 122.4194° W";
}
bool GPSSensorInput::isHealthy() {
    return true;
}
// Cleans up or shuts down the sensor
void GPSSensorInput::shutdown() {
    cout << "GPS sensor shutdown." << ::endl;
}

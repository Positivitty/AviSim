#include "AltitudeSensor.hpp"
#include <iostream>
using namespace std;
// Initializes the altitude sensor
void AltSensorInput::initialize() {
    cout << "Altitude sensor initialized." << std::endl;
}

// Reads simulated data from the sensor
string AltSensorInput::readData() {
    // This would normally come from a sensor so this just a simulated response
    return "Altitude: 3000 ft";
}
bool AltSensorInput::isHealthy() {
    return true;
}
// Cleans up or shuts down the sensor
void AltSensorInput::shutdown() {
    cout << "Altitude sensor shutdown." << std::endl;
}

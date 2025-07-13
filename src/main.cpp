#include "../include/ISensorInput.hpp"
#include "AltitudeSensor.hpp"
#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        // Create the altitude sensor object
        AltSensorInput sensor;

        // Initialize the sensor
        sensor.initialize();
        if (!sensor.isHealthy()) {
            cerr << "Error: Sensor is not healthy!" << endl;
            return 1;
        }
        cout << "Sensor health check: PASSED" << endl;

        // Read data from the sensor
        string data = sensor.readData();

        // Validate the data
        if (data.empty()) {
            cerr << "Error: Sensor returned no data." << endl;
            return 1; // Non-zero means error
        }

        cout << "Sensor Data: " << data << endl;

        // Shutdown the sensor
        sensor.shutdown();
    }
    catch (const exception& e) {
        cerr << "Exception occurred: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "An unknown error occurred." << endl;
        return 1;
    }

    return 0;
}
// Main program to demonstrate the AltitudeSensor functionality
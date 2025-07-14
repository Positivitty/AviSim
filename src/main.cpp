#include "../include/ISensorInput.hpp"
#include "AltitudeSensor.hpp"
#include "GPSSensor.hpp"
#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        // ===== ALTITUDE SENSOR TESTING =====
        cout << "=== Testing Altitude Sensor ===" << endl;
        
        // Create the altitude sensor object
        AltSensorInput alt_sensor;

        // Initialize the sensor
        alt_sensor.initialize();
        if (!alt_sensor.isHealthy()) {
            cerr << "Error: Altitude sensor is not healthy!" << endl;
            return 1;
        }
        cout << "Altitude sensor health check: PASSED" << endl;

        // Read data from the sensor
        string altData = alt_sensor.readData();

        // Validate the data
        if (altData.empty()) {
            cerr << "Error: Altitude sensor returned no data." << endl;
            return 1; // Non-zero means error
        }

        cout << "Sensor Data: " << altData << endl;

        // Shutdown the sensor
        alt_sensor.shutdown();

        // ===== GPS SENSOR TESTING =====
        cout << "\n=== Testing GPS Sensor ===" << endl;
        
        // Create the GPS sensor object
        GPSSensorInput gps_sensor;

        // Initialize the sensor
        gps_sensor.initialize();
        if (!gps_sensor.isHealthy()) {
            cerr << "Error: GPS sensor is not healthy!" << endl;
            return 1;
        }
        cout << "GPS sensor health check: PASSED" << endl;

        // Read data from the sensor
        string gpsData = gps_sensor.readData();

        // Validate the data
        if (gpsData.empty()) {
            cerr << "Error: GPS sensor returned no data." << endl;
            return 1; // Non-zero means error
        }

        cout << "Sensor Data: " << gpsData << endl;

        // Shutdown the sensor
        gps_sensor.shutdown();
        
        cout << "\n=== All Sensors Tested Successfully ===" << endl;
        
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
// Main program to demonstrate both AltitudeSensor and GPSSensor functionality using FACE-style interfaces
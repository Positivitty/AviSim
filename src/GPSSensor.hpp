// prevents file from being included more than once by compiler
#ifndef GPSSENSORINPUT_HPP
#define GPSSENSORINPUT_HPP

#include "../include/ISensorInput.hpp"
#include <string>

// This is the concrete class for a GPS sensor,
// it implements the ISensorInput interface using FACE-style architecture
class GPSSensorInput : public ISensorInput {
public:
    // Initializes the GPS sensor
    void initialize() override;

    // Reads data from the GPS sensor
    std::string readData() override;
    
    // Checks if the GPS sensor is healthy
    bool isHealthy() override;
    
    // Shuts down the GPS sensor
    void shutdown() override;
};

#endif
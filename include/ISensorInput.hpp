// prevents file from being included more than once by compiler
#ifndef ISENSORINPUT_HPP
#define ISENSORINPUT_HPP

#include <string>

// FACE-style sensor input interface
class ISensorInput {
public:
    virtual ~ISensorInput() = default;

    // Called to initialize the sensor
    virtual void initialize() = 0;
    // Called to read data from the sensor
    virtual std::string readData() = 0;
    // Optional: Check if the sensor is healthy
    virtual bool isHealthy() = 0;
    // Optional: Shut down or clean up the sensor
    virtual void shutdown() = 0;
};

#endif // ISENSORINPUT_HPP

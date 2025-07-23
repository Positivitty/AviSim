// prevents file from being included more than once by compiler
#ifndef ALTSENSORINPUT_HPP
#define ALTSENSORINPUT_HPP

#include "ISensorInput.hpp"
#include <string>

// This is the concrete class for an altitude sensor,
// it implements the ISensorInput interface using FACE-style architecture
class AltSensorInput : public ISensorInput {
public:
    // Initializes the altitude sensor
    void initialize() override;

    // Reads data from the altitude sensor
    std::string readData() override;
    bool isHealthy() override;
    // Shuts down the altitude sensor
    void shutdown() override;
};

#endif // ALTSENSORINPUT_HPP


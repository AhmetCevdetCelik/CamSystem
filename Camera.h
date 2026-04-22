#pragma once // Modern Header Guard
#include <string>

class Camera {
private:
    // Member Variables
    std::string ipAddress;
    int fps;

public:
    // Constructor Signature
    Camera(std::string _ip, int _fps);

    // Member Function Signatures (Methods)
    void Connect();
    void CaptureStream();
};
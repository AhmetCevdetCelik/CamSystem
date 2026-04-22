#include "Camera.h"
#include <iostream>

// Constructor Implementation with Member Initializer List
Camera::Camera(std::string _ip, int _fps) : ipAddress(_ip), fps(_fps) {}

void Camera::Connect() {
    std::cout << "[System] Connecting to " << ipAddress << " at " << fps << " FPS...\n";
}

void Camera::CaptureStream() {
    std::cout << "[Pars 5G] Stream started. Real-time data processing active.\n";
}
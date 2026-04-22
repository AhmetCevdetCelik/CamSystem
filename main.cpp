#include "Camera.h"

int main() {
    // Creating an object of Camera class
    Camera trafficCam("192.168.1.50", 60);
    Camera trafficCam("192.168.1.2", 60);

    trafficCam.Connect();
    trafficCam.CaptureStream();

    return 0;
}
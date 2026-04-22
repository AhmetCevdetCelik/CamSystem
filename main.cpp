#include "Camera.h"

int main() {
    // Creating an object of Camera class
    Camera trafficCam1("192.168.1.50", 60);
    Camera trafficCam2("192.168.1.2", 60);

    trafficCam1.Connect();
    trafficCam1.CaptureStream();
    trafficCam2.Connect();
    trafficCam2.CaptureStream();

    return 0;
}
# Pars-5G: Intelligent Road Safety Platform

## Project Overview
[cite_start]Pars-5G is an autonomous surveillance ecosystem designed for low-latency traffic monitoring and violation detection[cite: 35]. This module represents the C++ core for managing camera streams and data encapsulation.

## Key Technical Features
* [cite_start]**AI Model:** Utilizes YOLOv10 for real-time object detection (license plates, cabin violations)[cite: 38, 82].
* [cite_start]**Tracking:** Implements ByteTrack for dynamic trajectory analysis and speed calculation[cite: 38, 87].
* [cite_start]**Network Integration:** Connects with 5G QoD API to ensure high-priority data transmission during critical incidents[cite: 38, 45].
* [cite_start]**Optimization:** Designed for NVIDIA Jetson hardware with TensorRT optimization to achieve <30ms inference time[cite: 44, 48].

## Development Progress
- [x] Modular Architecture (Header/Source Separation)
- [x] Constructor Overloading for flexible initialization
- [ ] Destructor implementation for memory safety (Next Step)
- [ ] OpenCV integration for RTSP stream handling

## Build Instructions
```bash
g++ main.cpp Camera.cpp -o CamApp
./CamApp
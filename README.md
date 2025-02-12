# Modification of the PA-GPSR Routing Protocol

This study presents a modification of the Path-Aware Greedy Perimeter Stateless Routing (PA-GPSR) protocol by integrating vehicle speed and direction as key factors in selecting forwarding nodes. This enhancement improves route stability in highly dynamic network conditions, such as vehicular ad hoc networks (VANETs)

## Requirements
To ensure compatibility, the following system requirements must be met:
- Python: Version 2.7
- Operating System: Linux
- System Architecture: amd64 (ARM is not supported yet)

## Installation Guides
Follow these steps to install and configure the modified PA-GPSR protocol in the ns-3.23 network simulator:
1. Navigate to the ns-3.23 Directory
    ```
    cd ns3.23
    ```
2. Configure ns-3
    ```
    CXXFLAGS="-Wall -std=c++0x" ./waf configure --enable-examples
    ./waf
    ```
3. Build and Install ns-3
    ```
    sudo ./waf install
    ```

## Authors
- Aditya Eka Bagaskara
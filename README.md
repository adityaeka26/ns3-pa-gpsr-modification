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
4. Run Modified PA-GPSR simulation
    ```
    ./waf --run scratch/pagpsr-main
    ```

## How to Create Mobility Scenario for Simulation
1. Export and download OSM map from https://www.openstreetmap.org
2. Convert OSM map to SUMO Network
    ```
    netconvert --osm-files map.osm -o map.net.xml
    ```
3. Generate random vehicle routes for the simulation
    ```
    python ../randomTrips.py -n map.net.xml -r map.rou.xml -e 110
    ```
4. Run SUMO simulation and generates floating car data
    ```
    sumo -c map.sumocfg --fcd-output trace.xml
    ```
5. Convert SUMO trace to NS-2 mobility format
    ```
    python ../traceExporter.py -i trace.xml --ns2mobility-output=mobility.tcl
    ```

## Simulation Scenario:

### 10 Connection Pairs
#### 30 Nodes
```
NODE_SIZE=30
CONNECTIONS=10
SEED_START=100
SEED_STEP=100
SEED_END=1000
SPEED=35
SCENARIO=grid

for seed in $(seq $SEED_START $SEED_STEP $SEED_END); do
    if [ $seed -eq $SEED_START ]; then
        ./waf --run "scratch/pagpsr-main --conn=$CONNECTIONS --size=$NODE_SIZE --seed=$seed --speed=$SPEED --scenario=$SCENARIO"
    else
        ./waf --run "scratch/pagpsr-main --conn=$CONNECTIONS --size=$NODE_SIZE --seed=$seed --speed=$SPEED --scenario=$SCENARIO --newfile=false"
    fi
done
```
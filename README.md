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

## Simulation Scenario:

### 5 Connection Pairs
#### 30 Nodes
```
./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=500 --newfile=false" 
```
#### 50 Nodes
```
./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=500 --newfile=false" 
```
#### 70 Nodes
```
./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=500 --newfile=false" 
```
#### 90 Nodes
```
./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=500 --newfile=false" 
```
#### 110 Nodes
```
./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=500 --newfile=false" 
```

### 10 Connection Pairs
#### 30 Nodes
```
./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=500 --newfile=false" 
```
#### 50 Nodes
```
./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=500 --newfile=false" 
```
#### 70 Nodes
```
./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=500 --newfile=false" 
```
#### 90 Nodes
```
./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=500 --newfile=false" 
```
#### 110 Nodes
```
./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=500 --newfile=false" 
```

### 15 Connection Pairs
#### 30 Nodes
```
./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=500 --newfile=false" 
```
#### 50 Nodes
```
./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=500 --newfile=false" 
```
#### 70 Nodes
```
./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=500 --newfile=false" 
```
#### 90 Nodes
```
./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=500 --newfile=false" 
```
#### 110 Nodes
```
./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=500 --newfile=false" 
```

### 20 Connection Pairs
#### 30 Nodes
```
./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=500 --newfile=false" 
```
#### 50 Nodes
```
./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=500 --newfile=false" 
```
#### 70 Nodes
```
./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=500 --newfile=false" 
```
#### 90 Nodes
```
./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=500 --newfile=false" 
```
#### 110 Nodes
```
./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=100" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=200 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=300 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=400 --newfile=false" &&
./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=500 --newfile=false" 
```
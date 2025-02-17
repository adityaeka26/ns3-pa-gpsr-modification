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
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=5 --size=30 --seed=$seed --newfile=false"
    fi
done
```
#### 50 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=5 --size=50 --seed=$seed --newfile=false"
    fi
done
```
#### 70 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=5 --size=70 --seed=$seed --newfile=false"
    fi
done
```
#### 90 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=5 --size=90 --seed=$seed --newfile=false"
    fi
done
```
#### 110 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=5 --size=110 --seed=$seed --newfile=false"
    fi
done
```

### 10 Connection Pairs
#### 30 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=10 --size=30 --seed=$seed --newfile=false"
    fi
done
```
#### 50 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=10 --size=50 --seed=$seed --newfile=false"
    fi
done
```
#### 70 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=10 --size=70 --seed=$seed --newfile=false"
    fi
done
```
#### 90 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=10 --size=90 --seed=$seed --newfile=false"
    fi
done
```
#### 110 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=10 --size=110 --seed=$seed --newfile=false"
    fi
done
```

### 15 Connection Pairs
#### 30 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=15 --size=30 --seed=$seed --newfile=false"
    fi
done 
```
#### 50 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=15 --size=50 --seed=$seed --newfile=false"
    fi
done 
```
#### 70 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=15 --size=70 --seed=$seed --newfile=false"
    fi
done  
```
#### 90 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=15 --size=90 --seed=$seed --newfile=false"
    fi
done 
```
#### 110 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=15 --size=110 --seed=$seed --newfile=false"
    fi
done 
```

### 20 Connection Pairs
#### 30 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=20 --size=30 --seed=$seed --newfile=false"
    fi
done 
```
#### 50 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=20 --size=50 --seed=$seed --newfile=false"
    fi
done 
```
#### 70 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=20 --size=70 --seed=$seed --newfile=false"
    fi
done 
```
#### 90 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=20 --size=90 --seed=$seed --newfile=false"
    fi
done 
```
#### 110 Nodes
```
for seed in $(seq 100 100 1000); do
    if [ $seed -eq 100 ]; then
        ./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=$seed"
    else
        ./waf --run "scratch/pagpsr-main --conn=20 --size=110 --seed=$seed --newfile=false"
    fi
done 
```
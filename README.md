# Minimal Disks Simulation

*Lucas Cairnes - 19th February 2026*

A 2D simulation of disks interacting with a rigid box. This is a numerical C++ simulation of the random motion of 20 disks over 10,000 iterations. Each cycle, the program randomly selects a disk, moving it randomly if this doesn't cause a collision with another disk or the walls of the container. Each simulated step is outputted to the `/confs`. Once all steps have been processed, the simulation is visualised in a Jupyter notebook through the use of matplotlib.

### Requirements:
* **C++ Compiler:** Must be able to handle C++ 11 or newer for random library.
* **Python:** Tested on version 3.11.
* **Python Packages:** numpy, matplotlib, glob, ipympl.

## Project Structure
<p align="left">
  <img src="documentation/flowchart.svg" width="400">
</p>

### Files:
* `main.cpp:` Initialises the disks and system. Sets parameters: no. disks, box size, no. iteratons.
* `system.cpp:` Defines the system class. Creates and seeds the rng for the movement and disk selection. Detects collisions. Outputs to `confs/`.
* `disk.cpp:` Defines the disk object. Contains the movement functions for the disks. Contains function to detect proximity to other disks.
* `view.ipynb:` Reads the text files outputted to /confs and visualises the simulated motion.


### Running the simulation:
* **Creating Output Folder:** `mkdir confs`
* **Compilation:** `g++ main.cpp system.cpp disk.cpp -o disk_simulation`
* **Exectuion:** `./disk_simulation`
* **Viewing Result:** `view.ipynb`

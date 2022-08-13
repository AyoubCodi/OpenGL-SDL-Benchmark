# OpenGL-SDL-Benchmark
Ayoub Lakrad, 2022
This project is a benchmark that test CPU and GPU connection for old hardware, most of recent system could max it out, but they will hit the max engine allowed FPS.
The benchamrk uses SDL, for better control of the window.
Basically, the benchmark is a triple step operation repeated in 25 seconds writed in C/C++ with the Shell for the execution of the project.
Warning : This project is only for Linux users, if you are a Windows user, You could rewrite the project to be adapted for Windows.
The third step-pipeline is explained here:
  Step 1 : Setting up the window : we create in this step the window and we set it to be a OpenGL Window and we disable VSync.
  Step 2 : The colors : the colors are calculated using random

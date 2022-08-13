# OpenGL-SDL-Benchmark
This project is a benchmark that test CPU and GPU connection for old hardware, most of recent system could max it out, but they will hit the max engine allowed FPS.
The benchamrk uses SDL, for better control of the window.
Basically, the benchmark is a triple step operation repeated in 25 seconds writed in C/C++ with the Shell for the execution of the project.
Warning : This project is only for Linux users, if you are a Windows user, You could rewrite the project to be adapted for Windows.
The third step-pipeline is explained here:
  Step 1 : Setting up the window : we create in this step the window and we set it to be a OpenGL Window and we disable VSync.
  Step 2 : The colors : the colors are calculated using long double random numbers and then these numbers are calculated between them using cos, tan, log, sqrt, cbrt, atanh, acosh... Then those values then are used for the RGB values in the glClearColor function and the alpha value will be caluclated using trigonometrical functions and the window will be swapped
  Step 3 : The FPS will be shown as a text in the console.
Note : This project could be runned in multiple instances by executing build.sh multiple times (but not 2 simantinosly which will give you an error that text file is busy, but executing a lot of instances of this benchmark is very interesting which it will give where your CPU could be maxed out with x windows of this project.

Any questions or notes or contacing : ayoubcode6@outlook.com

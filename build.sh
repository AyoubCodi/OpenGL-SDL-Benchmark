rm bin/game
echo "Compilation..."
echo gcc ./src/main.cpp -o ./bin/game $(pkg-config --cflags --libs sdl2 glew) -lpthread 
gcc ./src/main.cpp -o ./bin/game $(pkg-config --cflags --libs sdl2 glew) -lpthread 
echo "Compilation finished, executing..."
./bin/game

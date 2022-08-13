#include "GL.h"
#include <GL/glxew.h>
#include <GL/glx.h>

int main(int argc, char **argv)
{
	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window *window = SDL_CreateWindow("SDL + OpenGL benchmark", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1024, 720, SDL_WINDOW_OPENGL);
	
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

	SDL_GLContext mainContext = SDL_GL_CreateContext(window);
	
	glewInit();
	glXSwapIntervalMESA(0);

	effects(window);
	return 0;
}


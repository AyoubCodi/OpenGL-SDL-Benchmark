#ifndef __GL__H__
#define __GL__H__

// Including librairies for the project
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <GL/glew.h>
#include "math.h"

#define FPS_INTERVAL 1.0

double fps_lasttime = SDL_GetTicks(); //the last recorded time.
double fps_current; //the current FPS.
double fps_frames = 0; //frames passed since the last recorded fps.

void showFPS(void)
{
	fps_frames++;
   	if (fps_lasttime < SDL_GetTicks() - FPS_INTERVAL*1000)
   	{
      		fps_lasttime = SDL_GetTicks();
      		fps_current = fps_frames;
      		fps_frames = 0;
   	}
   	printf("Frames per second : %f\n", fps_current);
}
void color1(SDL_Window *w)
{
		#include "math.h"
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*cbrt(M_PI));
		long double g = M_PI * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95) * M_LOG2E + 2 * 12.5 * M_PI * M_E * 1/M_E;
		long double l = (tan(2 * sin(M_PI * M_2_SQRTPI * M_SQRT1_2)) + cos(2 * sin(tan(M_PI * M_E)))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95);
		a = a*d/x*g+fabs(cosh(tanh(log1p(M_PI))));
		b = b*e/y+l*cosh(2 * M_LOG2E)/g-tan(M_2_SQRTPI);
		c = c*f/z+g/cos(M_PI)*tan(2 * cos(M_PI));
		a = a*d/x*g+cos(cosh(tanh(log1p(M_PI))));
		b = b*e/y+l*tanh(2 * M_LOG2E)/g-tan(M_2_SQRTPI);
		c = c*f/z+g/cos(M_PI)*tan(2 * cos(M_PI));
		glClearColor(a, b, c, fabs(cosh(tanh(log1p(M_PI))))*fabs(tanh(M_2_SQRTPI * M_PI)) * tan(sin(cos(M_E / M_LN10 * M_LOG2E)) * sin(M_LN10 + M_PI * M_E * 1/M_E + sqrt(cos(tan(12.5 * M_PI * cosh(M_LOG10E)))))));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void color5(SDL_Window *w)
{
	        #include "math.h"
		
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*tan(M_PI));
		long double g = M_PI * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95);
		long double l = (cos(2 * sqrt(cosh(M_2_SQRTPI))) + cos(2 * sinh(tan(M_PI)))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95) + sin(cos(M_E / M_LN10 * M_LOG2E * cbrt(sqrt(M_PI * M_E + atanh(1/M_LN10)) * log1p(M_2_SQRTPI * M_PI * 1/M_E)))) * sin(M_LN10 + M_PI * M_E * 1/M_E + atanh(cos(tan(12.5 * M_PI * cosh(M_LOG10E)))));
		a = a*d/x*g*cos(tan(M_2_SQRTPI * M_SQRT1_2)) * tanh(fabs(cosh(M_E / M_LN10 * M_LOG2E)) * sin(M_LN10 + M_PI * M_E * 1/M_E + sqrt(cos(tan(12.5 * M_PI * cosh(M_LOG10E))))));
		b = b*e/y+l*2/g-tan(cos(M_SQRT1_2) * sin(M_PI));
		c = c*f/z+g/cos(M_PI)*tan(2 * acosh(M_PI * fabs(log(M_E))));
		glClearColor(a, b, c, sin(cos(tan(sin(M_E)) * sqrt(M_PI))));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void color7(SDL_Window *w)
{
	        #include "math.h"
		
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*tan(M_PI));
		long double g = M_PI * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95);
		long double l = (cos(2 * sqrt(cosh(M_2_SQRTPI))) + cos(2 * sinh(tan(M_PI)))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95) + sin(cos(M_E / M_LN10 * M_LOG2E * cbrt(sqrt(M_PI * M_E + log(1/M_LN10)) * log1p(M_2_SQRTPI * M_PI * 1/M_E)))) * acosh(M_LN10 + M_PI * M_E * 1/M_E + atanh(cos(tan(12.5 * M_PI * cosh(M_LOG10E)))));
		a = a*d/x*g*cos(tan(M_2_SQRTPI * M_SQRT1_2)) * tanh(fabs(cosh(M_E / M_LN10 * M_LOG2E)) * sin(M_LN10 + M_PI * M_E * 1/M_E + sqrt(cos(tan(12.5 * M_PI * cosh(M_LOG10E))))));
		b = b*e/y+l*2/g-tan(cos(M_SQRT1_2) * sin(M_PI));
		c = c*f/z+g/tan(M_PI)*tan(2 * acosh(M_PI * fabs(log(M_E))));
		glClearColor(a, b, c, sin(cos(tan(sin(M_E)) * sqrt(M_PI))));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void color6(SDL_Window *w)
{
	        #include "math.h"
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*log(M_PI));
		long double g = log(M_PI) * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95);
		long double l = (cosh(2 * cbrt(cosh(M_2_SQRTPI * 1/M_E))) + acosh(2 * cbrt(fabs(M_PI)) * fabs(M_LN10) + log1p(1/M_LN10 * cbrt(M_PI * 3/M_E)))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95);
		a = a*d/x*g;
		b = b*e/y+l*2/g-tan(sin(cos(M_E / M_LOG10E * M_LOG2E + cos(tan(M_E)))) * sin(M_LN10 + M_PI * M_E * 1/M_E + fabs(cos(tan(12.5 * M_PI * cosh(M_LOG10E))))));
		c = c*f/z+g/cos(M_PI)*tan(2 * cos(M_PI));
		glClearColor(a, b, c, cos(sin(log1p(acosh(M_LOG2E * M_E) * cbrt(cosh(asinh(tanh(M_PI / M_LOG10E * 2/M_E * M_LN10 * log(M_PI))))))) * sqrt(M_PI)));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void color8(SDL_Window *w)
{
	        #include "math.h"
	        
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*cbrt(M_PI));
		long double g = M_PI * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95);
		long double l = cosh(2 * sinh(acosh(M_2_SQRTPI))) * tan(2 * cos(tan(M_PI))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95);
		a = a*d/x*g/2 * cos(M_LN10) + tan(1/M_LN10 * tan(cos(M_PI) * 3/M_E * 5/M_2_PI));
		b = b*e/y+l*2/g-log(cbrt(sqrt(M_E / M_LN10 * M_LOG2E)) * log(cbrt(M_LN10) * sqrt(acosh(M_E)) * tan(1/M_2_SQRTPI) * log(M_LN10)));
		c = c*f/z+g/cos(M_PI)*tan(2 * cos(M_PI));
		glClearColor(a, b, c, cosh(2 * cbrt(sqrt(M_2_SQRTPI))));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void color2(SDL_Window *w)
{
	        #include "math.h"
	        
		long double a = (long double)rand()/(long double)(RAND_MAX/2);
		long double b = (long double)rand()/(long double)(RAND_MAX/1.5);
		long double c = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double d = (long double)rand()/(long double)(RAND_MAX/1.3);
		long double e = (long double)rand()/(long double)(RAND_MAX/1);
		long double f = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double x = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double y = (long double)rand()/(long double)(RAND_MAX/0.9);
		long double z = (long double)rand()/(long double)(RAND_MAX/0.9*cbrt(M_PI));
		long double g = M_PI * (long double)rand()/(long double)(RAND_MAX/0.85) * (long double)rand()/(long double)(RAND_MAX/0.95);
		long double l = sqrt(2 * sinh(acosh(M_2_SQRTPI))) * log(cos(tan(M_PI))) * (long double)rand()/(long double)(RAND_MAX/1.0) * (long double)rand()/(long double)(RAND_MAX/0.95);
		a = a*d/x*g/2 * cos(M_LN10) + tan(1/M_LN10 * tan(cos(M_PI) * 3/M_E * 5/M_2_PI)) / sqrt(cbrt(M_LN10)) * cbrt(acosh(M_E));
		b = b*e/y+l*2/g-log(cbrt(sqrt(M_E / M_LN10 * M_LOG2E)) * log(cbrt(M_LN10) * cbrt(acosh(M_E)) * tanh(1/M_2_SQRTPI) * acosh(M_LN10)));
		c = c*f/z+g/cos(M_PI)*tan(2 * cos(M_PI));
		glClearColor(a, b, c, cosh(2 * cbrt(sqrt(M_2_SQRTPI))));
		glClear(GL_COLOR_BUFFER_BIT);
		SDL_GL_SwapWindow(w);
		showFPS();
}
void exit_opengl(SDL_Window *w)
{
				printf("OpenGL Version : %s\n", glGetString(GL_VERSION));
				printf("Errors : %s\n", glGetError());
				SDL_DestroyWindow(w);
				SDL_Quit();
				exit(EXIT_SUCCESS);
}
void effects(SDL_Window *w)
{
	for (int i = 0; i < 5800; i++)
	{
  			switch(rand() % 6) {
    				case 0: color1(w); break;
    				case 1: color6(w); break;
    				case 2: color5(w); break;
    				case 3: color8(w); break;
    				case 4: color7(w); break;
    				case 5: color2(w); break;
    			}
       
	}
	exit_opengl(w);
}

#endif

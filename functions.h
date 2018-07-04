#include <OpenGL/gl.h>
#include <unistd.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>
#include <math.h>


void background(int red, int green, int blue, int alpha=255){
	float r = red * 0.003921568627;
	float g = green * 0.003921568627;
	float b = blue * 0.003921568627;
	float a = alpha * 0.003921568627;
	if (r > 1){
	 r = 1;
	} else if (g > 1){
	 g = 1;
	} else if (b > 1){
	 b = 1;
	} else if (a > 1){
	 a = 1;
	}
	glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT);
}

int sgn(float val){
	if(val > 0){
		return 1;
	} else if (val < 0){
		return -1;
	} else {
		return 0;
	}
}

float getCoord(float coord_pos, int max, int addedval=0){
 float hw = max / 2;
 float work = coord_pos - hw;
 int tsgn = sgn(work);
 float abdist = fabsf(work);
 float thepos = (tsgn * (abdist / hw)) + addedval;
 return thepos;
}



void setColor(int red, int green, int blue, int alpha=255){
	float r = red * 0.003921568627;
	float g = green * 0.003921568627;
	float b = blue * 0.003921568627;
	float a = alpha * 0.003921568627;
	if (r > 1){
	 r = 1;
	} else if (g > 1){
	 g = 1;
	} else if (b > 1){
	 b = 1;
	} else if (a > 1){
	 a = 1;
	}

	glColor4f(r, g, b, a);
}


int randomint(int lower, int upper){
	int yeet;
	yeet = (rand() % (upper - lower + 1)) + lower;
	return yeet;
}





int distance(int x0, int y0, int x1, int y1){
	int mydistance;
	int xval;
	int yval;
	xval = (x1 - x0) * (x1 - x0);
	yval = (y1 - y0) * (y1 - y0);
	mydistance = (int)(sqrt(xval + yval));
	mydistance = abs(mydistance);

	return mydistance;
}
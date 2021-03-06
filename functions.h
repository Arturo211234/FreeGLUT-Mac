#include <OpenGL/gl.h>
#include <unistd.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#define MAGI 0.003921568627f


void background(int red, int green, int blue, int alpha=255){
	float r = red * MAGI;
	float g = green * MAGI;
	float b = blue * MAGI;
	float a = alpha * MAGI;
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

float map(float n, min1, max1, min2, max2){
  float bruh = n - min1;
  float r1 = max1 - min1;
  bruh = bruh / r1;
  float r2 = max2 - min2;
  bruh = bruh * r2;
  bruh = min2 + bruh;
  return bruh;
}

int sgn(int val){
    return (val > 0) - (val < 0);
}

float getCoord(float coord_pos, int max){
 float undiv = coord_pos / max;
 undiv = 2 * undiv;
 float thepos = undiv -1;
 return thepos;
}



void setColor(int red, int green, int blue, int alpha=255){
	float r = red * MAGI;
	float g = green * MAGI;
	float b = blue * MAGI;
	float a = alpha * MAGI;
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


void circle(float xc, float yc, float radius, int width, int height){
 double tau = 6.2831;
 double x;
 double y;
 glBegin(GL_POLYGON);
    for(double theta = 0; theta < tau; theta +=0.0001){
 	x = cos(theta) * radius;
 	y = sin(theta) * radius;
 	x+= xc;
 	y+= yc;
 	x = getCoord(x, width);
 	y = getCoord(y, height);
 	glVertex2f(x, y);
 }
 glEnd();
}


int distance(int x0, int y0, int x1, int y1){
	int mydistance;
	int xval;
	int yval;
	xval = (x1 - x0) * (x1 - x0);
	yval = (y1 - y0) * (y1 - y0);
	mydistance = (int)(sqrt(xval + yval));
	//mydistance = abs(mydistance);

	return mydistance;
}

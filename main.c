#include <OpenGL/gl.h>
#include <unistd.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>
#include "functions.h"
#include <math.h>


int width = 800;
int height = 800;



void running(){
 background(10, 100, 255);

 glutSwapBuffers();
}





//------------------------------------------------------------
// IGNORE EVERYTHING BELOW THIS LINE, EXCEPT FOR "TITLE"

int32_t main(int argc, char** argv){
 time_t seconds;
 seconds = time(NULL);

 srand(seconds);
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
 glutInitWindowPosition(100,100);
 glutInitWindowSize(width, height);
 glutCreateWindow("TITLE");
 glutDisplayFunc(running);
 glutIdleFunc(running);
 glutMainLoop();
 return 1;
}

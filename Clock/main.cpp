#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;


void Idle()
{
    glutPostRedisplay();
}


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	//1st:
	    int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.6f;
	int triangleAmount = 20;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//2nd:
	int m;

	 x=.0f;  y=.0f;  radius =.5f;



	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(m = 0; m <= triangleAmount;m++) {
			glVertex2f(
		            x + (radius * cos(m *  twicePi / triangleAmount)),
			    y + (radius * sin(m * twicePi / triangleAmount))
			);
		}
	glEnd();





	 glLoadIdentity();



    glTranslatef(.1,.1,0);




    glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);








      glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, 0.3f);
     glVertex2f( 0.0f, 0.4f);
     glVertex2f( 0.01f, 0.3f);



    glEnd();
    glPopMatrix();





    j-=0.050f;

   // 2nd:
         glLoadIdentity();



    glTranslatef(.1,.1,0);




    glPushMatrix();
    glRotatef(k,0.0,0.0,0.1);







      glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, 0.3f);
     glVertex2f( 0.0f, 0.4f);
     glVertex2f( 0.02f, 0.3f);


    glEnd();
    glPopMatrix();





    k-=0.00375f;

    //3rd:

        glLoadIdentity();



    glTranslatef(.1,.1,0);




    glPushMatrix();
    glRotatef(l,0.0,0.0,0.1);






      glBegin(GL_POLYGON);
glColor3f(.0f, .0f, 1.0f);
glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.04f, 0.2f);
     glVertex2f( 0.0f, 0.3f);
     glVertex2f( 0.04f, 0.2f);



    glEnd();
    glPopMatrix();





    l-=0.00037f;

    //glLoadIdentity();
//12:
    glBegin(GL_LINES);
    glVertex2f(-0.02f, 0.41f);
     glVertex2f(0.01f, 0.47f);
glEnd();

glBegin(GL_LINES);
    glVertex2f(-0.02f, 0.47f);
     glVertex2f(0.01f, 0.41f);
glEnd();


glBegin(GL_LINES);
    glVertex2f(0.025f, 0.47f);
     glVertex2f(0.025f, 0.41f);
glEnd();

glBegin(GL_LINES);
    glVertex2f(0.035f, 0.47f);
     glVertex2f(0.035f, 0.41f);
glEnd();


//3:

glBegin(GL_LINES);
    glVertex2f(0.4f, 0.1f);
     glVertex2f(0.4f, 0.0f);
glEnd();


glBegin(GL_LINES);
    glVertex2f(0.42f, 0.1f);
     glVertex2f(0.42f, 0.0f);
glEnd();

glBegin(GL_LINES);
    glVertex2f(0.44f, 0.1f);
    glVertex2f(0.44f, 0.0f);
glEnd();

//6:


glBegin(GL_LINES);
    glVertex2f(-0.02f, -0.4f);
     glVertex2f(0.01f, -0.5f);
glEnd();


glBegin(GL_LINES);
  glVertex2f(0.01f, -0.5f);
    glVertex2f(0.03f, -0.4f);
glEnd();

glBegin(GL_LINES);
   glVertex2f(0.045f, -0.5f);
    glVertex2f(0.045f, -0.4f);
glEnd();


//9:

glBegin(GL_LINES);
    glVertex2f(-0.43f, 0.1f);
     glVertex2f(-0.4f, 0.0f);
glEnd();


glBegin(GL_LINES);
    glVertex2f(-0.4f, 0.1f);
     glVertex2f(-0.43f, 0.0f);
glEnd();

glBegin(GL_LINES);
    glVertex2f(-0.44f, 0.1f);
    glVertex2f(-0.44f, 0.0f);
glEnd();




    glFlush();

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Clock");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	  glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}


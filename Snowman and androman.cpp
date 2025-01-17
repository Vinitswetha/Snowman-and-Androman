#include <windows.h>
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include <GL/glut.h>
static double x=0.0;
static double a=0.0;
bool change=true;
static double r1=1.0;


bool rot=false;
bool play=false;

void doDisplay();

static float y1=0;
void
stroke_output(GLfloat x, GLfloat y, char *format,...)
{
	va_list args;
	char buffer[200], *p;
	va_start(args, format);
	vsprintf(buffer, format, args);
	va_end(args);
	glPushMatrix();
	glTranslatef(-2.5, y, 0);
	glScaled(0.003, 0.005, 0.005);
	for (p = buffer; *p; p++)
    glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
	glPopMatrix();
}



void tree(){

glPushMatrix();

	glColor3f(0,1,0);
glBegin(GL_POLYGON);


glVertex2f(0,0);

glVertex2f(-.5,0.5);

glVertex2f(0,0.7);

glVertex2f(-0.3,1);


glVertex2f(0.2,0.9);


glVertex2f(0.8,2);


glVertex2f(0.8,0.9);
glVertex2f(1.2,1);
glVertex2f(0.8,0.8);
glVertex2f(1.2,0.5);
glVertex2f(0.5,0);

glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(0.5,-0.4,0);
glScaled(0.2,1,0.1);
glutSolidCube(1.0);
glPopMatrix();

}

void drawSnowman(){


//complete snowman
	glPushMatrix();
   
	//glScaled(1,1,0.1);
   glColor3f(1,1,1);
	


  glPushMatrix();
  glTranslatef(0,-.5,0);	
  glScaled(1.4,1.4,1.4);

	glPushMatrix();
	glTranslatef(0,-.1,0);
	glScaled(1.2,1,1.2);
	//top spere
	glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(0.0,1.2,0.0);
	glColor3f(1,1,1);
	glutSolidSphere(0.4,80,120);
	glPopMatrix();

	//eyes 
	glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(0.2,1.4,0.25);
	glutSolidSphere(0.06,80,120);
	glPopMatrix();

		glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(-0.2,1.4,0.25);
	glColor3f(1,1,1);
	glutSolidSphere(0.06,80,120);
	glPopMatrix();

	//nose

		glPushMatrix();
	glScaled(0.8,1.0,0.8);
	glTranslatef(0.0,1.3,0.0);
	glutSolidCone(0.1,0.9,80,120);
	glPopMatrix();

	//Hat
	
	glPushMatrix();
	glColor3f(1,0,0);
	glTranslatef(0.0,1.5,0.0);
	glRotatef(-90,1.0,0.0,0.0);
	glutSolidCone(0.4,0.8,10,10);
	glPopMatrix();


glPopMatrix();

	//base spere
	glPushMatrix();
glColor3f(1,1,1);
	
	glScaled(0.8,0.8,0.8);
	glTranslatef(0.0,0.2,0.0);
	glutSolidSphere(0.4,50,120);
	glPopMatrix();
	


//buttons
	glPushMatrix();
	glColor3f(1,0,0);

	glTranslatef(0.0,0.5,1.0);
	glScaled(0.2,0.2,0.2);
	glutSolidSphere(0.5,80,120);
	glPopMatrix();
	

	
	glPushMatrix();
	glColor3f(1,0,0);

	glTranslatef(0.0,0,1.0);
	glScaled(0.2,0.2,0.2);
	glutSolidSphere(0.5,80,120);
	glPopMatrix();

	
glPushMatrix();
glColor3f(1,0,0);

	glTranslatef(0.0,0.25,1.0);
	glScaled(0.2,0.2,0.2);
	glutSolidSphere(0.5,80,120);
	glPopMatrix();



	
glPopMatrix();

glPopMatrix();
glPopMatrix();

}

void andro(){


	glPushMatrix();
	glTranslatef(a,y1,0.0);
	
	//body
	glPushMatrix();
	glScaled(0.3,1.5,0.3);
	glRotatef(90,1,0,0);
	glutSolidTorus(0.5,1,30,30);
	glPopMatrix();
//hands
	glPushMatrix();
	glTranslatef(0.5,0,0);
	glScaled(0.1,1,0.1);
	glRotatef(90,1,0,0);
	glutSolidTorus(0.4,0.8,30,30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5,0,0);
	glScaled(0.1,1,0.1);
	glRotatef(90,1,0,0);
	glutSolidTorus(0.4,0.8,30,30);
	glPopMatrix();

//head

	glPushMatrix();
	glTranslatef(0,0.8,0);
	glutSolidSphere(0.4,30,30);
	glPopMatrix();

//eyes
	glPushMatrix();
	glTranslatef(0.15,0.85,0.3);
	glutSolidSphere(0.1,30,30);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.15,0.85,0.3);
	glutSolidSphere(0.1,30,30);
	glPopMatrix();

//ears

	
	glPushMatrix();
	glTranslatef(-0.15,1,0);
	glScaled(0.5,2,0);
	glutSolidSphere(0.2,30,30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.15,1,0);
	glScaled(0.5,2,0);
	glutSolidSphere(0.2,30,30);
	glPopMatrix();

// Legs
	glPushMatrix();
	
	
	glPushMatrix();
	glTranslatef(0.15,-0.8,0);
	glRotatef(r1,1,0,0);
	glScaled(0.1,1,0.1);
	glRotatef(90,1,0,0);
	glutSolidTorus(0.4,0.8,30,30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.15,-0.8,0);
	glRotatef(r1,1,0,0);
	glScaled(0.1,1,0.1);
	glRotatef(90,1,0,0);
	glutSolidTorus(0.4,0.8,30,30);
	glPopMatrix();

	glPopMatrix();   // legs end


	glPopMatrix();   //complete andro

}

void snowMan(double rang,double ad) 
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-13.0f);
	
	if(rot){
	glRotatef(30,0,1,0);
	}

	glColor3f(0.3,.3,.3);
    
	
	// Draw the bottom box 
	glPushMatrix();
	// glRotatef(rang,1.0f,0.0f,0.0f);
	glScaled(1.0,0.03,100.8);
	glTranslatef(0.0,-30.2,0.0);
	glutSolidCube(7.0);
	glPopMatrix();

//Trees
	glColor3f(1,1,0);
	glPushMatrix();
	glTranslatef(0.0,0.0,rang);
	
	for(int i=0;i<500;i+=13){
	
	glPushMatrix();
	glTranslatef(2.5,-0.5,7.0+i);
	tree();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-2.5,-0.5,0+i);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0,0.0,i+40);
	glutSolidTorus(0.2, 3.0, 10, 15);
	glPopMatrix();


	}
	
		

glPopMatrix();

// Call Snowman
if(change){

glPushMatrix();
glTranslatef(ad,0,0);

drawSnowman();
glPopMatrix();
}else{
	if(y1>=1.5)
		glRotatef(75,1,0,0);
	   andro();
}
	
	glFlush();
    glutSwapBuffers();
}





void w() 
{
r1+=10;
x -= 1.0;

snowMan(x,a);
	
}

void s()
{
	snowMan(x,a);
}

void skiLeft()
{x -= .08;

a-=1.0;
snowMan(x,a);
}

void skiRight()
{x -= .08;


a+=1.0;
snowMan(x,a);
}



void doInit() 
{
    
	/* Background and foreground color */
 	glColor3f(.0,1.0,1.0);
    glViewport(0,0,640,480);
 
	/* Select the projection matrix and reset it then
     setup our view perspective */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0f,(GLfloat)640/(GLfloat)480,0.1f,200.0f);    
    /* Select the modelview matrix, which we alter with rotatef() */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearDepth(2.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

}


void menu(int id)
{
	switch(id)
	{
	case 1:glutIdleFunc(w);
		break;
	case 2:glutIdleFunc(s);
		break;
	case 3:exit(0);
		break;
	
	}
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

void mykey(unsigned char key,int x,int y)
{

	if(key=='c'||key=='C')
	{
		change=!change;
	}

	if(key=='r'||key=='R')
	{
		rot=!rot;
	}


	if(key=='w' || key=='W')
	{	y1+=0.2;
	}


	if(key=='s' || key=='S')
	{	y1-=0.2;
	
}




	if(key==' ')
	{play=!play;
	if(play)
	glutIdleFunc(w);
	else 
	glutIdleFunc(s);
	
	}

	if(key=='a'|| key=='A'){
	
a-=0.3;
snowMan(x,a);
	
	}
if(key=='d'|| key=='D'){
	
	
a+=0.3;
snowMan(x,a);
	}
if(key=='q'|| key=='Q'){
	exit(0);
	
	}

}

int main(int argc, char *argv[]) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(30,0);
    glutCreateWindow("Snow/Man");
    glutDisplayFunc(doDisplay);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	//glEnable(GL_BLEND);
	glutKeyboardFunc(mykey);
	glutCreateMenu(menu);
    glutAddMenuEntry("Ski     's'",1);
	glutAddMenuEntry("Stop Ski		   'S'",2);
	glutAddMenuEntry("Exit		   'q'",3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	doInit();
    glutMainLoop();
	return 0; 
}
void doDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,1.0);
	glLoadIdentity();
	
	glTranslatef(0.0f,0.0f,-13.0f);
	glColor3f(0,0,0);
	stroke_output(-2.0, 2.2, "Interactive SnowMan and AndroMan by:");
	stroke_output(-2.0, 0.9, "SWETHA SINGH");
	stroke_output(-2.0, 0.0, "OMSREE");
	



	GLfloat mat_ambient[]={0.0f,1.0f,2.0f,1.0f};
	GLfloat mat_diffuse[]={0.0f,1.5f,.5f,1.0f};
	GLfloat mat_specular[]={5.0f,1.0f,1.0f,1.0f};
	GLfloat mat_shininess[]={50.0f};
	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	

	//light source properties
	GLfloat lightIntensity[]={10.7f,.7f,100.7f,1.0f};
	GLfloat light_position[]={0.0f,5.0f,10.0f,0.0f};
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	

	glEnable(GL_COLOR_MATERIAL);
	glFlush();
	glutSwapBuffers();
    
}

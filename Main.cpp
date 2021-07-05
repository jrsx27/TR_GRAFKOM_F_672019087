#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void mouse (int button, int state, int x, int y);
void mouseMotion (int x, int y);
void ukuran(int, int);

int is_depth;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
float mouseDown = false;

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Emanuel Pabianan - 672019266");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;

}

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}
void tampil(void)
{
    if (is_depth)
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT); 
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();
    
    //Tanah
    glBegin(GL_QUADS);
    glColor3f(0.4,0.7,0.2);
    glVertex3f(-70.0,-26.9,60.0);
    glVertex3f(-70.0,-26.9,-70.0);
    glVertex3f(70,-26.9,-70.0);
    glVertex3f(70,-26.9,60.0);
    glEnd();

    //Lantai 1.1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.9,0.6);
    glVertex3f(-12.0,-25.0,60.0);
    glVertex3f(-12.0,-25.0,32.0);
    glVertex3f(2.0,-25.0,32.0);
    glVertex3f(2.0,-25.0,60.0);
    glEnd();

    //Lantai 2.1
    glBegin(GL_QUADS);
    glColor3f(0.9,0.6,0.3);
    glVertex3f(2.0,-25.0,60.0);
    glVertex3f(2.0,-25.0,32.0);
    glVertex3f(12.0,-25.0,32.0);
    glVertex3f(12.0,-25.0,60.0);
    glEnd();

     //Lantai 3.1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-50.0,-25.0,20.0);
    glVertex3f(-35.0,-25.0,15.0);
    glVertex3f(-30.0,-25.0,30.0);
    glVertex3f(-30.0,-25.0,60.0);
    glVertex3f(-40.0,-25.0,60.0);
    glEnd();

    //parkiran
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(43.0,-25.0,8.0);
    glVertex3f(10.0,-25.0,13.0);
    glVertex3f(10.0,-25.0,40.0);
    glVertex3f(45.0,-25.0,40.0);
    glEnd();

    //jalan raya 1.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(-20.0,-25.0,60.0);
    glVertex3f(-20.0,-25.0,25.0);
    glVertex3f(-30.0,-25.0,25.0);
    glVertex3f(-30.0,-25.0,60.0);
    glEnd();

    //jalan raya 1.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(-20.0,-25.0,25.0);
    glVertex3f(-10.0,-25.0,0.0);
    glVertex3f(-20.0,-25.0,0.0);
    glVertex3f(-30.0,-25.0,25.0);
    glEnd();

    //jalan raya 1.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(-15.0,-25.0,10.0);
    glVertex3f(50.0,-25.0,0.0);
    glVertex3f(50.0,-25.0,-10.0);
    glVertex3f(-15.0,-25.0,0.0);
    glEnd();

    //jalan raya 1.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(20.0,-25.0,20.0);
    glVertex3f(10.0,-25.0,0.0);
    glVertex3f(0.0,-25.0,0.0);
    glVertex3f(10.0,-25.0,40.0);
    glEnd();

    //jalan raya 1.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex3f(-20.0,-25.0,0.0);
    glVertex3f(-35.0,-25.0,0.0);
    glVertex3f(-35.0,-25.0,15.0);
    glVertex3f(-30.0,-25.0,30.0);
    glEnd();

    //Gedung 1.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-2.0,-25.0,40.0);
    glVertex3f(-2.0,-15.0,40.0);
    glVertex3f(-12.0,-15.0,40.0);
    glVertex3f(-12.0,-25.0,40.0);
    glEnd();

    //gedung 1.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-12.0,-25.0,40.0);
    glVertex3f(-12.0,-15.0,40.0);
    glVertex3f(-12.0,-15.0,32.0);
    glVertex3f(-12.0,-25.0,32.0);
    glEnd();

     //gedung 1.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-2.0,-25.0,40.0);
    glVertex3f(-2.0,-15.0,40.0);
    glVertex3f(-2.0,-15.0,32.0);
    glVertex3f(-2.0,-25.0,32.0);
    glEnd();

    //gedung 1.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-12.0,-15.0,40.0);
    glVertex3f(-12.0,-15.0,32.0);
    glVertex3f(-2.0,-15.0,32.0);
    glVertex3f(-2.0,-15.0,40.0);
    glEnd();

    //gedung 1.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-12.0,-25.0,32.0);
    glVertex3f(-12.0,-15.0,32.0);
    glVertex3f(-2.0,-15.0,32.0);
    glVertex3f(-2.0,-25.0,32.0);
    glEnd();

    //Gedung 2.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(2.0,-25.0,40.0);
    glVertex3f(2.0,-10.0,40.0);
    glVertex3f(12.0,-10.0,40.0);
    glVertex3f(12.0,-25.0,40.0);
    glEnd();

    //gedung 2.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-25.0,40.0);
    glVertex3f(12.0,-10.0,40.0);
    glVertex3f(12.0,-10.0,32.0);
    glVertex3f(12.0,-25.0,32.0);
    glEnd();

     //gedung 2.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(2.0,-25.0,40.0);
    glVertex3f(2.0,-10.0,40.0);
    glVertex3f(2.0,-10.0,32.0);
    glVertex3f(2.0,-25.0,32.0);
    glEnd();

    //gedung 2.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-10.0,40.0);
    glVertex3f(12.0,-10.0,32.0);
    glVertex3f(2.0,-10.0,32.0);
    glVertex3f(2.0,-10.0,40.0);
    glEnd();

    //gedung 2.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-25.0,32.0);
    glVertex3f(12.0,-10.0,32.0);
    glVertex3f(2.0,-10.0,32.0);
    glVertex3f(2.0,-25.0,32.0);
    glEnd();

    //Gedung 3.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-25.0,53.0);
    glVertex3f(12.0,-15.0,53.0);
    glVertex3f(20.0,-15.0,53.0);
    glVertex3f(20.0,-25.0,53.0);
    glEnd();

    //gedung 3.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-25.0,53.0);
    glVertex3f(12.0,-15.0,53.0);
    glVertex3f(12.0,-15.0,40.0);
    glVertex3f(12.0,-25.0,40.0);
    glEnd();

     //gedung 3.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(20.0,-25.0,40.0);
    glVertex3f(20.0,-15.0,40.0);
    glVertex3f(20.0,-15.0,53.0);
    glVertex3f(20.0,-25.0,53.0);
    glEnd();

    //gedung 3.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-15.0,40.0);
    glVertex3f(12.0,-15.0,53.0);
    glVertex3f(20.0,-15.0,53.0);
    glVertex3f(20.0,-15.0,40.0);
    glEnd();

    //gedung 3.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(12.0,-25.0,40.0);
    glVertex3f(12.0,-15.0,40.0);
    glVertex3f(20.0,-15.0,40.0);
    glVertex3f(20.0,-25.0,40.0);
    glEnd();

    //Gedung 4.1.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(25.0,-25.0,50.0);
    glVertex3f(25.0,-10.0,50.0);
    glVertex3f(35.0,-10.0,48.0);
    glVertex3f(35.0,-25.0,48.0);
    glEnd();


    //gedung 4.1.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(25.0,-25.0,50.0);
    glVertex3f(25.0,-10.0,50.0);
    glVertex3f(25.0,-10.0,40.0);
    glVertex3f(25.0,-25.0,40.0);
    glEnd();

     //gedung 4.1.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-25.0,48.0);
    glVertex3f(35.0,-10.0,48.0);
    glVertex3f(35.0,-10.0,38.0);
    glVertex3f(35.0,-25.0,38.0);
    glEnd();

    //gedung 4.1.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-10.0,48.0);
    glVertex3f(35.0,-10.0,38.0);
    glVertex3f(25.0,-10.0,40.0);
    glVertex3f(25.0,-10.0,50.0);
    glEnd();

    //gedung 4.1.5
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(25.0,-25.0,40.0);
    glVertex3f(25.0,-10.0,40.0);
    glVertex3f(35.0,-10.0,38.0);
    glVertex3f(35.0,-25.0,38.0);
    glEnd();

    //Gedung 4.2.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-25.0,48.0);
    glVertex3f(35.0,-10.0,48.0);
    glVertex3f(45.0,-10.0,44.0);
    glVertex3f(45.0,-25.0,44.0);
    glEnd();

     //gedung 4.2.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(45.0,-25.0,44.0);
    glVertex3f(45.0,-10.0,44.0);
    glVertex3f(45.0,-10.0,34.0);
    glVertex3f(45.0,-25.0,34.0);
    glEnd();

    //gedung 4.2.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-10.0,48.0);
    glVertex3f(35.0,-10.0,38.0);
    glVertex3f(45.0,-10.0,34.0);
    glVertex3f(45.0,-10.0,44.0);
    glEnd();

    //gedung 4.2.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-25.0,38.0);
    glVertex3f(35.0,-10.0,38.0);
    glVertex3f(45.0,-10.0,34.0);
    glVertex3f(45.0,-25.0,34.0);
    glEnd();

    //Gedung 4.3.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(45.0,-25.0,44.0);
    glVertex3f(45.0,-10.0,44.0);
    glVertex3f(55.0,-10.0,36.0);
    glVertex3f(55.0,-25.0,36.0);
    glEnd();

     //gedung 4.3.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(55.0,-25.0,36.0);
    glVertex3f(55.0,-10.0,36.0);
    glVertex3f(55.0,-10.0,26.0);
    glVertex3f(55.0,-25.0,26.0);
    glEnd();

    //gedung 4.3.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(45.0,-10.0,44.0);
    glVertex3f(45.0,-10.0,34.0);
    glVertex3f(55.0,-10.0,26.0);
    glVertex3f(55.0,-10.0,36.0);
    glEnd();

    //gedung 4.3.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(45.0,-25.0,34.0);
    glVertex3f(45.0,-10.0,34.0);
    glVertex3f(55.0,-10.0,26.0);
    glVertex3f(55.0,-25.0,26.0);
    glEnd();

     //Gedung 5.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(45.0,-25.0,34.0);
    glVertex3f(45.0,-15.0,34.0);
    glVertex3f(50.0,-15.0,29.0);
    glVertex3f(50.0,-25.0,29.0);
    glEnd();

    //gedung 5.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(45.0,-25.0,34.0);
    glVertex3f(45.0,-15.0,34.0);
    glVertex3f(40.0,-15.0,0.0);
    glVertex3f(40.0,-25.0,0.0);
    glEnd();

     //gedung 5.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(50,-25.0,29.0);
    glVertex3f(50,-15.0,29.0);
    glVertex3f(45,-15.0,0.0);
    glVertex3f(45,-25.0,0.0);
    glEnd();

    //gedung 5.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(45,-15.0,0.0);
    glVertex3f(40,-15.0,0.0);
    glVertex3f(45,-15.0,34.0);
    glVertex3f(50,-15.0,29.0);
    glEnd();

    //gedung 5.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(40.0,-25.0,0.0);
    glVertex3f(40.0,-15.0,0.0);
    glVertex3f(45.0,-15.0,0.0);
    glVertex3f(45.0,-25.0,0.0);
    glEnd();

    //Gedung 6.1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(40,-25.0,0.0);
    glVertex3f(40,-15.0,0.0);
    glVertex3f(20.0,-15.0,5.0);
    glVertex3f(20.0,-25.0,5.0);
    glEnd();

    //gedung 6.2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(20.0,-25.0,5.0);
    glVertex3f(20.0,-15.0,5.0);
    glVertex3f(20.0,-15.0,13.0);
    glVertex3f(20.0,-25.0,13.0);
    glEnd();

     //gedung 6.3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(20,-25.0,13.0);
    glVertex3f(20,-15.0,13.0);
    glVertex3f(43.0,-15.0,8.0);
    glVertex3f(43.0,-25.0,8.0);
    glEnd();

    //gedung 6.4
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(40.0,-15.0,0.0);
    glVertex3f(43.0,-15.0,8.0);
    glVertex3f(20.0,-15.0,13.0);
    glVertex3f(20.0,-15.0,5.0);
    glEnd();

    //gedung 6.5
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-12.0,-25.0,32.0);
    glVertex3f(-12.0,-15.0,32.0);
    glVertex3f(-2.0,-15.0,32.0);
    glVertex3f(-2.0,-25.0,32.0);
    glEnd();

    //gedung 7.1
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-65.0,-15.0,15.0);
    glVertex3f(-65.0,-15.0,-15.0);
    glVertex3f(-50.0,-15.0,-20.0);
    glVertex3f(-35.0,-15.0,-15.0);
    glVertex3f(-35.0,-15.0,15.0);
    glVertex3f(-50.0,-15.0,20.0);
    glEnd();

    //gedung 7.2
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-65.0,-15.0,-15.0);
    glVertex3f(-65.0,-15.0,15.0);
    glVertex3f(-65.0,-25.0,15.0);
    glVertex3f(-65.0,-25.0,-15.0);
    glEnd();

    //gedung 7.3
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-65.0,-15.0,-15.0);
    glVertex3f(-65.0,-25.0,-15.0);
    glVertex3f(-50.0,-25.0,-20.0);
    glVertex3f(-50.0,-15.0,-20.0);
    glEnd();

     //gedung 7.4
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-50.0,-25.0,-20.0);
    glVertex3f(-50.0,-15.0,-20.0);
    glVertex3f(-35.0,-15.0,-15.0);
    glVertex3f(-35.0,-25.0,-15.0);
    glEnd();

    //gedung 7.5
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-35.0,-15.0,-15.0);
    glVertex3f(-35.0,-25.0,-15.0);
    glVertex3f(-35.0,-25.0,15.0);
    glVertex3f(-35.0,-15.0,15.0);
    glEnd();

    //gedung 7.6
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-35.0,-25.0,15.0);
    glVertex3f(-35.0,-15.0,15.0);
    glVertex3f(-50.0,-15.0,20.0);
    glVertex3f(-50.0,-25.0,20.0);
    glEnd();

    //gedung 7.7
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-50.0,-15.0,20.0);
    glVertex3f(-50.0,-25.0,20.0);
    glVertex3f(-65.0,-25.0,15.0);
    glVertex3f(-65.0,-15.0,15.0);
    glEnd();

    //gedung 8.1
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-20.0,-25.0,-22.0);
    glVertex3f(-20.0,-10.0,-22.0);
    glVertex3f(-10.0,-10.0,-12.0);
    glVertex3f(-10.0,-25.0,-12.0);
    glEnd();

    //gedung 8.2
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-10.0,-10.0,-12.0);
    glVertex3f(-10.0,-25.0,-12.0);
    glVertex3f(30.0,-25.0,-12.0);
    glVertex3f(30.0,-10.0,-12.0);
    glEnd();

    //gedung 8.3
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(40.0,-10.0,-22.0);
    glVertex3f(40.0,-25.0,-22.0);
    glVertex3f(30.0,-25.0,-12.0);
    glVertex3f(30.0,-10.0,-12.0);
    glEnd();

     //gedung 8.4
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(40.0,-10.0,-22.0);
    glVertex3f(40.0,-25.0,-22.0);
    glVertex3f(30.0,-25.0,-7.0);
    glVertex3f(30.0,-10.0,-7.0);
    glEnd();

    //gedung 8.5
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(10.0,-10.0,-4.0);
    glVertex3f(10.0,-25.0,-4.0);
    glVertex3f(30.0,-25.0,-7.0);
    glVertex3f(30.0,-10.0,-7.0);
    glEnd();

      //gedung 8.6
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(10.0,-10.0,-4.0);
    glVertex3f(10.0,-25.0,-4.0);
    glVertex3f(-10.0,-25.0,-7.0);
    glVertex3f(-10.0,-10.0,-7.0);
    glEnd();

    //gedung 8.7
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.0,0.0);
    glVertex3f(-20.0,-25.0,-22.0);
    glVertex3f(-20.0,-10.0,-22.0);
    glVertex3f(-10.0,-10.0,-7.0);
    glVertex3f(-10.0,-25.0,-7.0);
    glEnd();

    //gedung 8.8
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-10.0,-10.0,-7.0);
    glVertex3f(10.0,-10.0,-4.0);
    glVertex3f(10.0,-10.0,-12.0);
    glVertex3f(-10.0,-10.0,-12.0);
    glVertex3f(-20.0,-10.0,-22.0);
    glEnd();

    //gedung 8.9
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(30.0,-10.0,-7.0);
    glVertex3f(10.0,-10.0,-4.0);
    glVertex3f(10.0,-10.0,-12.0);
    glVertex3f(30.0,-10.0,-12.0);
    glVertex3f(40.0,-10.0,-22.0);
    glEnd();

      //jembatan 1.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-2.0,-18.0,40.0);
    glVertex3f(-2.0,-21.0,40.0);
    glVertex3f(2.0,-21.0,40.0);
    glVertex3f(2.0,-18.0,40.0);
    glEnd();

    //jembatan 1.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-2.0,-18.0,36.0);
    glVertex3f(-2.0,-21.0,36.0);
    glVertex3f(2.0,-21.0,36.0);
    glVertex3f(2.0,-18.0,36.0);
    glEnd();

    //jembatan 1.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-2.0,-18.0,40.0);
    glVertex3f(-2.0,-18.0,36.0);
    glVertex3f(2.0,-18.0,36.0);
    glVertex3f(2.0,-18.0,40.0);
    glEnd();

    //jembatan 1.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-2.0,-21.0,40.0);
    glVertex3f(-2.0,-21.0,36.0);
    glVertex3f(2.0,-21.0,36.0);
    glVertex3f(2.0,-21.0,40.0);
    glEnd();

    //jembatan 2.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-21.0,36.0);
    glVertex3f(-1.5,-18.0,36.0);
    glVertex3f(-1.5,-18.0,15.0);
    glVertex3f(-1.5,-21.0,15.0);
    glEnd();

    //jembatan 2.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(1.5,-21.0,36.0);
    glVertex3f(1.5,-18.0,36.0);
    glVertex3f(1.5,-18.0,15.0);
    glVertex3f(1.5,-21.0,15.0);
    glEnd();

    //jembatan 2.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-18.0,36.0);
    glVertex3f(-1.5,-18.0,15.0);
    glVertex3f(1.5,-18.0,15.0);
    glVertex3f(1.5,-18.0,36.0);
    glEnd();

      //jembatan 2.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-21.0,36.0);
    glVertex3f(-1.5,-21.0,15.0);
    glVertex3f(1.5,-21.0,15.0);
    glVertex3f(1.5,-21.0,36.0);
    glEnd();

    //jembatan 3.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-21.0,15.0);
    glVertex3f(-1.5,-18.0,15.0);
    glVertex3f(-5,-18.0,-7.0);
    glVertex3f(-5,-21.0,-7.0);
    glEnd();

    //jembatan 3.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(1.5,-21.0,15.0);
    glVertex3f(1.5,-18.0,15.0);
    glVertex3f(-2.0,-18.0,-6.0);
    glVertex3f(-2.0,-21.0,-6.0);
    glEnd();

    //jembatan 3.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-18.0,15.0);
    glVertex3f(-5.0,-18.0,-7.0);
    glVertex3f(-2.0,-18.0,-6.0);
    glVertex3f(1.5,-18.0,15.0);
    glEnd();

    //jembatan 3.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1.5,-21.0,15.0);
    glVertex3f(-5.0,-21.0,-7.0);
    glVertex3f(-2.0,-21.0,-6.0);
    glVertex3f(1.5,-21.0,15.0);
    glEnd();

    //jendela 1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-3.0,-24.0,40.1);
    glVertex3f(-3.0,-16.0,40.1);
    glVertex3f(-11.0,-16.0,40.1);
    glVertex3f(-11.0,-24.0,40.1);
    glEnd();

    //jendela 1.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-9.0,-24.0,40.2);
    glVertex3f(-9.0,-16.0,40.2);

    glVertex3f(-7.0,-16.0,40.2);
    glVertex3f(-7.0,-24.0,40.2);

    glVertex3f(-5.0,-16.0,40.2);
    glVertex3f(-5.0,-24.0,40.2);

    glVertex3f(-3.0,-18.0,40.2);
    glVertex3f(-11.0,-18.0,40.2);

    glVertex3f(-3.0,-22.0,40.2);
    glVertex3f(-11.0,-22.0,40.2);
    glEnd();

    //jendela 2.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(11.0,-24.0,40.1);
    glVertex3f(11.0,-11.0,40.1);
    glVertex3f(3.0,-11.0,40.1);
    glVertex3f(3.0,-24.0,40.1);
    glEnd();

    //jendela 2.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(5.0,-24.0,40.2);
    glVertex3f(5.0,-11.0,40.2);

    glVertex3f(7.0,-11.0,40.2);
    glVertex3f(7.0,-24.0,40.2);

    glVertex3f(9.0,-11.0,40.2);
    glVertex3f(9.0,-24.0,40.2);

    glVertex3f(3.0,-14.0,40.2);
    glVertex3f(11.0,-14.0,40.2);

    glVertex3f(3.0,-17.0,40.2);
    glVertex3f(11.0,-17.0,40.2);

    glVertex3f(3.0,-21.0,40.2);
    glVertex3f(11.0,-21.0,40.2);
    glEnd();

    //jendela 3.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(13.0,-24.0,53.1);
    glVertex3f(13.0,-16.0,53.1);
    glVertex3f(19.0,-16.0,53.1);
    glVertex3f(19.0,-24.0,53.1);
    glEnd();

    //jendela 3.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(15.0,-24.0,53.2);
    glVertex3f(15.0,-16.0,53.2);

    glVertex3f(17.0,-24.0,53.2);
    glVertex3f(17.0,-16.0,53.2);

    glVertex3f(13.0,-18.0,53.2);
    glVertex3f(19.0,-18.0,53.2);

    glVertex3f(13.0,-22.0,53.2);
    glVertex3f(19.0,-22.0,53.2);
    glEnd();

    //jendela 4.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(26.0,-24.0,50.1);
    glVertex3f(26.0,-11.0,50.1);
    glVertex3f(35,-11.0,48.1);
    glVertex3f(35,-24.0,48.1);
    glEnd();

     //jendela 4.2
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(26.0,-15.0,50.2);
    glVertex3f(35.0,-15.0,48.2);

    glVertex3f(26.0,-18.0,50.2);
    glVertex3f(35.0,-18.0,48.2);

    glVertex3f(26.0,-21.0,50.2);
    glVertex3f(35.0,-21.0,48.2);
    glEnd();

     //jendela 5.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(35.0,-24.0,48.1);
    glVertex3f(35.0,-11.0,48.1);
    glVertex3f(45.0,-11.0,44.1);
    glVertex3f(45.0,-24.0,44.1);
    glEnd();

      //jendela 5.2
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.0,-15.0,48.2);
    glVertex3f(45.0,-15.0,44.2);

    glVertex3f(35.0,-18.0,48.2);
    glVertex3f(45.0,-18.0,44.2);

    glVertex3f(35.0,-21.0,48.2);
    glVertex3f(45.0,-21.0,44.2);
    glEnd();

    //jendela 6.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(45.0,-24.0,44.1);
    glVertex3f(45.0,-11.0,44.1);
    glVertex3f(55.0,-11.0,36.1);
    glVertex3f(55.0,-24.0,36.1);
    glEnd();

    //jendela 6.2
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(45.0,-15.0,44.2);
    glVertex3f(55.0,-15.0,36.2);

    glVertex3f(45.0,-18.0,44.2);
    glVertex3f(55.0,-18.0,36.2);

    glVertex3f(45.0,-21.0,44.2);
    glVertex3f(55.0,-21.0,36.2);
    glEnd();

    //jendela 7.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(44.9,-24.0,33.0);
    glVertex3f(44.9,-16.0,33.0);
    glVertex3f(39.9,-16.0,1.0);
    glVertex3f(39.9,-24.0,1.0);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(44.8,-18.0,33.0);
    glVertex3f(39.8,-18.0,1.0);

    glVertex3f(44.8,-20.0,33.0);
    glVertex3f(39.8,-20.0,1.0);

    glVertex3f(44.8,-22.0,33.0);
    glVertex3f(39.8,-22.0,1.0);
    glEnd();

     //jendela 8.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(21.0,-24.0,13.0);
    glVertex3f(21.0,-16.0,13.0);
    glVertex3f(43.0,-16.0,8.0);
    glVertex3f(43.0,-24.0,8.0);
    glEnd();

    //jendela 8.2
     glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(21.1,-18.0,13.0);
    glVertex3f(43.1,-18.0,8.0);

    glVertex3f(21.1,-20.0,13.0);
    glVertex3f(43.1,-20.0,8.0);

    glVertex3f(21.1,-22.0,13.0);
    glVertex3f(43.1,-22.0,8.0);
    glEnd();


    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'w':
        case 'W':
            glTranslatef(0.0,0.0,3.0);
            break;
        case 'd':
        case 'D':
            glTranslatef(3.0,0.0,0.0);
            break;
        case 's':
        case 'S':
            glTranslatef(0.0,0.0,-3.0);
            break;
        case 'a':
        case 'A':
            glTranslatef(-3.0,0.0,0.0);
            break;
        case '7':
            glTranslatef(0.0,3.0,0.0);
            break;
        case '9':
            glTranslatef(0.0,-3.0,0.0);
            break;
        case '2':
           glRotatef(2.0,1.0,0.0,0.0);
            break;
        case '8':
            glRotatef(-2.0,1.0,0.0,0.0);
            break;
        case '6':
            glRotatef(2.0,0.0,1.0,0.0);
            break;
        case '4':
           glRotatef(-2.0,0.0,1.0,0.0);
            break;
        case '1':
            glRotatef(2.0,0.0,0.0,1.0);
            break;
        case '3':
           glRotatef(-2.0,0.0,0.0,1.0);
            break;

        case '5':
            if (is_depth)
            {
                is_depth=0;
                glDisable(GL_DEPTH_TEST);
            }
            else
            {
                is_depth = 1;
                glEnable(GL_DEPTH_TEST);
            }

    }
    tampil();
}
void mouse(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }else{
        mouseDown = false;
    }
}
void mouseMotion(int x, int y)
{
    if(!mouseDown)
    {
        xrot = y + ydiff;
        yrot = x- xdiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi,5.0,500.0);
    glTranslated(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}



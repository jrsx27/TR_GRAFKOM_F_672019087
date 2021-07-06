// 672019087	Anugramidah Limbong Ma'dika (Ketua Kelompok)
// 672019266	Emanuel Pabianan
// 672019261	Junior Silambi
// 672019272	Briliant Jeremy Pairunan
#include<windows.h>
#include<gl/glut.h>

//untuk membuat variabel
void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Kyusu University(Jepang)");
    init();
    //untuk menampilkan display
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;

}

void init(void)
{
    //untuk menginisiasi mulai dari bacground
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    //depth test untuk kedalaman
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    //untuk besar titik dan tebal garis
    glPointSize(9.0);
    glLineWidth(6.0f);

}
void tampil(void)
{
    //untuk bisa melihat kedalam
    //jika if-nya nyala maka gl color dan gl depth akan aktif
    //yang dimana dapat melihat warna didalamnya
    if (is_depth)
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);
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

    //gedung 9.1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-15.0,-25.0);
    glVertex3f(-25.0,-15.0,-45.0);
    glVertex3f(-40.0,-15.0,-45.0);
    glVertex3f(-40.0,-15.0,-25.0);
    glEnd();

    //gedung 9.2
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-25.0,-25.0);
    glVertex3f(-25.0,-25.0,-45.0);
    glVertex3f(-25.0,-15.0,-45.0);
    glVertex3f(-25.0,-15.0,-25.0);
    glEnd();

    //gedung 9.3
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-25.0,-25.0);
    glVertex3f(-25.0,-15.0,-25.0);
    glVertex3f(-40.0,-15.0,-25.0);
    glVertex3f(-40.0,-25.0,-25.0);
    glEnd();

    //gedung 9.4
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-40.0,-25.0,-25.0);
    glVertex3f(-40.0,-25.0,-45.0);
    glVertex3f(-40.0,-15.0,-45.0);
    glVertex3f(-40.0,-15.0,-25.0);
    glEnd();

    //gedung 9.5
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-40.0,-25.0,-45.0);
    glVertex3f(-40.0,-15.0,-45.0);
    glVertex3f(-25.0,-15.0,-45.0);
    glVertex3f(-25.0,-25.0,-45.0);
    glEnd();

    //gedung 10.1
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-40.0,-25.0,-45.0);
    glVertex3f(-40.0,-10.0,-45.0);
    glVertex3f(-10.0,-10.0,-45.0);
    glVertex3f(-10.0,-25.0,-45.0);
    glEnd();

    //gedung 10.2
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-10.0,-25.0,-45.0);
    glVertex3f(-10.0,-10.0,-45.0);
    glVertex3f(-10.0,-10.0,-55.0);
    glVertex3f(-10.0,-25.0,-55.0);
    glEnd();

    //gedung 10.3
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-10.0,-25.0,-55.0);
    glVertex3f(-10.0,-10.0,-55.0);
    glVertex3f(-40.0,-10.0,-55.0);
    glVertex3f(-40.0,-25.0,-55.0);
    glEnd();

    //gedung 10.4
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-40.0,-25.0,-55.0);
    glVertex3f(-40.0,-10.0,-55.0);
    glVertex3f(-40.0,-10.0,-45.0);
    glVertex3f(-40.0,-25.0,-45.0);
    glEnd();

    //gedung 10.5
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-40.0,-10.0,-55.0);
    glVertex3f(-40.0,-10.0,-45.0);
    glVertex3f(-10.0,-10.0,-45.0);
    glVertex3f(-10.0,-10.0,-55.0);
    glEnd();

    //gedung 11.1
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-10.0,-25.0,-50.0);
    glVertex3f(-10.0,-10.0,-50.0);
    glVertex3f(10.0,-10.0,-50.0);
    glVertex3f(10.0,-25.0,-50.0);
    glEnd();

    //gedung 11.2
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-25.0,-50.0);
    glVertex3f(10.0,-10.0,-50.0);
    glVertex3f(10.0,-10.0,-60.0);
    glVertex3f(10.0,-25.0,-60.0);
    glEnd();

    //gedung 11.3
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-25.0,-60.0);
    glVertex3f(10.0,-10.0,-60.0);
    glVertex3f(-10.0,-10.0,-60.0);
    glVertex3f(-10.0,-25.0,-60.0);
    glEnd();

    //gedung 11.4
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-10.0,-25.0,-50.0);
    glVertex3f(-10.0,-10.0,-50.0);
    glVertex3f(-10.0,-10.0,-60.0);
    glVertex3f(-10.0,-25.0,-60.0);
    glEnd();

    //gedung 11.5
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-10.0,-50.0);
    glVertex3f(10.0,-10.0,-60.0);
    glVertex3f(-10.0,-10.0,-60.0);
    glVertex3f(-10.0,-10.0,-50.0);
    glEnd();

    //gedung 12.1
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-25.0,-55.0);
    glVertex3f(10.0,-15.0,-55.0);
    glVertex3f(25.0,-15.0,-55.0);
    glVertex3f(25.0,-25.0,-55.0);
    glEnd();

    //gedung 12.2
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(25.0,-25.0,-55.0);
    glVertex3f(25.0,-15.0,-55.0);
    glVertex3f(25.0,-15.0,-60.0);
    glVertex3f(25.0,-25.0,-60.0);
    glEnd();

    //gedung 12.3
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-25.0,-60.0);
    glVertex3f(10.0,-15.0,-60.0);
    glVertex3f(25.0,-15.0,-60.0);
    glVertex3f(25.0,-25.0,-60.0);
    glEnd();

    //gedung 12.4
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-25.0,-60.0);
    glVertex3f(10.0,-15.0,-60.0);
    glVertex3f(25.0,-15.0,-60.0);
    glVertex3f(25.0,-25.0,-60.0);
    glEnd();

    //gedung 12.5
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(10.0,-15.0,-55.0);
    glVertex3f(10.0,-15.0,-60.0);
    glVertex3f(25.0,-15.0,-60.0);
    glVertex3f(25.0,-15.0,-55.0);
    glEnd();

    //gedung 13.1
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(25.0,-25.0,-35.0);
    glVertex3f(25.0,-10.0,-35.0);
    glVertex3f(40.0,-10.0,-35.0);
    glVertex3f(40.0,-25.0,-35.0);
    glEnd();

     //gedung 13.2
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(25.0,-25.0,-60.0);
    glVertex3f(25.0,-10.0,-60.0);
    glVertex3f(40.0,-10.0,-60.0);
    glVertex3f(40.0,-25.0,-60.0);
    glEnd();

    //gedung 13.3
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(40.0,-25.0,-35.0);
    glVertex3f(40.0,-10.0,-35.0);
    glVertex3f(40.0,-10.0,-60.0);
    glVertex3f(40.0,-25.0,-60.0);
    glEnd();

    //gedung 13.4
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(25.0,-25.0,-35.0);
    glVertex3f(25.0,-10.0,-35.0);
    glVertex3f(25.0,-10.0,-60.0);
    glVertex3f(25.0,-25.0,-60.0);
    glEnd();

    //gedung 13.5
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(25.0,-10.0,-35.0);
    glVertex3f(25.0,-10.0,-60.0);
    glVertex3f(40.0,-10.0,-60.0);
    glVertex3f(40.0,-10.0,-35.0);
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

    //jendela 1.1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-3.0,-24.0,40.1);
    glVertex3f(-3.0,-16.0,40.1);
    glVertex3f(-11.0,-16.0,40.1);
    glVertex3f(-11.0,-24.0,40.1);
    glEnd();

    //jendela 1.1.2
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

    //jendela 1.2.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-12.1,-24.0,39.0);
    glVertex3f(-12.1,-16.0,39.0);
    glVertex3f(-12.1,-16.0,33.0);
    glVertex3f(-12.1,-24.0,33.0);
    glEnd();

    //jendela 1.2.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-12.2,-24.0,37.0);
    glVertex3f(-12.2,-16.0,37.0);

    glVertex3f(-12.2,-24.0,35.0);
    glVertex3f(-12.2,-16.0,35.0);

    glVertex3f(-12.2,-19.0,39.0);
    glVertex3f(-12.2,-19.0,33.0);

    glVertex3f(-12.2,-21.0,39.0);
    glVertex3f(-12.2,-21.0,33.0);
    glEnd();

    //gedung 1.3.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-11.0,-24.0,31.9);
    glVertex3f(-11.0,-16.0,31.9);
    glVertex3f(-3.0,-16.0,31.9);
    glVertex3f(-3.0,-24.0,31.9);
    glEnd();

    //jendela 1.3.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(-5.0,-24.0,31.8);
    glVertex3f(-5.0,-16.0,31.8);

    glVertex3f(-9.0,-24.0,31.8);
    glVertex3f(-9.0,-16.0,31.8);

    glVertex3f(-11.0,-19.0,31.8);
    glVertex3f(-3.0,-19.0,31.8);

    glVertex3f(-11.0,-21.0,31.8);
    glVertex3f(-3.0,-21.0,31.8);
    glEnd();

    //jendela 2.1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(11.0,-24.0,40.1);
    glVertex3f(11.0,-11.0,40.1);
    glVertex3f(3.0,-11.0,40.1);
    glVertex3f(3.0,-24.0,40.1);
    glEnd();

    //jendela 2.1.2
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

    //jendela 2.2.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(11.0,-24.0,31.9);
    glVertex3f(11.0,-11.0,31.9);
    glVertex3f(3.0,-11.0,31.9);
    glVertex3f(3.0,-24.0,31.9);
    glEnd();

    //jendela 2.2.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(5.0,-24.0,31.8);
    glVertex3f(5.0,-11.0,31.8);

    glVertex3f(7.0,-11.0,31.8);
    glVertex3f(7.0,-24.0,31.8);

    glVertex3f(9.0,-11.0,31.8);
    glVertex3f(9.0,-24.0,31.8);

    glVertex3f(3.0,-14.0,31.8);
    glVertex3f(11.0,-14.0,31.8);

    glVertex3f(3.0,-17.0,31.8);
    glVertex3f(11.0,-17.0,31.8);

    glVertex3f(3.0,-21.0,31.8);
    glVertex3f(11.0,-21.0,31.8);
    glEnd();

    //jendela 3.1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(13.0,-24.0,53.1);
    glVertex3f(13.0,-16.0,53.1);
    glVertex3f(19.0,-16.0,53.1);
    glVertex3f(19.0,-24.0,53.1);
    glEnd();

    //jendela 3.1.2
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

    //jendela 3.2.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(11.9,-24.0,52.0);
    glVertex3f(11.9,-16.0,52.0);
    glVertex3f(11.9,-16.0,41.0);
    glVertex3f(11.9,-24.0,41.0);
    glEnd();

    //jendela 3.2.2
    glBegin(GL_LINES);
    glColor3f(0.4,0.4,0.9);
    glVertex3f(11.9,-19.0,52.2);
    glVertex3f(11.9,-19.0,41.2);

    glVertex3f(11.9,-21.0,52.2);
    glVertex3f(11.9,-21.0,41.2);

    glVertex3f(11.9,-16.0,44.2);
    glVertex3f(11.9,-24.0,44.2);

    glVertex3f(11.9,-16.0,47.2);
    glVertex3f(11.9,-24.0,47.2);

    glVertex3f(11.9,-16.0,49.2);
    glVertex3f(11.9,-24.0,49.2);
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

    //pintu 1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.1,-25.0,40.3);
    glVertex3f(-5.1,-22.0,40.3);
    glVertex3f(-8.9,-22.0,40.3);
    glVertex3f(-8.9,-25.0,40.3);
    glEnd();

    //pintu 2.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(5.1,-25.0,40.3);
    glVertex3f(5.1,-21.0,40.3);
    glVertex3f(8.9,-21.0,40.3);
    glVertex3f(8.9,-25.0,40.3);
    glEnd();

    //pintu 3.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(11.8,-25.0,44.3);
    glVertex3f(11.8,-21.1,44.3);
    glVertex3f(11.8,-21.1,49.1);
    glVertex3f(11.8,-25.0,49.1);
    glEnd();

    //Meja 1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-56.0,-22.0,-5.0);
    glVertex3f(-56.0,-22.,-10.0);
    glVertex3f(-44.0,-22.,-10.0);
    glVertex3f(-44.0,-22.0,-5.0);
    glEnd();

    //Meja 1.2
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-55.0,-22.0,-5.0);
    glVertex3f(-55.0,-25.0,-5.0);

    glVertex3f(-55.0,-22.,-10.0);
    glVertex3f(-55.0,-25.,-10.0);

    glVertex3f(-45.0,-22.,-10.0);
    glVertex3f(-45.0,-25.,-10.0);

    glVertex3f(-45.0,-22.0,-5.0);
    glVertex3f(-45.0,-25.0,-5.0);
    glEnd();

    //Kursi 1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-56.0,-23.0,-4.0);
    glVertex3f(-56.0,-23.,-2.0);
    glVertex3f(-44.0,-23.,-2.0);
    glVertex3f(-44.0,-23.0,-4.0);
    glEnd();

    //Kursi 1.2
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-56.0,-23.0,-4.0);
    glVertex3f(-56.0,-25.0,-4.0);

    glVertex3f(-44.0,-23.,-4.0);
    glVertex3f(-44.0,-25.,-4.0);

    glVertex3f(-44.0,-21.,-2.0);
    glVertex3f(-44.0,-25.,-2.0);

    glVertex3f(-56.0,-21.0,-2.0);
    glVertex3f(-56.0,-25.0,-2.0);
    glEnd();

    //Kursi 1.3
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-56.0,-21.0,-2.0);
    glVertex3f(-56.0,-22.,-2.0);
    glVertex3f(-44.0,-22.,-2.0);
    glVertex3f(-44.0,-21.0,-2.0);
    glEnd();

    //Kursi 1.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-56.0,-17.0,-18.0);
    glVertex3f(-56.0,-22.,-18.0);
    glVertex3f(-44.0,-22.,-18.0);
    glVertex3f(-44.0,-17.0,-18.0);
    glEnd();

    //Lemari 1.1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-65.0,-17.0,-7.0);
    glVertex3f(-65.0,-17.,-15.0);
    glVertex3f(-60.0,-17.,-16.5);
    glVertex3f(-60.0,-17.0,-7.0);
    glEnd();

    //Lemari 1.2
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-65.0,-17.0,-7.0);
    glVertex3f(-65.0,-25.,-7.0);
    glVertex3f(-60.0,-25.,-7.0);
    glVertex3f(-60.0,-17.0,-7.0);
    glEnd();

    //Lemari 1.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,-17.0,-7.0);
    glVertex3f(-60.0,-25.,-7.0);
    glVertex3f(-60.0,-25.,-12.0);
    glVertex3f(-60.0,-17.0,-12.0);
    glEnd();

    //Lemari 1.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,-17.0,-12.2);
    glVertex3f(-60.0,-25.,-12.2);
    glVertex3f(-60.0,-25.,-16.0);
    glVertex3f(-60.0,-17.0,-16.0);
    glEnd();

    // AC 1.1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-42.0,-17.0,-16.2);
    glVertex3f(-42.0,-19.,-16.2);
    glVertex3f(-38.0,-19.,-15.0);
    glVertex3f(-38.0,-17.0,-15.0);
    glEnd();

    // AC 1.2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-42.0,-17.0,-16.2);
    glVertex3f(-42.0,-19.0,-16.2);
    glVertex3f(-42.0,-19.0,-17.5);
    glVertex3f(-42.0,-17.0,-17.5);
    glEnd();

    // AC 1.3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-38.0,-17.0,-16.2);
    glVertex3f(-38.0,-19.0,-16.2);
    glVertex3f(-38.0,-19.0,-15.0);
    glVertex3f(-38.0,-17.0,-15.0);
    glEnd();

    // AC 1.4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-42.0,-17.0,-17.5);
    glVertex3f(-42.0,-17.0,-16.2);
    glVertex3f(-38.0,-17.0,-16.2);
    glVertex3f(-38.0,-17.0,-15.0);
    glEnd();

    // AC 1.5
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-42.0,-19.0,-17.5);
    glVertex3f(-42.0,-19.0,-16.2);
    glVertex3f(-38.0,-19.0,-16.2);
    glVertex3f(-38.0,-19.0,-15.0);
    glEnd();

    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        //setiap menekan w akan maju 3
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
        //4 dan 6 rotasi sumbu x dan y
        case '5':
        //
            if (is_depth)
            {
                //disable deptestnya
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

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi,5.0,500.0);
    glTranslated(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

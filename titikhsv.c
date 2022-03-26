#include <GL/glut.h>
#include <GL/glut.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
glutInitWindowSize(700,600); //digunakan untuk mengatur ukuran jendela (width) (height)
glutInitWindowPosition(700,50);  //digunakan untuk mengatur posisi jendela 
glutCreateWindow("Project 1 - Membuat Titik HSV"); 
glClearColor(0.0,0.0,0.0,0.0); 
glMatrixMode(GL_PROJECTION);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0); 
glutDisplayFunc(titik); 
glutMainLoop();
}
void titik()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(8.8); //untuk mengubah ukuran titik
glBegin(GL_POINTS); //menjelaskan tentang fungsi point membentuk titik

glColor3f(1.5, 0.5, 0.5); //digunakan untuk mengubah warna
glVertex2f(0.0,0.0); //digunakan untuk mengatur posisi titik, yang memiliki tipe argumen adalah float dan 2D (x,y)

glColor3f(0.0, 1.0, 1.0);
glVertex2f(0.1,0.0);

glColor3f(0.0, 0.0, 1.0);
glVertex2f(0.2,0.0);

glColor3f(1.0, 0.0, 1.0);
glVertex2f(0.3,0.0);

glColor3f(0.5, 1.0, 0.5);
glVertex2f(0.4,0.0);

glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.5,0.0); 

glColor3f(1.0, 1.5, 8.0);
glVertex2f(0.6,0.0);

glColor3f(0.0, 1.0, 0.0);
glVertex2f(0.7,0.0);

glColor3f(0.75, 0.75, 0.75);
glVertex2f(0.8,0.0);

glEnd(); //merupakan sintaks penutup
glFlush(); //merupakan sintaks untuk memastikan gambar yang bisa di eksekusi
}

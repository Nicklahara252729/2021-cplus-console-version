#include<WINDOWS.h>
#include<glut.h>
void drawline(float x1, float y1, float x2, float y2)
{
glBegin(GL_LINES);
glVertex2f(x1, y1);
glVertex2f(x2, y2);
glEnd();
}
void setColor(float red, float green, float blue)
{
glColor3f(red, green, blue);
}
void userdraw (void)
{
setColor(0,0,1);//warna biru
drawline(160,160,310,160);
}
void display (void)
{
glClear ( GL_COLOR_BUFFER_BIT );
userdraw();
glFlush();
}
void main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(540, 380);
glutInitWindowPosition(100, 150);
glutCreateWindow("Membuat Garis/Line");
glClearColor(1,1,1,0);
gluOrtho2D(0,640,0,480);
glutDisplayFunc(display);
//fungsi event-driven lainnya jika digunakan dituliskan
//disini
glutMainLoop();
}
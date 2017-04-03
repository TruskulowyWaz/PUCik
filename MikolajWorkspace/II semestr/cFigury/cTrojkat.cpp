#include "cTrojkat.h"



cTrojkat::cTrojkat(): podstawa(.2), wysokosc(.2)
{
}


cTrojkat::~cTrojkat()
{
}

void cTrojkat::Draw()
{
	glPushMatrix();
	glTranslated(x, y, 0.0);
	glRotated(alpha, 0.0, 0.0, 1.0);
	glColor3f(R, G, B);

	glBegin(GL_POLYGON);
	
	glVertex3d(-podstawa / 2, 0, 0);
	glVertex3d(podstawa / 2, 0, 0);
	glVertex3d(0, wysokosc, 0);

	glEnd();

	glPopMatrix();
}

bool cTrojkat::IsActive(double x, double y)
{
	return abs(this->x - x) <= (podstawa / 2) && abs(this->y - y) <= wysokosc;
}

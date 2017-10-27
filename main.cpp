
# include <GL/glut.h>
	# include <windows.h>
	#include <GL/gl.h>
	#include <GL/glu.h>
	# include <iostream>
	#include <stdio.h>
	# include <stdlib.h>
	# include  <math.h>
	# include <string.h>
	# include <conio.h>
	//# define PI 3.1415926535898



	float speed,speed1=0,speed2=0,c1=0,c2=0,d1=0,d2=0,d3=0,e=0,n,e2=0;
	int intspeed;
	int u=2,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	int ch;

	int FONT_WIDTH=8;
	int FONT_HEIGHT=13;
	//int count1=0;
	int i1;
	//char test[9];
	int temp;



	GLubyte space[] =
	{0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

	GLubyte letters[] [13]= {
	{0x00, 0x00,0xc3,0xc3,0xc3,0xc3,0xff,0xc3,0xc3,0xc3,0x66,0xc3,0x18}, //A
	{0x00, 0x00,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe}, //B
	{0x00, 0x00,0x7e,0xe7,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe7,0x7e}, //C
	{0x00, 0x00,0xfc,0xce,0xc7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc7,0xce,0xfc}, //D
	{0x00, 0x00,0xff,0xc0,0xc0,0xc0,0xc0,0xfc,0xc0,0xc0,0xc0,0xc0,0xff}, //E
	{0x00, 0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xfc,0xc0,0xc0,0xc0,0xff}, //F
	{0x00, 0x7e,0xe7,0xc3,0xc3,0xcf,0xc0,0xc0,0xc0,0xc0,0xc0,0xe7,0x7e}, //G
	{0x00, 0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xff,0xc3,0xc3,0xc3,0xc3,0xc3}, //H
	{0x00, 0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7e}, //I
	{0x00, 0x00,0x7c,0xee,0xc6,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06}, //J
	{0x00, 0x00,0xc3,0xc6,0xcc,0xd8,0xf0,0xe0,0xf0,0xd8,0xcc,0xc6,0xc3}, //K
	{0x00, 0x00,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0}, //L
	{0x00, 0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xdb,0xff,0xff,0xe7,0xc3}, //M
	{0x00, 0x00,0xc7,0xc7,0xcf,0xcf,0xdf,0xdb,0xfb,0xf3,0xf3,0xe3,0xe3}, //N
	{0x00, 0x00,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0x7e}, //O
	{0x00, 0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe}, //P
	{0x00, 0x00,0x3f,0x6e,0xdf,0xdb,0xc3,0xc3,0xc3,0xc3,0xc3,0x66,0x3c}, //Q
	{0x00, 0x00,0xc3,0xc6,0xcc,0xd8,0xf0,0xfe,0xc7,0xc3,0xc7,0x00,0xfe}, //R
	{0x00, 0x00,0x7e,0xe7,0x03,0x03,0x07,0x7e,0xe0,0xc0,0xc0,0xe7,0x7e}, //S
	{0x00, 0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff}, //T
	{0x00, 0x00,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3}, //U
	{0x00, 0x00,0xc3,0x66,0x66,0x3c,0x3c,0x18,0x3c,0x3c,0x66,0x66,0xc3}, //V
	{0x00, 0x00,0xc3,0x66,0xc3,0xc3,0xc3,0x18,0x3c,0x3c,0x66,0x66,0xc3}, //W
	{0x00, 0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x3c,0x66,0x66,0xc3}, //X
	{0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //Y
	{0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //Z
						};


	GLubyte numbers[] [13]= {

    {0x7e, 0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x7e}, //0
	{0x7F, 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x48,0x28,0x18,0x08}, //1
	{0xff, 0x80,0x40,0x20,0x10,0x08,0x07,0x01,0x01,0x01,0x81,0x81,0x7f}, //2
	{0xff, 0x81,0x81,0x01,0x01,0x01,0x3f,0x01,0x01,0x01,0x81,0x81,0xff}, //3
	{0x02, 0x02,0x02,0xff,0x82,0x82,0x42,0x22,0x12,0x0a,0x03,0x03,0x02}, //4
	{0x7e, 0x81,0x81,0x01,0x01,0x01,0x01,0x01,0xff,0x80,0x80,0x80,0xff}, //5
	{0x7e, 0x81,0x81,0x81,0x81,0x81,0xfe,0x80,0x80,0x80,0x40,0x20,0x1f}, //6
	{0x80, 0x80,0x80,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01,0xff}, //7
	{0x7e, 0x81,0x81,0x81,0x81,0x81,0x7e,0x81,0x81,0x81,0x81,0x81,0x7e}, //8
	{0xf8, 0x04,0x02,0x01,0x01,0x01,0x7e,0x81,0x81,0x81,0x81,0x81,0x7e}, //9
						};
	GLuint fontOffset;



	void makeRasterFont(void)
	{
		GLuint i, j, k ,l;
		glPixelStorei(GL_UNPACK_ALIGNMENT,1);
		fontOffset = glGenLists(128);
		for (i=0,j='A';i<26;i++,j++)
		{
			glNewList(fontOffset + j, GL_COMPILE);
			glBitmap(FONT_WIDTH,FONT_HEIGHT , 4, 6, 10, 0.0, letters[i]);
			glEndList();
		}
		for (k=0,l='0';k<10;k++,l++)
		{
			glNewList(fontOffset + l, GL_COMPILE);
			glBitmap(FONT_WIDTH,FONT_HEIGHT, 4, 6, 10.0, 0.0, numbers[k]);
			glEndList();
		}
		glNewList(fontOffset + ' ', GL_COMPILE);
		glBitmap(FONT_WIDTH,FONT_HEIGHT, 0.0, 2.0, 10.0, 0.0, space);
		glEndList();
	}



	void printString(char *s)
	{
		glPushAttrib(GL_LIST_BIT);
		glListBase(fontOffset);
		glCallLists(strlen(s),GL_UNSIGNED_BYTE, (GLubyte *) s);
		glPopAttrib();
	}


	void fontsize(int a, int b)
	{
		FONT_WIDTH=a;
		FONT_HEIGHT=b;

	}


	void makecirclearc(float x,float y,float r,float ang1, float ang2,float WIDTH)///// a function making a circle ///////
	{
		float angle;
		float M=0;
		while(M<=WIDTH)//////////////////////this while loop is fr increasing the thickness of the circle
		{
			glBegin(GL_LINE_STRIP);
			angle=ang1;
			while(angle <= ang2)
			{
				 glVertex2f((r-M)*cos(angle)+x,(r-M)*sin(angle)+y);
				 //glLineWidth(10^1000000);
			     angle  = angle + .01;
			}
			//	glVertex2f(x,y);
			glEnd();
			M=M+0.1;

		}
	}


	void makecirclearcC(float x,float y,float r,float ang1, float ang2,float WIDTH,int d)///// a function making a circle ///////
	{
		float angle;
		float M=0;
		while(M<=WIDTH)//////////////////////this while loop is fr increasing the thickness of the circle
		{
			glBegin(GL_LINE_STRIP);
			angle=ang1;
			while(angle <= ang2)
			{
				 glVertex2f((r-M)*d*cos(angle)+x,(r-M)*sin(angle)+y);
				 //glLineWidth(10^1000000);
			     angle  = angle + .01;
			}
			//	glVertex2f(x,y);
			glEnd();
			M=M+0.1;

		}
	}



	void makecirclearccenter(float x,float y,float r,float ang1, float ang2,int direction)///// a function making 3/4 circle /////
	{
		float angle;


			glBegin(GL_POLYGON);
			angle=ang1;
			glVertex2f(x,y);
			while(angle <= ang2)
			{
				glVertex2f(direction*(r)*cos(angle)+x,(r)*sin(angle)+y);
			    angle  = angle + .01;
			}
			glVertex2f(x,y);
			glEnd();
			}




	void makerectangle(float a,float a1,float b,float b1,float c,float c1,float d,float d1)///// a function making a rectangle/////
	{
		glBegin(GL_LINE_LOOP);
		glVertex2f(a,a1);
		glVertex2f(b,b1);
		glVertex2f(c,c1);
		glVertex2f(d,d1);
		glEnd();

	}

void makerectangleP(float a,float a1,float b,float b1,float c,float c1,float d,float d1)///// a function making a rectangle/////
	{
		glBegin(GL_POLYGON);
		glVertex2f(a,a1);
		glVertex2f(b,b1);
		glVertex2f(c,c1);
		glVertex2f(d,d1);
		glEnd();

	}



	void straightline(float a1,float b1,float a2,float b2)//// a function making a staight line../////////
	{
		glBegin(GL_LINES);
		glVertex2f(a1,b1);
		glVertex2f(a2,b2);
		glEnd();
	}
	void label(int x, int y,int r, int start, int end, float ang1, float ang2, int diff)
	{
		ang1=-ang1;
		ang2=-ang2;
		int i2=start;
		int l;
		int s;
		char c[9];
		int a;
		int b;


		while(i2<=(end))
		{
			l=r*cos(ang1+((ang2-ang1)/(end-start))*(i2-start))+x;
			s=r*sin(ang1+((ang2-ang1)/(end-start))*(i2-start))+y;
			if(i2>=10)
			{

				a=i2%10;
				b=i2/10;
				c[0]=b+0x30;
				c[1]=a+0x30;
			}

			if(i2<10)
			{
				c[0]=i2+0x30;

			}

			GLfloat red[3] ={1.0,1.0,1.0};
			//glClear(GL_COLOR_BUFFER_BIT);
			glColor3fv(red);

			glRasterPos2f(l,s);

		//	glRasterPos2f(y,s);
			printString(c);
			i2=i2+diff;
			c[1]= NULL;


	}
	}



	void converintstring(int a, char c[])
	{
		int temp= a;
		int count=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;

		}
		int h;
		temp = a;
		count--;
		while(count>=0)
		{	h=temp%10;
			temp=temp/10;
			c[count]=h+0x30;
			count--;
		}
	}






	void label1(int x, int y,int r, int start, int end, float ang1, float ang2, int diff)
	{
		int i2=start;
		int l;
		int s;
		char c[9];
		int a;
		int b;


		while(i2<=(end))
		{
			l=r*cos(ang1+((ang2-ang1)/(end-start))*(i2-start))+x;
			s=r*sin(ang1+((ang2-ang1)/(end-start))*(i2-start))+y;
				if(i2>=10)
			{

				a=i2%10;
				b=i2/10;
				c[0]=b+0x30;
				c[1]=a+0x30;
			}

			if(i2<10)
			{
				c[0]=i2+0x30;

			}

			GLfloat red[3] ={1.0,1.0,1.0};
			//glClear(GL_COLOR_BUFFER_BIT);
			glColor3fv(red);

			glRasterPos2f(l,s);

		//	glRasterPos2f(y,s);
			printString(c);
			i2=i2+diff;
			c[1]= NULL;


	}
	}

	void arcOutline(float x,float y,float r,float ang1, float ang2,float WIDTH)
	{

	float angle;
		glBegin(GL_LINE_LOOP);
				glLineWidth(5150.0);


				angle=ang1;

				while(angle <= ang2)
		  {



             glVertex2f((r)*cos(angle)+x,(r)*sin(angle)+y);
//glLineWidth(10^1000000);


                angle  = angle + .01;
		  }



				while(angle >= ang1)
		  {



             glVertex2f((r-WIDTH)*cos(angle)+x,(r-WIDTH)*sin(angle)+y);
//glLineWidth(10^1000000);


                angle  = angle - .01;
		  }
		//glVertex2f(.2*cos(0),.2*sin(0));
		glEnd();
}


	void display(void)    ////// this is used for displying a object on a window screen//////////
	{
	//	fontsize(800, 1300);
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0,0.85,0.75);
		makerectangle(2,2,2,239,319,239,319,2);
		straightline(0,130,214,130);
		straightline(214,2,214,238);
		straightline(107,0,107,120);
		glColor3f(1,1,1);
		makerectangle(220,115,264,125,264,67,220,67);
		makerectangle(270,67,270,125,314,115,314,67);
		makecirclearc(53.5,60,50,0, 6.28,1);
		glColor3f(1,0,0);
		makecirclearc(83.5,60,50,2.355, 2.7475,2);//////very inefficient
		glColor3f(0,1,0);
		makecirclearc(83.5,60,50,2.7475,3.14,2);
		glColor3f(1,1,0);
		makecirclearc(83.5,60,50,3.14,3.5325,2);
		glColor3f(1,0,0);
		makecirclearc(83.5,60,50,3.5325,3.925,2);
		label(78.5,60,55,0,30, 2.355,3.925,10);

		glColor3f(1,0,0);
		makecirclearc(23.5,60,50,-0.785,-0.3925,2);//////very inefficient
		glColor3f(1,1,0);
		makecirclearc(23.5,60,50,-0.3925,0,2);
		glColor3f(0,1,0);
		makecirclearc(23.5,60,50,0,0.3925,2);
		glColor3f(1,0,0);
		makecirclearc(23.5,60,50,0.3925,0.785,2);
		label1(28.5,60,55,0,30, -0.7825,0.7825,10);

		glColor3f(1,1,1);
		makecirclearc(160.5,60,50,0, 6.28,1);


	arcOutline(153.5,67,50,4.92, 6.276,5);

	arcOutline(167.5,67,50,3.144, 4.50,5);



		glColor3f(1,0,0);

		makecirclearc(160.5,50,49.9,1.7244, 2.355,4.5);

			glColor3f(0,1,0);
		makecirclearc(160.5,50,49.9,0.939, 1.7244,4.5);
			glColor3f(1,1,1);
		arcOutline(160.5,50,50,0.786, 2.355,5);
		label(160.5,50,54,0,10, 3.925, 5.496,5);



/// FOR CIRCLE 1
		makecirclearc(48,180,35,-0.4, 4.71,1);
		label(48,180,44,0,6, 1.57,2.512,6);
		label(48,180,44,7,10, 3.454,6.28,1);

		glColor3f(0,0.85,0.75);////////// cicle below the feul tank

		makecirclearc(292,43,20,0, 6.28,0);
		makecirclearc(240,43,20,0, 6.28,0);


		glColor3f(1,0,0);
		makecirclearc(160,180,37,0, 2.02,1);
		glColor3f(0,1,0);
		makecirclearc(160,180,37,2.02, 4.71,1);
		label(160,180,43,0,4, 1.57,2.423,4);
		label(160,180,43,5,10, 3.096,6.28,1);
		glColor3f(1,1,1);
		makecirclearc(272,180,38,0, 4.71,1);
		label(272,180,44,0,6, 1.57,6.28,1);
		makerectangle(58,130,105,130,105,155,58,155);
		makerectangle(162,130,205,130,205,155,162,155);







		/*************************************INDICATORS*********************************/



		// FOR CICLE NO.1 IT IS SORT OF A PIE DIAGRAM




	char test[9];
	 converintstring(a1,test );

	//	GLfloat red[3] ={1.0,0.0,0.0};
		//glClear(GL_COLOR_BUFFER_BIT);
	//	glColor3fv(red);
		//0.2+i*1.2,0.7+j*1.2
		glRasterPos2f(68,140);







	if(a1<=60)
	{
		glColor3f(0,0.85,0.75);

	makecirclearccenter(48,180,35, -1.57,-1.57 +(0.942*a1)/60,-1);
	printString(test);
	}

	if(a1>60&&a1<=95)
	{

	glColor3f(0,0.85,0.75);
	makecirclearccenter(48,180,35, -1.57,-0.628,-1);
	makecirclearccenter(48,180,35, -0.628,-0.628+((a1-60)*3.78)/40,-1);
	printString(test);


	}


	if(a1>95&&a1<105)
	{

	glColor3f(1,0,0);

	makecirclearccenter(48,180,35, -1.57,-0.628,-1);
	makecirclearccenter(48,180,35, -0.628,-0.628+((a1-60)*3.78)/40,-1);
	printString(test);


	}
	if(a1>=105)
	{
	glColor3f(1,0,0);

	makecirclearccenter(48,180,35, -1.57,-0.628,-1);
	makecirclearccenter(48,180,35, -0.628,-0.628+((105-60)*3.78)/40,-1);
	glColor3f(1,0,0);

	makerectangleP(0,220,100,140,105,140,10,220);

	makerectangleP(110,220,0,140,10,140,115,220);

	straightline(68,140,88,140);


	}


	///// FOR CIRCLE NO 2



		char test1[9];

		 converintstring(a2,test1 );


		glRasterPos2f(172,140);


	if (a2<400)
	{

		glColor3f(0,1,0);
		glBegin(GL_POLYGON);
		glVertex2f(160.5+42*-cos((0.673*a2)/400-1.57),180+42*sin((0.673*a2)/400-1.57));
		glVertex2f(160.5+2*-cos((0.673*a2)/400-55-1.57),180+2*sin((0.673*a2)/400-55-1.57));
		glVertex2f(160.5+2*-cos((0.673*a2)/400+55-1.57),180+2*sin((0.673*a2)/400+55-1.57));
		glEnd();
		printString(test1);
	}

	if (a2>=400&&a2<1100)
	{
		if(a2<700)
		{glColor3f(0,1,0);}
		if(a2>700)
		{glColor3f(1,0,0);}
		//makecirclearc(160.5,180,42,2.02, 4.71,1);
		glBegin(GL_POLYGON);
		glVertex2f(160.5+42*-cos((4.04*(a2-400))/600-1.57+0.673),180+42*sin((4.04*(a2-400))/600-1.57+0.673));
		glVertex2f(160.5+2*-cos((4.04*(a2-400))/600-55-1.57+0.673),180+2*sin((4.04*(a2-400))/600-55-1.57+0.673));
		glVertex2f(160.5+2*-cos((4.04*(a2-400))/600+55-1.57+0.673),180+2*sin((4.04*(a2-400))/600+55-1.57+0.673));
		glEnd();
		printString(test1);
	}


	if (a2>=1100||a2<0)
	{

			makerectangleP(110,220,210,140,215,140,115,220);

	makerectangleP(220,220,110,140,115,140,225,220);

	//	makerectangleP(90,240,190,120,205,120,105,240);

	////2	makerectangleP(180,240,90,120,115,120,205,240);

	straightline(172,140,192,140);





	}




	///// FOR CICRLE 3

	glColor3f(0,1,0);

	if(a3<=200&&a3>=0)
	{
		glColor3f(1,0,0);
		makecirclearccenter(272,180,38, -1.57,((a3)*4.71)/600-1.57,-1);
	}


	if(a3>200&&a3<600)
	{
		glColor3f(0,1,0);
		makecirclearccenter(272,180,38, -1.57,((a3)*4.71)/600-1.57,-1);
	}


	if(a3<0||a3>600)
	{
		glColor3f(1,1,1);
		glRasterPos2f(267,180);
		printString("FAIL");
	}





	///// For circle no4

//	label1(28.5,60,55,0,30, -0.7825,0.7825,10);



		glColor3f(1,1,1);
		glBegin(GL_POLYGON);
		glVertex2f(28.5+50*cos((1.565*(a4))/300-0.785),60+50*sin((1.565*(a4))/300-0.785));
		glVertex2f(28.5+40*cos((1.565*(a4))/300-.05-0.785),60+40*sin((1.565*(a4))/300-.05-0.785));
		glVertex2f(28.5+40*cos((1.565*(a4))/300+.05-0.785),60+40*sin((1.565*(a4))/300+.05-0.785));
		glEnd();



			glColor3f(1,1,1);


	//label(78.5,60,55,0,30, 2.355,3.925,10);
		glBegin(GL_POLYGON);
		glVertex2f(78.5+50*-cos((1.565*(a5))/300-0.785),60+50*sin((1.565*(a5))/300-0.785));
		glVertex2f(78.5+40*-cos((1.565*(a5))/300-.05-0.785),60+40*sin((1.565*(a5))/300-.05-0.785));
		glVertex2f(78.5+40*-cos((1.565*(a5))/300+.05-0.785),60+40*sin((1.565*(a5))/300+.05-0.785));
		glEnd();

	/////////////For circle no.5

		label(160.5,50,54,0,10, 3.925, 5.496,5);
		glBegin(GL_POLYGON);
		glVertex2f(160.5+50*-cos((1.565*(a6))/100-0.785+1.57),50+50*sin((1.565*(a6))/100-0.785+1.57));
		glVertex2f(160.5+40*-cos((1.565*(a6))/100-.05-0.785+1.57),50+40*sin((1.565*(a6))/100-.05-0.785+1.57));
		glVertex2f(160.5+40*-cos((1.565*(a6))/100+.05-0.785+1.57),50+40*sin((1.565*(a6))/100+.05-0.785+1.57));
		glEnd();

	//	arcOutline(153.5,67,50,4.92, 6.276,10);

		glBegin(GL_POLYGON);
		glVertex2f(153.5+45*cos((1.365*(a7))/100-1.38),67+45*sin((1.365*(a7))/100-1.38));
		glVertex2f(153.5+40*cos((1.365*(a7))/100-.05-1.38),67+40*sin((1.365*(a7))/100-.05-1.38));
		glVertex2f(153.5+40*cos((1.365*(a7))/100+.05-1.38),67+40*sin((1.365*(a7))/100+.05-1.38));
		glEnd();



		//	arcOutline(167.5,67,50,3.144, 4.50,5);

		glBegin(GL_POLYGON);
		glVertex2f(167.5+45*-cos((1.365*(a8))/100-1.34),67+45*sin((1.365*(a8))/100-1.34));
		glVertex2f(167.5+40*-cos((1.365*(a8))/100-.05-1.34),67+40*sin((1.365*(a8))/100-.05-1.34));
		glVertex2f(167.5+40*-cos((1.365*(a8))/100+.05-1.34),67+40*sin((1.365*(a8))/100+.05-1.34));
		glEnd();

       /* glBegin(GL_POLYGON);
		glVertex2f(160.5+50*-cos((1.565*(a6))/100-0.785+1.7244),50+50*sin((1.565*(a6))/100-0.785
			1.7244));
		glVertex2f(160.5+40*-cos((1.565*(a6))/100-.05-0.785),50+40*sin((1.565*(a6))/100-.05-0.785));
		glVertex2f(160.5+40*-cos((1.565*(a6))/100+.05-0.785),50+40*sin((1.565*(a6))/100+.05-0.785));
		glEnd();*/


		glRasterPos2f(167.5+55*-cos((1.365*(50))/100-1.34),67+55*sin((1.365*(50))/100-1.34));
		printString("5");

		glRasterPos2f(153.5+55*cos((1.365*(50))/100-1.38),67+55*sin((1.365*(50))/100-1.38));
		printString("5");
		glColor3f(0,1,0);
		makecirclearc( 153.5,67,50,(1.365*(74))/100-1.38 ,(1.365*(86))/100-1.38,5);

		makecirclearcC( 167.5,67,50,(1.365*(74))/100-1.38 ,(1.365*(86))/100-1.38,5,-1);




		if(a9>=175&&a9<240)
		{
		makerectangleP(220,115,264,125,264,67,220,67);
		makerectangleP(270,67,270,125,314,115,314,67);
		makecirclearccenter(292,43,20,0, 6.28,0);
		makecirclearccenter(240,43,20,0, 6.28,0);

		}

		if(a9<=175&&a9>=20)
		{
		makerectangleP(220,90,264,90,264,67,220,67);
		makerectangleP(270,67,270,90,314,90,314,67);

		glBegin(GL_POLYGON);
		float i=0;
		glVertex2f(292+20*cos(1.57),43+20*sin(1.57));
		while(i<=3.14/6)
		{
			glVertex2f(292+20*cos(1.57+i),43+20*sin(1.57+i));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);


		}
		glVertex2f(292+20*cos(1.57),43+20*sin(1.57)-(40/6));
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(292+20*cos(1.57),43+20*sin(1.57)-(40/6)*2);
		while(i<=3.14/6)
		{
			glVertex2f(292+20*cos(1.57+i+0.523*2),43+20*sin(1.57+i+0.523*2));
			i=i+0.01;

		}


		glVertex2f(292+20*cos(1.57),43+20*sin(1.57)-(40/6)*3);
		glEnd();


		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(292+20*cos(1.57),43+20*sin(1.57)-(40/6)*4);
		while(i<=3.14/6)
		{
			glVertex2f(292+20*cos(1.57+i+0.523*4),43+20*sin(1.57+i+0.523*4));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(292+20*cos(1.57),43+20*sin(1.57)-(40/6)*5);
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57));
		while(i<=3.14/6)
		{
			glVertex2f(292+20*-cos(1.57+i),43+20*sin(1.57+i));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);


		}
		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57)-(40/6));
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57)-(40/6)*2);
		while(i<=3.14/6)
		{
			glVertex2f(292+20*-cos(1.57+i+0.523*2),43+20*sin(1.57+i+0.523*2));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57)-(40/6)*3);
		glEnd();


	glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57)-(40/6)*4);
		while(i<=3.14/6)
		{
			glVertex2f(292+20*-cos(1.57+i+0.523*4),43+20*sin(1.57+i+0.523*4));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(292+20*-cos(1.57),43+20*sin(1.57)-(40/6)*5);
		glEnd();



	//////////



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*cos(1.57),43+20*sin(1.57));
		while(i<=3.14/6)
		{
			glVertex2f(240+20*cos(1.57+i),43+20*sin(1.57+i));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);


		}
		glVertex2f(240+20*cos(1.57),43+20*sin(1.57)-(40/6));
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*cos(1.57),43+20*sin(1.57)-(40/6)*2);
		while(i<=3.14/6)
		{
			glVertex2f(240+20*cos(1.57+i+0.523*2),43+20*sin(1.57+i+0.523*2));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(240+20*cos(1.57),43+20*sin(1.57)-(40/6)*3);
		glEnd();


	glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*cos(1.57),43+20*sin(1.57)-(40/6)*4);
		while(i<=3.14/6)
		{
			glVertex2f(240+20*cos(1.57+i+0.523*4),43+20*sin(1.57+i+0.523*4));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(240+20*cos(1.57),43+20*sin(1.57)-(40/6)*5);
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57));
		while(i<=3.14/6)
		{
			glVertex2f(240+20*-cos(1.57+i),43+20*sin(1.57+i));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);


		}
		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57)-(40/6));
		glEnd();



		glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57)-(40/6)*2);
		while(i<=3.14/6)
		{
			glVertex2f(240+20*-cos(1.57+i+0.523*2),43+20*sin(1.57+i+0.523*2));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57)-(40/6)*3);
		glEnd();


	glBegin(GL_POLYGON);
		 i=0;
		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57)-(40/6)*4);
		while(i<=3.14/6)
		{
			glVertex2f(240+20*-cos(1.57+i+0.523*4),43+20*sin(1.57+i+0.523*4));
			i=i+0.01;
		//makecirclearccenter(292,43,20,0, 6.28,0);
		//makecirclearccenter(240,43,20,0, 6.28,0);
		}


		glVertex2f(240+20*-cos(1.57),43+20*sin(1.57)-(40/6)*5);
		glEnd();
		}


		if(a9<=20)
		{
			glRasterPos2f(240,43);
				printString("E");

						glRasterPos2f(292,43);
				printString("E");
									glRasterPos2f(242,80);
				printString("E");
												glRasterPos2f(292,80);
				printString("E");

		}


//		makerectangle(58,130,105,130,105,155,58,155);
//		makerectangle(162,130,205,130,205,155,162,155);




//makecirclearc(160.5,50,49.9,0.939, 1.7244,4.5);



		glFlush();

    }



	void fileInput()
	{
		a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
		FILE *fs;
		char ch;
		int j;
		int count;
		fs= fopen("inp1.txt","r");
		int i=0;
		char a[9]={NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};

		if(fs==NULL)
			{
				glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(0,0,0);
			makerectangleP(2,2,2,239,319,239,319,2);
			glColor3f(1,0,0);
			glRasterPos2f(120,180);
			printString("Error");

			}

		//while(fs!=EOF)
		//{

		while(1)
			{
			//	int i=0;
			//	char a[9];

			for(count=1;count<10;count++)
				{
				if(count==1)
				{
				a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
				}
				i=0;
				while(1)
					{

					ch=fgetc(fs);
					if(ch!='\n'&&ch!=' '&&ch!=EOF)
					{

						a[i]=ch;
						i++;
					}
					if(ch=='\n'||ch==' '||ch==EOF)
					{
						if(ch==EOF)
						{
							count=10;
							break;
						}
						i=i-1;
						j=0;
						while(i>=0)
							{
							if (count==1)
								{

								a1=a1+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}

							if (count==2)
								{
								a2=a2+pow(10,i)*(a[j]-48);
								j++;
								i--;
								}

							if (count==3)
								{
								a3=a3+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}

							if (count==4)
								{
								a4=a4+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}

							if (count==5)
								{
								a5=a5+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}

							if (count==6)
								{
								a6=a6+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}

							if (count==7)
								{
								a7=a7+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}
							if (count==8)
								{
								a8=a8+pow(10,i)*(a[j]-48);
								i--;
								j++;
								}
							if (count==9)
								{
								a9=a9+pow(10,i)*(a[j]-48);
								i--;
								j++;
								//
							//	delay (1000);
							//	for(long int j;j<=10;j++)
								{
									printf("hello");
								}
								if(i=-1)
								{
								glutPostRedisplay();
								}
								}
							}
						for(i=0;i<8;i++)
						{
							a[i]= NULL;
						}
						i=0;
						break;

					}


					}
			//	timedelay(1000);


				}

				if(ch==EOF)
				{	fclose(fs);
					break;}

			}
	}



	void KeyboardCallback(unsigned char key, int x, int y)//////this is used for user input //////
	{
			printf("/n/npush the button/n");

		switch (key)
			{


				case'1':
				ch=1;
				break;
				case '2':
				ch=2;
				break;
				case'3':
				ch=3;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;
				case'4':
				ch=4;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;
				case'5':
				ch=5;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;
				case'6':
				ch=6;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;

				case'7':
				ch=7;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;

				case'8':
				ch=8;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;

				case'9':
				ch=9;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				break;

		case'A':
		switch(ch)
		{
			case 1:
			a1=a1+10;
			break;
			//	glutDisplayFunc(display);
			//	glutKeyboardFunc(KeyboardCallback);
			case 2:
			a2=a2+100;
			break;
			case 3:
			a3=a3+10;
			break;
			case 4:
			a4=a4+10;
			break;
			case 5:
			a5=a5+10;
			break;
			case 6:
			a6=a6+1;
			break;


			case 7:
			a7=a7+1;
			break;

			case 8:
			a8=a8+1;
			break;

			case 9:
			a9=a9+50;
			break;
		}
			break;
		case'S':
		switch(ch)
		{
		case 1:
			a1=a1-10;
			break;
			//	glutDisplayFunc(display);
			//	glutKeyboardFunc(KeyboardCallback);
			case 2:
			a2=a2-100;
			break;
			case 3:
			a3=a3-10;
			break;
			case 4:
			a4=a4-10;
			break;
			case 5:
			a5=a5-10;
			break;
			case 6:
			a6=a6-1;
			break;


			case 7:
			a7=a7-1;
			break;

			case 8:
			a8=a8-1;
			break;

			case 9:
			a9=a9-50;
			break;
		}
			break;
		case 'C':
		u=-8;
		exit(0);
		break;
		case 'F':
			printf("%d  %d  %d  %d %d %d %d %d %d\n",a1,a2,a3,a4,a5,a6,a7,a8,a9);

			fileInput();
			printf("%d  %d  %d  %d %d %d %d %d %d",a1,a2,a3,a4,a5,a6,a7,a8,a9);
			break;

	}

		//glutPostRedisplay();
		glutPostRedisplay();
		glutDisplayFunc(display);
		//glutReshapeFunc(reshape);
	}

	void init(void)///// it initiates the object//////
	{
		glClearColor(0.0,0.0,0.0,0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		//	glFrustum(.5,0.0,0.75,0.80,-0.20,0.40);
		gluOrtho2D(0,319,0,239);
		glShadeModel(GL_FLAT);
		makeRasterFont();
	}

	void mouse(int button,int state,int x,int y)
	{
		switch(button){
		case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
		{
			switch(ch)
			{
				case 1:
					speed=speed+10;
				break;
				//	glutDisplayFunc(display);
				//	glutKeyboardFunc(KeyboardCallback);
				case 2:
					speed1=speed1+10;
				break;
				case 3:
					speed2=speed2+10;
				break;
				case 4:
					c1=c1+3;
					c2=c2+3;
				break;
				case 5:
					d1=d1+10;
					d2=d2+10;
					d3=d3+10;
				break;
				case 6:
					e=e+0.05;
					e2=e2+0.05;
				break;
			}
		}
			break;


			case GLUT_RIGHT_BUTTON:

			if(state==GLUT_DOWN)
		{
			switch(ch){
		case 1:
			speed=speed+10;
			break;
	//	glutDisplayFunc(display);
	//	glutKeyboardFunc(KeyboardCallback);
		case 2:
			speed1=speed1+10;
		break;
		case 3:
			speed2=speed2+10;
			break;
		case 4:
			c1=c1+3;
			c2=c2+3;
			break;
		case 5:
			d1=d1+10;
			d2=d2+10;
			d3=d3+10;
			break;
		case 6:
			e=e+0.05;
			e2=e2+0.05;
			break;
			}
			}

			break;
			default:
				break;
	}
	glutPostRedisplay();
}

int main(int argc,char** argv)/////this is a  main funnction....//////////////
{
//	u=2;
	printf("Welcome To Flight Display Unit\n Enter The Speed");
	//scanf("%d",&a1);

	//	while(u>0)
	//	{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(320, 240);
	glutInitWindowPosition(0, 239);
	glutCreateWindow("leeladhar sir 10/07");

	///////// openGL specific



	init();
	//	glutReshapeFunc(reshape);
	printf("b4 keyboard DISPLAY");
	//while(u>=2)
	//{
	//	glutPostRedisplay(void);

	glutDisplayFunc(display);
//	glutDisplayFunc(display1);
	//	printf("b4 keyboard funtion");
	glutKeyboardFunc(KeyboardCallback);
	glutMouseFunc(mouse);

	//	}
    printf("afterkeyboard func");
	/*char ch;
	ch= getch();
	switch(ch)
	{
	case 'A':

	  case 'B':

		default :break;
		}

		  //////////// openGL specific
		  /*int a;
		  cout<< "enter the value";

			cin>> a;
    input( a);*/
	glutMainLoop();
	printf("afterkeyboard func");

	return 0;

}

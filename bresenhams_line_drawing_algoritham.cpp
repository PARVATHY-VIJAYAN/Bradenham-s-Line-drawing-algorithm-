#include<iostream>
#include<graphics.h>
#include <cmath>
using namespace std;
int main()
{
    int p1,xs,ys,xe,ye;
    double m;
    int x,y;

    cout<<"starting point\nx : ";
    cin>>xs;
    cout<<"\ny:";
    cin>>ys;

    cout<<"\nend point\nx : ";
    cin>>xe;
    cout<<"\ny:";
    cin>>ye;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    m = (ye-ys)/(xe-xs);
    if(abs(m)<1)
    {

        p1 = 2*(ye-ys)-(xe-xs);
        y=ys;
        x=xs;
        while(y!=ye&&x!=xe)
        {
            if(p1<0)
            {
                x=x+1;
                putpixel(x,y,YELLOW);
                p1=p1+2*(ye-ys);
            }
            else
            {
                x=x+1;
                y=y+1;
                putpixel(x,y,YELLOW);
                p1=p1+2*(ye-ys)-2*(xe-xs);
            }
        }
    }
    else if(abs(m)>=1)//=?
    {

        p1 = 2*(xe-xs)-(ye-ys);
        y=ys;
        x=xs;
        while(y!=ye&&x!=xe)
        {
            if(p1<0)
            {
                y=y+1;
                putpixel(x,y,WHITE);
                p1=p1+2*(xe-xs);
            }
            else
            {
                x=x+1;
                y=y+1;
                putpixel(x,y,WHITE);
                p1=p1+2*(xe-xs)-2*(ye-ys);
            }
        }
    }

getch();
closegraph();
}

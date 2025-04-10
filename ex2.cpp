#include <iostream>
#include<cmath>
using namespace std;

class Point
{
    float x;
    float y;
public:
    Point(float a, float b)
    {
        x=a;
        y=b;
    }
    void afficher()
    {
        cout<<"Les coordonnées du point sont: ["<<x<<","<<y<<"]"<<endl;
    }
    void deplacer(float dx, float dy)
    {
        x=x+dx;
        y=y+dy;
    }
    float abs()
    {
        return x;
    }
    float ordo()
    {
        return y;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    void setX(float a)
    {
        x=a;
    }
    void setY(float a)
    {
        y=a;
    }
    bool comparer(Point p)
    {
        if(p.x==x && p.y==y)
        {
            return true;
        }
        else return false;
    }
    float distance(Point p){
        return(sqrt(pow(p.x-x,2))+pow(p.y-y,2));
    }

};
int main()
{
    Point p1(4,3),p2(5,7),p3(2,3);
    p1.afficher();
    p2.afficher();
    p1.deplacer(2,2);
    p1.afficher();
    cout<<"L'abscisse du point est: "  <<p1.getX() <<endl;
    cout<<"L'ordonnée du point est: "  <<p1.getY()<<endl;
    if(p1.comparer(p3))
    {
        cout<<"Les points sont les mêmes"<<endl;
    }
    else
    {
        cout<<"Les points sont différents"<<endl;
    }
    float dist;
    dist=p1.distance(p2);
    cout<<"La distance est :"<<dist<<"cm"<<endl;
    return 0;
}
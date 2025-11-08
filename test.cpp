#include<windows.h>
#include<iostream>
#include<fstream>
using namespace std;
class shape{
    protected:
    int width;
    int height;
    public :
    virtual int getlong()=0;
    void setWidth(int w)
    {
        width=w;
    }
    void setHeight(int h)
    {
        height=h;
    }
    shape(int a=0,int b=0)
    {
        width=a;
        height=b;
    }
    virtual void getArea()
    {
        cout<<"the area is"<<endl;
    }

};
class cost{
    protected:
    int getCost(int area)
    {
        return area*100;
    }
};
class Retancle:public shape,public cost{
    public:
    void getArea ()override
    {
        cout<<width*height;
    }
    int getlong()override{
        return 2*(width+height);
    }
    
};
int main()
{
    Retancle _r1,_r2;
    _r1.setWidth(10);
    _r1.setHeight(20);
    _r1.getArea();
    shape *_s1;
    _s1=&_r1;
    _s1->getArea();


    fstream file;
    file.open("kobe.cpp",ios::out |ios::in);
    string data;
    file>>data;
    cin.ignore();
    cout<<data;
    file<<data;
    file.close();
    return 0;
}
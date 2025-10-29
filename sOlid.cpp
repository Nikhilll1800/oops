#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    double length;
    double breadth;
        Rectangle(double length,double breadth){
            this->length=length;
            this->breadth=breadth;
        }
};
class Circle{
    public:
    double radius;
        Circle(double radius){
            this->radius=radius;
        }
};

class areaCalculator{
    public:
    double calulateArea(const Rectangle& rect){
        // Rectangle rect=(Rectangle)shape;
        return rect.length * rect.breadth;
    }
     double calulateArea(const Circle &circle){
        return M_PI*circle.radius * circle.radius;
    }
};

int main(){
    Rectangle rect(4,5);
    Circle cir(5);
    areaCalculator area;
    cout<<"the area of rect is "<< area.calulateArea(rect)<<endl;
    cout<<"the area of circle is "<< area.calulateArea(cir);
}
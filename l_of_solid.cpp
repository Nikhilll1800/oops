#include<bits/stdc++.h>
using namespace std;
// interface
class Shape{
    public:
    virtual int getArea() const =0;
    virtual ~Shape()=default;
};
class Rectangle:public Shape{
    public:
    int width;
    int height;

    Rectangle(int height,int width){
        this->height=height;
        this->width=width;
    }
    int getArea()const override{
        return height*width;
    } 

};
class Square:public Shape{
    public:
    int side;

    Square(int side){
        this->side=side;
        // this->width=width;
    }
    int getArea()const override{
        return side*side;
    } 

};
int main(){
    Shape* rect=new Rectangle(4,5);
    Shape* square=new Square(5);
    cout<<rect->getArea();
    cout<<endl;
    cout<<square->getArea();
    delete rect;
    delete square;
    return 0;
}
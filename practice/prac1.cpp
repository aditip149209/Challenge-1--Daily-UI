#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;};
    int getBreadth(){return breadth;};
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l){
    if(l>0){
        length = l;
    }
    else{
        length = 1;
    }
}

void Rectangle:: setBreadth(int b){
    if(b>0){
        breadth = b;
    }
    else{
        breadth = 1;
    }
}

int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}

bool Rectangle::isSquare(){
    return length==breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}


int main(int argc, char const *argv[])
{
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    return 0;
}

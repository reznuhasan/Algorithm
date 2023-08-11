#include<bits/stdc++.h>

using namespace std;
class Person{
    int x,y;
public:
    void setX(int);
    int getX(){
        return x;
    }
    void setY(int);
    int getY(){
        return y;
    }
};
void Person:: setX(int value){
    x=value;
}
void Person:: setY(int value){
    y=value;
}

int main(){
    Person obj;
    int m,n;
    cout<<"Enter your x number: ";
    cin>>m;
    obj.setX(m);
    cout<<"Enter your y number: ";
    cin>>n;
    obj.setY(n);
    cout<<"X= "<<obj.getX()<<"\nY= "<<obj.getY()<<endl;


}

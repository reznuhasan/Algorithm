#include<bits/stdc++.h>

using namespace std;
class Employee{
    string  name;
    string company;
    int age;
public:
    Employee(string myname,string mycompany,int myage){
        name=myname;
        company=mycompany;
        age=myage;
    }
    void setName(string myname){
        name=myname;
    }
    string getName(){
        return name;
    }
    void showDetails(){
        cout<<"My Name:-"<<name<<endl;
        cout<<"My Company:-"<<company<<endl;
        cout<<"My Age:-"<<age<<endl;
    }
};
int main(){
    string yourName;
    string yourCompany;
    int age;
    cout<<"Enter your name:-";
    cin>>yourName;
    cout<<"Enter your company name:-";
    cin>>yourCompany;
    cout<<"Enter your age:-";
    cin>>age;
    Employee obj(yourName,yourCompany,age);
    obj.showDetails();
    obj.setName("Alif");
    obj.showDetails();
}


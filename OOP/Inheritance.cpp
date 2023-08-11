#include<bits/stdc++.h>

using namespace std;
class EmployeeAbstract{
    virtual void askForPromotion()=0;
};
class Employee:EmployeeAbstract{
    string  name;
    string company;
    int age;
public:
    Employee(string myname,string mycompany,int myage){
        name=myname;
        company=mycompany;
        age=myage;
    }
    void showDetails(){
        cout<<"My Name:-"<<name<<endl;
        cout<<"My Company:-"<<company<<endl;
        cout<<"My Age:-"<<age<<endl;
    }
    void askForPromotion(){

    }
};
class Developer:Employee{
    string favLanguage;
public:
    Developer(string myname,string mycompany,int myage,string myFavLanguage):Employee(myname,mycompany,myage){
        favLanguage=myFavLanguage;
    }
   void showDevDetails(){
        showDetails();
        cout<<"Language:-"<<favLanguage<<endl;
   }

};
int main(){
    string yourName;
    string yourCompany;
    int age;
    string language;
    cout<<"Enter your name:-";
    cin>>yourName;
    cout<<"Enter your company name:-";
    cin>>yourCompany;
    cout<<"Enter your age:-";
    cin>>age;
    cout<<"Enter your favourite language:";
    cin>>language;
    Developer obj(yourName,yourCompany,age,language);
    obj.showDevDetails();
}



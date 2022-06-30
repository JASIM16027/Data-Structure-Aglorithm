#include<iostream>
using namespace std;

class Student
{
private:
    string name;
public:
    
    int age;
    string gender;
    Student(){
        cout<<"Default constructor "<<endl;
    }
    Student(string s, int a, string g){
        cout<<"parameterized constructor "<<endl;
        name = s;
        age = a;
        gender= g;
    }

    Student(Student &a){
        cout<<"copy constructor "<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~Student(){
        cout<<"Destructor is calling"<<endl;
    }

    void setName(string stu_name){
        name = stu_name;

    }
    void getName(){
        cout<<name<<endl;

    }

    void printinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};


int main(){
    Student a("Jasim Uddin",25,"Male");
    a.getName();
    a.printinfo();

    
    Student c  = a;
    Student b;

    
    return 0;
}
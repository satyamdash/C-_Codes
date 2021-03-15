#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    
    int age;
    bool gender;

    // Default Constructor
    student()
    {
        cout<<"Default Construtor"<<endl;
    }
 
    // Constructor is called by default!

    student(string s,int a,bool g)
    {
        cout<<"Parameterized Constructor"<<endl;
       name=s;
       age=a;
       gender=g;
    } //parameterized constructor

    student(student &a)
    {
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~student()
    {
        cout<<"Destructor is called"<<endl;
    }

    bool operator ==(student &a)
    {
        if(name==a.name && age==a.age&&gender==a.gender)
        {
           return true;
        }
        return false;
    } //operator overloading.
    void setname(string s)
    {
        // Setter
       name=s;
    }
    void getname()
    {
        // Getter
        cout<<name;
    }
    
    void printinfo()
{
   cout<<"Name=";
   cout<<name<<endl;
   cout<<"Age=";
   cout<<age<<endl;
   cout<<"Gender=";
   cout<<gender<<endl; 
}

};


int main()
{
//   student a;
//   a.name="Satyam";
//   a.age=21;
//   a.gender=0;

// student arr[3];
// for(int i=0;i<3;i++)
// {
//     string s;
//     cout<<"Name=";
//     cin>>s;
//     arr[i].setname(s);
//     cout<<"Age=";
//     cin>>arr[i].age;
//     cout<<"Gender=";
//     cin>>arr[i].gender;


// for(int i=0;i<3;i++)
// {
//     arr[i].printinfo();
// }
 
  student a("Satyam",21,0);
//   a.printinfo();
  student b("Rahul",20,1);

  student copy=a;

  if(b==a)
  {
      cout<<"same"<<endl;
  }
  else{
      cout<<"not same"<<endl;
  }
  

}
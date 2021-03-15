#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    
    int age;
    bool gender;
 
    

    void setname(string s)
    {
        // Setter
       name=s;
    }
    void getname(string s)
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

student arr[3];
for(int i=0;i<3;i++)
{
    string s;
    cout<<"Name=";
    cin>>s;
    arr[i].setname(s);
    cout<<"Age=";
    cin>>arr[i].age;
    cout<<"Gender=";
    cin>>arr[i].gender;

}
for(int i=0;i<3;i++)
{
    arr[i].printinfo();
}
 
  
  return 0;

}
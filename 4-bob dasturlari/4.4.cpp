#include <iostream>
#include <string>
using namespace std;
class player {
public:
player();
player (string name,int weight, int age); 
void show_player (void);
private:
string name;
int weight;
int age;
};
player::player(){
name="";
weight = 0;
age = 0;
}; 
player::player(string name,int weight, int age){
player::name=name;
player::weight = weight;
player::age = age;
}; 
void player::show_player (void) {
cout<<"Ism: " << name << endl;
cout<<"Vazn: " << weight << endl;
cout<<"Yosh: " << age << endl;
}
class array_player{ public:
void show_array(player a[],int n)
{ for(int i=0;i<n;i++)
{a[i].show_player();cout<<endl;}}
void input_array(player a[],int n)
{string name;int weight,age; 
for(int i=0;i<n;i++) 
{cin>>name>>weight>>age;
a[i]=player(name,weight,age);
}}};

int main() {array_player arr;
player happy[]={player("Olimov",58,24),
player("Alimov",72,35)};
arr.show_array(happy,2);
player matt[2];
arr.input_array(matt,2);
arr.show_array(matt,2);
return 0;}


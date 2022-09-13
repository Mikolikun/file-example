#include <iostream>
using namespace std;
struct student
{
    char Stud_ID[10];
    char Stud_name[10];
    char Stud_surname[10];
    char Stud_subject[10];
    int Stud_mark;
};
struct student stud;
char grade;
int choose;
int main()
{
    do
    {
    cout<<"Input Stud_ID : ";
    cin>>stud.Stud_ID;
    cout<<"Input Name : ";
    cin>>stud.Stud_name;
    cout<<"Input Stud_Surname : ";
    cin>>stud.Stud_surname;
    cout<<"Input Stud_Subject : ";
    cin>>stud.Stud_subject;
    cout<<"Input Stud_Mark : ";
    cin>>stud.Stud_mark;
    if(stud.Stud_mark>=80)
    {
        grade='G';
    }
    else if(stud.Stud_mark>=60)
    {
        grade='P';
    }
    else
    {
        grade='F';
    }
    cout<<"Display data of "<<stud.Stud_ID<<" "<<stud.Stud_name<<" "<<stud.Stud_surname<<endl;
    cout<<"Your mark is "<<stud.Stud_mark<<" because grage is "<<grade<<endl;
    switch(grade)
    {
        case 'G' : cout<<"Good"<<endl; break;
        case 'P' : cout<<"Pass"<<endl; break;
        case 'F' : cout<<"Fail"<<endl; 
    }
    cout<<"Do you want to continue ? (1/0) : ";
    cin>>choose;
    }
    while(choose==1);
    return 0;
}
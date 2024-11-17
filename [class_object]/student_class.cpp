#include<iostream>
using namespace std;


class student_class
{
private:
    int rollno;
    char name[30];
    float avg;
public:
void getdata(){
    cout<<"Enter your rollno and Name avg \n ";
    cin >>rollno>>name>>avg;
}

void printdata(){

    cout<<rollno<<"  " <<name<<" "<<avg;
}
    

};

int main(){

    student_class s1 ,s2;

    s1.getdata();
    s2.getdata();

    s1.printdata();
    s2.printdata();

    return 0;
}


#include <iostream>
#include <iomanip>

using namespace std;
int main(){

int n;

cout<<"  ****************************************"<<endl;
cout<<"          ||  CGPA CALCULATOR  ||"<<endl;
cout<<"  ****************************************"<<endl;
cout<<endl;
cout<<endl;

cout<<"enter number of courses : ";
cin>>n;
if(n==0 or n>50){
    cout<<"number of courses are invalid"<<endl;
    cout<<"please enter valid number"<<endl;
}

string course_name[50];
string grades[50];
float grade_points[50];
int credit_hours[50];

for(int i = 0 ; i<= n-1 ; i++) {
 
 cout<<"\n------Course"<<i+1<<"------"<<endl;
 
 cout<<"enter course name : ";
 cin>>ws;
 getline(cin , course_name[i]);
 cout<<"enter grade : ";
 cin>>grades[i];
 cout<<"enter credit hours : ";
 cin>>credit_hours[i];

}
cout<<endl;
cout<<endl;

for(int i = 0; i<=n-1; i++){
if (grades[i] == "A+")
  grade_points[i]= 9.5;
else if (grades[i] == "A")
  grade_points[i]= 8.5;
else if (grades[i] == "B+")
  grade_points[i]= 8;
else if (grades[i] == "B")
  grade_points[i]= 7;
else if (grades[i] == "C+")
  grade_points[i]= 6.5;
else if (grades[i] == "C")
  grade_points[i]= 6;
else if (grades[i] == "D")
  grade_points[i]= 4;
else if (grades[i] == "F")
  grade_points[i]= 0;
else{cout<<"your grade is invalid "<<endl<<"please enter valid grade";}
}

cout<<endl;
cout<<"================================="<<endl;
cout<<"          Course Report           "<<endl;
cout<<"================================="<<endl;
cout<<endl;
cout<<endl;
cout<<left
<<setw(20)<<"course"
<<setw(10)<<"grade"
<<setw(10)<<"credits"
<<setw(10)<<"points"<<"\n";

cout<<"--------------------------------------------------------------"<<endl;
for(int i= 0;i<=n-1 ; i++ ){
cout<<left
<<setw(20)<<course_name[i]
<<setw(10)<<grade_points[i]
<<setw(10)<<credit_hours[i]
<<setw(10)<<grade_points[i] * credit_hours[i] <<"\n";

}

cout<<"--------------------------------------------------------------"<<endl;

int total_credits = 0;
int total_points = 0;

for(int i = 0; i<=n-1; i++) {
total_credits += credit_hours[i];
total_points += grade_points[i] * credit_hours[i];
}
cout<<left
<<setw(20)<<"TOTAL"
<<setw(10)<<" "
<<setw(10)<<total_credits
<<setw(10)<<total_points<<"\n" ;

cout<<"----------------------------------------------------------------"<<endl;

cout<<endl;
cout<<endl;


float sgpa;
sgpa =(float)total_points/total_credits ;

cout<<fixed<< setprecision(2);
cout<<"Semester GPA :"<< sgpa;
cout<<endl;
cout<<endl;

int sems;
double previous_sgpa = 0;
double total_sgpa = 0;

cout<<"Enter number of semesters completed : ";
cin>>sems;
cout<<endl;
if(sems > 8 || sems < 1 ){

  cout<<"invalid number !! please enter valid number of semester";
}

 for(int i = 1; i <= sems - 1 ; i++){

  cout<<"Enter SGPA of semester "<< i <<":";
  cin>>previous_sgpa;

total_sgpa += previous_sgpa;

 }
 
double CGPA = ( total_sgpa + sgpa ) / sems ;
 cout<<"\n Overall CGPA : "<<fixed<<setprecision(2)<<CGPA;

cout<<endl;
cout<<endl;
cout<<"*******************************************************"<<endl;
cout<<"     Thanks for using CGPA Calculator  "<<endl;
cout<<"*******************************************************"<<endl;






}

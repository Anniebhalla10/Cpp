/* Annie Bhalla
 19HCS4009
 B.Sc (H) Cs  */
 
 // Part B. (8) inheritance
 
 #include<bits/stdc++.h> 
 using namespace std;
 
 class Person
 {		
 		char name[100];
	public:
		Person()
		{
			strcpy(name,"NULL");
			
		}
		Person(char n[100])
		{
			strcpy(name,n);
		}
		void display(){
			cout<<"\n Name : "<<name;
			
		}
 	
 };
 
 class Student : public Person
 {
	 	char course[100];
	 	float marks;
	 	int year;
	public:
		Student()
		{
			strcpy(course,"CS");
			marks=45;
			year=2019;
		}
		Student(char ch[100], float x ,int y)
		{
			strcpy(course,ch);
			marks=x;
			year=y;
		}
		
		void display()
		{
			cout<<"\n Course : "<<course;
			cout<<"\n Marks : "<<marks;
			cout<<"\n Year : "<<year;
		}
 };
 
 class Employee : public Person
{
		char dept[100];
		float salary;
	public:
		Employee()
		{
			strcpy(dept,"Computer");
			salary=10000;
		}
		Employee(char d[100],float s)
		{
			strcpy(dept,d);
			salary=s;
		}
		 void display()
		 {
		 	cout<<"\n Department : "<<dept;
		 	cout<<"\n Salary : "<<salary;
		 }
};

int main()
{
	Person P("Annie");
	P.display();
	Student S;
	S.display();
	S.Person::display();
	Employee E;
	E.display();
	E.Person::display();
	return 0;	
}



#include<iostream>
using namespace std;
class Employee
{
	public: int id;
	int deptno;
	string name;
	 protected : double basicSalary;
 public : Employee()
	{
		id=10;
		deptno=2;
		name="XYZ";
		basicSalary=50000;
		
		cout<<"\n Default constructor called";
	}
	Employee(int id,int deptno,string name,double basicSalary)
	{
		this->id=id;
		this->deptno=deptno;
		this->name=name;
		this->basicSalary=basicSalary;
		cout<<"\n Parameterized constructor called";
	}
	public : double computeNetSalary()
	{
		cout<<"\n The Net Salary is"<<basicSalary<<endl;
		
		
	}
	public: void accept()
	{
	cout<<"\n Enter id";
	cin>>id;
	cout<<"\n Enter deptno";
	cin>>deptno;
	cout<<"\n Enter name";
	cin>>name;
	cout<<"\n Enter basicSalary";
	cin>>basicSalary;
	
	}	

	public:void display()
	{
		cout<<"\n ID : "<<id;
		cout<<"\n DEPTID : "<<deptno;
		cout<<"\n name : "<<name;
		cout<<"\n Basic Salary : "<<basicSalary;
	}
};
class Manager: Employee
{
	
	double perf_Bonus, netSalary;

//	void netSalary(Employee basicSalary)
//	{
//		
//		netSalary = basicSalary+perf_Bonus;
//		
//	
//	}
	public : Manager(int id,int deptno,string name,double basicSalary, double perf_Bonus) : Employee(id,deptno, name, basicSalary)
	{
		cout<<"Manager parameterised condtructor called"<<endl;
		this->perf_Bonus=perf_Bonus;
	}
	
	void calNetSalary()
	{
		cout<<"Net sal func called"<<endl;
		cout<<"\n net sal of manager";
		netSalary=basicSalary+perf_Bonus;
		cout<<"\n net Salary of manager"<<netSalary;
	}
	void display()
	{
		Employee::display();
		cout<<" NetSalary of Manager is : "<<netSalary<<endl;
	}
};
int main()
{
	cout<<"Akanksha"<<endl;
	cout<<"Rollno 243006"<<endl;
	Employee emp,emp2;
	emp.display();
	Employee emp1(20,3,"ABC",25000);
	emp1.display();
//	emp2.accept();
//	emp2.display();
	Manager mgr(30,4,"PQR",75000,2000);
	//mgr.accept();
//	mgr.display();
	mgr.calNetSalary();
	return 0;
	
}

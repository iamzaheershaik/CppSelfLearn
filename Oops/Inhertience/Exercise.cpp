#include<iostream>
using namespace std;
class Employee {
private:
    int eid;
    string Name;
public:
    Employee(int id, string name) {
        eid=id;
        Name=name;
    }
    int getEmployeeId() {
        return eid;
    }
    string getEmployeeName() {
        return Name;
    }
};
class Fulltime:public Employee{
private:
    int Salary;
public:
    Fulltime(int in, string n, int sal):Employee(in,n) {
        Salary =sal;
    }
    int getSalary(){
       return Salary;
    }
};
class Partime:public Employee{
private:
    int Wage;
public:
    Partime(int Pn, string P, int w):Employee(Pn,P) {
        Wage =w;
    }
    int getWage(){
        return Wage;
    }
};
int main() {
    Fulltime F1(23,"zaheershaik",150000);
    Partime P1(245,"ArshadNaick",23000);
    cout<<"The details of Fulltime Employee = "<<F1.getSalary()<<endl;
    cout<<"The details of Parttime Employee = "<<P1.getWage()<<endl;
}
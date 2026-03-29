#include <iostream>
using namespace std;

class Staff {
public:
    virtual double processSalary() {
        return 0;
    }
};

class SalariedEmployee : public Staff {
    double salary;
    public:
    SalariedEmployee(double s) : salary(s) {}
    double processSalary() override {
        return salary;
    }
};

class CommissionEmployee : public Staff {
    double sales, commissionRate;
    public:
    CommissionEmployee(double s, double r) : sales(s), commissionRate(r) {}
    double processSalary() override {
        return sales * commissionRate;
    }
};

int main() {
    Staff* staffList[2];

    SalariedEmployee S1(3000);
    CommissionEmployee C1(20000, 0.10);

    staffList[0] = &S1;
    staffList[1] = &C1;

    for (int i = 0; i < 2; i++) {
        cout << "Salary: " << staffList[i]->processSalary() << endl;
    }
}

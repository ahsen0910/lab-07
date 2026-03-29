#include <iostream>
using namespace std;

class Staff{

    public:
        virtual double CalculateSalary(){
            return 0;
        }
};

class Contractors : public Staff{
    private:
        double Hours, Rate;
    public:
        Contractors(double Hours, double Rate){
            this->Hours = Hours;
            this->Rate = Rate;
        }
        double CalculateSalary() override{
            return Hours * Rate;
        }
};

class FullTime : public Staff{
    private:
        double Base, Bonus;
    public:
        FullTime(double Base, double Bonus){
            this->Base = Base;
            this->Bonus = Bonus;
        }
        double CalculateSalary() override{
            return Base + Bonus;
        }
};

int main(){

    Staff *S[2];
    Contractors C1(12,12.2);
    FullTime F1(1000,20);

    S[0] = &C1;
    S[1] = &F1;

    for (int i =0; i<2; i ++){
        cout << "Salary is: " << S[i]->CalculateSalary() << endl;
    }
}

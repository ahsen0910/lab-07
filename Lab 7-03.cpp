#include <iostream>
using namespace std;

class Pluggin{
    
    public:

        virtual void Perform(){
            cout << "Performing..." << endl;
        }
};

class Antivirus : public Pluggin{
    public:
        void Perform() override{
            cout << "Scanning for antivirus..." << endl;
        }
};


class Updater : public Pluggin{
    public:
        void Perform() override{
            cout << "Perfroming Update check..." << endl;
        }
};

int main(){

    Pluggin *P[2];
    Antivirus A1;
    Updater U1;

    P[0] = &A1;
    P[1] = &U1;

    for (int i = 0; i< 2; i++){
        P[i]->Perform();
    }

    return 0;
}

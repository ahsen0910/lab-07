#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Character {
public:
    virtual void PerformAttack() {
        cout << "Default Attack" << endl;
    }
};

class Warrior : public Character {
public:
    void PerformAttack() override {
        cout << "Sword Slash" << endl;
    }
};

class Mage : public Character {
public:
    void PerformAttack() override {
        cout << "Fireball" << endl;
    }
};

class Healer : public Character {
public:
    void PerformAttack() override {
        cout << "Healing Strike" << endl;
    }
};

int main() {
    Character *Characters[3];
    Warrior W1;
    Mage M1;
    Healer H1;

    Characters[0] = &W1;
    Characters[1] = &M1;
    Characters[2] = &H1;

    for (int i = 0; i < 3; i ++) {
        Characters[i]->PerformAttack();
    }

    return 0;
}

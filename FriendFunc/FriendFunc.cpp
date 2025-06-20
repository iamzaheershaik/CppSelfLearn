#include<iostream>
using namespace std;
class myFriend{
int pizza;
protected:
    int  burger;
public:
    int  Garlic_bread;
    friend void func();
};
void func(){
    myFriend F;
    F.pizza =64;
    F.burger =567;
    F.Garlic_bread =779;
    cout << "pizza        = " << F.pizza        << '\n'
       << "burger       = " << F.burger       << '\n'
       << "Garlic_bread = " << F.Garlic_bread << '\n';

}
int main(){
 func();
    return 0;
}

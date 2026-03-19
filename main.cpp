#include <iostream>
#include "entity.h"
using namespace std;

int main(){
    string *abilities;
    abilities = new string[3];
    cout<<"Enter Abilities: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Ability-["<<i+1<<"]"<<endl;
        cin>>abilities[i];
    }
    
    entity e("Steve","Brown", 34, 174, 63, 500, 3, abilities);
    e.display();
}
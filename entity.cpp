#include <iostream>
#include "entity.h"
using namespace std;

int entity::entityCount = 0;

entity::entity(){
    name = "Not_Set";   
    color = "Not_Set";   
    age = 0;
    height = 0.0;
    weight = 0.0;
    health = 100;
    aCount = 0;
    abilities = nullptr;
    entityCount++;
    cout<<"Default Constructor Running...";
}

entity::entity(string n, string c, int a, float h, float w, int hp, const int x, int abc){
    entity::setName(n);
    entity::setColor(c);
    entity::setAge(a);
    entity::setHeight(h);
    entity::setWeight(w);
    entity::setHealth(hp);
    entity::setAbilities(x);
    entity::setAbilityCount(abc);
    entityCount++;
    cout<<"Parameterized Constructor Running...";
}
entity::entity(const entity &obj){
    name = obj.name;
    color = obj.color;
    age = obj.age;
    height = obj.height;
    weight = obj.weight;
    health = obj.health;
    aCount = obj.aCount;
    abilities = new string[aCount];
    for (int i = 0; i < aCount; i++)
    {
        abilities[i] = obj.abilities[i];
    }

    entityCount++;
    cout<<"Copy Constructor Running...";
}

entity::~entity(){}

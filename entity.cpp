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

entity::entity(string n, string c, int a, float h, float w, int hp,int x, string ab[]){
    entity::setName(n);
    entity::setColor(c);
    entity::setAge(a);
    entity::setHeight(h);
    entity::setWeight(w);
    entity::setHealth(hp);
    entity::setAbilities(x,ab);
    entity::setAbilityCount(x);
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

entity& entity::setName(string name){
    this-> name = name;
    return *this;
}
entity& entity::setColor(string color){
    this-> color = color;
    return *this;
}
entity& entity::setAge(int age){
    this-> age = age;
    return *this;
}
entity& entity::setHeight(float height){
    this-> height;
    return *this;
}
entity& entity::setWeight(float weight){
    this-> weight;
    return *this;
}
entity& entity::setHealth(int health){
    this-> health = health;
    return *this;
}
entity& entity::setAbilities(const int x, string abilities[]){
    aCount = x;
    abilities = new string[aCount];
    for (int i = 0; i < aCount; i++)
    {
     this-> abilities[i] = abilities[i];
    }
    
    return *this;
}
entity& entity::setAbilityCount(int aCount){
    this-> aCount = aCount;
    return *this;
}

string entity::getName(){
    return name;
};
string entity::getColor(){
    return color;
};
int entity::getAge(){
    return age;
};
float entity::getHeight(){
    return height;
};
float entity::getWeight(){
    return weight;
};
int entity::getHealth(){
    return health;
};
string entity::getAbilities(){
    return abilities[aCount];
};
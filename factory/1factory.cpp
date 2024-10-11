#include<bits/stdc++.h>
using namespace std;

class Vechile{
    public:
        virtual void createVechile()=0;
};


class Car : public Vechile{
    public:
        void createVechile();
};

void Car :: createVechile(){
    cout<<"Creating Car"<<endl;
}

class Bike : public Vechile{
    public:
        void createVechile();
};

void Bike :: createVechile(){
    cout<<"Creating Bike"<<endl;
}

int main(){
    string vechileType;
    cin>>vechileType;

    Vechile* vechile;
    if(vechileType=="car"){
        vechile = new Car();
    }
    else if(vechileType=="bike"){
        vechile = new Bike();
    }
    vechile->createVechile();
    return 0;
}
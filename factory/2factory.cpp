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

class VechileFactory {
public:
    static Vechile* createVechile(string& vechileType) {
        if (vechileType == "car") {
            return new Car();
        } else if (vechileType == "bike") {
            return new Bike();
        } else {
            return nullptr;
        }
    }
};

int main(){
    string vechileType;
    cin>>vechileType;

    Vechile* vechile = VechileFactory::createVechile(vechileType);
    vechile->createVechile();
    return 0;
}
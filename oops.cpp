#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Car{
public:
    string Name;
    string Model;
    string Color;
    int No;
};

int main(){
    Car car1;
    car1.Name = "Audi";
    car1.Model = "V8";
    car1.Color = "red";
    car1.No = 2022; // Assigning a valid integer value to the No member variable

    return 0;
}

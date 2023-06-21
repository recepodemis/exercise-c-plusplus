/*The header file for main.cpp*/

#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
    //ToDo: finish this function
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
    //ToDo: finish this function
}

string Dog::getName()
{
    return name;
    //ToDo: finish this function
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
    //ToDo: finish this function
}
 
void Dog::printInfo()
{
    std::cout<<name<<" "<<licenseNumber;
    //ToDo: finish this function
}
    


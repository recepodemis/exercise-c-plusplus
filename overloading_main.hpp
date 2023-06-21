#include<iostream>

class Compare
{
public:
    int     findSmaller(int input1, int input2);
    float   findSmaller(float input1, float input2);
    char    findSmaller(char input1, char input2);
    int     findSmaller(int input1, int input2, int input3);
    float   findSmaller(float input1, float input2, float input3);
    char    findSmaller(char input1, char input2, char input3);
    int     findSmaller(int array[], int size);
    float   findSmaller(float array[], int size);
    char    findSmaller(char array[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
int Compare::findSmaller(int input1, int input2, int input3)
{
    if(input1<input2){
        if (input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
float Compare::findSmaller(float input1, float input2, float input3)
{
    if(input1<input2){
        if (input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
char Compare::findSmaller(char input1, char input2, char input3)
{
    if(input1<input2){
        if (input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2<input3)
            return input2;
        else
            return input3;
    }
}
int Compare::findSmaller(int array[], int size)
{
    int min;
    
    min = array[0];
    for(int i= 1; i<size ; i++ )
    {
        if(min > array[i])
            min = array[i];
    }
    return min;
}
float Compare::findSmaller(float array[], int size)
{
    float min;
    
       min = array[0];
    for(int i= 1; i<size ; i++ )
    {
        if(min > array[i])
            min = array[i];
    }
    return min;
}
char Compare::findSmaller(char array[], int size)
{
    char min;
    
       min = array[0];
    for(int i= 1; i<size ; i++ )
    {
        if(min > array[i])
            min = array[i];
    }
    return min;
}

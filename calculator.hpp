/*The header file for main.cpp*/
    #include<iostream>
    
    float     calculate(float input1, float input2, char operation, float result);
    void    printEquation(float input1, float input2, char operation, float result);
    
    
    float calculate(float input1, float input2, char operation, float result)
    {
        switch(operation)
        {
            case '+':
            result = input1 + input2;
            break;
            
            case '-':
            result = input1 - input2;
            break;
            
            case '*':
            result = input1 * input2;
            break;
            case '/':
            result = input1 + input2;
        }
        
        return result;
    }
    
    void     printEquation(float input1, float input2, char operation, float result)
    {
        float result2 = 0;
        result2 = calculate(input1, input2, operation, result);
        std::cout<<input1<<" "<<operation<<" "<<input2<< " = "<<result2<<"\n";
    }
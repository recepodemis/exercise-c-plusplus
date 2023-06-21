 #include <iostream>
 #include <sstream>
 
 int main()
 {
    std::string length,width;
    float  area,f_length, f_width; 

    std::getline(std::cin, length); // taking parameters and assignment to length 
    std::stringstream(length) >> f_length; //parameter which was taken is converting to float
    
    std::getline(std::cin, width); // taking parameters and assignment to length 
    std::stringstream(width) >> f_width; //parameter which was taken is converting to float

    std::cout<<(f_length * f_width); //now calculating the area
     
     return 0;
 }
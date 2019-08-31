#include <iostream>

int main (){
    
    int num;
    
    std ::cout <<"Enter your favorite number between 1 and 100:" << std:: endl;
    
    std:: cin >> num;
    if(num >= 1 && num <= 100){
            std:: cout <<"Your favorite number is " <<num << std:: endl;
    }
    
    return 0;
}

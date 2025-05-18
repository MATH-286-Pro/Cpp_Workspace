#ifndef __main_h__
#define __main_h__

#include <iostream>
#include <bitset>
#include <string>

void Hello_World(){

  std::cout << "Hello World!" << std::endl;
}


void PRINT(int data,
           std::string type){
  
  if (type == "0b"){
    std::cout << std::bitset<16>(data) << std::endl;  
  }

  else if (type == "0x"){
    std::cout << std::hex << data << std::endl;  
  }
  else if (type == "dec"){
    std::cout << std::dec << data << std::endl;  
  }
  else{
    std::cout << "Error: Unknown type" << std::endl;
  }

}

#endif
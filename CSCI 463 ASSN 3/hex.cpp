 //***********************************************************************************
 //*
 //* 	prog3.cpp
 //*	CSCI 463 Assignment 3 
 //*
 //* 	Giovanni Moscato Z1820207
 //*
 //*	Bitwise Operators & IEEE-754 Floating point number decoding
 //* 	Instructor: John Winans
 //* 	Section: -0001
 //***********************************************************************************

// Include STL libraries  
#include <iostream>


//These files will contain some utility functions for formatting numbers as hex strings for printing.



/* 

std::string hex8(uint8_t i)
This function will return a std::string with exactly 2 hex digits representing the 8 bits of the i argument.

std::string hex32(uint32_t i)
This function will return a std::string with 8 hex digits representing the 32 bits of the i argument. 

std::string hex0x32(uint32_t i)
This  function  will  return  a std::string beginning  with 0x,  followed  by  the  8  hex  digits 
representing the 32 bits of the i argument.  

It must be implemented by creating a string by concatenating a 0x to the output of your hex32() function like this :return std::string("0x")+hex32(i); 

In other words, your program will NEVER format a printable 32-bit hex number anywherein your application other than in your hex32() function */


std::string hex8(uint8_t i)
{
    std::ostringstream os;
    os << std::hex << std::setfill(’0’) << std::setw(2) << static_cast<uint16_t>(i);
    return os.str();
    
}


int main()
{
    return 0;
}
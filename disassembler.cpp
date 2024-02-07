#include <iostream>
#include <fstream>
#include "disassembler8080.h"
using namespace std;

// disassermbler
// accepts: pointer to an unsigned character [codebuffer](the string of character for the current instruction), an integer [program counter]
// pc holds the pointer to the beginning of the code buffer.
// returns opbytes



int main() {
    // open file
    fstream source("invaders.h", ios::in | ios::out | ios::binary);
    //source.seekg(5); // sets a an offset in the file for the starting point of the pointer/cursor

    // Read the file one byte at a time
    char byte;
    while (source.get(byte)) {
        // Do something with the byte
        cout << byte << endl;
    }




    /*if (!source.is_open()) {
        cout << "File failed to open." << endl;
        return 0;
    }*/

    // point to the beginning of the filestream buffer

/*
    // Loop
    while (!source.eof()) {
        // read a byte

        // call opcode lookup function (determine how many bytes to skip, if any)

        // if end of filestream; close file and exit loop
    }
    // end loop
*/
    return 0;
}
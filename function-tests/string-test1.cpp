/*

This is a test of string manipulation functions that may be used in this project.

Compilation date: 12-12-21 by Patrick Schmitz

*/

#include<iostream>
#include<string>
std::string FindSeparator( std::string line ) {
    int pos = line.find( "=>" ) + 2; // find position of '=>'. add 2 to include the '=>' (might remove).
    std::string str = line.substr( 0, pos );
    std::cout<<line<<std::endl<<pos<<std::endl<<str<<std::endl;
    return str;
}
int main( void ) {
    std::string line1 = "c => if( true ) {";    // sample line 1
    std::string line2 = "java => return true;"; // sample line 2
    std::string line3 = "c => }";               // sample line 3
    FindSeparator( line1 );
    FindSeparator( line2 );
    return 0;
}

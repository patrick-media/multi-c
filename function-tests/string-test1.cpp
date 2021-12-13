/*

This is a test of string manipulation functions that may be used in this project.

Compilation date: 12-13-21 by Patrick Schmitz

*/

#include<iostream>
#include<string>
std::string FindSeparator( std::string line ) {
    int pos = line.find( "=>" ); // find position of '=>'. add 2 to include the '=>' (use in functions, this is needed for other purposes).
    std::string str = line.substr( 0, pos + 2 ); // this is mostly a test, I can't find a purpose for this but it served as a good ground for further manipulation techniques.
    std::string str_lang = line.substr( 0, pos - 1 ); // subtract 1 because it goes to the space before =>, and we don't want that.
    std::string lang;
    if( str_lang == "java" ) {
        lang = "Java";
    } else if( str_lang == "c" ) {
        lang = "C";
    } else {
        lang = "undefined";
    }
    std::cout<<line<<std::endl<<pos<<std::endl<<str<<std::endl<<lang<<std::endl<<std::endl;
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

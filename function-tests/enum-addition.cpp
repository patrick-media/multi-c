/*

This is a test of string manipulation functions that may be used in this project.

Compilation date: 12-17-21 by Patrick Schmitz

*/

#include<iostream>
#include<string>

enum OP {
    c,
    cpp,
    java,
    javascript,
    python
};
enum OP_C {
    c_short,
    c_int,
    c_long,
    c_void,
    c_static,
    c_if,
    c_else,
    c_char,
    c_struct,
    c_enum,
    c_union,
    c_switch,
    c_case,
    c_break,
    c_while,
    c_for,
    c_default,
    c_public,
    c_private,
    c_extern,
    c_float,
    c_double,
    HASH_include,
    HASH_pragma,
    HASH_error
};
enum OP_CPP {
    
};
enum OP_J {
    j_int,
    j_void,
    j_static,
    j_public,
    j_private,
    j_instance,
    j_if,
    j_else,
    j_string,
    j_class,
    j_import,
    j_float,
    j_double,
    j_while,
    j_for,
    j_using,
    j_namespace
};
enum OP_JS {
    
};
enum OP_PY {
    
};

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

#include "doctest.h"
#include "FamilyTree.hpp"
// #include <string>
// #include <iostream>;

/*
 * @author Eli, Ron and Tal
 *
 */
 family::Tree addFamily(){
	 family::Tree T ("Yosef");
	 T.addFather("Yosef", "Yaakov") 
	 .addMother("Yosef", "Rachel")   
	 .addFather("Yaakov", "Isaac")
	 .addMother("Yaakov", "Rivka")
	 .addFather("Rachel", "Bob")
	 .addMother("Rachel", "Rut")
	 .addFather("Isaac", "Avraham")
	 .addMother("Isaac", "Noy")
	 .addFather("Rivka", "Terah")
	 .addMother("Rivka", "lee")
	 .addFather("Bob", "Ranan")
	 .addMother("Bob", "Michela")
	 .addFather("Rut", "Ran")
	 .addMother("Rut", "Mor")
	 .addFather("Ran", "Ron")
	 .addMother("Mor", "Miriam");
	 return T;
 }
 
TEST_CASE(" Check relation ") {
	family::Tree T = addFamily();
	
	CHECK( T.relation("Yosef") == "me" );
	CHECK( T.relation("Yaakov") == "father" );
	CHECK( T.relation("Rachel") == "mother" );
	CHECK( T.relation("Isaac") == "grandfather" );
	CHECK( T.relation("Rivka") == "grandmother" ); //5
	CHECK( T.relation("Bob") == "grandfather" );
	CHECK( T.relation("Rut") == "grandmother" );
	CHECK( T.relation("Avraham") == "great-grandfather" );
	CHECK( T.relation("Noy") == "great-grandmother" );
	CHECK( T.relation("Terah") == "great-grandfather" );//10
	CHECK( T.relation("lee") == "great-grandmother" );
	CHECK( T.relation("Ranan") == "great-grandfather" );
	CHECK( T.relation("Michela") == "great-grandmother" );
	CHECK( T.relation("Ran") == "great-grandfather" );
	CHECK( T.relation("Mor") == "great-grandmother" );//15
	CHECK( T.relation("Ron") == "great-great-grandfather" );
	CHECK( T.relation("Miriam") == "great-great-grandmother" );
	CHECK( T.relation("Rom") == "unrelated" );
	CHECK( T.relation("Michel") == "unrelated" );
	CHECK( T.relation("lene") == "unrelated" );//20
	CHECK( T.relation("Ruti") == "unrelated" );
	CHECK( T.relation("Rotem") == "unrelated" );
}

TEST_CASE(" Check find ") {
	family::Tree T = addFamily();
	CHECK( T.find("me") == "Yosef" );
	CHECK( T.find("father") == "Yaakov" );//25
	CHECK( T.find("mother") == "Rachel" );
	CHECK( ( T.find("grandfather") == "Isaac" || T.find("grandfather") == "Bob" ) ); 
	CHECK( ( T.find("grandmother") == "Rivka" || T.find("grandmother") == "Rut" ) );
	CHECK(( (T.find("great-grandfather") == "Avraham" || T.find("great-grandfather") == "Terah") 
		|| (T.find("great-grandfather") == "Ranan" || T.find("great-grandfather") == "Ran") ));
	CHECK(( (T.find("great-grandmother") == "Noy" || T.find("great-grandmother") == "lee" )
		|| ( T.find("great-grandmother") == "Michela" || T.find("great-grandmother") == "Mor" ) ));//30
	CHECK( T.find("great-great-grandfather") == "Ron" );
	CHECK( T.find("great-great-grandmother") == "Miriam" ); 
}
 
TEST_CASE(" first case ") {
	family::Tree T ("Yosef"); 
	T.addFather("Yosef", "Yaakov");
	 
	for (int i = 0; i<68; i++)
		CHECK( T.relation("Yaakov") == "father" );

}

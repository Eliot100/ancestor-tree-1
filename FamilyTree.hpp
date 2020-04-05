
#pragma once
#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>
#include <cmath>
#include <cassert>

namespace family {
	
    class Node {
        public:
            std::string name;
            std::string relation;
            family::Node *mother, *father;

        
            Node (std::string personName) : name(personName),relation(""),mother(NULL),father(NULL){}
            //Node(){
            //    delete mother;
            //    delete father;
            //}
    };
	
	class Tree {
		public:
			family::Node root;
			Tree (const std::string rootName);
			family::Tree& family::Tree:: addFather (const std::string sonName, const std::string fatherName);
			family::Tree& family::Tree:: addMother (const std::string sonName, const std::string motherName);
			std::string find (const std::string relation2Root);
			void display ();
			Tree& remove (const std::string name) ;
			std::string relation (const std::string ancestorName);
	};

}

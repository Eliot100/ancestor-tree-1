#include <string>
using namespace std;
namespace family {
	
    class Node {
        public:
            string name;
            string relation;
            family::Node *mother, *father;

        
            Node (string personName) : name(personName),relation(""),mother(NULL),father(NULL){}
            //Node(){
            //    delete mother;
            //    delete father;
            //}
    };
	class Tree {
		public:
			family::Node root;
			Tree (const string rootName);
			Tree addFather (const string sonName, const string fatherName);
			Tree addMother (const string sonName, const string motherName);
			string find (const string relation2Root);
			void display ();
			Tree remove (const string name) ;
			string relation (const string ancestorName);
	};

}

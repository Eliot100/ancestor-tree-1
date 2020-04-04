#include <string>

namespace family {
	class  Tree {
		node root;
	
		public: 
			Tree (string rootName);
			Tree& addFather (string sonName, string fatherName);
			Tree& addMother (string sonName, string motherName);
			string relation (string ancestorName);
			string find (string relation2Root);
			void display (Tree tree);
			Tree& remove (string name) ;
	}
	
	class node {
		string name;
		node *mother, *father;
		public:
			node (string personName);
	}
}
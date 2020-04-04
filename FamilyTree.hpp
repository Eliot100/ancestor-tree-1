#include <string>
using namespace std;
namespace family {
	
	class node {
		string name;
		string relation;
		node *mother, *father;
		public:
			node (string personName);
	};
	
	class  Tree {
		node root;
	
		public: 
			Tree (string rootName);
			Tree& addFather (string sonName, string fatherName);
			Tree& addMother (string sonName, string motherName);
			string relation (string ancestorName);
			string find (string relation2Root);
			void display ();
			Tree& remove (string name) ;
	};
	
}
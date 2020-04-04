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
			Tree (const string rootName);
			Tree& addFather (const string sonName, const string fatherName);
			Tree& addMother (const string sonName, const string motherName);
			string relation (const string ancestorName);
			string find (const string relation2Root);
			void display ();
			Tree& remove (const string name) ;
	};
	
}
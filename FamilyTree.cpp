
#include <string>
using namespace std;

namespace family {
	
	class node {
		string name;
		string relation;
		node *mother, *father;
		public:
			node (string personName)
			: name(personName), relation("me"){}
			
	};
	
	class Tree {
		node root;
	
		public: 
			Tree (string rootName): root(rootName) {}
			
			Tree& addFather (string sonName, string fatherName){
				
				return *this;
			}
			
			Tree& addMother (string sonName, string motherName){
				
				return *this;
			}
			
			string relation (string ancestorName){
				return "";
			}
			
			string find (string relation2Root){
				return "";
			}
			
			void display (){
				printf(" display test ");
			}
			
			Tree& remove (string name) {
				
				return *this;
			}
		
	};
	
}

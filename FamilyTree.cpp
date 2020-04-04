
#include <string>
using namespace std;

namespace family {
	
	class node {
		string name;
		string relation;
		node *mother, *father;
		public:
			node (string personName) : name(personName) {}
			
	};
	
	class Tree {
		node root;
	
		public: 
			Tree (string rootName) : root(rootName){}
			
			Tree& addFather (string sonName, string fatherName){
				
				return ;
			}
			
			Tree& addMother (string sonName, string motherName){
				
				return ;
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
				
				return ;
			}
		
	};
	
}

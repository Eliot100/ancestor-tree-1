
#include <string>

namespace family {
	class  ancestorTree {
		node root;
	
		public: 
			ancestorTree (string rootName)
			: root (new node(rootName)){}
			
			void addFather (string sonName, string fatherName){
				
			}
			
			void addMother (string sonName, string motherName){
				
			}
			
			string relation (string ancestorName){}
			
			string find (string relation2Root){
				
			}
			
			void display (ancestorTree tree){
				
			}
			
			void remove (string name) {
				
			}
		
		
		
	}
	
	class node {
		string name;
		node mother, father;
		public:
			node (string personName) : name(personName) {}
			//node& getMother(){return this.mother;}
			//node& getFather(){return this.father;}
	}
}

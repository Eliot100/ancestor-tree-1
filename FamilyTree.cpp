
#include <string>
using namespace std;

using namespace family;


	
	class node {
		string name;
		string relation;
		node *mother, *father;
		public:
			node (string personName)
			: name(personName), relation(""), mother(NULL), father(NULL){}
		
	};
	
	class Tree {
		node root;
	
		public: 
			Tree (const string rootName): root(rootName) {
				this.root.relation = "me";
			}
			
			Tree& addFather (const string sonName, const string fatherName){
				
				return *this;
			}
			
			Tree& addMother (const string sonName, const string motherName){
				
				return *this;
			}
			
			string relation (const string ancestorName){
				//node ancestorNode = recursiveGetAncestorNode(this.root, ancestorName);
				//if(ancestorNode == NULL)
				//	return "unrelated";
				//return ancestorNode.name;
			}
			
			string find (const string relation2Root){
				return "";
			}
			
			void display (){
				printf(" display test ");
			}
			
			Tree& remove (const string name) {
				
				return *this;
			}
		
		//private:
			//node recursiveGetAncestorNode(const node &rootNode, string ancestorName){
			//	if(rootNode.name == ancestorName)
			//		return rootNode.relation;
			//	node& ancestorNode;
			//	if(rootNode->father != NULL){
			//		ancestorNode = recursiveGetAncestorNode(rootNode->father, ancestorName);
			//		if(ancestorNode != NULL)
			//			return &ancestorNode;
			//	}
			//	if(rootNode->mother != NULL){
			//		ancestorNode = recursiveGetAncestorNode(rootNode->mother, ancestorName);					
			//		if(ancestorNode != NULL)
			//			return &ancestorNode;
			//	}
			//}
	};
	


#include <string>
using namespace std;
namespace family {
	
    class node {
        private:
            string name;
            string relation;
            node *mother, *father;

        public:
            node (string personName);
            ~node(){
                delete mother;
                delete father;
            }
    };
	class Tree {
		node root;
		public:
			Tree (const string rootName);
			Tree addFather (const string sonName, const string fatherName);
			Tree addMother (const string sonName, const string motherName);
			string find (const string relation2Root);
			void display ();
			Tree remove (const string name) ;
			string relation (const string ancestorName);
	};

}

#include <string>
using namespace std;
namespace family {
	
    class Node {
        private:
            string name;
            string relation;
            family::Node *mother, *father;

        public:
            Node (string personName);
            //Node(){
            //    delete mother;
            //    delete father;
            //}
    };
	class Tree {
		family::Node root;
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

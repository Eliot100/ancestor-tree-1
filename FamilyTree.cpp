#include "FamilyTree.hpp"

namespace family{

    family::Tree::Tree(const string rootName) : root(rootName) {
        this->root.relation = "me";

    }

    Tree& Tree::addFather(const string sonName, const string fatherName) {

        return *this;
    }

    Tree& Tree::addMother(const string sonName, const string motherName) {

        return *this;
    }

    void Tree::display() {

    }

    string Tree::find(const string relation2Root) {

        return "";
    }

    string Tree::relation(const string ancestorName) {
        return "" ;
    }

    Tree& Tree::remove(const string name) {
        return *this;
    }

}

	// string relation (const string ancestorName){
		// node ancestorNode = recursiveGetAncestorNode(this.root, ancestorName);
		// if(ancestorNode == NULL)
			// return "unrelated";
		// return ancestorNode.name;
	// }
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


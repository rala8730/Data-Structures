#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <string>
using namespace std;
//template<typename ItemType>
class Book
{   public:
   int ISBN;
    int Quanity;
    double Price;
    bool OnSale;//checking if its in sale or not
    string Title;
    string FirstName;
    string LastName;
    string Genre;
};

struct BinaryTreeNode//booknode
{
	Book data;//book is a type
	BinaryTreeNode *parent;
	BinaryTreeNode *leftChild;
	BinaryTreeNode *rightChild;
	int ISBN;
    int Quanity;
    double Price;
    bool OnSale;//checking if its in sale or not
    string Title;
    string FirstName;
    string LastName;
    string Genre;

};


//template<class ItemType>
class BinaryTree
{
private:
	BinaryTreeNode *root;
	int numberOfNodes;
public:
	BinaryTree();			// constructor, initialize all private properties
	bool isEmpty();		// returns true if no nodes in BST
	Book* getRootData();	// returns the value of root node
	void setRootData(const Book newData);	// changes the value of the root node
	//ItemType getEntry(const ItemType& target);	// searches for node with value that
								// matches target and returns entire node
	int getNumberSize() const;				// returns number of nodes in BST
	void addIntegerNode(const Book& newEntry);	// adds a new integer node to the BST
	void addStringNode(const Book newEntry);		// adds a new string node to the BST
	void traverseAndPrintInorder();
    void printInorder(BinaryTreeNode *head, int &cost);
    void traverseAndPrintPreorder();
    void printPreorder(BinaryTreeNode *head, int &cost);
    void traverseAndPrintPostorder();
    void printPostorder(BinaryTreeNode *head, int &cost);
    BinaryTreeNode *getNode(int ISBN, int &cost);
    void traverseAndPrintBreadthFirst();
    void deleteNode(BinaryTreeNode * target, int &cost);
    BinaryTreeNode * getSuccessor(Book data, int &cost);
    BinaryTreeNode * findMinHead(BinaryTreeNode * head, int &cost);
    BinaryTreeNode * findMin(int &cost);

    void findabook(int ISBN, int &cost);
    void sellabook(int ISBN, int &cost);
    void findabook(string Title, int &cost);
    void sellabook(string Title, int &cost);
    void deleteall(BinaryTreeNode *newnode);
    void findprice(double price, int &cost);
    void Deletenow();
    void findsale(bool sale, int &cost);
};

#endif // BINARYTREE_H

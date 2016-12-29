#include "BinaryTree.h"
#include <iostream>
#include<queue>
//template<class ItemType>
BinaryTree::BinaryTree()
{
root=NULL;
numberOfNodes=0;


}// constructor, initialize all private properties
//template<class ItemType>
bool BinaryTree::isEmpty()
{
if(root==NULL || numberOfNodes==0)
    return true;
else
    return false;
}// returns true if no nodes in BST
//template<class ItemType>
 Book* BinaryTree::getRootData()
{

    if(isEmpty())//way to say function is true
    return NULL;//returning something that doesnot exit
}// returns the value of root node

//template<class ItemType>
void BinaryTree::setRootData(const Book newData)
{
   root->data;
}// changes the value of the root node

//template<class ItemType>                           // matches target and returns entire node
int BinaryTree::getNumberSize() const
{
    return numberOfNodes;
}// returns number of nodes in BST

void BinaryTree::addIntegerNode(const Book& newEntry)
{
    BinaryTreeNode *newNode = new BinaryTreeNode;
    newNode->data = newEntry;
    newNode->parent = NULL;
    newNode->leftChild = NULL;
    newNode->rightChild = NULL;

    BinaryTreeNode *tmp = root;
    BinaryTreeNode *parent = NULL;

    while(tmp != NULL) {
        parent = tmp;

        if(newNode->Title < tmp->Title)
        {
            tmp = tmp->leftChild;
        } else
        {
            tmp = tmp->rightChild;
        }
    }

    if(parent == NULL) {
        root = newNode;
    } else if(newNode->Title < parent->Title)
    {
        parent->leftChild = newNode;
        newNode->parent = parent;
    } else
    {
        parent->rightChild = newNode;
        newNode->parent = parent;
    }
    return;
}

// adds a new integer node to the BST
//template<class ItemType>
void BinaryTree::sellabook(int ISBN, int &cost)
{
BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.ISBN==ISBN)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
    cout<<"Do you wanna delete this from inventory?[yes/no]"<<endl;
    string yesno;
    cin>>yesno;
    if(yesno=="yes")
    {
        deleteNode(newnode,cost);
    }
}
void BinaryTree::findabook(int ISBN, int &cost)
{
    BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.ISBN==ISBN)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
    int Quantity,OnSale;
    double Price;
    string FirstName,LastName,Genre, Title;
    cout<<"what would you like to do?"<<endl;
    cout<<"a.Change title"<<endl;
    cout<<"Change author"<<endl;
    cout<<"Change genre"<<endl;
    cout<<"Change price"<<endl;
    cout<<"Put on sale"<<endl;
    cout<<"Do not change anything"<<endl;
    cout<<"Enter the new title of the book"<<endl;
    cin>>Title;
    getline(cin,Title);
    newnode->data.Title=Title;
    cout<<"Enter the new Author first name"<<endl;
    cin>>FirstName;
    newnode->data.FirstName=FirstName;
    cout<<"Enter new Author Last Name"<<endl;
    cin>>LastName;
    newnode->data.LastName=LastName;
    cout<<"Enter the new Genre of the book"<<endl;
    cin>>Genre;
    newnode->data.Genre=Genre;
    cout<<"Enter the new price of the book"<<endl;
    cin>>Price;
    newnode->data.Price=Price;
    cout<<"Enter if the book is on sale or not"<<endl;
    cin>>OnSale;
    newnode->data.OnSale=OnSale;
    cout<<"Enter the new Quanity"<<endl;
    cin>>Quantity;
    newnode->data.Quanity=Quantity;

}
void BinaryTree::sellabook(string Title, int &cost)
{
BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.Title==Title)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
    cout<<"Do you wanna delete this from inventory?[yes/no]"<<endl;
    string yesno;
    cin>>yesno;
    if(yesno=="yes")
    {
        deleteNode(newnode,cost);
    }
}
void BinaryTree::findabook(string Title, int &cost)
{
    BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.Title==Title)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
    int Quantity,OnSale;
    double Price;
    string FirstName,LastName,Genre;
    cout<<"what would you like to do?"<<endl;
    cout<<"a.Change title"<<endl;
    cout<<"b.Change first name"<<endl;
    cout<<"c.Change Last name"<<endl;
    cout<<"d.Change genre"<<endl;
    cout<<"e.Change price"<<endl;
    cout<<"f.Put on sale"<<endl;
    cout<<"g.Quanitity"<<endl;
    cout<<"h.Do not change anything"<<endl;
    string here;
    cin>>here;
    if(here=="a")
    cout<<"Enter the new title of the book"<<endl;
    cin>>Title;
    getline(cin,Title);
    newnode->data.Title=Title;

    if(here=="b")
    {
    cout<<"Enter the new Author first name"<<endl;
    cin>>FirstName;
    newnode->data.FirstName=FirstName;
    }
    else if(here=="c")
    {
    cout<<"Enter new Author Last Name"<<endl;
    cin>>LastName;
    newnode->data.LastName=LastName;
    }
    else if(here=="d")
    {
    cout<<"Enter the new Genre of the book"<<endl;
    cin>>Genre;
    newnode->data.Genre=Genre;
    }
    else if(here=="e")
    {
    cout<<"Enter the new price of the book"<<endl;
    cin>>Price;
    newnode->data.Price=Price;
    }
    else if(here=="f")
    {
    cout<<"Enter if the book is on sale or not"<<endl;
    cin>>OnSale;
    newnode->data.OnSale=OnSale;
    }
    else if(here=="g")
    {
    cout<<"Enter the new Quanity"<<endl;
    cin>>Quantity;
    newnode->data.Quanity=Quantity;
    }
    else
    {}


}


void BinaryTree::traverseAndPrintInorder() {
    int cost = 0;
    cout << "Traverse And Print Inorder: " << endl;

    cost++;
    printInorder(root, cost);

    cout << endl << "Cost of this traverseAndPrintInorder(): " << cost << endl << endl;
}


void BinaryTree::printInorder(BinaryTreeNode *head, int &cost) {
    cost++;
    if(head == NULL) {

        cost++;
        return;
    }

    cost++;
    printInorder(head->leftChild, cost);


    cout<<"---single book --"<<endl;
    cout <<"ISBN:"<< head->data.ISBN<<" "<<endl;
    cout <<"Title:"<< head->data.Title<<" "<<endl;
    cout <<"1stname:"<<head->data.FirstName<<" "<<endl;
    cout <<"2ndname:"<< head->data.LastName<<" "<<endl;
    cout <<"Genre:"<< head->data.Genre<<" "<<endl;
    cout <<"Price:"<< head->data.Price<<" "<<endl;
    cout <<"ONsale:"<< head->data.OnSale<<" "<<endl;
    cout <<"Quanity:"<< head->data.Quanity<<" "<<endl;

    cost++;
    printInorder(head->rightChild, cost);
}

/* *************************************************************** */
/*          Problem 2: Add depth first, preorder traversal         */
/* *************************************************************** */

void BinaryTree::traverseAndPrintPreorder() {
    int cost = 0;
    cout << "Traverse And Print Preorder: " << endl;

    cost++;
    printPreorder(root, cost);

    cout << endl << "Cost of this traverseAndPrintPreorder(): " << cost << endl << endl;
}


void BinaryTree::printPreorder(BinaryTreeNode*head, int &cost) {
    cost++;
    if(head == NULL) {

        cost++;
        return;
    }

    cout << head->ISBN << " ";

    cost++;
    printPreorder(head->leftChild, cost);

    cost++;
    printPreorder(head->rightChild, cost);
}

/* **************************************************************** */
/*          Problem 3: Add depth first, postorder traversal         */
/* **************************************************************** */

void BinaryTree::traverseAndPrintPostorder() {
    int cost = 0;
    cout << "Traverse And Print Postorder: " << endl;

    cost++;
    printPostorder(root, cost);

    cout << endl << "Cost of this traverseAndPrintPostorder(): " << cost << endl << endl;
}


void BinaryTree::printPostorder(BinaryTreeNode *head, int &cost) {
    cost++;
    if(head == NULL) {

        cost++;
        return;
    }

    cost++;
    printPostorder(head->leftChild, cost);

    cost++;
    printPostorder(head->rightChild, cost);

    cout << head->ISBN << " ";
}

/* **************************************** */
/*          Problem 4: Add a search         */
/* **************************************** */

BinaryTreeNode *BinaryTree::getNode(int ISBN, int &cost)
 {

   cost++;
    BinaryTreeNode *tmp = root;

    cost++; // false while
    while(tmp != NULL)
    {
        cout<<tmp->data.ISBN<<endl;
        cost++; // true while

        cost++; // cost for the if statement
        if(ISBN==(tmp->data.ISBN))
         {

            cost++; // cost for the return
            return tmp;
        }
        else if(ISBN < tmp->data.ISBN)
         {
            cost++; // cost for the else if statement

            cost++;
            tmp = tmp->leftChild;
        }

        else
        {
            cost++; // cost for the else if statement

            cost++;
            tmp = tmp->rightChild;
        }
    }

    // did not find target within BST
    cost++; // for return NULL
    return NULL;


}

/* ******************************************************* */
/*          Problem 6: Add breadth first traversal         */
/* ******************************************************* */

void BinaryTree::traverseAndPrintBreadthFirst()
{
    cout << "Traverse And Print BreadthFirst: " << endl;
    int cost = 0;

    cost++;
    if(root == NULL) {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty()) {
        cost++;

        cost++;
        current = q.front();
        cout<<"---single book --"<<endl;
        cout <<"ISBN:"<< current->data.ISBN<<" "<<endl;//printing isbn
        cout <<"Title:"<< current->data.Title<<" "<<endl;//printing isbn
        cout <<"1stname:"<<current->data.FirstName<<" "<<endl;//printing isbn
        cout <<"2ndname:"<< current->data.LastName<<" "<<endl;//printing isbn
        cout <<"Genre:"<< current->data.Genre<<" "<<endl;//printing isbn
        cout <<"Price:"<< current->data.Price<<" "<<endl;//printing isbn
        cout <<"ONsale:"<< current->data.OnSale<<" "<<endl;//printing isbn
        cout <<"Quanity:"<< current->data.Quanity<<" "<<endl;//printing isbn

        cost++;
        if (current->leftChild != NULL) {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL) {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();

    }

    cout << endl << "Cost of this traverseAndPrintBreadthFirst(): " << cost << endl << endl;

}
void BinaryTree::deleteNode(BinaryTreeNode * target, int &cost)
{
     cost++;
    if(target == NULL){
        cost++;
        return;
 } else {
  // Case 1:  No child
      cost++;
      if(target->leftChild == NULL && target->rightChild == NULL) {

          cost +=4;
          // set parent
            if(target->parent != NULL)
            {

                    if(target->parent->leftChild != NULL && (target->parent->leftChild->ISBN == target->ISBN))
                        target->parent->leftChild = NULL;
                    else
                    {
                        target->parent->rightChild = NULL;
                    }
            }
          // it is the root
            else
            {
                root = NULL;
            }
                // delete target
       delete target;
       target = NULL;
      }
      //Case 2: One child
      else if(target->leftChild == NULL) {
          cost++; // else if

          cost += 6;
          // set child
          BinaryTreeNode *targetChild = target->rightChild;
          // set parent
          //check if root
          if(target->parent != NULL) {

                    if(target->parent->leftChild != NULL && (target->parent->leftChild->ISBN == target->ISBN))
                        target->parent->leftChild = targetChild;
                    else
                        target->parent->rightChild = targetChild;
          }
          // it is the root
          else
                    root = targetChild;
                // set child
                targetChild->parent = target->parent;
       // delete target
       delete target;
       target = NULL;
      }
      else if(target->rightChild == NULL) {
          cost++; // else if

          cost += 6;
       // set child
          BinaryTreeNode *targetChild = target->leftChild;
          // set parent
          if(target->parent != NULL) {

                    if(target->parent->leftChild != NULL && (target->parent->leftChild->ISBN == target->ISBN))
                        target->parent->leftChild = targetChild;
                    else
                        target->parent->rightChild = targetChild;
          }
          // it is the root
          else
                    root = targetChild;
                // set child
                targetChild->parent = target->parent;
       // delete target
       delete target;
       target = NULL;
      }
      // case 3: 2 children
      else {
            cost++; // else if

            cost += 4;
            BinaryTreeNode *rightMin = findMinHead(target->rightChild, cost);
            target->data = rightMin->data;
            deleteNode(rightMin, cost);
            }
     }
 cost++;
 return;
}



BinaryTreeNode *BinaryTree:: findMinHead(BinaryTreeNode * head, int &cost)
{
    cost++;
	BinaryTreeNode *current = head;

	cost++;
	while (current->leftChild != NULL) {
	    cost++;

	    cost++;
		current = current->leftChild;
	}

    cost++;
	//return current;
	//return leftChild;
    cout << endl << "Cost of FindMin" << cost << endl << endl;

}

BinaryTreeNode *BinaryTree:: findMin(int &cost)
{
    cost += 2;
	return findMinHead(root,cost);
}

BinaryTreeNode *BinaryTree::getSuccessor(Book data, int &cost)
{
    cost++;
	BinaryTreeNode * current;// = getNode(data, cost);

	cost++;
	if (current == NULL) {

	    cost++;
		return NULL;
	}

	cost++;
	if(current->rightChild != NULL) {

        cost += 2;
		return findMinHead(current->rightChild, cost);
	} else {

	    cost++;
		BinaryTreeNode * successor = NULL;

		cost++;
		BinaryTreeNode * ancestor = root;

		cost++;
		while (ancestor != current) {
		    cost++;

		    cost++;
			if (current->data.Price < ancestor->data.Price) {

			    cost++;
				successor = ancestor;

				cost++;
				ancestor = ancestor->leftChild;
			} else {

			    cost++;
				ancestor = ancestor->rightChild;
			}
		}

		cost++;
		return successor;
	}

	cost++;
	return current;
    cout << endl << "Cost of Sucessor" << cost << endl << endl;
}

void BinaryTree::Deletenow()
{
    deleteall(root);
}

void BinaryTree::deleteall(BinaryTreeNode *newnode)
{
    if(newnode == NULL)
    {
        delete newnode;
    }
     else if(newnode->leftChild != NULL)
    {
        deleteall(newnode->leftChild);

    } else if(newnode->rightChild != NULL)
    {
        deleteall(newnode->rightChild);
    }
    delete newnode;

}
void BinaryTree::findprice(double Price, int &cost)
{
    BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.Price<=Price)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
}
void BinaryTree::findsale(bool Onsale, int &cost)
{
    BinaryTreeNode *newnode;

    cost++;
    if(root == NULL)
     {

        cost++;
        return;
    }

    queue<BinaryTreeNode*> q;

    cost++;
    q.push(root);

    BinaryTreeNode *current;

    cost++;
    while (!q.empty())
    {
        cost++;

        cost++;
        current = q.front();

         if(current->data.OnSale==Onsale)
        {
            newnode=current;
            if(newnode==NULL)
            {
                cout<<"Book not found"<<endl;
            }
            else
            {
             //printing
             cout<<"ISBN "<<current->data.ISBN<<endl;
             cout<<"Title "<<current->data.Title<<endl;
             cout<<"First Name "<<current->data.FirstName<<endl;
             cout<<"Last Name "<<current->data.LastName<<endl;
             cout<<"Genre "<<current->data.Genre<<endl;
             cout<<"Price "<<current->data.Price<<endl;
             cout<<"Onsale "<<current->data.OnSale<<endl;
             cout<<"Quantity "<<current->data.Quanity<<endl;

             }

         }

        cost++;
        if (current->leftChild != NULL)
         {

            cost++;
            q.push(current->leftChild);
        }

        cost++;
        if (current->rightChild != NULL)
        {

            cost++;
            q.push(current->rightChild);
        }

        cost++;
        q.pop();
    }
}


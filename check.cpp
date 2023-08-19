#include <iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *next;
    // constructor declare
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // cout<<"checking";
   
    Node node1(50);
    //Node * node1= Node(50); //dynamic declaration
// cout<<node1 -> data<<endl;
// cout<<node1->next <<endl;
        cout<<node1.data<<endl;
        cout<<node1.next<<endl;



}
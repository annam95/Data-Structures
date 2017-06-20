#include<iostream>
#include<queue>

struct Node 
{
    char data;
    Node *left;
    Node *right;
}


class BinaryTree 
{
private:
    Node *root_m;
    std::queue<Node> levelQueue; 
public:
    BinaryTree(Node *root) : root_m(root); 
    {
    }

    void LevelOrderTraversal 
    {
        if (!root_m)
            return;
        
        levelQueue.push(*root_m);

        while (!levelQueue.empty())
        {
            Node current = levelQueue.front();
            std::cout << current->data << " ";
            if (current.left) 
            {
                Node left = *(current.left);
                levelQueue.push(left);
            }
            if (current.right)
            {
                Node right = *(current.right);
                levelQueue.push(right);
            }
            levelQueue.pop();
        }
    }

    void InOrderTraversal()
    {

    }

    void PreOrderTraversal()
    {

    }

    void PostOrderTraversal()
    {

    }

    void DeleteNode()
    {

    }

    void InsertNode(Node *newNode);
    {

    }

    bool IsBinarySearchTree()
    {

    }
}

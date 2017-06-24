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

public:
    BinaryTree(Node *root) : root_m(root); 
    {
    }

    void LevelOrderTraversal 
    {
        if (!root_m)
            return;

        std::queue<Node> levelQueue; 
        
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
        InOrderTraversal(root_m);
    }

    void InOrderTraversal(Node *node)
    {
        InOrderTraversal(node->left);

        if (node)
            std::cout << node->data << " ";
        else
            return;

        InOrderTraversal(node->right);
    }

    void PreOrderTraversal()
    {
        PreOrderTraversal(root_m);    
    }


    void PreOrderTraversal(Node *node)
    {
        if (node)
            std::cout << node->data << " ";
        else
            return;

        PreOrderTraversal(node->left);
        PreOrderTraversal(node->right);
    }

    void PostOrderTraversal()
    {
        PostOrderTraversal(root_m);    
    }

    void PostOrderTraversal(Node *node)
    {
        PostOrderTraversal(node->left);
        PostOrderTraversal(node->right);

        if (node)
            std::cout << node->data << " ";
        else
            return;
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

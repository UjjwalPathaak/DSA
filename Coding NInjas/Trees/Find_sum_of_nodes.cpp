#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int data;
    vector<TreeNode *> children;

    TreeNode(int data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

int sumofnodes(TreeNode *root)
{
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum = sum + sumofnodes(root->children[i]);
    }
    
    return sum;
}

TreeNode *takeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);

    queue<TreeNode *> children;

    children.push(root);
    while (children.size() != 0)
    {
        TreeNode *front = children.front();
        children.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode *child = new TreeNode(childData);
            front->children.push_back(child);
            children.push(child);
        }
    }

    return root;
}

int main()
{
    TreeNode *root = takeInputLevelWise();
    cout << sumofnodes(root);
}

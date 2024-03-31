#include <iostream>
using namespace std;

class Tree
{
public:
    int data;
        Tree *Left;
        Tree *Right;

        Tree(int n)
        {
            data = n;
            Left = NULL;
            Right = NULL;
        }
};

void LineSkip()
{
    cout << "\n\n-----------------------------------------------------------------------------------------\n";
}
void PreOrder(Tree *Root)
{
    if (Root == NULL)
        return;

    cout << Root->data << " ";
    PreOrder(Root->Left);
    PreOrder(Root->Right);
}

void Inorder(Tree *Root)
{
    if (Root == NULL)
        return;
    Inorder(Root->Left);
    cout << Root->data << " ";
    Inorder(Root->Right);
}

void PostOrder(Tree *Root)
{
    if (Root == NULL)
        return;
    PostOrder(Root->Left);
    PostOrder(Root->Right);
    cout << Root->data << " ";
}

int main()
{
    Tree *Root = new Tree(1);
    Root->Left = new Tree(2);
    Root->Right = new Tree(3);

    Root->Left->Left = new Tree(4);
    Root->Left->Right = new Tree(5);

    Root->Right->Left = new Tree(6);
    Root->Right->Right = new Tree(7);

    PreOrder(Root);
    LineSkip();

    Inorder(Root);
    LineSkip();

    PostOrder(Root);
    LineSkip();

    return 0;
}
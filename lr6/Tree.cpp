
#include<Tree.h>

void Tree :: InsertI(Node* &rt, const char ch) 
    {
        if (rt == nullptr) rt = new Node(ch);
        else if (ch < rt->data) InsertI(rt->left, ch);
        else InsertI(rt->right, ch);
    }

Node* Tree :: FindI(char ch, Node* &rt) 
    {
        if (rt == nullptr) return nullptr;
        else if (ch > rt->data) return FindI(ch, rt->right);
        else if (ch < rt->data) return FindI(ch, rt->left);
        else return rt;
        
    }

int Tree :: CountI(char ch, Node *rt) 
    {
        if (rt == nullptr) return 0; 
        return 1 + CountI(ch, rt->left) + CountI(ch, rt->right);
    }

int Tree :: Count(char ch) 
    {
        Node* rt = FindI(ch, root);
        return CountI(ch, rt) - 1;
    }

void Tree :: Insert(const char &ch) 
    {
        Node* rt = FindI(ch, root);
        if (rt != nullptr) {
            rt->count++;
            return;
        }
        InsertI(root, ch);
    }
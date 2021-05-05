
struct Node 
{
    short int count = 1;
    char data;
    Node* left = nullptr;
    Node* right = nullptr;
	
    Node(const char &ch) 
    {
        data = ch;
        right = nullptr;
        left = nullptr;
    }
};


class Tree {
private:
    Node* root;

    void InsertI(Node* &rt, const char ch);

    Node* FindI(char ch, Node* &rt);

    int CountI(char ch, Node *rt);

public:
    Tree() {root = nullptr;}

    int Count(char ch);

    void Insert(const char &ch);
};

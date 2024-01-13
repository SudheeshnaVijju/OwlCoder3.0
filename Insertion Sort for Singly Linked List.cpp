//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* h)
    {
        //code here
        vector<int> v;
        while(h){
            v.emplace_back(h->data);
            h=h->next;
        }
        sort(v.begin(),v.end());
        Node *a=new Node(0);
        Node *p=a;
        for(auto it: v){
            Node *t=new Node(it);
            a->next=t;
            a=a->next;
        }
        return p->next;
    }
    
};

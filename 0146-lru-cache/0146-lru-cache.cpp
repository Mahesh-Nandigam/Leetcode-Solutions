class LRUCache {
public:
int limit;
class Node{
public:
Node* prev;
Node* next;
int key;
int value;

Node(int k,int v){
key=k;
value=v;
prev=next=NULL;
}
};

unordered_map<int,Node*>m;

Node* head=new Node(-1,-1);
Node* tail=new Node(-1,-1);

void addNode(Node* newNode){//O(1)
Node* oldNext=head->next;
head->next=newNode;
oldNext->prev=newNode;
newNode->next=oldNext;
newNode->prev=head;
}


//delNode
void delNode(Node* oldNode){  //O(1)
Node* oldNext=oldNode->next;
Node* oldPrev=oldNode->prev;
oldPrev->next=oldNext;
oldNext->prev=oldPrev;
}

    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())
        return -1;
        Node* ansNode=m[key];
        int ans=ansNode->value;
        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key]=ansNode;
        return ans;
    }
    
    void put(int key, int value) {

    if(m.find(key)!=m.end()){
    Node* oldNode=m[key];
    delNode(oldNode);
    m.erase(key);
    }

    if(limit==m.size()){
        //delete LRU data ie last node of the DLL
        Node* oldNode = tail->prev;
        m.erase(oldNode->key);
        delNode(oldNode);
        
    }

     Node* newNode=new Node(key,value);
     addNode(newNode);
     m[key]=newNode;
    }


};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
class Node{
public:
        int value;
        int key;
        Node* prev;
        Node* next;
    
        Node(int key, int value){
            this->key = key;
            this->value = value;
            prev = NULL;
            next = NULL;
        }
};

class LRUCache {
public:
        int capacity;
        unordered_map<int, Node*>mp;
        Node* head;
        Node* tail;

    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node* node){
        Node *prevNode = node->prev;
        Node *afterNode = node->next;

        prevNode->next = afterNode;
        afterNode->prev = prevNode;
    }

    void insertAfterHead(Node* node){
        Node *afterHead = head->next;

        head->next = node;
        node->prev = head;

        node->next = afterHead;
        afterHead->prev = node;
    }
    
    int get(int key) {
        if(!mp.count(key))
            return -1;
        
        Node *node = mp[key];
        deleteNode(node);
        insertAfterHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(capacity == 0)
            return;

        if(mp.count(key)){
            Node* node = mp[key];
            node->value = value;
            deleteNode(node);
            insertAfterHead(node);
        }
        else{
            if(mp.size() == capacity){
                Node *node = tail->prev;
                mp.erase(node->key);
                deleteNode(node);
            }

            Node* newNode = new Node(key, value);
            mp[key] = newNode;
            insertAfterHead(newNode);
        }
    }
};

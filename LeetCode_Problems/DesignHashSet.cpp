// problem link
// https://leetcode.com/problems/design-hashset/description/


class Node{
    public:
        int data;
        Node *next;

        Node(int key){
            data = key;
            next = nullptr;
        }
};

class MyHashSet {
public:
    Node *head, *last;
    MyHashSet() {
        head = nullptr;
    }

    void add(int key) {

        if(!contains(key)){
            Node *nn = new Node(key);
            if(head == nullptr){
                head = nn;
            }else{
                Node *temp = head;

                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = nn;
            }
        }

    }

    void remove(int key){
        if(contains(key)){
            Node *temp = head;
            Node *nn = temp;

            while(temp != nullptr){

                if(temp->data == key){
                    if(temp == head){
                        head = temp->next;
                        return ;
                    }else{
                        nn->next = temp->next;
                    }

                    delete temp;
                    return ;
                }

                nn = temp;
                temp = temp->next;
            }
        }

    }

    bool contains(int key) {
        bool flag = false;
        Node *temp = head;

        while(temp != nullptr){
            if(temp->data == key){
                flag = true;
                break;
            }
            temp = temp->next;
        }
        return flag;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

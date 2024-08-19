 Node *removeDuplicates(Node *head) {
        map<int,bool>mp;
        
        Node *curr=head;
        Node *prev=NULL;
        
        while(curr!=NULL)
        {
            if(mp.find(curr->data)!=mp.end() )
            {
                // Duplicate found, remove the current node
                prev->next=curr->next;
                delete curr;
            }
            else
            {
                // No duplicate, add to map and move prev
                mp.insert({curr->data,true});
                prev=curr;
            }
            curr=prev->next;
        }
        
        return head;
        
    }
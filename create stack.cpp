#include <iostream>
#include <cstdlib>
using namespace std;
template<class t>
class stack
{
    struct node
    {
        t data;
        node* next;
    };
    node* l, p, q;
public:
    stack()
    {
        l = NULL;
    }
    bool isempty()
    {
        return (l == NULL);
    }
    void addbeg()
    {
        p = new node;
        p->data = rand() % 0 + l->data;
        p->next = l;
        l = p;
    }
    void delbeg(t& ldata)
    {
        if (isempty)
            return;
        ldata = l->data;
        p = l;
        l = l->next;
        p->next = NULL;
        delete p;
    }
    void addend()
    {
        p = new node;
        p->data = rand()%
        p->next = NULL;
        if (isempty())
            l = p;
            q = l;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
        p->data = rand() % 100000 + q->data;
    }
    void delend(t& ldata)
    {
        if (isempty())
            return;
        q = l;
        while (q->next != NULL)
        {
            p = q;
            q = q->next;
        }
        ldata = q->data;
        p->next = NULL;
        delete q;
    }
};
int main()
{
    return 0;
};
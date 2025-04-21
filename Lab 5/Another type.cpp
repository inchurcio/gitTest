#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

struct node *add_at_end(struct node *ptr, int data);
struct node *add_at_beg(struct node *head, int data);
void add_at_pos(struct node *head,int data, int pos);
struct node *del_first(struct node *head);
struct node *del_last(struct node *ptr);
struct node *del_at_pos(struct node *head, int pos);
struct node *delete_using_data(struct node *head, int data);
int search(struct node *head, int data);
void reverse(struct node *head);
int middle_node(struct node *head);
struct node *remove_duplicates(struct node *head);
struct node *merge_sorted(struct node *head1, struct node *head2);
struct node *remove_a_cycle(struct node *head);

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 4);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 1);
    ptr = head;

    head = add_at_beg(head, 0);
    ptr = head;

    add_at_pos(head, -3, 4);
    // add_beg(&head, -1);

    head = del_first(head);

    head = del_at_pos(head, 3);

    while(ptr != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    
    return 0;
}

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}
struct node *add_at_beg(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}

void add_at_pos(struct node *head,int data, int pos)
{
    struct node *ptr = head;

    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    for(int i=1; i<pos-1; i++)
    {
        ptr = ptr->link;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

struct node *del_first(struct node *ptr)
{
    struct node *temp = ptr;
    ptr = ptr->link;
    free(temp);
    temp = NULL;
    return ptr;
}

struct node *del_last(struct node *ptr)
{
    struct node *temp = ptr;
    if (temp->link == NULL)
    {
        free(temp);
        temp = NULL;
        return temp;
    }
    while(temp->link->link != NULL)
    {
        temp = temp->link;
    }
    free(temp->link);
    temp->link = NULL;
    return ptr;
}

struct node *del_at_pos(struct node *head, int pos)
{
    struct node *ptr = head;
    struct node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = temp->link;
    free(temp);
    return head;
}

struct node *delete_using_data(struct node *head, int data)
{
    struct node *ptr = head;
    struct node *temp = head;
    if (head->data == data)
    {
        head = head->link;
        free(temp);
        return head;
    }
    while (ptr->link != NULL && ptr->link->data != data)
    {
        ptr = ptr->link;
    }
    // if (ptr->link == NULL)
    // {
    //     cout << "Data not found." << endl;
    //     return head;
    // }
    temp = ptr->link;
    ptr->link = temp->link;
    free(temp);
    return head;
}

int search(struct node *head, int data)
{
    struct node *ptr = head;
    int pos = 1;
    while (ptr != NULL)
    {
        if (ptr->data == data)
        {
            return pos;
        }
        pos ++;
        ptr = ptr->link;
    }
    return 0;
}

void reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;
    while (current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int middle_node(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    return slow->data;
}

struct node *remove_duplicates(struct node *head)
{
    struct node *ptr = head;
    struct node *temp = head;
    while (ptr != NULL && ptr->link != NULL)
    {
        if (ptr->data == ptr->link->data)
        {
            temp = ptr->link;
            ptr->link = temp->link;
            free(temp);
        }
        else
        {
            ptr = ptr->link;
        }
    }
    return head;
}

struct node *merge_sorted(struct node *head1, struct node *head2)
{
    struct node *merged = NULL;
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;

    if (head1->data <= head2->data)
    {
        merged = head1;
        merged->link = merge_sorted(head1->link, head2);
    }
    else
    {
        merged = head2;
        merged->link = merge_sorted(head1, head2->link);
    }
    return merged;
}

struct node *remove_a_cycle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
        if (slow == fast)
        {
            break;
        }
    }
    if (slow == fast)
    {
        slow = head;
        while (slow->link != fast->link)
        {
            slow = slow->link;
            fast = fast->link;
        }
        fast->link = NULL;
    }
    return head;
}
#ifndef AVLTREE_H
#define AVLTREE_H

#include <string>
#include "TreeNode.h"
#include "AVLImpl.h"

class AVLTree
{
    unsigned char height(AVLNode *node) const;
    char heightDiff(AVLNode *node) const;
    void updateHeight(AVLNode *node);

    AVLNode* ins(AVLNode *node, int key, int val);
    AVLNode* rmv(AVLNode *node, int key);
    AVLNode* findMin(AVLNode *node) const;
    AVLNode* rmMin(AVLNode *node);

    AVLNode* rotateL(AVLNode *node);
    AVLNode* rotateR(AVLNode *node);
    AVLNode* balance(AVLNode *node);

protected:
    AVLNode *root;
    AVLImpl *pimpl;

public:
    AVLTree();
    AVLTree(AVLImpl *p);
    AVLTree(AVLTree &other);
    AVLTree(AVLTree &&other);
    AVLTree& operator=(AVLTree &other);
    AVLTree& operator=(AVLTree &&other);
    virtual ~AVLTree();

    // Binary tree methods
    bool isEmpty() const;
    void insert(int key, int val);
    void remove(int key);
    int find(int key) const;
    void clear();
};

#endif // AVLTREE_H
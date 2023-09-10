    if (root == NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = key;
        newNode->left = newNode->right = NULL;
        root = newNode;
        return;
    }

    if (key < root->data) {
        if (root->left == NULL) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = key;
            newNode->left = newNode->right = NULL;
            root->left = newNode;
        } else {
            insert_key(root->left, key);
        }
    } else if (key > root->data) {
        if (root->right == NULL) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = key;
            newNode->left = newNode->right = NULL;
            root->right = newNode;
        } else {
            insert_key(root->right, key);
        }
    }

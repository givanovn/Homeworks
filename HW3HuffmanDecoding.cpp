void decode_huff(node * root, string s){
    node *pRoot = root;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '0')
            pRoot = pRoot->left;
        else if(s[i] == '1')
            pRoot = pRoot->right;
        if(pRoot->data != '\0'){
            cout << pRoot->data;
            pRoot = root;
        }
        ++i;
    }
}

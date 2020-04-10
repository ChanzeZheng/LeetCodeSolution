struct TreeNode* sortedArray2BST(int* nums, int start,int end){
    // printf("start=%d,end=%d",start,end);
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));       //新建一个节点
    root->left = NULL;
    root->right = NULL;
    if(start==end){
        root->val = nums[start];
        // printf("\n");
        return root;
    }
    
    int mid = (start+end)/2;                //中间的下标，即为根
    // printf(",mid=%d\n",mid);
    root->val = nums[mid];
    if(mid!=start){
        root->left = sortedArray2BST(nums,start,mid);
    }
    if(mid+1!=end){
        root->right = sortedArray2BST(nums,mid+1,end);
    }

    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(!numsSize){
        return NULL;
    }
    return sortedArray2BST(nums,0,numsSize);
    

}
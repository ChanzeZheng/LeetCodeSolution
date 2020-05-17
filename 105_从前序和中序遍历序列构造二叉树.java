/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    // public static int index = 0;
    // public static Map<Integer,Integer> map = new HashMap<Integer,Integer>();
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(preorder.length==0){
            return null;
        }
        if(preorder.length==1){
            return new TreeNode(preorder[0]);
        }

        StaticInfo info = new StaticInfo();
        
        for(int i=0;i<inorder.length;i++){      //先进行一次遍历，将各个值在中序遍历数组中的位置保存下来
            info.map.put(inorder[i],i);              //数值为key，位置下标为value
        }
        return helper(preorder,inorder,0,inorder.length,info);

    }
    class StaticInfo{
        Integer index = 0;
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
    }
    public TreeNode helper(int[] preorder,int[] inorder,int left,int right,StaticInfo info){
        if(left>right||info.index==preorder.length){
            return null;
        }
        TreeNode root = new TreeNode(preorder[info.index]);          //当前树的根
        int mid = info.map.get(preorder[info.index]);                 //获取中序遍历中的位置
        info.index++;
        root.left = helper(preorder,inorder,left,mid-1,info);
        root.right = helper(preorder,inorder,mid+1,right,info);
        return root;
    }
}
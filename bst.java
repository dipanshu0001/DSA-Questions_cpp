import java.util.*;
class Node{
    int val;
    Node left;
    Node right;
    Node(int c){
        val=c;
        left=right=NULL;
    }
}
class BST{
    Node root;
    BST(){
        root=NULL;
    }
    public static Node createTree(){
        int n;
        Scanner sc-new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            root=insert(root,sc.nextInt());
        }
    }
    public static Node insert(Node root,int val)
    {

        if(root== NULL){
            root=new Node(val);
        }if(root.val<val){
            root.right=insert(root,val);
        }
        else if(root.val>val){
            root.left=insert(root,val);
        }
        return root;
    }
    public static void inorder(Node root){
        if(root==NULL)return ;
        inorder(root->left);
        System.out.print(root.val+" ");
        inorder(root.right);
    }

};
class main(string args[]){
     
}
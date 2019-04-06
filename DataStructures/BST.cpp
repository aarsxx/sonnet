#include<stdio.h>
#include<stdlib.h>

struct data{
	int x;
	struct data *l; //left
	struct data *r; //right
};

struct data *insert(struct data *curr,int x){
	
	if(curr==NULL){
		curr=(struct data *)malloc(sizeof(struct data));
		curr->x=x;
		curr->l=NULL;
		curr->r=NULL;
	}
	else{
		if(x<curr->x){
			//insert left
			curr->l=insert(curr->l,x);
		}
		else{
			//insert right
			curr->r=insert(curr->r,x);
		}
	}
	return curr;
	
}

void inOrder(struct data *curr){
	
	if(curr==NULL){
		return;
	}
	inOrder(curr->l);
	printf("%2d ",curr->x);
	inOrder(curr->r);
	
}

void preOrder(struct data *curr){
	
	if(curr==NULL){
		return;
	}
	printf("%2d ",curr->x);
	preOrder(curr->l);
	preOrder(curr->r);
	
}

void postOrder(struct data *curr){
	
	if(curr==NULL){
		return;
	}
	postOrder(curr->l);
	postOrder(curr->r);
	printf("%2d ",curr->x);
	
}

struct data *predecessor(struct data *curr){
	//right most child(biggest node) from left subtree
	
	struct data *temp=curr->l;
	while(temp->r!=NULL){
		temp=temp->r;
	}
	return temp;
	
}

struct data *successor(struct data *curr){
	//left most child from right subtree
	
	struct data *temp=curr->r;
	while(temp->l!=NULL){
		temp=temp->l;
	}
	return temp;
	
}

struct data *delNode(struct data *curr,int x){
	
	if(curr==NULL){
		return NULL;
	}
	
	if(x<curr->x){
		//delete left
		curr->l=delNode(curr->l,x);
	}
	else if(x>curr->x){
		//delete right
		curr->r=delNode(curr->r,x);
	}
	else{
		//find data
		
		/*case when 0 children
		
		  case when 1 child
			a : left , b : right
		
		  case when 2 children
		    predecessor/successor
		*/
		
		if(curr->l==NULL || curr->r==NULL){ //0 or 1 child
			struct data *temp=NULL;
			//init
			if(curr->l!=NULL){
				temp=curr->l;
			}
			else{
				temp=curr->r;
			}
			
			//when 0 children
			if(temp==NULL){
				free(curr);
				curr=NULL;
			}
			else{ //when 1 children (left or right)
				*curr=*temp; //buat pindah satu keseluruhan di bawahnya
				free(temp);
			}
			
		}
		else{ //2 children
			struct data *temp=predecessor(curr);
			curr->x=temp->x;
			curr->l=delNode(curr->l,temp->x);
			//or struct data *temp=successor(curr);
			//   curr->x=temp->x;
			//   curr->r=delNode(curr->r,temp->x);
		}
		
	}
	return curr;
}

int main(){
	
	struct data *root=NULL;
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,20);
	printf("Post Order : ");
	postOrder(root);
	
	puts("");
	
	printf("Pre Order : ");
	preOrder(root);
	
	puts("");
	
	printf("In Order : ");
	inOrder(root);
	
	puts("");
	
	root=delNode(root,10);
	printf("In Order : ");
	inOrder(root);
	
	puts("");
	
	return 0;
}

#ifndef RB_TREE_H
#define RB_TREE_H
//#pragma once
#include "RB_Tree_Node.h"
#include "RB_Tree_Node.cpp"
template <class T>		//模板类
class RB_Tree
{
public:
	RB_Tree(T Root_Data);		//用模板类为参数来构造红黑树节点
	~RB_Tree();
	void Left_Rotate(RB_Tree_Node<T>* current_Node);		//左旋函数
	void Right_Rotate(RB_Tree_Node<T>* current_Node);		//右旋函数
	void Insert_Node(T insert_data);						//插入新节点
	void Fix_Tree(RB_Tree_Node<T>* current_Node);			//插入节点后修复函数
	int Delete_Node(T delete_data);							//删除新节点
	void erase_Node(RB_Tree_Node<T>* Node_del);				//清除节点
	RB_Tree_Node<T>* Find_Successor_Node(RB_Tree_Node<T>* current_Node);	//找寻当前节点的中序后继节点
	RB_Tree_Node<T>* Root_Node;
};

#endif

#ifndef RB_TREE_H
#define RB_TREE_H
//#pragma once
#include "RB_Tree_Node.h"
#include "RB_Tree_Node.cpp"
template <class T>		//ģ����
class RB_Tree
{
public:
	RB_Tree(T Root_Data);		//��ģ����Ϊ���������������ڵ�
	~RB_Tree();
	void Left_Rotate(RB_Tree_Node<T>* current_Node);		//��������
	void Right_Rotate(RB_Tree_Node<T>* current_Node);		//��������
	void Insert_Node(T insert_data);						//�����½ڵ�
	void Fix_Tree(RB_Tree_Node<T>* current_Node);			//����ڵ���޸�����
	int Delete_Node(T delete_data);							//ɾ���½ڵ�
	void erase_Node(RB_Tree_Node<T>* Node_del);				//����ڵ�
	RB_Tree_Node<T>* Find_Successor_Node(RB_Tree_Node<T>* current_Node);	//��Ѱ��ǰ�ڵ�������̽ڵ�
	RB_Tree_Node<T>* Root_Node;
};

#endif

#pragma once

namespace Queue
{
	struct Node
	{
		struct Node* next;
		int val;
	};

	struct Queue
	{
		struct Node* head;
		struct Node* tail;
	};
	int min = 10;
}

//namespace test
//{
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//	struct Queue
//	{
//		struct Node* head;
//		struct Node* tail;
//	};
//	int min = 10;
//}

/*
 * routingtable.c
 *
 *  Created on: Nov 21, 2013
 *      Author: Anil Jangam
 */

#include<stdio.h>

#include"pastrynode.h"
#include "pastrynetwork.h"

int main() {

	int nodeId = 0;
	int nodeId2 = 0;
	PastryNode node1;
	PastryNode node2;
	PastryNode node3;
	PastryNode node4;
	PastryNode node5;
	PastryNode node6;
	PastryNode node7;

	printf("Hello World!\n");
	InitNodeIds();
	//PrintNodeIds();

	nodeId = GetNextNode();			// 68598
	AddPastryNode(&node1, nodeId);

	nodeId = 68511;
	AddPastryNode(&node2, nodeId);

	nodeId = 62540;
	AddPastryNode(&node3, nodeId);

	nodeId = 62541;
	AddPastryNode(&node4, nodeId);

	nodeId = 62542;
	AddPastryNode(&node5, nodeId);

	//PrintNodeState(&node);
	PrintPastryNetwork();

	nodeId2 = GetNextNode();
	printf("Hop count is: %d\n", GetHopDistance(nodeId, nodeId2));
}

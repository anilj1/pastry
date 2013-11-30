/*
 * routingtable.c
 *
 *  Created on: Nov 21, 2013
 *      Author: Anil Jangam
 */

#include<stdio.h>

#include "common.h"
#include "pastrynode.h"
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

	InitNodeIds();
	//PrintNodeIds();

	nodeId = GetNextNodeId();			// 68598
	AddPastryNode(&node1, 67520);
	PrintPastryNetwork();

	nodeId = 68511;
	AddPastryNode(&node2, 66183);
	PrintPastryNetwork();

	nodeId = 62540;
	AddPastryNode(&node3, 67349);
	PrintPastryNetwork();

	nodeId = 62541;
	AddPastryNode(&node4, 67395);
	PrintPastryNetwork();

	nodeId = 62542;
	AddPastryNode(&node5, 67734);
	PrintPastryNetwork();

	nodeId = 62542;
	AddPastryNode(&node6, 65592);
	PrintPastryNetwork();

	nodeId2 = GetNextNodeId();
	printf("Hop count is: %d\n", GetHopDistance(nodeId, nodeId2));
	return 0;
}

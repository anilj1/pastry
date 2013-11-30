/*
 * pastrynetwork.h
 *
 *  Created on: Nov 21, 2013
 *      Author: Anil Jangam
 */

#ifndef PASTRYNETWORK_H_
#define PASTRYNETWORK_H_

#include "common.h"

PastryNode* PastryNetwork[PS_NODES];

// Function decelerations.
int AddPastryNode(PastryNode *node, int nodeid);
int AddFirstNode(PastryNode *node);
int PopulateFirstNodeState(PastryNode *node);
int UpdateNodeState(PastryNode*);
int UpdateLeafSet(PastryNode *currNode, PastryNode *newNode);
int UpdateNeighborhoodSet(PastryNode *currNode, PastryNode *newNode);
int UpdateRoutingTable(PastryNode *currNode, PastryNode *newNode);
int PrefixMatch(int, int, int);

void PrintPastryNetwork();

#endif /* PASTRYNETWORK_H_ */

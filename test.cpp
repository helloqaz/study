
// staging changes

// Example program
#include <iostream>
#include <string>
#include <vector>

struct ListNode {
    int val;
        ListNode *next;
	    ListNode(int x) : val(x), next(NULL) {}
	    };

	    ListNode* initList(std::vector<int>& values){
	        ListNode* head = NULL;
		    ListNode* curr = NULL;
		        
			    for(unsigned int i = 0; i < values.size(); i++) {
			            ListNode* node = new ListNode(values[i]);
				            if(i == 0) {
					                head = node;
							            curr = node;
								            }else{
									                curr -> next = node;
											            curr = node;
												            }
													        }
														    
														        return head;
															}

															void releaseList(ListNode* nodes) {
															    ListNode* curr = nodes;
															        while(curr != NULL) {
																        ListNode* toBeDelete = curr;
																	        curr = curr -> next;
																		        delete toBeDelete;
																			        toBeDelete = NULL;
																				    }

																				    }

																				    void printList(ListNode* nodes) {
																				        while(nodes != NULL) {
																					        std::cout << nodes->val << std::endl;
																						        nodes = nodes -> next;
																							    }
																							    }

																							    void testInitList() {
																							        std::vector<int> values;
																								    for(unsigned int i = 0; i < 10; i++) {
																								            values.push_back(i);        
																									        }
																										    
																										        ListNode* nodes = initList(values);
																											    printList(nodes);
																											        releaseList(nodes);
																												}

																												ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
																												    return NULL;
																												    }

																												    int main()
																												    {
																												      std::cout << "Hello, " << "!\n";
																												        
																													  addTwoNumbers(NULL, NULL);
																													    testInitList();
																													    }

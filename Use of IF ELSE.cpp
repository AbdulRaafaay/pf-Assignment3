#include <iostream>
using namespace std;

/* Task 8
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	char choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8, choice9;
	cout << "\n\nStarting General Diagnosis Program." << endl;
	cout << "Recording symptoms information - DONE." << endl;
	cout << "Rebooting server to see if condition still exists - DONE." << endl;
	cout << "\nEnter \'y\' for YES and \'n\' for NO.";
	cout << "\n\nIs this sever newly installed? : ";
	cin >> choice1;
		if ( choice1=='Y' || choice1=='y' )
		{
			cout << "\nPlease reset any components that may have come loose during shipping - DONE." << endl;
			cout << "\nEnter \'y\' for YES and \'n\' for NO.";
			cout << "\n\nDoes the condition still exist? : ";
			cin >> choice2;	
				if ( choice2=='n' || choice2=='N' )
				{
					cout << "\nRecording all actions taken for future - DONE." << endl;
					cout << "Congratulations, your server problems are solved!";
				}
				else
				{
					cout << "\nEnter \'y\' for YES and \'n\' for NO." << endl;
					cout << "\n\nWere options added or was the configuration changed recently? : ";
					cin >> choice3;
						if ( choice3=='Y' || choice3=='y' )
						{
							cout << "\nIsolate what has changed. Verify it was installed correctly. Restoring server to last known working state or original shipped configuration - DONE." << endl;
							cout << "\nEnter \'y\' for YES and \'n\' for NO.";
							cout << "\n\nDoes condition still exist? : ";
							cin >> choice4;  
								if ( choice4=='Y' || choice4=='y' )
								{
									cout << "\nIsolate and minimize the memory configuration - DONE." << endl;
									cout << "\nEnter \'y\' for YES and \'n\' for NO.";
									cout << "\n\nDoes the condition still exist? : ";
									cin >> choice5;
										if ( choice5=='Y' || choice5=='y' )
										{
											cout << "\nBreak server down to minimal configuration - DONE." << endl;
											cout << "\nEnter \'y\' for YES and \'n\' for NO.";
											cout << "\n\nDoes the condition still exist? : ";
											cin >> choice6; 
												if ( choice6=='Y' || choice6=='y' )
												{
													cout << "\nTroubleshoot or replace basic server spare parts - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice7;
														if ( choice7=='Y' || choice7=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording symptom and error information on repair tag if sending back a failed part - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
												else
												{
													cout << "\nAdding one part at a time back to configuration to isolate faulty component - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice8;
														if ( choice8=='Y' || choice8=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording all actions taken for future - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
										}
										else
										{
											cout << "\nRecording all actions taken for future - DONE." << endl;
											cout << "Congratulations, your server problems are solved!";
										}
								}
								else
								{
									cout << "\nRecording all actions taken for future - DONE." << endl;
									cout << "Congratulations, your server problems are solved!";
								}
						}
						else
						{
							cout << "\nChecking for service notifications - DONE." << endl;
							cout << "Downloading the latest software and firmware from the HP website - DONE. ";
							cout << "\nEnter \'y\' for YES and \'n\' for NO.";
							cout << "\n\nDoes the condition still exist? : ";
							cin >> choice9;	
								if ( choice9=='Y' || choice9=='y' )
								{
									cout << "\nIsolate and minimize the memory configuration - DONE." << endl;
									cout << "\nEnter \'y\' for YES and \'n\' for NO.";
									cout << "\n\nDoes the condition still exist? : ";
									cin >> choice5;
										if ( choice5=='Y' || choice5=='y' )
										{
											cout << "\nBreak server down to minimal configuration - DONE." << endl;
											cout << "\nEnter \'y\' for YES and \'n\' for NO.";
											cout << "\n\nDoes the condition still exist? : ";
											cin >> choice6; 
												if ( choice6=='Y' || choice6=='y' )
												{
													cout << "\nTroubleshoot or replace basic server spare parts - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice7;
														if ( choice7=='Y' || choice7=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording symptom and error information on repair tag if sending back a failed part - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
												else
												{
													cout << "\nAdding one part at a time back to configuration to isolate faulty component - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice8;
														if ( choice8=='Y' || choice8=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording all actions taken for future - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
										}
										else
										{
											cout << "\nRecording all actions taken for future - DONE." << endl;
											cout << "Congratulations, your server problems are solved!";
										}
								}
								else
								{
									cout << "\nRecording all actions taken for future - DONE." << endl;
									cout << "Congratulations, your server problems are solved!";
								}
						}
				}		
		}
		else
		{
					cout << "\nEnter \'y\' for YES and \'n\' for NO." << endl;
					cout << "\n\nWere options added or was the configuration changed recently? : ";
					cin >> choice3;
						if ( choice3=='Y' || choice3=='y' )
						{
							cout << "\nIsolate what has changed. Verify it was installed correctly. Restoring server to last known working state or original shipped configuration - DONE." << endl;
							cout << "\nEnter \'y\' for YES and \'n\' for NO.";
							cout << "\n\nDoes condition still exist? : ";
							cin >> choice4;  
								if ( choice4=='Y' || choice4=='y' )
								{
									cout << "\nIsolate and minimize the memory configuration - DONE." << endl;
									cout << "\nEnter \'y\' for YES and \'n\' for NO.";
									cout << "\n\nDoes the condition still exist? : ";
									cin >> choice5;
										if ( choice5=='Y' || choice5=='y' )
										{
											cout << "\nBreak server down to minimal configuration - DONE." << endl;
											cout << "\nEnter \'y\' for YES and \'n\' for NO.";
											cout << "\n\nDoes the condition still exist? : ";
											cin >> choice6; 
												if ( choice6=='Y' || choice6=='y' )
												{
													cout << "\nTroubleshoot or replace basic server spare parts - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice7;
														if ( choice7=='Y' || choice7=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording symptom and error information on repair tag if sending back a failed part - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
												else
												{
													cout << "\nAdding one part at a time back to configuration to isolate faulty component - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice8;
														if ( choice8=='Y' || choice8=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording all actions taken for future - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
										}
										else
										{
											cout << "\nRecording all actions taken for future - DONE." << endl;
											cout << "Congratulations, your server problems are solved!";
										}
								}
								else
								{
									cout << "\nRecording all actions taken for future - DONE." << endl;
									cout << "Congratulations, your server problems are solved!";
								}
						}
						else
						{
							cout << "\nChecking for service notifications - DONE." << endl;
							cout << "Downloading the latest software and firmware from the HP website - DONE. ";
							cout << "\nEnter \'y\' for YES and \'n\' for NO.";
							cout << "\n\nDoes the condition still exist? : ";
							cin >> choice9;	
								if ( choice9=='Y' || choice9=='y' )
								{
									cout << "\nIsolate and minimize the memory configuration - DONE." << endl;
									cout << "\nEnter \'y\' for YES and \'n\' for NO.";
									cout << "\n\nDoes the condition still exist? : ";
									cin >> choice5;
										if ( choice5=='Y' || choice5=='y' )
										{
											cout << "\nBreak server down to minimal configuration - DONE." << endl;
											cout << "\nEnter \'y\' for YES and \'n\' for NO.";
											cout << "\n\nDoes the condition still exist? : ";
											cin >> choice6; 
												if ( choice6=='Y' || choice6=='y' )
												{
													cout << "\nTroubleshoot or replace basic server spare parts - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice7;
														if ( choice7=='Y' || choice7=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording symptom and error information on repair tag if sending back a failed part - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
												else
												{
													cout << "\nAdding one part at a time back to configuration to isolate faulty component - DONE." << endl;
													cout << "\nEnter \'y\' for YES and \'n\' for NO.";
													cout << "\n\nDoes the condition still exist? : ";
													cin >> choice8;
														if ( choice8=='Y' || choice8=='y' )
														{
															cout << "\nEnsure the following information is available : " << endl;
															cout << "-> Survey configuration snapshots" << endl;
															cout << "-> OS event log file" << endl;
															cout << "-> Full crash dump" << endl;
															cout << "\n\n\nCALL HP SERVICE PROVIDER";
														}
														else
														{
															cout << "\nRecording all actions taken for future - DONE." << endl;
															cout << "Congratulations, your server problems are solved!";
														}
												}
										}
										else
										{
											cout << "\nRecording all actions taken for future - DONE." << endl;
											cout << "Congratulations, your server problems are solved!";
										}
								}
								else
								{
									cout << "\nRecording all actions taken for future - DONE." << endl;
									cout << "Congratulations, your server problems are solved!";
								}
						}		
		}							
																
return 0;
}

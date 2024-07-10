#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Task 9
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */
    
   
int main ()
{
	int seats, choice1, choice2, choice3, s1, s2, s3, s4, s5, s6, s7, s8, cnic;
	double adults, children, discount, total, amount;
	srand ( time (0) );
	s1 = (rand () % 1000) + 1;
	s2 = (rand () % 1000) + 1;
	s3 = (rand () % 1000) + 1;
	s4 = (rand () % 1000) + 1;
	s5 = (rand () % 3000) + 1;
	s6 = (rand () % 3000) + 1;
	s7 = (rand () % 2500) + 1;
	s8 = (rand () % 2500) + 1;
	
	cout << "\n\n\t\t\t--------------------" << endl;
	cout << "\t\t\t  PSL MATCHES 2024" << endl;
	cout << "\t\t\t--------------------";
	cout << "\n\n1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)" << endl; 
	cout << "2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium (8pm-11.15pm)" << endl;
	cout << "3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium (7pm-10.15pm)" << endl;
	cout << "4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)" << endl;
	cout << "5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)" << endl;
	cout << "6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)" << endl;
	cout << "7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)" << endl;
	cout << "8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)" << endl;
	cout << "\nEnter your choice ( 1-8 ) : ";
	cin >> choice1;
		if ( choice1==1 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==2 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==3 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==4 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==5 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==6 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==7 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else if ( choice1==8 )
		{
				cout << "\n:    ENCLOSURES    :\t\t\t\t\t   :    TICKETS    :" << endl;
				cout << "\n1. JAVED AKHTAR   ------> VIP  ( " << s1 << " seats )\t\t     VIP = Rs. 3000" << endl;
				cout << "2. AZHAR MEHMOOD  ------> VIP  ( " << s2 << " seats )\t\t     PREMIUM = Rs. 1500" << endl;
				cout << "3. JAVED MIANDAD  ------> VIP ( " << s3 << " seats )\t\t     FIRST CLASS = Rs. 1000" << endl;
				cout << "4. IMRAN KHAN     ------> VIP  ( " << s4 << " seats )\t\t     GENERAL = Rs. 500" << endl;
				cout << "5. SHOAIB AKHTER  ------> PREMIUM  ( " << s5 << " seats )" << endl;
				cout << "6. SOHAIL TANVEER ------> FIRST CLASS ( " << s6 << " seats )" << endl;
				cout << "7. MIRAN BUKSH    ------> GENERAL  ( " << s7 << " seats )" << endl;
				cout << "8. YASIR ARAFAT   ------> GENERAL  ( " << s8 << " seats )" << endl;
				cout << "\nChoose an enclosure : ";
				cin >> choice2;
					if ( choice2==1 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s1 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s1 )
								{
									if (adults>4 && adults<=8)
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==2 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s2 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s2 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==3 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s3 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s3 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==4 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s4 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s4 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==5 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s5 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s5 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==6 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s6 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s6 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==7 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s7 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s7 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
					else if ( choice2==8 )
					{
						cout << "\nWho do want to buy tickets for?" << endl;
						cout << "1. Family" << endl;
						cout << "2. Adults" << endl;
						cout << "\nChoose an option : ";
						cin >> choice3;
							if ( choice3==1 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nEnter number of tickets for Adults ( 1-4 ) : ";
								cin >> adults;
								cout << "\nEnter number of tickets for Children ( 2-5 ) : ";
								cin >> children;
								if ( adults+children<=s8 )
								{
									if ( (adults>0 && adults<=4) && ( children>1 && children<=5 ) )
									{
										adults = adults * 3000;
										children = children * 3000;
										total = adults + children;
										discount = (adults * 0.1) + (children * 0.2);					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABALE";
								
							}
							else if ( choice3==2 )
							{
								cout << "\nEnter your CNIC (*****-*******-* ) : ";
								cin >> cnic;
								cout << "\nYOU GET A DISCOUNT FOR MORE THAN 4 TICKETS!";
								cout << "\nEnter number of tickets for Adults ( 1-8 ) : ";
								cin >> adults;
								if ( adults<=s8 )
								{
									if (adults>4 && adults<=8 )
									{
										adults = adults * 3000;
										total = adults;
										discount = adults * 0.1;					
										amount = total - discount;
										cout << "\nTOTAL BILL = Rs " << total;
										cout << "\nTOTAL DISCOUNT = Rs " << discount;
										cout << "\nAMOUNT DUE = Rs " << amount;
									}
									else if ( adults>0 && adults<=4 )
									{
										adults = adults * 3000;
										total = adults;
										cout << "\nTOTAL BILL = Rs " << total;
									}
									else 
									{
										cout << "\n:::   OUT OF RANGE   :::";
									}
								}
								else
									cout << "\nSORRY, NO SEATS AVAILABLE";
								
							}
							else
							{
								cout << "\n:::   INVALID INPUT   :::";
							}
						
						
					}
		}
		else
		{
			cout << ":::   INVALID INPUT   :::";
		}

return 0;
}

#include <iostream>

#include "customer.h"
#include "card.h"
#include "Administrator.h"
#include "user.h"
#include "service.h"
#include "order.h"
#include "Discount.h"
#include "Financial_report.h"
#include "payment.h"
#include "product.h"
#include "paypal.h"

using namespace std;

int main() 

{

	//---- Object creation ------

	payment *ppaypal = new paypal(); // Object payment class
	payment *pcard = new card(); // Object payment class
	Discount *dis = new Discount(); // Object Discount class
	customer *cus = new customer(); // Object customer class
	Administrator* admin = new Administrator(); // Object Administrator class
	user *puser[0] = new customer(); // Object user class
	user *puser[1] = new Administrator(); // Object user class
	service *serv[0] = new service(); // Object service class
	order *ord[0] = new order(); // Object order class
	Financial_report *finrep[0] = new Financial_report(); // Object Financial_report class
	product *pro[0] = new product(); // Object product class
	product *pro[1] = new product(); // Object product class
	



	//----Method Calling------
	ppaypal->validatePayment();
	ppaypal->display();
	
	pcard->validatePayment();
	pcard->display();


	dis->calDiscount();
	dis->display();

	cus->setWriteReview();
	cus->setMakePayment();
	cus->getRegUserId();

	admin->removeCustomer();
	admin->replyToRegUse();

	puser[0]->askquestion();
	puser[0]->givefeedback();
	
    puser[1]->askquestion();
	puser[1]->givefeedback();

    serv[0]->display();

	ord[0]->display();

	finrep[0]->displayFinance();
	

	pro[0]->display();
	


	//----Delete Dynamic objects------
	
	delete ppaypal;
	delete pcard;
	delete dis;
	delete cus;
	delete admin;
	delete puser[0];
	delete puser[1];
	delete serv[0];
	delete ord[0];
	delete finrep[0];
	delete pro[0];

	return 0;
}
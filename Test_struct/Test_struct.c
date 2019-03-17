#define _CRT_SECURE_NO_WARNINGS    // Prevent compilation errors due to strcpy security alerts
#include <stdio.h>
#include <string.h>

struct Smart_phone {
	char model[20];
	char storage[20];
	int price;
}Galaxy_S10;;

typedef struct Information_on_a_smartphone_owned_by_one_person {
	int Num;
	char Name[20];
	struct Smart_phone Main_phone;
} Info;

int main()
{
	struct Smart_phone Galaxy_Note9 = { .model = "Galaxy_Note9",
		.storage = "128 GByte", .price = 1100000 }; //point - A
	//"Galaxy_s10" was declared simultaneously with the declaration of the structure,
	//and "Galaxy_Note9" was declared in the main statement.
	Info Information = { .Num = 1,.Name = "Sungmin_Joo"};
	//When define a structure using typeedef,
	//it can be used as an alias simply as "int" in the main statement.
	strcpy(Information.Main_phone.model, Galaxy_Note9.model); //point - B
	strcpy(Information.Main_phone.storage, Galaxy_Note9.storage);
	Information.Main_phone.price = Galaxy_Note9.price;
	
	strcpy(Galaxy_S10.model, "Galaxy S10");
	strcpy(Galaxy_S10.storage, "256GByte");
	Galaxy_S10.price = 1000000;
	//Two methods of initializing a structure. point - A, point - B

	printf("- - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("model: %s\n", Galaxy_Note9.model);
	printf("storage: %s\n", Galaxy_Note9.storage);
	printf("price: %d\n", Galaxy_Note9.price);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("model: %s\n", Galaxy_S10.model);
	printf("storage: %s\n", Galaxy_S10.storage);
	printf("price: %d\n", Galaxy_S10.price);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("name: %s\n", Information.Name);
	printf("number of smartphone: %d\n", Information.Num);
	printf("model: %s\n", Information.Main_phone.model);
	printf("storage: %s\n", Information.Main_phone.storage);
	printf("price: %d\n", Information.Main_phone.price);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	//test about "sturct in struct
	return 0;
}
/*
------------------------------------------------------
- - - - - - - - - - - - - - - - - - - - - - - - - -
model: Galaxy_note9
storage: 128 GByte
price: 1100000
- - - - - - - - - - - - - - - - - - - - - - - - - -
model: Galaxy s10
storage: 256GByte
price: 1000000
- - - - - - - - - - - - - - - - - - - - - - - - - -
name: Sungmin_Joo
number of smartphone: 1
model: Galaxy_note9
storage: 128 GByte
price: 1100000
- - - - - - - - - - - - - - - - - - - - - - - - - -
*/
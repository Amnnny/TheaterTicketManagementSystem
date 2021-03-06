#include "stdafx.h"
#include "TTMS_SCU_Account_Srv_FetchAll.h"

USER* Account_Srv_FetchAll()
{
	FILE *USER_READ_FP;
	USER *HEAD,*NEW_NODE, *TEMP_NODE;
	HEAD = CREAT_LIST_HEAD_USER();
	TEMP_NODE = HEAD;
	fopen_s(&USER_READ_FP, "Account.dat", "rb");
	while (!feof(USER_READ_FP))
	{
		NEW_NODE = static_cast<USER *>(malloc(sizeof(USER)));
		fread_s(NEW_NODE, sizeof(USER), sizeof(USER), 1, USER_READ_FP);
		TEMP_NODE->NODE_NEXT = NEW_NODE;
		NEW_NODE->NODE_PREV = TEMP_NODE;
		NEW_NODE->NODE_NEXT = HEAD;
		HEAD->NODE_PREV = NEW_NODE;
		TEMP_NODE = NEW_NODE;
	}
	fclose(USER_READ_FP);
	return HEAD;
}

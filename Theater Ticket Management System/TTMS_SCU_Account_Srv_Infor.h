#pragma once
#define USER_LEN 15
typedef struct  TTMS_USER_INFORMATION {
	char USER_NAME[USER_LEN];
	char USER_ACCOUT[USER_LEN];
	char USER_PASSWORD[USER_LEN];
	int power;
	struct TTMS_USER_INFORMATION *NODE_NEXT;
	struct TTMS_USER_INFORMATION *NODE_PREV;
}USER;


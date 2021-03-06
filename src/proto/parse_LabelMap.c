#include "parameter.h"
int parseLabelMap(LabelMap * labelMap)
{
	memset(labelMap,'\0',sizeof(LabelMap));
	labelMap->item = (LabelMapItem *)malloc(sizeof(LabelMapItem)*21);
	memset(labelMap->item,'\0',sizeof(LabelMapItem) * 21);
	labelMap->item_size = 21;
	CHECK_EXPR_RET(strlen("none_of_the_above") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[0].name,"none_of_the_above");
	labelMap->item[0].label = 0;
	CHECK_EXPR_RET(strlen("background") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[0].display_name,"background");
	CHECK_EXPR_RET(strlen("aeroplane") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[1].name,"aeroplane");
	labelMap->item[1].label = 1;
	CHECK_EXPR_RET(strlen("aeroplane") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[1].display_name,"aeroplane");
	CHECK_EXPR_RET(strlen("bicycle") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[2].name,"bicycle");
	labelMap->item[2].label = 2;
	CHECK_EXPR_RET(strlen("bicycle") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[2].display_name,"bicycle");
	CHECK_EXPR_RET(strlen("bird") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[3].name,"bird");
	labelMap->item[3].label = 3;
	CHECK_EXPR_RET(strlen("bird") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[3].display_name,"bird");
	CHECK_EXPR_RET(strlen("boat") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[4].name,"boat");
	labelMap->item[4].label = 4;
	CHECK_EXPR_RET(strlen("boat") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[4].display_name,"boat");
	CHECK_EXPR_RET(strlen("bottle") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[5].name,"bottle");
	labelMap->item[5].label = 5;
	CHECK_EXPR_RET(strlen("bottle") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[5].display_name,"bottle");
	CHECK_EXPR_RET(strlen("bus") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[6].name,"bus");
	labelMap->item[6].label = 6;
	CHECK_EXPR_RET(strlen("bus") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[6].display_name,"bus");
	CHECK_EXPR_RET(strlen("car") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[7].name,"car");
	labelMap->item[7].label = 7;
	CHECK_EXPR_RET(strlen("car") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[7].display_name,"car");
	CHECK_EXPR_RET(strlen("cat") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[8].name,"cat");
	labelMap->item[8].label = 8;
	CHECK_EXPR_RET(strlen("cat") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[8].display_name,"cat");
	CHECK_EXPR_RET(strlen("chair") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[9].name,"chair");
	labelMap->item[9].label = 9;
	CHECK_EXPR_RET(strlen("chair") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[9].display_name,"chair");
	CHECK_EXPR_RET(strlen("cow") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[10].name,"cow");
	labelMap->item[10].label = 10;
	CHECK_EXPR_RET(strlen("cow") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[10].display_name,"cow");
	CHECK_EXPR_RET(strlen("diningtable") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[11].name,"diningtable");
	labelMap->item[11].label = 11;
	CHECK_EXPR_RET(strlen("diningtable") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[11].display_name,"diningtable");
	CHECK_EXPR_RET(strlen("dog") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[12].name,"dog");
	labelMap->item[12].label = 12;
	CHECK_EXPR_RET(strlen("dog") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[12].display_name,"dog");
	CHECK_EXPR_RET(strlen("horse") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[13].name,"horse");
	labelMap->item[13].label = 13;
	CHECK_EXPR_RET(strlen("horse") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[13].display_name,"horse");
	CHECK_EXPR_RET(strlen("motorbike") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[14].name,"motorbike");
	labelMap->item[14].label = 14;
	CHECK_EXPR_RET(strlen("motorbike") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[14].display_name,"motorbike");
	CHECK_EXPR_RET(strlen("person") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[15].name,"person");
	labelMap->item[15].label = 15;
	CHECK_EXPR_RET(strlen("person") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[15].display_name,"person");
	CHECK_EXPR_RET(strlen("pottedplant") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[16].name,"pottedplant");
	labelMap->item[16].label = 16;
	CHECK_EXPR_RET(strlen("pottedplant") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[16].display_name,"pottedplant");
	CHECK_EXPR_RET(strlen("sheep") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[17].name,"sheep");
	labelMap->item[17].label = 17;
	CHECK_EXPR_RET(strlen("sheep") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[17].display_name,"sheep");
	CHECK_EXPR_RET(strlen("sofa") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[18].name,"sofa");
	labelMap->item[18].label = 18;
	CHECK_EXPR_RET(strlen("sofa") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[18].display_name,"sofa");
	CHECK_EXPR_RET(strlen("train") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[19].name,"train");
	labelMap->item[19].label = 19;
	CHECK_EXPR_RET(strlen("train") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[19].display_name,"train");
	CHECK_EXPR_RET(strlen("tvmonitor") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[20].name,"tvmonitor");
	labelMap->item[20].label = 20;
	CHECK_EXPR_RET(strlen("tvmonitor") > PARSE_STR_NAME_SIZE - 1,-1);
	strcpy(labelMap->item[20].display_name,"tvmonitor");
	return 0;

}

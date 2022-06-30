//
// Generated By: dol2asm
// Translation Unit: d/d_tresure
//

#include "d/d_tresure.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMapInfo_c {
    /* 8003F40C */ static s8 calcFloorNo(f32, bool, int);
};

//
// Forward References:
//

extern "C" void createWork__7dTres_cFv();
extern "C" void create__7dTres_cFv();
extern "C" void remove__7dTres_cFv();
extern "C" void reset__7dTres_cFv();
extern "C" void addData__7dTres_cFPQ27dTres_c10list_classSc();
extern "C" void checkTreasureBox__7dTres_cFPQ27dTres_c6data_s();
extern "C" void onStatus__7dTres_cFUcii();
extern "C" void offStatus__7dTres_cFUcii();
extern "C" void getBossIconFloorNo__7dTres_cFPi();
extern "C" void getFirstData__7dTres_cFUc();
extern "C" void getNextData__7dTres_cFPQ27dTres_c15typeGroupData_c();
extern "C" void getNextData__7dTres_cFPCQ27dTres_c15typeGroupData_c();
extern "C" void setPosition__7dTres_cFiUcPC3Veci();
extern "C" void getTypeGroupNoToType__7dTres_cFUc();
extern "C" void getTypeToTypeGroupNo__7dTres_cFUc();
extern "C" u8 const typeToTypeGroup__7dTres_c[34 + 6 /* padding */];
extern "C" u8 mTypeGroupListAll__7dTres_c[204 + 4 /* padding */];
extern "C" u8 mTypeGroupData__7dTres_c[4];
extern "C" u8 mNum__7dTres_c[2 + 2 /* padding */];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void correctionOriginPos__10dMapInfo_nFScP3Vec();
extern "C" void calcFloorNo__10dMapInfo_cFfbi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void* __nwa__FUl();
extern "C" void __construct_new_array();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern bool data_80450680;

//
// Declarations:
//

/* ############################################################################################## */
/* 80450F98-80450F9C 000498 0004+00 2/2 0/0 0/0 .sbss            mTypeGroupData__7dTres_c */
dTres_c::typeGroupData_c* dTres_c::mTypeGroupData;

/* 8009BBD8-8009BC18 096518 0040+00 0/0 1/1 0/0 .text            createWork__7dTres_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dTres_c::createWork() {
    nofralloc
#include "asm/d/d_tresure/createWork__7dTres_cFv.s"
}
#pragma pop

/* 8009BC18-8009BC60 096558 0048+00 0/0 1/1 0/0 .text            create__7dTres_cFv */
void dTres_c::create() {
    if (dStage_stagInfo_GetSTType(i_dComIfGp_getStage()->getStagInfo()) != 3) {
        reset();
    }
}

/* 8009BC60-8009BC6C 0965A0 000C+00 0/0 1/1 0/0 .text            remove__7dTres_cFv */
void dTres_c::remove() {
    data_80450680 = true;
}

/* ############################################################################################## */
/* 80425438-80425508 052158 00CC+04 6/6 3/3 0/0 .bss             mTypeGroupListAll__7dTres_c */
dTres_c::list_class dTres_c::mTypeGroupListAll[17];

/* 80450F9C-80450FA0 00049C 0002+02 2/2 0/0 0/0 .sbss            mNum__7dTres_c */
u16 dTres_c::mNum;

/* 8009BC6C-8009BCB4 0965AC 0048+00 2/2 0/0 0/0 .text            reset__7dTres_cFv */
void dTres_c::reset() {
    if (data_80450680) {
        mNum = 0;
        data_80450680 = false;

        for (int i = 0; i < 17; i++) {
            mTypeGroupListAll[i].field_0x0 = NULL;
            mTypeGroupListAll[i].field_0x4 = NULL;
            mTypeGroupListAll[i].mNumber = 0;
        }
    }
}

/* 8009BCB4-8009BE28 0965F4 0174+00 0/0 1/1 0/0 .text addData__7dTres_cFPQ27dTres_c10list_classSc
 */
#ifdef NONMATCHING
void dTres_c::addData(dTres_c::list_class* p_list, s8 roomNo) {
    if (dStage_stagInfo_GetSTType(i_dComIfGp_getStage()->getStagInfo()) != 3) {
        reset();

        typeGroupData_c* listData = p_list->field_0x4;
        typeGroupData_c* groupData = &mTypeGroupData[mNum];
        for (int i = 0; i < (int)p_list->field_0x0; i++) {
            groupData->mData = listData->mData;
            groupData->mData.mRoomNo = roomNo;
            groupData->mData.mStatus = 0;

            u8 typeGroupNo = getTypeToTypeGroupNo(groupData->mData.mType);
            groupData->setNextDataPointer(NULL);
            groupData->setTypeGroupNo(typeGroupNo);

            list_class* typeGroupList = mTypeGroupListAll + typeGroupNo;
            if (typeGroupList->field_0x0 == NULL) {
                typeGroupList->field_0x0 = groupData;
            }

            if (mTypeGroupListAll[i].field_0x4 != NULL) {
                mTypeGroupListAll[i].field_0x4->setNextDataPointer(groupData);
            }
            mTypeGroupListAll[i].field_0x4 = groupData;
            mTypeGroupListAll[i].mNumber++;

            if ((s32)groupData->mData.mType == 0xFF) {
                checkTreasureBox(&groupData->mData);
            }

            mNum++;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTres_c::addData(dTres_c::list_class* param_0, s8 param_1) {
    nofralloc
#include "asm/d/d_tresure/addData__7dTres_cFPQ27dTres_c10list_classSc.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80452BE8-80452BEC 0011E8 0004+00 1/1 0/0 0/0 .sdata2          @3839 */
SECTION_SDATA2 static f32 lit_3839 = 182.04444885253906f;

/* 80452BEC-80452BF0 0011EC 0004+00 1/1 0/0 0/0 .sdata2          @3840 */
SECTION_SDATA2 static u8 lit_3840[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80452BF0-80452BF8 0011F0 0008+00 1/1 0/0 0/0 .sdata2          @3841 */
SECTION_SDATA2 static f64 lit_3841 = 0.5;

/* 80452BF8-80452C00 0011F8 0008+00 1/1 0/0 0/0 .sdata2          @3842 */
SECTION_SDATA2 static f64 lit_3842 = 3.0;

/* 80452C00-80452C08 001200 0008+00 1/1 0/0 0/0 .sdata2          @3843 */
SECTION_SDATA2 static u8 lit_3843[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80452C08-80452C10 001208 0008+00 1/1 0/0 0/0 .sdata2          @3845 */
SECTION_SDATA2 static f64 lit_3845 = 4503601774854144.0 /* cast s32 to float */;

/* 8009BE28-8009C168 096768 0340+00 1/1 0/0 0/0 .text
 * checkTreasureBox__7dTres_cFPQ27dTres_c6data_s                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTres_c::checkTreasureBox(dTres_c::data_s* param_0) {
    nofralloc
#include "asm/d/d_tresure/checkTreasureBox__7dTres_cFPQ27dTres_c6data_s.s"
}
#pragma pop

/* 8009C168-8009C1F0 096AA8 0088+00 0/0 0/0 3/3 .text            onStatus__7dTres_cFUcii */
void dTres_c::onStatus(u8 listIdx, int param_1, int flag) {
    typeGroupData_c* groupData = getFirstData(listIdx);
    int typeGroupNo = getTypeGroupNumber(listIdx);

    for (int i = 0; i < typeGroupNo; i++) {
        if (param_1 == groupData->getNo()) {
            u8 status = groupData->getStatus();

            cLib_onBit(status, flag);
            groupData->setStatus(status);
        }
        groupData = getNextData(groupData);
    }
}

/* 8009C1F0-8009C27C 096B30 008C+00 0/0 0/0 3/3 .text            offStatus__7dTres_cFUcii */
#ifdef NONMATCHING
void dTres_c::offStatus(u8 listIdx, int param_1, int flag) {
    typeGroupData_c* groupData = getFirstData(listIdx);
    int typeGroupNo = getTypeGroupNumber(listIdx);

    for (int i = 0; i < typeGroupNo; i++) {
        if (param_1 == groupData->getNo()) {
            u8 status = groupData->getStatus();

            cLib_offBit(status, flag);
            groupData->setStatus(status);
        }
        groupData = getNextData(groupData);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTres_c::offStatus(u8 param_0, int param_1, int param_2) {
    nofralloc
#include "asm/d/d_tresure/offStatus__7dTres_cFUcii.s"
}
#pragma pop
#endif

/* 8009C27C-8009C360 096BBC 00E4+00 0/0 1/1 0/0 .text            getBossIconFloorNo__7dTres_cFPi */
int dTres_c::getBossIconFloorNo(int* o_floorNo) {
    int ret;

    if (o_floorNo == NULL) {
        return 0;
    }

    ret = 0;
    *o_floorNo = 0;
    typeGroupData_c* groupData = getFirstData(3);

    if (groupData != NULL && dComIfGs_isDungeonItemCompass()) {
        if ((groupData->getSwBit() == 0xFF ||
             (groupData->getSwBit() != 0xFF &&
              dComIfGs_isSwitch(groupData->getSwBit(), groupData->getRoomNo()))) &&
            !dComIfGs_isStageBossEnemy()) {
            *o_floorNo =
                dMapInfo_c::calcFloorNo(groupData->getPos()->y, true, groupData->getRoomNo());
            ret = 1;
        }
    }

    return ret;
}

/* 8009C360-8009C39C 096CA0 003C+00 4/4 4/4 0/0 .text            getFirstData__7dTres_cFUc */
dTres_c::typeGroupData_c* dTres_c::getFirstData(u8 listIdx) {
    if (mTypeGroupListAll + listIdx == NULL) {
        return NULL;
    }

    if ((s32)mTypeGroupListAll[listIdx].mNumber == 0) {
        return NULL;
    }

    return mTypeGroupListAll[listIdx].field_0x0;
}

/* 8009C39C-8009C3B4 096CDC 0018+00 2/2 3/3 0/0 .text
 * getNextData__7dTres_cFPQ27dTres_c15typeGroupData_c           */
dTres_c::typeGroupData_c* dTres_c::getNextData(dTres_c::typeGroupData_c* p_data) {
    if (p_data == NULL) {
        return NULL;
    }

    return p_data->getNextDataPointer();
}

/* 8009C3B4-8009C3CC 096CF4 0018+00 0/0 1/1 0/0 .text
 * getNextData__7dTres_cFPCQ27dTres_c15typeGroupData_c          */
dTres_c::typeGroupData_c* dTres_c::getNextData(dTres_c::typeGroupData_c const* p_data) {
    if (p_data == NULL) {
        return NULL;
    }

    return p_data->getNextDataPointer();
}

/* 8009C3CC-8009C49C 096D0C 00D0+00 0/0 0/0 14/14 .text            setPosition__7dTres_cFiUcPC3Veci
 */
void dTres_c::setPosition(int dataNo, u8 listIdx, Vec const* i_pos, int i_roomNo) {
    typeGroupData_c* groupData = getFirstData(listIdx);

    for (int i = getTypeGroupNumber(listIdx); i > 0; i--) {
        if (dataNo == groupData->getNo()) {
            Vec pos;
            pos.x = i_pos->x;
            pos.y = i_pos->y;
            pos.z = i_pos->z;

            if (i_roomNo >= 0) {
                groupData->setRoomNo(i_roomNo);
            }
            dMapInfo_n::correctionOriginPos(groupData->getRoomNo(), &pos);
            groupData->setPos(pos);
            return;
        }
        groupData = groupData->getNextDataPointer();
    }
}

/* ############################################################################################## */
/* 8037B0D8-8037B100 007738 0022+06 2/2 0/0 0/0 .rodata          typeToTypeGroup__7dTres_c */
SECTION_RODATA u8 const dTres_c::typeToTypeGroup[17][2] = {
    {0xFF, 0x00}, {0x00, 0x01}, {0x01, 0x02}, {0x02, 0x03}, {0x03, 0x04}, {0x04, 0x05},
    {0x05, 0x06}, {0x06, 0x07}, {0x07, 0x08}, {0x80, 0x09}, {0x81, 0x0A}, {0x82, 0x0B},
    {0x83, 0x0C}, {0x84, 0x0D}, {0x85, 0x0E}, {0x87, 0x0F}, {0x88, 0x10},
};
COMPILER_STRIP_GATE(0x8037B0D8, &dTres_c::typeToTypeGroup);

/* 8009C49C-8009C4B0 096DDC 0014+00 0/0 1/1 0/0 .text            getTypeGroupNoToType__7dTres_cFUc
 */
int dTres_c::getTypeGroupNoToType(u8 i_typeGroupNo) {
    return typeToTypeGroup[i_typeGroupNo][0];
}

/* 8009C4B0-8009C4FC 096DF0 004C+00 1/1 3/3 0/0 .text            getTypeToTypeGroupNo__7dTres_cFUc
 */
int dTres_c::getTypeToTypeGroupNo(u8 i_type) {
    u8 groupNo = 17;
    for (int i = 0; i < 17; i++) {
        if (i_type == typeToTypeGroup[i][0]) {
            groupNo = typeToTypeGroup[i][1];
            break;
        }
    }

    return groupNo;
}

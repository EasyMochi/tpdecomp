//
// Generated By: dol2asm
// Translation Unit: object-camera
//

#include "JSystem/JStudio/JStudio_JStage/object-camera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

namespace JStudio {
struct data {
    struct TEOperationData {};
};

struct TControl {
    struct TTransform_position {};
};

struct TAdaptor {
    /* 80286204 */ void adaptor_setVariableValue_Vec(u32 const*, Vec const&);
    /* 80286274 */ void adaptor_getVariableValue_Vec(Vec*, u32 const*) const;
};

struct TVariableValue {
    struct TOutput {
        /* 80285E0C */ ~TOutput();
    };

    /* 80285EB8 */ void update_immediate_(JStudio::TVariableValue*, f64);
    /* 8028B568 */ TVariableValue();

    static u8 soOutput_none_[4 + 4 /* padding */];
};

struct TAdaptor_camera {
    /* 80286E1C */ ~TAdaptor_camera();

    static u8 const sauVariableValue_3_POSITION_XYZ[12];
    static u8 const sauVariableValue_3_TARGET_POSITION_XYZ[12];
};

};  // namespace JStudio

struct JStage {
    struct TSystem {};

    struct TCamera {};

    struct TObject {};
};

struct JStudio_JStage {
    struct TAdaptor_camera {
        /* 8028B8A0 */ TAdaptor_camera(JStage::TSystem const*, JStage::TCamera*);
        /* 8028B960 */ ~TAdaptor_camera();
        /* 8028B9D4 */ void adaptor_do_prepare();
        /* 8028BA1C */ void adaptor_do_begin();
        /* 8028BAF8 */ void adaptor_do_end();
        /* 8028BB4C */ void adaptor_do_update(u32);
        /* 8028BBAC */ void adaptor_do_data(void const*, u32, void const*, u32);
        /* 8028BBD0 */ void adaptor_do_PARENT(JStudio::data::TEOperationData, void const*, u32);
        /* 8028BC14 */ void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, void const*,
                                                   u32);
        /* 8028BC70 */ void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, void const*,
                                                     u32);
        /* 8028BCEC */ void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, void const*,
                                                       u32);
        /* 8028BD00 */ void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, void const*,
                                                     u32);
        /* 8028BD44 */ void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData,
                                                          void const*, u32);
        /* 8028BDA0 */ void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData,
                                                            void const*, u32);
        /* 8028BDBC */ void setJSG_position_(JStudio::TControl const*);
        /* 8028BEB8 */ void getJSG_position_(JStudio::TControl const*);
        /* 8028BFBC */ void setJSG_targetPosition_(JStudio::TControl const*);
        /* 8028C09C */ void getJSG_targetPosition_(JStudio::TControl const*);

        static u8 saoVVOutput_[160 + 4 /* padding */];
    };

    template <typename A1, typename B1>
    struct TVariableValueOutput_object_ {};
    /* TVariableValueOutput_object_<JStudio_JStage::TAdaptor_camera, JStage::TCamera> */
    struct TVariableValueOutput_object___template1 {
        /* 8028C4E4 */ void func_8028C4E4();
        /* 8028C544 */ void func_8028C544(f32, JStudio::TAdaptor*) /* const */;
    };

    struct TAdaptor_object_ {
        /* 8028A470 */ void adaptor_object_data_(void const*, u32, void const*, u32);
        /* 8028A4BC */ void adaptor_object_findJSGObject_(char const*);
        /* 8028A50C */ void adaptor_object_findJSGObjectNode_(JStage::TObject const*, char const*);
    };

    /* 8028A290 */ void transform_toGlobalFromLocal(f32 (*)[4],
                                                    JStudio::TControl::TTransform_position const&,
                                                    JStage::TObject const*, u32);
    /* 8028A3CC */ void transform_toLocalFromGlobal(f32 (*)[4],
                                                    JStudio::TControl::TTransform_position const&,
                                                    JStage::TObject const*, u32);
};

//
// Forward References:
//

extern "C" void __ct__Q214JStudio_JStage15TAdaptor_cameraFPCQ26JStage7TSystemPQ26JStage7TCamera();
extern "C" void __dt__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl();
extern "C" void adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl();
extern "C" void
adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void setJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void setJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void func_8028C180();
extern "C" void func_8028C4E4();
extern "C" void func_8028C544(f32, JStudio::TAdaptor*);
extern "C" u8 saoVVOutput___Q214JStudio_JStage15TAdaptor_camera[160 + 4 /* padding */];

//
// External References:
//

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
extern "C" void adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec();
extern "C" void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl();
extern "C" void __dt__Q27JStudio15TAdaptor_cameraFv();
extern "C" void
transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl();
extern "C" void
transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl();
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
extern "C" void adaptor_object_findJSGObject___Q214JStudio_JStage16TAdaptor_object_FPCc();
extern "C" void
adaptor_object_findJSGObjectNode___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TObjectPCc();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" u8 const sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera[12];
extern "C" u8 const sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera[12];
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__Q27JStudio15TAdaptor_camera[15];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C58A8-803C58B4 0229C8 000C+00 1/1 0/0 0/0 .data            @1014 */
SECTION_DATA static u8 lit_1014[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58B4-803C58C0 0229D4 000C+00 0/1 0/0 0/0 .data            @1015 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1015[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58C0-803C58CC 0229E0 000C+00 0/1 0/0 0/0 .data            @1019 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1019[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58CC-803C58D8 0229EC 000C+00 0/1 0/0 0/0 .data            @1020 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1020[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58D8-803C58E4 0229F8 000C+00 0/1 0/0 0/0 .data            @1024 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1024[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58E4-803C58F0 022A04 000C+00 0/1 0/0 0/0 .data            @1025 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1025[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58F0-803C58FC 022A10 000C+00 0/1 0/0 0/0 .data            @1029 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1029[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C58FC-803C5908 022A1C 000C+00 0/1 0/0 0/0 .data            @1030 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_1030[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C5908-803C5980 022A28 003C+3C 2/2 0/0 0/0 .data __vt__Q214JStudio_JStage15TAdaptor_camera */
SECTION_DATA extern void* __vt__Q214JStudio_JStage15TAdaptor_camera[15 + 15 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl,
    (void*)adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl,
    (void*)
        adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028B8A0-8028B960 2861E0 00C0+00 0/0 1/1 0/0 .text
 * __ct__Q214JStudio_JStage15TAdaptor_cameraFPCQ26JStage7TSystemPQ26JStage7TCamera */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_camera::TAdaptor_camera(JStage::TSystem const* param_0,
                                                     JStage::TCamera* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028B8A0.s"
}
#pragma pop

/* 8028B960-8028B9D4 2862A0 0074+00 1/0 0/0 0/0 .text __dt__Q214JStudio_JStage15TAdaptor_cameraFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_camera::~TAdaptor_camera() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/__dt__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431298-804312A4 05DFB8 000C+00 1/1 0/0 0/0 .bss             @1018 */
static u8 lit_1018[12];

/* 804312A4-804312B0 05DFC4 000C+00 0/1 0/0 0/0 .bss             @1023 */
#pragma push
#pragma force_active on
static u8 lit_1023[12];
#pragma pop

/* 804312B0-804312BC 05DFD0 000C+00 0/1 0/0 0/0 .bss             @1028 */
#pragma push
#pragma force_active on
static u8 lit_1028[12];
#pragma pop

/* 804312BC-804312C8 05DFDC 000C+00 0/1 0/0 0/0 .bss             @1033 */
#pragma push
#pragma force_active on
static u8 lit_1033[12];
#pragma pop

/* 804312C8-804312D4 05DFE8 000C+00 0/1 0/0 0/0 .bss             @1034 */
#pragma push
#pragma force_active on
static u8 lit_1034[12];
#pragma pop

/* 804312D4-80431378 05DFF4 00A0+04 2/3 0/0 0/0 .bss
 * saoVVOutput___Q214JStudio_JStage15TAdaptor_camera            */
u8 JStudio_JStage::TAdaptor_camera::saoVVOutput_[160 + 4 /* padding */];

/* 8028B9D4-8028BA1C 286314 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_prepare() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BA1C-8028BAF8 28635C 00DC+00 1/0 0/0 0/0 .text
 * adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_begin() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BAF8-8028BB4C 286438 0054+00 1/0 0/0 0/0 .text
 * adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_end() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BB4C-8028BBAC 28648C 0060+00 1/0 0/0 0/0 .text
 * adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl.s"
}
#pragma pop

/* 8028BBAC-8028BBD0 2864EC 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_data(void const* param_0, u32 param_1,
                                                          void const* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl.s"
}
#pragma pop

/* 8028BBD0-8028BC14 286510 0044+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BBD0.s"
}
#pragma pop

/* 8028BC14-8028BC70 286554 005C+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData param_0,
                                                        void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BC14.s"
}
#pragma pop

/* 8028BC70-8028BCEC 2865B0 007C+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BC70.s"
}
#pragma pop

/* 8028BCEC-8028BD00 28662C 0014+00 1/0 0/0 0/0 .text
 * adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BCEC.s"
}
#pragma pop

/* 8028BD00-8028BD44 286640 0044+00 1/0 0/0 0/0 .text
 * adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BD00.s"
}
#pragma pop

/* 8028BD44-8028BDA0 286684 005C+00 1/0 0/0 0/0 .text
 * adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE(
    JStudio::data::TEOperationData param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BD44.s"
}
#pragma pop

/* 8028BDA0-8028BDBC 2866E0 001C+00 1/0 0/0 0/0 .text
 * adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE(
    JStudio::data::TEOperationData param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BDA0.s"
}
#pragma pop

/* 8028BDBC-8028BEB8 2866FC 00FC+00 1/1 0/0 0/0 .text
 * setJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::setJSG_position_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BDBC.s"
}
#pragma pop

/* 8028BEB8-8028BFBC 2867F8 0104+00 1/1 0/0 0/0 .text
 * getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::getJSG_position_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BEB8.s"
}
#pragma pop

/* 8028BFBC-8028C09C 2868FC 00E0+00 1/1 0/0 0/0 .text
 * setJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::setJSG_targetPosition_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BFBC.s"
}
#pragma pop

/* 8028C09C-8028C180 2869DC 00E4+00 1/1 0/0 0/0 .text
 * getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::getJSG_targetPosition_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C09C.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C5980-803C59A0 022AA0 0010+10 2/2 0/0 0/0 .data
 * __vt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>
 */
SECTION_DATA extern void* data_803C5980[4 + 4 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_8028C544,
    (void*)func_8028C4E4,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028C180-8028C4E4 286AC0 0364+00 0/0 1/0 0/0 .text            __sinit_object-camera_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_8028C180() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C180.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8028C180 = (void*)func_8028C180;
#pragma pop

/* 8028C4E4-8028C544 286E24 0060+00 2/1 0/0 0/0 .text
 * __dt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028C4E4() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C4E4.s"
}
#pragma pop

/* 8028C544-8028C574 286E84 0030+00 1/0 0/0 0/0 .text
 * __cl__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>CFfPQ27JStudio8TAdaptor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028C544(f32 param_0, JStudio::TAdaptor* param_1) /* const */ {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C544.s"
}
#pragma pop

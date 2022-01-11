//
// Generated By: dol2asm
// Translation Unit: J2DAnmLoader
//

#include "JSystem/J2DGraph/J2DAnmLoader.h"
#include "JSystem/J2DGraph/J2DAnimation.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct DataBlockHeader {
    /* 0x0 */ u32 mType;
    /* 0x4 */ u32 mNextOffset;
};

struct DataHeader {
    /* 0x00 */ u32 mMagic;
    /* 0x04 */ u32 mType;
    /* 0x08 */ u8 _8[4];
    /* 0x0C */ u32 mCount;
    /* 0x10 */ u8 _10[0x20-0x10];
    /* 0x20 */ DataBlockHeader mFirst;
};

struct J3DAnmVtxColorFullData { /* PlaceHolder Structure */
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9; // padding?
    s16 mFrameMax;
    u16 mAnmTableNum[2];
    u8 field_0x10[0x18-0x10];
    s32 mTableOffsets[2];
    s32 mVtxColorIndexDataOffsets[2];
    s32 mVtxColorIndexPointerOffsets[2];
    s32 mRValuesOffset;
    s32 mGValuesOffset;
    s32 mBValuesOffset;
    s32 mAValuesOffset;
};

struct J3DAnmVisibilityFullData {
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9; // padding?
    s16 mFrameMax;
    u16 field_0xc;
    u16 field_0xe;
    s32 mTableOffset;
    s32 mValuesOffset;
};

struct J3DAnmTransformFullData {
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9;
    s16 mFrameMax;
    u16 field_0xc;
    u8 field_0xe[0x14-0xe];
    s32 mTableOffset;
    s32 mScaleValOffset;
    s32 mRotValOffset;
    s32 mTransValOffset;
};

struct J3DAnmColorKeyData {
    /* 0x00 */ DataBlockHeader mHeader;
    /* 0x08 */ u8 field_0x8;
    /* 0x09 */ u8 field_0x9[3];
    /* 0x0C */ s16 mFrameMax;
    /* 0x0E */ u16 mUpdateMaterialNum;
    /* 0x10 */ u16 field_0x10;
    /* 0x12 */ u16 field_0x12;
    /* 0x14 */ u16 field_0x14;
    /* 0x16 */ u16 field_0x16;
    /* 0x18 */ s32 mTableOffset; /* Created by retype action */
    /* 0x1C */ s32 mUpdateMaterialIDOffset;
    /* 0x20 */ s32 mNameTabOffset; /* Created by retype action */
    /* 0x24 */ s32 mRValOffset;
    /* 0x28 */ s32 mGValOffset;
    /* 0x2C */ s32 mBValOffset;
    /* 0x30 */ s32 mAValOffset;
}; // Size = 0x34

struct J3DAnmTextureSRTKeyData {
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9;
    s16 field_0xa;
    u16 field_0xc;
    u16 field_0xe;
    u16 field_0x10;
    u16 field_0x12;
    s32 mTableOffset;
    s32 mUpdateMatIDOffset;
    s32 mNameTab1Offset;
    s32 mUpdateTexMtxIDOffset;
    s32 unkOffset;
    s32 mScaleValOffset;
    s32 mRotValOffset;
    s32 mTransValOffset;
    u16 field_0x34;
    u16 field_0x36;
    u16 field_0x38;
    u16 field_0x3a;
    s32 mInfoTable2Offset;
    s32 field_0x40;
    u32 mNameTab2Offset;
    s32 field_0x48;
    s32 field_0x4c;
    s32 field_0x50;
    s32 field_0x54;
    s32 field_0x58;
    s32 field_0x5c;
};

struct J3DAnmVtxColorKeyData {
    /* 0x00 */ DataBlockHeader mHeader;
    /* 0x08 */ u8 field_0x8;
    /* 0x09 */ u8 field_0x9;
    /* 0x0A */ s16 mFrameMax;
    /* 0x0C */ u16 mAnmTableNum[2];
    /* 0x10 */ u8 field_0x10[0x18-0x10];
    /* 0x18 */ s32 mTableOffsets[2];
    /* 0x20 */ s32 mVtxColoIndexDataOffset[2];
    /* 0x28 */ s32 mVtxColoIndexPointerOffset[2];
    /* 0x30 */ s32 mRValOffset;
    /* 0x34 */ s32 mGValOffset;
    /* 0x38 */ s32 mBValOffset;
    /* 0x3C */ s32 mAValOffset;
}; // Size = 0x40

struct J3DAnmTexPatternFullData {
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9;
    s16 mFrameMax;
    u16 field_0xc;
    u16 field_0xe;
    s32 mTableOffset;
    s32 mValuesOffset;
    s32 mUpdaterMaterialIDOffset;
    s32 mNameTabOffset;
};

struct J3DAnmTevRegKeyData {
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9; // maybe padding
    s16 mFrameMax;
    u16 mCRegUpdateMaterialNum;
    u16 mKRegUpdateMaterialNum;
    u16 field_0x10;
    u16 field_0x12;
    u16 field_0x14;
    u16 field_0x16;
    u16 field_0x18;
    u16 field_0x1a;
    u16 field_0x1c;
    u16 field_0x1e;
    s32 mCRegTableOffset;
    s32 mKRegTableOffset;
    s32 mCRegUpdateMaterialIDOffset;
    s32 mKRegUpdateMaterialIDOffset;
    s32 mCRegNameTabOffset;
    s32 mKRegNameTabOffset;
    s32 mCRValuesOffset;
    s32 mCGValuesOffset;
    s32 mCBValuesOffset;
    s32 mCAValuesOffset;
    s32 mKRValuesOffset;
    s32 mKGValuesOffset;
    s32 mKBValuesOffset;
    s32 mKAValuesOffset;
};

struct J3DAnmColorFullData { /* PlaceHolder Structure */
    /* 0x00 */ DataBlockHeader mHeader;
    u8 field_0x8;
    u8 field_0x9[3];
    s16 mFrameMax;
    u16 mUpdateMaterialNum;
    u8 field_0x10[0x18-0x10];
    s32 mTableOffset;
    s32 mUpdateMaterialIDOffset;
    s32 mNameTabOffset;
    s32 mRValuesOffset;
    s32 mGValuesOffset;
    s32 mBValuesOffset;
    s32 mAValuesOffset;
};

struct J2DScreen {};

/* 80308A6C-80309290 3033AC 0824+00 0/0 26/26 2/2 .text            load__20J2DAnmLoaderDataBaseFPCv
 */
void* J2DAnmLoaderDataBase::load(void const* param_0) {
    const DataHeader* hdr = (const DataHeader*) param_0;
    if (hdr == NULL)  {
        return NULL;
    } else if (hdr->mMagic == 'J3D1') {
        switch (hdr->mType) {
            case 'bck1':
                {J2DAnmKeyLoader_v15 loader;
                loader._4 = new J2DAnmTransformKey();
                return loader.load(param_0);
                break;
                }
            case 'bpk1':
                {J2DAnmKeyLoader_v15 loader;
                loader._4 = new J2DAnmColorKey();
                return loader.load(param_0);
                break;
                }
            case 'blk1':
                return NULL;
            case 'btk1':
                {J2DAnmKeyLoader_v15 loader;
                loader._4 = new J2DAnmTextureSRTKey();
                return loader.load(param_0);
                break; 
                }
            case 'brk1':
                {J2DAnmKeyLoader_v15 loader;
                loader._4 = new J2DAnmTevRegKey();
                return loader.load(param_0);
                break;
                }
            case 'bxk1':
                {J2DAnmKeyLoader_v15 loader;
                loader._4 = new J2DAnmVtxColorKey();
                return loader.load(param_0);
                break;
                }
            case 'bca1': 
                {J2DAnmFullLoader_v15 loader;
                loader._4 = new J2DAnmTransformFull();
                return loader.load(param_0);
                break;
                }
            case 'bpa1': 
                {J2DAnmFullLoader_v15 loader;
                loader._4 = new J2DAnmColorFull();
                return loader.load(param_0);
                break;
                }
            case 'btp1': 
                {J2DAnmFullLoader_v15 loader;
                loader._4 = new J2DAnmTexPattern();
                return loader.load(param_0);
                }
            case 'bva1': 
                {J2DAnmFullLoader_v15 loader;
                loader._4 = new J2DAnmVisibilityFull();
                return loader.load(param_0);
                break;
                }
            case 'bla1':
                return NULL;
            case 'bxa1': 
                {J2DAnmFullLoader_v15 loader;
                loader._4 = new J2DAnmVtxColorFull();
                return loader.load(param_0);
                }
        }
        return NULL;
    } else {
        return NULL;
    }
}

/* 80309290-803092AC 303BD0 001C+00 1/1 0/0 0/0 .text            __ct__19J2DAnmKeyLoader_v15Fv */
J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15() {}

/* 803092AC-80309308 303BEC 005C+00 2/1 0/0 0/0 .text            __dt__19J2DAnmKeyLoader_v15Fv */
J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15() {}

/* 80309308-80309414 303C48 010C+00 2/1 0/0 0/0 .text            load__19J2DAnmKeyLoader_v15FPCv */
void *J2DAnmKeyLoader_v15::load(void const* param_0) {
    const DataHeader *hdr = (const DataHeader*) param_0;
    const DataBlockHeader *dataPtr = &hdr->mFirst;
    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
            case 'ANK1':
                this->readAnmTransform((J3DAnmTransformKeyData*) dataPtr);
                break;
            case 'PAK1':
                this->readAnmColor((J3DAnmColorKeyData*) dataPtr);
                break;
            case 'TTK1':
                this->readAnmTextureSRT((J3DAnmTextureSRTKeyData*) dataPtr);
                break;
            case 'VCK1':
                this->readAnmVtxColor((J3DAnmVtxColorKeyData*) dataPtr);
                break;
            case 'TRK1':
                this->readAnmTevReg((J3DAnmTevRegKeyData*) dataPtr);
                break;
        }
        dataPtr = (DataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
    return _4;
}

/* 80309414-80309570 303D54 015C+00 1/0 0/0 0/0 .text
 * setResource__19J2DAnmKeyLoader_v15FP10J2DAnmBasePCv          */
void J2DAnmKeyLoader_v15::setResource(J2DAnmBase* pAnm, void const* param_1) {
    const DataHeader *hdr = (const DataHeader*) param_1;
    const DataBlockHeader *dataPtr = &hdr->mFirst;
    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
            case 'ANK1':
                if (pAnm->getKind() == 0) {
                    this->setAnmTransform((J2DAnmTransformKey*) pAnm, (J3DAnmTransformKeyData*) dataPtr);
                }
                break;
            case 'PAK1':
                if (pAnm->getKind() == 1) {
                    this->setAnmColor((J2DAnmColorKey*) pAnm, (J3DAnmColorKeyData*) dataPtr);
                }
                break;
            case 'TTK1':
                if (pAnm->getKind() == 4) {
                    this->setAnmTextureSRT((J2DAnmTextureSRTKey*) pAnm, (J3DAnmTextureSRTKeyData*) dataPtr);
                }
                break;
            case 'TRK1':
                if (pAnm->getKind() == 5) {
                    this->setAnmTevReg((J2DAnmTevRegKey*) pAnm, (J3DAnmTevRegKeyData*) dataPtr);
                }
                break;
            case 'VCK1':
                if (pAnm->getKind() == 7) {
                    this->setAnmVtxColor((J2DAnmVtxColorKey*) pAnm, (J3DAnmVtxColorKeyData*) dataPtr);
                }
                break;
        }
        dataPtr = (DataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
}

/* 80309570-80309598 303EB0 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__19J2DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData */
void J2DAnmKeyLoader_v15::readAnmTransform(J3DAnmTransformKeyData const* pData) {
    this->setAnmTransform((J2DAnmTransformKey*)_4, pData);
}

template <typename T> // TODO move
T* JSUConvertOffsetToPtr(const void* ptr, const void* offset) {
    if (ptr == NULL) {
        return NULL;
    } else {
        return (T*) ((s32)ptr + (s32)offset);
    }
}

/* 80309598-80309634 303ED8 009C+00 2/2 0/0 0/0 .text
 * setAnmTransform__19J2DAnmKeyLoader_v15FP18J2DAnmTransformKeyPC22J3DAnmTransformKeyData */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey* param_0, J3DAnmTransformKeyData const* param_1) {
    param_0->field_0x22 = param_1->_C;
    param_0->mFrameMax = param_1->mFrameMax;
    param_0->field_0x4 = param_1->_8;
    param_0->field_0x24 = param_1->_9;
    param_0->mFrame = 0;
    param_0->mInfoTable = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(param_1, (void*)param_1->mTableOffset);
    param_0->mScaleValues = JSUConvertOffsetToPtr<f32>(param_1, (void*) param_1->mScaleOffset);
    param_0->mRotationValues = JSUConvertOffsetToPtr<s16>(param_1, (void*) param_1->mRotationOffset);
    param_0->mTranslateValues = JSUConvertOffsetToPtr<f32>(param_1, (void*) param_1->mTranslateOffset);
}

/* 80309634-8030965C 303F74 0028+00 1/1 0/0 0/0 .text
 * readAnmTextureSRT__19J2DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(J3DAnmTextureSRTKeyData const* param_0) {
    this->setAnmTextureSRT((J2DAnmTextureSRTKey*) _4, param_0);
}

/* 8030965C-80309848 303F9C 01EC+00 2/2 0/0 0/0 .text
 * setAnmTextureSRT__19J2DAnmKeyLoader_v15FP19J2DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey* pAnm, J3DAnmTextureSRTKeyData const* pData) {
    pAnm->mUpdateMaterialNum = pData->field_0xc;
    pAnm->mFrameMax = pData->field_0xa;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->field_0x10 = pData->field_0x9;
    pAnm->mFrame = 0;
    pAnm->mUpdateMaterialNum = pData->field_0xc;
    pAnm->field_0x1a = pData->field_0xe;
    pAnm->field_0x1c = pData->field_0x10;
    pAnm->field_0x1e = pData->field_0x12;
    pAnm->mInfoTable = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(pData, (void*)pData->mTableOffset);
    pAnm->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*)pData->mUpdateMatIDOffset);
    pAnm->field_0x34.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*)pData->mNameTab1Offset));
    pAnm->mUpdateTexMtxID = JSUConvertOffsetToPtr<u8>(pData, (void*)pData->mUpdateTexMtxIDOffset);
    pAnm->field_0x44 = JSUConvertOffsetToPtr<Vec>(pData, (void*)pData->unkOffset);
    pAnm->mScaleValues = JSUConvertOffsetToPtr<f32>(pData, (void*)pData->mScaleValOffset);
    pAnm->mRotationValues = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->mRotValOffset);
    pAnm->mTranslationValues = JSUConvertOffsetToPtr<f32>(pData, (void*)pData->mTransValOffset);
    if (pData->mNameTab2Offset != 0) {
        pAnm->field_0x68.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*)pData->mNameTab2Offset));
    }
    pAnm->field_0x4e = pData->field_0x34;
    pAnm->field_0x48 = pData->field_0x36;
    pAnm->field_0x4a = pData->field_0x38;
    pAnm->field_0x4c = pData->field_0x3a;
    pAnm->field_0x5c = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(pData, (void*)pData->mInfoTable2Offset);
    pAnm->field_0x64 = JSUConvertOffsetToPtr<u16>(pData, (void*)pData->field_0x40);
    pAnm->field_0x60 = JSUConvertOffsetToPtr<u8>(pData, (void*)pData->field_0x48);
    pAnm->field_0x78 = JSUConvertOffsetToPtr<Vec>(pData, (void*)pData->field_0x48);
    pAnm->field_0x50 = JSUConvertOffsetToPtr<f32>(pData, (void*)pData->field_0x50);
    pAnm->field_0x54 = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->field_0x54);
    pAnm->field_0x58 = JSUConvertOffsetToPtr<f32>(pData, (void*)pData->field_0x58);
    switch (pData->field_0x5c) {
        case 0:
            pAnm->field_0x7c = 0;
            break;
        case 1:
            pAnm->field_0x7c = 1;
            break;
        default:
            pAnm->field_0x7c = 0;
            break;
    }
}

/* 80309848-80309870 304188 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__19J2DAnmKeyLoader_v15FPC18J3DAnmColorKeyData   */
void J2DAnmKeyLoader_v15::readAnmColor(J3DAnmColorKeyData const* pData) {
    this->setAnmColor((J2DAnmColorKey*)_4, pData);
}

/* 80309870-8030995C 3041B0 00EC+00 2/2 0/0 0/0 .text
 * setAnmColor__19J2DAnmKeyLoader_v15FP14J2DAnmColorKeyPC18J3DAnmColorKeyData */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey* pAnm, J3DAnmColorKeyData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mUpdateMaterialNum = pData->mUpdateMaterialNum;
    pAnm->field_0x10 = pData->field_0x10;
    pAnm->field_0x12 = pData->field_0x12;
    pAnm->field_0x14 = pData->field_0x14;
    pAnm->field_0x16 = pData->field_0x16;
    pAnm->mInfoTable = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(pData, (void*) pData->mTableOffset);
    pAnm->mRValues = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->mRValOffset);
    pAnm->mGValues = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->mGValOffset);
    pAnm->mBValues = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->mBValOffset);
    pAnm->mAValues = JSUConvertOffsetToPtr<s16>(pData, (void*)pData->mAValOffset);
    pAnm->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*)pData->mUpdateMaterialIDOffset);
    pAnm->field_0x20.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*)pData->mNameTabOffset));
}

/* 8030995C-80309984 30429C 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__19J2DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData */
void J2DAnmKeyLoader_v15::readAnmVtxColor(J3DAnmVtxColorKeyData const* pData) {
    this->setAnmVtxColor((J2DAnmVtxColorKey*) _4, pData);
}

/* 80309984-80309A80 3042C4 00FC+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__19J2DAnmKeyLoader_v15FP17J2DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey* pAnm, J3DAnmVtxColorKeyData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mAnmTableNum[0] = pData->mAnmTableNum[0];
    pAnm->mAnmTableNum[1] = pData->mAnmTableNum[1];
    pAnm->mInfoTable[0] = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(pData, (void*) pData->mTableOffsets[0]);
    pAnm->mInfoTable[1] = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(pData, (void*) pData->mTableOffsets[1]);
    pAnm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(pData, (void*) pData->mVtxColoIndexDataOffset[0]);
    pAnm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(pData, (void*) pData->mVtxColoIndexDataOffset[1]);
    pAnm->mVtxColorIndexPointer[0] = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mVtxColoIndexPointerOffset[0]);
    pAnm->mVtxColorIndexPointer[1] = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mVtxColoIndexPointerOffset[1]);
    pAnm->mRValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mRValOffset);
    pAnm->mGValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mGValOffset);
    pAnm->mBValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mBValOffset);
    pAnm->mAValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mAValOffset);
}

/* 80309A80-80309B8C 3043C0 010C+00 2/1 0/0 0/0 .text            load__20J2DAnmFullLoader_v15FPCv */
void *J2DAnmFullLoader_v15::load(void const* param_0) {
    const DataHeader *hdr = (const DataHeader*) param_0;
    const DataBlockHeader *dataPtr = &hdr->mFirst;
    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
            case 'ANF1':
                this->readAnmTransform((J3DAnmTransformFullData*) dataPtr);
                break;
            case 'PAF1':
                this->readAnmColor((J3DAnmColorFullData*) dataPtr);
                break;
            case 'TPT1':
                this->readAnmTexPattern((J3DAnmTexPatternFullData*) dataPtr);
                break;
            case 'VAF1':
                this->readAnmVisibility((J3DAnmVisibilityFullData*) dataPtr);
                break;
            case 'VCF1':
                this->readAnmVtxColor((J3DAnmVtxColorFullData*) dataPtr);
                break;
        }
        dataPtr = (DataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
    return _4;
}

/* 80309B8C-80309CE8 3044CC 015C+00 1/0 0/0 0/0 .text
 * setResource__20J2DAnmFullLoader_v15FP10J2DAnmBasePCv         */
void J2DAnmFullLoader_v15::setResource(J2DAnmBase* pAnm, void const* pData) {
    const DataHeader *hdr = (const DataHeader*) pData;
    const DataBlockHeader *dataPtr = &hdr->mFirst;
    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
            case 'ANF1':
                if (pAnm->getKind() == 0)
                    this->setAnmTransform((J2DAnmTransformFull*) pAnm, (J3DAnmTransformFullData*) dataPtr);
                break;
            case 'PAF1':
                if (pAnm->getKind() == 1)
                    this->setAnmColor((J2DAnmColorFull*) pAnm, (J3DAnmColorFullData*) dataPtr);
                break;
            case 'TPT1':
                if (pAnm->getKind() == 2)
                    this->setAnmTexPattern((J2DAnmTexPattern*) pAnm, (J3DAnmTexPatternFullData*) dataPtr);
                break;
            case 'VAF1':
                if (pAnm->getKind() == 6)
                    this->setAnmVisibility((J2DAnmVisibilityFull*) pAnm, (J3DAnmVisibilityFullData*) dataPtr);
                break;
            case 'VCF1':
                if (pAnm->getKind() == 7)
                    this->setAnmVtxColor((J2DAnmVtxColorFull*) pAnm, (J3DAnmVtxColorFullData*) dataPtr);
                break;
        }
        dataPtr = (DataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
}

/* 80309CE8-80309D04 304628 001C+00 1/1 0/0 0/0 .text            __ct__20J2DAnmFullLoader_v15Fv */
J2DAnmFullLoader_v15::J2DAnmFullLoader_v15() {}

/* 80309D04-80309D60 304644 005C+00 2/1 0/0 0/0 .text            __dt__20J2DAnmFullLoader_v15Fv */
J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15() {}

/* 80309D60-80309D88 3046A0 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__20J2DAnmFullLoader_v15FPC23J3DAnmTransformFullData */
void J2DAnmFullLoader_v15::readAnmTransform(J3DAnmTransformFullData const* pData) {
    this->setAnmTransform((J2DAnmTransformFull*) _4, pData);
}

/* 80309D88-80309E1C 3046C8 0094+00 2/2 0/0 0/0 .text
 * setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull* pAnm, J3DAnmTransformFullData const* pData) {
    pAnm->field_0x22 = pData->field_0xc;
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mTableInfo = JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(pData, (void*) pData->mTableOffset);
    pAnm->mScaleValues = JSUConvertOffsetToPtr<f32>(pData, (void*) pData->mScaleValOffset);
    pAnm->mRotationValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mRotValOffset);
    pAnm->mTranslateValues = JSUConvertOffsetToPtr<f32>(pData, (void*) pData->mTransValOffset);

}

/* 80309E1C-80309E44 30475C 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__20J2DAnmFullLoader_v15FPC19J3DAnmColorFullData */
void J2DAnmFullLoader_v15::readAnmColor(J3DAnmColorFullData const* pData) {
    this->setAnmColor((J2DAnmColorFull*) _4, pData);
}

/* 80309E44-80309F10 304784 00CC+00 2/2 0/0 0/0 .text
 * setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull* pAnm, J3DAnmColorFullData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mUpdateMaterialNum = pData->mUpdateMaterialNum;
    pAnm->mInfoTable = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(pData, (void*) pData->mTableOffset);
    pAnm->mRValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mRValuesOffset);
    pAnm->mGValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mGValuesOffset);
    pAnm->mBValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mBValuesOffset);
    pAnm->mAValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mAValuesOffset);
    pAnm->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mUpdateMaterialIDOffset);
    pAnm->field_0x20.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*) pData->mNameTabOffset));

}

/* 80309F10-80309F38 304850 0028+00 1/1 0/0 0/0 .text
 * readAnmTexPattern__20J2DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData */
void J2DAnmFullLoader_v15::readAnmTexPattern(J3DAnmTexPatternFullData const* pData) {
    this->setAnmTexPattern((J2DAnmTexPattern*) _4, pData);
}

/* 80309F38-80309FDC 304878 00A4+00 2/2 0/0 0/0 .text
 * setAnmTexPattern__20J2DAnmFullLoader_v15FP16J2DAnmTexPatternPC24J3DAnmTexPatternFullData */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern* pAnm, J3DAnmTexPatternFullData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mUpdateMaterialNum = pData->field_0xc;
    pAnm->field_0x18 = pData->field_0xe;
    pAnm->mAnmTable = JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(pData, (void*) pData->mTableOffset);
    pAnm->mValues = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mValuesOffset);
    pAnm->mUpdaterMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mUpdaterMaterialIDOffset);
    pAnm->field_0x20.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*) pData->mNameTabOffset));
}

/* 80309FDC-8030A004 30491C 0028+00 1/1 0/0 0/0 .text
 * readAnmTevReg__19J2DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData */
void J2DAnmKeyLoader_v15::readAnmTevReg(J3DAnmTevRegKeyData const* pData) {
    this->setAnmTevReg((J2DAnmTevRegKey*) _4, pData);
}

/* 8030A004-8030A190 304944 018C+00 2/2 0/0 0/0 .text
 * setAnmTevReg__19J2DAnmKeyLoader_v15FP15J2DAnmTevRegKeyPC19J3DAnmTevRegKeyData */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey* pAnm, J3DAnmTevRegKeyData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mCRegUpdateMaterialNum = pData->mCRegUpdateMaterialNum;
    pAnm->mAnmCRegKeyTable = JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(pData, (void*) pData->mCRegTableOffset);
    pAnm->mCRegUpdateMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mCRegUpdateMaterialIDOffset);
    pAnm->mCRegNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*) pData->mCRegNameTabOffset));
    pAnm->mKRegUpdateMaterialNum = pData->mKRegUpdateMaterialNum;
    pAnm->mAnmKRegKeyTable = JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(pData, (void*) pData->mKRegTableOffset);
    pAnm->mKRegUpdateMaterialID = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mKRegUpdateMaterialIDOffset);
    pAnm->mKRegNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(pData, (void*) pData->mKRegNameTabOffset));
    pAnm->field_0x14 = pData->field_0x10;
    pAnm->field_0x16 = pData->field_0x12;
    pAnm->field_0x18 = pData->field_0x14;
    pAnm->field_0x1a = pData->field_0x16;
    pAnm->mCRValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mCRValuesOffset);
    pAnm->mCGValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mCGValuesOffset);
    pAnm->mCBValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mCBValuesOffset);
    pAnm->mCAValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mCAValuesOffset);
    pAnm->field_0x1c = pData->field_0x18;
    pAnm->field_0x1e = pData->field_0x1a;
    pAnm->field_0x20 = pData->field_0x1c;
    pAnm->field_0x22 = pData->field_0x1e;
    pAnm->mKRValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mKRValuesOffset);
    pAnm->mKGValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mKGValuesOffset);
    pAnm->mKBValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mKBValuesOffset);
    pAnm->mKAValues = JSUConvertOffsetToPtr<s16>(pData, (void*) pData->mKAValuesOffset);
}

/* 8030A190-8030A1B8 304AD0 0028+00 1/1 0/0 0/0 .text
 * readAnmVisibility__20J2DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData */
void J2DAnmFullLoader_v15::readAnmVisibility(J3DAnmVisibilityFullData const* pData) {
    this->setAnmVisibility((J2DAnmVisibilityFull*) _4, pData);
}

/* 8030A1B8-8030A234 304AF8 007C+00 2/2 0/0 0/0 .text
 * setAnmVisibility__20J2DAnmFullLoader_v15FP20J2DAnmVisibilityFullPC24J3DAnmVisibilityFullData */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull* pAnm, J3DAnmVisibilityFullData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->field_0x10 = pData->field_0xc;
    pAnm->field_0x12 = pData->field_0xe;
    pAnm->mTable = JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(pData, (void*) pData->mTableOffset);
    pAnm->mValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mValuesOffset);
}

/* 8030A234-8030A25C 304B74 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__20J2DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData */
void J2DAnmFullLoader_v15::readAnmVtxColor(J3DAnmVtxColorFullData const* pData) {
    this->setAnmVtxColor((J2DAnmVtxColorFull*) _4, pData);
}

/* 8030A25C-8030A358 304B9C 00FC+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull* pAnm, J3DAnmVtxColorFullData const* pData) {
    pAnm->mFrameMax = pData->mFrameMax;
    pAnm->field_0x4 = pData->field_0x8;
    pAnm->mFrame = 0;
    pAnm->mAnmTableNum[0] = pData->mAnmTableNum[0];
    pAnm->mAnmTableNum[1] = pData->mAnmTableNum[1];
    pAnm->mInfoTable[0] = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(pData, (void*) pData->mTableOffsets[0]);
    pAnm->mInfoTable[1] = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(pData, (void*) pData->mTableOffsets[1]);
    pAnm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(pData, (void*) pData->mVtxColorIndexDataOffsets[0]);
    pAnm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(pData, (void*) pData->mVtxColorIndexDataOffsets[1]);
    pAnm->mVtxColorIndexPointer[0] = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mVtxColorIndexPointerOffsets[0]);
    pAnm->mVtxColorIndexPointer[1] = JSUConvertOffsetToPtr<u16>(pData, (void*) pData->mVtxColorIndexPointerOffsets[1]);
    pAnm->mRValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mRValuesOffset);
    pAnm->mGValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mGValuesOffset);
    pAnm->mBValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mBValuesOffset);
    pAnm->mAValues = JSUConvertOffsetToPtr<u8>(pData, (void*) pData->mAValuesOffset);

}

/* 8030A358-8030A3B4 304C98 005C+00 1/0 0/0 0/0 .text            __dt__14J2DAnmVtxColorFv */
// J2DAnmVtxColor::~J2DAnmVtxColor() {}
/* 8030A3B4-8030A410 304CF4 005C+00 1/0 0/0 0/0 .text            __dt__20J2DAnmVisibilityFullFv */
// J2DAnmVisibilityFull::~J2DAnmVisibilityFull() {}

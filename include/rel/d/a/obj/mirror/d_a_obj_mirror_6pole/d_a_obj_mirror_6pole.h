#ifndef D_A_OBJ_MIRROR_6POLE_H
#define D_A_OBJ_MIRROR_6POLE_H

#include "f_op/f_op_actor_mng.h"
#include "d/com/d_com_inf_game.h"

class daObjMirror6Pole_c;
typedef void (daObjMirror6Pole_c::*actionFunc)();

class daObjMirror6Pole_c : public fopAc_ac_c {
public:
    enum Mode_e {
        MODE_WAIT_e,
        MODE_DEMO_e,
        MODE_MAX_e,
    };

    /* 80C95E18 */ void initWait();
    /* 80C95E2C */ void executeWait();
    /* 80C95E88 */ void initDemo();
    /* 80C95E8C */ void executeDemo();
    /* 80C95EFC */ void setBaseMtx();
    /* 80C95F50 */ static int createHeapCallBack(fopAc_ac_c* i_this);
    /* 80C95F70 */ int CreateHeap();

    inline ~daObjMirror6Pole_c();

    inline int execute();
    inline int create();
    inline int draw();

    void initBaseMtx() {
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
        // setBaseMtx();

        // this is supposed to be setBaseMtx, but it gets inlined here for some reason?
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::YrotM(shape_angle.y);

        mpModel->i_setBaseTRMtx(mDoMtx_stack_c::get());
    }

    void create_init() {
        initBaseMtx();
        mAttentionInfo.mFlags = 0;
        setAction(MODE_WAIT_e);
    }

    u8 getSwitchNo() { return (fopAcM_GetParam(this) >> 8) & 0xFF; }

    bool isSwitch() {
        return i_fopAcM_isSwitch(this, getSwitchNo()) ||
               i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[361]) ||
               i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[354]);
    }

    void setAction(Mode_e i_action) {
        mMode = i_action;
        mAction = ActionTable[mMode];

        callInit();
    }

    void callInit() { (this->*mAction[0])(); }

    void callExecute() { (this->*mAction[1])(); }

    static actionFunc ActionTable[][2];

    /* 0x568 */ J3DModel* mpModel;
    /* 0x56C */ mDoExt_bckAnm* mpBck;
    /* 0x570 */ request_of_phase_process_class mPhase;
    /* 0x578 */ actionFunc* mAction;
    /* 0x57C */ Mode_e mMode;
};

#endif /* D_A_OBJ_MIRROR_6POLE_H */

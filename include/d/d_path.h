#ifndef D_D_PATH_H
#define D_D_PATH_H

#include "dolphin/types.h"
#include "d/d_stage.h"

class dStage_dPnt_c;

struct dPath {
    /* 0x0 */ u16 m_num;
    /* 0x2 */ u16 m_nextID;
    /* 0x4 */ u8 field_0x4;
    /* 0x5 */ u8 m_closed;
    /* 0x6 */ u8 field_0x6;
    /* 0x8 */ dStage_dPnt_c* m_points;
};

// should be move to dlib TU per chn debug
inline int dPath_ChkClose(dPath* i_path) { return (i_path->m_closed & 1); }

dPath* dPath_GetRoomPath(int path_index, int room_no);

#endif /* D_D_PATH_H */

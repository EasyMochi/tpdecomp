#
# Generate By: dol2asm
# Module: 72
#

# Libraries
LIBRARIES = [
	"d/a/d_a_fr",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_fr",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80519800,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051982C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519858,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519878,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519894,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805198EC,'size':96,'pad':0,'label':"__ct__10daFr_HIO_cFv",'name':"__ct__10daFr_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051994C,'size':168,'pad':0,'label':"anm_init__FP8fr_classifUcf",'name':"anm_init__FP8fr_classifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805199F4,'size':196,'pad':0,'label':"daFr_Draw__FP8fr_class",'name':"daFr_Draw__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519AB8,'size':92,'pad':0,'label':"sibuki_set__FP8fr_class",'name':"sibuki_set__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519B14,'size':76,'pad':0,'label':"s_wd_sub__FPvPv",'name':"s_wd_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519B60,'size':456,'pad':0,'label':"wd_check__FP8fr_class",'name':"wd_check__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519D28,'size':252,'pad':0,'label':"way_bg_check__FP8fr_class",'name':"way_bg_check__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80519E24,'size':692,'pad':0,'label':"fr_normal__FP8fr_class",'name':"fr_normal__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A0D8,'size':576,'pad':0,'label':"fr_away__FP8fr_class",'name':"fr_away__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A318,'size':576,'pad':0,'label':"fr_s_normal__FP8fr_class",'name':"fr_s_normal__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A558,'size':200,'pad':0,'label':"fr_s_wait__FP8fr_class",'name':"fr_s_wait__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A620,'size':512,'pad':0,'label':"fr_s_away__FP8fr_class",'name':"fr_s_away__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A820,'size':228,'pad':0,'label':"fr_eat__FP8fr_class",'name':"fr_eat__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051A904,'size':408,'pad':0,'label':"swim_on__FP8fr_class",'name':"swim_on__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051AA9C,'size':400,'pad':0,'label':"swim_off__FP8fr_class",'name':"swim_off__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051AC2C,'size':216,'pad':0,'label':"fr_message__FP8fr_class",'name':"fr_message__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051AD04,'size':840,'pad':0,'label':"action__FP8fr_class",'name':"action__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B04C,'size':292,'pad':0,'label':"message__FP8fr_class",'name':"message__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B170,'size':484,'pad':0,'label':"daFr_Execute__FP8fr_class",'name':"daFr_Execute__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B354,'size':8,'pad':0,'label':"daFr_IsDelete__FP8fr_class",'name':"daFr_IsDelete__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8051B35C,'size':84,'pad':0,'label':"daFr_Delete__FP8fr_class",'name':"daFr_Delete__FP8fr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B3B0,'size':416,'pad':0,'label':"useHeapIfrt__FP10fopAc_ac_c",'name':"useHeapIfrt__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B550,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B598,'size':648,'pad':0,'label':"daFr_Create__FP10fopAc_ac_c",'name':"daFr_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B820,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B868,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B8B0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B920,'size':72,'pad':0,'label':"__dt__10daFr_HIO_cFv",'name':"__dt__10daFr_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B968,'size':60,'pad':0,'label':"__sinit_d_a_fr_cpp",'name':"__sinit_d_a_fr_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x8051B9A4,'size':8,'pad':0,'label':"func_8051B9A4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B9AC,'size':8,'pad':0,'label':"func_8051B9AC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8051B9B4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8051B9BC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8051B9C8,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[15,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9CC,'size':4,'pad':0,'label':"lit_3650",'name':"@3650",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9D0,'size':4,'pad':0,'label':"lit_3651",'name':"@3651",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9D4,'size':4,'pad':0,'label':"lit_3652",'name':"@3652",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9D8,'size':4,'pad':0,'label':"lit_3653",'name':"@3653",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9DC,'size':4,'pad':0,'label':"lit_3654",'name':"@3654",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9E0,'size':4,'pad':0,'label':"lit_3655",'name':"@3655",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9E4,'size':4,'pad':0,'label':"lit_3669",'name':"@3669",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051B9E8,'size':4,'pad':0,'label':"lit_3670",'name':"@3670",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9EC,'size':4,'pad':0,'label':"lit_3691",'name':"@3691",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9F0,'size':4,'pad':4,'label':"lit_3700",'name':"@3700",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051B9F8,'size':8,'pad':0,'label':"lit_3762",'name':"@3762",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BA00,'size':8,'pad':0,'label':"lit_3763",'name':"@3763",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BA08,'size':8,'pad':0,'label':"lit_3764",'name':"@3764",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BA10,'size':4,'pad':0,'label':"lit_3765",'name':"@3765",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA14,'size':4,'pad':0,'label':"lit_3796",'name':"@3796",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA18,'size':4,'pad':0,'label':"lit_3849",'name':"@3849",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA1C,'size':4,'pad':0,'label':"lit_3850",'name':"@3850",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA20,'size':4,'pad':0,'label':"lit_3851",'name':"@3851",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA24,'size':4,'pad':0,'label':"lit_3901",'name':"@3901",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA28,'size':4,'pad':0,'label':"lit_3902",'name':"@3902",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA2C,'size':4,'pad':0,'label':"lit_3903",'name':"@3903",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA30,'size':4,'pad':0,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA34,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA38,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA3C,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA40,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA44,'size':4,'pad':0,'label':"lit_3981",'name':"@3981",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA48,'size':4,'pad':0,'label':"lit_3982",'name':"@3982",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA4C,'size':4,'pad':0,'label':"lit_3983",'name':"@3983",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA50,'size':4,'pad':0,'label':"lit_4108",'name':"@4108",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8051BA54,'size':4,'pad':0,'label':"lit_4109",'name':"@4109",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA58,'size':4,'pad':0,'label':"lit_4110",'name':"@4110",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA5C,'size':4,'pad':0,'label':"lit_4111",'name':"@4111",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA60,'size':4,'pad':0,'label':"lit_4112",'name':"@4112",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA64,'size':4,'pad':0,'label':"lit_4144",'name':"@4144",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA68,'size':4,'pad':0,'label':"lit_4145",'name':"@4145",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA6C,'size':4,'pad':0,'label':"lit_4158",'name':"@4158",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA70,'size':4,'pad':0,'label':"lit_4224",'name':"@4224",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA74,'size':4,'pad':0,'label':"lit_4225",'name':"@4225",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA78,'size':8,'pad':0,'label':"lit_4322",'name':"@4322",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BA80,'size':4,'pad':0,'label':"lit_4466",'name':"@4466",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA84,'size':4,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8051BA88,'size':11,'pad':0,'label':"d_a_fr__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8051BA94,'size':204,'pad':0,'label':"lit_4226",'name':"@4226",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8051BB60,'size':32,'pad':0,'label':"l_daFr_Method",'name':"l_daFr_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8051BB80,'size':48,'pad':0,'label':"g_profile_FR",'name':"g_profile_FR",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8051BBB0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8051BBBC,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8051BBC8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8051BBEC,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8051BBF8,'size':12,'pad':0,'label':"__vt__10daFr_HIO_c",'name':"__vt__10daFr_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8051BC08,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BC10,'size':4,'pad':0,'label':"data_8051BC10",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BC14,'size':12,'pad':0,'label':"lit_3644",'name':"@3644",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8051BC20,'size':44,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__10daFr_HIO_cFv":5,
	"anm_init__FP8fr_classifUcf":6,
	"daFr_Draw__FP8fr_class":7,
	"sibuki_set__FP8fr_class":8,
	"s_wd_sub__FPvPv":9,
	"wd_check__FP8fr_class":10,
	"way_bg_check__FP8fr_class":11,
	"fr_normal__FP8fr_class":12,
	"fr_away__FP8fr_class":13,
	"fr_s_normal__FP8fr_class":14,
	"fr_s_wait__FP8fr_class":15,
	"fr_s_away__FP8fr_class":16,
	"fr_eat__FP8fr_class":17,
	"swim_on__FP8fr_class":18,
	"swim_off__FP8fr_class":19,
	"fr_message__FP8fr_class":20,
	"action__FP8fr_class":21,
	"message__FP8fr_class":22,
	"daFr_Execute__FP8fr_class":23,
	"daFr_IsDelete__FP8fr_class":24,
	"daFr_Delete__FP8fr_class":25,
	"useHeapIfrt__FP10fopAc_ac_c":26,
	"__dt__12J3DFrameCtrlFv":27,
	"daFr_Create__FP10fopAc_ac_c":28,
	"__dt__8cM3dGSphFv":29,
	"__dt__8cM3dGAabFv":30,
	"__dt__12dBgS_ObjAcchFv":31,
	"__dt__10daFr_HIO_cFv":32,
	"__sinit_d_a_fr_cpp":33,
	"func_8051B9A4":34,
	"func_8051B9AC":35,
	"_ctors":36,
	"_dtors":37,
	"lit_3649":38,
	"lit_3650":39,
	"lit_3651":40,
	"lit_3652":41,
	"lit_3653":42,
	"lit_3654":43,
	"lit_3655":44,
	"lit_3669":45,
	"lit_3670":46,
	"lit_3691":47,
	"lit_3700":48,
	"lit_3762":49,
	"lit_3763":50,
	"lit_3764":51,
	"lit_3765":52,
	"lit_3796":53,
	"lit_3849":54,
	"lit_3850":55,
	"lit_3851":56,
	"lit_3901":57,
	"lit_3902":58,
	"lit_3903":59,
	"lit_3904":60,
	"lit_3957":61,
	"lit_3958":62,
	"lit_3959":63,
	"lit_3960":64,
	"lit_3981":65,
	"lit_3982":66,
	"lit_3983":67,
	"lit_4108":68,
	"lit_4109":69,
	"lit_4110":70,
	"lit_4111":71,
	"lit_4112":72,
	"lit_4144":73,
	"lit_4145":74,
	"lit_4158":75,
	"lit_4224":76,
	"lit_4225":77,
	"lit_4322":78,
	"lit_4466":79,
	"lit_4467":80,
	"d_a_fr__stringBase0":81,
	"lit_4226":82,
	"l_daFr_Method":83,
	"g_profile_FR":84,
	"__vt__8cM3dGSph":85,
	"__vt__8cM3dGAab":86,
	"__vt__12dBgS_ObjAcch":87,
	"__vt__12J3DFrameCtrl":88,
	"__vt__10daFr_HIO_c":89,
	"__global_destructor_chain":90,
	"data_8051BC10":91,
	"lit_3644":92,
	"l_HIO":93,
}

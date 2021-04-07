#
# Generate By: dol2asm
# Module: 613
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_scannon",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_scannon",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80CC6A20,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6A4C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6A78,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6A98,'size':84,'pad':0,'label':"eventCallBack__FPvi",'name':"eventCallBack__FPvi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6AEC,'size':32,'pad':0,'label':"daSCannon_c_createHeap__FP10fopAc_ac_c",'name':"daSCannon_c_createHeap__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6B0C,'size':188,'pad':0,'label':"__ct__11daSCannon_cFv",'name':"__ct__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6BC8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6C10,'size':256,'pad':0,'label':"__dt__11daSCannon_cFv",'name':"__dt__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC6D10,'size':1044,'pad':0,'label':"create__11daSCannon_cFv",'name':"create__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7124,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7194,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7204,'size':36,'pad':0,'label':"execute__11daSCannon_cFv",'name':"execute__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7228,'size':596,'pad':0,'label':"draw__11daSCannon_cFv",'name':"draw__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC747C,'size':140,'pad':0,'label':"Delete__11daSCannon_cFv",'name':"Delete__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7508,'size':112,'pad':0,'label':"setModelMtx__11daSCannon_cFv",'name':"setModelMtx__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7578,'size':144,'pad':0,'label':"setPtlModelMtx__11daSCannon_cFv",'name':"setPtlModelMtx__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7608,'size':872,'pad':0,'label':"createHeap__11daSCannon_cFv",'name':"createHeap__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7970,'size':160,'pad':0,'label':"middleExe__11daSCannon_cFv",'name':"middleExe__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7A10,'size':168,'pad':0,'label':"orderEvtInit__11daSCannon_cFv",'name':"orderEvtInit__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7AB8,'size':400,'pad':0,'label':"exeModeWait__11daSCannon_cFv",'name':"exeModeWait__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7C48,'size':204,'pad':0,'label':"exeModeOrderEvt__11daSCannon_cFv",'name':"exeModeOrderEvt__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7D14,'size':424,'pad':0,'label':"exeModeActionEvt__11daSCannon_cFv",'name':"exeModeActionEvt__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7EBC,'size':4,'pad':0,'label':"exeModeEnd__11daSCannon_cFv",'name':"exeModeEnd__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CC7EC0,'size':236,'pad':0,'label':"demoExe__11daSCannon_cFv",'name':"demoExe__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC7FAC,'size':152,'pad':0,'label':"demoModeInit__11daSCannon_cFi",'name':"demoModeInit__11daSCannon_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8044,'size':4,'pad':0,'label':"demoInitLinkIn__11daSCannon_cFv",'name':"demoInitLinkIn__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CC8048,'size':192,'pad':0,'label':"demoExeLinkIn__11daSCannon_cFv",'name':"demoExeLinkIn__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8108,'size':212,'pad':0,'label':"demoInitSet__11daSCannon_cFv",'name':"demoInitSet__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC81DC,'size':152,'pad':0,'label':"demoExeSet__11daSCannon_cFv",'name':"demoExeSet__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8274,'size':4,'pad':0,'label':"demoInitMove__11daSCannon_cFv",'name':"demoInitMove__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CC8278,'size':256,'pad':0,'label':"demoExeMove__11daSCannon_cFv",'name':"demoExeMove__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8378,'size':84,'pad':0,'label':"demoInitFire__11daSCannon_cFv",'name':"demoInitFire__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC83CC,'size':100,'pad':0,'label':"demoExeFire__11daSCannon_cFv",'name':"demoExeFire__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8430,'size':264,'pad':0,'label':"demoInitFinish__11daSCannon_cFv",'name':"demoInitFinish__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8538,'size':272,'pad':0,'label':"demoExeFinish__11daSCannon_cFv",'name':"demoExeFinish__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8648,'size':204,'pad':0,'label':"demoInitWarpEndWait__11daSCannon_cFv",'name':"demoInitWarpEndWait__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8714,'size':240,'pad':0,'label':"demoExeWarpEndWait__11daSCannon_cFv",'name':"demoExeWarpEndWait__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8804,'size':20,'pad':0,'label':"demoInitWarpEndMove__11daSCannon_cFv",'name':"demoInitWarpEndMove__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8818,'size':144,'pad':0,'label':"demoExeWarpEndMove__11daSCannon_cFv",'name':"demoExeWarpEndMove__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC88A8,'size':240,'pad':0,'label':"changeScene__11daSCannon_cFv",'name':"changeScene__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8998,'size':152,'pad':0,'label':"init__11daSCannon_cFv",'name':"init__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8A30,'size':304,'pad':0,'label':"initEmtRt__11daSCannon_cFUsiPCUsPP14JPABaseEmitter",'name':"initEmtRt__11daSCannon_cFUsiPCUsPP14JPABaseEmitter",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8B60,'size':148,'pad':0,'label':"exeEmtRt__11daSCannon_cFUsiPP14JPABaseEmitter",'name':"exeEmtRt__11daSCannon_cFUsiPP14JPABaseEmitter",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8BF4,'size':232,'pad':0,'label':"initEmtLine__11daSCannon_cFv",'name':"initEmtLine__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8CDC,'size':196,'pad':0,'label':"exeEmtLine__11daSCannon_cFv",'name':"exeEmtLine__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8DA0,'size':60,'pad':0,'label':"delEmtAll__11daSCannon_cFv",'name':"delEmtAll__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8DDC,'size':132,'pad':0,'label':"setCannonRepair__11daSCannon_cFv",'name':"setCannonRepair__11daSCannon_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8E60,'size':84,'pad':0,'label':"daSCannon_create__FP11daSCannon_c",'name':"daSCannon_create__FP11daSCannon_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8EB4,'size':32,'pad':0,'label':"daSCannon_Delete__FP11daSCannon_c",'name':"daSCannon_Delete__FP11daSCannon_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8ED4,'size':32,'pad':0,'label':"daSCannon_execute__FP11daSCannon_c",'name':"daSCannon_execute__FP11daSCannon_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8EF4,'size':32,'pad':0,'label':"daSCannon_draw__FP11daSCannon_c",'name':"daSCannon_draw__FP11daSCannon_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8F14,'size':28,'pad':0,'label':"func_80CC8F14",'name':"cLib_calcTimer<i>__FPi",'lib':-1,'tu':3,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC8F30,'size':572,'pad':0,'label':"__sinit_d_a_obj_scannon_cpp",'name':"__sinit_d_a_obj_scannon_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80CC916C,'size':8,'pad':0,'label':"func_80CC916C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC9174,'size':8,'pad':0,'label':"func_80CC9174",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC917C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CC9184,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CC9188,'size':12,'pad':0,'label':"TKS_SET_POS",'name':"TKS_SET_POS",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[11,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC9194,'size':6,'pad':2,'label':"SMK_PARTICLE_NAME",'name':"SMK_PARTICLE_NAME",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC919C,'size':6,'pad':2,'label':"APP_PARTICLE_NAME",'name':"APP_PARTICLE_NAME",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC91A4,'size':4,'pad':0,'label':"lit_3992",'name':"@3992",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91A8,'size':4,'pad':0,'label':"lit_3993",'name':"@3993",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91AC,'size':4,'pad':0,'label':"lit_3994",'name':"@3994",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC91B0,'size':4,'pad':0,'label':"lit_3995",'name':"@3995",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91B4,'size':4,'pad':0,'label':"lit_4113",'name':"@4113",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91B8,'size':4,'pad':0,'label':"lit_4114",'name':"@4114",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91BC,'size':4,'pad':0,'label':"lit_4157",'name':"@4157",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91C0,'size':4,'pad':0,'label':"lit_4158",'name':"@4158",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC91C4,'size':48,'pad':0,'label':"s_demoTable__11daSCannon_c",'name':"s_demoTable__11daSCannon_c",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC91F4,'size':4,'pad':0,'label':"lit_4476",'name':"@4476",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC91F8,'size':4,'pad':0,'label':"lit_4477",'name':"@4477",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC91FC,'size':4,'pad':0,'label':"lit_4478",'name':"@4478",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC9200,'size':4,'pad':0,'label':"lit_4499",'name':"@4499",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9204,'size':4,'pad':0,'label':"lit_4515",'name':"@4515",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9208,'size':4,'pad':0,'label':"lit_4545",'name':"@4545",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC920C,'size':4,'pad':0,'label':"lit_4546",'name':"@4546",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9210,'size':4,'pad':0,'label':"lit_4547",'name':"@4547",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9214,'size':4,'pad':0,'label':"lit_4566",'name':"@4566",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9218,'size':4,'pad':0,'label':"lit_4642",'name':"@4642",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC921C,'size':4,'pad':0,'label':"lit_4643",'name':"@4643",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CC9220,'size':4,'pad':0,'label':"lit_4644",'name':"@4644",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC9224,'size':224,'pad':0,'label':"d_a_obj_scannon__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[15,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CC9304,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC9310,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC9324,'size':4,'pad':0,'label':"l_arcName_Comp",'name':"l_arcName_Comp",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9328,'size':4,'pad':0,'label':"l_arcName_Crash",'name':"l_arcName_Crash",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC932C,'size':4,'pad':0,'label':"l_arcName_Zev",'name':"l_arcName_Zev",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9330,'size':4,'pad':0,'label':"l_arcName_Ptl",'name':"l_arcName_Ptl",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9334,'size':4,'pad':0,'label':"l_staffName",'name':"l_staffName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9338,'size':16,'pad':0,'label':"l_eventName",'name':"l_eventName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9348,'size':12,'pad':0,'label':"lit_4249",'name':"@4249",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9354,'size':12,'pad':0,'label':"lit_4250",'name':"@4250",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9360,'size':12,'pad':0,'label':"lit_4251",'name':"@4251",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC936C,'size':12,'pad':0,'label':"lit_4252",'name':"@4252",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9378,'size':48,'pad':0,'label':"s_exeProc__11daSCannon_c",'name':"s_exeProc__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC93A8,'size':8,'pad':0,'label':"CUT_TYPE_TABLE_WARP_END",'name':"CUT_TYPE_TABLE_WARP_END",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93B0,'size':12,'pad':0,'label':"CUT_TYPE_TABLE_FIRE_TKS",'name':"CUT_TYPE_TABLE_FIRE_TKS",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93BC,'size':4,'pad':0,'label':"CUT_TYPE_TABLE_FIRE_FIRST",'name':"CUT_TYPE_TABLE_FIRE_FIRST",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93C0,'size':16,'pad':0,'label':"CUT_TYPE_TABLE_FIRE_SECOND",'name':"CUT_TYPE_TABLE_FIRE_SECOND",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93D0,'size':12,'pad':0,'label':"lit_4406",'name':"@4406",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93DC,'size':12,'pad':0,'label':"lit_4407",'name':"@4407",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93E8,'size':12,'pad':0,'label':"lit_4408",'name':"@4408",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC93F4,'size':12,'pad':0,'label':"lit_4409",'name':"@4409",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9400,'size':48,'pad':0,'label':"s_demoExeProc_WarpEnd__11daSCannon_c",'name':"s_demoExeProc_WarpEnd__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC9430,'size':72,'pad':0,'label':"s_demoExeProc_FireTks__11daSCannon_c",'name':"s_demoExeProc_FireTks__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC9478,'size':12,'pad':0,'label':"lit_4410",'name':"@4410",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9484,'size':12,'pad':0,'label':"lit_4411",'name':"@4411",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9490,'size':24,'pad':0,'label':"s_demoExeProc_FireFirst__11daSCannon_c",'name':"s_demoExeProc_FireFirst__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC94A8,'size':12,'pad':0,'label':"lit_4412",'name':"@4412",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94B4,'size':12,'pad':0,'label':"lit_4413",'name':"@4413",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94C0,'size':12,'pad':0,'label':"lit_4414",'name':"@4414",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94CC,'size':12,'pad':0,'label':"lit_4415",'name':"@4415",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94D8,'size':12,'pad':0,'label':"lit_4416",'name':"@4416",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94E4,'size':12,'pad':0,'label':"lit_4417",'name':"@4417",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94F0,'size':12,'pad':0,'label':"lit_4418",'name':"@4418",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC94FC,'size':12,'pad':0,'label':"lit_4419",'name':"@4419",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9508,'size':96,'pad':0,'label':"s_demoExeProc_FireSecond__11daSCannon_c",'name':"s_demoExeProc_FireSecond__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC9568,'size':32,'pad':0,'label':"daSCannon_METHODS",'name':"daSCannon_METHODS",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC9588,'size':48,'pad':0,'label':"g_profile_Obj_SCannon",'name':"g_profile_Obj_SCannon",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC95B8,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC95C4,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC95E8,'size':12,'pad':0,'label':"__vt__11daSCannon_c",'name':"__vt__11daSCannon_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC95F4,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"eventCallBack__FPvi":3,
	"daSCannon_c_createHeap__FP10fopAc_ac_c":4,
	"__ct__11daSCannon_cFv":5,
	"__dt__12J3DFrameCtrlFv":6,
	"__dt__11daSCannon_cFv":7,
	"create__11daSCannon_cFv":8,
	"__dt__12dBgS_ObjAcchFv":9,
	"__dt__12dBgS_AcchCirFv":10,
	"execute__11daSCannon_cFv":11,
	"draw__11daSCannon_cFv":12,
	"Delete__11daSCannon_cFv":13,
	"setModelMtx__11daSCannon_cFv":14,
	"setPtlModelMtx__11daSCannon_cFv":15,
	"createHeap__11daSCannon_cFv":16,
	"middleExe__11daSCannon_cFv":17,
	"orderEvtInit__11daSCannon_cFv":18,
	"exeModeWait__11daSCannon_cFv":19,
	"exeModeOrderEvt__11daSCannon_cFv":20,
	"exeModeActionEvt__11daSCannon_cFv":21,
	"exeModeEnd__11daSCannon_cFv":22,
	"demoExe__11daSCannon_cFv":23,
	"demoModeInit__11daSCannon_cFi":24,
	"demoInitLinkIn__11daSCannon_cFv":25,
	"demoExeLinkIn__11daSCannon_cFv":26,
	"demoInitSet__11daSCannon_cFv":27,
	"demoExeSet__11daSCannon_cFv":28,
	"demoInitMove__11daSCannon_cFv":29,
	"demoExeMove__11daSCannon_cFv":30,
	"demoInitFire__11daSCannon_cFv":31,
	"demoExeFire__11daSCannon_cFv":32,
	"demoInitFinish__11daSCannon_cFv":33,
	"demoExeFinish__11daSCannon_cFv":34,
	"demoInitWarpEndWait__11daSCannon_cFv":35,
	"demoExeWarpEndWait__11daSCannon_cFv":36,
	"demoInitWarpEndMove__11daSCannon_cFv":37,
	"demoExeWarpEndMove__11daSCannon_cFv":38,
	"changeScene__11daSCannon_cFv":39,
	"init__11daSCannon_cFv":40,
	"initEmtRt__11daSCannon_cFUsiPCUsPP14JPABaseEmitter":41,
	"exeEmtRt__11daSCannon_cFUsiPP14JPABaseEmitter":42,
	"initEmtLine__11daSCannon_cFv":43,
	"exeEmtLine__11daSCannon_cFv":44,
	"delEmtAll__11daSCannon_cFv":45,
	"setCannonRepair__11daSCannon_cFv":46,
	"daSCannon_create__FP11daSCannon_c":47,
	"daSCannon_Delete__FP11daSCannon_c":48,
	"daSCannon_execute__FP11daSCannon_c":49,
	"daSCannon_draw__FP11daSCannon_c":50,
	"func_80CC8F14":51,
	"__sinit_d_a_obj_scannon_cpp":52,
	"func_80CC916C":53,
	"func_80CC9174":54,
	"_ctors":55,
	"_dtors":56,
	"TKS_SET_POS":57,
	"SMK_PARTICLE_NAME":58,
	"APP_PARTICLE_NAME":59,
	"lit_3992":60,
	"lit_3993":61,
	"lit_3994":62,
	"lit_3995":63,
	"lit_4113":64,
	"lit_4114":65,
	"lit_4157":66,
	"lit_4158":67,
	"s_demoTable__11daSCannon_c":68,
	"lit_4476":69,
	"lit_4477":70,
	"lit_4478":71,
	"lit_4499":72,
	"lit_4515":73,
	"lit_4545":74,
	"lit_4546":75,
	"lit_4547":76,
	"lit_4566":77,
	"lit_4642":78,
	"lit_4643":79,
	"lit_4644":80,
	"d_a_obj_scannon__stringBase0":81,
	"cNullVec__6Z2Calc":82,
	"lit_1787":83,
	"l_arcName_Comp":84,
	"l_arcName_Crash":85,
	"l_arcName_Zev":86,
	"l_arcName_Ptl":87,
	"l_staffName":88,
	"l_eventName":89,
	"lit_4249":90,
	"lit_4250":91,
	"lit_4251":92,
	"lit_4252":93,
	"s_exeProc__11daSCannon_c":94,
	"CUT_TYPE_TABLE_WARP_END":95,
	"CUT_TYPE_TABLE_FIRE_TKS":96,
	"CUT_TYPE_TABLE_FIRE_FIRST":97,
	"CUT_TYPE_TABLE_FIRE_SECOND":98,
	"lit_4406":99,
	"lit_4407":100,
	"lit_4408":101,
	"lit_4409":102,
	"s_demoExeProc_WarpEnd__11daSCannon_c":103,
	"s_demoExeProc_FireTks__11daSCannon_c":104,
	"lit_4410":105,
	"lit_4411":106,
	"s_demoExeProc_FireFirst__11daSCannon_c":107,
	"lit_4412":108,
	"lit_4413":109,
	"lit_4414":110,
	"lit_4415":111,
	"lit_4416":112,
	"lit_4417":113,
	"lit_4418":114,
	"lit_4419":115,
	"s_demoExeProc_FireSecond__11daSCannon_c":116,
	"daSCannon_METHODS":117,
	"g_profile_Obj_SCannon":118,
	"__vt__12dBgS_AcchCir":119,
	"__vt__12dBgS_ObjAcch":120,
	"__vt__11daSCannon_c":121,
	"__vt__12J3DFrameCtrl":122,
}

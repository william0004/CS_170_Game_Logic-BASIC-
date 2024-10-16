#include "Class work Draw Triangle.bmx.gui.debug.win32.x64.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s0={
	&bbStringClass,
	0x75cdc067fd4d9b00,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s1={
	&bbStringClass,
	0xf25a07ea0c0e69f,
	54,
	{65,110,32,101,108,101,109,101,110,116,32,119,105,116,104,32,116
	,104,101,32,115,97,109,101,32,107,101,121,32,97,108,114,101
	,97,100,121,32,101,120,105,115,116,115,32,105,110,32,116,104
	,101,32,109,97,112}
};
static BBString _s2={
	&bbStringClass,
	0xbfd0800945fa68b4,
	18,
	{84,104,101,32,113,117,101,117,101,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s3={
	&bbStringClass,
	0x5c2b786e4055ff04,
	18,
	{84,104,101,32,115,116,97,99,107,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s4={
	&bbStringClass,
	0xf8c407ed2d3563fa,
	13,
	{108,105,115,116,32,105,115,32,101,109,112,116,121}
};
static BBString _s9={
	&bbStringClass,
	0x558220868d858e40,
	37,
	{108,111,119,101,114,86,97,108,117,101,32,105,115,32,103,114,101
	,97,116,101,114,32,116,104,97,110,32,117,112,112,101,114,86
	,97,108,117,101}
};
static BBString _s5={
	&bbStringClass,
	0x42ce070328eb2a04,
	4,
	{110,111,100,101}
};
static BBString _s7={
	&bbStringClass,
	0x7f0d637a59d0dd2b,
	25,
	{110,111,100,101,32,105,115,32,102,114,111,109,32,97,110,111,116
	,104,101,114,32,108,105,115,116}
};
static BBString _s6={
	&bbStringClass,
	0xdf1cc2d23552cb81,
	29,
	{110,111,100,101,32,112,97,114,101,110,116,32,108,105,115,116,32
	,105,115,32,100,105,102,102,101,114,101,110,116}
};
static BBString _s8={
	&bbStringClass,
	0x44dc2ffe03a7a88e,
	5,
	{111,116,104,101,114}
};
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
void __m_Class_work_Draw_Triangle_TPoint_New(struct _m_Class_work_Draw_Triangle_TPoint_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_Class_work_Draw_Triangle_TPoint;
	((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(o))->__m_class_work_draw_triangle_tpoint_x = 0;
	((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(o))->__m_class_work_draw_triangle_tpoint_y = 0;
}
struct BBDebugScope_3 _m_Class_work_Draw_Triangle_TPoint_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPoint",
	{
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct _m_Class_work_Draw_Triangle_TPoint_obj,__m_class_work_draw_triangle_tpoint_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct _m_Class_work_Draw_Triangle_TPoint_obj,__m_class_work_draw_triangle_tpoint_y)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&__m_Class_work_Draw_Triangle_TPoint_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_Class_work_Draw_Triangle_TPoint _m_Class_work_Draw_Triangle_TPoint={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_Class_work_Draw_Triangle_TPoint_scope,
	sizeof(struct _m_Class_work_Draw_Triangle_TPoint_obj),
	(void (*)(BBOBJECT))__m_Class_work_Draw_Triangle_TPoint_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_Class_work_Draw_Triangle_TPoint_obj,__m_class_work_draw_triangle_tpoint_y) - offsetof(struct _m_Class_work_Draw_Triangle_TPoint_obj,__m_class_work_draw_triangle_tpoint_x) + sizeof(BBINT)
	,0
	,offsetof(struct _m_Class_work_Draw_Triangle_TPoint_obj,__m_class_work_draw_triangle_tpoint_x)
};

struct _m_Class_work_Draw_Triangle_TPoint_obj* _m_Class_work_Draw_Triangle_point1=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(&bbNullObject);
struct _m_Class_work_Draw_Triangle_TPoint_obj* _m_Class_work_Draw_Triangle_point2=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(&bbNullObject);
struct _m_Class_work_Draw_Triangle_TPoint_obj* _m_Class_work_Draw_Triangle_point3=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(&bbNullObject);
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_Class_work_Draw_Triangle_point1, &_m_Class_work_Draw_Triangle_point3 + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_randomdefault_randomdefault();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_Class_work_Draw_Triangle_TPoint);
		bbRegisterSource(0x35ebe84fc13fe71f, "E:/Program Files/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x689ecaa52624fc34, "G:/study/CS 170/lab/Class work Draw Triangle.bmx");
		bbRegisterSource(0x76057337b44a767, "E:/Program Files/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct BBDebugScope_3 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"Class work Draw Triangle",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"point1",
					":TPoint",
					.var_address=(void*)&_m_Class_work_Draw_Triangle_point1
				},
				{
					BBDEBUGDECL_GLOBAL,
					"point2",
					":TPoint",
					.var_address=(void*)&_m_Class_work_Draw_Triangle_point2
				},
				{
					BBDEBUGDECL_GLOBAL,
					"point3",
					":TPoint",
					.var_address=(void*)&_m_Class_work_Draw_Triangle_point3
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x689ecaa52624fc34, 2, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(800,600,0,60,0,-1,-1);
		struct BBDebugStm __stmt_1 = {0x689ecaa52624fc34, 8, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_Class_work_Draw_Triangle_point1=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbObjectAtomicNew((BBClass *)&_m_Class_work_Draw_Triangle_TPoint);
		struct BBDebugStm __stmt_2 = {0x689ecaa52624fc34, 9, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_Class_work_Draw_Triangle_point2=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbObjectAtomicNew((BBClass *)&_m_Class_work_Draw_Triangle_TPoint);
		struct BBDebugStm __stmt_3 = {0x689ecaa52624fc34, 10, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_Class_work_Draw_Triangle_point3=(struct _m_Class_work_Draw_Triangle_TPoint_obj*)(struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbObjectAtomicNew((BBClass *)&_m_Class_work_Draw_Triangle_TPoint);
		struct BBDebugStm __stmt_4 = {0x689ecaa52624fc34, 13, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x =0;
		struct BBDebugStm __stmt_5 = {0x689ecaa52624fc34, 14, 0};
		bbOnDebugEnterStm(&__stmt_5);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y =-100;
		struct BBDebugStm __stmt_6 = {0x689ecaa52624fc34, 15, 0};
		bbOnDebugEnterStm(&__stmt_6);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x =100;
		struct BBDebugStm __stmt_7 = {0x689ecaa52624fc34, 16, 0};
		bbOnDebugEnterStm(&__stmt_7);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y =100;
		struct BBDebugStm __stmt_8 = {0x689ecaa52624fc34, 17, 0};
		bbOnDebugEnterStm(&__stmt_8);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x =-100;
		struct BBDebugStm __stmt_9 = {0x689ecaa52624fc34, 18, 0};
		bbOnDebugEnterStm(&__stmt_9);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y =100;
		struct BBDebugStm __stmt_10 = {0x689ecaa52624fc34, 29, 0};
		bbOnDebugEnterStm(&__stmt_10);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_11 = {0x689ecaa52624fc34, 30, 0};
		bbOnDebugEnterStm(&__stmt_11);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_12 = {0x689ecaa52624fc34, 31, 0};
		bbOnDebugEnterStm(&__stmt_12);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_13 = {0x689ecaa52624fc34, 32, 0};
		bbOnDebugEnterStm(&__stmt_13);
		brl_graphics_Flip(-1);
		struct BBDebugStm __stmt_14 = {0x689ecaa52624fc34, 35, 0};
		bbOnDebugEnterStm(&__stmt_14);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x )*2.0f));
		struct BBDebugStm __stmt_15 = {0x689ecaa52624fc34, 36, 0};
		bbOnDebugEnterStm(&__stmt_15);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y )*2.0f));
		struct BBDebugStm __stmt_16 = {0x689ecaa52624fc34, 37, 0};
		bbOnDebugEnterStm(&__stmt_16);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x )*2.0f));
		struct BBDebugStm __stmt_17 = {0x689ecaa52624fc34, 38, 0};
		bbOnDebugEnterStm(&__stmt_17);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y )*2.0f));
		struct BBDebugStm __stmt_18 = {0x689ecaa52624fc34, 39, 0};
		bbOnDebugEnterStm(&__stmt_18);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x )*2.0f));
		struct BBDebugStm __stmt_19 = {0x689ecaa52624fc34, 40, 0};
		bbOnDebugEnterStm(&__stmt_19);
		((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y =((BBINT)(((BBFLOAT)((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y )*2.0f));
		struct BBDebugStm __stmt_20 = {0x689ecaa52624fc34, 43, 0};
		bbOnDebugEnterStm(&__stmt_20);
		brl_max2d_SetColor(0,255,0);
		struct BBDebugStm __stmt_21 = {0x689ecaa52624fc34, 45, 0};
		bbOnDebugEnterStm(&__stmt_21);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_22 = {0x689ecaa52624fc34, 46, 0};
		bbOnDebugEnterStm(&__stmt_22);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point2))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_23 = {0x689ecaa52624fc34, 47, 0};
		bbOnDebugEnterStm(&__stmt_23);
		brl_max2d_DrawLine(((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point3))->__m_class_work_draw_triangle_tpoint_y +300)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_x +400)),((BBFLOAT)(((struct _m_Class_work_Draw_Triangle_TPoint_obj*)bbNullObjectTest(_m_Class_work_Draw_Triangle_point1))->__m_class_work_draw_triangle_tpoint_y +300)),1);
		struct BBDebugStm __stmt_24 = {0x689ecaa52624fc34, 48, 0};
		bbOnDebugEnterStm(&__stmt_24);
		brl_graphics_Flip(-1);
		struct BBDebugStm __stmt_25 = {0x689ecaa52624fc34, 51, 0};
		bbOnDebugEnterStm(&__stmt_25);
		brl_polledinput_WaitKey();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}
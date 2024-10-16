#include "CH2_LAB_05.bmx.gui.debug.win32.x64.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s14={
	&bbStringClass,
	0xcc05fda547aac19e,
	9,
	{32,67,101,108,115,105,117,115,46}
};
static BBString _s13={
	&bbStringClass,
	0xfc80f9170652ae55,
	14,
	{32,70,97,104,114,101,110,104,101,105,116,32,61,32}
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
static BBString _s11={
	&bbStringClass,
	0x5ffd2365229432c6,
	29,
	{87,101,108,99,111,109,101,32,116,111,32,111,117,114,32,70,116
	,111,67,32,99,111,110,118,101,114,116,101,114}
};
static BBString _s12={
	&bbStringClass,
	0x8a9b9db3d298fad1,
	46,
	{87,104,97,116,32,70,97,104,114,101,110,104,101,105,116,32,118
	,97,108,117,101,32,100,111,32,121,111,117,32,119,105,115,104
	,32,116,111,32,99,111,110,118,101,114,116,63,32}
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
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
BBINT _m_CH2_LAB_05_fvalue=0;
BBINT _m_CH2_LAB_05_cvalue=0;
BBINT _m_CH2_LAB_05_ConvertFtoC(BBINT bbt_fvalue){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ConvertFtoC",
		{
			{
				BBDEBUGDECL_LOCAL,
				"fvalue",
				"i",
				.var_address=&bbt_fvalue
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0xa5d54f227f899cc, 19, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((BBINT)(0.555555582f*(((BBFLOAT)bbt_fvalue)-32.0f)));
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_CH2_LAB_05_fvalue, &_m_CH2_LAB_05_cvalue + 1);
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
		bbRegisterSource(0x35ebe84fc13fe71f, "E:/Program Files/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x76057337b44a767, "E:/Program Files/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0xa5d54f227f899cc, "I:/study/CS 170/lab/CH2_LAB_05.bmx");
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"CH2_LAB_05",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"fvalue",
					"i",
					.var_address=(void*)&_m_CH2_LAB_05_fvalue
				},
				{
					BBDEBUGDECL_GLOBAL,
					"cvalue",
					"i",
					.var_address=(void*)&_m_CH2_LAB_05_cvalue
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0xa5d54f227f899cc, 8, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_standardio_Print(&_s11);
		struct BBDebugStm __stmt_1 = {0xa5d54f227f899cc, 10, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_CH2_LAB_05_fvalue=bbStringToInt(brl_standardio_Input(&_s12));
		struct BBDebugStm __stmt_2 = {0xa5d54f227f899cc, 12, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_CH2_LAB_05_cvalue=_m_CH2_LAB_05_ConvertFtoC(_m_CH2_LAB_05_fvalue);
		struct BBDebugStm __stmt_3 = {0xa5d54f227f899cc, 14, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(_m_CH2_LAB_05_fvalue),&_s13),bbStringFromInt(_m_CH2_LAB_05_cvalue)),&_s14));
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}
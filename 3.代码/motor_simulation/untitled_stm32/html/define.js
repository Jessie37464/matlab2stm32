function CodeDefine() { 
this.def = new Array();
this.def["untitled_B"] = {file: "untitled_c.html",line:39,type:"var"};
this.def["untitled_DW"] = {file: "untitled_c.html",line:42,type:"var"};
this.def["untitled_M_"] = {file: "untitled_c.html",line:45,type:"var"};
this.def["untitled_M"] = {file: "untitled_c.html",line:46,type:"var"};
this.def["untitled_step"] = {file: "untitled_c.html",line:49,type:"fcn"};
this.def["untitled_initialize"] = {file: "untitled_c.html",line:104,type:"fcn"};
this.def["B_untitled"] = {file: "untitled_h.html",line:59,type:"type"};
this.def["DW_untitled"] = {file: "untitled_h.html",line:64,type:"type"};
this.def["RT_MODEL_untitled"] = {file: "untitled_types_h.html",line:39,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:79,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:80,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:81,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:82,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:84,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:85,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:86,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:87,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:105,type:"type"};
this.def["OverrunFlags"] = {file: "main_c.html",line:48,type:"var"};
this.def["autoReloadTimerLoopVal_S"] = {file: "main_c.html",line:51,type:"var"};
this.def["remainAutoReloadTimerLoopVal_S"] = {file: "main_c.html",line:54,type:"var"};
this.def["main"] = {file: "main_c.html",line:65,type:"fcn"};
this.def["HAL_SYSTICK_Callback"] = {file: "main_c.html",line:132,type:"fcn"};
this.def["G_TIM_Data"] = {file: "untitled_TIM_c.html",line:38,type:"var"};
this.def["G_TIM_Handler"] = {file: "untitled_TIM_c.html",line:39,type:"var"};
this.def["TIM1_DataLink"] = {file: "untitled_TIM_c.html",line:42,type:"var"};
this.def["G_TIM1_PollTimeOut"] = {file: "untitled_TIM_c.html",line:45,type:"var"};
this.def["TIM_DataLinkTypeDef"] = {file: "untitled_TIM_h.html",line:98,type:"type"};
this.def["TIM_ChTypeDef"] = {file: "untitled_TIM_h.html",line:111,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["untitled_c.html"] = "../untitled.c";
	this.html2Root["untitled_c.html"] = "untitled_c.html";
	this.html2SrcPath["untitled_h.html"] = "../untitled.h";
	this.html2Root["untitled_h.html"] = "untitled_h.html";
	this.html2SrcPath["untitled_private_h.html"] = "../untitled_private.h";
	this.html2Root["untitled_private_h.html"] = "untitled_private_h.html";
	this.html2SrcPath["untitled_types_h.html"] = "../untitled_types.h";
	this.html2Root["untitled_types_h.html"] = "untitled_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["STM32_Config_h.html"] = "../STM32_Config.h";
	this.html2Root["STM32_Config_h.html"] = "STM32_Config_h.html";
	this.html2SrcPath["main_c.html"] = "../main.c";
	this.html2Root["main_c.html"] = "main_c.html";
	this.html2SrcPath["untitled_TIM_c.html"] = "../untitled_TIM.c";
	this.html2Root["untitled_TIM_c.html"] = "untitled_TIM_c.html";
	this.html2SrcPath["untitled_TIM_h.html"] = "../untitled_TIM.h";
	this.html2Root["untitled_TIM_h.html"] = "untitled_TIM_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"untitled_c.html","untitled_h.html","untitled_private_h.html","untitled_types_h.html","rtwtypes_h.html","STM32_Config_h.html","main_c.html","untitled_TIM_c.html","untitled_TIM_h.html"];

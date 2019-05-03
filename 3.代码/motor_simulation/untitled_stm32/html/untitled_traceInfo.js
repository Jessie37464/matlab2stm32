function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["untitled:5"] = "untitled.c:55";
	/* <Root>/Constant1 */
	this.urlHashMap["untitled:6"] = "untitled.c:66";
	/* <Root>/GPIO_Write */
	this.urlHashMap["untitled:3"] = "untitled.c:54,57,58,59,60,61";
	/* <Root>/GPIO_Write1 */
	this.urlHashMap["untitled:4"] = "untitled.c:65,68,69,70,71,72";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["untitled:7"] = "untitled.c:76,77,78,79,80,82,85&untitled.h:58,63";
	/* <Root>/STM32_Config */
	this.urlHashMap["untitled:2"] = "untitled.c:51,52";
	/* <Root>/Timers */
	this.urlHashMap["untitled:8"] = "untitled.c:87,90,91,94,95,96,99,100,153,154,155";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled:5"};
	this.sidHashMap["untitled:5"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "untitled:6"};
	this.sidHashMap["untitled:6"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/GPIO_Write"] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/GPIO_Write"};
	this.rtwnameHashMap["<Root>/GPIO_Write1"] = {sid: "untitled:4"};
	this.sidHashMap["untitled:4"] = {rtwname: "<Root>/GPIO_Write1"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "untitled:7"};
	this.sidHashMap["untitled:7"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/STM32_Config"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/STM32_Config"};
	this.rtwnameHashMap["<Root>/Timers"] = {sid: "untitled:8"};
	this.sidHashMap["untitled:8"] = {rtwname: "<Root>/Timers"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

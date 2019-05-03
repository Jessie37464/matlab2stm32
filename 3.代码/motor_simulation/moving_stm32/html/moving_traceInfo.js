function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["moving:5"] = "moving.c:55";
	/* <Root>/Constant1 */
	this.urlHashMap["moving:6"] = "moving.c:66";
	/* <Root>/GPIO_Write */
	this.urlHashMap["moving:3"] = "moving.c:54,57,58,59,60,61";
	/* <Root>/GPIO_Write1 */
	this.urlHashMap["moving:4"] = "moving.c:65,68,69,70,71,72";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["moving:7"] = "moving.c:76,77,78,79,80,82,85&moving.h:58,63";
	/* <Root>/STM32_Config */
	this.urlHashMap["moving:2"] = "moving.c:51,52";
	/* <Root>/Timers */
	this.urlHashMap["moving:8"] = "moving.c:87,90,91,94,95,96,99,100,153,154,155";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "moving"};
	this.sidHashMap["moving"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "moving:5"};
	this.sidHashMap["moving:5"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "moving:6"};
	this.sidHashMap["moving:6"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/GPIO_Write"] = {sid: "moving:3"};
	this.sidHashMap["moving:3"] = {rtwname: "<Root>/GPIO_Write"};
	this.rtwnameHashMap["<Root>/GPIO_Write1"] = {sid: "moving:4"};
	this.sidHashMap["moving:4"] = {rtwname: "<Root>/GPIO_Write1"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "moving:7"};
	this.sidHashMap["moving:7"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/STM32_Config"] = {sid: "moving:2"};
	this.sidHashMap["moving:2"] = {rtwname: "<Root>/STM32_Config"};
	this.rtwnameHashMap["<Root>/Timers"] = {sid: "moving:8"};
	this.sidHashMap["moving:8"] = {rtwname: "<Root>/Timers"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

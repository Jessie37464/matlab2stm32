function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["motor:14"] = "motor.c:55";
	/* <Root>/Constant1 */
	this.urlHashMap["motor:15"] = "motor.c:66";
	/* <Root>/GPIO_Write */
	this.urlHashMap["motor:9"] = "motor.c:54,57,58,59,60,61";
	/* <Root>/GPIO_Write1 */
	this.urlHashMap["motor:10"] = "motor.c:65,68,69,70,71,72";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["motor:16"] = "motor.c:76,77,78,79,80,82,85&motor.h:60,65";
	/* <Root>/STM32_Config */
	this.urlHashMap["motor:7"] = "motor.c:51,52";
	/* <Root>/Scope1 */
	this.urlHashMap["motor:23"] = "msg=rtwMsg_SimulationReducedBlock&block=motor:23";
	/* <Root>/Timers */
	this.urlHashMap["motor:17"] = "motor.c:87,88,89,90,92,93,94,95,96,149,150,151";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "motor"};
	this.sidHashMap["motor"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "motor:14"};
	this.sidHashMap["motor:14"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "motor:15"};
	this.sidHashMap["motor:15"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/GPIO_Write"] = {sid: "motor:9"};
	this.sidHashMap["motor:9"] = {rtwname: "<Root>/GPIO_Write"};
	this.rtwnameHashMap["<Root>/GPIO_Write1"] = {sid: "motor:10"};
	this.sidHashMap["motor:10"] = {rtwname: "<Root>/GPIO_Write1"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "motor:16"};
	this.sidHashMap["motor:16"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/STM32_Config"] = {sid: "motor:7"};
	this.sidHashMap["motor:7"] = {rtwname: "<Root>/STM32_Config"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "motor:23"};
	this.sidHashMap["motor:23"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Timers"] = {sid: "motor:17"};
	this.sidHashMap["motor:17"] = {rtwname: "<Root>/Timers"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

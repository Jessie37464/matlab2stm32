function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["motor:14"] = "motor";
    this.sidParentMap["motor:15"] = "motor";
    this.sidParentMap["motor:9"] = "motor";
    this.sidParentMap["motor:10"] = "motor";
    this.sidParentMap["motor:16"] = "motor";
    this.sidParentMap["motor:7"] = "motor";
    this.sidParentMap["motor:23"] = "motor";
    this.sidParentMap["motor:17"] = "motor";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();

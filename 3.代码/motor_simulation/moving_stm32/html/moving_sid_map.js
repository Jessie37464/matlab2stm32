function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["moving:5"] = "moving";
    this.sidParentMap["moving:6"] = "moving";
    this.sidParentMap["moving:3"] = "moving";
    this.sidParentMap["moving:4"] = "moving";
    this.sidParentMap["moving:7"] = "moving";
    this.sidParentMap["moving:2"] = "moving";
    this.sidParentMap["moving:8"] = "moving";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();

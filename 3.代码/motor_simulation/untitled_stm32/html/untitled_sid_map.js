function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["untitled:5"] = "untitled";
    this.sidParentMap["untitled:6"] = "untitled";
    this.sidParentMap["untitled:3"] = "untitled";
    this.sidParentMap["untitled:4"] = "untitled";
    this.sidParentMap["untitled:7"] = "untitled";
    this.sidParentMap["untitled:2"] = "untitled";
    this.sidParentMap["untitled:8"] = "untitled";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();

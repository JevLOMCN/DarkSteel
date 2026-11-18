// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// operator== @ 146d79570

bool __thiscall
FNavAgentProperties::operator==(FNavAgentProperties *this,FNavAgentProperties *param_1)

{
  bool bVar1;
  
  if ((((float)((uint)(this->AgentRadius - param_1->AgentRadius) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40a00000) &&
      ((float)((uint)(this->AgentHeight - param_1->AgentHeight) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40a00000)) &&
     ((this->AgentStepHeight < 0.0 ||
      ((param_1->AgentStepHeight < 0.0 ||
       ((float)((uint)(this->AgentStepHeight - param_1->AgentStepHeight) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40a00000)))))) {
    bVar1 = IsNavDataMatching(this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}


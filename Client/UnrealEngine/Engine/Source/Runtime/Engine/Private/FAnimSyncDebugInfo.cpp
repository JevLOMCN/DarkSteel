// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAnimSyncDebugInfo @ 14752f340

FAnimSyncDebugInfo * __thiscall
UE::Anim::FAnimSyncDebugInfo::FAnimSyncDebugInfo
          (FAnimSyncDebugInfo *this,FAnimationBaseContext *param_1)

{
  this->SourceProxy = param_1->AnimInstanceProxy;
  this->SourceNodeId = param_1->CurrentNodeId;
  return this;
}


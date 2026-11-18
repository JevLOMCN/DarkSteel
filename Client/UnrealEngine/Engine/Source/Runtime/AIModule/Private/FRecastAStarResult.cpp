// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// SetPathInfo @ 146fd2140

ulong64 __thiscall
FRecastAStarResult::SetPathInfo
          (FRecastAStarResult *this,int param_1,FRecastAStarSearchNode *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  *(longlong *)(*(longlong *)this + lVar2 * 0x30) = param_2->_padding_;
  *(longlong *)(*(longlong *)this + 8 + lVar2 * 0x30) = param_2->_padding_;
  lVar1 = *(longlong *)this;
  *(double *)(lVar1 + 0x10 + lVar2 * 0x30) = param_2->Position[0];
  *(double *)(lVar1 + 0x18 + lVar2 * 0x30) = param_2->Position[1];
  *(double *)(lVar1 + 0x20 + lVar2 * 0x30) = param_2->Position[2];
  return param_2->_padding_;
}


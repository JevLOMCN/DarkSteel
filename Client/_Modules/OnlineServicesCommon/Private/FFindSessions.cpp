// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// Result @ 14ee0f130

Result * __thiscall UE::Online::FFindSessions::Result::Result(Result *this,Result *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->FoundSessionIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FoundSessionIds).ArrayMax;
  iVar2 = (param_1->FoundSessionIds).ArrayNum;
  _Src = (param_1->FoundSessionIds).AllocatorInstance.Data;
  (this->FoundSessionIds).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->FoundSessionIds).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}


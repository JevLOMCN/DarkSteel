// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FArenaParams @ 14167b870

void __thiscall FArenaParams::~FArenaParams(FArenaParams *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->LargeBlockFree != 0) {
    plVar1 = *(longlong **)&(this->LargeBlockFree).field_0x28;
    plVar3 = (longlong *)&(this->LargeBlockFree).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->LargeBlockAlloc != 0) {
    plVar1 = *(longlong **)&(this->LargeBlockAlloc).field_0x28;
    plVar3 = (longlong *)&(this->LargeBlockAlloc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ReserveVM != 0) {
    plVar1 = *(longlong **)&(this->ReserveVM).field_0x28;
    plVar3 = (longlong *)&(this->ReserveVM).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->AdditionalBlockSizes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}


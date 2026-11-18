// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// RemoveAtSwapImpl @ 14cf1b150

void __thiscall
TArray<FSwitchOffConditionData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSwitchOffConditionData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar1 + (longlong)param_1 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + (longlong)param_1 * 0x18 + 8));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}


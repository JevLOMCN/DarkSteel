// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// RemoveAtImpl @ 1446ef570

void __thiscall
TArray<FImageWriteFence,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FImageWriteFence,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FImageWriteFence *_Dst;
  
  _Dst = (FImageWriteFence *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<FImageWriteFence,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}


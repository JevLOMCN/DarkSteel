// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 1

// RemoveAtImpl @ 14ea8ee00

void __thiscall
TArray<UMediaPlateComponent::Layer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UMediaPlateComponent::Layer,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  Layer *_Dst;
  int iVar1;
  
  _Dst = (Layer *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<UMediaPlateComponent::Layer,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}


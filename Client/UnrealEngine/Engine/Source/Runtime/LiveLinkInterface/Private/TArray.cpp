// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// RemoveAtImpl @ 14cfbe040

void __thiscall
TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *_Dst;
  int iVar1;
  
  _Dst = (TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}


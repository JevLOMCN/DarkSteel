// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FArchiveSerializedPropertyChain @ 1420e8ea0

FArchiveSerializedPropertyChain * __thiscall
FArchiveSerializedPropertyChain::FArchiveSerializedPropertyChain
          (FArchiveSerializedPropertyChain *this,FArchiveSerializedPropertyChain *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FProperty_*> FVar3;
  ForElementType<FProperty_*> _Dst;
  ForElementType<FProperty_*> _Src;
  
  (this->SerializedPropertyChain).AllocatorInstance.SecondaryData = (ForElementType<FProperty_*>)0x0
  ;
  FVar3 = (param_1->SerializedPropertyChain).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SerializedPropertyChain).ArrayNum;
  (this->SerializedPropertyChain).ArrayNum = iVar2;
  _Src = (ForElementType<FProperty_*>)param_1;
  if (FVar3 != (ForElementType<FProperty_*>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->SerializedPropertyChain).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
              (8,8,iVar2,0,(ForElementType<FProperty_*> *)this,iVar2,piVar1);
    FVar3 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<FProperty_*>)this;
    if (FVar3 != (ForElementType<FProperty_*>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  this->SerializedPropertyChainUpdateCount = param_1->SerializedPropertyChainUpdateCount;
  return this;
}


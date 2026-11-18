// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FAssetDataTagMap @ 141e83c90

FAssetDataTagMap * __thiscall
FAssetDataTagMap::FAssetDataTagMap(FAssetDataTagMap *this,FAssetDataTagMap *param_1)

{
  int *piVar1;
  int iVar2;
  TTuple<FName,FString> *pTVar3;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  iVar2 = (int)param_1->_padding_;
  pTVar3 = (TTuple<FName,FString> *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    (this->RefCount).Counter = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>
              ((void *)this->_padding_,pTVar3,iVar2);
    (this->RefCount).Counter = 0;
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// Contains @ 142aedf70

bool __thiscall FAssetDataTagMapSharedView::Contains(FAssetDataTagMapSharedView *this,FName param_1)

{
  FValueId *pFVar1;
  FString *pFVar2;
  
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      pFVar2 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                          (this->field0_0x0).Loose,param_1);
      return pFVar2 != (FString *)0x0;
    }
  }
  else {
    pFVar1 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this,param_1);
    if (pFVar1 != (FValueId *)0x0) {
      return true;
    }
  }
  return false;
}


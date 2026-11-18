// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// GetAssetUserData<UInterchangeAssetUserData> @ 14e7036d0

UInterchangeAssetUserData * __thiscall
IInterface_AssetUserData::GetAssetUserData<UInterchangeAssetUserData>
          (IInterface_AssetUserData *this)

{
  int iVar1;
  code *pcVar2;
  UInterchangeAssetUserData *pUVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  pcVar2 = *(code **)((longlong)*this + 0x18);
  local_res8 = Z_Construct_UClass_UInterchangeAssetUserData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UInterchangeAssetUserData *)(*pcVar2)(this,&local_res8);
  if (pUVar3 != (UInterchangeAssetUserData *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeAssetUserData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar3;
    }
  }
  return (UInterchangeAssetUserData *)0x0;
}


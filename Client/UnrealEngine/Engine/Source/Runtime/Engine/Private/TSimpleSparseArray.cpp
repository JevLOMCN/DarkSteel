// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetSparseView @ 1487a4510

TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int> * __thiscall
FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>
::GetSparseView(TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *this,
               TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int>
               *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int> *pTVar6;
  int iVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ulonglong uVar5;
  
  iVar7 = (this->UsedElements).NumBits;
  if (iVar7 == 0) {
    __return_storage_ptr__->DataPtr = (FAssetBoundElement *)(this->Elements).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  FVar9 = (this->UsedElements).AllocatorInstance.SecondaryData;
  uVar8 = 0xffffffff >> (-(char)iVar7 & 0x1fU);
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->UsedElements;
  }
  uVar4 = iVar7 + 0x1fU >> 5;
  uVar5 = (ulonglong)uVar4;
  while( true ) {
    if (uVar4 == 0) {
      __return_storage_ptr__->DataPtr =
           (FAssetBoundElement *)(this->Elements).AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = 0;
      return __return_storage_ptr__;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    uVar8 = uVar8 & *(uint *)((longlong)FVar9 + uVar5 * 4);
    if (uVar8 != 0) break;
    uVar8 = 0xffffffff;
  }
  uVar5 = (ulonglong)uVar8 * 2 + 1;
  lVar1 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  __return_storage_ptr__->DataPtr = (FAssetBoundElement *)(this->Elements).AllocatorInstance.Data;
  iVar7 = uVar4 * 0x20 + (int)lVar1;
  __return_storage_ptr__->ArrayNum = iVar7;
  if (-1 < iVar7) {
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArrayNum >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xfe,L"");
  if (!bVar3) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArrayView<FSimpleStreamableAssetManager::FAssetBoundElement_const_,int> *)(*pcVar2)();
  return pTVar6;
}


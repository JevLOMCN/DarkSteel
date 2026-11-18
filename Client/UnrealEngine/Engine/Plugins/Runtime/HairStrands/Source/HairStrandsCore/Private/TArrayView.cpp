// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// TArrayView<UGroomBindingAsset_*_const,int><TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>,TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>_> @ 14dfe4e90

TArrayView<UGroomBindingAsset_*_const,int> * __thiscall
TArrayView<UGroomBindingAsset_*_const,int>::
TArrayView<UGroomBindingAsset_*_const,int><TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>,TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UGroomBindingAsset_*_const,int> *this,
          TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UGroomBindingAsset_*_const,int> *pTVar4;
  
  this->DataPtr = (UGroomBindingAsset **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UGroomBindingAsset_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}


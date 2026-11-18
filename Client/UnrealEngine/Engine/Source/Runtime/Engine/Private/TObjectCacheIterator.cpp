// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TObjectCacheIterator<UMaterialInterface> @ 148087cc0

TObjectCacheIterator<UMaterialInterface> * __thiscall
TObjectCacheIterator<UMaterialInterface>::TObjectCacheIterator<UMaterialInterface>
          (TObjectCacheIterator<UMaterialInterface> *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectCacheIterator<UMaterialInterface> *pTVar4;
  
  (this->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedArray).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OwnedArray).ArrayNum = param_1->ArrayNum;
  (this->OwnedArray).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->ArrayView).DataPtr = (UMaterialInterface **)(this->OwnedArray).AllocatorInstance.Data;
  iVar1 = (this->OwnedArray).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (this->ArrayView).ArrayNum = iVar1;
  return this;
}


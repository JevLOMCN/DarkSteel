// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FCachedDirScanDir @ 142ad5c70

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FCachedDirScanDir::FCachedDirScanDir
          (FCachedDirScanDir *this,FCachedDirScanDir *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  (this->SubDirRelPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubDirRelPaths).AllocatorInstance.Data = (param_1->SubDirRelPaths).AllocatorInstance.Data;
  (param_1->SubDirRelPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubDirRelPaths).ArrayNum = (param_1->SubDirRelPaths).ArrayNum;
  (this->SubDirRelPaths).ArrayMax = (param_1->SubDirRelPaths).ArrayMax;
  (param_1->SubDirRelPaths).ArrayNum = 0;
  (param_1->SubDirRelPaths).ArrayMax = 0;
  (this->Files).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Files).AllocatorInstance.Data = (param_1->Files).AllocatorInstance.Data;
  (param_1->Files).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Files).ArrayNum = (param_1->Files).ArrayNum;
  (this->Files).ArrayMax = (param_1->Files).ArrayMax;
  (param_1->Files).ArrayNum = 0;
  (param_1->Files).ArrayMax = 0;
  uVar2 = *(undefined8 *)((param_1->JournalHandle).Bytes + 8);
  *(undefined8 *)(this->JournalHandle).Bytes = *(undefined8 *)(param_1->JournalHandle).Bytes;
  *(undefined8 *)((this->JournalHandle).Bytes + 8) = uVar2;
  *(undefined4 *)((this->JournalHandle).Bytes + 0x10) =
       *(undefined4 *)((param_1->JournalHandle).Bytes + 0x10);
  bVar1 = param_1->bCacheValid;
  (this->bIsReparsePoint).bIsSet = false;
  this->bCacheValid = bVar1;
  bVar1 = (param_1->bIsReparsePoint).bIsSet;
  (this->bIsReparsePoint).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->bIsReparsePoint).TypedValue = (param_1->bIsReparsePoint).TypedValue;
  }
  (this->bIsInsideReparsePoint).bIsSet = false;
  bVar1 = (param_1->bIsInsideReparsePoint).bIsSet;
  (this->bIsInsideReparsePoint).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->bIsInsideReparsePoint).TypedValue = (param_1->bIsInsideReparsePoint).TypedValue;
  }
  return this;
}

// operator= @ 142adc2d0

FCachedDirScanDir * __thiscall
UE::AssetDataGather::Private::FCachedDirScanDir::operator=
          (FCachedDirScanDir *this,FCachedDirScanDir *param_1)

{
  TArray<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  
  if (this != param_1) {
    DestructItems<FString,int>
              ((FString *)(this->SubDirRelPaths).AllocatorInstance.Data,
               (this->SubDirRelPaths).ArrayNum);
    pFVar3 = (this->SubDirRelPaths).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->SubDirRelPaths).AllocatorInstance.Data = (param_1->SubDirRelPaths).AllocatorInstance.Data
    ;
    (param_1->SubDirRelPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubDirRelPaths).ArrayNum = (param_1->SubDirRelPaths).ArrayNum;
    (this->SubDirRelPaths).ArrayMax = (param_1->SubDirRelPaths).ArrayMax;
    (param_1->SubDirRelPaths).ArrayNum = 0;
    (param_1->SubDirRelPaths).ArrayMax = 0;
  }
  pTVar1 = &param_1->Files;
  pTVar2 = &this->Files;
  if (pTVar2 != pTVar1) {
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              ((FCachedDirScanFile *)(pTVar2->AllocatorInstance).Data,(this->Files).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Files).ArrayNum = (param_1->Files).ArrayNum;
    (this->Files).ArrayMax = (param_1->Files).ArrayMax;
    (param_1->Files).ArrayNum = 0;
    (param_1->Files).ArrayMax = 0;
  }
  uVar4 = *(undefined8 *)((param_1->JournalHandle).Bytes + 8);
  *(undefined8 *)(this->JournalHandle).Bytes = *(undefined8 *)(param_1->JournalHandle).Bytes;
  *(undefined8 *)((this->JournalHandle).Bytes + 8) = uVar4;
  *(undefined4 *)((this->JournalHandle).Bytes + 0x10) =
       *(undefined4 *)((param_1->JournalHandle).Bytes + 0x10);
  this->bCacheValid = param_1->bCacheValid;
  if (&param_1->bIsReparsePoint != &this->bIsReparsePoint) {
    if ((param_1->bIsReparsePoint).bIsSet == false) {
      if ((this->bIsReparsePoint).bIsSet != false) {
        (this->bIsReparsePoint).bIsSet = false;
      }
    }
    else {
      (this->bIsReparsePoint).TypedValue = (param_1->bIsReparsePoint).TypedValue;
      (this->bIsReparsePoint).bIsSet = true;
    }
  }
  if (&param_1->bIsInsideReparsePoint != &this->bIsInsideReparsePoint) {
    if ((param_1->bIsInsideReparsePoint).bIsSet == false) {
      if ((this->bIsInsideReparsePoint).bIsSet != false) {
        (this->bIsInsideReparsePoint).bIsSet = false;
      }
    }
    else {
      (this->bIsInsideReparsePoint).TypedValue = (param_1->bIsInsideReparsePoint).TypedValue;
      (this->bIsInsideReparsePoint).bIsSet = true;
    }
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FSceneUpdateChangeSetStorage @ 1453ff860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneUpdateChangeSetStorage * __thiscall
FSceneUpdateChangeSetStorage::FSceneUpdateChangeSetStorage
          (FSceneUpdateChangeSetStorage *this,
          TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
          *param_1,FViewSceneChangeSet *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSceneUpdateChangeSetStorage *pFVar4;
  
  this_00 = &this->PrimitiveUpdates;
  (this->RemovedPrimitiveIds).AllocatorInstance.Data = (FPersistentPrimitiveIndex *)0x0;
  (this->RemovedPrimitiveIds).ArrayNum = 0;
  (this->RemovedPrimitiveIds).ArrayMax = 0;
  (this->RemovedPrimitiveSceneInfos).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->RemovedPrimitiveSceneInfos).ArrayNum = 0;
  (this->RemovedPrimitiveSceneInfos).ArrayMax = 0;
  (this->AddedPrimitiveIds).AllocatorInstance.Data = (FPersistentPrimitiveIndex *)0x0;
  (this->AddedPrimitiveIds).ArrayNum = 0;
  (this->AddedPrimitiveIds).ArrayMax = 0;
  (this->AddedPrimitiveSceneInfos).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->AddedPrimitiveSceneInfos).ArrayNum = 0;
  (this->AddedPrimitiveSceneInfos).ArrayMax = 0;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
            (this_00,param_1);
  this->ViewUpdateChangeSet = param_2;
  (this->PreUpdateChangeSet).RemovedPrimitiveIds.DataPtr =
       (this->RemovedPrimitiveIds).AllocatorInstance.Data;
  iVar1 = (this->RemovedPrimitiveIds).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneUpdateChangeSetStorage *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->PreUpdateChangeSet).RemovedPrimitiveIds.ArrayNum = iVar1;
  (this->PreUpdateChangeSet).RemovedPrimitiveSceneInfos.DataPtr =
       (this->RemovedPrimitiveSceneInfos).AllocatorInstance.Data;
  iVar1 = (this->RemovedPrimitiveSceneInfos).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneUpdateChangeSetStorage *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->PreUpdateChangeSet).RemovedPrimitiveSceneInfos.ArrayNum = iVar1;
  (this->PreUpdateChangeSet).PrimitiveUpdates = this_00;
  (this->PreUpdateChangeSet).ViewUpdateChangeSet = (FViewSceneChangeSet *)0x0;
  (this->PostUpdateChangeSet).AddedPrimitiveIds.DataPtr =
       (this->AddedPrimitiveIds).AllocatorInstance.Data;
  iVar1 = (this->AddedPrimitiveIds).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneUpdateChangeSetStorage *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->PostUpdateChangeSet).AddedPrimitiveIds.ArrayNum = iVar1;
  (this->PostUpdateChangeSet).AddedPrimitiveSceneInfos.DataPtr =
       (this->AddedPrimitiveSceneInfos).AllocatorInstance.Data;
  iVar1 = (this->AddedPrimitiveSceneInfos).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneUpdateChangeSetStorage *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->PostUpdateChangeSet).AddedPrimitiveSceneInfos.ArrayNum = iVar1;
  (this->PostUpdateChangeSet).PrimitiveUpdates = this_00;
  (this->PostUpdateChangeSet).ViewUpdateChangeSet = (FViewSceneChangeSet *)0x0;
  return this;
}

// GetPostUpdateSet @ 14543e3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FScenePostUpdateChangeSet * __thiscall
FSceneUpdateChangeSetStorage::GetPostUpdateSet(FSceneUpdateChangeSetStorage *this)

{
  int iVar1;
  FPersistentPrimitiveIndex *pFVar2;
  FPrimitiveSceneInfo **ppFVar3;
  code *pcVar4;
  bool bVar5;
  FScenePostUpdateChangeSet *pFVar6;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  pFVar2 = (this->AddedPrimitiveIds).AllocatorInstance.Data;
  iVar1 = (this->AddedPrimitiveIds).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FScenePostUpdateChangeSet *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->PostUpdateChangeSet).AddedPrimitiveIds.DataPtr = pFVar2;
  *(ulonglong *)&(this->PostUpdateChangeSet).AddedPrimitiveIds.ArrayNum = CONCAT44(uStack_1c,iVar1);
  ppFVar3 = (this->AddedPrimitiveSceneInfos).AllocatorInstance.Data;
  iVar1 = (this->AddedPrimitiveSceneInfos).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FScenePostUpdateChangeSet *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->PostUpdateChangeSet).ViewUpdateChangeSet = this->ViewUpdateChangeSet;
  (this->PostUpdateChangeSet).AddedPrimitiveSceneInfos.DataPtr = ppFVar3;
  *(ulonglong *)&(this->PostUpdateChangeSet).AddedPrimitiveSceneInfos.ArrayNum =
       CONCAT44(uStack_c,iVar1);
  return &this->PostUpdateChangeSet;
}

// GetPreUpdateSet @ 14543e4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FScenePreUpdateChangeSet * __thiscall
FSceneUpdateChangeSetStorage::GetPreUpdateSet(FSceneUpdateChangeSetStorage *this)

{
  int iVar1;
  FPersistentPrimitiveIndex *pFVar2;
  FPrimitiveSceneInfo **ppFVar3;
  code *pcVar4;
  bool bVar5;
  FScenePreUpdateChangeSet *pFVar6;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  pFVar2 = (this->RemovedPrimitiveIds).AllocatorInstance.Data;
  iVar1 = (this->RemovedPrimitiveIds).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FScenePreUpdateChangeSet *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->PreUpdateChangeSet).RemovedPrimitiveIds.DataPtr = pFVar2;
  *(ulonglong *)&(this->PreUpdateChangeSet).RemovedPrimitiveIds.ArrayNum = CONCAT44(uStack_1c,iVar1)
  ;
  ppFVar3 = (this->RemovedPrimitiveSceneInfos).AllocatorInstance.Data;
  iVar1 = (this->RemovedPrimitiveSceneInfos).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FScenePreUpdateChangeSet *)(*pcVar4)();
      return pFVar6;
    }
  }
  (this->PreUpdateChangeSet).ViewUpdateChangeSet = this->ViewUpdateChangeSet;
  (this->PreUpdateChangeSet).RemovedPrimitiveSceneInfos.DataPtr = ppFVar3;
  *(ulonglong *)&(this->PreUpdateChangeSet).RemovedPrimitiveSceneInfos.ArrayNum =
       CONCAT44(uStack_c,iVar1);
  return &this->PreUpdateChangeSet;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// ~FEventContext @ 142b7d790

void __thiscall UE::AssetRegistry::Impl::FEventContext::~FEventContext(FEventContext *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->BlockedFiles).AllocatorInstance.Data,(this->BlockedFiles).ArrayNum);
  pFVar1 = (this->BlockedFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->RequiredLoads).AllocatorInstance.Data,(this->RequiredLoads).ArrayNum)
  ;
  pFVar1 = (this->RequiredLoads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VerseEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             (this->AssetEvents).AllocatorInstance.Data,(this->AssetEvents).ArrayNum);
  pFVar1 = (this->AssetEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             (this->PathEvents).AllocatorInstance.Data,(this->PathEvents).ArrayNum);
  pFVar1 = (this->PathEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 142b7e320

FEventContext * __thiscall
UE::AssetRegistry::Impl::FEventContext::operator=(FEventContext *this,FEventContext *param_1)

{
  TArray<TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<TTuple<FName,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<TTuple<FName,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined3 uVar13;
  
  if (param_1 != this) {
    if ((param_1->ProgressUpdateData).bIsSet == false) {
      if ((this->ProgressUpdateData).bIsSet != false) {
        (this->ProgressUpdateData).bIsSet = false;
      }
    }
    else {
      iVar10 = (param_1->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry;
      iVar11 = (param_1->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad;
      bVar12 = (param_1->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles;
      uVar13 = *(undefined3 *)&(param_1->ProgressUpdateData).TypedValue.field_0xd;
      (this->ProgressUpdateData).TypedValue.NumTotalAssets =
           (param_1->ProgressUpdateData).TypedValue.NumTotalAssets;
      (this->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = iVar10;
      (this->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad = iVar11;
      (this->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles = bVar12;
      *(undefined3 *)&(this->ProgressUpdateData).TypedValue.field_0xd = uVar13;
      (this->ProgressUpdateData).bIsSet = true;
    }
  }
  pTVar1 = &param_1->PathEvents;
  pTVar2 = &this->PathEvents;
  if (pTVar2 != pTVar1) {
    DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               (pTVar2->AllocatorInstance).Data,(this->PathEvents).ArrayNum);
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PathEvents).ArrayNum = (param_1->PathEvents).ArrayNum;
    (this->PathEvents).ArrayMax = (param_1->PathEvents).ArrayMax;
    (param_1->PathEvents).ArrayNum = 0;
    (param_1->PathEvents).ArrayMax = 0;
  }
  pTVar3 = &param_1->AssetEvents;
  pTVar4 = &this->AssetEvents;
  if (pTVar4 != pTVar3) {
    DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               (pTVar4->AllocatorInstance).Data,(this->AssetEvents).ArrayNum);
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AssetEvents).ArrayNum = (param_1->AssetEvents).ArrayNum;
    (this->AssetEvents).ArrayMax = (param_1->AssetEvents).ArrayMax;
    (param_1->AssetEvents).ArrayNum = 0;
    (param_1->AssetEvents).ArrayMax = 0;
  }
  pTVar5 = &param_1->VerseEvents;
  pTVar6 = &this->VerseEvents;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VerseEvents).ArrayNum = (param_1->VerseEvents).ArrayNum;
    (this->VerseEvents).ArrayMax = (param_1->VerseEvents).ArrayMax;
    (param_1->VerseEvents).ArrayNum = 0;
    (param_1->VerseEvents).ArrayMax = 0;
  }
  pTVar7 = &param_1->RequiredLoads;
  pTVar8 = &this->RequiredLoads;
  if (pTVar8 != pTVar7) {
    DestructItems<FString,int>
              ((FString *)(pTVar8->AllocatorInstance).Data,(this->RequiredLoads).ArrayNum);
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RequiredLoads).ArrayNum = (param_1->RequiredLoads).ArrayNum;
    (this->RequiredLoads).ArrayMax = (param_1->RequiredLoads).ArrayMax;
    (param_1->RequiredLoads).ArrayNum = 0;
    (param_1->RequiredLoads).ArrayMax = 0;
  }
  pTVar7 = &param_1->BlockedFiles;
  pTVar8 = &this->BlockedFiles;
  if (pTVar8 != pTVar7) {
    DestructItems<FString,int>
              ((FString *)(pTVar8->AllocatorInstance).Data,(this->BlockedFiles).ArrayNum);
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BlockedFiles).ArrayNum = (param_1->BlockedFiles).ArrayNum;
    (this->BlockedFiles).ArrayMax = (param_1->BlockedFiles).ArrayMax;
    (param_1->BlockedFiles).ArrayNum = 0;
    (param_1->BlockedFiles).ArrayMax = 0;
  }
  this->bFileLoadedEventBroadcast = param_1->bFileLoadedEventBroadcast;
  this->bScanStartedEventBroadcast = param_1->bScanStartedEventBroadcast;
  this->bHasSentFileLoadedEventBroadcast = param_1->bHasSentFileLoadedEventBroadcast;
  this->bKnownGathersCompleteEventBroadcast = param_1->bKnownGathersCompleteEventBroadcast;
  return this;
}

// Append @ 142b83870

void __thiscall
UE::AssetRegistry::Impl::FEventContext::Append(FEventContext *this,FEventContext *param_1)

{
  TArray<TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  
  if (param_1 != this) {
    this->bScanStartedEventBroadcast =
         (bool)(this->bScanStartedEventBroadcast | param_1->bScanStartedEventBroadcast);
    param_1->bScanStartedEventBroadcast = false;
    this->bFileLoadedEventBroadcast =
         (bool)(this->bFileLoadedEventBroadcast | param_1->bFileLoadedEventBroadcast);
    param_1->bFileLoadedEventBroadcast = false;
    this->bKnownGathersCompleteEventBroadcast =
         (bool)(this->bKnownGathersCompleteEventBroadcast |
               param_1->bKnownGathersCompleteEventBroadcast);
    bVar6 = (param_1->ProgressUpdateData).bIsSet;
    param_1->bKnownGathersCompleteEventBroadcast = false;
    if (bVar6 != false) {
      iVar3 = (param_1->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry;
      iVar7 = (param_1->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad;
      bVar6 = (param_1->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles;
      uVar5 = *(undefined3 *)&(param_1->ProgressUpdateData).TypedValue.field_0xd;
      (this->ProgressUpdateData).TypedValue.NumTotalAssets =
           (param_1->ProgressUpdateData).TypedValue.NumTotalAssets;
      (this->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = iVar3;
      (this->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad = iVar7;
      (this->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles = bVar6;
      *(undefined3 *)&(this->ProgressUpdateData).TypedValue.field_0xd = uVar5;
      (this->ProgressUpdateData).bIsSet = true;
    }
    pTVar1 = &this->PathEvents;
    if (pTVar1 == &param_1->PathEvents) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (param_1->PathEvents).ArrayNum;
    if (iVar3 != 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar3,&pTVar1->AllocatorInstance,&(this->PathEvents).ArrayNum,
                         &(this->PathEvents).ArrayMax);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x18,
              (param_1->PathEvents).AllocatorInstance.Data,(longlong)iVar3 * 0x18);
      (param_1->PathEvents).ArrayNum = 0;
    }
    pTVar2 = &this->AssetEvents;
    if (pTVar2 == &param_1->AssetEvents) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (param_1->AssetEvents).ArrayNum;
    if (iVar3 != 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x70,8,iVar3,&pTVar2->AllocatorInstance,&(this->AssetEvents).ArrayNum,
                         &(this->AssetEvents).ArrayMax);
      memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x70,
              (param_1->AssetEvents).AllocatorInstance.Data,(longlong)iVar3 * 0x70);
      (param_1->AssetEvents).ArrayNum = 0;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&this->RequiredLoads,&param_1->RequiredLoads);
    TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
              (&this->BlockedFiles,&param_1->BlockedFiles);
  }
  return;
}

// Clear @ 142b886a0

void __thiscall UE::AssetRegistry::Impl::FEventContext::Clear(FEventContext *this)

{
  int *piVar1;
  
  this->bFileLoadedEventBroadcast = false;
  this->bScanStartedEventBroadcast = false;
  this->bHasSentFileLoadedEventBroadcast = false;
  this->bKnownGathersCompleteEventBroadcast = false;
  if ((this->ProgressUpdateData).bIsSet != false) {
    (this->ProgressUpdateData).bIsSet = false;
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             (this->PathEvents).AllocatorInstance.Data,(this->PathEvents).ArrayNum);
  piVar1 = &(this->PathEvents).ArrayMax;
  (this->PathEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PathEvents).AllocatorInstance,0,piVar1);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             (this->AssetEvents).AllocatorInstance.Data,(this->AssetEvents).ArrayNum);
  piVar1 = &(this->AssetEvents).ArrayMax;
  (this->AssetEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->AssetEvents).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->RequiredLoads).AllocatorInstance.Data,(this->RequiredLoads).ArrayNum)
  ;
  piVar1 = &(this->RequiredLoads).ArrayMax;
  (this->RequiredLoads).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RequiredLoads).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->BlockedFiles).AllocatorInstance.Data,(this->BlockedFiles).ArrayNum);
  piVar1 = &(this->BlockedFiles).ArrayMax;
  (this->BlockedFiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->BlockedFiles).AllocatorInstance,0,piVar1);
  }
  return;
}

// IsEmpty @ 142b9c700

bool __thiscall UE::AssetRegistry::Impl::FEventContext::IsEmpty(FEventContext *this)

{
  if (((((this->bScanStartedEventBroadcast == false) && (this->bFileLoadedEventBroadcast == false))
       && (this->bKnownGathersCompleteEventBroadcast == false)) &&
      (((this->ProgressUpdateData).bIsSet == false && ((this->PathEvents).ArrayNum == 0)))) &&
     (((this->AssetEvents).ArrayNum == 0 &&
      (((this->RequiredLoads).ArrayNum == 0 && ((this->BlockedFiles).ArrayNum == 0)))))) {
    return true;
  }
  return false;
}


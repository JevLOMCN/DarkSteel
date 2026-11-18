// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 18

// FAudioAnalyzerRack @ 14d8af540

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioAnalyzerRack * __thiscall
AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack
          (FAudioAnalyzerRack *this,FRackConstructParams *param_1)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FRackConstructParams *pFVar6;
  FString *pFVar7;
  void *pvVar8;
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  *this_00;
  FAudioWidgetsStyle *pFVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  FName local_res8;
  FRackConstructParams *local_res10;
  FName local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TStringBuilderBase<wchar_t> local_58;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioAnalyzerRack_AudioWidgets__6B_;
  this->TabManagerLayoutName = param_1->TabManagerLayoutName;
  (this->AudioBus).Object = (UObject *)0x0;
  (this->RackUnitConstructParams).AudioBusInfo.AudioDeviceId = 0xffffffff;
  (this->RackUnitConstructParams).AudioBusInfo.AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->RackUnitConstructParams).StyleSet = (ISlateStyle *)0x0;
  (this->RackUnitConstructParams).EditorSettingsClass = (UClass *)0x0;
  *(undefined8 *)&this->RackUnits = 0;
  *(undefined8 *)&(this->RackUnits).field_0x8 = 0;
  *(undefined8 *)&(this->RackUnits).field_0x20 = 0;
  *(undefined4 *)&(this->RackUnits).field_0x28 = 0;
  *(undefined4 *)&(this->RackUnits).field_0x2c = 0x80;
  *(undefined4 *)&(this->RackUnits).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RackUnits).field_0x34 = 0;
  *(undefined8 *)&(this->RackUnits).field_0x40 = 0;
  *(undefined4 *)&(this->RackUnits).field_0x48 = 0;
  (this->TabManager).Object = (FTabManager *)0x0;
  (this->TabManager).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsProcessingStarted = false;
  local_res8 = (FName)this;
  local_res10 = param_1;
  if (this->TabManagerLayoutName == (FName)0x0) {
    ::FName::FName(&local_res18,L"AudioWidgets_FAudioAnalyzerRack_v0");
    this->TabManagerLayoutName = local_res18;
  }
  local_58.End = (wchar_t *)0x0;
  local_58.bIsDynamic = false;
  local_58.bIsExternal = false;
  local_58.Base = (wchar_t *)0x0;
  local_58.CurPos = (wchar_t *)0x0;
  pFVar7 = ::FName::ToString(&this->TabManagerLayoutName,&local_68);
  iVar2 = (pFVar7->Data).ArrayNum;
  pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
  iVar12 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar12 = 0;
  }
  uVar11 = (ulong64)iVar12;
  if (local_58.End < local_58.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar11);
  }
  if (iVar12 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_58.CurPos,pFVar4,uVar11 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = (TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
             *)FAudioAnalyzerRackUnitRegistry::Get();
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(this_00,&local_78);
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack_::__l6::<lambda_1>_>_>
            ((FName *)local_78.AllocatorInstance.Data,local_78.ArrayNum,
             local_res8.ComparisonIndex.Value._0_1_,(<lambda_1> *)&local_res18);
  iVar2 = local_78.ArrayNum;
  uVar10 = (ulonglong)local_78.ArrayNum;
  pFVar1 = (FName *)(local_78.AllocatorInstance.Data + uVar10 * 8);
  FVar13.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res18)
      ;
    }
    FVar5 = local_res8;
    if ((FName *)FVar13.Data == pFVar1) break;
    local_res18 = *(FName *)FVar13.Data;
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'_';
    local_58.CurPos = local_58.CurPos + 1;
    pFVar7 = ::FName::ToString(&local_res18,&local_68);
    iVar3 = (pFVar7->Data).ArrayNum;
    pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
    iVar12 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar12 = 0;
    }
    uVar11 = (ulong64)iVar12;
    if (local_58.End < local_58.CurPos + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,uVar11);
    }
    if (iVar12 != 0) {
      pvVar8 = FGenericPlatformString::Memcpy(local_58.CurPos,pFVar4,uVar11 * 2);
      local_58.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar10 = local_78._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_58.End < local_58.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,1);
  }
  *local_58.CurPos = L'\0';
  ::FName::FName(&local_res8,local_58.Base);
  *(FName *)((longlong)FVar5 + 0x18) = local_res8;
  if ((FName *)local_78.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  pFVar6 = local_res10;
  pFVar9 = (FAudioWidgetsStyle *)local_res10->StyleSet;
  if (pFVar9 == (FAudioWidgetsStyle *)0x0) {
    pFVar9 = FAudioWidgetsStyle::Get();
  }
  *(FAudioWidgetsStyle **)((longlong)FVar5 + 0x38) = pFVar9;
  *(UClass **)((longlong)FVar5 + 0x40) = pFVar6->EditorSettingsClass;
  return (FAudioAnalyzerRack *)FVar5;
}

// ~FAudioAnalyzerRack @ 14d8bdd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioAnalyzerRack::~FAudioAnalyzerRack(FAudioAnalyzerRack *this)

{
  int *piVar1;
  int iVar2;
  FTabManager *this_00;
  void *pvVar3;
  UObject *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this->_padding_ = (longlong)&___7FAudioAnalyzerRack_AudioWidgets__6B_;
  this_00 = (this->TabManager).Object;
  if (this_00 != (FTabManager *)0x0) {
    FTabManager::UnregisterAllTabSpawners(this_00);
    if ((this->TabManager).Object == (FTabManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    FTabManager::SetOnPersistLayout
              ((this->TabManager).Object,
               (TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
                *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    if ((this->TabManager).Object == (FTabManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FTabManager::CloseAllAreas((this->TabManager).Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabManager).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RackUnits).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RackUnits).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RackUnits);
  pUVar4 = (this->AudioBus).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 14d8c9460

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FName FVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  FAudioAnalyzerRackUnitRegistry *pFVar9;
  TSharedRef<SDockTab,1> *pTVar10;
  FName *pFVar11;
  FName *pFVar12;
  longlong lVar13;
  undefined1 *puVar14;
  FName *pFVar15;
  int local_res8;
  FName local_res18;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  FName *local_58;
  longlong **local_50;
  FReadAccessScope local_48;
  
  FVar1 = (param_1->TabIdBeingSpawned).TabType;
  lVar2 = *(longlong *)this;
  local_res18 = FVar1;
  uVar8 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar6 = local_res18;
  pFVar15 = (FName *)0x0;
  if (*(int *)(lVar2 + 0x50) != *(int *)(lVar2 + 0x7c)) {
    lVar13 = *(longlong *)(lVar2 + 0x88);
    if (*(longlong *)(lVar2 + 0x88) == 0) {
      lVar13 = lVar2 + 0x80;
    }
    uVar8 = *(uint *)(lVar13 + (ulonglong)(*(int *)(lVar2 + 0x90) - 1U & FVar1.Number + uVar8) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 + *(longlong *)(lVar2 + 0x48));
        if (*pFVar12 == FVar1) {
          pFVar11 = pFVar12 + 1;
          if (pFVar12 == (FName *)0x0) {
            pFVar11 = pFVar15;
          }
          if (pFVar11 != (FName *)0x0) {
            (**(code **)(*(longlong *)*pFVar11 + 0x10))(*pFVar11,__return_storage_ptr__,param_1);
            return __return_storage_ptr__;
          }
          break;
        }
        uVar8 = pFVar12[3].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  lVar2 = *(longlong *)this;
  pFVar9 = AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  uVar8 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  pFVar12 = pFVar15;
  if (*(int *)&(pFVar9->RegisteredRackUnitTypes).field_0x8 !=
      *(int *)&(pFVar9->RegisteredRackUnitTypes).field_0x34) {
    puVar14 = *(undefined1 **)&(pFVar9->RegisteredRackUnitTypes).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(pFVar9->RegisteredRackUnitTypes).field_0x38;
    }
    uVar8 = *(uint *)(puVar14 +
                     (ulonglong)
                     (*(int *)&(pFVar9->RegisteredRackUnitTypes).field_0x48 - 1U &
                     FVar6.Number + uVar8) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar12 = (FName *)(*(longlong *)&pFVar9->RegisteredRackUnitTypes +
                           (longlong)(int)uVar8 * 0x18);
        if (*(FName *)(*(longlong *)&pFVar9->RegisteredRackUnitTypes + (longlong)(int)uVar8 * 0x18)
            == FVar6) {
          if (pFVar12 != (FName *)0x0) goto LAB_14d8c9595;
          break;
        }
        uVar8 = pFVar12[2].ComparisonIndex.Value;
        pFVar12 = pFVar15;
      } while (uVar8 != 0xffffffff);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
    return pTVar10;
  }
LAB_14d8c9595:
  FVar1 = pFVar12[1];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar1 + 0x38),
             &local_48);
  if (*(int *)((longlong)FVar1 + 0x48) != 0) {
    pFVar15 = *(FName **)((longlong)FVar1 + 0x40);
  }
  (**(code **)((longlong)*pFVar15 + 0x60))(pFVar15,&local_68,lVar2 + 0x28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (*(char *)(lVar2 + 0xa8) != '\0') {
    (**(code **)(*local_68 + 0x18))();
  }
  local_58 = &local_res18;
  local_50 = &local_68;
  TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_&&>_>
            ((TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x48),
             (TPairInitializer<FName_const_&,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_&&>
              *)&local_res8,(bool *)&local_58);
  pTVar3 = *(TReferenceControllerBase<1> **)
            ((longlong)local_res8 * 0x20 + 0x10 + *(longlong *)(lVar2 + 0x48));
  plVar4 = *(longlong **)((longlong)local_res8 * 0x20 + 8 + *(longlong *)(lVar2 + 0x48));
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  (**(code **)(*plVar4 + 0x10))(plVar4,__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// operator() @ 14d8c9750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>::operator()
          (void *this)

{
  FTabManager *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedPtr<SDockTab,1> local_48;
  FTabId local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8c9782;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = *(FTabManager **)this;
    if (this_00 != (FTabManager *)0x0) {
      local_38.TabType = *(FName *)((longlong)this + 0x10);
      local_38.InstanceId = -1;
      local_38.Flags = SaveLayout;
      FTabManager::FindExistingLiveTab(this_00,&local_48,&local_38);
      if (local_48.Object == (SDockTab *)0x0) {
        local_20 = 0xffffffff;
        local_1c = 1;
        local_28 = *(undefined8 *)((longlong)this + 0x10);
        (**(code **)(this_00->_padding_ + 8))(this_00,local_18,&local_28,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
      }
      else {
        if ((local_48.Object == (SDockTab *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        SDockTab::RequestCloseTab(local_48.Object);
      }
      FTabManager::SavePersistentLayout(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14d8c9782:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14d8ca090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>::operator()
          (void *this,TSharedRef<SDockTab,1> *param_1)

{
  FTabManager *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8ca0c5;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = *(FTabManager **)this;
    if (this_00 != (FTabManager *)0x0) {
      local_38 = (undefined1  [8])0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      local_28 = 0;
      FTabManager::SetOnPersistLayout
                (this_00,(TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
                          *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FWriteAccessScope *)&local_20);
      if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_38);
      FTabManager::CloseAllAreas(this_00);
    }
  }
LAB_14d8ca0c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14d8ce7e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>::operator()
          (void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedPtr<SDockTab,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FTabId local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d8ce821;
      LOCK();
      aVar2 = pTVar5->SharedReferenceCount;
      bVar7 = aVar1 == aVar2;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar7);
    pTVar4 = pTVar5;
    if (*(FTabManager **)this != (FTabManager *)0x0) {
      local_28.TabType = *(FName *)((longlong)this + 0x10);
      local_28.InstanceId = -1;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000001;
      local_28.Flags = SaveLayout;
      pTVar3 = FTabManager::FindExistingLiveTab(*(FTabManager **)this,&local_18,&local_28);
      if (pTVar3->Object != (SDockTab *)0x0) {
        bVar7 = true;
        goto LAB_14d8ce824;
      }
    }
  }
LAB_14d8ce821:
  bVar7 = false;
  pTVar5 = pTVar4;
LAB_14d8ce824:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return bVar7;
}

// CreatePrimaryArea @ 14d909510

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FArea,1> * __thiscall
AudioWidgets::FAudioAnalyzerRack::CreatePrimaryArea
          (FAudioAnalyzerRack *this,TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,
          TArray<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  FName FVar4;
  FLayoutNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  int iVar13;
  FArea *pFVar14;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar15;
  TSharedRef<FTabManager::FArea,1> *pTVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  FLayoutNode *local_128;
  TReferenceControllerBase<1> *local_120;
  uint local_118;
  FName local_114;
  FName FStack_10c;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  char local_f6;
  undefined8 local_f0;
  FScriptContainerElement *local_e8;
  TRawPtrProxy<FTabManager::FArea> local_e0;
  TRawPtrProxy<FTabManager::FStack> local_d8;
  FArea *local_d0;
  FScriptContainerElement *local_c8;
  TSharedRef<FTabManager::FArea,1> local_c0;
  FName local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  TSharedRef<FTabManager::FLayoutNode,1> local_a0;
  TSharedRef<FTabManager::FStack,1> local_90;
  TSharedRef<FTabManager::FLayoutNode,1> local_80;
  TSharedRef<FTabManager::FLayoutNode,1> local_70;
  TSharedRef<FTabManager::FLayoutNode,1> local_60;
  TSharedRef<FTabManager::FLayoutNode,1> local_50;
  
  pFVar14 = ::operator_new(0x98);
  local_e0.Object = (FArea *)0x0;
  if (pFVar14 != (FArea *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
    pFVar14->_padding_ = 0;
    *(undefined4 *)&pFVar14->_padding_ = 0x3f800000;
    *(undefined4 *)&pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->WindowPlacement = Placement_Automatic;
    (pFVar14->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
    (pFVar14->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
    (pFVar14->UnscaledWindowSize).field0_0x0._s_0.X = 0.0;
    (pFVar14->UnscaledWindowSize).field0_0x0._s_0.Y = 0.0;
    pFVar14->bIsMaximized = false;
    (pFVar14->ExtensionId).ComparisonIndex = 0;
    (pFVar14->ExtensionId).Number = 0;
    (pFVar14->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
    (pFVar14->ActivePanelDrawerTab).TabId.TabType.Number = 0;
    (pFVar14->ActivePanelDrawerTab).TabId.InstanceId = -1;
    (pFVar14->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
    (pFVar14->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
    (pFVar14->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
    (pFVar14->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->InactivePanelDrawerTabs).ArrayNum = 0;
    (pFVar14->InactivePanelDrawerTabs).ArrayMax = 0;
    local_e0.Object = pFVar14;
  }
  TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
            (&local_c0,&local_e0);
  (local_c0.Object)->WindowPlacement = Placement_NoWindow;
  *(undefined4 *)&(local_c0.Object)->_padding_ = 1;
  pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_c0.Object)->_padding_,
                       &local_80);
  __return_storage_ptr__->Object = (FArea *)pTVar15->Object;
  pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  local_118 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_118;
  pFVar20 = (param_1->AllocatorInstance).Data;
  local_c8 = pFVar20 + uVar17 * 8;
  while( true ) {
    pFVar11 = local_c8;
    local_e8 = pFVar20;
    if (param_1->ArrayNum != (int)uVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar20 == pFVar11) {
      return __return_storage_ptr__;
    }
    pFVar3 = *(FName **)pFVar20;
    FVar4 = *pFVar3;
    if (((FVar4 == FAudioMeter::RackUnitTypeInfo.TypeName) ||
        (FVar4 == FAudioOscilloscope::RackUnitTypeInfo.TypeName)) ||
       (uVar19 = 2, FVar4 == FAudioSpectrumAnalyzer::RackUnitTypeInfo.TypeName)) {
      uVar19 = 1;
    }
    local_d0 = __return_storage_ptr__->Object;
    pFVar14 = ::operator_new(0x50);
    local_d8.Object = (FStack *)(FArea *)0x0;
    if (pFVar14 != (FArea *)0x0) {
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = 0;
      *(undefined4 *)&pFVar14->_padding_ = 0x3f800000;
      pFVar14->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = 0;
      *(undefined1 *)&pFVar14->_padding_ = 0;
      local_f0 = 0;
      *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0;
      *(undefined4 *)&pFVar14->field_0x3c = 0xffffffff;
      *(undefined1 *)&(pFVar14->UnscaledWindowPosition).field0_0x0 = 1;
      *(undefined8 *)((longlong)&(pFVar14->UnscaledWindowPosition).field0_0x0._s_0.X + 4) = 0;
      local_d8.Object = (FStack *)pFVar14;
    }
    TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
              (&local_90,&local_d8);
    *(uint *)&(local_90.Object)->_padding_ = pFVar3[10].ComparisonIndex.Value;
    pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                         &(local_90.Object)->_padding_,&local_70);
    pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar15->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    *(undefined1 *)&pFVar5[1]._padding_ = 1;
    pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar5->_padding_,&local_60
                        );
    pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar15->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    local_114 = *pFVar3;
    uStack_a8 = 0xffffffff;
    uStack_a4 = CONCAT31(uStack_a4._1_3_,1);
    local_100 = 2;
    local_fc = 0;
    local_f8 = 0;
    local_f6 = '\0';
    FStack_10c.Number = uStack_a4;
    FStack_10c.ComparisonIndex.Value = 0xffffffff;
    local_104 = uVar19;
    local_b0 = local_114;
    if ((((FName *)pFVar5[1]._padding_ <= &local_114) &&
        (&local_114 <
         (FName *)pFVar5[1]._padding_ + (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * 4))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) break;
    iVar13 = (int)pFVar5[1]._padding_;
    piVar1 = (int *)((longlong)&pFVar5[1]._padding_ + 4);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x420,(ForAnyElementType *)(pFVar5 + 1),piVar1);
    }
    lVar7 = pFVar5[1]._padding_;
    *(int *)&pFVar5[1]._padding_ = iVar13 + 1;
    lVar18 = (longlong)iVar13 * 0x20;
    *(FName *)(lVar18 + lVar7) = local_114;
    ((FName *)(lVar18 + lVar7))[1] = FStack_10c;
    *(undefined4 *)(lVar18 + 0x10 + lVar7) = local_104;
    *(undefined1 *)(lVar18 + 0x14 + lVar7) = local_100;
    *(undefined4 *)(lVar18 + 0x18 + lVar7) = local_fc;
    *(undefined1 *)(lVar18 + 0x1e + lVar7) = 0;
    *(undefined1 *)(lVar18 + 0x1c + lVar7) = local_f8;
    *(char *)(lVar18 + 0x1e + lVar7) = local_f6;
    if (local_f6 != '\0') {
      *(undefined1 *)(lVar18 + 0x1d + lVar7) = local_f7;
    }
    pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar5->_padding_,&local_a0
                        );
    pTVar8 = (pTVar15->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar15->Object;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14 = local_d0;
    local_128 = pFVar5;
    local_120 = pTVar8;
    if ((((FLayoutNode **)local_d0->_padding_ <= &local_128) &&
        (&local_128 <
         (FLayoutNode **)local_d0->_padding_ +
         (longlong)*(int *)((longlong)&local_d0->_padding_ + 4) * 2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar10)();
      return pTVar16;
    }
    iVar13 = (int)pFVar14->_padding_;
    piVar1 = (int *)((longlong)&pFVar14->_padding_ + 4);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)&pFVar14->_padding_,piVar1);
    }
    *(int *)&pFVar14->_padding_ = iVar13 + 1;
    lVar7 = pFVar14->_padding_;
    *(FLayoutNode **)(lVar7 + (longlong)iVar13 * 0x10) = local_128;
    *(TReferenceControllerBase<1> **)(lVar7 + 8 + (longlong)iVar13 * 0x10) = local_120;
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar14->_padding_,
                         &local_50);
    pTVar9 = (pTVar15->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    pFVar20 = local_e8 + 8;
    uVar17 = (ulonglong)local_118;
  }
  pcVar10 = (code *)swi(3);
  pTVar16 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar10)();
  return pTVar16;
}

// CreateWidget @ 14d90d1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FAudioAnalyzerRack::CreateWidget
          (FAudioAnalyzerRack *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1,FSpawnTabArgs *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  int iVar5;
  FWorkspaceItem *pFVar6;
  longlong lVar7;
  ISlateStyle *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SDockTab *this_00;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FMultiBoxCustomization FVar15;
  FScriptContainerElement *pFVar16;
  FName FVar17;
  FWorkspaceItem *this_01;
  bool bVar18;
  FTabManager *pFVar19;
  TSharedRef<FGlobalTabmanager,1> *pTVar20;
  TSharedRef<FTabManager,1> *pTVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FText *pFVar24;
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  *this_02;
  TSharedRef<SWidget,1> *pTVar25;
  FTabSpawnerEntry *pFVar26;
  TSharedRef<FWorkspaceItem,1> *pTVar27;
  TIntrusiveReferenceController<FUICommandList,1> *this_03;
  TIntrusiveReferenceController<FUICommandList,1> *pTVar28;
  FUIAction *pFVar29;
  TSharedRef<FTabManager::FLayout,1> *pTVar30;
  FName *pFVar31;
  FArguments *pFVar32;
  FSlot *this_04;
  FSlotArguments *pFVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  TSharedRef<SHorizontalBox,1> *pTVar36;
  FArguments *pFVar37;
  FSlotArguments *pFVar38;
  FArguments *pFVar39;
  TSharedRef<SColorBlock,1> *pTVar40;
  TSharedPtr<SWidget,1> *this_05;
  TSharedRef<SOverlay,1> *pTVar41;
  TSharedRef<SVerticalBox,1> *pTVar42;
  ulonglong uVar43;
  FSlotArguments *this_06;
  TReferenceControllerBase<1> *pTVar44;
  longlong *plVar45;
  FName FVar46;
  ForAnyElementType FVar47;
  TSharedPtr<FTabManager,1> *pTVar48;
  undefined1 local_1678;
  undefined1 local_1677;
  T0RequiredArgs local_1676;
  T0RequiredArgs local_1675;
  T0RequiredArgs local_1674;
  T0RequiredArgs local_1673 [3];
  FLLMScope local_1670;
  FLLMScope local_166c;
  FLLMScope local_1668;
  FLLMScope local_1664;
  undefined1 local_1660 [8];
  FDelegateAllocation local_1658;
  undefined1 local_1648 [8];
  FDelegateAllocation local_1640;
  undefined1 local_1630 [8];
  FDelegateAllocation local_1628;
  undefined1 local_1618 [8];
  FDelegateAllocation local_1610;
  undefined1 local_1600 [8];
  ForAnyElementType local_15f8;
  ulonglong local_15f0;
  undefined1 local_15e8 [8];
  ForAnyElementType local_15e0;
  int local_15d8;
  FScriptContainerElement *local_15d0;
  TSharedPtr<FTabManager,1> *local_15c8;
  FName local_15c0;
  FWorkspaceItem *local_15b8;
  TSharedRef<FWorkspaceItem,1> local_15b0;
  SOverlay *local_15a0;
  FSharedReferencer<1> local_1598;
  TArray<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,TSizedDefaultAllocator<32>_>
  local_1590;
  undefined1 local_1580 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1578;
  ForAnyElementType FStack_1570;
  ulonglong local_1568;
  undefined1 local_1560 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1558;
  ForAnyElementType FStack_1550;
  ulonglong local_1548;
  undefined1 local_1540 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1538;
  ForAnyElementType FStack_1530;
  ulonglong local_1528;
  undefined1 local_1520 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1518;
  ForAnyElementType FStack_1510;
  ulonglong local_1508;
  int local_1500;
  bool local_14fc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_14f8;
  ForAnyElementType FStack_14f0;
  ulonglong local_14e8;
  undefined1 local_14e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_14d8;
  ForAnyElementType FStack_14d0;
  ulonglong local_14c8;
  bool local_14bf;
  bool local_14bd;
  bool local_14b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_14b0;
  ForAnyElementType FStack_14a8;
  ulonglong local_14a0;
  undefined1 local_1498 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1480;
  ForAnyElementType FStack_1478;
  ulonglong local_1470;
  undefined1 local_1468 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1450;
  ForAnyElementType FStack_1448;
  ulonglong local_1440;
  FName local_1438;
  TSharedPtr<FTabManager,1> local_1430;
  undefined1 local_1420 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_13f8;
  ForAnyElementType FStack_13f0;
  ulonglong local_13e8;
  undefined1 local_13e0 [4];
  undefined1 local_13dc [4];
  undefined4 local_13d8 [2];
  FMemScope local_13d0;
  FName local_13c8;
  FMemScope local_13c0;
  FMemScope local_13b8;
  FName local_13b0;
  FMemScope local_13a8;
  FName local_13a0;
  TAttribute<EVisibility> local_1398;
  TAttribute<float> local_1378;
  TAttribute<EMenuPlacement> local_1358;
  TSharedRef<FWorkspaceItem,1> local_1338;
  TSharedRef<FWorkspaceItem,1> local_1328;
  TSharedRef<FUICommandList,1> local_1318;
  TSharedRef<SWidget,1> local_1308;
  TSharedRef<SWidget,1> local_12f8;
  TSharedRef<FTabManager::FLayout,1> local_12e8;
  TSharedRef<FWorkspaceItem,1> local_12d8;
  FDestructionSentinel local_12c8;
  FDestructionSentinel local_12b0;
  FDestructionSentinel local_1298;
  FDestructionSentinel local_1280;
  FDestructionSentinel local_1268;
  FDestructionSentinel local_1250;
  FDestructionSentinel local_1238;
  FDestructionSentinel local_1220;
  FDestructionSentinel local_1208;
  FDestructionSentinel local_11f0;
  FDestructionSentinel local_11d8;
  FDestructionSentinel local_11c0;
  FDestructionSentinel local_11a8;
  undefined1 local_1190 [24];
  undefined1 local_1178 [24];
  FDestructionSentinel local_1160;
  FDestructionSentinel local_1148;
  FDestructionSentinel local_1130;
  FDestructionSentinel local_1118;
  FDelegateAllocation *local_1100;
  FDestructionSentinel local_10f8;
  FDelegateAllocation *local_10e0;
  FDestructionSentinel local_10d8;
  FDelegateAllocation *local_10c0;
  FDestructionSentinel local_10b8;
  FDelegateAllocation *local_10a0;
  TAttribute<FText> local_1098;
  FLinearColor_u_0 local_1068;
  undefined1 local_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  TSharedRef<FTabManager,1> local_1038;
  TSharedPtr<FExtender,1> local_1028;
  TSharedPtr<FUICommandList_const_,1> local_1018;
  TSharedRef<SColorBlock,1> local_1008;
  TSharedPtr<SWidget,1> local_ff8;
  TSharedRef<SWidget,1> local_fe8;
  TSharedRef<SWidget,1> local_fd8;
  TSharedRef<SHorizontalBox,1> local_fc8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_fb8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_fa0;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_f88;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_f70;
  TSharedRef<SOverlay,1> local_f58;
  TSharedRef<SVerticalBox,1> local_f48;
  FText local_f38;
  FName local_f28;
  undefined1 local_f20 [24];
  undefined1 local_f08 [24];
  undefined1 local_ef0 [24];
  undefined1 local_ed8 [32];
  TSharedRef<FTabManager::FLayout,1> local_eb8;
  undefined1 local_ea8 [56];
  void *local_e70;
  undefined1 local_e48 [56];
  void *local_e10;
  undefined1 local_de8 [304];
  undefined1 local_cb8 [40];
  undefined8 *local_c90 [2];
  TReferenceControllerBase<1> *local_c80;
  undefined1 local_c60 [40];
  FSlotArgumentsMixin local_c38;
  undefined8 *local_ba8 [2];
  TReferenceControllerBase<1> *local_b98;
  undefined1 local_b78 [40];
  FSlotArgumentsMixin local_b50;
  undefined8 *local_ac0 [2];
  TReferenceControllerBase<1> *local_ab0;
  undefined1 local_a90 [40];
  FSlotArgumentsMixin local_a68;
  FArguments local_9d8;
  FArguments local_7d0;
  FArguments local_5c8;
  FArguments local_3b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d90d1d2;
  pTVar48 = &this->TabManager;
  local_15c8 = pTVar48;
  if (pTVar48->Object != (FTabManager *)0x0) {
    pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
    FTabManager::UnregisterAllTabSpawners(pFVar19);
    pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
    local_15e8 = (undefined1  [8])0x0;
    local_15e0.Data = (FScriptContainerElement *)0x0;
    local_15d8 = 0;
    FTabManager::SetOnPersistLayout
              (pFVar19,(TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
                        *)local_15e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15e8,
               (FWriteAccessScope *)&local_1238);
    if ((local_15d8 != 0) && (local_15e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_15e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_15e0,0,0,0x10);
      local_15d8 = 0;
    }
    if (local_1238.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1238.Accessor,&local_1238);
    }
    if (local_15e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_15e8);
    pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
    FTabManager::CloseAllAreas(pFVar19);
  }
  pTVar20 = FGlobalTabmanager::Get();
  pTVar21 = FGlobalTabmanager::NewTabManager(pTVar20->Object,&local_1038,param_1);
  local_1430.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  local_1430.Object = pTVar21->Object;
  if (local_1430.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar48 != &local_1430) {
    pTVar48->Object = local_1430.Object;
    local_1430.Object = (FTabManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TabManager).SharedReferenceCount,&local_1430.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1038.SharedReferenceCount.ReferenceController);
  pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
  local_1618 = (undefined1  [8])0x0;
  local_1610.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1610.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1618,
             (FWriteAccessScope *)&local_10f8);
  local_10e0 = &local_1610;
  puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_1610);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VFLayout_FTabManager___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &
               ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VFLayout_FTabManager___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = SaveTabLayout;
  }
  if (local_10f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10f8.Accessor,&local_10f8);
  }
  FTabManager::SetOnPersistLayout
            (pFVar19,(TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
                      *)local_1618);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1618,
             (FWriteAccessScope *)&local_12c8);
  if ((local_1610.DelegateSize != 0) &&
     (local_1610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1610.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1610,0,0,0x10);
    local_1610.DelegateSize = 0;
  }
  if (local_12c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12c8.Accessor,&local_12c8);
  }
  if (local_1610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1610.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1618);
  pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_f38,L"FAudioAnalyzerRack",L"AnalyzerRackGroupName",L"Analyzers");
  FTabManager::AddLocalWorkspaceMenuCategory(pFVar19,&local_1338,pFVar24);
  if (local_f38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f38.TextData.Reference + 0x10))();
  }
  local_1590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1590.ArrayNum = 0;
  local_1590.ArrayMax = 0;
  this_02 = (TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
             *)FAudioAnalyzerRackUnitRegistry::Get();
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this_02,&local_1590);
  iVar5 = local_1590.ArrayNum;
  uVar43 = (ulonglong)local_1590.ArrayNum;
  local_15d0 = local_1590.AllocatorInstance.Data + uVar43 * 8;
  FVar47.Data = local_1590.AllocatorInstance.Data;
  while( true ) {
    pFVar16 = local_15d0;
    pTVar28 = (TIntrusiveReferenceController<FUICommandList,1> *)0x0;
    if ((int)uVar43 != iVar5) {
      local_1678 = 0;
      `TCheckedPointerIterator<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_1678);
    }
    if (FVar47.Data == pFVar16) break;
    pFVar31 = *(FName **)FVar47.Data;
    if ((pTVar48->Object == (FTabManager *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      pTVar25 = (TSharedRef<SWidget,1> *)(*pcVar12)();
      return pTVar25;
    }
    pFVar19 = pTVar48->Object;
    local_15f0 = 0;
    local_1600 = (undefined1  [8])0x0;
    local_15f8.Data = (FScriptContainerElement *)0x0;
    local_1648 = (undefined1  [8])0x0;
    local_1640.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1640.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1648,
               (FWriteAccessScope *)&local_10d8);
    local_10c0 = &local_1640;
    puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_1640);
    if (puVar22 != (undefined8 *)0x0) {
      *puVar22 = &
                 ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar23 = FDelegateHandle::GenerateNewID();
      puVar22[2] = uVar23;
      *puVar22 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`9'::<lambda_1>_>
                  ::_vftable_;
      puVar22[3] = this;
    }
    if (local_10d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10d8.Accessor,&local_10d8);
    }
    pFVar26 = FTabManager::RegisterTabSpawner
                        (pFVar19,*pFVar31,
                         (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                          *)local_1648,
                         (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                          *)local_1600);
    this_01 = local_1338.Object;
    pTVar27 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                        ((TSharedFromThis<FWorkspaceItem,1> *)&pFVar26->_padding_,&local_1328);
    pTVar44 = (pTVar27->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar27->Object;
    if (pTVar44 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1328.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar44->SharedReferenceCount = (atomic<int>)((int)pTVar44->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1328.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar44->SharedReferenceCount = (atomic<int>)((int)pTVar44->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15b0.Object = pFVar6;
    local_15b0.SharedReferenceCount.ReferenceController = pTVar44;
    FWorkspaceItem::AddItem(this_01,&local_15b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar44);
    TAttribute<FText>::TAttribute<FText><FText>
              ((TAttribute<FText> *)local_1190,(FText *)(pFVar31 + 1));
    FText::operator=((FText *)&pFVar26->_padding_,(FText *)local_1190);
    *(bool *)&pFVar26->_padding_ = local_1190[0x10];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1178);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1178);
    if ((void *)local_1178._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1178._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1178);
    if ((ITextData *)local_1190._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1190._0_8_ + 0x10))();
    }
    FVar46 = pFVar31[4];
    pFVar26->_padding_ = (longlong)pFVar31[3];
    pFVar26->_padding_ = (longlong)FVar46;
    FVar46 = pFVar31[6];
    pFVar26->_padding_ = (longlong)pFVar31[5];
    pFVar26->_padding_ = (longlong)FVar46;
    pFVar26->bCanSidebarTab = false;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1648,
               (FWriteAccessScope *)&local_1208);
    if ((local_1640.DelegateSize != 0) &&
       (local_1640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1640.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1640,0,0,0x10);
      local_1640.DelegateSize = 0;
    }
    if (local_1208.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1208.Accessor,&local_1208);
    }
    if (local_1640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1640.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1648);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1600,
               (FWriteAccessScope *)&local_11f0);
    if (((int)local_15f0 != 0) && (local_15f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_15f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_15f8,0,0,0x10);
      local_15f0 = local_15f0 & 0xffffffff00000000;
    }
    if (local_11f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11f0.Accessor,&local_11f0);
    }
    if (local_15f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1600);
    uVar43 = local_1590._8_8_ & 0xffffffff;
    FVar47.Data = FVar47.Data + 8;
    pTVar48 = local_15c8;
  }
  this_03 = ::operator_new(0x150);
  if (this_03 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    pTVar28 = SharedPointerInternals::TIntrusiveReferenceController<FUICommandList,1>::
              TIntrusiveReferenceController<FUICommandList,1><>(this_03);
  }
  TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1>
            (&local_1318,(FUICommandList *)&pTVar28->ObjectStorage,
             (TReferenceControllerBase<1> *)pTVar28);
  FVar15 = FMultiBoxCustomization::None;
  local_1028.Object = (FExtender *)0x0;
  local_1028.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1018.Object = local_1318.Object;
  local_1018.SharedReferenceCount.ReferenceController =
       local_1318.SharedReferenceCount.ReferenceController;
  local_15b0.Object = (FWorkspaceItem *)local_1318.SharedReferenceCount.ReferenceController;
  if ((FWorkspaceItem *)local_1318.SharedReferenceCount.ReferenceController != (FWorkspaceItem *)0x0
     ) {
    LOCK();
    (local_1318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)local_de8,&local_1018,FVar15,&local_1028,true);
  pFVar19 = TSharedPtr<FTabManager,1>::operator->(pTVar48);
  FTabManager::GetLocalWorkspaceMenuRoot(pFVar19,&local_12d8);
  local_15b8 = local_12d8.Object;
  iVar5 = ((local_12d8.Object)->ChildItems).ArrayNum;
  uVar43 = (ulonglong)iVar5;
  FVar46 = (FName)((local_12d8.Object)->ChildItems).AllocatorInstance.Data;
  local_15c0 = (FName)(uVar43 * 0x10 + (longlong)FVar46);
  local_15d0 = (FScriptContainerElement *)CONCAT44(local_15d0._4_4_,iVar5);
  while( true ) {
    FVar17 = local_15c0;
    if ((local_15b8->ChildItems).ArrayNum != (int)uVar43) {
      `TCheckedPointerIterator<TSharedRef<FWorkspaceItem,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1677);
    }
    if (FVar46 == FVar17) break;
    memset(local_1580,0,200);
    local_1500 = 0;
    local_1568 = 0;
    local_1548 = 0;
    local_1528 = 0;
    local_1508 = 0;
    local_14e8 = 0;
    local_14c8 = 0;
    local_14a0 = 0;
    local_1358.Getter._16_8_ = 0;
    local_1578.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1570.Data = (FScriptContainerElement *)0x0;
    local_1560[0] = false;
    local_1560[1] = false;
    local_1558.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1550.Data = (FScriptContainerElement *)0x0;
    local_1540[0] = false;
    local_1540[1] = false;
    local_1538.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1530.Data = (FScriptContainerElement *)0x0;
    local_1520[0] = false;
    local_1520[1] = false;
    local_1518.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1510.Data = (FScriptContainerElement *)0x0;
    local_14fc = false;
    local_14f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_14f0.Data = (FScriptContainerElement *)0x0;
    local_14e0[0] = Preferred;
    local_14e0[1] = false;
    local_14d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_14d0.Data = (FScriptContainerElement *)0x0;
    local_14bf = false;
    local_14bd = false;
    local_14b8 = false;
    local_14b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_14a8.Data = (FScriptContainerElement *)0x0;
    local_1358.Value = MenuPlacement_BelowAnchor;
    local_1358.bIsSet = false;
    local_1358.Getter._0_8_ = 0;
    local_1358.Getter._8_8_ = 0;
    FText::FText(&local_1098.Value);
    lVar7 = *(longlong *)FVar46;
    local_1098.Getter._0_8_ = 0;
    local_1098.Getter._8_8_ = 0;
    local_1098.bIsSet = false;
    local_1398.Getter._0_8_ = 0;
    local_1398.Getter._8_8_ = 0;
    local_1098.Getter._16_8_ = 0;
    local_1398.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_1398.bIsSet = false;
    local_1398.Getter._16_8_ = 0;
    local_1420._0_8_ = *(FName *)(lVar7 + 0x18);
    local_1420._8_8_ = *(FName *)(lVar7 + 0x20);
    local_1438.ComparisonIndex.Value = 0;
    local_1438.Number = 0;
    local_1420._16_8_ = *(FName *)(lVar7 + 0x28);
    local_1420._24_8_ = *(FName *)(lVar7 + 0x30);
    local_1420[0x20] = true;
    local_13e8 = 0;
    local_13f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_13f0.Data = (FScriptContainerElement *)0x0;
    pFVar24 = TAttribute<FText>::Get((TAttribute<FText> *)(lVar7 + 0x90));
    local_1498._0_8_ = (pFVar24->TextData).Reference;
    if ((ITextData *)local_1498._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1498._0_8_ + 8))(local_1498._0_8_,local_13e0);
    }
    local_1498._8_4_ = pFVar24->Flags;
    local_1498[0x10] = true;
    local_1470 = 0;
    local_1480.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1478.Data = (FScriptContainerElement *)0x0;
    pFVar24 = TAttribute<FText>::Get((TAttribute<FText> *)(*(longlong *)FVar46 + 0x60));
    local_1468._0_8_ = (pFVar24->TextData).Reference;
    if ((ITextData *)local_1468._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1468._0_8_ + 8))(local_1468._0_8_,local_13dc);
    }
    local_1468._8_4_ = pFVar24->Flags;
    pFVar19 = pTVar48->Object;
    local_1440 = 0;
    local_1468[0x10] = true;
    local_1450.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1448.Data = (FScriptContainerElement *)0x0;
    pTVar44 = (this->TabManager).SharedReferenceCount.ReferenceController;
    if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar44->WeakReferenceCount = (atomic<int>)((int)pTVar44->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar45 = *(longlong **)((longlong)FVar46 + 8);
    lVar7 = *(longlong *)FVar46;
    if (plVar45 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar45 + 0xc) = *(int *)((longlong)plVar45 + 0xc) + 1;
      UNLOCK();
    }
    local_1630 = (undefined1  [8])0x0;
    local_1628.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1628.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1630,
               (FWriteAccessScope *)&local_10b8);
    local_10a0 = &local_1628;
    puVar22 = UE::Core::Private::DelegateAllocate(0x48,&local_1628);
    if (puVar22 != (undefined8 *)0x0) {
      *puVar22 = &
                 ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUICommandList___00__V__TWeakPtr_VFWorkspaceItem___00__V__TWeakPtr_VFTabManager___00____6B_
      ;
      puVar22[1] = local_1318.Object;
      puVar22[2] = local_1318.SharedReferenceCount.ReferenceController;
      if ((FWorkspaceItem *)local_1318.SharedReferenceCount.ReferenceController !=
          (FWorkspaceItem *)0x0) {
        LOCK();
        (local_1318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar22[4] = plVar45;
      plVar45 = (longlong *)0x0;
      puVar22[6] = pTVar44;
      pTVar44 = (TReferenceControllerBase<1> *)0x0;
      puVar22[3] = lVar7;
      puVar22[5] = pFVar19;
      uVar23 = FDelegateHandle::GenerateNewID();
      puVar22[7] = uVar23;
      *puVar22 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUICommandList___00__V__TWeakPtr_VFWorkspaceItem___00__V__TWeakPtr_VFTabManager___00____6B_
      ;
      puVar22[8] = MakeVisibleAnalyzersMenu;
    }
    if (local_10b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10b8.Accessor,&local_10b8);
    }
    pFVar29 = FUIAction::FUIAction((FUIAction *)local_f20);
    FToolBarBuilder::AddComboButton
              ((FToolBarBuilder *)local_de8,pFVar29,
               (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
               local_1630,(TAttribute<FText> *)local_1468,(TAttribute<FText> *)local_1498,
               (TAttribute<FSlateIcon> *)local_1420,true,local_1438,&local_1398,&local_1098,
               &local_1358,Button,(TAttribute<FMenuEntryResizeParams> *)local_1580);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed8);
    if ((void *)local_ed8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ed8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ed8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef0);
    if ((void *)local_ef0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ef0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ef0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f08);
    if ((void *)local_f08._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f08._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f08);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f20);
    if ((void *)local_f20._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f20._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1630,
               (FWriteAccessScope *)&local_11d8);
    if ((local_1628.DelegateSize != 0) &&
       (local_1628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1628.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1628,0,0,0x10);
      local_1628.DelegateSize = 0;
    }
    if (local_11d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11d8.Accessor,&local_11d8);
    }
    if (local_1628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1628.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1630);
    if (plVar45 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar45 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar45 + 8))(plVar45,1);
      }
    }
    if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar44->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar44->_padding_ + 8))(pTVar44,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1450,(FWriteAccessScope *)&local_11c0);
    if (((int)local_1440 != 0) && (FStack_1448.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1448.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1448,0,0,0x10);
      local_1440 = local_1440 & 0xffffffff00000000;
    }
    if (local_11c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
    }
    if (FStack_1448.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1448.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1450.AccessDetector);
    if ((ITextData *)local_1468._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1468._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1480,(FWriteAccessScope *)&local_11a8);
    if (((int)local_1470 != 0) && (FStack_1478.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1478.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1478,0,0,0x10);
      local_1470 = local_1470 & 0xffffffff00000000;
    }
    if (local_11a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11a8.Accessor,&local_11a8);
    }
    if (FStack_1478.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1478.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1480.AccessDetector);
    if ((ITextData *)local_1498._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1498._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_13f8,(FWriteAccessScope *)&local_1220);
    if (((int)local_13e8 != 0) && (FStack_13f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_13f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13f0,0,0,0x10);
      local_13e8 = local_13e8 & 0xffffffff00000000;
    }
    if (local_1220.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1220.Accessor,&local_1220);
    }
    if (FStack_13f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_13f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_13f8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_14b0,(FWriteAccessScope *)&local_1160);
    if (((int)local_14a0 != 0) && (FStack_14a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_14a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14a8,0,0,0x10);
      local_14a0 = local_14a0 & 0xffffffff00000000;
    }
    if (local_1160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1160.Accessor,&local_1160);
    }
    if (FStack_14a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_14a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_14b0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_14d8,(FWriteAccessScope *)&local_1148);
    if (((int)local_14c8 != 0) && (FStack_14d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_14d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d0,0,0,0x10);
      local_14c8 = local_14c8 & 0xffffffff00000000;
    }
    if (local_1148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1148.Accessor,&local_1148);
    }
    if (FStack_14d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_14d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_14d8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_14f8,(FWriteAccessScope *)&local_1130);
    if (((int)local_14e8 != 0) && (FStack_14f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_14f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14f0,0,0,0x10);
      local_14e8 = local_14e8 & 0xffffffff00000000;
    }
    if (local_1130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1130.Accessor,&local_1130);
    }
    if (FStack_14f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_14f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_14f8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1518,(FWriteAccessScope *)&local_12b0);
    if (((int)local_1508 != 0) && (FStack_1510.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1510.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1510,0,0,0x10);
      local_1508 = local_1508 & 0xffffffff00000000;
    }
    if (local_12b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b0.Accessor,&local_12b0);
    }
    if (FStack_1510.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1510.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1518.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1538,(FWriteAccessScope *)&local_1298);
    if (((int)local_1528 != 0) && (FStack_1530.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1530.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1530,0,0,0x10);
      local_1528 = local_1528 & 0xffffffff00000000;
    }
    if (local_1298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1298.Accessor,&local_1298);
    }
    if (FStack_1530.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1530.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1538.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1558,(FWriteAccessScope *)&local_1280);
    if (((int)local_1548 != 0) && (FStack_1550.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1550.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1550,0,0,0x10);
      local_1548 = local_1548 & 0xffffffff00000000;
    }
    if (local_1280.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1280.Accessor,&local_1280);
    }
    if (FStack_1550.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1550.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1558.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1578,(FWriteAccessScope *)&local_1268);
    if (((int)local_1568 != 0) && (FStack_1570.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1570.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1570,0,0,0x10);
      local_1568 = local_1568 & 0xffffffff00000000;
    }
    if (local_1268.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
    }
    if (FStack_1570.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1570.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1578.AccessDetector);
    FVar46 = (FName)((longlong)FVar46 + 0x10);
    uVar43 = (ulonglong)local_15d0 & 0xffffffff;
    pTVar48 = local_15c8;
  }
  pTVar30 = GetDefaultTabLayout(this,&local_eb8);
  FLayoutSaveRestore::LoadFromConfig(&local_12e8,&GEditorLayoutIni,pTVar30,Never);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_eb8.SharedReferenceCount.ReferenceController);
  pIVar8 = (this->RackUnitConstructParams).StyleSet;
  pcVar12 = *(code **)((longlong)*pIVar8 + 0x38);
  pFVar31 = ::FName::FName(&local_f28,"AudioAnalyzerRack.BackgroundColor");
  puVar22 = (undefined8 *)(*pcVar12)(pIVar8,*pFVar31,0,&FStyleDefaults::DefaultColor,0);
  uVar13 = *puVar22;
  uVar14 = puVar22[1];
  pFVar32 = SVerticalBox::FArguments::FArguments(&local_5c8);
  this_04 = ::operator_new(0x58);
  pFVar33 = (FSlotArguments *)0x0;
  if (this_04 != (FSlot *)0x0) {
    *(undefined8 *)this_04 = 0;
    *(undefined8 *)&this_04->field_0x8 = 0;
    *(undefined8 *)&this_04->field_0x10 = 0;
    *(undefined8 *)&this_04->field_0x18 = 0;
    *(undefined8 *)&this_04->field_0x20 = 0;
    *(undefined8 *)&this_04->field_0x28 = 0;
    *(undefined8 *)&this_04->field_0x30 = 0;
    *(undefined8 *)&this_04->field_0x38 = 0;
    *(undefined8 *)&this_04->field_0x40 = 0;
    *(undefined8 *)&this_04->field_0x48 = 0;
    *(undefined8 *)&this_04->field_0x50 = 0;
    pFVar33 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_04);
  }
  local_15b8 = (FWorkspaceItem *)pFVar33;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_c90,(FSlot *)&local_15b8);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_c90);
  pFVar35 = SHorizontalBox::FArguments::FArguments(&local_7d0);
  pFVar33 = SHorizontalBox::Slot((FSlotArguments *)local_ac0);
  puVar3 = &pFVar33->field_0x48;
  if (local_13d8 != (undefined4 *)puVar3) {
    *(undefined4 *)puVar3 = 3;
    pFVar33->field_0x4c = 1;
  }
  this_06 = (FSlotArguments *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    this_06 = pFVar33;
  }
  pTVar25 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)local_de8,&local_fd8,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar33 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)this_06,pTVar25);
  pFVar35 = SHorizontalBox::FArguments::operator+(pFVar35,pFVar33);
  FLLMScope::FLLMScope(&local_1670,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_15c0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_f70,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioAnalyzerRack.cpp"
             ,0x95,&local_1676);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope(&local_1670);
  pTVar36 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f70,&local_fc8,pFVar35);
  pTVar44 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_1308.Object = (SWidget *)pTVar36->Object;
  if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar44->SharedReferenceCount = (atomic<int>)((int)pTVar44->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1308.SharedReferenceCount.ReferenceController = pTVar44;
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_1308);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar34);
  pFVar34 = SVerticalBox::Slot((FSlotArguments *)local_ba8);
  local_1378.Value = 1.0;
  local_1378.bIsSet = true;
  local_1378.Getter._0_8_ = 0;
  local_1378.Getter._8_8_ = 0;
  local_1378.Getter._16_8_ = 0;
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar34,&local_1378);
  pFVar37 = SOverlay::FArguments::FArguments(&local_9d8);
  pFVar38 = SOverlay::Slot((FSlotArguments *)local_e48,0);
  pFVar39 = SColorBlock::FArguments::FArguments(&local_3b8);
  local_1058 = 1;
  local_1040 = 0;
  local_1050 = 0;
  uStack_1048 = 0;
  local_1068._0_8_ = uVar13;
  local_1068._8_8_ = uVar14;
  pFVar39 = SColorBlock::FArguments::Color(pFVar39,(TAttribute<FLinearColor> *)&local_1068._s_0);
  FLLMScope::FLLMScope(&local_166c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13b8,&local_13a0,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (&local_f88,"SColorBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioAnalyzerRack.cpp"
             ,0xa2,&local_1675);
  FMemScope::~FMemScope(&local_13b8);
  FLLMScope::~FLLMScope(&local_166c);
  pTVar40 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f88,&local_1008,pFVar39);
  pTVar9 = (pTVar40->SharedReferenceCount).ReferenceController;
  local_12f8.Object = (SWidget *)pTVar40->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_12f8.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar38 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar38,&local_12f8);
  pFVar37 = SOverlay::FArguments::operator+(pFVar37,pFVar38);
  pFVar38 = SOverlay::Slot((FSlotArguments *)local_ea8,0);
  pTVar48 = local_15c8;
  pFVar19 = TSharedPtr<FTabManager,1>::operator->(local_15c8);
  this_05 = FTabManager::RestoreFrom
                      (pFVar19,&local_ff8,&local_12e8,&param_2->OwnerWindow,false,Never);
  pTVar25 = TSharedPtr<SWidget,1>::ToSharedRef(this_05,&local_fe8);
  pFVar38 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar38,pTVar25);
  pFVar37 = SOverlay::FArguments::operator+(pFVar37,pFVar38);
  FLLMScope::FLLMScope(&local_1668,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13a8,&local_13b0,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_fa0,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioAnalyzerRack.cpp"
             ,0x9f,&local_1674);
  FMemScope::~FMemScope(&local_13a8);
  FLLMScope::~FLLMScope(&local_1668);
  pTVar41 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fa0,&local_f58,pFVar37);
  pTVar10 = (pTVar41->SharedReferenceCount).ReferenceController;
  local_15a0 = pTVar41->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1598.ReferenceController = pTVar10;
  if ((SOverlay **)&pFVar34->field_0x8 != &local_15a0) {
    *(SOverlay **)&pFVar34->field_0x8 = local_15a0;
    local_15a0 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_1598);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598.ReferenceController);
  pFVar32 = SVerticalBox::FArguments::operator+(pFVar32,pFVar34);
  FLLMScope::FLLMScope(&local_1664,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13c0,&local_13c8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_fb8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioAnalyzerRack.cpp"
             ,0x91,local_1673);
  FMemScope::~FMemScope(&local_13c0);
  FLLMScope::~FLLMScope(&local_1664);
  pTVar42 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fb8,&local_f48,pFVar32);
  __return_storage_ptr__->Object = (SWidget *)pTVar42->Object;
  pTVar11 = (pTVar42->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_ea8 + 0x30));
  if (local_e70 != (void *)0x0) {
    FMemory::Free(local_e70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_ea8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_ea8._16_8_);
  if ((undefined8 *)local_ea8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_ea8._0_8_)(local_ea8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f88._Widget.SharedReferenceCount.ReferenceController);
  SColorBlock::FArguments::~FArguments(&local_3b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_e48 + 0x30));
  if (local_e10 != (void *)0x0) {
    FMemory::Free(local_e10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_e48 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e48._16_8_);
  if ((undefined8 *)local_e48._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_e48._0_8_)(local_e48._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_9d8._Slots.AllocatorInstance.Data,local_9d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_9d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9d8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b78);
  if ((void *)local_b78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b98);
  if (local_ba8[0] != (undefined8 *)0x0) {
    (**(code **)*local_ba8[0])(local_ba8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar44);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a90);
  if ((void *)local_a90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ab0);
  if (local_ac0[0] != (undefined8 *)0x0) {
    (**(code **)*local_ac0[0])(local_ac0[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_7d0._Slots.AllocatorInstance.Data,local_7d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_7d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7d0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_c38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c60);
  if ((void *)local_c60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c80);
  if (local_c90[0] != (undefined8 *)0x0) {
    (**(code **)*local_c90[0])(local_c90[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5c8._Slots.AllocatorInstance.Data,local_5c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_5c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5c8);
  pTVar44 = (pTVar48->SharedReferenceCount).ReferenceController;
  pFVar19 = pTVar48->Object;
  this_00 = param_1->Object;
  if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar44->WeakReferenceCount = (atomic<int>)((int)pTVar44->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_1660 = (undefined1  [8])0x0;
  local_1658.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1658.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1660,
             (FWriteAccessScope *)&local_1118);
  local_1100 = &local_1658;
  puVar22 = UE::Core::Private::DelegateAllocate(0x28,&local_1658);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar22[4] = pTVar44;
    puVar22[3] = pFVar19;
    pTVar44 = (TReferenceControllerBase<1> *)0x0;
  }
  if (local_1118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1118.Accessor,&local_1118);
  }
  SDockTab::SetOnTabClosed
            (this_00,(TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> *)
                     local_1660);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1660,
             (FWriteAccessScope *)&local_1250);
  if ((local_1658.DelegateSize != 0) &&
     (local_1658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1658.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1658,0,0,0x10);
    local_1658.DelegateSize = 0;
  }
  if (local_1250.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1250.Accessor,&local_1250);
  }
  if (local_1658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1658.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1660);
  if (pTVar44 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar44->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar44->_padding_ + 8))(pTVar44,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12d8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cb8);
  if ((void *)local_cb8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_cb8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_cb8);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)(local_de8 + 0x60));
  local_de8._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_de8._40_8_,local_de8._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_de8._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_de8._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_de8._24_8_,local_de8._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_de8._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_de8._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_de8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_15b0.Object);
  if (local_1590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1590.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1338.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// DestroyAnalyzers @ 14d911c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioAnalyzerRack::DestroyAnalyzers(FAudioAnalyzerRack *this)

{
  TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
           *)&this->RackUnits);
  return;
}

// GetAudioBus @ 14d92acb0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioBus * __thiscall AudioWidgets::FAudioAnalyzerRack::GetAudioBus(FAudioAnalyzerRack *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetDefaultTabLayout @ 14d92d4a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FLayout,1> * __thiscall
AudioWidgets::FAudioAnalyzerRack::GetDefaultTabLayout
          (FAudioAnalyzerRack *this,TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__)

{
  int *piVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  *this_00;
  FLayout *pFVar7;
  FLayout *pFVar8;
  TSharedRef<FTabManager::FLayout,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TRawPtrProxy<FTabManager::FLayout> local_res8;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  TArray<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,TSizedDefaultAllocator<32>_> local_38;
  TSharedRef<FTabManager::FLayout,1> local_28;
  TSharedRef<FTabManager::FLayout,1> local_18;
  
  pFVar8 = (FLayout *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = (TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
             *)FAudioAnalyzerRackUnitRegistry::Get();
  TMapBase<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this_00,&local_38);
  (**(code **)(this->_padding_ + 8))(this,&local_48,&local_38);
  FVar2 = this->TabManagerLayoutName;
  pFVar7 = ::operator_new(0x38);
  if (pFVar7 != (FLayout *)0x0) {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    (pFVar7->PrimaryArea).Object = (FArea *)0x0;
    (pFVar7->PrimaryArea).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar7->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Areas).ArrayNum = 0;
    (pFVar7->Areas).ArrayMax = 0;
    pFVar7->LayoutName = FVar2;
    pFVar8 = pFVar7;
  }
  local_res8.Object = pFVar8;
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_28,&local_res8);
  pFVar10 = ((local_28.Object)->Areas).AllocatorInstance.Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar10 + (longlong)((local_28.Object)->Areas).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar4)();
    return pTVar9;
  }
  iVar6 = ((local_28.Object)->Areas).ArrayNum;
  piVar1 = &((local_28.Object)->Areas).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&((local_28.Object)->Areas).AllocatorInstance,piVar1);
  }
  ((local_28.Object)->Areas).ArrayNum = iVar6 + 1;
  pFVar10 = ((local_28.Object)->Areas).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayout,1> *)local_28.Object,&local_18);
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Init @ 14d93b040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioAnalyzerRack::Init(FAudioAnalyzerRack *this,int param_1,uint param_2)

{
  FAudioAnalyzerRackUnitConstructParams *pFVar1;
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  EAudioBusChannels EVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  UObject *pUVar11;
  UAudioBus *this_00;
  longlong lVar12;
  int iVar13;
  UAudioBus *pUVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  UAudioBus *pUVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res18 [16];
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  longlong local_68 [4];
  undefined4 local_44;
  
  EVar7 = AudioBusUtils::ConvertIntToEAudioBusChannels(param_1);
  pFVar1 = &this->RackUnitConstructParams;
  if ((((pFVar1->AudioBusInfo).AudioDeviceId != param_2) ||
      (pUVar11 = (this->AudioBus).Object, pUVar11 == (UObject *)0x0)) ||
     (pUVar11[1].field_0x8 != EVar7)) {
    pUVar11 = GetTransientPackageAsObject();
    this_00 = NewObject<UAudioBus>(pUVar11);
    pUVar18 = (UAudioBus *)0x0;
    uVar16 = 0;
    pUVar14 = pUVar18;
    if (this_00 != (UAudioBus *)0x0) {
      UObjectBase::AddRef((UObjectBase *)this_00);
      pUVar14 = this_00;
    }
    pTVar2 = &this->AudioBus;
    if (pTVar2 == (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)local_68) {
      if (pUVar14 != (UAudioBus *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar14);
      }
    }
    else {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
      }
      pTVar2->Object = (UObject *)pUVar14;
    }
    if ((pTVar2->Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2->Object[1].field_0x8 = EVar7;
    pUVar14 = (UAudioBus *)pTVar2->Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (pFVar1->AudioBusInfo).AudioDeviceId = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (this->RackUnitConstructParams).AudioBusInfo.AudioBus.field0_0x0.DebugPtr = pUVar14;
    puVar3 = &(this->RackUnits).field_0x10;
    uVar17 = *(uint *)&(this->RackUnits).field_0x28;
    uVar9 = 1;
    uVar19 = 0;
    uVar10 = uVar16;
    if (uVar17 != 0) {
      puVar21 = *(uint **)&(this->RackUnits).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar3;
      }
      uVar10 = *puVar21;
      pUVar14 = pUVar18;
      uVar19 = 0;
      uVar16 = 0;
      while (uVar10 == 0) {
        iVar13 = (int)pUVar18;
        uVar19 = (int)pUVar14 + 0x20;
        pUVar14 = (UAudioBus *)(ulonglong)uVar19;
        uVar16 = iVar13 + 1;
        pUVar18 = (UAudioBus *)(ulonglong)uVar16;
        uVar10 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14d93b1d0;
        uVar10 = puVar21[(longlong)iVar13 + 1];
      }
      uVar9 = -uVar10 & uVar10;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar10 = (uVar19 - 1) + (int)lVar12;
      if ((int)uVar17 < (int)uVar10) {
        uVar10 = uVar17;
      }
    }
LAB_14d93b1d0:
    uVar17 = *(uint *)&(this->RackUnits).field_0x28;
    uVar15 = uVar17 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar9,uVar16);
    TStack_90.CurrentBitIndex = uVar10;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar17 >> 5;
    TStack_90._28_4_ = local_44;
    TStack_90.BaseBitIndex = uVar19;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(this->RackUnits).field_0x8 -
                         *(int *)&(this->RackUnits).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if (((int)uVar17 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar16 = *(uint *)&(this->RackUnits).field_0x28;
    if (uVar17 != uVar16) {
      puVar20 = *(undefined1 **)&(this->RackUnits).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar3;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar13 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14d93b2e0;
        uVar17 = *(uint *)(puVar20 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = (int)lVar12 + -1 + uVar15;
      if ((int)uVar16 < (int)uVar17) {
        uVar17 = uVar16;
      }
    }
LAB_14d93b2e0:
    while( true ) {
      if (*(int *)&(this->RackUnits).field_0x8 - *(int *)&(this->RackUnits).field_0x34 !=
          (int)uStack_70) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_90.CurrentBitIndex == uVar17) &&
         (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
      plVar5 = *(longlong **)
                ((longlong)TStack_90.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->RackUnits);
      (**(code **)(*plVar5 + 8))(plVar5,pFVar1);
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  return;
}

// LoadTabLayout @ 14d93fab0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FLayout,1> * __thiscall
AudioWidgets::FAudioAnalyzerRack::LoadTabLayout
          (FAudioAnalyzerRack *this,TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__)

{
  TSharedRef<FTabManager::FLayout,1> *pTVar1;
  TSharedRef<FTabManager::FLayout,1> local_18;
  
  pTVar1 = GetDefaultTabLayout(this,&local_18);
  FLayoutSaveRestore::LoadFromConfig(__return_storage_ptr__,&GEditorLayoutIni,pTVar1,Never);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MakeRackUnit @ 14d943160

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __thiscall
AudioWidgets::FAudioAnalyzerRack::MakeRackUnit
          (FAudioAnalyzerRack *this,
          TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FAudioAnalyzerRackUnitRegistry *pFVar6;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  FReadAccessScope local_28;
  
  pFVar6 = FAudioAnalyzerRackUnitRegistry::Get();
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  plVar10 = (longlong *)0x0;
  plVar9 = plVar10;
  if (*(int *)&(pFVar6->RegisteredRackUnitTypes).field_0x8 !=
      *(int *)&(pFVar6->RegisteredRackUnitTypes).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar6->RegisteredRackUnitTypes).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar6->RegisteredRackUnitTypes).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar6->RegisteredRackUnitTypes).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        plVar9 = (longlong *)
                 (*(longlong *)&pFVar6->RegisteredRackUnitTypes + (longlong)iVar5 * 0x18);
        if (*(FName *)(*(longlong *)&pFVar6->RegisteredRackUnitTypes + (longlong)iVar5 * 0x18) ==
            param_1) {
          if (plVar9 != (longlong *)0x0) goto LAB_14d943215;
          break;
        }
        iVar5 = (int)plVar9[2];
        plVar9 = plVar10;
      } while (iVar5 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar2)();
    return pTVar7;
  }
LAB_14d943215:
  lVar1 = plVar9[1];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x38),&local_28);
  if (*(int *)(lVar1 + 0x48) != 0) {
    plVar10 = *(longlong **)(lVar1 + 0x40);
  }
  (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,&this->RackUnitConstructParams);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (this->bIsProcessingStarted != false) {
    (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x18))();
  }
  return __return_storage_ptr__;
}

// MakeVisibleAnalyzersMenu @ 14d946050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __cdecl
AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu
          (TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedRef<FUICommandList,1> *param_1,
          TWeakPtr<FWorkspaceItem,1> *param_2,TWeakPtr<FTabManager,1> *param_3)

{
  FSlateIcon *pFVar1;
  atomic<int> *paVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FTabManager *pFVar6;
  code *pcVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  char cVar10;
  atomic<int> aVar11;
  undefined4 uVar12;
  ISlateStyle *pIVar13;
  TSharedRef<SWidget,1> *pTVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FUIAction *pFVar17;
  FText *pFVar18;
  ulonglong uVar19;
  longlong *plVar20;
  TReferenceControllerBase<1> *pTVar21;
  FScriptContainerElement *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  bool bVar24;
  undefined1 local_4a8 [8];
  longlong local_4a0;
  TReferenceControllerBase<1> *local_498;
  uint local_490;
  undefined1 local_488 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_480;
  ForAnyElementType FStack_478;
  ulonglong local_470;
  undefined1 local_468 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_450;
  ForAnyElementType FStack_448;
  ulonglong local_440;
  undefined1 local_438 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_420;
  ForAnyElementType FStack_418;
  ulonglong local_410;
  FName local_408;
  FName local_400;
  FName local_3f8;
  undefined1 local_3f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d8;
  ForAnyElementType FStack_3d0;
  ulonglong local_3c8;
  undefined1 local_3c0 [8];
  FDelegateAllocation local_3b8;
  undefined1 local_3a8 [8];
  FDelegateAllocation local_3a0;
  undefined1 local_390 [4];
  undefined1 local_38c [4];
  undefined8 local_388;
  FWorkspaceItem *local_380;
  FScriptContainerElement *local_378;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_370;
  TSharedPtr<FUICommandList_const_,1> local_358;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDelegateAllocation *local_2d0;
  FDestructionSentinel local_2c8;
  FDelegateAllocation *local_2b0;
  TSharedPtr<FExtender,1> local_2a8;
  FReadAccessScope local_298;
  FReadAccessScope local_280;
  undefined1 local_268 [24];
  undefined1 local_250 [24];
  undefined1 local_238 [24];
  undefined1 local_220 [32];
  FReadAccessScope local_200;
  FReadAccessScope local_1e8;
  FMenuBuilder local_1d0;
  
  local_408.ComparisonIndex.Value = 0;
  local_408.Number = 0;
  pIVar13 = FAppStyle::Get();
  local_358.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_358.Object = param_1->Object;
  local_2a8.Object = (FExtender *)0x0;
  local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMenuBuilder::FMenuBuilder
            (&local_1d0,true,&local_358,&local_2a8,false,pIVar13,true,local_408,true);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  pTVar23 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar4->SharedReferenceCount;
    do {
      pTVar23 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d946943;
      LOCK();
      aVar11 = pTVar4->SharedReferenceCount;
      bVar24 = aVar3 == aVar11;
      if (bVar24) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar11 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar11;
    } while (!bVar24);
    local_380 = param_2->Object;
    pTVar23 = pTVar4;
    if (local_380 != (FWorkspaceItem *)0x0) {
      local_490 = (local_380->ChildItems).ArrayNum;
      uVar19 = (ulonglong)(int)local_490;
      pFVar22 = (local_380->ChildItems).AllocatorInstance.Data;
      local_378 = pFVar22 + uVar19 * 0x10;
      while( true ) {
        pFVar9 = local_378;
        if ((local_380->ChildItems).ArrayNum != (int)uVar19) {
          local_4a8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FWorkspaceItem,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_4a8);
        }
        pTVar23 = pTVar4;
        if (pFVar22 == pFVar9) break;
        (**(code **)**(undefined8 **)pFVar22)(*(undefined8 **)pFVar22,&local_4a0);
        lVar8 = local_4a0;
        if (local_4a0 != 0) {
          this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_4a0 + 0x160);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (this,&local_298);
          if (((*(int *)(lVar8 + 0x170) == 0) || (*(longlong **)(lVar8 + 0x168) == (longlong *)0x0))
             || (cVar10 = (**(code **)(**(longlong **)(lVar8 + 0x168) + 0x38))(), cVar10 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_298);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_298);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (this,&local_200);
            if (*(int *)(lVar8 + 0x170) == 0) {
              plVar20 = (longlong *)0x0;
            }
            else {
              plVar20 = *(longlong **)(lVar8 + 0x168);
            }
            uVar12 = (**(code **)(*plVar20 + 0x60))();
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_200);
            *(undefined4 *)(lVar8 + 0x158) = uVar12;
          }
          if (*(int *)(lVar8 + 0x158) != 2) {
            if ((local_4a0 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar7 = (code *)swi(3);
              pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
              return pTVar14;
            }
            lVar8 = local_4a0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_4a0 + 0x48),
                       &local_280);
            if (((*(int *)(lVar8 + 0x58) == 0) || (*(longlong **)(lVar8 + 0x50) == (longlong *)0x0))
               || (cVar10 = (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x38))(), cVar10 == '\0'))
            {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_280);
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_280);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar8 + 0x48),
                         &local_1e8);
              if (*(int *)(lVar8 + 0x58) == 0) {
                plVar20 = (longlong *)0x0;
              }
              else {
                plVar20 = *(longlong **)(lVar8 + 0x50);
              }
              (**(code **)(*plVar20 + 0x60))(plVar20,&local_388);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1e8);
              *(undefined8 *)(lVar8 + 0x38) = local_388;
            }
            uVar5 = *(undefined8 *)(lVar8 + 0x38);
            local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
            local_488[1] = false;
            local_470 = 0;
            local_480.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_478.Data = (FScriptContainerElement *)0x0;
            FText::FText((FText *)local_3f0);
            pTVar23 = (param_3->WeakReferenceCount).ReferenceController;
            pFVar6 = param_3->Object;
            local_3c8 = 0;
            local_3f0[0x10] = false;
            local_400.ComparisonIndex.Value = 0;
            local_400.Number = 0;
            local_3f8.ComparisonIndex.Value = 0;
            local_3f8.Number = 0;
            local_3d8.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_3d0.Data = (FScriptContainerElement *)0x0;
            if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
              UNLOCK();
            }
            local_3c0 = (undefined1  [8])0x0;
            local_3b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_3b8.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
                       (FWriteAccessScope *)&local_2e8);
            local_2d0 = &local_3b8;
            puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_3b8);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = &
                         ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar16 = FDelegateHandle::GenerateNewID();
              puVar15[2] = uVar16;
              *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_2>_>
                          ::_vftable_;
              puVar15[4] = pTVar23;
              pTVar23 = (TReferenceControllerBase<1> *)0x0;
              puVar15[3] = pFVar6;
              puVar15[5] = uVar5;
            }
            if (local_2e8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
            }
            pFVar6 = param_3->Object;
            local_370._16_8_ = 0;
            local_370._0_8_ = 0;
            pTVar21 = (param_3->WeakReferenceCount).ReferenceController;
            local_370._8_8_ = 0;
            if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
              UNLOCK();
            }
            local_3a8 = (undefined1  [8])0x0;
            local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_3a0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
                       (FWriteAccessScope *)&local_2c8);
            local_2b0 = &local_3a0;
            puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_3a0);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = &
                         ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar16 = FDelegateHandle::GenerateNewID();
              puVar15[2] = uVar16;
              *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_1>_>
                          ::_vftable_;
              puVar15[4] = pTVar21;
              pTVar21 = (TReferenceControllerBase<1> *)0x0;
              puVar15[3] = pFVar6;
              puVar15[5] = uVar5;
            }
            if (local_2c8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
            }
            pFVar17 = FUIAction::FUIAction
                                ((FUIAction *)local_268,
                                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                 local_3a8,&local_370,
                                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                                 local_3c0,RepeatDisabled);
            if ((local_4a0 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar7 = (code *)swi(3);
              pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
              return pTVar14;
            }
            pFVar1 = (FSlateIcon *)(local_4a0 + 0x18);
            if ((local_4a0 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar7 = (code *)swi(3);
              pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
              return pTVar14;
            }
            pFVar18 = TAttribute<FText>::Get((TAttribute<FText> *)(local_4a0 + 0x90));
            local_438._0_8_ = (pFVar18->TextData).Reference;
            if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 8))(local_438._0_8_,local_390);
            }
            local_438._8_4_ = pFVar18->Flags;
            local_410 = 0;
            local_438[0x10] = true;
            local_420.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_418.Data = (FScriptContainerElement *)0x0;
            if ((local_4a0 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar7 = (code *)swi(3);
              pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar7)();
              return pTVar14;
            }
            pFVar18 = TAttribute<FText>::Get((TAttribute<FText> *)(local_4a0 + 0x60));
            local_468._0_8_ = (pFVar18->TextData).Reference;
            if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 8))(local_468._0_8_,local_38c);
            }
            local_468._8_4_ = pFVar18->Flags;
            local_468[0x10] = true;
            local_440 = 0;
            local_450.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_448.Data = (FScriptContainerElement *)0x0;
            FBaseMenuBuilder::AddMenuEntry
                      ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_468,
                       (TAttribute<FText> *)local_438,pFVar1,pFVar17,local_3f8,ToggleButton,
                       local_400,(TAttribute<FText> *)local_3f0,(TAttribute<EVisibility> *)local_488
                      );
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_450,(FWriteAccessScope *)&local_348);
            if (((int)local_440 != 0) && (FStack_448.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_448.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_448,0,0,0x10);
              local_440 = local_440 & 0xffffffff00000000;
            }
            if (local_348.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
            }
            if (FStack_448.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_448.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_450.AccessDetector);
            if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_420,(FWriteAccessScope *)&local_330);
            if (((int)local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_418.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_418,0,0,0x10);
              local_410 = local_410 & 0xffffffff00000000;
            }
            if (local_330.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
            }
            if (FStack_418.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_418.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_420.AccessDetector);
            if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
            if ((void *)local_220._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_220._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_220);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
            if ((void *)local_238._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_238._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_238);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
            if ((void *)local_250._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_250._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_250);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
            if ((void *)local_268._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_268._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_268);
            if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar21->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar21->_padding_ + 8))(pTVar21,1);
              }
            }
            if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar23->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
              }
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_3d8,(FWriteAccessScope *)&local_318);
            if (((int)local_3c8 != 0) && (FStack_3d0.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_3d0.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_3d0,0,0,0x10);
              local_3c8 = local_3c8 & 0xffffffff00000000;
            }
            if (local_318.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
            }
            if (FStack_3d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_3d0.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d8.AccessDetector);
            if ((ITextData *)local_3f0._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_3f0._0_8_ + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_480,(FWriteAccessScope *)&local_300);
            if (((int)local_470 != 0) && (FStack_478.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_478.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_478,0,0,0x10);
              local_470 = local_470 & 0xffffffff00000000;
            }
            if (local_300.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
            }
            if (FStack_478.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_478.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_480.AccessDetector);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_498);
        pFVar22 = pFVar22 + 0x10;
        uVar19 = (ulonglong)local_490;
      }
    }
  }
LAB_14d946943:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  FMenuBuilder::MakeWidget
            (&local_1d0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (param_3->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// SaveTabLayout @ 14d964c40

void __cdecl
AudioWidgets::FAudioAnalyzerRack::SaveTabLayout(TSharedRef<FTabManager::FLayout,1> *param_1)

{
  FLayoutSaveRestore::SaveToConfig(&GEditorLayoutIni,param_1);
  return;
}

// StartProcessing @ 14d9715f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioAnalyzerRack::StartProcessing(FAudioAnalyzerRack *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->RackUnits).field_0x28;
  puVar1 = &(this->RackUnits).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RackUnits).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d97168d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d97168d:
  uVar10 = *(uint *)&(this->RackUnits).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RackUnits).field_0x8 - *(int *)&(this->RackUnits).field_0x34)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RackUnits).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RackUnits).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d971790;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14d971790:
  while( true ) {
    if (*(int *)&(this->RackUnits).field_0x8 - *(int *)&(this->RackUnits).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->RackUnits)
                + 0x18))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->bIsProcessingStarted = true;
  return;
}

// StopProcessing @ 14d972060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioAnalyzerRack::StopProcessing(FAudioAnalyzerRack *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->RackUnits).field_0x28;
  puVar1 = &(this->RackUnits).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RackUnits).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d9720fd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d9720fd:
  uVar10 = *(uint *)&(this->RackUnits).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RackUnits).field_0x8 - *(int *)&(this->RackUnits).field_0x34)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RackUnits).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RackUnits).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d972200;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14d972200:
  while( true ) {
    if (*(int *)&(this->RackUnits).field_0x8 - *(int *)&(this->RackUnits).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->RackUnits)
                + 0x20))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->bIsProcessingStarted = false;
  return;
}


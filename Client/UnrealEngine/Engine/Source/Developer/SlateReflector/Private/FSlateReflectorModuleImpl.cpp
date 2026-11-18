// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 18

// GetWidgetReflectorInstance @ 142de0cd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidgetReflector,1> * __thiscall
FSlateReflectorModuleImpl::GetWidgetReflectorInstance
          (FSlateReflectorModuleImpl *this,TSharedPtr<SWidgetReflector,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWidgetReflector *)0x0;
  pTVar1 = (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->WidgetReflectorPtr).Object;
  }
  return __return_storage_ptr__;
}

// GetInputEventVisualizer @ 142de0d20

/* WARNING: Enum "Type": Some values do not have unique names */

FInputEventVisualizer * __thiscall
FSlateReflectorModuleImpl::GetInputEventVisualizer(FSlateReflectorModuleImpl *this)

{
  return (this->VisualizeInputEventsPtr).Ptr;
}

// DisplayWidgetReflector @ 142de0d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateReflectorModuleImpl::DisplayWidgetReflector(FSlateReflectorModuleImpl *this)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->bHasRegisteredTabSpawners == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasRegisteredTabSpawners",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = FGlobalTabmanager::Get();
  pFVar1 = pTVar4->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 8);
  pFVar5 = ::FName::FName(&local_res8,"WidgetReflector");
  local_28 = *pFVar5;
  local_20 = 0xffffffff;
  local_1c = 1;
  (*pcVar2)(pFVar1,local_18,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// DisplayTextureAtlasVisualizer @ 142de0dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateReflectorModuleImpl::DisplayTextureAtlasVisualizer(FSlateReflectorModuleImpl *this)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->bHasRegisteredTabSpawners == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasRegisteredTabSpawners",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
                       ,0x73,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = FGlobalTabmanager::Get();
  pFVar1 = pTVar4->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 8);
  pFVar5 = ::FName::FName(&local_res8,"TextureAtlasVisualizer");
  local_28 = *pFVar5;
  local_20 = 0xffffffff;
  local_1c = 1;
  (*pcVar2)(pFVar1,local_18,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// DisplayFontAtlasVisualizer @ 142de0e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateReflectorModuleImpl::DisplayFontAtlasVisualizer(FSlateReflectorModuleImpl *this)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->bHasRegisteredTabSpawners == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasRegisteredTabSpawners",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
                       ,0x79,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = FGlobalTabmanager::Get();
  pFVar1 = pTVar4->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 8);
  pFVar5 = ::FName::FName(&local_res8,"FontAtlasVisualizer");
  local_28 = *pFVar5;
  local_20 = 0xffffffff;
  local_1c = 1;
  (*pcVar2)(pFVar1,local_18,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// RegisterTabSpawner @ 142de0f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateReflectorModuleImpl::RegisterTabSpawner
          (FSlateReflectorModuleImpl *this,TSharedPtr<FWorkspaceItem,1> *param_1)

{
  FGlobalTabmanager *pFVar1;
  FName FVar2;
  FWorkspaceItem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMRSWRecursiveAccessDetector FVar5;
  FWorkspaceItem *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TSharedRef<FGlobalTabmanager,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FName *pFVar13;
  FTabSpawnerEntry *pFVar14;
  FText *pFVar15;
  FSlateIcon *pFVar16;
  TSharedRef<FWorkspaceItem,1> *pTVar17;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  ulonglong local_f0;
  FWorkspaceItem *local_e8;
  TReferenceControllerBase<1> *local_e0;
  bool local_d8;
  FDelegateAllocation *local_d0;
  undefined1 local_c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  FDelegateAllocation *local_90;
  FText local_88;
  FText local_78;
  FSlateIcon local_68;
  
  if (this->bHasRegisteredTabSpawners != false) {
    (**(code **)(this->_padding_ + 0x60))();
  }
  this->bHasRegisteredTabSpawners = true;
  pTVar10 = FGlobalTabmanager::Get();
  pFVar1 = pTVar10->Object;
  local_f0 = 0;
  local_100 = (undefined1  [8])0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_a8);
  local_90 = &local_110;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = MakeWidgetReflectorTab;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSlateReflectorModuleImpl____A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
  }
  if (FStack_98.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0.AccessDetector.State,
               (FDestructionSentinel *)local_a8);
  }
  pFVar13 = ::FName::FName(&local_res18,"WidgetReflector");
  pFVar14 = FGlobalTabmanager::RegisterNomadTabSpawner
                      (pFVar1,*pFVar13,
                       (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_118,
                       (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
                       local_100);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"FSlateReflectorModuleImpl",L"WidgetReflectorTitle",
                       L"Widget Reflector");
  pFVar14 = FTabSpawnerEntry::SetDisplayName(pFVar14,pFVar15);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_88,L"FSlateReflectorModuleImpl",L"WidgetReflectorTooltipText",
                       L"Open the Widget Reflector tab.");
  pFVar14 = FTabSpawnerEntry::SetTooltipText(pFVar14,pFVar15);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar13 = ::FName::FName(&local_res20,"WidgetReflector.TabIcon");
  FVar2 = *pFVar13;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar16 = FSlateIcon::FSlateIcon(&local_68,StyleSetName,FVar2,local_res10,local_res8);
  uVar7 = (pFVar16->StyleSetName).Number;
  uVar8 = (pFVar16->StyleName).ComparisonIndex.Value;
  uVar9 = (pFVar16->StyleName).Number;
  *(uint *)&pFVar14->_padding_ = (pFVar16->StyleSetName).ComparisonIndex.Value;
  *(uint *)((longlong)&pFVar14->_padding_ + 4) = uVar7;
  *(uint *)&pFVar14->_padding_ = uVar8;
  *(uint *)((longlong)&pFVar14->_padding_ + 4) = uVar9;
  uVar7 = (pFVar16->SmallStyleName).Number;
  uVar8 = (pFVar16->StatusOverlayStyleName).ComparisonIndex.Value;
  uVar9 = (pFVar16->StatusOverlayStyleName).Number;
  *(uint *)&pFVar14->_padding_ = (pFVar16->SmallStyleName).ComparisonIndex.Value;
  *(uint *)((longlong)&pFVar14->_padding_ + 4) = uVar7;
  *(uint *)&pFVar14->_padding_ = uVar8;
  *(uint *)((longlong)&pFVar14->_padding_ + 4) = uVar9;
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_e8);
  if (((int)local_f0 != 0) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  pFVar3 = param_1->Object;
  if (pFVar3 != (FWorkspaceItem *)0x0) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar17 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                        ((TSharedFromThis<FWorkspaceItem,1> *)&pFVar14->_padding_,
                         (TSharedRef<FWorkspaceItem,1> *)&local_e8);
    FVar5.State = (atomic<unsigned___int64>)(pTVar17->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar17->Object;
    if (FVar5.State == (atomic<unsigned___int64>)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    }
    else {
      LOCK();
      *(atomic<int> *)((longlong)FVar5.State + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5.State + 8) + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      LOCK();
      *(atomic<int> *)((longlong)FVar5.State + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5.State + 8) + 1);
      UNLOCK();
    }
    local_c8 = (undefined1  [8])pFVar6;
    local_c0.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)FVar5.State;
    FWorkspaceItem::AddItem(pFVar3,(TSharedRef<FWorkspaceItem,1> *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c0.AccessDetector.State);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar5.State);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  pTVar10 = FGlobalTabmanager::Get();
  pFVar1 = pTVar10->Object;
  local_f0 = 0;
  local_100 = (undefined1  [8])0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_a8);
  local_90 = &local_110;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSlateReflectorModuleImpl____A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = MakeTextureAtlasVisualizerTab;
    puVar11[3] = this;
  }
  if (FStack_98.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0.AccessDetector.State,
               (FDestructionSentinel *)local_a8);
  }
  pFVar13 = ::FName::FName(&local_res8,"TextureAtlasVisualizer");
  pFVar14 = FGlobalTabmanager::RegisterNomadTabSpawner
                      (pFVar1,*pFVar13,
                       (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_118,
                       (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
                       local_100);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_88,L"FSlateReflectorModuleImpl",L"TextureAtlasVisualizerTitle",
                       L"Texture Atlas Visualizer");
  pFVar14 = FTabSpawnerEntry::SetDisplayName(pFVar14,pFVar15);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"FSlateReflectorModuleImpl",L"TextureAtlasVisualizerTooltipText",
                       L"Open the Texture Atlas Visualizer tab.");
  pFVar14 = FTabSpawnerEntry::SetTooltipText(pFVar14,pFVar15);
  local_c8._0_5_ = 0x100000002;
  local_b0 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  pFVar14 = FTabSpawnerEntry::SetMenuType(pFVar14,(TAttribute<ETabSpawnerMenuType::Type> *)local_c8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_e8);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_e8);
  if (((int)local_f0 != 0) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  pFVar3 = param_1->Object;
  if (pFVar3 != (FWorkspaceItem *)0x0) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = pFVar3;
    local_e0 = pTVar4;
    FTabSpawnerEntry::SetGroup(pFVar14,(TSharedRef<FWorkspaceItem,1> *)&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  pTVar10 = FGlobalTabmanager::Get();
  pFVar1 = pTVar10->Object;
  local_f0 = 0;
  local_100 = (undefined1  [8])0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &local_110;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = MakeFontAtlasVisualizerTab;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSlateReflectorModuleImpl____A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  pFVar13 = ::FName::FName(&local_res8,"FontAtlasVisualizer");
  pFVar14 = FGlobalTabmanager::RegisterNomadTabSpawner
                      (pFVar1,*pFVar13,
                       (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_118,
                       (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
                       local_100);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_88,L"FSlateReflectorModuleImpl",L"FontAtlasVisualizerTitle",
                       L"Font Atlas Visualizer");
  pFVar14 = FTabSpawnerEntry::SetDisplayName(pFVar14,pFVar15);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"FSlateReflectorModuleImpl",L"FontAtlasVisualizerTooltipText",
                       L"Open the Font Atlas Visualizer tab.");
  pFVar14 = FTabSpawnerEntry::SetTooltipText(pFVar14,pFVar15);
  local_a8._0_4_ = 2;
  local_a8[4] = true;
  local_90 = (FDelegateAllocation *)0x0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  pFVar14 = FTabSpawnerEntry::SetMenuType(pFVar14,(TAttribute<ETabSpawnerMenuType::Type> *)local_a8)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_e8);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = (FDelegateAllocation *)((ulonglong)local_90 & 0xffffffff00000000);
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_e8);
  if (((int)local_f0 != 0) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e0,(FDestructionSentinel *)&local_e8);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  pFVar3 = param_1->Object;
  if (pFVar3 != (FWorkspaceItem *)0x0) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar17 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                        ((TSharedFromThis<FWorkspaceItem,1> *)&pFVar14->_padding_,
                         (TSharedRef<FWorkspaceItem,1> *)&local_e8);
    FVar5.State = (atomic<unsigned___int64>)(pTVar17->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar17->Object;
    if (FVar5.State == (atomic<unsigned___int64>)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    }
    else {
      LOCK();
      *(atomic<int> *)((longlong)FVar5.State + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5.State + 8) + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      LOCK();
      *(atomic<int> *)((longlong)FVar5.State + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5.State + 8) + 1);
      UNLOCK();
    }
    local_c8 = (undefined1  [8])pFVar6;
    local_c0.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)FVar5.State;
    FWorkspaceItem::AddItem(pFVar3,(TSharedRef<FWorkspaceItem,1> *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c0.AccessDetector.State);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar5.State);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// UnregisterTabSpawner @ 142de18e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateReflectorModuleImpl::UnregisterTabSpawner(FSlateReflectorModuleImpl *this)

{
  FGlobalTabmanager *pFVar1;
  TSharedRef<FGlobalTabmanager,1> *pTVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  this->bHasRegisteredTabSpawners = false;
  pTVar2 = FGlobalTabmanager::Get();
  pFVar1 = pTVar2->Object;
  pFVar3 = ::FName::FName(local_res8,"WidgetReflector");
  FGlobalTabmanager::UnregisterNomadTabSpawner(pFVar1,*pFVar3);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar1 = pTVar2->Object;
  pFVar3 = ::FName::FName(local_res8,"TextureAtlasVisualizer");
  FGlobalTabmanager::UnregisterNomadTabSpawner(pFVar1,*pFVar3);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar1 = pTVar2->Object;
  pFVar3 = ::FName::FName(local_res8,"FontAtlasVisualizer");
  FGlobalTabmanager::UnregisterNomadTabSpawner(pFVar1,*pFVar3);
  return;
}

// GetNavigationEventSimulator @ 142de1970

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateNavigationEventSimulator * __thiscall
FSlateReflectorModuleImpl::GetNavigationEventSimulator(FSlateReflectorModuleImpl *this)

{
  return (this->NavigationEventSimulator).Ptr;
}

// CreateNavigationEventSimulationView @ 142de1980

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<INavigationEventSimulationView,1> * __thiscall
FSlateReflectorModuleImpl::CreateNavigationEventSimulationView
          (FSlateReflectorModuleImpl *this,
          TSharedRef<INavigationEventSimulationView,1> *__return_storage_ptr__,
          FNavigationEventSimulationViewArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SNavigationSimulationLiveList,1> *pTVar3;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
  local_258;
  TSharedRef<SNavigationSimulationLiveList,1> local_248;
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
  local_238;
  FArguments local_220;
  
  pFVar2 = SNavigationSimulationListBase::FArguments::FArguments(&local_220);
  local_258.Arg1 = &param_1->OnNavigateToWidget;
  local_258.Arg0 = &param_1->OnWidgetSelected;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
  ::
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
            (&local_238,"SNavigationSimulationLiveList",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
             ,0xbb,&local_258);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar3 = TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
           ::operator<<=(&local_238,&local_248,pFVar2);
  __return_storage_ptr__->Object = (INavigationEventSimulationView *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  return __return_storage_ptr__;
}

// StartupModule @ 142de1aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateReflectorModuleImpl::StartupModule(FSlateReflectorModuleImpl *this)

{
  TUniquePtr<FSlateNavigationEventSimulator,TDefaultDelete<FSlateNavigationEventSimulator>_> *pTVar1
  ;
  TUniquePtr<FInputEventVisualizer,TDefaultDelete<FInputEventVisualizer>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FSlateStyleSet,1> *pTVar5;
  FInputEventVisualizer *pFVar6;
  FInputEventVisualizer *pFVar7;
  FInputEventVisualizer *pFVar8;
  longlong lVar9;
  FWidgetSnapshotService *pFVar10;
  undefined8 local_58;
  longlong local_50;
  TArray<FInputEventVisualizer::FMouseEventInfo,TSizedDefaultAllocator<32>_> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<FSlateStyleSet,1> local_18;
  
  pFVar8 = (FInputEventVisualizer *)0x0;
  if (FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) {
    pTVar5 = FWidgetReflectorStyle::Create(&local_18);
    local_30.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    FWidgetReflectorStyle::StyleInstance.Object = pTVar5->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FWidgetReflectorStyle::StyleInstance.SharedReferenceCount,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FSlateStyleRegistry::RegisterSlateStyle
              ((ISlateStyle *)FWidgetReflectorStyle::StyleInstance.Object);
  }
  pFVar6 = ::operator_new(0x70);
  if (pFVar6 == (FInputEventVisualizer *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pFVar10 = (FWidgetSnapshotService *)&DAT_00000010;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar6 = pFVar8;
  }
  else {
    *(undefined4 *)&pFVar6->bShowMouseEvent = 1;
    pFVar6->ClickFadeTime = 1.4013e-45;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWidgetSnapshotService___00_SharedPointerInternals__6B_
    ;
    FWidgetSnapshotService::FWidgetSnapshotService((FWidgetSnapshotService *)&pFVar6->MouseEvents);
    pFVar10 = (FWidgetSnapshotService *)&pFVar6->MouseEvents;
    if ((pFVar10 == (FWidgetSnapshotService *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    *(int *)&pFVar6->bShowMouseEvent = *(int *)&pFVar6->bShowMouseEvent + 1;
    UNLOCK();
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    local_48 = (TArray<FInputEventVisualizer::FMouseEventInfo,TSizedDefaultAllocator<32>_> *)pFVar10
    ;
  }
  if (&this->WidgetSnapshotService != (TSharedPtr<FWidgetSnapshotService,1> *)&local_48) {
    (this->WidgetSnapshotService).Object = pFVar10;
    local_48 = (TArray<FInputEventVisualizer::FMouseEventInfo,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetSnapshotService).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  pFVar7 = ::operator_new(0x18);
  pFVar6 = pFVar8;
  if (pFVar7 != (FInputEventVisualizer *)0x0) {
    (pFVar7->MouseEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7->_padding_ = 0;
    pFVar7->bShowMouseEvent = false;
    *(undefined3 *)&pFVar7->field_0x9 = 0;
    pFVar7->ClickFadeTime = 0.0;
    pFVar6 = pFVar7;
  }
  pTVar1 = &this->NavigationEventSimulator;
  if (pTVar1 == (TUniquePtr<FSlateNavigationEventSimulator,TDefaultDelete<FSlateNavigationEventSimulator>_>
                 *)&local_58) {
    if (pFVar6 != (FInputEventVisualizer *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar6);
      if (*(void **)&pFVar6->bShowMouseEvent != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar6->bShowMouseEvent);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)pFVar6);
      goto LAB_142de1cb3;
    }
  }
  else {
    pFVar7 = (FInputEventVisualizer *)pTVar1->Ptr;
    pTVar1->Ptr = (FSlateNavigationEventSimulator *)pFVar6;
    if (pFVar7 != (FInputEventVisualizer *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar7);
      if (*(void **)&pFVar7->bShowMouseEvent != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar7->bShowMouseEvent);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)pFVar7);
      pFVar6 = pFVar7;
LAB_142de1cb3:
      ::operator_delete(pFVar6,0x18);
    }
  }
  pFVar6 = ::operator_new(200);
  if (pFVar6 != (FInputEventVisualizer *)0x0) {
    pFVar8 = FInputEventVisualizer::FInputEventVisualizer(pFVar6);
  }
  pTVar2 = &this->VisualizeInputEventsPtr;
  if (pTVar2 == (TUniquePtr<FInputEventVisualizer,TDefaultDelete<FInputEventVisualizer>_> *)
                &local_50) {
    if (pFVar8 == (FInputEventVisualizer *)0x0) goto LAB_142de1d18;
    lVar9 = pFVar8->_padding_;
  }
  else {
    pFVar6 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar8;
    if (pFVar6 == (FInputEventVisualizer *)0x0) goto LAB_142de1d18;
    lVar9 = pFVar6->_padding_;
    pFVar8 = pFVar6;
  }
  (**(code **)(lVar9 + 0x30))(pFVar8,1);
LAB_142de1d18:
  this->bHasRegisteredTabSpawners = false;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x58))(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// ShutdownModule @ 142de1d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateReflectorModuleImpl::ShutdownModule(FSlateReflectorModuleImpl *this)

{
  FInputEventVisualizer *pFVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  (**(code **)(this->_padding_ + 0x60))();
  pFVar1 = (this->VisualizeInputEventsPtr).Ptr;
  if (pFVar1 != (FInputEventVisualizer *)0x0) {
    (this->VisualizeInputEventsPtr).Ptr = (FInputEventVisualizer *)0x0;
    (**(code **)(pFVar1->_padding_ + 0x30))();
  }
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->NavigationEventSimulator).Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    (this->NavigationEventSimulator).Ptr = (FSlateNavigationEventSimulator *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)(&this_00->field_0x0 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(&this_00->field_0x0 + 8));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WidgetSnapshotService != (TSharedPtr<FWidgetSnapshotService,1> *)&local_28) {
    (this->WidgetSnapshotService).Object = (FWidgetSnapshotService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetSnapshotService).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  if (FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSlateStyleRegistry::UnRegisterSlateStyle
            ((ISlateStyle *)FWidgetReflectorStyle::StyleInstance.Object);
  if ((FWidgetReflectorStyle::StyleInstance.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) ||
     ((FWidgetReflectorStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount != (atomic<int>)0x1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7548361896953380892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Styling\\WidgetReflectorStyle.cpp"
                       ,0x1c,"StyleInstance.IsUnique()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FWidgetReflectorStyle::StyleInstance.Object = (FSlateStyleSet *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FWidgetReflectorStyle::StyleInstance.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// GetAtlasVisualizer @ 142e979e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FSlateReflectorModuleImpl::GetAtlasVisualizer
          (FSlateReflectorModuleImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          ISlateAtlasProvider *param_1)

{
  byte *pbVar1;
  SAtlasVisualizer *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SWidget,1> *pTVar10;
  SWidget *pSVar11;
  T0RequiredArgs local_res10 [8];
  TSlateDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs> local_238;
  FArguments local_220;
  
  pFVar8 = SAtlasVisualizer::FArguments::FArguments(&local_220);
  pFVar8->_AtlasProvider = param_1;
  pTVar9 = MakeTDecl<SAtlasVisualizer,RequiredArgs::T0RequiredArgs>
                     (&local_238,"SAtlasVisualizer",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
                      ,0x3f,local_res10);
  if ((pTVar9->_Widget).Object == (SAtlasVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((pTVar9->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)pFVar8);
  SAtlasVisualizer::Construct((pTVar9->_Widget).Object,pFVar8);
  if ((pTVar9->_Widget).Object == (SAtlasVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pSVar2 = (pTVar9->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e97acc;
  }
  bVar7 = 0x20;
LAB_142e97acc:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((pTVar9->_Widget).Object == (SAtlasVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((pTVar9->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((pTVar9->_Widget).Object == (SAtlasVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pSVar2 = (pTVar9->_Widget).Object;
  pTVar3 = (pTVar9->_Widget).SharedReferenceCount.ReferenceController;
  (pTVar9->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar9->_Widget).Object = (SAtlasVisualizer *)0x0;
  if (pSVar2 == (SAtlasVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pSVar11 = (SWidget *)&pSVar2->_padding_;
  if (pSVar2 == (SAtlasVisualizer *)0x0) {
    pSVar11 = (SWidget *)0x0;
  }
  __return_storage_ptr__->Object = pSVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  return __return_storage_ptr__;
}

// GetFontAtlasVisualizer @ 142e9d510

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FSlateReflectorModuleImpl::GetFontAtlasVisualizer
          (FSlateReflectorModuleImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateApplication *pFVar3;
  ISlateAtlasProvider *pIVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSharedRef<SBox,1> *pTVar9;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_958 [2];
  FName local_950;
  TReferenceControllerBase<1> *pTStack_948;
  bool local_940;
  FName local_938;
  FText local_930;
  bool local_920;
  undefined1 local_918 [8];
  ForAnyElementType FStack_910;
  ulonglong local_908;
  TSharedRef<SBox,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8d0;
  FArguments local_8b8;
  FArguments local_578;
  
  pFVar3 = FSlateApplication::Get();
  pIVar4 = (ISlateAtlasProvider *)(**(code **)(**(longlong **)&pFVar3->field_0x60 + 0x140))();
  if (pIVar4 == (ISlateAtlasProvider *)0x0) {
    pFVar5 = SBox::FArguments::FArguments(&local_8b8);
    pFVar5->_HAlign = HAlign_Center;
    pFVar5->_VAlign = VAlign_Center;
    pFVar6 = STextBlock::FArguments::FArguments(&local_578);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_8e0,L"FSlateReflectorModuleImpl",L"NoFontAtlasProvider",
                        L"There is no font atlas provider available for the current renderer.");
    FText::FText(&local_930,pFVar7);
    local_920 = true;
    local_908 = 0;
    local_918 = (undefined1  [8])0x0;
    FStack_910.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,&local_930);
    (pFVar6->_Text).bIsSet = local_920;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_950);
    if (((int)local_908 != 0) && (FStack_910.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_910,0,0,0x10);
      local_908 = local_908 & 0xffffffff00000000;
    }
    if (local_940 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_948,(FDestructionSentinel *)&local_950);
    }
    if (FStack_910.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
    if (local_930.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_930.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_958,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_938 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_950,&local_938,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
               ,0x65,local_res18);
    FMemScope::~FMemScope((FMemScope *)&local_950);
    FLLMScope::~FLLMScope(local_958);
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8d0,&local_8f0,pFVar6);
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_950 = (FName)pTVar8->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_950;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_948 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FLLMScope::FLLMScope(local_958,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_950 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_938,&local_950,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_950,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
               ,0x61,local_res20);
    FMemScope::~FMemScope((FMemScope *)&local_938);
    FLLMScope::~FLLMScope(local_958);
    pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_950,&local_900,
                        pFVar5);
    __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_900.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_948)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d0._Widget.SharedReferenceCount.ReferenceController);
    if (local_8e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_578);
    SBox::FArguments::~FArguments(&local_8b8);
    return __return_storage_ptr__;
  }
  GetAtlasVisualizer(this,__return_storage_ptr__,pIVar4);
  return __return_storage_ptr__;
}

// GetTextureAtlasVisualizer @ 142ea84c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FSlateReflectorModuleImpl::GetTextureAtlasVisualizer
          (FSlateReflectorModuleImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateApplication *pFVar3;
  ISlateAtlasProvider *pIVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSharedRef<SBox,1> *pTVar9;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_958 [2];
  FName local_950;
  TReferenceControllerBase<1> *pTStack_948;
  bool local_940;
  FName local_938;
  FText local_930;
  bool local_920;
  undefined1 local_918 [8];
  ForAnyElementType FStack_910;
  ulonglong local_908;
  TSharedRef<SBox,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8d0;
  FArguments local_8b8;
  FArguments local_578;
  
  pFVar3 = FSlateApplication::Get();
  pIVar4 = (ISlateAtlasProvider *)(**(code **)(**(longlong **)&pFVar3->field_0x60 + 0x138))();
  if (pIVar4 == (ISlateAtlasProvider *)0x0) {
    pFVar5 = SBox::FArguments::FArguments(&local_8b8);
    pFVar5->_HAlign = HAlign_Center;
    pFVar5->_VAlign = VAlign_Center;
    pFVar6 = STextBlock::FArguments::FArguments(&local_578);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_8e0,L"FSlateReflectorModuleImpl",L"NoTextureAtlasProvider",
                        L"There is no texture atlas provider available for the current renderer.");
    FText::FText(&local_930,pFVar7);
    local_920 = true;
    local_908 = 0;
    local_918 = (undefined1  [8])0x0;
    FStack_910.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,&local_930);
    (pFVar6->_Text).bIsSet = local_920;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_950);
    if (((int)local_908 != 0) && (FStack_910.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_910,0,0,0x10);
      local_908 = local_908 & 0xffffffff00000000;
    }
    if (local_940 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_948,(FDestructionSentinel *)&local_950);
    }
    if (FStack_910.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
    if (local_930.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_930.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_958,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_938 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_950,&local_938,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
               ,0x51,local_res18);
    FMemScope::~FMemScope((FMemScope *)&local_950);
    FLLMScope::~FLLMScope(local_958);
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8d0,&local_8f0,pFVar6);
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_950 = (FName)pTVar8->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_950;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_948 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FLLMScope::FLLMScope(local_958,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_950 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_938,&local_950,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_950,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
               ,0x4d,local_res20);
    FMemScope::~FMemScope((FMemScope *)&local_938);
    FLLMScope::~FLLMScope(local_958);
    pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_950,&local_900,
                        pFVar5);
    __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_900.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_948)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d0._Widget.SharedReferenceCount.ReferenceController);
    if (local_8e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_578);
    SBox::FArguments::~FArguments(&local_8b8);
    return __return_storage_ptr__;
  }
  GetAtlasVisualizer(this,__return_storage_ptr__,pIVar4);
  return __return_storage_ptr__;
}

// GetWidgetReflector @ 142eab380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FSlateReflectorModuleImpl::GetWidgetReflector
          (FSlateReflectorModuleImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockTab *pSVar4;
  FWidgetSnapshotService *pFVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  char cVar8;
  byte bVar9;
  atomic<int> aVar10;
  FArguments *pFVar11;
  TSharedRef<SWidgetReflector,1> *pTVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FSlateApplication *this_00;
  FSharedReferencer<1> FVar14;
  TReferenceControllerBase<1> *pTVar15;
  FSharedReferencer<1> FVar16;
  SWidgetReflector *this_01;
  bool bVar17;
  undefined1 local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res20 [2];
  FSharedReferencer<1> local_2c8;
  undefined1 *local_2c0;
  TSharedRef<IWidgetReflector,1> local_2b8;
  FName local_2a8;
  FMemScope local_2a0;
  undefined8 local_298;
  FSharedReferencer<1> local_290;
  SDockTab *local_288;
  TReferenceControllerBase<1> *pTStack_280;
  FWidgetSnapshotService *local_278;
  TReferenceControllerBase<1> *pTStack_270;
  TSharedRef<SWidgetReflector,1> local_268;
  FArguments local_258;
  
  FVar16.ReferenceController = (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController;
  pTVar15 = FVar16.ReferenceController;
  local_res10 = __return_storage_ptr__;
  if (FVar16.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_142eab3d6:
    pFVar11 = SWidgetReflector::FArguments::FArguments(&local_258);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_288 = (pFVar11->_ParentTab).Object;
    pTStack_280 = (pFVar11->_ParentTab).SharedReferenceCount.ReferenceController;
    (pFVar11->_ParentTab).Object = pSVar4;
    (pFVar11->_ParentTab).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_280)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (this->WidgetSnapshotService).SharedReferenceCount.ReferenceController;
    pFVar5 = (this->WidgetSnapshotService).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_278 = (pFVar11->_WidgetSnapshotService).Object;
    pTStack_270 = (pFVar11->_WidgetSnapshotService).SharedReferenceCount.ReferenceController;
    (pFVar11->_WidgetSnapshotService).Object = pFVar5;
    (pFVar11->_WidgetSnapshotService).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_2a8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2a0,&local_2a8,true);
    local_2c0 = local_res8;
    local_2c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = SWidgetReflector::New(&local_268);
    local_290.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
    this_01 = pTVar12->Object;
    if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_290.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_290.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_298 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2c8,&local_290);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_290.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    SWidget::SetDebugInfo
              ((SWidget *)this_01,"SWidgetReflector",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
               ,0x33,0x2b0);
    FMemScope::~FMemScope(&local_2a0);
    FLLMScope::~FLLMScope(local_res20);
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    SWidget::SWidgetConstruct((SWidget *)this_01,(FSlateBaseNamedArgs *)pFVar11);
    (**(code **)(*(longlong *)&this_01->field_0x0 + 0x248))(this_01,pFVar11);
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    if (this_01->bForceVolatile == '\0') {
      cVar8 = (**(code **)(*(longlong *)&this_01->field_0x0 + 0x228))(this_01);
      bVar9 = 0;
      if (cVar8 != '\0') goto LAB_142eab601;
    }
    else {
LAB_142eab601:
      bVar9 = 0x20;
    }
    this_01->bCachedVolatile = '\0';
    this_01->field_0x30 = this_01->field_0x30 | bVar9;
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    this_01->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    FVar7.ReferenceController = local_2c8.ReferenceController;
    local_2c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar14.ReferenceController = FVar7.ReferenceController;
    FVar16.ReferenceController = pTVar15;
    if (FVar7.ReferenceController != pTVar15) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar15->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar15->_padding_)(pTVar15);
          LOCK();
          paVar1 = &pTVar15->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
          }
        }
      }
      FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FVar16.ReferenceController = FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258._WidgetSnapshotService.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258._ParentTab.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
    (this->WidgetReflectorPtr).Object = this_01;
    if (FVar16.ReferenceController !=
        (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController) {
      if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar16.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar16.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar15 = (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar15->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
        }
      }
      (this->WidgetReflectorPtr).WeakReferenceCount.ReferenceController = FVar16.ReferenceController
      ;
    }
    this_00 = FSlateApplication::Get();
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_01 == (SWidgetReflector *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
        return pTVar13;
      }
      local_2b8.Object = (IWidgetReflector *)0x0;
    }
    else {
      local_2b8.Object = (IWidgetReflector *)(&this_01->field_0x218 + 0x90);
    }
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2b8.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
    FSlateApplication::SetWidgetReflector(this_00,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    if ((this_01 == (SWidgetReflector *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
    if (FVar16.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_142eab871;
  }
  else {
    aVar2 = (FVar16.ReferenceController)->SharedReferenceCount;
    do {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142eab3d6;
      LOCK();
      aVar10 = (FVar16.ReferenceController)->SharedReferenceCount;
      bVar17 = aVar2 == aVar10;
      if (bVar17) {
        (FVar16.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar17);
    this_01 = (this->WidgetReflectorPtr).Object;
    pTVar15 = FVar16.ReferenceController;
    if (this_01 == (SWidgetReflector *)0x0) goto LAB_142eab3d6;
  }
  LOCK();
  (FVar16.ReferenceController)->SharedReferenceCount =
       (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
  UNLOCK();
LAB_142eab871:
  if ((this_01 == (SWidgetReflector *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar13 = local_res10;
  local_res10->Object = (SWidget *)this_01;
  (local_res10->SharedReferenceCount).ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  return pTVar13;
}

// MakeFontAtlasVisualizerTab @ 142ec12c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
FSlateReflectorModuleImpl::MakeFontAtlasVisualizerTab
          (FSlateReflectorModuleImpl *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res20 [2];
  FName local_468;
  FMemScope local_460;
  TSharedRef<SWidget,1> local_458;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_448;
  FArguments local_430;
  
  pFVar4 = SDockTab::FArguments::FArguments(&local_430);
  pFVar4->_TabRole = NomadTab;
  pTVar5 = GetFontAtlasVisualizer(this,&local_458);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_460,&local_468,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_448,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
             ,0xec,local_res10);
  FMemScope::~FMemScope(&local_460);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_448,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_430);
  return __return_storage_ptr__;
}

// MakeTextureAtlasVisualizerTab @ 142ec2640

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
FSlateReflectorModuleImpl::MakeTextureAtlasVisualizerTab
          (FSlateReflectorModuleImpl *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res20 [2];
  FName local_468;
  FMemScope local_460;
  TSharedRef<SWidget,1> local_458;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_448;
  FArguments local_430;
  
  pFVar4 = SDockTab::FArguments::FArguments(&local_430);
  pFVar4->_TabRole = NomadTab;
  pTVar5 = GetTextureAtlasVisualizer(this,&local_458);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_460,&local_468,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_448,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
             ,0xe3,local_res10);
  FMemScope::~FMemScope(&local_460);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_448,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_430);
  return __return_storage_ptr__;
}

// MakeWidgetReflectorTab @ 142ec2930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
FSlateReflectorModuleImpl::MakeWidgetReflectorTab
          (FSlateReflectorModuleImpl *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  SDockTab *pSVar1;
  code *pcVar2;
  FArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  FName local_478;
  TSharedRef<SWidget,1> local_470;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_460;
  FArguments local_448;
  
  pFVar3 = SDockTab::FArguments::FArguments(&local_448);
  pFVar3->_TabRole = NomadTab;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_478 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_470,&local_478,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_460,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\SlateReflectorModule.cpp"
             ,0xdb,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_470);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_460,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_460._Widget.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_448);
  pSVar1 = __return_storage_ptr__->Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
  pTVar4 = GetWidgetReflector(this,&local_470,__return_storage_ptr__);
  (*pcVar2)(pSVar1,pTVar4);
  return __return_storage_ptr__;
}


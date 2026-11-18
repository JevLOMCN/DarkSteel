// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 71

// FVirtualTextureSystem @ 1458ce090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVirtualTextureSystem * __thiscall
FVirtualTextureSystem::FVirtualTextureSystem(FVirtualTextureSystem *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FRendererOnScreenNotification *lpCriticalSection;
  FDelegateHandle FVar3;
  FVirtualTextureSystem *local_res8;
  FDelegateHandle local_res10;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->Frame = 0x400;
  (this->Mutex).State = (atomic<unsigned_int>)0x0;
  (this->Mutex).ThreadId = (atomic<unsigned_int>)0x0;
  (this->Spaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spaces).ArrayNum = 0;
  (this->Spaces).ArrayMax = 0;
  this->NumAllocatedSpaces = 0;
  (this->AdaptiveVTs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdaptiveVTs).ArrayNum = 0;
  (this->AdaptiveVTs).ArrayMax = 0;
  (this->PhysicalSpaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalSpaces).ArrayNum = 0;
  (this->PhysicalSpaces).ArrayMax = 0;
  FVirtualTextureProducerCollection::FVirtualTextureProducerCollection(&this->Producers);
  (this->PendingDeleteAllocatedVTs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDeleteAllocatedVTs).ArrayNum = 0;
  (this->PendingDeleteAllocatedVTs).ArrayMax = 0;
  *(undefined8 *)&this->AllocatedVTs = 0;
  *(undefined8 *)&(this->AllocatedVTs).field_0x8 = 0;
  *(undefined8 *)&(this->AllocatedVTs).field_0x20 = 0;
  *(undefined4 *)&(this->AllocatedVTs).field_0x28 = 0;
  *(undefined4 *)&(this->AllocatedVTs).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllocatedVTs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedVTs).field_0x34 = 0;
  *(undefined8 *)&(this->AllocatedVTs).field_0x40 = 0;
  *(undefined4 *)&(this->AllocatedVTs).field_0x48 = 0;
  (this->AllocatedVTsToMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedVTsToMap).ArrayNum = 0;
  (this->AllocatedVTsToMap).ArrayMax = 0;
  *(undefined8 *)&this->PersistentVTMap = 0;
  *(undefined8 *)&(this->PersistentVTMap).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentVTMap).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentVTMap).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentVTMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentVTMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PersistentVTMap).field_0x34 = 0;
  *(undefined8 *)&(this->PersistentVTMap).field_0x40 = 0;
  *(undefined4 *)&(this->PersistentVTMap).field_0x48 = 0;
  this->bUpdating = false;
  this->bFlushCaches = false;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = FlushCachesFromConsole;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->FlushCachesCommand,L"r.VT.Flush",
             L"Flush all the physical caches in the VT system.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = DumpFromConsole;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpCommand,L"r.VT.Dump",L"Dump a whole lot of info on the VT system state.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = ListPhysicalPoolsFromConsole;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ListPhysicalPools,L"r.VT.ListPhysicalPools",
             L"Dump a whole lot of info on the VT system state.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = DumpPoolUsageFromConsole;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpPoolUsageCommand,L"r.VT.DumpPoolUsage",
             L"Dump detailed info about VT pool usage.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  (this->RequestedPackedTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedPackedTiles).ArrayNum = 0;
  (this->RequestedPackedTiles).ArrayMax = 0;
  (this->TilesToLock).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToLock).ArrayNum = 0;
  (this->TilesToLock).ArrayMax = 0;
  (this->TilesToLockForNextFrame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToLockForNextFrame).ArrayNum = 0;
  (this->TilesToLockForNextFrame).ArrayMax = 0;
  FHashTable::FHashTable(&(this->TileLocks).TileHash,0x400,0);
  FHashTable::FHashTable(&(this->TileLocks).ProducerToTileIndex,0x400,0);
  (this->TileLocks).LockedTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLocks).LockedTiles.ArrayNum = 0;
  (this->TileLocks).LockedTiles.ArrayMax = 0;
  (this->TileLocks).LockCounts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLocks).LockCounts.ArrayNum = 0;
  (this->TileLocks).LockCounts.ArrayMax = 0;
  (this->TileLocks).FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileLocks).FreeIndices.ArrayNum = 0;
  (this->TileLocks).FreeIndices.ArrayMax = 0;
  *(undefined8 *)&(this->ContinuousUpdateTilesToProduce).Elements = 0;
  *(undefined8 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34 = 0;
  (this->ContinuousUpdateTilesToProduce).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ContinuousUpdateTilesToProduce).HashSize = 0;
  *(undefined8 *)&(this->MappedTilesToProduce).Elements = 0;
  *(undefined8 *)&(this->MappedTilesToProduce).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MappedTilesToProduce).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x34 = 0;
  (this->MappedTilesToProduce).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MappedTilesToProduce).HashSize = 0;
  *(undefined8 *)&(this->TransientCollectedTilesToProduce).Elements = 0;
  *(undefined8 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransientCollectedTilesToProduce).Elements.field_0x34 = 0;
  (this->TransientCollectedTilesToProduce).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TransientCollectedTilesToProduce).HashSize = 0;
  (this->Finalizers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Finalizers).ArrayNum = 0;
  (this->Finalizers).ArrayMax = 0;
  (this->PageRequestPlaybackBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageRequestPlaybackBuffer).ArrayNum = 0;
  (this->PageRequestPlaybackBuffer).ArrayMax = 0;
  (this->OnScreenMessageDelegateHandle).ID = 0;
  (this->DrawResidencyHudDelegateHandle).ID = 0;
  lpCriticalSection = FRendererOnScreenNotification::Get();
  local_res8 = this;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::AddLambda<_FVirtualTextureSystem::FVirtualTextureSystem_::__l2::<lambda_1>_>
              (&lpCriticalSection->ProxyDelegate,(<lambda_1> *)&local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->OnScreenMessageDelegateHandle).ID = local_res10.ID;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = DrawResidencyHud;
      puVar1[3] = this;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar3 = UDebugDrawService::Register
                      ((wchar_t *)&local_res8,
                       (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                        *)L"VirtualTextureResidency");
                    /* WARNING: Load size is inaccurate */
    (this->DrawResidencyHudDelegateHandle).ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FVirtualTextureSystem @ 1458d1560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::~FVirtualTextureSystem(FVirtualTextureSystem *this)

{
  int iVar1;
  FDelegateHandle FVar2;
  FVirtualTextureSpace *this_00;
  FName FVar3;
  FRenderResource *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FRendererOnScreenNotification *lpCriticalSection;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  uchar auVar14 [8];
  longlong lVar15;
  FName local_res10;
  FName local_res18;
  FStatMessage local_48;
  
  lpCriticalSection = FRendererOnScreenNotification::Get();
  FVar2.ID = (this->OnScreenMessageDelegateHandle).ID;
  if (lpCriticalSection == (FRendererOnScreenNotification *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
  ::Remove(&lpCriticalSection->ProxyDelegate,FVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UDebugDrawService::Unregister((FDelegateHandle)(this->DrawResidencyHudDelegateHandle).ID);
  DestroyPendingVirtualTextures(this,true);
  if ((*(int *)&(this->AllocatedVTs).field_0x8 != *(int *)&(this->AllocatedVTs).field_0x34) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocatedVTs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x191,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)&(this->PersistentVTMap).field_0x8 != *(int *)&(this->PersistentVTMap).field_0x34) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PersistentVTMap.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x192,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (this->Spaces).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = *(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + lVar15);
      if (this_00 != (FVirtualTextureSpace *)0x0) {
        if ((this_00->NumRefs != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Space->GetRefCount() == 0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x199,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar10 = FVirtualTextureSpace::GetSizeInBytes(this_00);
        auVar14[4] = '\0';
        auVar14[5] = '\0';
        auVar14[6] = '\0';
        auVar14[7] = '\0';
        auVar14[0] = (char)uVar10;
        auVar14[1] = (char)(uVar10 >> 8);
        auVar14[2] = (char)(uVar10 >> 0x10);
        auVar14[3] = (char)(uVar10 >> 0x18);
        if (uVar10 != 0) {
          FVar12 = StatPtr_STAT_TotalPagetableMemory;
          if (StatPtr_STAT_TotalPagetableMemory ==
              (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
            pFVar11 = ::FName::FName(&local_res18,"STAT_TotalPagetableMemory");
            FVar12 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPagetableMemory,
                                *pFVar11,L"Total Pagetable Memory","STATGROUP_VirtualTextureMemory",
                                "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,
                                false,false,MCR_GPU);
          }
          FVar3 = *(FName *)FVar12;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_01 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_01 == (FThreadStats *)0x0) {
              this_02 = FThreadStatsPool::Get();
              this_01 = FThreadStatsPool::GetFromPool(this_02);
            }
            local_48.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
            local_res10 = FVar3;
            local_48.StatData.Pad = auVar14;
            local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_01,&local_48);
            FStatsTrace::Add(&local_res10,-(longlong)auVar14);
            if (this_01->ScopeCount == 0) {
              FThreadStats::Flush(this_01,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_01,false,false);
            }
          }
        }
        BeginReleaseResource((FRenderResource *)this_00,(FRenderCommandPipe *)0x0);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < (this->Spaces).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (this->PhysicalSpaces).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = *(FRenderResource **)((this->PhysicalSpaces).AllocatorInstance.Data + lVar15);
      if (pFVar4 != (FRenderResource *)0x0) {
        iVar1._0_1_ = pFVar4[0x12].FeatureLevel;
        iVar1._1_1_ = pFVar4[0x12].InitPhase;
        iVar1._2_1_ = pFVar4[0x12].ResourceState;
        iVar1._3_1_ = pFVar4[0x12].field_0x1f;
        if ((iVar1 != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PhysicalSpace->GetRefCount() == 0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x1a3,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        BeginReleaseResource(pFVar4,(FRenderCommandPipe *)0x0);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < (this->PhysicalSpaces).ArrayNum);
  }
  pFVar5 = (this->PageRequestPlaybackBuffer).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Finalizers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->TransientCollectedTilesToProduce).HashSize = 0;
  FVar6 = (this->TransientCollectedTilesToProduce).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TransientCollectedTilesToProduce).Elements);
  (this->MappedTilesToProduce).HashSize = 0;
  FVar6 = (this->MappedTilesToProduce).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MappedTilesToProduce).Elements);
  (this->ContinuousUpdateTilesToProduce).HashSize = 0;
  FVar6 = (this->ContinuousUpdateTilesToProduce).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ContinuousUpdateTilesToProduce).Elements);
  FTexturePageLocks::~FTexturePageLocks(&this->TileLocks);
  pFVar5 = (this->TilesToLockForNextFrame).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->TilesToLock).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->RequestedPackedTiles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DumpPoolUsageCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->ListPhysicalPools);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DumpCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->FlushCachesCommand);
  *(undefined4 *)&(this->PersistentVTMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PersistentVTMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,IAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PersistentVTMap);
  pFVar5 = (this->AllocatedVTsToMap).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->AllocatedVTs).field_0x48 = 0;
  pvVar7 = *(void **)&(this->AllocatedVTs).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllocatedVTs);
  pFVar5 = (this->PendingDeleteAllocatedVTs).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->Producers).CallbacksMap.field_0x48 = 0;
  pvVar7 = *(void **)&(this->Producers).CallbacksMap.field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Producers).CallbacksMap);
  pFVar5 = (this->Producers).Callbacks.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FVirtualTextureProducerCollection::FProducerEntry,int>
            ((FProducerEntry *)(this->Producers).Producers.AllocatorInstance.Data,
             (this->Producers).Producers.ArrayNum);
  pFVar5 = (this->Producers).Producers.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PhysicalSpaces).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->AdaptiveVTs).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TUniquePtr<FVirtualTextureSpace,TDefaultDelete<FVirtualTextureSpace>_>,int>
            ((TUniquePtr<FVirtualTextureSpace,TDefaultDelete<FVirtualTextureSpace>_> *)
             (this->Spaces).AllocatorInstance.Data,(this->Spaces).ArrayNum);
  pFVar5 = (this->Spaces).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator() @ 1458d36b0

void __thiscall
`FVirtualTextureSystem::BeginUpdate'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  void *pvVar1;
  FUniqueRequestList *pFVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2968,"FVirtualTextureSystem::GatherAndSubmitRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xb98);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2968);
  }
  pFVar2 = TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
           Create<FUniqueRequestList,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&>
                     (*(TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> **)
                       ((longlong)this + 0x10),
                      *(TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> **)
                       ((longlong)this + 0x10));
  *(FUniqueRequestList **)(*(longlong *)((longlong)this + 8) + 0x30) = pFVar2;
  pvVar1 = *(void **)(*(longlong *)((longlong)this + 8) + 0x30);
  memset(pvVar1,0xff,0x800);
  memset((void *)((longlong)pvVar1 + 0x2800),0xff,0x800);
  memset((void *)((longlong)pvVar1 + 0x6e00),0xff,0x400);
  memset((void *)((longlong)pvVar1 + 0xb000),0xff,0x800);
  FVirtualTextureSystem::GatherFeedbackRequests
            (*(FVirtualTextureSystem **)this,
             *(TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> **)
              ((longlong)this + 0x10),(FVirtualTextureUpdateSettings *)((longlong)this + 0x18),
             (FMapResult *)((longlong)this + 0x40),
             *(FUniqueRequestList **)(*(longlong *)((longlong)this + 8) + 0x30));
  FVirtualTextureSystem::GatherLockedTileRequests
            (*(FVirtualTextureSystem **)this,
             *(FUniqueRequestList **)(*(longlong *)((longlong)this + 8) + 0x30));
  FVirtualTextureSystem::GatherPackedTileRequests
            (*(FVirtualTextureSystem **)this,
             *(TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> **)
              ((longlong)this + 0x10),(FVirtualTextureUpdateSettings *)((longlong)this + 0x18),
             *(FUniqueRequestList **)(*(longlong *)((longlong)this + 8) + 0x30));
  FVirtualTextureSystem::SubmitThrottledRequests
            (*(FVirtualTextureSystem **)this,param_1,
             *(FVirtualTextureUpdater **)((longlong)this + 8),Begin);
  pvVar1 = *(void **)(*(longlong *)((longlong)this + 8) + 0x30);
  memset(pvVar1,0xff,0x800);
  memset((void *)((longlong)pvVar1 + 0x2800),0xff,0x800);
  memset((void *)((longlong)pvVar1 + 0x6e00),0xff,0x400);
  *(undefined8 *)((longlong)pvVar1 + 0xd840) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xd848) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0xd850) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0xd858) = 0;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AcquirePhysicalSpace @ 1458d65b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTexturePhysicalSpace * __thiscall
FVirtualTextureSystem::AcquirePhysicalSpace
          (FVirtualTextureSystem *this,FRHICommandListBase *param_1,
          FVTPhysicalSpaceDescription *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FVirtualTexturePhysicalSpace *pFVar9;
  ForElementType<int> FVar10;
  ForElementType<int> FVar11;
  TEnumAsByte<EPixelFormat> *pTVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<int> FVar15;
  ForElementType<int> FVar16;
  uint uVar17;
  undefined1 auStackY_e8 [32];
  uint local_98 [2];
  FVTPhysicalSpaceDescriptionExt local_90;
  FLLMScope local_80;
  undefined1 local_7c [12];
  FVTPhysicalSpaceDescription *local_70;
  FVTPhysicalSpaceDescriptionExt *local_68;
  ForElementType<int> local_60;
  uint local_38;
  uint local_34;
  void *local_30;
  
  local_30 = (void *)(__security_cookie.value ^ (ulonglong)auStackY_e8);
  FLLMScope::FLLMScope(&local_80,VirtualTextureSystem,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_7c + 4),VirtualTextureSystem,true);
  FVar11 = (ForElementType<int>)0x0;
  uVar17 = 0;
  local_90.TileWidthHeight = 0;
  local_90.PoolCount = 1;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_90._8_8_ = ((ulonglong)local_90._8_8_ >> 8 & 0xffffff) << 8;
  if ((*(int *)(lVar8 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GetPhysicalSpaceExtraDescription_Cached'::__l2::_dynamic_atexit_destructor_for__Map__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar4 = VirtualTexturePool::GetConfigHash();
  if ((*(int *)(lVar8 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    LastPhysicalPoolSettingsHash = uVar4;
    _Init_thread_footer(&::_TSS1);
  }
  if (LastPhysicalPoolSettingsHash != uVar4) {
    LastPhysicalPoolSettingsHash = uVar4;
    TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
             *)&::Map);
  }
  uVar4 = ::GetTypeHash(param_2);
  iVar5 = TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FVTPhysicalSpaceDescription>
                    ((TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
                      *)&::Map,uVar4,param_2);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x30 + ::Map._0_8_;
    FVar10 = (ForElementType<int>)(lVar8 + 0x18);
    if (lVar8 == 0) {
      FVar10 = FVar11;
    }
    if (FVar10 != (ForElementType<int>)0x0) {
      local_90._0_8_ = *(undefined8 *)FVar10;
      local_90._8_8_ = *(longlong *)((longlong)FVar10 + 8);
      goto LAB_1458d66ec;
    }
  }
  GetPhysicalSpaceExtraDescription(param_2,&local_90);
  local_68 = &local_90;
  local_70 = param_2;
  TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FVTPhysicalSpaceDescription_const_&,FVTPhysicalSpaceDescriptionExt_const_&>_>
            ((TSet<TTuple<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt>,TDefaultMapHashableKeyFuncs<FVTPhysicalSpaceDescription,FVTPhysicalSpaceDescriptionExt,0>,FDefaultSetAllocator>
              *)&::Map,
             (TPairInitializer<FVTPhysicalSpaceDescription_const_&,FVTPhysicalSpaceDescriptionExt_const_&>
              *)local_7c,(bool *)&local_70);
LAB_1458d66ec:
  uVar4 = (this->PhysicalSpaces).ArrayNum;
  local_60.SecondaryData = (ForElementType<int>)0x0;
  local_38 = 0;
  local_34 = 8;
  local_98[0] = 0;
  FVar10 = FVar11;
  FVar16 = FVar11;
  FVar15 = FVar11;
  uVar14 = uVar17;
  if (0 < (int)uVar4) {
    do {
      uVar14 = FVar10._0_4_;
      uVar4 = 0;
      if ((int)uVar14 < (this->PhysicalSpaces).ArrayNum) {
        uVar4 = ~uVar14 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
          return pFVar9;
        }
        FVar16._4_4_ = 0;
        FVar16._0_4_ = local_38;
        FVar15 = local_60.SecondaryData;
      }
      lVar8 = *(longlong *)
               ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
      if ((((lVar8 != 0) && (*(uint *)(lVar8 + 0x20) == param_2->TileSize)) &&
          (bVar1 = *(byte *)(lVar8 + 0x25), bVar1 == param_2->NumLayers)) &&
         ((*(uchar *)(lVar8 + 0x24) == param_2->Dimensions &&
          ((bool)*(char *)(lVar8 + 0x36) == param_2->bCanSplit)))) {
        if (bVar1 != 0) {
          lVar13 = (lVar8 + 0x20) - (longlong)param_2;
          pTVar12 = param_2->Format;
          do {
            if ((pTVar12[lVar13].Value != pTVar12->Value) ||
               ((bool)pTVar12[lVar13 + 8].Value != *(bool *)(pTVar12 + 8))) goto LAB_1458d6905;
            pTVar12 = pTVar12 + 1;
          } while ((longlong)(pTVar12 + (-6 - (longlong)param_2)) < (longlong)(ulonglong)bVar1);
        }
        if ((((*(int *)(lVar8 + 0x38) == local_90.TileWidthHeight) &&
             (*(int *)(lVar8 + 0x3c) == local_90.PoolCount)) &&
            ((bool)*(char *)(lVar8 + 0x40) == local_90.bEnableResidencyMipMapBias)) &&
           (*(int *)(lVar8 + 0x44) == local_90.ResidencyMipMapBiasGroup)) {
          FVar10 = (ForElementType<int>)&local_60;
          if (FVar15 != (ForElementType<int>)0x0) {
            FVar10 = FVar15;
          }
          uVar4 = FVar16._0_4_;
          if ((ulonglong)FVar10 <= local_98) {
            FVar10 = (ForElementType<int>)&local_60;
            if (FVar15 != (ForElementType<int>)0x0) {
              FVar10 = FVar15;
            }
            if ((local_98 < (uint *)((longlong)FVar10 + (longlong)(int)local_34 * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar15 = local_60.SecondaryData, uVar4 = local_38, bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
              return pFVar9;
            }
          }
          if (uVar4 == local_34) {
            uVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,&local_60,(int *)&local_34);
            FVar15 = local_60.SecondaryData;
          }
          local_38 = uVar4 + 1;
          FVar10 = (ForElementType<int>)&local_60;
          if (FVar15 != (ForElementType<int>)0x0) {
            FVar10 = FVar15;
          }
          *(uint *)((longlong)FVar10 + (longlong)(int)uVar4 * 4) = local_98[0];
          FVar16._4_4_ = 0;
          FVar16._0_4_ = local_38;
          FVar15 = local_60.SecondaryData;
        }
      }
LAB_1458d6905:
      uVar14 = FVar16._0_4_;
      uVar4 = (this->PhysicalSpaces).ArrayNum;
      FVar10._0_4_ = local_98[0] + 1;
      FVar10._4_4_ = 0;
      local_98[0] = FVar10._0_4_;
    } while ((int)FVar10._0_4_ < (int)uVar4);
  }
  if ((int)uVar14 < local_90.PoolCount) {
    if ((0xfff < uVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ID <= 0x0fff",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                           ,0x477,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
      return pFVar9;
    }
    FVar15 = FVar11;
    FVar10 = FVar11;
    uVar14 = uVar4;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      do {
        uVar14 = FVar15._0_4_;
        uVar7 = uVar17;
        if ((int)uVar14 < (this->PhysicalSpaces).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
          return pFVar9;
        }
        if (*(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)FVar10) == 0)
        break;
        FVar15._0_4_ = uVar14 + 1;
        FVar15._4_4_ = 0;
        FVar10 = (ForElementType<int>)((longlong)FVar10 + 8);
        uVar14 = uVar4;
      } while ((int)FVar15._0_4_ < (this->PhysicalSpaces).ArrayNum);
    }
    uVar4 = (this->PhysicalSpaces).ArrayNum;
    if (uVar14 == uVar4) {
      if (uVar4 == (this->PhysicalSpaces).ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->PhysicalSpaces).AllocatorInstance,
                           &(this->PhysicalSpaces).ArrayMax);
        (this->PhysicalSpaces).ArrayNum = uVar4;
      }
      (this->PhysicalSpaces).ArrayNum = uVar4 + 1;
      *(undefined8 *)((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = 0;
    }
    pFVar9 = ::operator_new(0x2c0);
    if (pFVar9 != (FVirtualTexturePhysicalSpace *)0x0) {
      FVar11 = (ForElementType<int>)
               FVirtualTexturePhysicalSpace::FVirtualTexturePhysicalSpace
                         (pFVar9,(ushort)uVar14,param_2,&local_90);
    }
    if ((int)uVar14 < (this->PhysicalSpaces).ArrayNum) {
      uVar17 = ~uVar14 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
      return pFVar9;
    }
    *(ForElementType<int> *)
     ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) = FVar11;
    FVar15 = local_60.SecondaryData;
  }
  else {
    uVar4 = uVar14;
    uVar7 = uVar17;
    if (0 < (int)uVar14) {
      uVar4 = rand();
      uVar6 = (uint)((float)(uVar4 & 0x7fff) * (float)(int)uVar14 * __real_38000100);
      FVar15 = local_60.SecondaryData;
      uVar4 = local_38;
      uVar7 = uVar14 - 1;
      if ((int)uVar6 < (int)(uVar14 - 1)) {
        uVar7 = uVar6;
      }
    }
    uVar14 = uVar17;
    if ((int)uVar7 < (int)uVar4) {
      uVar14 = ~uVar7 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar15 = local_60.SecondaryData, bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
      return pFVar9;
    }
    FVar11 = (ForElementType<int>)&local_60;
    if (FVar15 != (ForElementType<int>)0x0) {
      FVar11 = FVar15;
    }
    uVar4 = *(uint *)((longlong)FVar11 + (longlong)(int)uVar7 * 4);
    if ((int)uVar4 < (this->PhysicalSpaces).ArrayNum) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar15 = local_60.SecondaryData, bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FVirtualTexturePhysicalSpace *)(*pcVar2)();
      return pFVar9;
    }
    FVar11 = *(ForElementType<int> *)
              ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  }
  if (FVar15 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar15);
  }
  FMemScope::~FMemScope((FMemScope *)(local_7c + 4));
  FLLMScope::~FLLMScope(&local_80);
  return (FVirtualTexturePhysicalSpace *)FVar11;
}

// AcquireSpace @ 1458d6c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTextureSpace * __thiscall
FVirtualTextureSystem::AcquireSpace
          (FVirtualTextureSystem *this,FRHICommandListBase *param_1,FVTSpaceDescription *param_2,
          uchar param_3,FAllocatedVirtualTexture *param_4)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FVirtualTextureSpace *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FVirtualTextureSpace *pFVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FNameEntryId FVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  FLLMScope local_res8 [2];
  FRHICommandListBase *local_res10;
  FName local_res18;
  int local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  uint local_a8;
  uint uStack_a4;
  FName local_a0;
  FName local_98;
  FName local_90;
  FMemScope local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48;
  FName local_40;
  
  local_res10 = param_1;
  local_res18 = (FName)param_2;
  if ((this->bUpdating != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x368,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
    return pFVar11;
  }
  FLLMScope::FLLMScope(local_res8,VirtualTextureSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_88,VirtualTextureSystem,true);
  uVar18 = 0;
  if ((param_2->bPrivateSpace == '\0') || (param_3 != 0xff)) {
    uVar19 = uVar18;
    if (0 < (this->Spaces).ArrayNum) {
      do {
        uVar9 = (uint)uVar18;
        if ((uVar9 == param_3) || (param_3 == 0xff)) {
          uVar7 = 0;
          if ((int)uVar9 < (this->Spaces).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
            return pFVar11;
          }
          pFVar11 = *(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + uVar19);
          if ((((((pFVar11 != (FVirtualTextureSpace *)0x0) &&
                 ((pFVar11->Description).Dimensions == *(uchar *)((longlong)param_2 + 8))) &&
                ((pFVar11->Description).TileSize == param_2->TileSize)) &&
               ((((pFVar11->Description).TileBorderSize == *(uint *)((longlong)param_2 + 4) &&
                 ((pFVar11->Description).NumPageTableLayers == *(uchar *)((longlong)param_2 + 10)))
                && (((pFVar11->Description).PageTableFormat ==
                     *(EVTPageTableFormat *)((longlong)param_2 + 9) &&
                    (((pFVar11->Description).bPrivateSpace == *(uchar *)((longlong)param_2 + 0xb) &&
                     ((pFVar11->Description).bContinuousUpdate ==
                      *(uchar *)((longlong)param_2 + 0xc))))))))) &&
              ((pFVar11->Description).MaxSpaceSize == *(uint *)((longlong)param_2 + 0x10))) &&
             ((pFVar11->Description).IndirectionTextureSize == *(uint *)((longlong)param_2 + 0x14)))
          {
            uVar7 = FVirtualTextureSpace::GetSizeInBytes(pFVar11);
            uVar8 = FVirtualTextureSpace::AllocateVirtualTexture(pFVar11,param_4);
            param_2 = (FVTSpaceDescription *)local_res18;
            if (uVar8 != 0xffffffff) {
              uVar9 = FVirtualTextureSpace::GetSizeInBytes(pFVar11);
              iVar10 = uVar9 - uVar7;
              if (iVar10 != 0) {
                FVar13 = StatPtr_STAT_TotalPagetableMemory;
                if (StatPtr_STAT_TotalPagetableMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
                  pFVar12 = ::FName::FName(&local_50,"STAT_TotalPagetableMemory");
                  FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_TotalPagetableMemory,*pFVar12,
                                      L"Total Pagetable Memory","STATGROUP_VirtualTextureMemory",
                                      "STATCAT_Advanced",L"Virtual Texture Memory",true,false,
                                      ST_int64,false,false,MCR_GPU);
                }
                FVar2 = *(FName *)FVar13;
                local_res18 = FVar2;
                if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar14 == (FThreadStats *)0x0) {
                    pFVar15 = FThreadStatsPool::Get();
                    pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
                  }
                  local_80.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
                  local_a0 = FVar2;
                  local_80.StatData.Pad = (uchar  [8])(longlong)iVar10;
                  local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                  FThreadStats::AddStatMessage(pFVar14,&local_80);
                  FStatsTrace::Add(&local_a0,(longlong)iVar10);
                  if (pFVar14->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar14,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar14,false,false);
                  }
                }
              }
              goto LAB_1458d75b9;
            }
          }
        }
        uVar18 = (ulonglong)(uVar9 + 1);
        uVar19 = uVar19 + 8;
      } while ((int)(uVar9 + 1) < (this->Spaces).ArrayNum);
    }
    if ((param_3 != 0xff) && (2 < (byte)LogVirtualTexturing._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
    }
  }
  uVar9 = 0xffffffff;
  local_c8 = 0;
  local_b0 = 2 - (uint)(this->NumAllocatedSpaces < 0x10);
  do {
    uVar18 = 0;
    if (local_b0 <= local_c8) {
      uVar9 = (this->Spaces).ArrayNum;
      piVar1 = &(this->Spaces).ArrayMax;
      if (uVar9 == *piVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Spaces).AllocatorInstance,piVar1);
      }
      local_b8 = 0;
      (this->Spaces).ArrayNum = uVar9 + 1;
      *(undefined8 *)((this->Spaces).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) = 0;
      pFVar3 = (this->AdaptiveVTs).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar3 + (longlong)(this->AdaptiveVTs).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
        return pFVar11;
      }
      iVar10 = (this->AdaptiveVTs).ArrayNum;
      piVar1 = &(this->AdaptiveVTs).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->AdaptiveVTs).AllocatorInstance,piVar1);
      }
      (this->AdaptiveVTs).ArrayNum = iVar10 + 1;
      *(undefined8 *)((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_b8;
      if (((this->Spaces).ArrayNum != (this->AdaptiveVTs).ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Spaces.Num() == AdaptiveVTs.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                             ,0x3c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
        return pFVar11;
      }
      break;
    }
    uVar19 = uVar18;
    uVar5 = uVar18;
    if (local_c8 == 1) {
      DestroyPendingVirtualTextures(this,true);
    }
    while ((uVar9 == 0xffffffff && (uVar7 = (uint)uVar5, (int)uVar7 < (this->Spaces).ArrayNum))) {
      if (((int)uVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
        return pFVar11;
      }
      if (*(longlong *)((this->Spaces).AllocatorInstance.Data + uVar19) == 0) {
        uVar9 = uVar7;
      }
      uVar19 = uVar19 + 8;
      uVar5 = (ulonglong)(uVar7 + 1);
    }
    if (uVar9 == 0xffffffff) {
      local_c0 = 0;
      do {
        uVar7 = (uint)uVar18;
        if ((this->Spaces).ArrayNum <= (int)uVar7) break;
        if (((int)uVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
          return pFVar11;
        }
        pFVar11 = *(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + local_c0);
        if ((pFVar11 != (FVirtualTextureSpace *)0x0) && (pFVar11->NumRefs == 0)) {
          uVar9 = FVirtualTextureSpace::GetSizeInBytes(pFVar11);
          auVar21[4] = '\0';
          auVar21[5] = '\0';
          auVar21[6] = '\0';
          auVar21[7] = '\0';
          auVar21[0] = (char)uVar9;
          auVar21[1] = (char)(uVar9 >> 8);
          auVar21[2] = (char)(uVar9 >> 0x10);
          auVar21[3] = (char)(uVar9 >> 0x18);
          if (uVar9 != 0) {
            FVar13 = StatPtr_STAT_TotalPagetableMemory;
            if (StatPtr_STAT_TotalPagetableMemory ==
                (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
              pFVar12 = ::FName::FName(&local_48,"STAT_TotalPagetableMemory");
              FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPagetableMemory,
                                  *pFVar12,L"Total Pagetable Memory",
                                  "STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                                  L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_GPU)
              ;
            }
            FVar2 = *(FName *)FVar13;
            FVar20 = FVar2.ComparisonIndex.Value;
            uVar9 = FVar2.Number;
            local_a8 = FVar20.Value;
            uStack_a4 = uVar9;
            if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_70.NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
              local_98 = FVar2;
              local_70.StatData.Pad = auVar21;
              local_70.NameAndInfo.Index.Value = FVar20.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_70);
              FStatsTrace::Add(&local_98,-(longlong)auVar21);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          FRenderResource::ReleaseResource((FRenderResource *)pFVar11);
          this->NumAllocatedSpaces = this->NumAllocatedSpaces - 1;
          uVar9 = uVar7;
        }
        local_c0 = local_c0 + 8;
        uVar18 = (ulonglong)(uVar7 + 1);
      } while (uVar9 == 0xffffffff);
    }
    local_c8 = local_c8 + 1;
  } while (uVar9 == 0xffffffff);
  pFVar11 = (FVirtualTextureSpace *)0x0;
  if (0xf < (int)uVar9) {
    if (2 < (byte)LogVirtualTexturing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
    }
    ListPhysicalPoolsFromConsole(this);
  }
  FVar2 = local_res18;
  if (*(uchar *)((longlong)local_res18 + 0xb) == '\0') {
    uVar7 = *(int *)((longlong)&param_4->_padding_ + 4) *
            *(int *)((longlong)&param_4->_padding_ + 4);
    uVar8 = (int)param_4->_padding_ * (int)param_4->_padding_;
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
  }
  else {
    uVar7 = *(uint *)((longlong)local_res18 + 0x10);
  }
  pFVar16 = ::operator_new(0x708);
  if (pFVar16 != (FVirtualTextureSpace *)0x0) {
    pFVar11 = FVirtualTextureSpace::FVirtualTextureSpace
                        (pFVar16,this,(uchar)uVar9,(FVTSpaceDescription *)FVar2,uVar7);
  }
  uVar7 = 0;
  if ((int)uVar9 < (this->Spaces).ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FVirtualTextureSpace *)(*pcVar4)();
    return pFVar11;
  }
  pFVar3 = (this->Spaces).AllocatorInstance.Data;
  pFVar16 = *(FVirtualTextureSpace **)(pFVar3 + (longlong)(int)uVar9 * 8);
  if ((pFVar16 != pFVar11) &&
     (*(FVirtualTextureSpace **)(pFVar3 + (longlong)(int)uVar9 * 8) = pFVar11,
     pFVar16 != (FVirtualTextureSpace *)0x0)) {
    FVirtualTextureSpace::_scalar_deleting_destructor_(pFVar16,1);
  }
  this->NumAllocatedSpaces = this->NumAllocatedSpaces + 1;
  uVar9 = FVirtualTextureSpace::GetSizeInBytes(pFVar11);
  auVar22[4] = '\0';
  auVar22[5] = '\0';
  auVar22[6] = '\0';
  auVar22[7] = '\0';
  auVar22[0] = (char)uVar9;
  auVar22[1] = (char)(uVar9 >> 8);
  auVar22[2] = (char)(uVar9 >> 0x10);
  auVar22[3] = (char)(uVar9 >> 0x18);
  if (uVar9 != 0) {
    FVar13 = StatPtr_STAT_TotalPagetableMemory;
    if (StatPtr_STAT_TotalPagetableMemory ==
        (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
      pFVar12 = ::FName::FName(&local_40,"STAT_TotalPagetableMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPagetableMemory,*pFVar12,
                          L"Total Pagetable Memory","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_GPU);
    }
    FVar2 = *(FName *)FVar13;
    local_res18 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      local_60.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_90 = FVar2;
      local_60.StatData.Pad = auVar22;
      local_60.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar14,&local_60);
      FStatsTrace::Add(&local_90,(long64)auVar22);
      if (pFVar14->ScopeCount == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  FRenderResource::InitResource((FRenderResource *)pFVar11,local_res10);
  uVar8 = FVirtualTextureAllocator::Alloc(&pFVar11->Allocator,param_4);
  puVar17 = &(pFVar11->Description).MaxSpaceSize;
  if ((pFVar11->Description).bPrivateSpace == '\0') {
    uVar9 = (pFVar11->Allocator).AllocatedWidth;
    puVar17 = &(pFVar11->Allocator).AllocatedHeight;
  }
  else {
    uVar9 = *puVar17;
  }
  if ((pFVar11->CachedPageTableWidth < (uVar9 + 0x1f & 0xffffffe0)) ||
     (pFVar11->CachedPageTableHeight < (*puVar17 + 0x1f & 0xffffffe0))) {
    pFVar11->bNeedToAllocatePageTable = true;
  }
LAB_1458d75b9:
  FAllocatedVirtualTexture::AssignVirtualAddress(param_4,uVar8);
  pFVar11->NumRefs = pFVar11->NumRefs + 1;
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar11;
}

// AddPageUpdate @ 1458d9610

void __thiscall
FVirtualTextureSystem::AddPageUpdate
          (FVirtualTextureSystem *this,FPageUpdateBuffer *param_1,uint param_2,uint param_3,
          ushort param_4)

{
  FTexturePagePool *this_00;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  FVirtualTexturePhysicalSpace *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((uint)param_4 == param_1[param_3].PrevPhysicalAddress) {
    return;
  }
  param_1[param_3].PrevPhysicalAddress = (uint)param_4;
  if (param_1[param_3].NumPages < param_2) {
LAB_1458d96dc:
    if ((0x7f < param_1[param_3].NumPages) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.NumPages < FPageUpdateBuffer::PageCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                           ,0x699,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1[param_3].PhysicalAddresses[param_1[param_3].NumPages] = param_4;
    param_1[param_3].NumPages = param_1[param_3].NumPages + 1;
  }
  else {
    pFVar5 = GetPhysicalSpace(this,param_3);
    this_00 = &pFVar5->Pool;
    if (param_1[param_3].NumPages < 0x80) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)this_00);
      if (BVar4 == 0) goto LAB_1458d96dc;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    }
    uVar1 = this->Frame;
    FTexturePagePool::UpdateUsage(this_00,uVar1,param_4);
    uVar7 = 0;
    if (param_1[param_3].NumPages != 0) {
      do {
        FTexturePagePool::UpdateUsage(this_00,uVar1,param_1[param_3].PhysicalAddresses[uVar7]);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < param_1[param_3].NumPages);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar1 = param_1[param_3].NumPages;
    param_1[param_3].NumPages = 0;
    param_1[param_3].NumPageUpdates = param_1[param_3].NumPageUpdates + uVar1 + 1;
  }
  return;
}

// AddProducerDestroyedCallback @ 1458d9740

void __thiscall
FVirtualTextureSystem::AddProducerDestroyedCallback
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1,
          _func___cdecl_void_FVirtualTextureProducerHandle_ptr_void_ptr *param_2,void *param_3)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x355,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  FVirtualTextureProducerCollection::AddDestroyedCallback(&this->Producers,param_1,param_2,param_3);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// AddRequestedTilesTask @ 1458d9830

void __thiscall
FVirtualTextureSystem::AddRequestedTilesTask
          (FVirtualTextureSystem *this,FAddRequestedTilesParameters *param_1)

{
  longlong lVar1;
  uint uVar2;
  FUniquePageList *this_00;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  
  puVar16 = (undefined8 *)0x0;
  this_00 = param_1->UniquePageList;
  puVar13 = param_1->RequestBuffer;
  iVar12 = -1;
  uVar2 = param_1->LevelBias;
  if (param_1->NumRequests != 0) {
    uVar17 = (ulonglong)param_1->NumRequests;
    puVar11 = puVar16;
    do {
      uVar3 = *puVar13;
      iVar14 = (int)(uVar3 >> 0x20);
      if ((iVar12 != iVar14) &&
         (puVar11 = puVar16, iVar12 = iVar14,
         *(int *)&(this->PersistentVTMap).field_0x8 != *(int *)&(this->PersistentVTMap).field_0x34))
      {
        puVar4 = *(undefined1 **)&(this->PersistentVTMap).field_0x40;
        puVar10 = &(this->PersistentVTMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar10 = puVar4;
        }
        iVar5 = *(int *)(puVar10 +
                        ((ulonglong)(*(int *)&(this->PersistentVTMap).field_0x48 - 1) &
                        uVar3 >> 0x20) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *(longlong *)&this->PersistentVTMap + (longlong)iVar5 * 0x18;
            if (*(int *)(*(longlong *)&this->PersistentVTMap + (longlong)iVar5 * 0x18) == iVar14) {
              puVar8 = (undefined8 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar8 = puVar16;
              }
              if (puVar8 != (undefined8 *)0x0) {
                puVar11 = (undefined8 *)*puVar8;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10);
          } while (iVar5 != -1);
        }
      }
      if ((puVar11 != (undefined8 *)0x0) && (*(uint *)(puVar11 + 0xe) < 0x10)) {
        uVar9 = *(int *)(puVar11 + 0xf) + ((uint)uVar3 & 0xffffff);
        uVar6 = (uint)(uVar3 >> 0x1c) & 0xf;
        uVar7 = 1;
        if (1 < uVar6) {
          uVar7 = uVar6;
        }
        uVar7 = (uVar2 - 1) + uVar7;
        uVar6 = *(uint *)((longlong)puVar11 + 0x74);
        if (uVar7 < *(uint *)((longlong)puVar11 + 0x74)) {
          uVar6 = uVar7;
        }
        uVar7 = uVar9 & 0x55555555;
        uVar9 = uVar9 >> 1 & 0x55555555;
        uVar7 = (uVar7 >> 1 ^ uVar7) & 0x33333333;
        uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
        uVar15 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
        uVar7 = (uVar9 >> 1 ^ uVar9) & 0x33333333;
        uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
        uVar7 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
        FUniquePageList::Add
                  (this_00,(((uVar7 >> 8 ^ uVar7) & 0xffff) >> ((byte)uVar6 & 0x1f) |
                           *(uint *)(puVar11 + 0xe) << 0x10) << 0xc |
                           ((uVar15 >> 8 ^ uVar15) & 0xffff) >> ((byte)uVar6 & 0x1f) |
                           (uVar6 + 1) * 0x1000000,0xffff);
      }
      puVar13 = puVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// AllocateAdaptiveVirtualTexture @ 1458db7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IAdaptiveVirtualTexture * __thiscall
FVirtualTextureSystem::AllocateAdaptiveVirtualTexture
          (FVirtualTextureSystem *this,FRHICommandListBase *param_1,FAdaptiveVTDescription *param_2,
          FAllocatedVTDescription *param_3)

{
  FRecursiveMutex *this_00;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  IAdaptiveVirtualTexture *pIVar5;
  FAdaptiveVirtualTexture *this_01;
  FAdaptiveVirtualTexture *this_02;
  uint uVar6;
  
  if ((this->bUpdating != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x32a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  UE::FRecursiveMutex::Lock(this_00);
  this_01 = ::operator_new(0x140);
  this_02 = (FAdaptiveVirtualTexture *)0x0;
  if (this_01 != (FAdaptiveVirtualTexture *)0x0) {
    this_02 = FAdaptiveVirtualTexture::FAdaptiveVirtualTexture(this_01,param_2,param_3);
  }
  FAdaptiveVirtualTexture::Init(this_02,param_1,this);
  iVar1 = (int)this_02->AllocatedVirtualTextureLowMips->_padding_;
  if (((iVar1 < 0) || ((this->AdaptiveVTs).ArrayNum <= iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdaptiveVTs.IsValidIndex(AdaptiveVT->GetSpaceID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x32e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  uVar2 = (uint)this_02->AllocatedVirtualTextureLowMips->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < (this->AdaptiveVTs).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  if ((*(longlong *)((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdaptiveVTs[AdaptiveVT->GetSpaceID()] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x32f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  uVar2 = (uint)this_02->AllocatedVirtualTextureLowMips->_padding_;
  uVar6 = 0;
  if ((int)uVar2 < (this->AdaptiveVTs).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (IAdaptiveVirtualTexture *)(*pcVar3)();
    return pIVar5;
  }
  *(FAdaptiveVirtualTexture **)
   ((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = this_02;
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return (IAdaptiveVirtualTexture *)this_02;
}

// AllocateResources @ 1458db9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::AllocateResources(FVirtualTextureSystem *this,FRDGBuilder *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGScope *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  <lambda_1> local_98;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_88;
  TRDGEventScopeGuard<FRDGScope_RHI> local_78;
  char local_68;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  FLLMScope::FLLMScope(local_res10,VirtualTextureSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,VirtualTextureSystem,true);
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_68 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xac2;
      local_50 = 0x54bdae30;
      uStack_4c = 1;
      ::Desc._padding_._0_4_ = 0x54bdae30;
      ::Desc._padding_._4_4_ = uStack_54;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_VirtualTextureA;
      ::Desc._padding_ = (longlong)u_VirtualTextureA;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualTextureSystem::AllocateResources'::__l7::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_88._Myfirst._Val = &::Desc;
    local_78.State = (FRDGScopeState *)param_1;
    pFVar5 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                       ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar5;
    local_78.Scope = pFVar5;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
              (&(pFVar5->Impl).Impl,(FRDGScopeState *)param_1,&local_88);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar5,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar5,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_68 = '\x01';
  }
  pFVar5 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar5;
  uVar7 = (ulonglong)(pFVar5->Impl).Impl.TypeIndex;
  if ((3 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar7])(&pFVar5->Impl);
  (pFVar5->Impl).Impl._padding_ = (longlong)"VirtualTextureSystem_Update";
  FCsvProfiler::BeginExclusiveStat("VirtualTextureSystem_Update",(char *)0x0);
  (pFVar5->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar5,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar5,(FRHIComputeCommandList *)param_1->_padding_);
  }
  uVar6 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Spaces).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->Spaces).AllocatorInstance.Data + lVar8) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Spaces).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVirtualTextureSpace::AllocateTextures
                  (*(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + lVar8),param_1
                  );
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->Spaces).ArrayNum);
  }
  if (pFVar5 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(pFVar5,(FRHIComputeCommandList *)param_1->_padding_);
      local_98.RHICmdList = (FRHIComputeCommandList *)param_1->_padding_;
      local_98.bPreScope = local_res8;
      local_res8[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar5->Impl,&local_98);
    }
    FRDGScope::ImmediateEnd(pFVar5,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  if (local_68 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_78);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// AllocateVirtualTexture @ 1458dc910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

IAllocatedVirtualTexture * __thiscall
FVirtualTextureSystem::AllocateVirtualTexture
          (FVirtualTextureSystem *this,FRHICommandListBase *param_1,FAllocatedVTDescription *param_2
          )

{
  int *piVar1;
  TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FVirtualTextureSystem *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  IAllocatedVirtualTexture *pIVar13;
  FAllocatedVirtualTexture **ppFVar14;
  FProducerEntry *pFVar15;
  FAllocatedVirtualTexture *pFVar16;
  FAllocatedVirtualTexture *pFVar17;
  byte bVar18;
  FRecursiveMutex *this_00;
  uint uVar19;
  FAllocatedVirtualTexture *pFVar20;
  uint uVar21;
  undefined1 auStackY_168 [32];
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  FAllocatedVirtualTexture *local_f0;
  TArray<FVirtualTextureProducer_*,TSizedDefaultAllocator<32>_> local_e8;
  FVirtualTextureSystem *local_d8;
  TPairInitializer<unsigned_int_&&,IAllocatedVirtualTexture_*_&&> local_d0;
  FRecursiveMutex *local_c0;
  FAllocatedVirtualTexture **local_b8;
  FRHICommandListBase *local_b0;
  uint local_a8 [2];
  FAllocatedVirtualTexture *local_a0;
  uint *local_98;
  FAllocatedVirtualTexture **local_90;
  FVirtualTextureProducer *local_88 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_d8 = this;
  local_b0 = param_1;
  if ((8 < param_2->NumTextureLayers) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.NumTextureLayers <= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x286,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  this_00 = &this->Mutex;
  local_c0 = this_00;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  UE::FRecursiveMutex::Lock(this_00);
  uVar8 = ::GetTypeHash(param_2);
  ppFVar14 = TMapBase<FAllocatedVTDescription,FAllocatedVirtualTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>_>
             ::FindOrAddImpl<FAllocatedVTDescription_const_&>
                       ((TMapBase<FAllocatedVTDescription,FAllocatedVirtualTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>_>
                         *)&this->AllocatedVTs,uVar8,param_2);
  pFVar17 = *ppFVar14;
  local_b8 = ppFVar14;
  if (pFVar17 != (FAllocatedVirtualTexture *)0x0) {
    iVar9 = (int)pFVar17->_padding_;
    *(int *)&pFVar17->_padding_ = iVar9 + 1;
    if (iVar9 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevNumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x290,L"");
      if (bVar7) {
code_r0x0001458dca63:
        pcVar5 = (code *)swi(3);
        pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
        return pIVar13;
      }
    }
    else if (iVar9 == 0) {
      local_d0.Value = (IAllocatedVirtualTexture **)*ppFVar14;
      iVar9 = TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                        (&this->PendingDeleteAllocatedVTs,
                         (IAllocatedVirtualTexture **)&local_d0.Value,No);
      if ((iVar9 != 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingDeleteAllocatedVTs.RemoveSwap(AllocatedVT, EAllowShrinking::No) == 1"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                             ,0x294,L""), bVar7)) goto code_r0x0001458dca63;
    }
    goto LAB_1458dcf36;
  }
  pFVar17 = (FAllocatedVirtualTexture *)0x0;
  bVar18 = 0;
  local_100 = 0;
  local_104 = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_88[0] = (FVirtualTextureProducer *)0x0;
  local_88[1] = (FVirtualTextureProducer *)0x0;
  local_88[2] = (FVirtualTextureProducer *)0x0;
  local_88[7] = (FVirtualTextureProducer *)0x0;
  local_88[3] = (FVirtualTextureProducer *)0x0;
  local_88[4] = (FVirtualTextureProducer *)0x0;
  local_88[5] = (FVirtualTextureProducer *)0x0;
  local_88[6] = (FVirtualTextureProducer *)0x0;
  if (param_2->NumTextureLayers == '\0') {
    local_100 = 0;
LAB_1458dcc2f:
    ppFVar14 = local_b8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockWidthInTiles > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x2b5,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
      return pIVar13;
    }
  }
  else {
    bVar18 = 0;
    pFVar16 = pFVar17;
    do {
      pFVar15 = FVirtualTextureProducerCollection::GetEntry
                          (&this->Producers,param_2->ProducerHandle + (longlong)pFVar16);
      if (pFVar15 == (FProducerEntry *)0x0) {
        local_88[(longlong)pFVar16] = (FVirtualTextureProducer *)0x0;
      }
      else {
        bVar3 = param_2->ProducerLayerIndex[(longlong)pFVar16];
        local_88[(longlong)pFVar16] = &pFVar15->Producer;
        uVar8 = (pFVar15->Producer).Description.BlockWidthInTiles;
        if (uVar8 < local_100) {
          uVar8 = local_100;
        }
        uVar19 = (pFVar15->Producer).Description.BlockHeightInTiles;
        if (uVar19 < local_104) {
          uVar19 = local_104;
        }
        uVar10 = (uint)(pFVar15->Producer).Description.WidthInBlocks;
        if (uVar10 < local_f4) {
          uVar10 = local_f4;
        }
        uVar11 = (uint)(pFVar15->Producer).Description.HeightInBlocks;
        if (uVar11 < local_f8) {
          uVar11 = local_f8;
        }
        uVar12 = (pFVar15->Producer).Description.DepthInTiles;
        if (uVar12 < local_fc) {
          uVar12 = local_fc;
        }
        if (((pFVar15->Producer).Description.NumTextureLayers <= bVar3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LayerIndex < Description.NumTextureLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                               ,0x1f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
          return pIVar13;
        }
        uVar21 = (uint)(pFVar15->Producer).Description.PhysicalGroupIndex[bVar3];
        if (((pFVar15->Producer).Description.NumPhysicalGroups <= uVar21) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GroupIndex < Description.NumPhysicalGroups",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                               ,0x22,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
          return pIVar13;
        }
        if (((pFVar15->Producer).PhysicalGroups.ArrayNum <= (int)uVar21) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
          return pIVar13;
        }
        bVar18 = bVar18 | (pFVar15->Producer).Description.bPersistentHighestMip;
        local_104 = uVar19;
        local_100 = uVar8;
        local_fc = uVar12;
        local_f8 = uVar11;
        local_f4 = uVar10;
      }
      uVar8 = (int)pFVar16 + 1;
      pFVar16 = (FAllocatedVirtualTexture *)(ulonglong)uVar8;
    } while (uVar8 < param_2->NumTextureLayers);
    this_00 = local_c0;
    ppFVar14 = local_b8;
    if (local_100 == 0) goto LAB_1458dcc2f;
  }
  if ((local_104 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockHeightInTiles > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x2b6,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  if ((local_fc == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthInTiles > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x2b7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  if ((local_f4 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidthInBlocks > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x2b8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  if ((local_f8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeightInBlocks > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x2b9,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
    return pIVar13;
  }
  if (((param_2->field11_0x44).PackedFlags & 2) != 0) {
    local_e8.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    pFVar16 = pFVar17;
    if (param_2->NumTextureLayers != '\0') {
      do {
        if (local_88[(longlong)pFVar16] != (FVirtualTextureProducer *)0x0) {
          TArray<FVirtualTextureProducer_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FVirtualTextureProducer_*_const_&>(&local_e8,local_88 + (longlong)pFVar16);
        }
        uVar8 = (int)pFVar16 + 1;
        pFVar16 = (FAllocatedVirtualTexture *)(ulonglong)uVar8;
      } while (uVar8 < param_2->NumTextureLayers);
      pFVar16 = (FAllocatedVirtualTexture *)(ulonglong)(uint)local_e8.ArrayNum;
    }
    pFVar20 = pFVar17;
    if (0 < (int)pFVar16) {
      do {
        uVar19 = (uint)pFVar20;
        uVar8 = 0;
        if ((int)uVar19 < (int)pFVar16) {
          uVar8 = ~uVar19 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
            return pIVar13;
          }
          pFVar16 = (FAllocatedVirtualTexture *)(ulonglong)(uint)local_e8.ArrayNum;
        }
        pFVar20 = (FAllocatedVirtualTexture *)(ulonglong)(uVar19 + 1);
      } while ((int)(uVar19 + 1) < (int)pFVar16);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  pFVar16 = ::operator_new(0xe8);
  pFVar6 = local_d8;
  if (pFVar16 != (FAllocatedVirtualTexture *)0x0) {
    pFVar17 = FAllocatedVirtualTexture::FAllocatedVirtualTexture
                        (pFVar16,local_b0,local_d8,local_d8->Frame,param_2,local_88,local_100,
                         local_104,local_f4,local_f8,local_fc);
  }
  *ppFVar14 = pFVar17;
  *(undefined4 *)&pFVar17->_padding_ = 1;
  if (bVar18 != 0) {
    local_f0 = *ppFVar14;
    pTVar2 = &pFVar6->AllocatedVTsToMap;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         pFVar4 + (longlong)(pFVar6->AllocatedVTsToMap).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pIVar13 = (IAllocatedVirtualTexture *)(*pcVar5)();
      return pIVar13;
    }
    iVar9 = (pFVar6->AllocatedVTsToMap).ArrayNum;
    piVar1 = &(pFVar6->AllocatedVTsToMap).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar6->AllocatedVTsToMap).ArrayNum = iVar9 + 1;
    *(FAllocatedVirtualTexture **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) =
         local_f0;
    *(undefined1 *)((longlong)&(*ppFVar14)->_padding_ + 4) = 1;
  }
  local_a0 = *ppFVar14;
  local_a8[0] = local_a0->PersistentHash;
  local_98 = local_a8;
  local_90 = &local_a0;
  TSet<TTuple<unsigned_int,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<unsigned_int,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,IAllocatedVirtualTexture_*_&&>_>
            ((TSet<TTuple<unsigned_int,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<unsigned_int,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
              *)&pFVar6->PersistentVTMap,&local_d0,(bool *)&local_98);
LAB_1458dcf36:
  pFVar17 = *ppFVar14;
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return (IAllocatedVirtualTexture *)pFVar17;
}

// BeginUpdate @ 1458dec50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::BeginUpdate
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,FVirtualTextureUpdater *param_2)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  FName FVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  FName FVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FeedbackMap> FVar15;
  FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FVirtualTextureSystem *pFVar19;
  FName FVar20;
  int iVar21;
  FColor_u_0 FVar22;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  undefined1 local_118 [8];
  FName local_110;
  FName local_100;
  FTaskHandle *local_f8;
  undefined8 local_f0;
  FName local_e8;
  LARGE_INTEGER local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FName local_b8;
  FMapResult local_b0;
  FPipe local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  TIntPoint<unsigned_int> *local_60;
  undefined8 uStack_58;
  
  pTVar10 = CVarVTWaitBeforeUpdate.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar10->ShadowedValue[1] != 0) {
    FSceneRenderBuilder::WaitForAsyncDeleteTask();
  }
  pFVar19 = (FVirtualTextureSystem *)0x0;
  this->bUpdating = true;
  if ((param_2->Settings).bEnableFeedback == false) goto LAB_1458df096;
  FVar15 = StatPtr_STAT_FeedbackMap;
  if (StatPtr_STAT_FeedbackMap == (FThreadSafeStaticStat<FStat_STAT_FeedbackMap>)0x0) {
    pFVar14 = ::FName::FName(&local_100,"STAT_FeedbackMap");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FeedbackMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FeedbackMap,*pFVar14,
                        L"Feedback Map","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar8 = false;
  bVar12 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((((uint)FVar20.ComparisonIndex.Value).Value == 0) && (FVar20.Number == 0)) {
LAB_1458dee16:
    bVar9 = false;
    FVar20 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = FVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xb92);
        bVar8 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1458dee16;
    local_res18.Bits = (uint)FVar20.ComparisonIndex.Value;
    uStackX_1c = FVar20.Number;
    local_110 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar9 = true;
  }
  local_100 = (FName)param_1->_padding_;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_VirtualTexture_PendingFeedback;
    if (StatPtr_STAT_VirtualTexture_PendingFeedback ==
        (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback>)0x0) {
      pFVar14 = ::FName::FName(&local_b8,"STAT_VirtualTexture_PendingFeedback");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_VirtualTexture_PendingFeedback>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTexture_PendingFeedback,
                          *pFVar14,L"Num Feedback Pending","STATGROUP_VirtualTexturing",
                          "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar5 = *(FName *)FVar16;
    FVar22.Bits = (uint)FVar5.ComparisonIndex.Value;
    uVar13 = FVar5.Number;
    local_res20 = (FName)(longlong)(int)GVirtualTextureFeedback._232_4_;
    local_res18.Bits = FVar22.Bits;
    uStackX_1c = uVar13;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      FVar11 = local_res20;
      local_d8.NameAndInfo.Number = uVar13 & 0xffff8fff | 0x8000;
      local_d8.StatData.Pad = (uchar  [8])local_res20;
      local_e8 = FVar5;
      local_d8.NameAndInfo.Index.Value = FVar22.Bits;
      FThreadStats::AddStatMessage(pFVar17,&local_d8);
      FStatsTrace::Set(&local_e8,(long64)FVar11);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  iVar21 = 8;
  if ((int)GVirtualTextureFeedback._232_4_ < GVirtualTextureFeedbackLatency) {
    iVar21 = 1;
  }
  FVirtualTextureFeedback::Map
            ((FVirtualTextureFeedback *)&GVirtualTextureFeedback,&local_b0,
             (FRHICommandListImmediate *)local_100,iVar21);
  (param_2->FeedbackMapResult).Data = local_b0.Data;
  (param_2->FeedbackMapResult).Size = local_b0.Size;
  (param_2->FeedbackMapResult).MapHandle = local_b0.MapHandle;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_c8.NameAndInfo.Index.Value = local_110.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_c8);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
LAB_1458df096:
  local_a0.EmptyEventRef.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_2->Settings;
  local_a0.DebugName = *(wchar_t **)&(param_2->Settings).NumFeedbackTasks;
  local_a0.EmptyEventRef.Object = (TEventCount<unsigned_int> *)&param_2->Allocator;
  local_78._0_4_ = (param_2->Settings).MaxGatherPagesBeforeFlush;
  local_78._4_4_ = (param_2->Settings).MaxRVTPageUploads;
  uStack_70._0_4_ = (param_2->Settings).MaxSVTPageUploads;
  uStack_70._4_4_ = (param_2->Settings).MaxPagesProduced;
  local_68 = (param_2->Settings).MaxContinuousUpdates;
  local_60 = (param_2->FeedbackMapResult).Data;
  uStack_58._0_4_ = (param_2->FeedbackMapResult).Size;
  uStack_58._4_4_ = (param_2->FeedbackMapResult).MapHandle;
  local_f8 = (FTaskHandle *)0x0;
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0;
  local_a0.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  local_a0.TaskCount = (atomic<unsigned___int64>)param_2;
  FRDGBuilder::
  AddCommandListSetupTask<_FVirtualTextureSystem::BeginUpdate_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (param_1,(<lambda_1> *)local_118,&local_a0,
             (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
             (ETaskPriority)&local_f8,false,param_2->bAsyncTaskAllowed);
  pFVar2 = local_f8;
  DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_f8,(int)local_f0);
  if (pFVar2 != (FTaskHandle *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = &param_2->AsyncTask;
  if (pFVar2 != (FTaskHandle *)local_118) {
    pFVar6 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = (FTaskBase *)local_118;
    local_118 = (undefined1  [8])pFVar19;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar6->RefCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  if (local_118 != (undefined1  [8])0x0) {
    LOCK();
    paVar3 = (atomic<unsigned_int> *)&(((FVirtualTextureSystem *)local_118)->AdaptiveVTs).ArrayNum;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)&((FVirtualTextureSystem *)local_118)->Frame)(local_118,1);
    }
  }
  return;
}

// BeginUpdate @ 1458df1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> __thiscall
FVirtualTextureSystem::BeginUpdate
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,Type param_2,ISceneRenderer *param_3,
          FVirtualTextureUpdateSettings *param_4)

{
  char cVar1;
  FRHIGPUMask FVar2;
  FRHIComputeCommandList *this_00;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  TConsoleVariableData<int> *pTVar18;
  FVirtualTextureSystem *pFVar19;
  longlong *plVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> TVar26;
  FRDGScope *pFVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update> FVar29;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_UpdateAdaptiveAllocations> FVar30;
  FThreadSafeStaticStat<FStat_STAT_FlushCache> FVar31;
  FThreadSafeStaticStat<FStat_STAT_NumFlushCache> FVar32;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FVirtualTextureLocalTileRequest *this_03;
  FScene *this_04;
  FVirtualTextureUpdater *pFVar33;
  byte bVar34;
  longlong lVar35;
  FNameEntryId FVar36;
  uint uVar37;
  FName FVar38;
  FVirtualTextureUpdater *pFVar39;
  ulonglong uVar40;
  FName FVar41;
  undefined4 in_register_00000084;
  FRDGBuilder *pFVar42;
  uint *puVar43;
  FVirtualTextureUpdater *pFVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  longlong lVar48;
  char *in_stack_00000030;
  undefined1 auStackY_2e8 [32];
  bool local_285 [5];
  bool local_280 [8];
  bool local_278 [8];
  uint local_270;
  uint uStack_26c;
  uint local_268;
  FVirtualTextureSystem *local_260;
  FName local_258;
  FRDGBuilder *local_250;
  FVirtualTextureLocalTileRequest local_248;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  FColor_u_0 local_238;
  Type local_234;
  TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> local_230;
  FRDGScope *local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  longlong local_208;
  FName local_200;
  FName local_1f0;
  FName local_1e0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1d0;
  char local_1c0;
  int local_1b8;
  int local_1b4;
  FName local_1b0;
  longlong local_1a8;
  FVirtualTextureUpdateSettings *local_1a0;
  FStatMessage local_198;
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  <lambda_1> local_128;
  <lambda_1> local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_e8;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  pFVar42 = (FRDGBuilder *)CONCAT44(in_register_00000084,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1a0 = param_4;
  local_234 = (Type)param_3;
  local_260 = this;
  local_250 = pFVar42;
  local_230.Ptr = (FVirtualTextureUpdater *)param_1;
  bVar21 = IsInRenderingThread();
  if ((!bVar21) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0xbb3,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
  }
  if ((this->bUpdating != false) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bUpdating",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0xbb4,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
  }
  if (((this->Producers).NumPendingCallbacks != 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Producers.HasPendingCallbacks() == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0xbb5,
                          L"FVirtualTextureSystem::CallPendingCallbacks(), called in UpdateAllPrimitiveSceneInfos(), must run before FVirtualTextureSystem::BeginUpdate()"
                         ), bVar21)) {
    pcVar3 = (code *)swi(3);
    TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
  }
  AllocateResources(this,pFVar42);
  if (in_stack_00000030[1] == '\0') {
    param_1->_padding_ = 0;
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
           (FVirtualTextureUpdater *)param_1;
  }
  pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&pFVar42->_padding_,(FRDGScope **)pFVar42);
  pFVar42->_padding_ = (longlong)pFVar27;
  uVar40 = (ulonglong)(pFVar27->Impl).Impl.TypeIndex;
  local_228 = pFVar27;
  if ((3 < uVar40) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar40])(&pFVar27->Impl);
  (pFVar27->Impl).Impl._padding_ = (longlong)"VirtualTextureSystem_Update";
  FCsvProfiler::BeginExclusiveStat("VirtualTextureSystem_Update",(char *)0x0);
  (pFVar27->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&pFVar42->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)pFVar42->_padding_,false);
    FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)pFVar42->_padding_);
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3008,"FVirtualTextureSystem::BeginUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xbc0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3008);
  }
  pFVar39 = (FVirtualTextureUpdater *)0x0;
  uVar45 = 0;
  FVar29 = StatPtr_STAT_VirtualTextureSystem_Update;
  if (StatPtr_STAT_VirtualTextureSystem_Update ==
      (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)0x0) {
    pFVar28 = ::FName::FName(&local_108,"STAT_VirtualTextureSystem_Update");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureSystem_Update,
                        *pFVar28,L"VirtualTextureSystem Update","STATGROUP_VirtualTexturing",
                        "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar41 = *(FName *)FVar29;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_1458df4bf:
    bVar11 = false;
    local_258 = local_200;
    FVar41 = local_200;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_220.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xbc1);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1458df4bf;
    local_258 = FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar11 = true;
  }
  cVar1 = *(char *)((longlong)&pFVar42->_padding_ + 6);
  local_1c0 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((pFVar42->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xbc3;
      local_c8 = 0x54bdadc0;
      uStack_c4 = 1;
      ::Desc._padding_._0_4_ = 0x54bdadc0;
      ::Desc._padding_._4_4_ = uStack_cc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_VirtualTextureB;
      ::Desc._padding_ = (longlong)u_VirtualTextureB;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualTextureSystem::BeginUpdate'::__l33::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_e8._Myfirst._Val = &::Desc;
    local_1d0.State = (FRDGScopeState *)pFVar42;
    pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar42->_padding_,(FRDGScope **)pFVar42);
    pFVar42->_padding_ = (longlong)pFVar27;
    local_1d0.Scope = pFVar27;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
              (&(pFVar27->Impl).Impl,(FRDGScopeState *)pFVar42,&local_e8);
    if (*(char *)((longlong)&pFVar42->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)pFVar42->_padding_,false);
      FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)pFVar42->_padding_);
    }
    local_1c0 = '\x01';
  }
  FVar30 = StatPtr_STAT_ProcessRequests_UpdateAdaptiveAllocations;
  if (StatPtr_STAT_ProcessRequests_UpdateAdaptiveAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_UpdateAdaptiveAllocations>)0x0) {
    pFVar28 = ::FName::FName(&local_100,"STAT_ProcessRequests_UpdateAdaptiveAllocations");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_UpdateAdaptiveAllocations>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ProcessRequests_UpdateAdaptiveAllocations,*pFVar28,
                        L"Finalize Adaptive Requests","STATGROUP_VirtualTexturing",
                        "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar38 = *(FName *)FVar30;
  bVar24 = false;
  bVar7 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar23 = false;
  bVar22 = false;
  FVar36 = FVar38.ComparisonIndex.Value;
  uVar25 = FVar38.Number;
  if ((FVar36.Value == 0) && (uVar25 == 0)) {
LAB_1458df6a2:
    bVar7 = bVar22;
    bVar24 = bVar23;
    bVar23 = false;
    FVar38 = local_1f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar24 = false;
      bVar7 = true;
      bVar23 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar36.Value;
        local_218.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xbc8);
        bVar24 = true;
        bVar7 = true;
        bVar23 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1458df6a2;
    local_270 = FVar36.Value;
    uStack_26c = uVar25;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar23 = true;
  }
  pFVar42 = local_250;
  pFVar19 = local_260;
  uVar25 = 0;
  pFVar33 = pFVar39;
  pFVar44 = pFVar39;
  if (0 < (this->AdaptiveVTs).ArrayNum) {
    do {
      uVar37 = (uint)pFVar44;
      uVar47 = uVar45;
      if ((int)uVar37 < (pFVar19->AdaptiveVTs).ArrayNum) {
        uVar47 = ~uVar37 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
        return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
               TVar26.Ptr;
      }
      if (*(longlong *)
           ((pFVar19->AdaptiveVTs).AllocatorInstance.Data +
           (longlong)&(pFVar33->Settings).bEnableAsyncTasks) != 0) {
        uVar47 = uVar25;
        if ((int)uVar37 < (pFVar19->AdaptiveVTs).ArrayNum) {
          uVar47 = ~uVar37 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar3 = (code *)swi(3);
          TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
          return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
                 TVar26.Ptr;
        }
        FAdaptiveVirtualTexture::UpdateAllocations
                  (*(FAdaptiveVirtualTexture **)
                    ((pFVar19->AdaptiveVTs).AllocatorInstance.Data +
                    (longlong)&(pFVar33->Settings).bEnableAsyncTasks),pFVar19,
                   (FRHICommandListImmediate *)pFVar42->_padding_,pFVar19->Frame);
      }
      FVar41 = local_258;
      this = local_260;
      pFVar33 = (FVirtualTextureUpdater *)&(pFVar33->Settings).NumFeedbackTasks;
      pFVar44 = (FVirtualTextureUpdater *)(ulonglong)(uVar37 + 1);
    } while ((int)(uVar37 + 1) < (pFVar19->AdaptiveVTs).ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  if (this->bFlushCaches != false) {
    FVar31 = StatPtr_STAT_FlushCache;
    if (StatPtr_STAT_FlushCache == (FThreadSafeStaticStat<FStat_STAT_FlushCache>)0x0) {
      pFVar28 = ::FName::FName(&local_f8,"STAT_FlushCache");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_FlushCache>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushCache,*pFVar28,
                          L"Flush Cache","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar38 = *(FName *)FVar31;
    bVar23 = false;
    bVar8 = false;
    local_1e0.ComparisonIndex.Value = 0;
    local_1e0.Number = 0;
    bVar7 = false;
    bVar24 = false;
    bVar22 = false;
    FVar36 = FVar38.ComparisonIndex.Value;
    uVar47 = FVar38.Number;
    if ((FVar36.Value == 0) && (uVar47 == 0)) {
LAB_1458df90a:
      if (FThreadStats::bPrimaryEnable != false) {
        FVar32 = StatPtr_STAT_NumFlushCache;
        if (StatPtr_STAT_NumFlushCache == (FThreadSafeStaticStat<FStat_STAT_NumFlushCache>)0x0) {
          pFVar28 = ::FName::FName(&local_f0,"STAT_NumFlushCache");
          FVar32 = (FThreadSafeStaticStat<FStat_STAT_NumFlushCache>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumFlushCache,*pFVar28,
                              L"Num flush caches","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                              L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar38 = *(FName *)FVar32;
        uVar47 = FVar38.Number;
        uStack_26c = uVar47;
        if (((FVar38 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_270 = FVar38.ComparisonIndex.Value.Value;
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_198.NameAndInfo.Number = uVar47 & 0xffffafff | 0xa000;
          local_198.StatData.Pad[0] = '\x01';
          local_198.StatData.Pad[1] = '\0';
          local_198.StatData.Pad[2] = '\0';
          local_198.StatData.Pad[3] = '\0';
          local_198.StatData.Pad[4] = '\0';
          local_198.StatData.Pad[5] = '\0';
          local_198.StatData.Pad[6] = '\0';
          local_198.StatData.Pad[7] = '\0';
          local_1b0 = FVar38;
          local_198.NameAndInfo.Index.Value = FVar38.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_198);
          FStatsTrace::Add(&local_1b0,1);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_238.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_238._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
        bVar23 = false;
        bVar8 = true;
        bVar24 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_210.ComparisonIndex.Value = FVar36.Value;
          local_210.Number = uVar47;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_210,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0xbd4);
          bVar23 = true;
          bVar8 = true;
          bVar24 = true;
          bVar22 = true;
        }
      }
      bVar7 = false;
      if (FThreadStats::bPrimaryEnable != false) {
        local_270 = FVar36.Value;
        uStack_26c = uVar47;
        local_1e0 = FVar38;
        FThreadStats::AddMessage(FVar38,CycleScopeStart);
        bVar7 = true;
        bVar24 = bVar23;
        bVar22 = bVar8;
        goto LAB_1458df90a;
      }
    }
    local_270 = 0;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      local_208 = 0;
      pFVar33 = pFVar39;
      do {
        lVar35 = local_208;
        uVar37 = (uint)pFVar33;
        uVar47 = uVar25;
        if ((int)uVar37 < (this->PhysicalSpaces).ArrayNum) {
          uVar47 = ~uVar37 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar3 = (code *)swi(3);
          TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
          return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
                 TVar26.Ptr;
        }
        pTVar18 = CVarVTProduceLockedTilesOnFlush.Ref;
        lVar48 = *(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar35);
        local_1a8 = lVar48;
        if (lVar48 != 0) {
          bVar23 = IsInParallelRenderingThread();
          if ((!bVar23) &&
             (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007955>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
            pcVar3 = (code *)swi(3);
            TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
            return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
                   TVar26.Ptr;
          }
          if (pTVar18->ShadowedValue[1] != 0) {
            local_98._0_8_ = 0;
            local_98._8_8_ = 0;
            local_78 = (uint *)0x0;
            local_70 = 0;
            local_6c = 0x80;
            local_68 = 0xffffffff;
            local_64 = 0;
            local_58 = (ForElementType<FSetElementId>)0x0;
            local_50 = 0;
            FTexturePagePool::GetAllLockedPages
                      ((FTexturePagePool *)(lVar48 + 0x58),this,
                       (TSet<FVirtualTextureLocalTile,DefaultKeyFuncs<FVirtualTextureLocalTile,0>,FDefaultSetAllocator>
                        *)local_98);
            uStack_17c = 1;
            uStack_16c = uVar45;
            uStack_180 = uVar45;
            local_168 = uVar25;
            if (local_70 != 0) {
              puVar43 = (uint *)(local_98 + 0x10);
              if (local_78 != (uint *)0x0) {
                puVar43 = local_78;
              }
              uVar47 = *puVar43;
              pFVar33 = pFVar39;
              pFVar44 = pFVar39;
              local_168 = 0;
              uStack_180 = 0;
              while (uVar47 == 0) {
                iVar46 = (int)pFVar33;
                local_168 = (int)pFVar44 + 0x20;
                pFVar44 = (FVirtualTextureUpdater *)(ulonglong)local_168;
                uStack_180 = iVar46 + 1;
                pFVar33 = (FVirtualTextureUpdater *)(ulonglong)uStack_180;
                uStack_16c = local_70;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)uStack_180) goto LAB_1458dfc10;
                uVar47 = puVar43[(longlong)iVar46 + 1];
              }
              uStack_17c = -uVar47 & uVar47;
              uVar40 = (ulonglong)uStack_17c * 2 + 1;
              lVar35 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              local_1b8 = (int)lVar35;
              uStack_16c = (local_168 - 1) + local_1b8;
              if ((int)local_70 < (int)uStack_16c) {
                uStack_16c = local_70;
              }
            }
LAB_1458dfc10:
            local_188 = (longlong *)local_98;
            uStack_164 = local_9c;
            uVar47 = local_70 & 0xffffffe0;
            iStack_160 = local_98._8_4_ - local_64;
            local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            TStack_150._padding_ = CONCAT44(uStack_17c,uStack_180);
            uStack_170 = 0xffffffff;
            TStack_150.CurrentBitIndex = uStack_16c;
            TStack_150.UnvisitedBitMask = 0xffffffff;
            iVar46 = (int)local_70 >> 5;
            TStack_150._28_4_ = local_9c;
            TStack_150.BaseBitIndex = local_168;
            uStack_130 = CONCAT44(uStack_15c,iStack_160);
            bVar34 = (byte)local_70;
            local_268 = local_70;
            local_158 = local_188;
            TStack_150.Array = local_178;
            if (((int)local_70 < 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar23)) {
              pcVar3 = (code *)swi(3);
              TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
              return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)
                     TVar26.Ptr;
            }
            this = local_260;
            uVar37 = local_268;
            if (local_268 != local_70) {
              puVar43 = (uint *)(local_98 + 0x10);
              if (local_78 != (uint *)0x0) {
                puVar43 = local_78;
              }
              uVar37 = -1 << (bVar34 & 0x1f) & puVar43[iVar46];
              while (uVar37 == 0) {
                lVar35 = (longlong)iVar46;
                uVar47 = uVar47 + 0x20;
                iVar46 = iVar46 + 1;
                uVar37 = local_70;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar46)
                goto LAB_1458dfd70;
                uVar37 = puVar43[lVar35 + 1];
              }
              uVar40 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
              lVar35 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              local_1b4 = (int)lVar35;
              uVar37 = (uVar47 - 1) + local_1b4;
              if ((int)local_70 < (int)uVar37) {
                uVar37 = local_70;
              }
            }
LAB_1458dfd70:
            while( true ) {
              plVar20 = local_158;
              if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
                local_285[1] = false;
                `TSparseArray<TSparseSetElement<FVirtualTextureLocalTile>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_285 + 1);
              }
              if (((TStack_150.CurrentBitIndex == uVar37) &&
                  (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10)))
                 && (plVar20 == (longlong *)local_98)) break;
              local_248.PackedValue =
                   *(ulonglong *)(*plVar20 + (longlong)TStack_150.CurrentBitIndex * 0x10) &
                   0xfffffffffffffff | 0x4000000000000000;
              FVirtualTextureLocalTileRequest::ValidatePriorities
                        ((FVirtualTextureLocalTileRequest *)&local_248._s_1);
              local_285[0] = false;
              this_03 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                        ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                                  (&this->MappedTilesToProduce,
                                   (int)((local_248.PackedValue & 0xfffffffffffffff) >> 0x20) * 0x17
                                   + (int)(local_248.PackedValue & 0xfffffffffffffff),&local_248,
                                   local_285);
              if (local_285[0] != false) {
                FVirtualTextureLocalTileRequest::MergeWith
                          ((FVirtualTextureLocalTileRequest *)&this_03->_s_1,&local_248);
              }
              TStack_150.UnvisitedBitMask =
                   TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
            }
            local_50 = 0;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_58);
            }
            TSparseArray<TSparseSetElement<FVirtualTextureLocalTile>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FVirtualTextureLocalTile>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FVirtualTextureLocalTile>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98);
            lVar48 = local_1a8;
            uVar37 = local_270;
          }
          FTexturePagePool::EvictAllPages((FTexturePagePool *)(lVar48 + 0x58),this);
          lVar35 = local_208;
        }
        local_270 = uVar37 + 1;
        pFVar33 = (FVirtualTextureUpdater *)(ulonglong)local_270;
        local_208 = lVar35 + 8;
        FVar41 = local_258;
      } while ((int)local_270 < (this->PhysicalSpaces).ArrayNum);
    }
    this->bFlushCaches = false;
    if (bVar22) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(local_1e0,CycleScopeEnd);
    }
  }
  DestroyPendingVirtualTextures(this,false);
  ReleasePendingSpaces(this,false);
  if (*(int *)&(this->AllocatedVTs).field_0x8 == *(int *)&(this->AllocatedVTs).field_0x34) {
    TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
    ::Reset(&this->MappedTilesToProduce);
    TVar26.Ptr = local_230.Ptr;
    ((local_230.Ptr)->Settings).bEnableAsyncTasks = false;
    ((local_230.Ptr)->Settings).bEnablePageRequests = false;
    ((local_230.Ptr)->Settings).bEnableFeedback = false;
    ((local_230.Ptr)->Settings).bEnableFeedbackProduce = false;
    ((local_230.Ptr)->Settings).bEnablePlayback = false;
    ((local_230.Ptr)->Settings).bParallelFeedbackTasks = false;
    ((local_230.Ptr)->Settings).bForceContinuousUpdate = false;
    ((local_230.Ptr)->Settings).bForceSyncPageUpdate = false;
    if (local_1c0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1d0);
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar11) {
      FThreadStats::AddMessage(FVar41,CycleScopeEnd);
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar27 = local_228;
    pFVar42 = local_250;
    if (local_228 == (FRDGScope *)0x0) {
      return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
    }
    if (*(char *)((longlong)&local_250->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_228,(FRHIComputeCommandList *)local_250->_padding_);
      local_128.RHICmdList = (FRHIComputeCommandList *)pFVar42->_padding_;
      local_128.bPreScope = local_280;
      local_280[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar27->Impl,&local_128);
    }
    FRDGScope::ImmediateEnd(pFVar27,(FRDGScopeState *)pFVar42);
    *(uint *)&pFVar42->_padding_ = (uint)pFVar42->_padding_ & 0xfffffff7;
    pFVar42->_padding_ = *(longlong *)pFVar42->_padding_;
    return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
  }
  if (((local_1a0 != (FVirtualTextureUpdateSettings *)0x0) &&
      (this_04 = (FScene *)(**(code **)(*(longlong *)local_1a0 + 8))(), this = local_260,
      this_04 != (FScene *)0x0)) &&
     (this_00 = (FRHIComputeCommandList *)local_250->_padding_, GVirtualTextureFeedback._232_4_ != 0
     )) {
    FVar2.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)
                       *(uint *)(&GVirtualTextureFeedback.field_0x28 +
                                (ulonglong)(uint)GVirtualTextureFeedback._240_4_ * 0x18));
    bVar24 = FFeedbackGPUFencePool::Poll
                       ((FFeedbackGPUFencePool *)GVirtualTextureFeedback._224_8_,
                        (FRHICommandList *)this_00,GVirtualTextureFeedback._240_4_);
    FRHIComputeCommandList::SetGPUMask(this_00,FVar2);
    this = local_260;
    if (bVar24) {
      FScene::FlushDirtyRuntimeVirtualTextures(this_04);
      this = local_260;
    }
  }
  pFVar33 = ::operator_new(0x60);
  if (pFVar33 != (FVirtualTextureUpdater *)0x0) {
    (pFVar33->Settings).bEnableAsyncTasks = false;
    (pFVar33->Settings).bEnablePageRequests = false;
    (pFVar33->Settings).bEnableFeedback = false;
    (pFVar33->Settings).bEnableFeedbackProduce = false;
    (pFVar33->Settings).bEnablePlayback = false;
    (pFVar33->Settings).bParallelFeedbackTasks = false;
    (pFVar33->Settings).bForceContinuousUpdate = false;
    (pFVar33->Settings).bForceSyncPageUpdate = false;
    (pFVar33->Settings).NumFeedbackTasks = 0;
    (pFVar33->Settings).NumGatherTasks = 0;
    (pFVar33->Settings).MaxGatherPagesBeforeFlush = 0;
    (pFVar33->Settings).MaxRVTPageUploads = 0;
    (pFVar33->Settings).MaxSVTPageUploads = 0;
    (pFVar33->Settings).MaxPagesProduced = 0;
    *(undefined8 *)&(pFVar33->Settings).MaxContinuousUpdates = 0;
    (pFVar33->Allocator).Next =
         (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
         0x0;
    pFVar33->MergedRequestList = (FUniqueRequestList *)0x0;
    (pFVar33->FeedbackMapResult).Data = (TIntPoint<unsigned_int> *)0x0;
    (pFVar33->FeedbackMapResult).Size = 0;
    (pFVar33->FeedbackMapResult).MapHandle = 0;
    (pFVar33->AsyncTask).Pimpl.Reference = (FTaskBase *)0x0;
    pFVar33->FeatureLevel = ES2_REMOVED;
    pFVar33->bAsyncTaskAllowed = false;
    *(undefined3 *)&pFVar33->field_0x55 = 0;
    pFVar33->PageUploadBudgetRVT = 0;
    pFVar33->PageUploadBudgetSVT = 0;
    FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(&pFVar33->Settings);
    (pFVar33->Allocator).Next =
         (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
         0x0;
    pFVar33->MergedRequestList = (FUniqueRequestList *)0x0;
    (pFVar33->FeedbackMapResult).Data = (TIntPoint<unsigned_int> *)0x0;
    (pFVar33->FeedbackMapResult).Size = 0;
    (pFVar33->FeedbackMapResult).MapHandle = -1;
    (pFVar33->AsyncTask).Pimpl.Reference = (FTaskBase *)0x0;
    pFVar33->FeatureLevel = Num;
    pFVar33->bAsyncTaskAllowed = false;
    pFVar33->PageUploadBudgetRVT = 0;
    pFVar33->PageUploadBudgetSVT = 0;
    pFVar39 = pFVar33;
  }
  iVar46 = *(int *)(in_stack_00000030 + 0x20);
  cVar1 = in_stack_00000030[1];
  cVar12 = in_stack_00000030[2];
  cVar13 = in_stack_00000030[3];
  cVar14 = in_stack_00000030[4];
  cVar15 = in_stack_00000030[5];
  cVar16 = in_stack_00000030[6];
  cVar17 = in_stack_00000030[7];
  uVar4 = *(undefined8 *)(in_stack_00000030 + 8);
  uVar5 = *(undefined8 *)(in_stack_00000030 + 0x10);
  uVar6 = *(undefined8 *)(in_stack_00000030 + 0x18);
  (pFVar39->Settings).bEnableAsyncTasks = (bool)in_stack_00000030[0];
  (pFVar39->Settings).bEnablePageRequests = (bool)cVar1;
  (pFVar39->Settings).bEnableFeedback = (bool)cVar12;
  (pFVar39->Settings).bEnableFeedbackProduce = (bool)cVar13;
  (pFVar39->Settings).bEnablePlayback = (bool)cVar14;
  (pFVar39->Settings).bParallelFeedbackTasks = (bool)cVar15;
  (pFVar39->Settings).bForceContinuousUpdate = (bool)cVar16;
  (pFVar39->Settings).bForceSyncPageUpdate = (bool)cVar17;
  (pFVar39->Settings).NumFeedbackTasks = (int)uVar4;
  (pFVar39->Settings).NumGatherTasks = (int)((ulonglong)uVar4 >> 0x20);
  (pFVar39->Settings).MaxGatherPagesBeforeFlush = (int)uVar5;
  (pFVar39->Settings).MaxRVTPageUploads = (int)((ulonglong)uVar5 >> 0x20);
  (pFVar39->Settings).MaxSVTPageUploads = (int)uVar6;
  (pFVar39->Settings).MaxPagesProduced = (int)((ulonglong)uVar6 >> 0x20);
  (pFVar39->Settings).MaxContinuousUpdates = iVar46;
  pFVar39->FeatureLevel = local_234;
  pTVar18 = CVarVTAsyncPageRequestTask.Ref;
  if (*in_stack_00000030 != '\0') {
    bVar24 = IsInParallelRenderingThread();
    if ((!bVar24) &&
       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
      pcVar3 = (code *)swi(3);
      TVar26.Ptr = (FVirtualTextureUpdater *)(*pcVar3)();
      return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
    }
    if (pTVar18->ShadowedValue[1] != 0) {
      bVar24 = true;
      goto LAB_1458e0125;
    }
  }
  bVar24 = false;
LAB_1458e0125:
  pFVar42 = local_250;
  pFVar39->bAsyncTaskAllowed = bVar24;
  pFVar39->PageUploadBudgetRVT = *(int *)(in_stack_00000030 + 0x14);
  pFVar39->PageUploadBudgetSVT = *(int *)(in_stack_00000030 + 0x18);
  if (bVar24 != false) {
    BeginUpdate(this,local_250,pFVar39);
  }
  TVar26.Ptr = local_230.Ptr;
  *(FVirtualTextureUpdater **)&(local_230.Ptr)->Settings = pFVar39;
  if (local_1c0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1d0);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar27 = local_228;
  if (local_228 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&pFVar42->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_228,(FRHIComputeCommandList *)pFVar42->_padding_);
      local_118.RHICmdList = (FRHIComputeCommandList *)pFVar42->_padding_;
      local_118.bPreScope = local_278;
      local_278[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar27->Impl,&local_118);
    }
    FRDGScope::ImmediateEnd(pFVar27,(FRDGScopeState *)pFVar42);
    *(uint *)&pFVar42->_padding_ = (uint)pFVar42->_padding_ & 0xfffffff7;
    pFVar42->_padding_ = *(longlong *)pFVar42->_padding_;
  }
  return (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_>)TVar26.Ptr;
}

// CallPendingCallbacks @ 1458e1300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::CallPendingCallbacks(FVirtualTextureSystem *this)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2987,"FVirtualTextureSystem::CallPendingCallbacks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xbab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2987);
  }
  FVar8 = StatPtr_STAT_VirtualTextureSystem_Update;
  if (StatPtr_STAT_VirtualTextureSystem_Update ==
      (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_VirtualTextureSystem_Update");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureSystem_Update,
                       *pFVar7,L"VirtualTextureSystem Update","STATGROUP_VirtualTexturing",
                       "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xbac);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1458e1498;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1458e1498:
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  FVirtualTextureProducerCollection::CallPendingCallbacks(&this->Producers);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DestroyAdaptiveVirtualTexture @ 1458e9250

void __thiscall
FVirtualTextureSystem::DestroyAdaptiveVirtualTexture
          (FVirtualTextureSystem *this,IAdaptiveVirtualTexture *param_1)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x336,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  iVar3 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((iVar3 < 0) || ((this->AdaptiveVTs).ArrayNum <= iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdaptiveVTs.IsValidIndex(AdaptiveVT->GetSpaceID())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x338,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->AdaptiveVTs).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(IAdaptiveVirtualTexture **)
       ((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdaptiveVTs[AdaptiveVT->GetSpaceID()] == AdaptiveVT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x339,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->AdaptiveVTs).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = 0;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,this);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// DestroyPendingVirtualTextures @ 1458e9610

void __thiscall
FVirtualTextureSystem::DestroyPendingVirtualTextures(FVirtualTextureSystem *this,bool param_1)

{
  int *piVar1;
  TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 local_res20 [8];
  uint local_80 [2];
  longlong *local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  ForAnyElementType local_58;
  int local_50;
  int aiStack_4c [3];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId751,"FVirtualTextureSystem::DestroyPendingVirtualTextures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x2ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId751);
  }
  uVar17 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  aiStack_4c[0] = 0;
  if (param_1) {
    pTVar2 = &this->PendingDeleteAllocatedVTs;
    piVar1 = &(this->PendingDeleteAllocatedVTs).ArrayMax;
    if ((TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *)&local_58 != pTVar2) {
      local_58.Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_50 = (this->PendingDeleteAllocatedVTs).ArrayNum;
      aiStack_4c[0] = *piVar1;
      *piVar1 = 0;
      (this->PendingDeleteAllocatedVTs).ArrayNum = 0;
    }
    (this->PendingDeleteAllocatedVTs).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    iVar7 = VirtualTextureScalability::GetMaxAllocatedVTReleasedPerFrame();
    uVar16 = this->Frame;
    uVar21 = uVar17;
    if (0 < (this->PendingDeleteAllocatedVTs).ArrayNum) {
      do {
        uVar14 = (uint)uVar17;
        uVar15 = 0;
        if ((int)uVar14 < (this->PendingDeleteAllocatedVTs).ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar10 = *(longlong *)((this->PendingDeleteAllocatedVTs).AllocatorInstance.Data + uVar21);
        local_70 = lVar10;
        if ((*(int *)(lVar10 + 0x68) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocatedVT->NumRefs == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x301,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar7 < 1) || (local_50 < iVar7)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (((*(byte *)(lVar10 + 0x4c) & 1) != 0) ||
           ((*(int *)(local_70 + 100) + 0x3cU <= uVar16 && (bVar6)))) {
          if ((local_58.Data <= (FScriptContainerElement *)&local_70) &&
             (((FScriptContainerElement *)&local_70 < local_58.Data + (longlong)aiStack_4c[0] * 8 &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_50 == aiStack_4c[0]) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_58,aiStack_4c);
          }
          lVar10 = (longlong)local_50;
          local_50 = local_50 + 1;
          *(longlong *)(local_58.Data + lVar10 * 8) = local_70;
          uVar15 = 0;
          if ((int)uVar14 < (this->PendingDeleteAllocatedVTs).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (this->PendingDeleteAllocatedVTs).ArrayNum;
          pFVar18 = (this->PendingDeleteAllocatedVTs).AllocatorInstance.Data;
          iVar9 = ~uVar14 + iVar8;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(pFVar18 + (longlong)(int)uVar14 * 8,pFVar18 + (longlong)(iVar8 - iVar9) * 8,
                    (longlong)iVar9 << 3);
          }
          piVar1 = &(this->PendingDeleteAllocatedVTs).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        else {
          uVar17 = (ulonglong)(uVar14 + 1);
          uVar21 = uVar21 + 8;
        }
      } while ((int)uVar17 < (this->PendingDeleteAllocatedVTs).ArrayNum);
    }
  }
  iVar7 = local_50;
  pFVar18 = local_58.Data + (longlong)local_50 * 8;
  FVar19.Data = local_58.Data;
  local_60 = pFVar18;
  do {
    uVar17 = 0;
    local_68 = FVar19.Data;
    if (local_50 != iVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<IAllocatedVirtualTexture_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar19.Data == pFVar18) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pFVar3 = (this->AllocatedVTsToMap).AllocatorInstance.Data;
    local_78 = *(longlong **)FVar19.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar3 + (longlong)(this->AllocatedVTsToMap).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->AllocatedVTsToMap).ArrayNum;
    plVar11 = local_78;
    if (iVar8 != 0) {
      pFVar18 = (this->AllocatedVTsToMap).AllocatorInstance.Data;
      bVar6 = *(longlong **)pFVar18 != local_78;
      uVar21 = uVar17;
      uVar20 = uVar17;
      do {
        uVar15 = (uint)uVar17;
        uVar16 = uVar15;
        do {
          uVar21 = uVar21 + 1;
          uVar16 = uVar16 + 1;
          uVar17 = (ulonglong)uVar16;
          if ((longlong)iVar8 <= (longlong)uVar21) break;
        } while (bVar6 == (*(longlong **)(pFVar18 + uVar21 * 8) != plVar11));
        if (bVar6 != false) {
          uVar14 = (uint)uVar20;
          if (uVar14 != uVar15) {
            memmove(pFVar18 + (longlong)(int)uVar14 * 8,pFVar18 + (longlong)(int)uVar15 * 8,
                    (longlong)(int)(uVar16 - uVar15) << 3);
            plVar11 = local_78;
          }
          uVar20 = (ulonglong)(uVar14 + (uVar16 - uVar15));
        }
        bVar6 = (bool)(bVar6 ^ 1);
      } while ((longlong)uVar21 < (longlong)iVar8);
      (this->AllocatedVTsToMap).ArrayNum = (int)uVar20;
      pFVar18 = local_60;
      FVar19.Data = local_68;
      if ((1 < iVar8 - (int)uVar20) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocatedVTsToMap.Remove(AllocatedVT) <= 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                             ,0x319,L""), plVar11 = local_78, pFVar18 = local_60,
         FVar19.Data = local_68, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = TSet<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
                      *)&this->AllocatedVTs,(FAllocatedVTDescription *)(plVar11 + 1));
    if ((iVar8 != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocatedVTs.Remove(AllocatedVT->GetDescription()) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                           ,0x31a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = (**(code **)*local_78)();
    if (*(int *)&(this->PersistentVTMap).field_0x8 != *(int *)&(this->PersistentVTMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->PersistentVTMap).field_0x40;
      puVar12 = &(this->PersistentVTMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar12 = puVar4;
      }
      iVar8 = *(int *)(puVar12 +
                      (ulonglong)(*(int *)&(this->PersistentVTMap).field_0x48 - 1U & uVar16) * 4);
      if (iVar8 != -1) {
        do {
          lVar10 = *(longlong *)&this->PersistentVTMap + (longlong)iVar8 * 0x18;
          if (*(uint *)(*(longlong *)&this->PersistentVTMap + (longlong)iVar8 * 0x18) == uVar16) {
            puVar13 = (undefined8 *)(lVar10 + 8);
            if (lVar10 == 0) {
              puVar13 = (undefined8 *)0x0;
            }
            if (((puVar13 != (undefined8 *)0x0) && ((longlong *)*puVar13 == local_78)) &&
               (local_80[0] = (**(code **)*local_78)(),
               *(int *)&(this->PersistentVTMap).field_0x8 !=
               *(int *)&(this->PersistentVTMap).field_0x34)) {
              TSet<TTuple<unsigned_int,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<unsigned_int,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<unsigned_int,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
                          *)&this->PersistentVTMap,local_80[0],local_80);
            }
            break;
          }
          iVar8 = *(int *)(lVar10 + 0x10);
        } while (iVar8 != -1);
      }
    }
    (**(code **)(*local_78 + 0x50))(local_78,this);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x60))(local_78,1);
    }
    FVar19.Data = FVar19.Data + 8;
  } while( true );
}

// DestroyVirtualTexture @ 1458e9db0

void __thiscall
FVirtualTextureSystem::DestroyVirtualTexture
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar6;
  IAllocatedVirtualTexture *local_res10 [3];
  
  this_00 = &this->Mutex;
  local_res10[0] = param_1;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  iVar5 = local_res10[0]->NumRefs + -1;
  local_res10[0]->NumRefs = iVar5;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewNumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x2e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar5 == 0) {
    pTVar6 = &this->PendingDeleteAllocatedVTs;
    local_res10[0]->FrameDeleted = this->Frame;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2 + (longlong)(this->PendingDeleteAllocatedVTs).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->PendingDeleteAllocatedVTs).ArrayNum;
    piVar1 = &(this->PendingDeleteAllocatedVTs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->PendingDeleteAllocatedVTs).ArrayNum = iVar5 + 1;
    *(IAllocatedVirtualTexture **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_res10[0];
  }
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// DrawResidencyHud @ 1458eaf90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::DrawResidencyHud
          (FVirtualTextureSystem *this,UCanvas *param_1,APlayerController *param_2)

{
  float fVar1;
  int iVar2;
  FVirtualTexturePhysicalSpace *this_00;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  TVector2<double>_u_0 local_58;
  double local_48;
  double dStack_40;
  
  pTVar4 = CVarVTResidencyShow.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar4->ShadowedValue[0] != 0) {
    iVar8 = 0;
    uVar7 = 0;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->PhysicalSpaces).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = (this->PhysicalSpaces).ArrayNum;
        iVar10 = iVar8 + 1;
        if (*(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar9) == 0) {
          iVar10 = iVar8;
        }
        iVar8 = iVar10;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar7 < iVar2);
      if (iVar8 != 0) {
        fVar1 = param_1->ClipY;
        iVar8 = (int)param_1->ClipX / 300;
        iVar10 = 1;
        if (1 < iVar8) {
          iVar10 = iVar8;
        }
        iVar8 = 0;
        uVar7 = 0;
        if (0 < iVar2) {
          lVar9 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar7 < (this->PhysicalSpaces).ArrayNum) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_00 = *(FVirtualTexturePhysicalSpace **)
                       ((this->PhysicalSpaces).AllocatorInstance.Data + lVar9);
            if ((this_00 != (FVirtualTexturePhysicalSpace *)0x0) && ((int)this_00->_padding_ != -1))
            {
              local_58._s_0.X = (double)((iVar8 % iVar10) * 300 + 0x19);
              local_48 = local_58._s_0.X + 250.0;
              local_58._s_0.Y = (double)((iVar8 / iVar10) * 0xaf + 0x73);
              dStack_40 = local_58._s_0.Y + 125.0;
              if ((double)(int)fVar1 < local_58._s_0.Y) {
                return;
              }
              FVirtualTexturePhysicalSpace::DrawResidencyGraph
                        (this_00,param_1->Canvas,(TBox2<double> *)&local_58._s_0,iVar8 == 0);
              iVar8 = iVar8 + 1;
            }
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 8;
          } while ((int)uVar7 < (this->PhysicalSpaces).ArrayNum);
        }
      }
    }
  }
  return;
}

// DumpFromConsole @ 1458eb260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::DumpFromConsole(FVirtualTextureSystem *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Spaces).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Spaces).AllocatorInstance.Data + lVar6);
      if (lVar1 != 0) {
        if (3 < (byte)LogConsoleResponse._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        }
        FVirtualTextureAllocator::DumpToConsole((FVirtualTextureAllocator *)(lVar1 + 0x38),false);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Spaces).ArrayNum);
  }
  return;
}

// DumpPoolUsageFromConsole @ 1458eb340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::DumpPoolUsageFromConsole(FVirtualTextureSystem *this)

{
  undefined4 uVar1;
  code *pcVar2;
  FIdentityFunctor FVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  FProducerEntry *this_00;
  byte bVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  FIdentityFunctor local_248;
  undefined1 local_247 [3];
  uint local_244;
  undefined1 local_240 [4];
  FVirtualTextureProducerHandle local_23c;
  longlong *local_238;
  uint uStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  FVirtualTextureSystem *local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  int local_1e0;
  int local_1dc;
  TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_> local_1d8;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FString local_128 [2];
  undefined4 local_fc;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_244 = 0;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    local_200 = 0;
    local_1f8 = 0;
    local_208 = this;
    do {
      lVar10 = local_1f8;
      lVar12 = local_200;
      uVar20 = 0;
      iVar14 = (this->PhysicalSpaces).ArrayNum;
      uVar13 = ~local_244;
      uVar19 = 0;
      if ((int)local_244 < iVar14) {
        uVar19 = uVar13 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_258 = (longlong)(int)local_244;
        local_250 = (longlong)iVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar10) != 0) {
        iVar14 = (this->PhysicalSpaces).ArrayNum;
        uVar19 = 0;
        uVar7 = uVar19;
        if ((int)local_244 < iVar14) {
          uVar7 = uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_258 = (longlong)(int)local_244;
          local_250 = (longlong)iVar14;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar12 = *(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar12 * 8);
        if (3 < (byte)LogVirtualTexturing._0_1_) {
          local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(lVar12 + 0x20));
          local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)(lVar12 + 0x20));
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
        }
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        FTexturePagePool::CollectProducerCounts
                  ((FTexturePagePool *)(lVar12 + 0x58),
                   (TMap<unsigned_int,UE::Math::TIntVector2<unsigned_int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TIntVector2<unsigned_int>,0>_>
                    *)local_88);
        uVar13 = local_60;
        local_d8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)0x0;
        local_b8 = (ForElementType<unsigned_int>)0x0;
        local_b0 = 0;
        uStack_22c = 1;
        local_a4 = 0;
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        local_d8._8_8_ = 0;
        local_ac = 0x80;
        local_a8 = -1;
        uStack_21c = uVar19;
        uStack_230 = uVar20;
        if (local_60 != 0) {
          puVar15 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar15 = local_68;
          }
          uVar7 = *puVar15;
          uVar19 = uVar20;
          while (uVar7 == 0) {
            lVar10 = (longlong)(int)uStack_230;
            uVar19 = uVar19 + 0x20;
            uStack_230 = uStack_230 + 1;
            uStack_21c = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_230
               ) goto LAB_1458eb5d0;
            uVar7 = puVar15[lVar10 + 1];
          }
          uStack_22c = -uVar7 & uVar7;
          uVar17 = (ulonglong)uStack_22c * 2 + 1;
          lVar10 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          local_1e0 = (int)lVar10;
          uStack_21c = (uVar19 - 1) + local_1e0;
          if ((int)local_60 < (int)uStack_21c) {
            uStack_21c = local_60;
          }
        }
LAB_1458eb5d0:
        local_238 = (longlong *)local_88;
        uStack_214 = local_fc;
        local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        uVar20 = local_60 & 0xffffffe0;
        iStack_210 = local_88._8_4_ - local_54;
        TStack_180._padding_ = CONCAT44(uStack_22c,uStack_230);
        uStack_220 = 0xffffffff;
        TStack_180.CurrentBitIndex = uStack_21c;
        TStack_180.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)local_60 >> 5;
        TStack_180._28_4_ = local_fc;
        TStack_180.BaseBitIndex = uVar19;
        uStack_160 = CONCAT44(uStack_20c,iStack_210);
        bVar9 = (byte)local_60;
        local_218 = uVar19;
        local_188 = local_238;
        TStack_180.Array = local_228;
        if (((int)local_60 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar13 != local_60) {
          puVar15 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar15 = local_68;
          }
          uVar19 = -1 << (bVar9 & 0x1f) & puVar15[iVar14];
          while (uVar19 == 0) {
            lVar10 = (longlong)iVar14;
            uVar20 = uVar20 + 0x20;
            iVar14 = iVar14 + 1;
            uVar13 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_1458eb6f1;
            uVar19 = puVar15[lVar10 + 1];
          }
          uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          local_1dc = (int)lVar10;
          uVar13 = local_1dc + -1 + uVar20;
          if ((int)local_60 < (int)uVar13) {
            uVar13 = local_60;
          }
        }
LAB_1458eb6f1:
        while( true ) {
          plVar4 = local_188;
          if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
            local_248 = (FIdentityFunctor)0x0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
          }
          FVar3 = local_248;
          if (((TStack_180.CurrentBitIndex == uVar13) &&
              (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar4 == (longlong *)local_88)) break;
          lVar10 = *plVar4;
          local_1f0 = *(undefined8 *)(lVar10 + (longlong)TStack_180.CurrentBitIndex * 0x14);
          local_1e8 = *(undefined4 *)(lVar10 + 8 + (longlong)TStack_180.CurrentBitIndex * 0x14);
          if ((1 < (uint)((ulonglong)local_1f0 >> 0x20)) ||
             (GPixelFormats[*(byte *)(lVar12 + 0x26)].BlockSizeX == 1)) {
            TSet<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,DefaultKeyFuncs<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,0>,FDefaultSetAllocator>
            ::Emplace<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_const_&>
                      ((TSet<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,DefaultKeyFuncs<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,0>,FDefaultSetAllocator>
                        *)local_d8,&local_1d8,(bool *)&local_1f0);
          }
          TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
        }
        local_1c8 = local_240;
        if (0 < local_d8._8_4_ - local_a4) {
          TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8);
          uVar5 = local_d8._0_8_;
          iVar14 = local_d8._8_4_ - local_a4;
          if ((iVar14 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,DefaultKeyFuncs<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,0>,FDefaultSetAllocator>::FElementCompareClass<_FVirtualTextureSystem::DumpPoolUsageFromConsole_::__l7::<lambda_1>_>_>_>
                    ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar5,iVar14,FVar3,
                     (FElementCompareClass<_private:_void___cdecl_FVirtualTextureSystem::DumpPoolUsageFromConsole(void)_::_7_::<lambda_1>_>
                      *)&local_1c8);
        }
        uVar19 = local_90;
        uVar17 = (ulonglong)local_90;
        if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
        }
        if (uVar19 != 0) {
          uVar13 = uVar19;
          if (uVar19 < 2) {
            if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar13 = 0;
              goto LAB_1458eb86a;
            }
          }
          else {
LAB_1458eb86a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_98,0,uVar13,4);
          }
          if (0 < (int)uVar19) {
            uVar16 = 0;
            do {
              FVar11.Data = (FScriptContainerElement *)local_a0;
              if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar11.Data = local_98.Data;
              }
              uVar8 = (longlong)(int)uVar19 - 1U & uVar16;
              uVar16 = uVar16 + 1;
              *(undefined4 *)((longlong)FVar11.Data + uVar8 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if ((local_90 != 0) &&
           (TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TConstIterator::TConstIterator
                      ((TConstIterator *)&local_1b0,
                       (TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_d8), local_1a8.CurrentBitIndex < (local_1a8.Array)->NumBits)) {
          do {
            iVar14 = local_1a8.CurrentBitIndex;
            puVar15 = (uint *)(*local_1b0 + (longlong)local_1a8.CurrentBitIndex * 0x14);
            uVar19 = *puVar15;
            uVar13 = (*FCrc::MemCrc32Func)(puVar15 + 1,8,0);
            uVar19 = local_90 - 1 & ((uVar19 >> 2) + uVar19 * 0x40 + uVar13 + 0x9e3779b9 ^ uVar19);
            puVar15[4] = uVar19;
            FVar11.Data = (FScriptContainerElement *)local_a0;
            if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_98.Data;
            }
            uVar17 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar19;
            puVar15[3] = *(uint *)((longlong)FVar11.Data + uVar17 * 4);
            *(int *)((longlong)FVar11.Data + uVar17 * 4) = iVar14;
            local_1a8.UnvisitedBitMask = local_1a8.UnvisitedBitMask & ~local_1a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
          } while (local_1a8.CurrentBitIndex < (local_1a8.Array)->NumBits);
        }
        uVar19 = local_b0;
        uStack_230 = 0;
        local_218 = 0;
        uStack_22c = 1;
        uStack_21c = 0;
        if (local_b0 != 0) {
          FVar18 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_b8;
          }
          uVar13 = *(uint *)FVar18;
          while (uVar13 == 0) {
            lVar12 = (longlong)(int)uStack_230;
            local_218 = local_218 + 0x20;
            uStack_230 = uStack_230 + 1;
            uStack_21c = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_230
               ) goto LAB_1458eba10;
            uVar13 = ((uint *)((longlong)FVar18 + 4))[lVar12];
          }
          uStack_22c = -uVar13 & uVar13;
          uVar17 = (ulonglong)uStack_22c * 2 + 1;
          lVar12 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_1d8._4_4_ = SUB84(lVar12,0);
          uStack_21c = local_218 + -1 + local_1d8._4_4_;
          if ((int)local_b0 < (int)uStack_21c) {
            uStack_21c = local_b0;
          }
        }
LAB_1458eba10:
        local_238 = (longlong *)local_d8;
        uStack_214 = local_dc;
        iStack_210 = local_d8._8_4_ - local_a4;
        uVar13 = local_b0 & 0xffffffe0;
        local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        TStack_150._padding_ = CONCAT44(uStack_22c,uStack_230);
        uStack_220 = 0xffffffff;
        TStack_150.CurrentBitIndex = uStack_21c;
        TStack_150.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)local_b0 >> 5;
        TStack_150._28_4_ = local_dc;
        TStack_150.BaseBitIndex = local_218;
        uStack_130 = CONCAT44(uStack_20c,iStack_210);
        bVar9 = (byte)local_b0;
        local_158 = local_238;
        TStack_150.Array = local_228;
        if (((int)local_b0 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this = local_208;
        if (uVar19 != local_b0) {
          FVar18 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_b8;
          }
          uVar19 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar14 * 4);
          while (uVar19 == 0) {
            lVar12 = (longlong)iVar14;
            uVar13 = uVar13 + 0x20;
            iVar14 = iVar14 + 1;
            uVar19 = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_1458ebb50;
            uVar19 = ((uint *)((longlong)FVar18 + 4))[lVar12];
          }
          uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_1d8._8_4_ = SUB84(lVar12,0);
          uVar19 = (uVar13 - 1) + local_1d8._8_4_;
          if ((int)local_b0 < (int)uVar19) {
            uVar19 = local_b0;
          }
        }
LAB_1458ebb50:
        while( true ) {
          plVar4 = local_158;
          if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
            local_247[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_247);
          }
          if (((TStack_150.CurrentBitIndex == uVar19) &&
              (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar4 == (longlong *)local_d8)) break;
          lVar12 = *plVar4;
          local_1c0 = *(undefined8 *)(lVar12 + (longlong)TStack_150.CurrentBitIndex * 0x14);
          uVar1 = *(undefined4 *)(lVar12 + 8 + (longlong)TStack_150.CurrentBitIndex * 0x14);
          local_23c.PackedValue = (uint)local_1c0;
          local_1b8 = uVar1;
          this_00 = FVirtualTextureProducerCollection::GetEntry(&this->Producers,&local_23c);
          if ((this_00 != (FProducerEntry *)0x0) && (3 < (byte)LogVirtualTexturing._0_1_)) {
            ::FName::ToString((FName *)this_00,local_128);
            local_258 = CONCAT44(local_258._4_4_,uVar1);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
            if (local_128[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128[0].Data.AllocatorInstance.Data);
            }
          }
          TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
        }
        local_90 = 0;
        if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_98.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        local_40 = 0;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        lVar10 = local_1f8;
        lVar12 = local_200;
      }
      local_244 = local_244 + 1;
      local_200 = lVar12 + 1;
      local_1f8 = lVar10 + 8;
    } while ((int)local_244 < (this->PhysicalSpaces).ArrayNum);
  }
  return;
}

// EndUpdate @ 1458ed040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::EndUpdate
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,
          TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> *param_2,
          Type param_3)

{
  int *piVar1;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FVirtualTextureUpdater *pFVar4;
  FTaskBase *this_00;
  FVirtualTexturePhysicalSpace *this_01;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  FRDGScope *pFVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update> FVar16;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar21;
  bool bVar22;
  float fVar23;
  bool local_f8 [8];
  FName local_f0;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  FName local_d8;
  LARGE_INTEGER local_c8;
  FRDGScope *local_c0;
  FStatMessage local_b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a8;
  char local_98;
  <lambda_1> local_90;
  FName local_80;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_78;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  bVar12 = IsInRenderingThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0xc24,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_2->Ptr == (FVirtualTextureUpdater *)0x0) {
    return;
  }
  pFVar14 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar14;
  uVar19 = (ulonglong)(pFVar14->Impl).Impl.TypeIndex;
  local_c0 = pFVar14;
  if ((3 < uVar19) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar19])(&pFVar14->Impl);
  (pFVar14->Impl).Impl._padding_ = (longlong)"VirtualTextureSystem_Update";
  FCsvProfiler::BeginExclusiveStat("VirtualTextureSystem_Update",(char *)0x0);
  (pFVar14->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_);
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3116,"FVirtualTextureSystem::EndUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xc2c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3116);
  }
  FVar16 = StatPtr_STAT_VirtualTextureSystem_Update;
  if (StatPtr_STAT_VirtualTextureSystem_Update ==
      (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)0x0) {
    pFVar15 = ::FName::FName(&local_80,"STAT_VirtualTextureSystem_Update");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystem_Update>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureSystem_Update,
                        *pFVar15,L"VirtualTextureSystem Update","STATGROUP_VirtualTexturing",
                        "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  FVar17 = *(FName *)FVar16;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_e0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xc2d);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_1458ed2bc;
    }
  }
  bVar9 = false;
  FVar17 = local_d8;
LAB_1458ed2bc:
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_98 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xc2f;
      local_58 = 0x54bdadc0;
      uStack_54 = 1;
      ::Desc._padding_._0_4_ = 0x54bdadc0;
      ::Desc._padding_._4_4_ = uStack_5c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_VirtualTextureE;
      ::Desc._padding_ = (longlong)u_VirtualTextureE;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualTextureSystem::EndUpdate'::__l17::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_78._Myfirst._Val = &::Desc;
    local_a8.State = (FRDGScopeState *)param_1;
    pFVar14 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar14;
    local_a8.Scope = pFVar14;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(pFVar14->Impl).Impl,(FRDGScopeState *)param_1,&local_78);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_98 = '\x01';
  }
  pFVar4 = param_2->Ptr;
  if (pFVar4->bAsyncTaskAllowed == false) {
    BeginUpdate(this,param_1,pFVar4);
  }
  else {
    this_00 = (pFVar4->AsyncTask).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
  }
  this->bUpdating = false;
  if ((param_2->Ptr->FeedbackMapResult).Data != (TIntPoint<unsigned_int> *)0x0) {
    FVirtualTextureFeedback::Unmap
              ((FVirtualTextureFeedback *)&GVirtualTextureFeedback,
               (FRHICommandListImmediate *)param_1->_padding_,
               (param_2->Ptr->FeedbackMapResult).MapHandle);
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3138,"FVirtualTextureSystem::GatherAndSubmitRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xc42);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3138);
  }
  if (param_2->Ptr->bAsyncTaskAllowed != false) {
    GatherLockedTileRequests(this,param_2->Ptr->MergedRequestList);
    pFVar4 = param_2->Ptr;
    GatherPackedTileRequests(this,&pFVar4->Allocator,&pFVar4->Settings,pFVar4->MergedRequestList);
  }
  SubmitThrottledRequests(this,(FRHICommandList *)param_1->_padding_,param_2->Ptr,End);
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  UpdateResidencyTracking(this);
  GrowPhysicalPools(this);
  pTVar10 = CVarVTCsvStats.Ref;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar10->ShadowedValue[1] != 0) {
    uVar18 = 0;
    fVar23 = 0.0;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      lVar20 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < (this->PhysicalSpaces).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = *(FVirtualTexturePhysicalSpace **)
                   ((this->PhysicalSpaces).AllocatorInstance.Data + lVar20);
        if (this_01 != (FVirtualTexturePhysicalSpace *)0x0) {
          fVar11 = this_01->ResidencyMipMapBias;
          if (this_01->ResidencyMipMapBias <= fVar23) {
            fVar11 = fVar23;
          }
          fVar23 = fVar11;
          local_f0 = (FName)CVarVTCsvStats.Ref;
          bVar22 = IsInParallelRenderingThread();
          if ((!bVar22) &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007955>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)((longlong)local_f0 + 4) == 2) {
            FVirtualTexturePhysicalSpace::UpdateCsvStats(this_01);
          }
        }
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 8;
      } while ((int)uVar18 < (this->PhysicalSpaces).ArrayNum);
    }
    if (__CsvProfilerStat3262 == false) {
      FCsvProfilerTrace::OutputInlineStat("ResidencyMipBias",_GCsvCategory_VirtualTexturing.Index);
      __CsvProfilerStat3262 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("ResidencyMipBias",_GCsvCategory_VirtualTexturing.Index,fVar23,Set);
  }
  pTVar2 = &this->TilesToLockForNextFrame;
  pTVar21 = &this->TilesToLock;
  if (pTVar21 != pTVar2) {
    pFVar5 = (pTVar21->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar21->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TilesToLock).ArrayNum = (this->TilesToLockForNextFrame).ArrayNum;
    (this->TilesToLock).ArrayMax = (this->TilesToLockForNextFrame).ArrayMax;
    (this->TilesToLockForNextFrame).ArrayNum = 0;
    (this->TilesToLockForNextFrame).ArrayMax = 0;
  }
  if (local_98 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a8);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_b8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar14 = local_c0;
  if (local_c0 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_c0,(FRHIComputeCommandList *)param_1->_padding_);
      local_90.RHICmdList = (FRHIComputeCommandList *)param_1->_padding_;
      local_90.bPreScope = local_f8;
      local_f8[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar14->Impl,&local_90);
    }
    FRDGScope::ImmediateEnd(pFVar14,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  return;
}

// FeedbackAnalysisTask @ 1458f5550

void __thiscall
FVirtualTextureSystem::FeedbackAnalysisTask
          (FVirtualTextureSystem *this,FFeedbackAnalysisParameters *param_1)

{
  ushort uVar1;
  uint uVar2;
  FUniquePageList *this_00;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  TIntPoint<unsigned_int> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  this_00 = param_1->UniquePageList;
  uVar9 = 0xffffffff;
  pTVar7 = param_1->FeedbackBuffer;
  if (param_1->FeedbackSize != 0) {
    uVar8 = (ulonglong)param_1->FeedbackSize;
    uVar6 = 0;
    do {
      uVar2 = (pTVar7->field0_0x0)._s_0.X;
      uVar10 = (pTVar7->field0_0x0)._s_0.Y;
      if (uVar2 == uVar9) {
        uVar10 = uVar6 + uVar10;
        uVar2 = uVar9;
      }
      else if (uVar9 != 0xffffffff) {
        uVar5 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar4 = (ulonglong)((uVar5 >> 0x10 ^ uVar5) & 0x3fff);
        uVar1 = this_00->HashIndices[uVar4];
        while (uVar1 != 0xffff) {
          if (this_00->Pages[uVar1] == uVar9) {
            uVar6 = this_00->Counts[uVar1] + uVar6;
            uVar3 = 0xffff;
            if (uVar6 < 0xffff) {
              uVar3 = (ushort)uVar6;
            }
            this_00->Counts[uVar1] = uVar3;
            goto LAB_1458f5624;
          }
          uVar4 = (ulonglong)((int)uVar4 + 1U & 0x3fff);
          uVar1 = this_00->HashIndices[uVar4];
        }
        uVar5 = this_00->NumPages;
        if (uVar5 < 0x2000) {
          this_00->NumPages = uVar5 + 1;
          this_00->HashIndices[uVar4] = (ushort)uVar5;
          this_00->Pages[uVar5] = uVar9;
          this_00->Counts[uVar5] = (ushort)uVar6;
        }
      }
LAB_1458f5624:
      uVar9 = uVar2;
      pTVar7 = pTVar7 + 1;
      uVar8 = uVar8 - 1;
      uVar6 = uVar10;
    } while (uVar8 != 0);
    if (uVar9 != 0xffffffff) {
      FUniquePageList::Add(this_00,uVar9,uVar10);
    }
  }
  return;
}

// FinalizeRequests @ 1458f5790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::FinalizeRequests
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,ISceneRenderer *param_2)

{
  TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  char cVar2;
  int iVar3;
  FAdaptiveVirtualTexture *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FRDGScope *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Finalize> FVar13;
  FRDGTexture *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_PageTableUpdates> FVar15;
  ulonglong uVar16;
  FName FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174 [4];
  bool local_170 [8];
  FRDGExternalAccessQueue local_168;
  FColor_u_0 local_158;
  FColor_u_0 local_154;
  FName local_150;
  FName local_148;
  FScriptContainerElement *local_140;
  FName local_138;
  FName local_130;
  FName local_120;
  FScriptContainerElement *local_108;
  FRDGScope *local_100;
  TRDGEventScopeGuard<FRDGScope_RHI> local_f8;
  char local_e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_e0;
  char local_d0;
  <lambda_1> local_c8;
  FName local_b8;
  FName local_b0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_98;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar11;
  uVar16 = (ulonglong)(pFVar11->Impl).Impl.TypeIndex;
  local_100 = pFVar11;
  if ((3 < uVar16) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar16])(&pFVar11->Impl);
  (pFVar11->Impl).Impl._padding_ = (longlong)"VirtualTextureSystem_Update";
  FCsvProfiler::BeginExclusiveStat("VirtualTextureSystem_Update",(char *)0x0);
  (pFVar11->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2689,"FVirtualTextureSystem::FinalizeRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xa81);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2689);
  }
  local_168.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_168.Resources.ArrayNum = 0;
  local_168.Resources.ArrayMax = 0;
  if ((this->Finalizers).ArrayNum != 0) {
    FVar13 = StatPtr_STAT_ProcessRequests_Finalize;
    if (StatPtr_STAT_ProcessRequests_Finalize ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Finalize>)0x0) {
      pFVar12 = ::FName::FName(&local_b8,"STAT_ProcessRequests_Finalize");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Finalize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_Finalize,
                          *pFVar12,L"Finalize Requests","STATGROUP_VirtualTexturing",
                          "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    bVar5 = false;
    bVar27 = false;
    local_130.ComparisonIndex.Value = 0;
    local_130.Number = 0;
    FVar17 = *(FName *)FVar13;
    bVar26 = false;
    bVar6 = false;
    if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_1458f59fb:
      bVar5 = bVar26;
      bVar27 = bVar6;
      bVar6 = false;
      local_150 = local_130;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_158.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_158._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
        bVar5 = false;
        bVar27 = true;
        bVar26 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
          local_148.Number = FVar17.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0xa88);
          bVar5 = true;
          bVar27 = true;
          bVar26 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458f59fb;
      local_150 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
    }
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_e8 = '\0';
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0xa89;
        local_78 = 0x54bdadc0;
        uStack_74 = 1;
        ::Desc._padding_._0_4_ = 0x54bdadc0;
        ::Desc._padding_._4_4_ = uStack_7c;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_VirtualTextureF;
        ::Desc._padding_ = (longlong)u_VirtualTextureF;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FVirtualTextureSystem::FinalizeRequests'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_a8._Myfirst._Val = &::Desc;
      local_f8.State = (FRDGScopeState *)param_1;
      pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar11;
      local_f8.Scope = pFVar11;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
                (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_a8);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_e8 = '\x01';
    }
    bVar26 = -1 < CpuChannel->Enabled;
    if (bVar26) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2699,"FVirtualTextureSystem::Finalize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                 ,0xa8b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2699);
    }
    pTVar1 = &this->Finalizers;
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->Finalizers).ArrayNum;
    pFVar18 = pFVar21 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Finalizers).ArrayNum != iVar3) {
        local_177 = 0;
        `TCheckedPointerIterator<IVirtualTextureFinalizer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_177);
      }
      if (pFVar21 == pFVar18) break;
      (**(code **)**(undefined8 **)pFVar21)();
      pFVar21 = pFVar21 + 8;
    }
    pFVar21 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->Finalizers).ArrayNum;
    pFVar18 = pFVar21 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Finalizers).ArrayNum != iVar3) {
        local_176 = 0;
        `TCheckedPointerIterator<IVirtualTextureFinalizer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_176);
      }
      if (pFVar21 == pFVar18) break;
      (**(code **)(**(longlong **)pFVar21 + 8))();
      pFVar21 = pFVar21 + 8;
    }
    (this->Finalizers).ArrayNum = 0;
    if ((this->Finalizers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Finalizers).ArrayMax);
    }
    pFVar21 = (this->PhysicalSpaces).AllocatorInstance.Data;
    iVar3 = (this->PhysicalSpaces).ArrayNum;
    pFVar18 = pFVar21 + (longlong)iVar3 * 8;
    local_108 = pFVar18;
    while( true ) {
      local_140 = pFVar21;
      if ((this->PhysicalSpaces).ArrayNum != iVar3) {
        local_175 = 0;
        `TCheckedPointerIterator<FVirtualTexturePhysicalSpace_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_175);
      }
      FVar17 = local_150;
      if (pFVar21 == pFVar18) break;
      lVar19 = *(longlong *)pFVar21;
      if ((lVar19 != 0) && (iVar24 = 0, *(char *)(lVar19 + 0x25) != '\0')) {
        plVar22 = (longlong *)(lVar19 + 0x118);
        do {
          if ((*plVar22 != 0) &&
             (pFVar14 = FRDGBuilder::FindExternalTexture(param_1,*(FRHITexture **)(*plVar22 + 8)),
             pFVar14 != (FRDGTexture *)0x0)) {
            iVar9 = local_168.Resources.ArrayNum;
            if (local_168.Resources.ArrayNum == local_168.Resources.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                                (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)
                                       &local_168,&local_168.Resources.ArrayMax);
            }
            local_168.Resources.ArrayNum = iVar9 + 1;
            local_168.Resources.AllocatorInstance.Data[iVar9].Resource =
                 (FRDGViewableResource *)pFVar14;
            local_168.Resources.AllocatorInstance.Data[iVar9].Access = SRVMask;
            local_168.Resources.AllocatorInstance.Data[iVar9].Pipelines = Graphics;
          }
          iVar24 = iVar24 + 1;
          plVar22 = plVar22 + 1;
          pFVar21 = local_140;
          pFVar18 = local_108;
        } while (iVar24 < (int)(uint)*(byte *)(lVar19 + 0x25));
      }
      pFVar21 = pFVar21 + 8;
    }
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_e8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_f8);
    }
    if (bVar27) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FThreadStats::AddMessage(FVar17,CycleScopeEnd);
    }
  }
  FVar15 = StatPtr_STAT_PageTableUpdates;
  if (StatPtr_STAT_PageTableUpdates == (FThreadSafeStaticStat<FStat_STAT_PageTableUpdates>)0x0) {
    pFVar12 = ::FName::FName(&local_b0,"STAT_PageTableUpdates");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_PageTableUpdates>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageTableUpdates,*pFVar12,
                        L"Page Table Updates","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar5 = false;
  bVar27 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar26 = false;
  bVar6 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar27 = true;
      bVar26 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_138.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xaa5);
        bVar5 = true;
        bVar27 = true;
        bVar26 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_1458f5e21;
    }
  }
  bVar5 = bVar26;
  bVar27 = bVar6;
  bVar6 = false;
  FVar17 = local_120;
LAB_1458f5e21:
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  cVar23 = '\0';
  local_d0 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xaa6;
      local_58 = 0x54bdadc0;
      uStack_54 = 1;
      ::Desc._padding_._0_4_ = 0x54bdadc0;
      ::Desc._padding_._4_4_ = uStack_5c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_VirtualTextureP;
      ::Desc._padding_ = (longlong)u_VirtualTextureP;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualTextureSystem::FinalizeRequests'::__l31::<lambda_2>::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_98._Myfirst._Val = &::Desc;
    local_e0.State = (FRDGScopeState *)param_1;
    pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar11;
    local_e0.Scope = pFVar11;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
              (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_98);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
    }
    cVar23 = '\x01';
    local_d0 = '\x01';
  }
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId2728,"FVirtualTextureSystem::ApplyUpdates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0xaa8);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId2728);
  }
  uVar20 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar19 = 0;
    do {
      uVar25 = ~uVar20 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar20 < (this->Spaces).ArrayNum) {
        uVar10 = uVar25;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->Spaces).AllocatorInstance.Data + lVar19) != 0) {
        uVar10 = 0;
        if ((int)uVar20 < (this->Spaces).ArrayNum) {
          uVar10 = uVar25;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVirtualTextureSpace::ApplyUpdates
                  (*(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + lVar19),this,
                   param_1,&local_168);
        if ((-1 < (int)uVar20) && ((int)uVar20 < (this->AdaptiveVTs).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar20 < (this->AdaptiveVTs).ArrayNum) {
            uVar10 = uVar25;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = *(FAdaptiveVirtualTexture **)
                     ((this->AdaptiveVTs).AllocatorInstance.Data + lVar19);
          if (this_00 != (FAdaptiveVirtualTexture *)0x0) {
            FAdaptiveVirtualTexture::ApplyPageTableUpdates(this_00,this,param_1,&local_168);
          }
        }
      }
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 8;
      cVar23 = local_d0;
    } while ((int)uVar20 < (this->Spaces).ArrayNum);
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar23 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_e0);
  }
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  FRDGExternalAccessQueue::Submit(&local_168,param_1);
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId251,"FVirtualTextureSystem::NotifyRequestsComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
               ,0xfb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
  }
  iVar3 = (this->Producers).Producers.ArrayNum;
  pFVar18 = (this->Producers).Producers.AllocatorInstance.Data;
  pFVar21 = pFVar18 + (longlong)iVar3 * 0xf8;
  while( true ) {
    if ((this->Producers).Producers.ArrayNum != iVar3) {
      local_174[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureProducerCollection::FProducerEntry,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_174);
    }
    if (pFVar18 == pFVar21) break;
    if (pFVar18[0xf] != (FScriptContainerElement)0x0) {
      (**(code **)(**(longlong **)(pFVar18 + 0xe0) + 0x40))();
    }
    pFVar18 = pFVar18 + 0xf8;
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this->Frame = this->Frame + 1;
  if ((local_168.Resources.ArrayNum != 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x4fe,L"Submit must be called before destruction."), bVar27)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar11 = local_100;
  if (local_100 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_100,(FRHIComputeCommandList *)param_1->_padding_);
      local_c8.RHICmdList = (FRHIComputeCommandList *)param_1->_padding_;
      local_c8.bPreScope = local_170;
      local_170[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar11->Impl,&local_c8);
    }
    FRDGScope::ImmediateEnd(pFVar11,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  return;
}

// FindProducer @ 1458f7140

FVirtualTextureProducer * __thiscall
FVirtualTextureSystem::FindProducer
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1)

{
  FProducerEntry *pFVar1;
  
  pFVar1 = FVirtualTextureProducerCollection::GetEntry(&this->Producers,param_1);
  return &pFVar1->Producer;
}

// FlushCache @ 1458f7150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::FlushCache
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1,int param_2,
          TIntRect<int> *param_3,uint param_4,uint param_5,EVTInvalidatePriority param_6)

{
  uchar *puVar1;
  undefined1 *puVar2;
  FVirtualTextureProducerHandle *pFVar3;
  ulonglong uVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FlushCache> FVar15;
  FThreadSafeStaticStat<FStat_STAT_NumFlushCache> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FProducerEntry *pFVar17;
  FAdaptiveVirtualTexture *this_02;
  FVirtualTextureLocalTileRequest *this_03;
  byte bVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ForAnyElementType FVar22;
  FVirtualTextureLocalTileRequest *pFVar23;
  uint uVar24;
  FRecursiveMutex *this_04;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *this_05;
  uint uVar28;
  bool local_167 [7];
  FName local_160;
  undefined1 local_158 [4];
  uint local_154;
  FColor_u_0 local_150 [2];
  TArray<FAdaptiveVirtualTexture::FProducerInfo,TSizedDefaultAllocator<32>_> local_148;
  TArray<FVirtualTexturePhysicalSpace_*,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *local_120;
  longlong local_118;
  FName local_110;
  int local_100;
  FName local_f8;
  FVirtualTexturePhysicalSpace *local_f0;
  FRecursiveMutex *local_e8;
  FStatMessage local_e0;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_70;
  FName local_68 [4];
  undefined4 local_44;
  
  if ((this->bUpdating != false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bUpdating",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0x1b6,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_04 = &this->Mutex;
  local_e8 = this_04;
  if ((this_04 == (FRecursiveMutex *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_04);
  uVar27 = 0;
  uVar24 = 0;
  FVar15 = StatPtr_STAT_FlushCache;
  if (StatPtr_STAT_FlushCache == (FThreadSafeStaticStat<FStat_STAT_FlushCache>)0x0) {
    pFVar14 = ::FName::FName(&local_70,"STAT_FlushCache");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FlushCache>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushCache,*pFVar14,
                        L"Flush Cache","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar15;
  bVar12 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar7 = false;
  bVar11 = false;
  bVar8 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar12 = false;
      bVar9 = true;
      bVar11 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_128.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0x1b9);
        bVar12 = true;
        bVar9 = true;
        bVar11 = true;
        bVar8 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar5;
      local_110 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar7 = true;
      bVar11 = bVar12;
      bVar8 = bVar9;
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_NumFlushCache;
    if (StatPtr_STAT_NumFlushCache == (FThreadSafeStaticStat<FStat_STAT_NumFlushCache>)0x0) {
      pFVar14 = ::FName::FName(local_68,"STAT_NumFlushCache");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_NumFlushCache>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumFlushCache,*pFVar14,
                          L"Num flush caches","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar16;
    local_160 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_e0.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_e0.StatData.Pad[0] = '\x01';
      local_e0.StatData.Pad[1] = '\0';
      local_e0.StatData.Pad[2] = '\0';
      local_e0.StatData.Pad[3] = '\0';
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_f8 = FVar5;
      local_e0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_e0);
      FStatsTrace::Add(&local_f8,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar17 = FVirtualTextureProducerCollection::GetEntry(&this->Producers,param_1);
  local_160 = (FName)pFVar17;
  if (pFVar17 != (FProducerEntry *)0x0) {
    puVar1 = &(pFVar17->Producer).Description.NumPhysicalGroups;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar18 = *puVar1;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    if (bVar18 != 0) {
      uVar20 = uVar27;
      do {
        if ((bVar18 <= uVar20) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupIndex < Description.NumPhysicalGroups",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                ,0x22,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar28 = 0;
        if ((int)uVar20 < (pFVar17->Producer).PhysicalGroups.ArrayNum) {
          uVar28 = ~uVar20 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_f0 = *(FVirtualTexturePhysicalSpace **)
                    ((pFVar17->Producer).PhysicalGroups.AllocatorInstance.Data +
                    (longlong)(int)uVar20 * 8);
        TArray<FVirtualTexturePhysicalSpace_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FVirtualTexturePhysicalSpace_*>(&local_138,&local_f0);
        bVar18 = *puVar1;
        uVar20 = uVar20 + 1;
      } while (uVar20 < bVar18);
    }
    this_05 = &this->TransientCollectedTilesToProduce;
    local_120 = this_05;
    if ((*(int *)&(this->TransientCollectedTilesToProduce).Elements.field_0x8 !=
         *(int *)&(this->TransientCollectedTilesToProduce).Elements.field_0x34) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TransientCollectedTilesToProduce.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                            ,0x1c7,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    uVar20 = this->Frame - param_5;
    if (this->Frame <= param_5) {
      uVar20 = uVar27;
    }
    local_154 = uVar20;
    this_02 = GetAdaptiveVirtualTexture(this,param_2);
    if (this_02 != (FAdaptiveVirtualTexture *)0x0) {
      FAdaptiveVirtualTexture::GetProducers(this_02,param_3,param_4,&local_148);
    }
    if (0 < local_138.ArrayNum) {
      local_118 = 0;
      uVar28 = uVar27;
      do {
        lVar19 = local_118;
        uVar13 = 0;
        if ((int)uVar28 < local_138.ArrayNum) {
          uVar13 = ~uVar28 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar19 = *(longlong *)(local_138.AllocatorInstance.Data + lVar19);
        iVar21 = local_148.ArrayNum;
        if (local_148.ArrayNum == 0) {
          FTexturePagePool::EvictPages
                    ((FTexturePagePool *)(lVar19 + 0x58),this,param_1,
                     (FVTProducerDescription *)local_160,param_3,param_4,uVar20,param_6,this_05);
        }
        else {
          pFVar3 = (FVirtualTextureProducerHandle *)
                   (local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18);
          FVar22.Data = local_148.AllocatorInstance.Data;
          while( true ) {
            if (local_148.ArrayNum != iVar21) {
              local_167[1] = false;
              `TCheckedPointerIterator<FAdaptiveVirtualTexture::FProducerInfo,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_167 + 1);
            }
            this_05 = local_120;
            uVar20 = local_154;
            if ((FVirtualTextureProducerHandle *)FVar22.Data == pFVar3) break;
            FTexturePagePool::EvictPages
                      ((FTexturePagePool *)(lVar19 + 0x58),this,
                       (FVirtualTextureProducerHandle *)FVar22.Data,
                       (FVTProducerDescription *)local_160,
                       (TIntRect<int> *)
                       &((FVirtualTextureProducerHandle *)((longlong)FVar22.Data + 4))->_s_1,
                       ((FVirtualTextureProducerHandle *)((longlong)FVar22.Data + 0x14))->
                       PackedValue,local_154,param_6,local_120);
            FVar22.Data = FVar22.Data + 0x18;
          }
        }
        uVar28 = uVar28 + 1;
        local_118 = local_118 + 8;
        this_04 = local_e8;
      } while ((int)uVar28 < local_138.ArrayNum);
    }
    puVar2 = &(this->TransientCollectedTilesToProduce).Elements.field_0x10;
    uVar20 = *(uint *)&(this->TransientCollectedTilesToProduce).Elements.field_0x28;
    uStack_b4 = uVar24;
    local_b0 = uVar24;
    if (uVar20 == 0) {
LAB_1458f77b0:
      uStack_c4 = 1;
    }
    else {
      puVar26 = *(uint **)&(this->TransientCollectedTilesToProduce).Elements.field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar2;
      }
      uStack_c4 = *puVar26;
      uVar24 = uVar27;
      local_b0 = uVar27;
      while (uStack_c4 == 0) {
        lVar19 = (longlong)(int)uVar24;
        local_b0 = local_b0 + 0x20;
        uVar24 = uVar24 + 1;
        uStack_b4 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
        goto LAB_1458f77b0;
        uStack_c4 = puVar26[lVar19 + 1];
      }
      uStack_c4 = -uStack_c4 & uStack_c4;
      uVar4 = (ulonglong)uStack_c4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_100 = (int)lVar19;
      uStack_b4 = (local_b0 - 1) + local_100;
      if ((int)uVar20 < (int)uStack_b4) {
        uStack_b4 = uVar20;
      }
    }
    uVar27 = *(uint *)&(this->TransientCollectedTilesToProduce).Elements.field_0x28;
    uStack_ac = local_44;
    iStack_a8 = *(int *)&(this->TransientCollectedTilesToProduce).Elements.field_0x8 -
                *(int *)&(this->TransientCollectedTilesToProduce).Elements.field_0x34;
    uVar28 = uVar27 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uStack_c4,uVar24);
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = uStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar27 >> 5;
    TStack_98._28_4_ = local_44;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_05;
    uStack_c8 = uVar24;
    local_c0 = puVar2;
    local_a0 = this_05;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar27 < 0) || ((int)uVar20 < (int)uVar27)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar24 = *(uint *)&(this->TransientCollectedTilesToProduce).Elements.field_0x28;
    if (uVar27 != uVar24) {
      puVar25 = *(undefined1 **)&(this->TransientCollectedTilesToProduce).Elements.field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = puVar2;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
      while (uVar27 == 0) {
        lVar19 = (longlong)iVar21;
        uVar28 = uVar28 + 0x20;
        iVar21 = iVar21 + 1;
        uVar27 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1458f78e0;
        uVar27 = *(uint *)(puVar25 + lVar19 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar27 = (int)lVar19 + -1 + uVar28;
      if ((int)uVar24 < (int)uVar27) {
        uVar27 = uVar24;
      }
    }
LAB_1458f78e0:
    while( true ) {
      pTVar10 = local_a0;
      if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
          (int)uStack_78) {
        `TSparseArray<TSparseSetElement<FVirtualTextureLocalTileRequest>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (((TStack_98.CurrentBitIndex == uVar27) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar10 == this_05)) break;
      local_167[0] = false;
      pFVar23 = (FVirtualTextureLocalTileRequest *)
                (*(longlong *)&pTVar10->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
      this_03 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                          (&this->MappedTilesToProduce,
                           (int)((pFVar23->PackedValue & 0xfffffffffffffff) >> 0x20) * 0x17 +
                           (int)(pFVar23->PackedValue & 0xfffffffffffffff),pFVar23,local_167);
      if (local_167[0] != false) {
        FVirtualTextureLocalTileRequest::MergeWith
                  ((FVirtualTextureLocalTileRequest *)&this_03->_s_1,pFVar23);
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
    ::Reset(this_05);
    if ((FVirtualTextureProducerHandle *)local_148.AllocatorInstance.Data !=
        (FVirtualTextureProducerHandle *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(local_110,CycleScopeEnd);
  }
  if (this_04 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_04);
  }
  return;
}

// FlushCache @ 1458f79f0

void __thiscall FVirtualTextureSystem::FlushCache(FVirtualTextureSystem *this)

{
  this->bFlushCaches = true;
  return;
}

// FlushCachesFromConsole @ 1458f7a00

void __thiscall FVirtualTextureSystem::FlushCachesFromConsole(FVirtualTextureSystem *this)

{
  this->bFlushCaches = true;
  return;
}

// ForceUnlockAllTiles @ 1458f8240

void __thiscall
FVirtualTextureSystem::ForceUnlockAllTiles
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1,
          FVirtualTextureProducer *param_2)

{
  int iVar1;
  FVirtualTextureLocalTile *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  FVirtualTextureLocalTile *pFVar11;
  int iVar12;
  int iVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined1 local_res20 [8];
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> local_58;
  
  if ((this->bUpdating != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x4dd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FTexturePageLocks::ForceUnlockAll(&this->TileLocks,param_1,&local_58);
  uVar5 = local_58._8_8_;
  uVar7 = (ulonglong)local_58.ArrayNum;
  pFVar11 = (FVirtualTextureLocalTile *)(local_58.AllocatorInstance.Data + uVar7 * 8);
  uVar9 = uVar7;
  FVar14.Data = local_58.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar7 != (int)uVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FVirtualTextureLocalTile,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if ((FVirtualTextureLocalTile *)FVar14.Data == pFVar11) {
        if ((FVirtualTextureLocalTile *)local_58.AllocatorInstance.Data !=
            (FVirtualTextureLocalTile *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        return;
      }
      pFVar2 = (FVirtualTextureLocalTile *)(this->TilesToLock).AllocatorInstance.Data;
      if (((pFVar2 <= FVar14.Data) && (FVar14.Data < pFVar2 + (this->TilesToLock).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = (this->TilesToLock).ArrayNum;
      lVar8 = (longlong)iVar1;
      if (iVar1 != 0) break;
LAB_1458f8462:
      UnlockTileInternal(param_1,param_2,(FVirtualTextureLocalTile *)FVar14.Data,this->Frame);
      uVar7 = local_58._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar9 = uVar5 & 0xffffffff;
    }
    pFVar3 = (this->TilesToLock).AllocatorInstance.Data;
    iVar15 = 0;
    lVar10 = 0;
    bVar6 = *(ulong64 *)pFVar3 != *(ulong64 *)FVar14.Data;
    iVar12 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar13 = iVar12 + 1;
      if (lVar10 < lVar8) {
        do {
          if (bVar6 != (*(ulong64 *)(pFVar3 + lVar10 * 8) != *(ulong64 *)FVar14.Data)) break;
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar8);
      }
      if (bVar6 != false) {
        if (iVar15 != iVar12) {
          memmove(pFVar3 + (longlong)iVar15 * 8,pFVar3 + (longlong)iVar12 * 8,
                  (longlong)(iVar13 - iVar12) << 3);
        }
        iVar15 = iVar15 + (iVar13 - iVar12);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar12 = iVar13;
    } while (lVar10 < lVar8);
    (this->TilesToLock).ArrayNum = iVar15;
    if (iVar1 - iVar15 < 2) {
      if (iVar1 == iVar15) goto LAB_1458f8462;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTilesRemoved <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x4e5,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar14.Data = FVar14.Data + 8;
    uVar7 = local_58._8_8_ & 0xffffffff;
    uVar9 = uVar5 & 0xffffffff;
  } while( true );
}

// GatherFeedbackRequests @ 1458f97a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::GatherFeedbackRequests
          (FVirtualTextureSystem *this,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1,
          FVirtualTextureUpdateSettings *param_2,FMapResult *param_3,FUniqueRequestList *param_4)

{
  int *piVar1;
  float fVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<float> *pTVar9;
  bool bVar10;
  uint uVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar12;
  longlong *plVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar14;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks> FVar17;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  FThreadSafeStaticStat<FStat_STAT_FeedbackAnalysis> FVar19;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks> FVar20;
  FTaskGraphInterface *pFVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergePages> FVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  FUniquePageList *pFVar26;
  FName FVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  ulonglong uVar31;
  FUniquePageList *pFVar32;
  uint uVar33;
  ulonglong uVar34;
  FName FVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStackY_408 [32];
  EExtendedTaskPriority local_3a7;
  ETaskPriority local_3a6 [2];
  uint local_3a4;
  FName local_3a0;
  FName local_398;
  int local_390;
  TRefCountPtr<FBaseGraphTask> local_388;
  FVirtualTextureUpdateSettings *local_380;
  FColor_u_0 local_378;
  FColor_u_0 local_374;
  FColor_u_0 local_370;
  FColor_u_0 local_36c;
  longlong *local_368;
  FVirtualTextureSystem *local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FUniquePageList *local_338;
  FUniqueRequestList *local_330;
  FName local_328;
  FName local_318;
  FName local_308;
  FName local_2f8;
  LARGE_INTEGER local_2e8;
  FStatMessage local_2e0;
  FAddRequestedTilesParameters local_2d0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_288;
  int local_260;
  int local_25c;
  longlong local_258 [3];
  uint local_240 [6];
  undefined8 local_228 [58];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_330 = param_4;
  local_398 = (FName)param_1;
  local_380 = param_2;
  local_360 = this;
  aVar12 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
           TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1401c,8);
  uVar31 = 0;
  *(undefined8 *)((longlong)aVar12 + 8) = 0;
  pFVar32 = (FUniquePageList *)((longlong)aVar12 + 0x10);
  *(undefined ***)aVar12 =
       &
       ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  aVar14 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar12 + 8) = aVar14;
    LOCK();
    aVar15 = param_1->Next;
    bVar36 = aVar14 == aVar15;
    if (bVar36) {
      param_1->Next = aVar12;
      aVar15 = aVar14;
    }
    UNLOCK();
    aVar14 = aVar15;
  } while (!bVar36);
  *(undefined8 *)((longlong)aVar12 + 0x14) = 0;
  local_338 = pFVar32;
  memset((void *)((longlong)aVar12 + 0x1c),0xff,0x8000);
  pFVar32->bInitialized = true;
  if (param_2->bEnableFeedback == false) goto LAB_1458fa333;
  plVar13 = local_258 + 2;
  lVar24 = 0x10;
  do {
    plVar13[-2] = 0;
    plVar13[-1] = 0;
    *plVar13 = 0;
    *(undefined4 *)(plVar13 + 1) = 0;
    plVar13 = plVar13 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  uVar33 = 0x10;
  if ((uint)param_2->NumFeedbackTasks < 0x10) {
    uVar33 = param_2->NumFeedbackTasks;
  }
  local_3a4 = 0;
  uVar28 = 1;
  if (1 < uVar33) {
    uVar28 = uVar33;
  }
  uVar28 = ((param_3->Size - 1) + uVar28) / uVar28;
  uVar34 = 0;
  uVar33 = local_3a4;
  if (param_3->Size != 0) {
    do {
      uVar33 = (int)uVar34 + 1;
      local_258[uVar34 * 4] = (longlong)local_360;
      pFVar26 = pFVar32;
      if ((int)uVar34 != 0) {
        aVar12 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1401c,8);
        *(undefined8 *)((longlong)aVar12 + 8) = 0;
        *(undefined ***)aVar12 =
             &
             ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
        ;
        aVar14 = param_1->Next;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar12 + 8) = aVar14;
          LOCK();
          aVar15 = param_1->Next;
          bVar36 = aVar14 == aVar15;
          if (bVar36) {
            param_1->Next = aVar12;
            aVar15 = aVar14;
          }
          UNLOCK();
          aVar14 = aVar15;
        } while (!bVar36);
        ((FUniquePageList *)((longlong)aVar12 + 0x10))->bInitialized = false;
        *(undefined8 *)((longlong)aVar12 + 0x14) = 0;
        pFVar26 = (FUniquePageList *)((longlong)aVar12 + 0x10);
      }
      *(FUniquePageList **)(local_240 + uVar34 * 8 + -2) = pFVar26;
      uVar11 = param_3->Size - (int)uVar31;
      local_258[uVar34 * 4 + 1] = (longlong)(param_3->Data + uVar31);
      if (uVar28 < uVar11) {
        uVar11 = uVar28;
      }
      uVar30 = (int)uVar31 + uVar11;
      uVar31 = (ulonglong)uVar30;
      local_240[uVar34 * 8] = uVar11;
      param_2 = local_380;
      uVar34 = (ulonglong)uVar33;
    } while (uVar30 < param_3->Size);
  }
  local_3a4 = uVar33;
  uVar33 = local_3a4;
  local_288.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_260 = 0;
  uVar28 = local_3a4;
  if (param_2->bParallelFeedbackTasks != false) {
    uVar28 = 1;
  }
  local_25c = 4;
  local_390 = local_3a4 - uVar28;
  if (0 < local_390) {
    FVar17 = StatPtr_STAT_ProcessRequests_SubmitTasks;
    if (StatPtr_STAT_ProcessRequests_SubmitTasks ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks>)0x0) {
      pFVar16 = ::FName::FName(&local_2a8,"STAT_ProcessRequests_SubmitTasks");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_SubmitTasks,
                          *pFVar16,L"Submit Tasks","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar17;
    bVar5 = false;
    bVar36 = false;
    local_328.ComparisonIndex.Value = 0;
    local_328.Number = 0;
    if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_1458f9ab4:
      bVar6 = false;
      FVar27 = local_328;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_378.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_378._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar5 = false;
        bVar36 = true;
        if (-1 < CpuChannel->Enabled) {
          local_358.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_358.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_358,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0xafa);
          bVar5 = true;
          bVar36 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458f9ab4;
      local_3a0 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar6 = true;
    }
    lVar24 = (longlong)local_390;
    if (local_25c < local_390) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,local_390,&local_288,local_260,&local_25c);
    }
    if (uVar28 < uVar33) {
      plVar13 = local_258 + (ulonglong)uVar28 * 4;
      do {
        this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
        if (this_00 == (FTaskBase *)0x0) {
          this_00 = (FTaskBase *)0x0;
        }
        else {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_00,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)0x0);
          this_00->_padding_ = (longlong)&___7__TGraphTask_VFFeedbackAnalysisTask____6B_;
        }
        lVar25 = plVar13[1];
        this_00[1]._padding_ = *plVar13;
        this_00[1]._padding_ = lVar25;
        lVar25 = plVar13[3];
        this_00[1]._padding_ = plVar13[2];
        this_00[1]._padding_ = lVar25;
        UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_3a6,&local_3a7);
        UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_3a6[0],local_3a7,None);
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        local_388.Reference = (FBaseGraphTask *)this_00;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xf8);
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_288;
        if (local_288.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_288.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_388) {
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_288;
          if (local_288.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = local_288.SecondaryData;
          }
          if ((&local_388 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + (longlong)local_25c * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_260 == local_25c) {
          local_260 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                (0x808,&local_288,&local_25c);
        }
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_288;
        if (local_288.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_288.SecondaryData;
        }
        lVar25 = (longlong)local_260;
        plVar13 = plVar13 + 4;
        local_260 = local_260 + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar25 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar25 * 8))->Reference =
             local_388.Reference;
        local_388.Reference = (FBaseGraphTask *)0x0;
        lVar24 = lVar24 + -1;
        param_1 = (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *)local_398;
        uVar33 = local_3a4;
      } while (lVar24 != 0);
    }
    if (bVar36) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    }
  }
  if (uVar33 == 0) {
    uVar33 = 0;
  }
  else {
    FVar19 = StatPtr_STAT_FeedbackAnalysis;
    if (StatPtr_STAT_FeedbackAnalysis == (FThreadSafeStaticStat<FStat_STAT_FeedbackAnalysis>)0x0) {
      pFVar16 = ::FName::FName(&local_2a0,"STAT_FeedbackAnalysis");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_FeedbackAnalysis>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FeedbackAnalysis,*pFVar16,
                          L"Feedback Analysis","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar19;
    bVar36 = false;
    bVar6 = false;
    local_318.ComparisonIndex.Value = 0;
    local_318.Number = 0;
    bVar5 = false;
    bVar10 = false;
    if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_1458f9e1f:
      bVar6 = bVar10;
      bVar36 = bVar5;
      bVar5 = false;
      FVar27 = local_318;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_374.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_374._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar36 = false;
        bVar6 = true;
        bVar5 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_350.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_350.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_350,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0xb04);
          bVar36 = true;
          bVar6 = true;
          bVar5 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458f9e1f;
      local_3a0 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar5 = true;
    }
    FVar35 = (FName)(longlong)(int)uVar28;
    local_3a0 = FVar35;
    if (0 < (int)uVar28) {
      plVar13 = local_258 + 2;
      do {
        bVar10 = -1 < CpuChannel->Enabled;
        local_3a0 = FVar35;
        local_368 = plVar13;
        if (bVar10) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_static_void___cdecl_FFeedbackAnalysisTask::DoTask(FFeedbackAnalysisParameters&___ptr64)'
                      ::__l2::__CpuProfilerEventSpecId261,
                     "FVirtualTextureSystem::FeedbackAnalysisTask",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0x105);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_static_void___cdecl_FFeedbackAnalysisTask::DoTask(FFeedbackAnalysisParameters&___ptr64)'
                     ::__l2::__CpuProfilerEventSpecId261);
        }
        pcVar3 = (char *)*plVar13;
        if (*pcVar3 == '\0') {
          memset(pcVar3 + 0xc,0xff,0x8000);
          *pcVar3 = '\x01';
        }
        pFVar32 = (FUniquePageList *)*plVar13;
        uVar33 = 0xffffffff;
        puVar29 = (uint *)plVar13[-1];
        if (*(uint *)(plVar13 + 1) != 0) {
          uVar31 = (ulonglong)*(uint *)(plVar13 + 1);
          uVar28 = 0;
          do {
            uVar11 = *puVar29;
            uVar30 = puVar29[1];
            if (uVar11 == uVar33) {
              uVar30 = uVar28 + uVar30;
              uVar11 = uVar33;
            }
            else if (uVar33 != 0xffffffff) {
              FUniquePageList::Add(pFVar32,uVar33,uVar28);
            }
            uVar33 = uVar11;
            puVar29 = puVar29 + 2;
            uVar31 = uVar31 - 1;
            uVar28 = uVar30;
          } while (uVar31 != 0);
          plVar13 = local_368;
          FVar35 = local_3a0;
          if (uVar33 != 0xffffffff) {
            FUniquePageList::Add(pFVar32,uVar33,uVar30);
            plVar13 = local_368;
            FVar35 = local_3a0;
          }
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        plVar13 = plVar13 + 4;
        FVar35 = (FName)((longlong)FVar35 + -1);
      } while (FVar35 != (FName)0x0);
      local_3a0.ComparisonIndex.Value = 0;
      local_3a0.Number = 0;
      param_1 = (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *)local_398;
      local_368 = plVar13;
    }
    if (0 < local_390) {
      FVar20 = StatPtr_STAT_ProcessRequests_WaitTasks;
      if (StatPtr_STAT_ProcessRequests_WaitTasks ==
          (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks>)0x0) {
        pFVar16 = ::FName::FName(&local_298,"STAT_ProcessRequests_WaitTasks");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_WaitTasks,
                            *pFVar16,L"Wait Tasks","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                            L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar35 = *(FName *)FVar20;
      bVar10 = false;
      bVar8 = false;
      local_308.ComparisonIndex.Value = 0;
      local_308.Number = 0;
      if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_1458fa054:
        bVar7 = false;
        FVar35 = local_308;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_370.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_370._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
          bVar10 = false;
          bVar8 = true;
          if (-1 < CpuChannel->Enabled) {
            local_348.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
            local_348.Number = FVar35.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_348,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0xb0c);
            bVar10 = true;
            bVar8 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fa054;
        local_398 = FVar35;
        FThreadStats::AddMessage(FVar35,CycleScopeStart);
        bVar7 = true;
      }
      pFVar21 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar21 + 0x60))(pFVar21,&local_288);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_2e0.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
          local_2e0.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_2e8);
          local_2e0.StatData.Pad[4] = '\0';
          local_2e0.StatData.Pad[5] = '\0';
          local_2e0.StatData.Pad[6] = '\0';
          local_2e0.StatData.Pad[7] = '\0';
          local_2e0.StatData.Pad[0] = local_2e8.s.LowPart._0_1_;
          local_2e0.StatData.Pad[1] = local_2e8.s.LowPart._1_1_;
          local_2e0.StatData.Pad[2] = local_2e8.s.LowPart._2_1_;
          local_2e0.StatData.Pad[3] = local_2e8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_2e0);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar36) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    uVar33 = local_3a4;
    if (bVar5) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
      uVar33 = local_3a4;
    }
  }
  pFVar32 = local_338;
  if (1 < uVar33) {
    FVar22 = StatPtr_STAT_ProcessRequests_MergePages;
    if (StatPtr_STAT_ProcessRequests_MergePages ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergePages>)0x0) {
      pFVar16 = ::FName::FName(&local_290,"STAT_ProcessRequests_MergePages");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergePages>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_MergePages,
                          *pFVar16,L"Merge Unique Pages","STATGROUP_VirtualTexturing",
                          "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar27 = *(FName *)FVar22;
    bVar5 = false;
    bVar36 = false;
    local_2f8.ComparisonIndex.Value = 0;
    local_2f8.Number = 0;
    if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_1458fa29c:
      bVar6 = false;
      FVar27 = local_2f8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_36c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_36c._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar5 = false;
        bVar36 = true;
        if (-1 < CpuChannel->Enabled) {
          local_340.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_340.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_340,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0xb14);
          bVar5 = true;
          bVar36 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fa29c;
      local_398 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar6 = true;
    }
    pFVar32 = local_338;
    puVar23 = local_228;
    uVar31 = (ulonglong)(uVar33 - 1);
    do {
      FUniquePageList::MergePages(pFVar32,(FUniquePageList *)*puVar23);
      puVar23 = puVar23 + 4;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
    if (bVar36) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    }
  }
  FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_288;
  if (local_288.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar18 = local_288.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar18,local_260);
  param_2 = local_380;
  this = local_360;
  param_4 = local_330;
  if (local_288.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_288.SecondaryData);
    param_2 = local_380;
    this = local_360;
    param_4 = local_330;
  }
LAB_1458fa333:
  pTVar9 = CVarVTPlaybackMipBias.Ref;
  if (0 < (this->PageRequestPlaybackBuffer).ArrayNum) {
    if (param_2->bEnablePlayback != false) {
      local_2d0.UniquePageList = (FUniquePageList *)0x0;
      local_2d0.System = this;
      bVar36 = IsInParallelRenderingThread();
      if ((!bVar36) &&
         (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar36)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = pTVar9->ShadowedValue[1];
      fVar37 = UTexture2D::GetGlobalMipMapLODBias();
      fVar37 = fVar37 + fVar2;
      local_2d0.LevelBias = (int)ROUND((fVar37 + __real_3f800000 + fVar37) - __real_3f000000) >> 1;
      local_2d0.RequestBuffer = (ulong64 *)(this->PageRequestPlaybackBuffer).AllocatorInstance.Data;
      local_2d0.NumRequests = (this->PageRequestPlaybackBuffer).ArrayNum;
      puVar23 = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1401c,8);
      puVar23[1] = 0;
      *puVar23 = &
                 ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
      ;
      pFVar26 = (FUniquePageList *)(puVar23 + 2);
      lVar24 = *(longlong *)param_1;
      do {
        puVar23[1] = lVar24;
        LOCK();
        lVar25 = *(longlong *)param_1;
        bVar36 = lVar24 == lVar25;
        if (bVar36) {
          *param_1 = (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>)puVar23;
          lVar25 = lVar24;
        }
        UNLOCK();
        lVar24 = lVar25;
      } while (!bVar36);
      *(undefined8 *)((longlong)puVar23 + 0x14) = 0;
      local_2d0.UniquePageList = pFVar26;
      memset((void *)((longlong)puVar23 + 0x1c),0xff,0x8000);
      pFVar26->bInitialized = true;
      AddRequestedTilesTask(this,&local_2d0);
      FUniquePageList::MergePages(pFVar32,pFVar26);
      param_2 = local_380;
    }
    (this->PageRequestPlaybackBuffer).ArrayNum = 0;
    if ((this->PageRequestPlaybackBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PageRequestPlaybackBuffer).AllocatorInstance,0,
                 &(this->PageRequestPlaybackBuffer).ArrayMax);
    }
  }
  if (PendingFrameDelay <= this->Frame) {
    GatherRequests(this,param_4,pFVar32,this->Frame - PendingFrameDelay,param_1,param_2);
  }
  return;
}

// GatherLockedTileRequests @ 1458fa4f0

void __thiscall
FVirtualTextureSystem::GatherLockedTileRequests
          (FVirtualTextureSystem *this,FUniqueRequestList *param_1)

{
  int *piVar1;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar2;
  FBinaryHeap<unsigned_int,unsigned_short> *this_00;
  FVirtualTextureProducerHandle FVar3;
  longlong lVar4;
  FVirtualTextureProducerHandle *pFVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement FVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  FVirtualTextureProducerHandle *pFVar18;
  undefined1 local_res8 [8];
  FUniqueRequestList *local_res10;
  FVirtualTextureProducerHandle local_res18 [2];
  uint local_res20;
  FVirtualTextureLocalTileRequest local_58;
  FVirtualTextureProducerHandle *local_50;
  
  local_res20 = (this->TilesToLock).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  pFVar18 = (FVirtualTextureProducerHandle *)(this->TilesToLock).AllocatorInstance.Data;
  local_50 = pFVar18 + uVar14 * 2;
  local_res10 = param_1;
  do {
    pFVar5 = local_50;
    if ((this->TilesToLock).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureLocalTile,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar18 == pFVar5) {
      (this->TilesToLock).ArrayNum = 0;
      if ((this->TilesToLock).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->TilesToLock).AllocatorInstance,0,&(this->TilesToLock).ArrayMax);
      }
      return;
    }
    FVar3 = (FVirtualTextureProducerHandle)pFVar18->PackedValue;
    uVar17 = (this->Producers).Producers.ArrayNum;
    uVar16 = FVar3.PackedValue & 0x3fffff;
    local_res18[0] = FVar3;
    if (uVar16 < uVar17) {
      if (((int)uVar17 <= (int)uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = (this->Producers).Producers.AllocatorInstance.Data + (ulonglong)uVar16 * 0xf8;
      if ((*(ushort *)(pFVar15 + 0xf4) == (ushort)((uint)FVar3 >> 0x16)) &&
         (pFVar15 != (FScriptContainerElement *)0x0)) {
        FVar13 = pFVar15[0x2a];
        uVar16 = 0;
        uVar17 = 0;
        if (FVar13 != (FScriptContainerElement)0x0) {
          do {
            if (((byte)FVar13 <= uVar17) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LayerIndex < Description.NumTextureLayers",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                   ,0x1f,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar13 = pFVar15[(ulonglong)uVar17 + 0xbd];
            if (((byte)pFVar15[0xbc] <= (byte)FVar13) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GroupIndex < Description.NumPhysicalGroups",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                   ,0x22,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((*(int *)(pFVar15 + 0xd8) <= (int)(uint)(byte)FVar13) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar4 = *(longlong *)(*(longlong *)(pFVar15 + 0xd0) + (ulonglong)(byte)FVar13 * 8);
            uVar11 = FTexturePagePool::FindPageAddress
                               ((FTexturePagePool *)(lVar4 + 0x58),local_res18,(uchar)FVar13,
                                pFVar18[1].PackedValue & 0xffffff,
                                (byte)(pFVar18[1].PackedValue >> 0x18) & 0xf);
            if (uVar11 == 0xffffffff) {
              uVar16 = uVar16 & 0xff | 1 << (uVar17 & 0x1f);
            }
            else {
              this_00 = (FBinaryHeap<unsigned_int,unsigned_short> *)(lVar4 + 0x80);
              if ((uVar11 & 0xffff) < *(uint *)(lVar4 + 0x88)) {
                uVar14 = (ulonglong)(uVar11 & 0xffff);
                uVar10 = *(ushort *)(*(longlong *)(lVar4 + 0xa0) + uVar14 * 2);
                if (uVar10 != 0xffff) {
                  lVar8 = (ulonglong)uVar10 * 2;
                  lVar6 = *(longlong *)(lVar4 + 0x90);
                  uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x98) + uVar14 * 4);
                  this_00->HeapNum = this_00->HeapNum - 1;
                  *(undefined2 *)(lVar6 + lVar8) =
                       *(undefined2 *)(lVar6 + (ulonglong)this_00->HeapNum * 2);
                  *(ushort *)
                   (*(longlong *)(lVar4 + 0xa0) +
                   (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x90) + lVar8) * 2) = uVar10;
                  *(undefined2 *)(*(longlong *)(lVar4 + 0xa0) + uVar14 * 2) = 0xffff;
                  if (uVar11 < *(uint *)(*(longlong *)(lVar4 + 0x98) +
                                        (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x90) + lVar8)
                                        * 4)) {
                    FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(this_00,uVar10);
                  }
                  else {
                    FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(this_00,uVar10);
                  }
                }
              }
            }
            FVar13 = pFVar15[0x2a];
            uVar17 = uVar17 + 1;
          } while (uVar17 < (byte)FVar13);
          if ((uchar)uVar16 != '\0') {
            bVar9 = (bool)(**(code **)(**(longlong **)(pFVar15 + 0xe0) + 0x10))
                                    (*(longlong **)(pFVar15 + 0xe0),
                                     pFVar18[1].PackedValue >> 0x18 & 0xffffff0f,
                                     pFVar18[1].PackedValue & 0xffffff);
            local_58.PackedValue =
                 (ulonglong)((byte)pFVar15[0xc5] & 7) << 0x3c |
                 *(ulonglong *)pFVar18 & 0xfffffffffffffff;
            FVirtualTextureLocalTileRequest::ValidatePriorities
                      ((FVirtualTextureLocalTileRequest *)&local_58._s_1);
            uVar10 = FUniqueRequestList::LockLoadRequest(local_res10,&local_58,(uchar)uVar16,bVar9);
            if (uVar10 == 0xffff) {
              pTVar2 = &this->TilesToLockForNextFrame;
              pFVar5 = (FVirtualTextureProducerHandle *)(pTVar2->AllocatorInstance).Data;
              if (((pFVar5 <= pFVar18) &&
                  (pFVar18 < pFVar5 + (longlong)(this->TilesToLockForNextFrame).ArrayMax * 2)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar12 = (this->TilesToLockForNextFrame).ArrayNum;
              piVar1 = &(this->TilesToLockForNextFrame).ArrayMax;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->TilesToLockForNextFrame).ArrayNum = iVar12 + 1;
              *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
                   *(ulonglong *)pFVar18;
            }
          }
        }
      }
    }
    uVar14 = (ulonglong)local_res20;
    pFVar18 = pFVar18 + 2;
  } while( true );
}

// GatherPackedTileRequests @ 1458fb4c0

void __thiscall
FVirtualTextureSystem::GatherPackedTileRequests
          (FVirtualTextureSystem *this,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1,
          FVirtualTextureUpdateSettings *param_2,FUniqueRequestList *param_3)

{
  int *piVar1;
  FUniquePageList *this_00;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  ForAnyElementType local_38 [2];
  
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  if (0 < (this->RequestedPackedTiles).ArrayNum) {
    pTVar2 = &this->RequestedPackedTiles;
    piVar1 = &(this->RequestedPackedTiles).ArrayMax;
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_38 != pTVar2) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar6 = (this->RequestedPackedTiles).ArrayNum;
      (this->RequestedPackedTiles).ArrayNum = 0;
      *piVar1 = 0;
    }
    (this->RequestedPackedTiles).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < iVar6) {
      aVar3 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
               )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1401c,8);
      *(undefined8 *)((longlong)aVar3 + 8) = 0;
      *(undefined ***)aVar3 =
           &
           ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
      ;
      this_00 = (FUniquePageList *)((longlong)aVar3 + 0x10);
      aVar4 = param_1->Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
         ((longlong)aVar3 + 8) = aVar4;
        LOCK();
        aVar5 = param_1->Next;
        bVar9 = aVar4 == aVar5;
        if (bVar9) {
          param_1->Next = aVar3;
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar9);
      *(undefined8 *)((longlong)aVar3 + 0x14) = 0;
      memset((void *)((longlong)aVar3 + 0x1c),0xff,0x8000);
      this_00->bInitialized = true;
      for (pFVar8 = pFVar7; pFVar8 != pFVar7 + (longlong)iVar6 * 4; pFVar8 = pFVar8 + 4) {
        FUniquePageList::Add(this_00,*(uint *)pFVar8,0xffff);
      }
      GatherRequests(this,param_3,this_00,this->Frame,param_1,param_2);
    }
  }
  if (pFVar7 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar7);
  return;
}

// GatherRequests @ 1458fb680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::GatherRequests
          (FVirtualTextureSystem *this,FUniqueRequestList *param_1,FUniquePageList *param_2,
          uint param_3,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_4,
          FVirtualTextureUpdateSettings *param_5)

{
  int *piVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FPageUpdateBuffer **ppFVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar12;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks> FVar15;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Gather> FVar17;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks> FVar18;
  FTaskGraphInterface *pFVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergeRequests> FVar22;
  uint uVar23;
  uint uVar24;
  FNameEntryId FVar25;
  FNameEntryId FVar26;
  undefined8 *puVar27;
  FUniqueRequestList *pFVar28;
  FName FVar29;
  FName FVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint *puVar37;
  bool bVar38;
  undefined1 auStackY_568 [32];
  uint local_508;
  EExtendedTaskPriority local_504;
  ETaskPriority local_503 [3];
  FName local_500;
  FColor_u_0 local_4f8 [2];
  TRefCountPtr<FBaseGraphTask> local_4f0;
  FName local_4e8;
  FName local_4e0;
  uint local_4d8;
  uint uStack_4d4;
  int local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  FColor_u_0 local_4c0;
  FColor_u_0 local_4bc;
  FColor_u_0 local_4b8 [2];
  FName local_4b0;
  FName local_4a0;
  FName local_490;
  FVirtualTextureSystem *local_488;
  FUniqueRequestList *local_480;
  FName local_478;
  FName local_468;
  FUniquePageList *local_458;
  LARGE_INTEGER local_450;
  LARGE_INTEGER local_448;
  FStatMessage local_440;
  FStatMessage local_430;
  FName local_420;
  FName local_418;
  FName local_410;
  FName local_408;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_400;
  int local_3d8;
  int local_3d4 [3];
  FGatherRequestsParameters local_3c8;
  uint local_390 [6];
  undefined8 auStack_378 [102];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  ppFVar10 = &local_3c8.PageUpdateBuffers;
  lVar32 = 0x10;
  uVar31 = 0x10;
  if ((uint)param_5->NumGatherTasks < 0x10) {
    uVar31 = param_5->NumGatherTasks;
  }
  uVar9 = 1;
  if (1 < uVar31) {
    uVar9 = uVar31;
  }
  uVar31 = 0x80;
  if ((uint)param_5->MaxGatherPagesBeforeFlush < 0x80) {
    uVar31 = param_5->MaxGatherPagesBeforeFlush;
  }
  uVar34 = 0;
  uVar33 = 0;
  do {
    ((FGatherRequestsParameters *)(ppFVar10 + -2))->System = (FVirtualTextureSystem *)0x0;
    ppFVar10[-1] = (FPageUpdateBuffer *)0x0;
    *ppFVar10 = (FPageUpdateBuffer *)0x0;
    ppFVar10[1] = (FPageUpdateBuffer *)0x0;
    ppFVar10[2] = (FPageUpdateBuffer *)0x0;
    *(uint *)(ppFVar10 + 3) = 0;
    *(undefined2 *)(ppFVar10 + 4) = 0;
    ppFVar10 = ppFVar10 + 7;
    lVar32 = lVar32 + -1;
  } while (lVar32 != 0);
  uVar23 = param_2->NumPages;
  local_508 = 0;
  uVar9 = ((uVar23 - 1) + uVar9) / uVar9;
  uVar24 = 0x40;
  if (0x40 < uVar9) {
    uVar24 = uVar9;
  }
  uVar35 = uVar34;
  local_4d8 = param_3;
  local_4cc = uVar23;
  local_4c8 = uVar24;
  local_4c4 = uVar31;
  local_488 = this;
  local_480 = param_1;
  local_458 = param_2;
  if (uVar23 != 0) {
    do {
      uVar33 = (uint)uVar34;
      uVar9 = uVar23 - uVar33;
      if (uVar24 < uVar23 - uVar33) {
        uVar9 = uVar24;
      }
      uVar36 = uVar35;
      if (uVar9 != 0) {
        local_4d0 = (int)uVar35;
        local_508 = local_4d0 + 1;
        bVar38 = param_5->bForceContinuousUpdate;
        (&local_3c8)[uVar35].System = local_488;
        local_390[uVar35 * 0xe + -3] = param_3;
        lVar32 = (longlong)(local_488->PhysicalSpaces).ArrayNum;
        *(bool *)(local_390 + (uVar35 * 7 + -1) * 2) = bVar38;
        *(bool *)((longlong)local_390 + uVar35 * 0x38 + -7) = param_5->bEnableFeedbackProduce;
        *(FUniquePageList **)(local_390 + (uVar35 * 7 + -6) * 2) = param_2;
        local_390[(uVar35 * 7 + -3) * 2] = uVar31;
        aVar11 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc
                             (lVar32 * 0x110 + 0x18,8);
        *(undefined8 *)((longlong)aVar11 + 8) = 0;
        *(undefined ***)aVar11 =
             &
             ___7__TObjectArray_UFPageUpdateBuffer_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
        ;
        *(longlong *)((longlong)aVar11 + 0x10) = lVar32;
        aVar12 = param_4->Next;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar11 + 8) = aVar12;
          LOCK();
          aVar13 = param_4->Next;
          bVar38 = aVar12 == aVar13;
          if (bVar38) {
            param_4->Next = aVar11;
            aVar13 = aVar12;
          }
          UNLOCK();
          aVar12 = aVar13;
        } while (!bVar38);
        if (lVar32 != 0) {
          puVar27 = (undefined8 *)((longlong)aVar11 + 0x11c);
          do {
            memset((void *)((longlong)puVar27 + -0x104),0,0x100);
            *(undefined4 *)((longlong)puVar27 + -4) = 0xffffffff;
            *puVar27 = 0;
            *(undefined4 *)(puVar27 + 1) = 0;
            puVar27 = puVar27 + 0x22;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
        *(undefined8 **)(local_390 + (uVar35 * 7 + -5) * 2) =
             (undefined8 *)((longlong)aVar11 + 0x18);
        pFVar28 = local_480;
        if (local_4d0 != 0) {
          aVar11 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0xd870,8);
          *(undefined8 *)((longlong)aVar11 + 8) = 0;
          *(undefined ***)aVar11 =
               &
               ___7__TObject_VFUniqueRequestList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
          ;
          aVar12 = param_4->Next;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar11 + 8) = aVar12;
            LOCK();
            aVar13 = param_4->Next;
            bVar38 = aVar12 == aVar13;
            if (bVar38) {
              param_4->Next = aVar11;
              aVar13 = aVar12;
            }
            UNLOCK();
            aVar12 = aVar13;
          } while (!bVar38);
          FUniqueRequestList::FUniqueRequestList
                    ((FUniqueRequestList *)((longlong)aVar11 + 0x10),param_4);
          pFVar28 = (FUniqueRequestList *)((longlong)aVar11 + 0x10);
        }
        uVar36 = (ulonglong)local_508;
        *(FUniqueRequestList **)(local_390 + (uVar35 * 7 + -4) * 2) = pFVar28;
        local_390[uVar35 * 0xe + -5] = uVar33;
        uVar34 = (ulonglong)(uVar33 + uVar9);
        local_390[(uVar35 * 7 + -2) * 2] = uVar9;
        param_2 = local_458;
        uVar31 = local_4c4;
        uVar23 = local_4cc;
        uVar24 = local_4c8;
        param_3 = local_4d8;
      }
      uVar33 = (uint)uVar36;
      uVar35 = uVar36;
    } while ((uint)uVar34 < uVar23);
  }
  local_400.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_3d8 = 0;
  local_3d4[0] = 4;
  if (uVar33 < 2) {
    if (uVar33 == 0) goto LAB_1458fc236;
  }
  else {
    FVar15 = StatPtr_STAT_ProcessRequests_SubmitTasks;
    if (StatPtr_STAT_ProcessRequests_SubmitTasks ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks>)0x0) {
      pFVar14 = ::FName::FName(&local_420,"STAT_ProcessRequests_SubmitTasks");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_SubmitTasks>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_SubmitTasks,
                          *pFVar14,L"Submit Tasks","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar29 = *(FName *)FVar15;
    bVar38 = false;
    bVar7 = false;
    local_478.ComparisonIndex.Value = 0;
    local_478.Number = 0;
    FVar25 = FVar29.ComparisonIndex.Value;
    uVar31 = FVar29.Number;
    if ((FVar25.Value == 0) && (uVar31 == 0)) {
LAB_1458fba33:
      bVar4 = false;
      FVar29 = local_478;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_4c0.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_4c0._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar38 = false;
        bVar7 = true;
        if (-1 < CpuChannel->Enabled) {
          local_490.ComparisonIndex.Value = FVar25.Value;
          local_490.Number = uVar31;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_490,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0x648);
          bVar38 = true;
          bVar7 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fba33;
      local_4d8 = FVar25.Value;
      uStack_4d4 = uVar31;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar4 = true;
    }
    uVar31 = uVar33 - 1;
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if (local_3d4[0] < (int)uVar31) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,uVar31,&local_400,local_3d8,local_3d4);
    }
    uVar34 = (ulonglong)(uVar33 - 1);
    puVar37 = local_390;
    do {
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x110,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_00->_padding_ = (longlong)&___7__TGraphTask_VFGatherRequestsTask____6B_;
      }
      lVar32 = *(longlong *)(puVar37 + 2);
      this_00[1]._padding_ = *(longlong *)puVar37;
      this_00[1]._padding_ = lVar32;
      lVar32 = *(longlong *)(puVar37 + 6);
      this_00[1]._padding_ = *(longlong *)(puVar37 + 4);
      this_00[1]._padding_ = lVar32;
      lVar32 = *(longlong *)(puVar37 + 10);
      this_00[1]._padding_ = *(longlong *)(puVar37 + 8);
      this_00[1]._padding_ = lVar32;
      uVar31 = puVar37[0xd];
      this_00[1].RefCount = (atomic<unsigned_int>)puVar37[0xc];
      this_00[1].NumLocks = (atomic<unsigned_int>)uVar31;
      UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,local_503,&local_504);
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_503[0],local_504,None);
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      local_4f0.Reference = (FBaseGraphTask *)this_00;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x110);
      FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_400;
      if (local_400.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar16 = local_400.SecondaryData;
      }
      if ((ulonglong)FVar16 <= &local_4f0) {
        FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_400;
        if (local_400.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar16 = local_400.SecondaryData;
        }
        if ((&local_4f0 <
             (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + (longlong)local_3d4[0] * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_3d8 == local_3d4[0]) {
        local_3d8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                              (0x808,&local_400,local_3d4);
      }
      FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_400;
      if (local_400.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar16 = local_400.SecondaryData;
      }
      pTVar2 = (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + (longlong)local_3d8 * 8);
      local_3d8 = local_3d8 + 1;
      pTVar2->Reference = (FBaseGraphTask *)0x0;
      puVar37 = puVar37 + 0xe;
      pTVar2->Reference = local_4f0.Reference;
      local_4f0.Reference = (FBaseGraphTask *)0x0;
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar38) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    uVar33 = local_508;
    if (bVar4) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
    }
  }
  FVar17 = StatPtr_STAT_ProcessRequests_Gather;
  if (StatPtr_STAT_ProcessRequests_Gather ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Gather>)0x0) {
    pFVar14 = ::FName::FName(&local_418,"STAT_ProcessRequests_Gather");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Gather>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_Gather,*pFVar14,
                        L"Gather Requests","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar17;
  bVar38 = false;
  bVar7 = false;
  local_4a0.ComparisonIndex.Value = 0;
  local_4a0.Number = 0;
  FVar25 = FVar29.ComparisonIndex.Value;
  uVar31 = FVar29.Number;
  if ((FVar25.Value == 0) && (uVar31 == 0)) {
LAB_1458fbd98:
    bVar4 = false;
    FVar29 = local_4a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4bc._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar38 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4e8.ComparisonIndex.Value = FVar25.Value;
        local_4e8.Number = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4e8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0x652);
        bVar38 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fbd98;
    local_4e8.ComparisonIndex.Value = FVar25.Value;
    local_4e8.Number = uVar31;
    local_4a0 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar4 = true;
  }
  GatherRequestsTask(local_488,&local_3c8);
  if (0 < local_3d8) {
    FVar18 = StatPtr_STAT_ProcessRequests_WaitTasks;
    if (StatPtr_STAT_ProcessRequests_WaitTasks ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks>)0x0) {
      pFVar14 = ::FName::FName(&local_410,"STAT_ProcessRequests_WaitTasks");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_WaitTasks>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_WaitTasks,
                          *pFVar14,L"Wait Tasks","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar30 = *(FName *)FVar18;
    FVar25.Value = 0;
    bVar5 = false;
    bVar8 = false;
    local_4b0.ComparisonIndex.Value = 0;
    local_4b0.Number = 0;
    FVar26 = FVar30.ComparisonIndex.Value;
    uVar31 = FVar30.Number;
    if ((FVar26.Value == 0) && (uVar31 == 0)) {
LAB_1458fbee2:
      bVar6 = false;
      FVar30 = local_4b0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_4b8[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_4b8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar5 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_4e0.ComparisonIndex.Value = FVar26.Value;
          local_4e0.Number = uVar31;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_4e0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0x65a);
          bVar5 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fbee2;
      local_4e0.ComparisonIndex.Value = FVar26.Value;
      local_4e0.Number = uVar31;
      local_4b0 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar6 = true;
      FVar25.Value = local_4b0.ComparisonIndex.Value;
    }
    pFVar19 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar19 + 0x60))(pFVar19,&local_400);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    uVar33 = local_508;
    if ((((bVar6) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_440.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
        local_440.NameAndInfo.Index.Value = FVar25.Value;
        QueryPerformanceCounter(&local_450);
        local_440.StatData.Pad[4] = '\0';
        local_440.StatData.Pad[5] = '\0';
        local_440.StatData.Pad[6] = '\0';
        local_440.StatData.Pad[7] = '\0';
        local_440.StatData.Pad[0] = local_450.s.LowPart._0_1_;
        local_440.StatData.Pad[1] = local_450.s.LowPart._1_1_;
        local_440.StatData.Pad[2] = local_450.s.LowPart._2_1_;
        local_440.StatData.Pad[3] = local_450.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_440);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_430.NameAndInfo.Index.Value = local_4a0.ComparisonIndex.Value;
      local_430.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_448);
      local_430.StatData.Pad[4] = '\0';
      local_430.StatData.Pad[5] = '\0';
      local_430.StatData.Pad[6] = '\0';
      local_430.StatData.Pad[7] = '\0';
      local_430.StatData.Pad[0] = local_448.s.LowPart._0_1_;
      local_430.StatData.Pad[1] = local_448.s.LowPart._1_1_;
      local_430.StatData.Pad[2] = local_448.s.LowPart._2_1_;
      local_430.StatData.Pad[3] = local_448.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_430);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  if (uVar33 < 2) goto LAB_1458fc236;
  FVar22 = StatPtr_STAT_ProcessRequests_MergeRequests;
  if (StatPtr_STAT_ProcessRequests_MergeRequests ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergeRequests>)0x0) {
    pFVar14 = ::FName::FName(&local_408,"STAT_ProcessRequests_MergeRequests");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MergeRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_MergeRequests,
                        *pFVar14,L"Merge Requests","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar22;
  bVar38 = false;
  bVar7 = false;
  local_468.ComparisonIndex.Value = 0;
  local_468.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_1458fc1d2:
    bVar4 = false;
    local_500 = local_468;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4f8[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar38 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_500 = FVar29;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_500,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0x663);
        bVar38 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1458fc1d2;
    local_500 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar4 = true;
  }
  pFVar28 = local_480;
  puVar27 = auStack_378;
  uVar34 = (ulonglong)(uVar33 - 1);
  do {
    FUniqueRequestList::MergeRequests(pFVar28,(FUniqueRequestList *)*puVar27,param_4);
    FVar29 = local_500;
    puVar27 = puVar27 + 7;
    uVar34 = uVar34 - 1;
  } while (uVar34 != 0);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
LAB_1458fc236:
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_400;
  if (local_400.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar16 = local_400.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar16,local_3d8);
  if (local_400.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_400.SecondaryData);
  }
  return;
}

// GatherRequestsTask @ 1458fc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::GatherRequestsTask
          (FVirtualTextureSystem *this,FGatherRequestsParameters *param_1)

{
  longlong lVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  FPageUpdateBuffer *pFVar5;
  FUniqueRequestList *this_00;
  FAdaptiveVirtualTexture *this_01;
  FName FVar6;
  code *pcVar7;
  FVirtualTextureSystem *pFVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  FAllocatedVirtualTexture *pFVar16;
  ulonglong uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NumPageUpdate> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_NumPageVisible> FVar22;
  FThreadSafeStaticStat<FStat_STAT_NumPageVisibleResident> FVar23;
  FThreadSafeStaticStat<FStat_STAT_NumPageVisibleNotResident> FVar24;
  FThreadSafeStaticStat<FStat_STAT_NumPagePrefetch> FVar25;
  byte bVar26;
  byte bVar27;
  FScriptContainerElement FVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  FScriptContainerElement FVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  FPageUpdateBuffer *pFVar38;
  uint uVar39;
  FScriptContainerElement FVar40;
  uint uVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  FScriptContainerElement *pFVar47;
  ulonglong uVar48;
  uint uVar49;
  longlong lVar50;
  FTexturePagePool *this_02;
  uchar auVar51 [8];
  uchar auVar52 [8];
  uchar auVar53 [8];
  uchar auVar54 [8];
  ushort uVar55;
  uint uVar56;
  ulonglong uVar57;
  FPageUpdateBuffer *pFVar58;
  uchar auVar59 [8];
  undefined1 auStackY_2d8 [32];
  uint local_274;
  int local_24c;
  uint local_240;
  uint local_220;
  uint local_214;
  uint local_210;
  uint local_204;
  uint local_200;
  FVirtualTextureProducerHandle local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  longlong local_1e8;
  uint local_1e0;
  FScriptContainerElement *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  FVirtualTextureSystem *local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  ulonglong local_1a0;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  byte *local_188;
  FGatherRequestsParameters *local_180;
  uint local_178;
  uint local_174;
  longlong local_170;
  uint *local_168;
  FVirtualTextureLocalTileRequest local_160;
  FVirtualTextureLocalTileRequest local_158;
  FVirtualTextureLocalTileRequest local_150;
  FDirectMappingRequest local_148;
  FScriptContainerElement *local_138;
  FUniquePageList *local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1cc = param_1->PageUpdateFlushCount;
  local_200 = 0;
  local_130 = param_1->UniquePageList;
  pFVar5 = param_1->PageUpdateBuffers;
  this_00 = param_1->RequestList;
  uVar31 = param_1->PageStartIndex;
  uVar17 = (ulonglong)uVar31;
  uVar45 = param_1->NumPages + uVar31;
  bVar12 = param_1->bForceContinuousUpdate;
  local_204 = 0;
  local_1ec = 0;
  local_1c0 = 0;
  local_180 = param_1;
  uVar48 = uVar17;
  do {
    local_1b8 = this;
    if (uVar45 <= uVar31) {
      uVar31 = 0;
      if ((this->PhysicalSpaces).ArrayNum != 0) {
        do {
          uVar45 = 0;
          if ((int)uVar31 < (this->PhysicalSpaces).ArrayNum) {
            uVar45 = ~uVar31 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(longlong *)
               ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar31 * 8) != 0) {
            if (((int)uVar31 < 0) || ((this->PhysicalSpaces).ArrayNum <= (int)uVar31)) {
              lVar50 = 0;
            }
            else {
              uVar45 = 0;
              if ((int)uVar31 < (this->PhysicalSpaces).ArrayNum) {
                uVar45 = ~uVar31 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar50 = *(longlong *)
                        ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)uVar31 * 8);
            }
            pFVar58 = pFVar5 + uVar31;
            uVar45 = pFVar58->NumPages;
            uVar17 = (ulonglong)uVar45;
            if (uVar45 != 0) {
              pFVar58->NumPageUpdates = pFVar58->NumPageUpdates + uVar45;
              this_02 = (FTexturePagePool *)(lVar50 + 0x58);
              if (this_02 == (FTexturePagePool *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection((LPCRITICAL_SECTION)this_02);
              pFVar38 = pFVar58;
              do {
                FTexturePagePool::UpdateUsage(this_02,this->Frame,pFVar38->PhysicalAddresses[0]);
                pFVar38 = (FPageUpdateBuffer *)(pFVar38->PhysicalAddresses + 1);
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
              LeaveCriticalSection((LPCRITICAL_SECTION)this_02);
            }
            auVar59[4] = '\0';
            auVar59[5] = '\0';
            auVar59[6] = '\0';
            auVar59[7] = '\0';
            auVar59._0_4_ = pFVar58->NumPageUpdates;
            if ((auVar59 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
              FVar19 = StatPtr_STAT_NumPageUpdate;
              if (StatPtr_STAT_NumPageUpdate == (FThreadSafeStaticStat<FStat_STAT_NumPageUpdate>)0x0
                 ) {
                pFVar18 = ::FName::FName(&local_b0,"STAT_NumPageUpdate");
                FVar19 = (FThreadSafeStaticStat<FStat_STAT_NumPageUpdate>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPageUpdate,
                                    *pFVar18,L"Num page update","STATGROUP_VirtualTexturing",
                                    "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false
                                    ,false,MCR_Invalid);
              }
              FVar6 = *(FName *)FVar19;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar20 == (FThreadStats *)0x0) {
                  pFVar21 = FThreadStatsPool::Get();
                  pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
                }
                local_100.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
                local_128 = FVar6;
                local_100.StatData.Pad = auVar59;
                local_100.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
                FThreadStats::AddStatMessage(pFVar20,&local_100);
                FStatsTrace::Add(&local_128,(long64)auVar59);
                if (pFVar20->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar20,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar20,false,false);
                }
              }
            }
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 < (uint)(this->PhysicalSpaces).ArrayNum);
      }
      auVar51[4] = '\0';
      auVar51[5] = '\0';
      auVar51[6] = '\0';
      auVar51[7] = '\0';
      auVar51[0] = (char)local_204;
      auVar51[1] = (char)(local_204 >> 8);
      auVar51[2] = (char)(local_204 >> 0x10);
      auVar51[3] = (char)(local_204 >> 0x18);
      if ((auVar51 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar22 = StatPtr_STAT_NumPageVisible;
        if (StatPtr_STAT_NumPageVisible == (FThreadSafeStaticStat<FStat_STAT_NumPageVisible>)0x0) {
          pFVar18 = ::FName::FName(&local_a8,"STAT_NumPageVisible");
          FVar22 = (FThreadSafeStaticStat<FStat_STAT_NumPageVisible>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPageVisible,*pFVar18,
                              L"Num page visible","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                              L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar6 = *(FName *)FVar22;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_f0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
          local_120 = FVar6;
          local_f0.StatData.Pad = auVar51;
          local_f0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar20,&local_f0);
          FStatsTrace::Add(&local_120,(long64)auVar51);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      auVar52[4] = '\0';
      auVar52[5] = '\0';
      auVar52[6] = '\0';
      auVar52[7] = '\0';
      auVar52[0] = (undefined1)local_1ec;
      auVar52[1] = local_1ec._1_1_;
      auVar52[2] = local_1ec._2_1_;
      auVar52[3] = local_1ec._3_1_;
      if ((auVar52 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar23 = StatPtr_STAT_NumPageVisibleResident;
        if (StatPtr_STAT_NumPageVisibleResident ==
            (FThreadSafeStaticStat<FStat_STAT_NumPageVisibleResident>)0x0) {
          pFVar18 = ::FName::FName(&local_a0,"STAT_NumPageVisibleResident");
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_NumPageVisibleResident>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPageVisibleResident,
                              *pFVar18,L"Num page visible resident","STATGROUP_VirtualTexturing",
                              "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false
                              ,MCR_Invalid);
        }
        FVar6 = *(FName *)FVar23;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_e0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
          local_118 = FVar6;
          local_e0.StatData.Pad = auVar52;
          local_e0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar20,&local_e0);
          FStatsTrace::Add(&local_118,(long64)auVar52);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      auVar53[4] = '\0';
      auVar53[5] = '\0';
      auVar53[6] = '\0';
      auVar53[7] = '\0';
      auVar53[0] = (undefined1)local_1c0;
      auVar53[1] = local_1c0._1_1_;
      auVar53[2] = local_1c0._2_1_;
      auVar53[3] = local_1c0._3_1_;
      if ((auVar53 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar24 = StatPtr_STAT_NumPageVisibleNotResident;
        if (StatPtr_STAT_NumPageVisibleNotResident ==
            (FThreadSafeStaticStat<FStat_STAT_NumPageVisibleNotResident>)0x0) {
          pFVar18 = ::FName::FName(&local_98,"STAT_NumPageVisibleNotResident");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_NumPageVisibleNotResident>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPageVisibleNotResident,
                              *pFVar18,L"Num page visible not resident","STATGROUP_VirtualTexturing"
                              ,"STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar6 = *(FName *)FVar24;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_d0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
          local_110 = FVar6;
          local_d0.StatData.Pad = auVar53;
          local_d0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar20,&local_d0);
          FStatsTrace::Add(&local_110,(long64)auVar53);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      auVar54[4] = '\0';
      auVar54[5] = '\0';
      auVar54[6] = '\0';
      auVar54[7] = '\0';
      auVar54[0] = (char)local_200;
      auVar54[1] = (char)(local_200 >> 8);
      auVar54[2] = (char)(local_200 >> 0x10);
      auVar54[3] = (char)(local_200 >> 0x18);
      if ((local_200 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar25 = StatPtr_STAT_NumPagePrefetch;
        if (StatPtr_STAT_NumPagePrefetch == (FThreadSafeStaticStat<FStat_STAT_NumPagePrefetch>)0x0)
        {
          pFVar18 = ::FName::FName(&local_90,"STAT_NumPagePrefetch");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_NumPagePrefetch>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPagePrefetch,*pFVar18,
                              L"Num page prefetch","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                              L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar6 = *(FName *)FVar25;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_c0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
          local_108 = FVar6;
          local_c0.StatData.Pad = auVar54;
          local_c0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar20,&local_c0);
          FStatsTrace::Add(&local_108,(long64)auVar54);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      return;
    }
    local_1f4 = local_130->Pages[uVar17];
    uVar4 = local_130->Counts[uVar17];
    uVar56 = local_1f4 >> 0x1c;
    uVar29 = (uint)uVar48;
    local_1c4 = uVar56;
    if ((int)uVar56 < (this->Spaces).ArrayNum) {
      if (((this->Spaces).ArrayNum <= (int)uVar56) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar29 = uVar31, bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar50 = *(longlong *)((this->Spaces).AllocatorInstance.Data + (ulonglong)uVar56 * 8);
      if (lVar50 != 0) {
        uVar35 = local_1f4 >> 0x18 & 0xf;
        uVar14 = 1;
        if (1 < uVar35) {
          uVar14 = uVar35;
        }
        uVar14 = uVar14 - 1;
        bVar26 = (byte)uVar14;
        uVar33 = (local_1f4 >> 0xc & 0xfff) << (bVar26 & 0x1f);
        local_1b0 = (local_1f4 & 0xfff) << (bVar26 & 0x1f);
        uVar29 = ((local_1b0 & 0xffff) << 8 ^ local_1b0 & 0xffff) & 0xff00ff;
        uVar29 = (uVar29 << 4 ^ uVar29) & 0xf0f0f0f;
        uVar43 = (uVar29 * 4 ^ uVar29) & 0x33333333;
        uVar29 = ((uVar33 & 0xffff) << 8 ^ uVar33 & 0xffff) & 0xff00ff;
        uVar29 = (uVar29 << 4 ^ uVar29) & 0xf0f0f0f;
        uVar29 = (uVar29 * 4 ^ uVar29) & 0x33333333;
        uVar43 = ((uVar29 * 2 ^ uVar29) & 0xd5555555) * 2 | (uVar43 * 2 ^ uVar43) & 0x55555555;
        local_1f4 = uVar33;
        if ((int)uVar56 < (this->AdaptiveVTs).ArrayNum) {
          if (((this->AdaptiveVTs).ArrayNum <= (int)uVar56) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_01 = *(FAdaptiveVirtualTexture **)
                     ((this->AdaptiveVTs).AllocatorInstance.Data + (ulonglong)uVar56 * 8);
          if ((this_01 != (FAdaptiveVirtualTexture *)0x0) && (uVar35 < 2)) {
            uVar29 = FAdaptiveVirtualTexture::GetPackedAllocationRequest
                               (this_01,uVar43,uVar35,this->Frame);
            if (uVar29 != 0) {
              uVar56 = this_00->NumAdaptiveAllocationRequests;
              if (uVar56 < 0x1000) {
                this_00->AdaptiveAllocationsRequests[uVar56] = uVar29;
                this_00->NumAdaptiveAllocationRequests = uVar56 + 1;
              }
            }
            uVar29 = uVar31;
            if (uVar35 == 0) goto LAB_1458fc92e;
          }
        }
        uVar56 = uVar14 * 0x1000000 | uVar43 & 0xffffff;
        local_214 = 0;
        uVar35 = 0;
        uVar29 = (uVar56 >> 0x10 ^ uVar56) * -0x7a143595;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        iVar30 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        local_188 = (byte *)(lVar50 + 0x2a);
        bVar27 = *local_188;
        uVar29 = uVar31;
        if (bVar27 != 0) {
          local_1a0 = (ulonglong)(ushort)((ushort)((uint)iVar30 >> 0x10) ^ (ushort)iVar30);
          do {
            uVar48 = local_1a0;
            if ((bVar27 <= uVar35) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PageTableLayerIndex < Description.NumPageTableLayers",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                                    ,0x44,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_204 = local_204 + 1;
            lVar42 = (ulonglong)uVar35 * 0xa8 + lVar50;
            for (uVar29 = *(uint *)(*(longlong *)(lVar42 + 0xf8) +
                                   (*(uint *)(lVar42 + 0xec) & uVar48) * 4); uVar29 != 0xffffffff;
                uVar29 = *(uint *)(*(longlong *)(lVar42 + 0x100) + (ulonglong)uVar29 * 4)) {
              uVar33 = 0;
              if ((int)uVar29 < *(int *)(lVar42 + 0xe0)) {
                uVar33 = ~uVar29 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar1 = *(longlong *)(lVar42 + 0xd8) + (longlong)(int)uVar29 * 0x18;
              if (*(uint *)(*(longlong *)(lVar42 + 0xd8) + (longlong)(int)uVar29 * 0x18) == uVar56)
              {
                uVar13 = *(ushort *)(lVar1 + 0x14);
                uVar55 = (ushort)*(byte *)(lVar1 + 0x16);
                local_1f0 = CONCAT22(uVar13,uVar55);
                goto LAB_1458fc690;
              }
            }
            uVar55 = 0xffff;
            local_1f0 = 0xffffffff;
            uVar13 = 0xffff;
LAB_1458fc690:
            if (CONCAT22(uVar13,uVar55) == -1) {
              *(uint *)((longlong)&local_88 + (ulonglong)local_214 * 4) = uVar35;
              local_214 = local_214 + 1;
            }
            else {
              AddPageUpdate(this,pFVar5,local_1cc,(uint)uVar55,(ushort)((uint)local_1f0 >> 0x10));
              if ((bVar12 != false) || (*(char *)(lVar50 + 0x2c) != '\0')) {
                if ((int)(uint)uVar55 < (this->PhysicalSpaces).ArrayNum) {
                  if (((this->PhysicalSpaces).ArrayNum <= (int)(uint)uVar55) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar42 = *(longlong *)
                            ((this->PhysicalSpaces).AllocatorInstance.Data + (ulonglong)uVar55 * 8);
                }
                else {
                  lVar42 = 0;
                }
                uVar48 = (ulonglong)uVar13;
                if ((*(int *)(lVar42 + 0xf0) <= (int)(uint)uVar13) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar29 = *(uint *)(*(longlong *)(lVar42 + 0xe8) + 4 + uVar48 * 8);
                if ((*(int *)(lVar42 + 0xf0) <= (int)(uint)uVar13) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar33 = *(uint *)(*(longlong *)(lVar42 + 0xe8) + 4 + uVar48 * 8);
                if ((*(int *)(lVar42 + 0xf0) <= (int)(uint)uVar13) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_150.PackedValue =
                     CONCAT44(uVar33 & 0xffffff | uVar29 & 0xf000000,
                              *(undefined4 *)(*(longlong *)(lVar42 + 0xe8) + uVar48 * 8)) |
                     0x4000000000000000;
                FVirtualTextureLocalTileRequest::ValidatePriorities
                          ((FVirtualTextureLocalTileRequest *)&local_150._s_1);
                FUniqueRequestList::AddContinuousUpdateRequest(this_00,&local_150);
                this = local_1b8;
              }
              pFVar5[uVar55].WorkingSetSize = pFVar5[uVar55].WorkingSetSize + 1;
              local_1ec = local_1ec + 1;
            }
            uVar48 = (ulonglong)local_214;
            uVar35 = uVar35 + 1;
            bVar27 = *local_188;
          } while (uVar35 < bVar27);
          uVar29 = uVar31;
          if (local_214 != 0) {
            local_190 = 0;
            pFVar16 = FVirtualTextureAllocator::Find
                                ((FVirtualTextureAllocator *)(lVar50 + 0x38),uVar43,&local_190);
            pbVar9 = local_188;
            if (pFVar16 == (FAllocatedVirtualTexture *)0x0) {
              if (5 < (byte)LogVirtualTexturing._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
              }
            }
            else if ((pFVar16->FrameAllocated <= local_180->FrameRequested) &&
                    (*(char *)((longlong)&pFVar16->_padding_ + 4) == '\0')) {
              uVar56 = *(uint *)((longlong)&pFVar16->_padding_ + 4);
              if (((pFVar16->UniquePageTableLayers).ArrayNum != (uint)*local_188) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AllocatedVT->GetNumPageTableLayers() == Space->GetNumPageTableLayers()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                      ,0x71e,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar56 < uVar14) {
                if ((local_214 != *pbVar9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NumPageTableLayersToLoad == Space->GetNumPageTableLayers()"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x723,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((local_204 < *pbVar9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NumRequestsPages >= Space->GetNumPageTableLayers()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x724,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_204 = local_204 - *pbVar9;
              }
              else {
                uVar35 = (pFVar16->UniqueProducers).ArrayNum;
                local_68 = 0;
                local_60 = 0;
                if (local_214 != 0) {
                  puVar46 = (uint *)&local_88;
                  do {
                    uVar29 = *puVar46;
                    lVar42 = (longlong)(int)uVar29;
                    uVar36 = ~uVar29 >> 0x1f;
                    uVar33 = 0;
                    if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                      uVar33 = uVar36;
                    }
                    if ((uVar33 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar28 = (pFVar16->UniquePageTableLayers).AllocatorInstance.Data
                             [lVar42 * 0x10 + 8];
                    uVar57 = (ulonglong)(byte)FVar28;
                    if ((uVar35 <= (byte)FVar28) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ProducerIndex < NumUniqueProducers",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                            ,0x733,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar33 = 0;
                    if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                      uVar33 = uVar36;
                    }
                    if ((uVar33 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    *(byte *)((longlong)&local_60 + uVar57) =
                         *(byte *)((longlong)&local_60 + uVar57) |
                         (byte)(pFVar16->UniquePageTableLayers).AllocatorInstance.Data
                               [lVar42 * 0x10 + 10];
                    uVar33 = 0;
                    if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                      uVar33 = uVar36;
                    }
                    if ((uVar33 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    *(byte *)((longlong)&local_68 + uVar57) =
                         *(byte *)((longlong)&local_68 + uVar57) |
                         (byte)(1 << ((byte)(pFVar16->UniquePageTableLayers).AllocatorInstance.Data
                                            [lVar42 * 0x10 + 9] & 0x1f));
                    uVar33 = 0;
                    if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                      uVar33 = uVar36;
                    }
                    if ((uVar33 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    lVar42 = *(longlong *)
                              ((pFVar16->UniquePageTableLayers).AllocatorInstance.Data +
                              lVar42 * 0x10);
                    if (lVar42 != 0) {
                      pFVar5[*(ushort *)(lVar42 + 600)].WorkingSetSize =
                           pFVar5[*(ushort *)(lVar42 + 600)].WorkingSetSize + 1;
                    }
                    puVar46 = puVar46 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                bVar27 = *(byte *)(lVar50 + 0x28);
                uVar29 = *(uint *)((longlong)&pFVar16->_padding_ + 4);
                uVar33 = (uint)pFVar16->_padding_;
                local_18c = uVar29;
                local_178 = uVar33;
                if ((uVar43 < (uint)pFVar16->_padding_) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("vAddress >= AllocatedVT->GetVirtualAddress()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x746,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((local_1b0 < uVar29) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("vPageX >= AllocatedPageX",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x747,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((local_1f4 < uVar33) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("vPageY >= AllocatedPageY",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x748,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_274 = 0;
                uVar29 = uVar31;
                if (uVar35 != 0) {
                  local_1e8 = 0;
                  do {
                    bVar2 = *(byte *)((longlong)&local_68 + local_1e8);
                    uVar29 = (uint)bVar2;
                    local_210 = (uint)bVar2;
                    if (bVar2 != 0) {
                      uVar33 = 0;
                      if ((int)local_274 < (pFVar16->UniqueProducers).ArrayNum) {
                        uVar33 = ~local_274 >> 0x1f;
                      }
                      if ((uVar33 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pFVar8 = local_1b8;
                      local_1f8 = (FVirtualTextureProducerHandle)
                                  ((FVirtualTextureProducerHandle *)
                                  ((pFVar16->UniqueProducers).AllocatorInstance.Data +
                                  (longlong)(int)local_274 * 8))->PackedValue;
                      uVar33 = (local_1b8->Producers).Producers.ArrayNum;
                      uVar36 = local_1f8.PackedValue & 0x3fffff;
                      if (uVar36 < uVar33) {
                        if (((int)uVar33 <= (int)uVar36) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pFVar47 = (pFVar8->Producers).Producers.AllocatorInstance.Data +
                                  (ulonglong)uVar36 * 0xf8;
                        local_1d8 = pFVar47;
                        if ((*(ushort *)(pFVar47 + 0xf4) == (ushort)(local_1f8.PackedValue >> 0x16))
                           && (pFVar47 != (FScriptContainerElement *)0x0)) {
                          uVar33 = 0;
                          if ((int)local_274 < (pFVar16->UniqueProducers).ArrayNum) {
                            uVar33 = ~local_274 >> 0x1f;
                          }
                          if ((uVar33 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          FVar28 = (pFVar16->UniqueProducers).AllocatorInstance.Data
                                   [(longlong)(int)local_274 * 8 + 4];
                          local_1a0 = (ulonglong)(byte)pFVar47[0xc5];
                          FVar3 = pFVar47[0x29];
                          local_1c8 = (uint)(byte)FVar28;
                          if ((byte)FVar28 < uVar14) {
                            local_1c8 = uVar14;
                          }
                          uVar36 = (uint)(byte)FVar28;
                          uVar41 = local_1c8 - uVar36;
                          uVar33 = local_1b0 - local_18c >> ((byte)local_1c8 & 0x1f) & 0xffff;
                          uVar33 = (uVar33 << 8 ^ uVar33) & 0xff00ff;
                          uVar33 = (uVar33 << 4 ^ uVar33) & 0xf0f0f0f;
                          uVar44 = (uVar33 * 4 ^ uVar33) & 0x33333333;
                          uVar33 = local_1f4 - local_178 >> ((byte)local_1c8 & 0x1f) & 0xffff;
                          uVar33 = (uVar33 << 8 ^ uVar33) & 0xff00ff;
                          uVar33 = (uVar33 << 4 ^ uVar33) & 0xf0f0f0f;
                          uVar33 = (uVar33 * 4 ^ uVar33) & 0x33333333;
                          uVar33 = ((uVar33 * 2 ^ uVar33) & 0xd5555555) * 2 |
                                   (uVar44 * 2 ^ uVar44) & 0x55555555;
                          local_1e0 = uVar33;
                          iVar30 = (**(code **)(**(longlong **)(pFVar47 + 0xe0) + 8))
                                             (*(longlong **)(pFVar47 + 0xe0),uVar41 & 0xff,uVar33);
                          if (iVar30 != 0) {
                            local_1c8 = local_1c8 + iVar30;
                            uVar41 = uVar41 + iVar30;
                            local_1e0 = uVar33 >> ((char)iVar30 * bVar27 & 0x1f);
                          }
                          local_138 = pFVar47 + 0xbc;
                          FVar34 = *local_138;
                          local_220 = 0;
                          local_58 = 0;
                          uStack_50 = 0;
                          FVar40 = SUB41(uVar41,0);
                          local_240 = uVar41;
                          uVar33 = uVar41;
                          if (FVar34 != (FScriptContainerElement)0x0) {
                            do {
                              if ((byte)((byte)uVar29 & (byte)(1 << ((byte)local_220 & 0x1f))) != 0)
                              {
                                if (((byte)FVar34 <= local_220) &&
                                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("GroupIndex < Description.NumPhysicalGroups"
                                                        ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                                  ,0x22,L""), bVar11)) {
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                uVar29 = 0;
                                if ((int)local_220 < *(int *)(pFVar47 + 0xd8)) {
                                  uVar29 = ~local_220 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                lVar42 = *(longlong *)
                                          (*(longlong *)(pFVar47 + 0xd0) +
                                          (longlong)(int)local_220 * 8);
                                FVar34 = FVar40;
                                uVar29 = local_1e0;
                                uVar44 = uVar56;
                                local_170 = lVar42;
                                if ((byte)FVar40 <= (byte)FVar3) {
LAB_1458fd110:
                                  uVar33 = FTexturePagePool::FindPageAddress
                                                     ((FTexturePagePool *)(lVar42 + 0x58),&local_1f8
                                                      ,(byte)local_220,uVar29,(uchar)FVar34);
                                  if (uVar33 == 0xffffffff) goto code_r0x0001458fd12e;
                                  uVar29 = uVar33 & 0xffff;
                                  if ((*(int *)(lVar42 + 0xf0) <= (int)uVar29) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  if ((*(longlong *)
                                        (*(longlong *)(lVar42 + 0xe8) + (ulonglong)uVar29 * 8) == 0)
                                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("Pages[pAddress].PackedValue != 0u",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                                                  ,0x49,L""), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  if ((*(int *)(lVar42 + 0xf0) <= (int)uVar29) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  uVar37 = *(byte *)(*(longlong *)(lVar42 + 0xe8) + 7 +
                                                    (ulonglong)uVar29 * 8) & 0xf;
                                  local_194 = uVar37;
                                  if ((uVar37 < uVar41) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("AllocatedLocal_vLevel >= Local_vLevel",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                                  ,0x787,L""), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  uVar44 = uVar36 + uVar37;
                                  uVar29 = uVar56;
                                  if (uVar44 < uVar56) {
                                    uVar29 = uVar44;
                                  }
                                  if (uVar37 == uVar41) {
                                    local_210 = local_210 & ~(1 << (local_220 & 0x1f));
                                    local_1ec = local_1ec + 1;
                                    uVar29 = uVar14;
                                  }
                                  if ((uVar56 < uVar29) &&
                                     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                                         (&bGEnsureHasExecuted<524962509581453207>,
                                                          false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                                  ,0x797,"Allocated_vLevel <= MaxLevel"), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  lVar42 = local_170;
                                  local_174 = -1 << ((char)uVar29 * bVar27 & 0x1f) & uVar43;
                                  AddPageUpdate(local_1b8,pFVar5,local_1cc,
                                                (uint)*(ushort *)(local_170 + 600),(ushort)uVar33);
                                  uVar10 = local_174;
                                  local_1ac = CONCAT22((ushort)uVar33,*(undefined2 *)(lVar42 + 600))
                                  ;
                                  uVar39 = local_1ac;
                                  local_24c = 0;
                                  local_1d8 = pFVar47;
                                  if (local_214 == 0) goto LAB_1458fd6c3;
                                  local_198 = uVar33 & 0xffff;
                                  local_168 = (uint *)&local_88;
                                  local_1a8 = (ulonglong)local_214;
                                  do {
                                    uVar33 = *local_168;
                                    uVar32 = 0;
                                    if ((int)uVar33 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                                      uVar32 = ~uVar33 >> 0x1f;
                                    }
                                    if ((uVar32 == 0) &&
                                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    if ((byte)(pFVar16->UniquePageTableLayers).AllocatorInstance.
                                              Data[(longlong)(int)uVar33 * 0x10 + 9] == local_220) {
                                      uVar32 = 0;
                                      if ((int)uVar33 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                                        uVar32 = ~uVar33 >> 0x1f;
                                      }
                                      if ((uVar32 == 0) &&
                                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                        pcVar7 = (code *)swi(3);
                                        (*pcVar7)();
                                        return;
                                      }
                                      if ((byte)(pFVar16->UniquePageTableLayers).AllocatorInstance.
                                                Data[(longlong)(int)uVar33 * 0x10 + 8] == local_274)
                                      {
                                        if ((*local_188 <= uVar33) &&
                                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                               (
                                                  "PageTableLayerIndex < Description.NumPageTableLayers"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                                                  ,0x44,L""), bVar11)) {
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        uVar49 = uVar29 << 0x18 | uVar10 & 0xffffff;
                                        uVar32 = (uVar49 >> 0x10 ^ uVar49) * -0x7a143595;
                                        lVar42 = (ulonglong)uVar33 * 0xa8 + lVar50;
                                        uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
                                        for (uVar32 = *(uint *)(*(longlong *)(lVar42 + 0xf8) +
                                                               (ulonglong)
                                                               ((uVar32 >> 0x10 ^ uVar32 & 0xffff) &
                                                               *(uint *)(lVar42 + 0xec)) * 4);
                                            uVar32 != 0xffffffff;
                                            uVar32 = *(uint *)(*(longlong *)(lVar42 + 0x100) +
                                                              (ulonglong)uVar32 * 4)) {
                                          uVar15 = 0;
                                          if ((int)uVar32 < *(int *)(lVar42 + 0xe0)) {
                                            uVar15 = ~uVar32 >> 0x1f;
                                          }
                                          if ((uVar15 == 0) &&
                                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                            pcVar7 = (code *)swi(3);
                                            (*pcVar7)();
                                            return;
                                          }
                                          lVar1 = *(longlong *)(lVar42 + 0xd8) +
                                                  (longlong)(int)uVar32 * 0x18;
                                          if (*(uint *)(*(longlong *)(lVar42 + 0xd8) +
                                                       (longlong)(int)uVar32 * 0x18) == uVar49) {
                                            bVar2 = *(byte *)(lVar1 + 0x16);
                                            uVar32 = (uint)bVar2;
                                            uVar13 = *(ushort *)(lVar1 + 0x14);
                                            local_1d0 = CONCAT22(uVar13,(ushort)bVar2);
                                            goto LAB_1458fd56b;
                                          }
                                        }
                                        local_1d0 = -1;
                                        uVar32 = 0xffff;
                                        uVar13 = 0xffff;
LAB_1458fd56b:
                                        iVar30 = local_1d0;
                                        uVar32 = (uint)uVar13 << 0x10 | uVar32;
                                        if (((uVar32 - 1 < 0xfffffffe) && (uVar32 != uVar39)) &&
                                           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                                               (&
                                                  bGEnsureHasExecuted<524962509581453226>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                                  ,0x7aa,
                                                  "PrevPhysicalSpaceIDAndAddress.Packed == ~0u || PrevPhysicalSpaceIDAndAddress.Packed == 0u || PrevPhysicalSpaceIDAndAddress == PhysicalSpaceIDAndAddress"
                                                  ), bVar11)) {
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        if (iVar30 == -1) {
                                          local_148.PackedValue[0] =
                                               ((uint)*(byte *)(lVar50 + 0x6f0) << 4 | uVar29 & 0xf)
                                               << 0x18 | uVar10 & 0xffffff;
                                          local_148.PackedValue[2] = uVar33 & 0xf;
                                          local_148.PackedValue[1] =
                                               ((uVar44 & 0xf | uVar56 << 4) << 8 |
                                               (uint)(byte)*(undefined2 *)(local_170 + 600)) << 0x10
                                               | local_198;
                                          FUniqueRequestList::AddDirectMappingRequest
                                                    (this_00,&local_148);
                                        }
                                        local_24c = local_24c + 1;
                                      }
                                    }
                                    local_168 = local_168 + 1;
                                    local_1a8 = local_1a8 - 1;
                                  } while (local_1a8 != 0);
                                  local_1a8 = 0;
                                  if (local_24c == 0) {
LAB_1458fd6c3:
                                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("NumMappedPages > 0u",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                                  ,0x7b4,L"");
                                    if (bVar11) {
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                  }
                                  pFVar47 = local_1d8;
                                  uVar44 = local_194;
                                  uVar29 = local_210;
                                  uVar33 = local_240;
                                  if (uVar37 != uVar41) goto LAB_1458fd144;
                                  goto LAB_1458fd720;
                                }
LAB_1458fd144:
                                uVar29 = uVar44;
                                if (2 < uVar44) {
                                  uVar29 = 2;
                                }
                                uVar33 = uVar56 - uVar36;
                                if (uVar44 - uVar29 < uVar56 - uVar36) {
                                  uVar33 = uVar44 - uVar29;
                                }
                                pFVar47 = local_1d8;
                                uVar29 = local_210;
                                if (uVar41 < uVar33) {
                                  *(byte *)((longlong)&local_58 + (ulonglong)uVar33) =
                                       *(byte *)((longlong)&local_58 + (ulonglong)uVar33) |
                                       (byte)(1 << (local_220 & 0x1f));
                                  if (uVar33 < local_240) {
                                    uVar33 = local_240;
                                  }
                                  local_200 = local_200 + 1;
                                  local_1c0 = local_1c0 + 1;
                                  local_240 = uVar33;
                                }
                                else {
                                  local_1c0 = local_1c0 + 1;
                                  uVar33 = local_240;
                                }
                              }
LAB_1458fd720:
                              local_220 = local_220 + 1;
                              FVar34 = *local_138;
                              bVar2 = (byte)local_210;
                            } while (local_220 < (byte)FVar34);
                          }
                          local_210._0_1_ = bVar2;
                          uVar29 = uVar41 + 1;
                          if (uVar29 <= uVar33) {
                            uVar36 = uVar29 + (byte)FVar28;
                            iVar30 = uVar36 * bVar27;
                            do {
                              pFVar47 = local_1d8;
                              bVar2 = *(byte *)((longlong)&local_58 + (ulonglong)uVar29);
                              uVar44 = (uint)bVar2;
                              if (bVar2 != 0) {
                                uVar37 = 0;
                                uVar39 = local_1e0 >>
                                         (((uchar)uVar29 - (char)FVar40) * bVar27 & 0x1f);
                                FVar28 = local_1d8[0xbc];
                                if (FVar28 != (FScriptContainerElement)0x0) {
                                  do {
                                    if ((uVar44 >> (uVar37 & 0x1f) & 1) == 0) {
                                      if (((byte)FVar28 <= uVar37) &&
                                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                             (
                                                  "GroupIndex < Description.NumPhysicalGroups",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                                  ,0x22,L""), bVar11)) {
                                        pcVar7 = (code *)swi(3);
                                        (*pcVar7)();
                                        return;
                                      }
                                      uVar33 = 0;
                                      if ((int)uVar37 < *(int *)(pFVar47 + 0xd8)) {
                                        uVar33 = ~uVar37 >> 0x1f;
                                      }
                                      if ((uVar33 == 0) &&
                                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                        pcVar7 = (code *)swi(3);
                                        (*pcVar7)();
                                        return;
                                      }
                                      lVar42 = *(longlong *)
                                                (*(longlong *)(pFVar47 + 0xd0) +
                                                (longlong)(int)uVar37 * 8);
                                      uVar33 = FTexturePagePool::FindPageAddress
                                                         ((FTexturePagePool *)(lVar42 + 0x58),
                                                          &local_1f8,(uchar)uVar37,uVar39,
                                                          (uchar)uVar29);
                                      if (uVar33 == 0xffffffff) {
                                        uVar44 = uVar44 | 1 << (uVar37 & 0x1f);
                                        local_200 = local_200 + 1;
                                      }
                                      else {
                                        AddPageUpdate(local_1b8,pFVar5,local_1cc,
                                                      (uint)*(ushort *)(lVar42 + 600),(ushort)uVar33
                                                     );
                                      }
                                    }
                                    FVar28 = pFVar47[0xbc];
                                    uVar37 = uVar37 + 1;
                                    uVar33 = local_240;
                                  } while (uVar37 < (byte)FVar28);
                                }
                                if (local_180->bEnableLoadRequests != false) {
                                  uVar48 = (ulonglong)uVar29 & 0xff;
                                  bVar11 = (bool)(**(code **)(**(longlong **)(local_1d8 + 0xe0) +
                                                             0x10))(*(longlong **)(local_1d8 + 0xe0)
                                                                    ,uVar48,uVar39);
                                  local_160.PackedValue =
                                       ((ulonglong)(((uint)uVar48 & 0xf) << 0x18) |
                                        (ulonglong)((uint)local_1a0 & 7) << 0x1c |
                                       (ulonglong)(uVar39 & 0xffffff)) << 0x20 |
                                       (ulonglong)local_1f8.PackedValue;
                                  FVirtualTextureLocalTileRequest::ValidatePriorities
                                            ((FVirtualTextureLocalTileRequest *)&local_160._s_1);
                                  uVar13 = FUniqueRequestList::AddLoadRequest
                                                     (this_00,&local_160,(uchar)uVar44,uVar4,bVar11)
                                  ;
                                  uVar33 = local_240;
                                  if (uVar13 != 0xffff) {
                                    if ((uVar56 < uVar36) &&
                                       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                                           (&bGEnsureHasExecuted<524962509581453296>
                                                            ,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                                  ,0x7f0,"PrefetchMapping_vLevel <= MaxLevel"),
                                       bVar11)) {
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    if (local_214 != 0) {
                                      puVar46 = (uint *)&local_88;
                                      uVar48 = (ulonglong)local_214;
                                      do {
                                        uVar33 = *puVar46;
                                        uVar37 = 0;
                                        if ((int)uVar33 < (pFVar16->UniquePageTableLayers).ArrayNum)
                                        {
                                          uVar37 = ~uVar33 >> 0x1f;
                                        }
                                        if ((uVar37 == 0) &&
                                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                          pcVar7 = (code *)swi(3);
                                          (*pcVar7)();
                                          return;
                                        }
                                        if ((byte)(pFVar16->UniquePageTableLayers).AllocatorInstance
                                                  .Data[(longlong)(int)uVar33 * 0x10 + 8] ==
                                            local_274) {
                                          uVar37 = 0;
                                          if ((int)uVar33 <
                                              (pFVar16->UniquePageTableLayers).ArrayNum) {
                                            uVar37 = ~uVar33 >> 0x1f;
                                          }
                                          if ((uVar37 == 0) &&
                                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                            pcVar7 = (code *)swi(3);
                                            (*pcVar7)();
                                            return;
                                          }
                                          FVar28 = (pFVar16->UniquePageTableLayers).
                                                   AllocatorInstance.Data
                                                   [(longlong)(int)uVar33 * 0x10 + 9];
                                          if ((uVar44 >> ((byte)FVar28 & 0x1f) & 1) != 0) {
                                            FUniqueRequestList::AddMappingRequest
                                                      (this_00,uVar13,(uchar)FVar28,(uchar)local_1c4
                                                       ,(uchar)uVar33,uVar56,
                                                       -1 << ((byte)iVar30 & 0x1f) & uVar43,
                                                       (uchar)uVar36,(uchar)uVar36);
                                          }
                                        }
                                        puVar46 = puVar46 + 1;
                                        uVar48 = uVar48 - 1;
                                        uVar33 = local_240;
                                      } while (uVar48 != 0);
                                    }
                                  }
                                }
                              }
                              uVar29 = uVar29 + 1;
                              uVar36 = uVar36 + 1;
                              iVar30 = iVar30 + (uint)bVar27;
                            } while (uVar29 <= uVar33);
                          }
                          uVar29 = local_1e0;
                          if (((byte)local_210 != 0) && (local_180->bEnableLoadRequests != false)) {
                            bVar11 = (bool)(**(code **)(**(longlong **)(local_1d8 + 0xe0) + 0x10))
                                                     (*(longlong **)(local_1d8 + 0xe0),uVar41 & 0xff
                                                      ,local_1e0);
                            local_158.PackedValue =
                                 ((ulonglong)((uVar41 & 0xf) << 0x18) |
                                  (ulonglong)((uint)local_1a0 & 7) << 0x1c |
                                 (ulonglong)(uVar29 & 0xffffff)) << 0x20 |
                                 (ulonglong)local_1f8.PackedValue;
                            FVirtualTextureLocalTileRequest::ValidatePriorities
                                      ((FVirtualTextureLocalTileRequest *)&local_158._s_1);
                            uVar13 = FUniqueRequestList::AddLoadRequest
                                               (this_00,&local_158,(byte)local_210,uVar4,bVar11);
                            if ((uVar13 != 0xffff) && (local_214 != 0)) {
                              puVar46 = (uint *)&local_88;
                              uVar48 = (ulonglong)local_214;
                              do {
                                uVar29 = *puVar46;
                                uVar33 = 0;
                                if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                                  uVar33 = ~uVar29 >> 0x1f;
                                }
                                if ((uVar33 == 0) &&
                                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                if ((byte)(pFVar16->UniquePageTableLayers).AllocatorInstance.Data
                                          [(longlong)(int)uVar29 * 0x10 + 8] == local_274) {
                                  uVar33 = 0;
                                  if ((int)uVar29 < (pFVar16->UniquePageTableLayers).ArrayNum) {
                                    uVar33 = ~uVar29 >> 0x1f;
                                  }
                                  if ((uVar33 == 0) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  FVar28 = (pFVar16->UniquePageTableLayers).AllocatorInstance.Data
                                           [(longlong)(int)uVar29 * 0x10 + 9];
                                  if (((byte)local_210 & (byte)(1 << ((byte)FVar28 & 0x1f))) != 0) {
                                    FUniqueRequestList::AddMappingRequest
                                              (this_00,uVar13,(uchar)FVar28,(uchar)local_1c4,
                                               (uchar)uVar29,uVar56,uVar43,bVar26,(uchar)local_1c8);
                                  }
                                }
                                puVar46 = puVar46 + 1;
                                uVar48 = uVar48 - 1;
                              } while (uVar48 != 0);
                            }
                          }
                        }
                      }
                    }
                    local_274 = local_274 + 1;
                    local_1e8 = local_1e8 + 1;
                    uVar29 = uVar31;
                  } while (local_274 < uVar35);
                }
              }
            }
          }
        }
      }
    }
LAB_1458fc92e:
    uVar31 = uVar29 + 1;
    uVar48 = (ulonglong)uVar31;
    uVar17 = uVar17 + 1;
    this = local_1b8;
  } while( true );
code_r0x0001458fd12e:
  FVar34 = (FScriptContainerElement)((char)FVar34 + '\x01');
  pFVar47 = local_1d8;
  uVar29 = uVar29 >> 2;
  if ((byte)FVar3 < (byte)FVar34) goto LAB_1458fd144;
  goto LAB_1458fd110;
}

// Get @ 1458fe9d0

FVirtualTextureSystem * __cdecl FVirtualTextureSystem::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FVirtualTextureSystem *pFVar3;
  
  if ((GVirtualTextureSystem == (FVirtualTextureSystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GVirtualTextureSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x16d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVirtualTextureSystem *)(*pcVar1)();
    return pFVar3;
  }
  return GVirtualTextureSystem;
}

// GetAdaptiveVirtualTexture @ 1458fea20

FAdaptiveVirtualTexture * __thiscall
FVirtualTextureSystem::GetAdaptiveVirtualTexture(FVirtualTextureSystem *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAdaptiveVirtualTexture *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->AdaptiveVTs).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->AdaptiveVTs).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAdaptiveVirtualTexture *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FAdaptiveVirtualTexture **)
            ((this->AdaptiveVTs).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (FAdaptiveVirtualTexture *)0x0;
}

// GetContinuousUpdatesToProduce @ 145900060

void __thiscall
FVirtualTextureSystem::GetContinuousUpdatesToProduce
          (FVirtualTextureSystem *this,FUniqueRequestList *param_1,int param_2,int param_3)

{
  FVirtualTextureLocalTileRequest *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FVirtualTextureLocalTileRequest *pFVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  bool local_res20 [8];
  
  uVar2 = param_1->NumContinuousUpdateRequests;
  if (param_3 < 0) {
    if (0 < (int)uVar2) {
      lVar8 = 0;
      do {
        pFVar1 = param_1->ContinuousUpdateRequests + lVar8;
        uVar6 = param_1->ContinuousUpdateRequests[lVar8].PackedValue & 0xfffffffffffffff;
        local_res20[0] = false;
        pFVar5 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                 ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                           (&this->ContinuousUpdateTilesToProduce,
                            (int)(uVar6 >> 0x20) * 0x17 + (int)uVar6,pFVar1,local_res20);
        if (local_res20[0] != false) {
          FVirtualTextureLocalTileRequest::MergeWith
                    ((FVirtualTextureLocalTileRequest *)&pFVar5->_s_1,pFVar1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar2);
    }
  }
  else {
    uVar3 = uVar2;
    if (param_3 < (int)uVar2) {
      uVar3 = param_3;
    }
    iVar7 = 0;
    if (0 < (int)uVar3) {
      do {
        if (param_2 <=
            *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 -
            *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34) {
          return;
        }
        iVar4 = rand();
        local_res20[0] = false;
        uVar6 = (longlong)iVar4 % (longlong)(int)uVar2 & 0xffffffff;
        pFVar1 = param_1->ContinuousUpdateRequests + uVar6;
        uVar6 = param_1->ContinuousUpdateRequests[uVar6].PackedValue & 0xfffffffffffffff;
        pFVar5 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                 ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                           (&this->ContinuousUpdateTilesToProduce,
                            (int)(uVar6 >> 0x20) * 0x17 + (int)uVar6,pFVar1,local_res20);
        if (local_res20[0] != false) {
          FVirtualTextureLocalTileRequest::MergeWith
                    ((FVirtualTextureLocalTileRequest *)&pFVar5->_s_1,pFVar1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
    }
  }
  return;
}

// GetGlobalMipBias @ 1459008c0

TVector4<float> * __thiscall
FVirtualTextureSystem::GetGlobalMipBias
          (FVirtualTextureSystem *this,TVector4<float> *__return_storage_ptr__)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector4<float> *pTVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float local_48 [12];
  
  uVar7 = 0;
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->PhysicalSpaces).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<float> *)(*pcVar3)();
        return pTVar6;
      }
      lVar2 = *(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar8);
      if (lVar2 != 0) {
        uVar5 = *(uint *)(lVar2 + 0x44);
        fVar9 = *(float *)(lVar2 + 0x264);
        if ((3 < uVar5) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector4<float> *)(*pcVar3)();
          return pTVar6;
        }
        fVar1 = local_48[(int)uVar5];
        if (fVar9 <= fVar1) {
          fVar9 = fVar1;
        }
        if ((3 < uVar5) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector4<float> *)(*pcVar3)();
          return pTVar6;
        }
        local_48[(int)uVar5] = fVar9;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->PhysicalSpaces).ArrayNum);
  }
  fVar9 = UTexture2D::GetGlobalMipMapLODBias();
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_48[0] + fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_48[1] + fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_48[2] + fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.W = local_48[3] + fVar9;
  return __return_storage_ptr__;
}

// GetOnScreenMessages @ 145900ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::GetOnScreenMessages
          (FVirtualTextureSystem *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  longlong lVar12;
  uint uVar13;
  EOnScreenMessageSeverity local_res8 [8];
  EOnScreenMessageSeverity local_res18 [16];
  TSharedPtr<FCulture,1> local_118;
  TSharedPtr<FCulture,1> local_108;
  TSharedPtr<FCulture,1> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58 [2];
  
  if (0x10 < this->NumAllocatedSpaces) {
    local_118.Object = (FCulture *)0x0;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_a8,this->NumAllocatedSpaces,(FNumberFormattingOptions *)0x0,
                             &local_118);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"VirtualTexture",L"VTSpacesOversubscribed",
                        L"Using {0} virtual texture spaces. Feedback is disabled for some virtual textures. Consider using r.VT.PageTableMode=0."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_98,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_e8,pFVar9,pFVar7);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar7);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  pTVar4 = CVarVTResidencyNotify.Ref;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pTVar4->ShadowedValue[1] != 0) && (uVar13 = 0, 0 < (this->PhysicalSpaces).ArrayNum)) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < (this->PhysicalSpaces).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar12);
      if ((lVar2 != 0) && (this->Frame <= *(int *)(lVar2 + 0x268) + 0x3cU)) {
        fVar1 = *(float *)(lVar2 + 0x264);
        local_f8.Object = (FCulture *)0x0;
        local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar7 = FText::AsNumber(&local_88,*(int *)(lVar2 + 0x44),(FNumberFormattingOptions *)0x0,
                                 &local_f8);
        local_108.Object = (FCulture *)0x0;
        local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar8 = FText::AsNumber(&local_78,fVar1,(FNumberFormattingOptions *)0x0,&local_108);
        pFVar10 = FText::FromString(&local_68,(FString *)(lVar2 + 0x48));
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"VirtualTexture",L"VTOversubscribed",
                             L"VT Pool [{0}] is oversubscribed. Setting MipBias {1} on Group {2}");
        pFVar9 = FTextFormat::FTextFormat(local_58,pFVar11,Default);
        pFVar7 = FText::Format<FText,FText,FText>(&local_c8,pFVar9,pFVar10,pFVar8,pFVar7);
        local_res18[0] = Warning;
        TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
        ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res18,pFVar7);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < (this->PhysicalSpaces).ArrayNum);
  }
  return;
}

// GetPhysicalSpace @ 1459018c0

FVirtualTexturePhysicalSpace * __thiscall
FVirtualTextureSystem::GetPhysicalSpace(FVirtualTextureSystem *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FVirtualTexturePhysicalSpace *pFVar3;
  uint uVar4;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->PhysicalSpaces).ArrayNum)) {
    uVar4 = 0;
    if ((int)param_1 < (this->PhysicalSpaces).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FVirtualTexturePhysicalSpace *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FVirtualTexturePhysicalSpace **)
            ((this->PhysicalSpaces).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  }
  return (FVirtualTexturePhysicalSpace *)0x0;
}

// GetSpace @ 1459031b0

FVirtualTextureSpace * __thiscall
FVirtualTextureSystem::GetSpace(FVirtualTextureSystem *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FVirtualTextureSpace *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Spaces).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Spaces).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FVirtualTextureSpace *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
  }
  return (FVirtualTextureSpace *)0x0;
}

// GrowPhysicalPools @ 145909060

void __thiscall FVirtualTextureSystem::GrowPhysicalPools(FVirtualTextureSystem *this)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  int iVar11;
  uchar *puVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  TArray<FVirtualTextureSpacePoolConfig,TSizedDefaultAllocator<32>_> local_38;
  
  bVar5 = VirtualTexturePool::GetPoolAutoGrow();
  if (bVar5) {
    iVar7 = 0;
    uVar15 = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar8 = 0;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      lVar13 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar15 < (this->PhysicalSpaces).ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = local_38.ArrayNum;
        }
        lVar3 = *(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar13);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x268) == this->Frame)) {
          if (iVar7 == local_38.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&local_38.AllocatorInstance,&local_38.ArrayMax);
          }
          local_38.ArrayNum = iVar7 + 1;
          pFVar14 = local_38.AllocatorInstance.Data + (longlong)iVar7 * 0x30;
          DefaultConstructItems<FVirtualTextureSpacePoolConfig,int>(pFVar14,1);
          bVar1 = *(byte *)(lVar3 + 0x25);
          if ((((void *)(lVar3 + 0x26) == (void *)0x0) && (bVar1 != 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr != nullptr || Count == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x9c1,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,(uint)bVar1,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 8),
                             (int *)(pFVar14 + 0xc));
          if (bVar1 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0 + iVar8,(void *)(lVar3 + 0x26),
                   (ulonglong)bVar1);
          }
          uVar2 = *(undefined4 *)(lVar3 + 0x20);
          lVar10 = 0;
          iVar7 = 0;
          *(undefined4 *)(pFVar14 + 0x10) = uVar2;
          iVar11 = 0;
          *(undefined4 *)(pFVar14 + 0x14) = uVar2;
          iVar8 = *(int *)(lVar3 + 0x38);
          if (*(char *)(lVar3 + 0x25) != '\0') {
            puVar12 = (uchar *)(lVar3 + 0x26);
            do {
              uVar9 = CalculateImageBytes(*(uint *)(lVar3 + 0x20),*(uint *)(lVar3 + 0x20),0,*puVar12
                                         );
              lVar10 = lVar10 + uVar9;
              iVar7 = (int)lVar10;
              puVar12 = puVar12 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)(uint)*(byte *)(lVar3 + 0x25));
          }
          iVar11 = *(int *)(lVar3 + 0x3c) * iVar7 * (iVar8 + 1) * (iVar8 + 1);
          iVar8 = *(int *)(lVar3 + 0x3c) * iVar7 * iVar8 * iVar8 + 0x400000;
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
          }
          *(int *)(pFVar14 + 0x18) =
               (int)(iVar8 + 0xfffff + (iVar8 + 0xfffff >> 0x1f & 0xfffffU)) >> 0x14;
          iVar7 = local_38.ArrayNum;
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar15 < (this->PhysicalSpaces).ArrayNum);
      iVar8 = 0;
      if (iVar7 != 0) {
        VirtualTexturePool::AddOrModifyTransientPoolConfigs_RenderThread(&local_38);
        iVar8 = local_38.ArrayNum;
      }
    }
    DestructItems<FVirtualTextureSpacePoolConfig,int>
              ((FVirtualTextureSpacePoolConfig *)local_38.AllocatorInstance.Data,iVar8);
    if ((FVirtualTextureSpacePoolConfig *)local_38.AllocatorInstance.Data !=
        (FVirtualTextureSpacePoolConfig *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// Initialize @ 14590dfb0

void __cdecl FVirtualTextureSystem::Initialize(void)

{
  FVirtualTextureSystem *this;
  
  if (GVirtualTextureSystem == (FVirtualTextureSystem *)0x0) {
    this = ::operator_new(0x388);
    if (this != (FVirtualTextureSystem *)0x0) {
      GVirtualTextureSystem = FVirtualTextureSystem(this);
      return;
    }
    GVirtualTextureSystem = (FVirtualTextureSystem *)0x0;
  }
  return;
}

// IsPendingRootPageMap @ 14590ed40

bool __thiscall
FVirtualTextureSystem::IsPendingRootPageMap
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  bVar2 = param_1->bIsWaitingToMap;
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return bVar2;
}

// ListPhysicalPoolsFromConsole @ 14590f070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::ListPhysicalPoolsFromConsole(FVirtualTextureSystem *this)

{
  EVTPageTableFormat EVar1;
  FVirtualTextureSpace *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < (this->PhysicalSpaces).ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar7) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->PhysicalSpaces).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(*(longlong *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar7) + 0x18) !=
            -1) {
          uVar4 = 0;
          if ((int)uVar5 < (this->PhysicalSpaces).ArrayNum) {
            uVar4 = uVar6;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVirtualTexturePhysicalSpace::GetSizeInBytes
                    (*(FVirtualTexturePhysicalSpace **)
                      ((this->PhysicalSpaces).AllocatorInstance.Data + lVar7));
          if (3 < (byte)LogVirtualTexturing._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
          }
          if (((((3 < (byte)LogVirtualTexturing._0_1_) &&
                (UE::Logging::Private::BasicLog<4>
                           (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
                3 < (byte)LogVirtualTexturing._0_1_)) &&
               (UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
               3 < (byte)LogVirtualTexturing._0_1_)) &&
              ((UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
               3 < (byte)LogVirtualTexturing._0_1_ &&
               (UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
               3 < (byte)LogVirtualTexturing._0_1_)))) &&
             (UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
             3 < (byte)LogVirtualTexturing._0_1_)) {
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
          }
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->PhysicalSpaces).ArrayNum);
  }
  uVar5 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Spaces).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FVirtualTextureSpace **)((this->Spaces).AllocatorInstance.Data + lVar7);
      if (this_00 != (FVirtualTextureSpace *)0x0) {
        FVirtualTextureSpace::GetSizeInBytes(this_00);
        EVar1 = (this_00->Description).PageTableFormat;
        if (((EVar1 != UInt16) && (EVar1 != UInt32)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x238,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((3 < (byte)LogVirtualTexturing._0_1_) &&
            (UE::Logging::Private::BasicLog<4>
                       (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
            3 < (byte)LogVirtualTexturing._0_1_)) &&
           (UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
           3 < (byte)LogVirtualTexturing._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->Spaces).ArrayNum);
  }
  if (3 < (byte)LogVirtualTexturing._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
  }
  if ((3 < (byte)LogVirtualTexturing._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing),
     3 < (byte)LogVirtualTexturing._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
  }
  return;
}

// LoadPendingTiles @ 14590f6e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::LoadPendingTiles
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,Type param_2)

{
  FRecursiveMutex *this_00;
  int *piVar1;
  FUniquePageList *this_01;
  FUniqueRequestList *this_02;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> TVar5;
  bool bVar6;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar7;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> TVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar12;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> local_res8;
  ForAnyElementType local_68 [2];
  FVirtualTextureUpdateSettings local_58;
  
  if ((this->bUpdating != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x550,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar10 = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if (0 < (this->RequestedPackedTiles).ArrayNum) {
    pTVar2 = &this->RequestedPackedTiles;
    piVar1 = &(this->RequestedPackedTiles).ArrayMax;
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_68 != pTVar2) {
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar9 = (this->RequestedPackedTiles).ArrayNum;
      (this->RequestedPackedTiles).ArrayNum = 0;
      *piVar1 = 0;
    }
    (this->RequestedPackedTiles).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < iVar9) {
      FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(&local_58);
      local_res8.Next =
           (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
           0x0;
      aVar7 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
               )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1401c,8);
      *(undefined8 *)((longlong)aVar7 + 8) = 0;
      *(undefined ***)aVar7 =
           &
           ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
      ;
      this_01 = (FUniquePageList *)((longlong)aVar7 + 0x10);
      TVar8.Next = local_res8.Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
         ((longlong)aVar7 + 8) = TVar8.Next;
        LOCK();
        bVar6 = TVar8.Next != local_res8.Next;
        TVar5.Next = aVar7;
        if (bVar6) {
          TVar8.Next = local_res8.Next;
          TVar5.Next = local_res8.Next;
        }
        local_res8.Next = TVar5.Next;
        UNLOCK();
      } while (bVar6);
      *(undefined8 *)((longlong)aVar7 + 0x14) = 0;
      memset((void *)((longlong)aVar7 + 0x1c),0xff,0x8000);
      this_01->bInitialized = true;
      for (pFVar11 = pFVar10; pFVar11 != pFVar10 + (longlong)iVar9 * 4; pFVar11 = pFVar11 + 4) {
        FUniquePageList::Add(this_01,*(uint *)pFVar11,0xffff);
      }
      aVar7 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
               )TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0xd870,8);
      *(undefined8 *)((longlong)aVar7 + 8) = 0;
      *(undefined ***)aVar7 =
           &
           ___7__TObject_VFUniqueRequestList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
      ;
      this_02 = (FUniqueRequestList *)((longlong)aVar7 + 0x10);
      TVar8.Next = local_res8.Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
         ((longlong)aVar7 + 8) = TVar8.Next;
        LOCK();
        bVar6 = TVar8.Next != local_res8.Next;
        TVar5.Next = aVar7;
        if (bVar6) {
          TVar8.Next = local_res8.Next;
          TVar5.Next = local_res8.Next;
        }
        local_res8.Next = TVar5.Next;
        UNLOCK();
      } while (bVar6);
      FUniqueRequestList::FUniqueRequestList(this_02,&local_res8);
      memset(this_02,0xff,0x800);
      memset((undefined8 *)((longlong)aVar7 + 0x2810),0xff,0x800);
      memset((undefined8 *)((longlong)aVar7 + 0x6e10),0xff,0x400);
      memset((undefined8 *)((longlong)aVar7 + 0xb010),0xff,0x800);
      GatherLockedTileRequests(this,this_02);
      GatherRequests(this,this_02,this_01,this->Frame,&local_res8,&local_58);
      AllocateResources(this,param_1);
      SubmitRequests(this,(FRHICommandList *)param_1->_padding_,param_2,&local_res8,&local_58,
                     this_02,false);
      FinalizeRequests(this,param_1,(ISceneRenderer *)0x0);
      pTVar3 = &this->TilesToLockForNextFrame;
      pTVar12 = &this->TilesToLock;
      if (pTVar12 != pTVar3) {
        pFVar11 = (pTVar12->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        (pTVar12->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->TilesToLock).ArrayNum = (this->TilesToLockForNextFrame).ArrayNum;
        (this->TilesToLock).ArrayMax = (this->TilesToLockForNextFrame).ArrayMax;
        (this->TilesToLockForNextFrame).ArrayNum = 0;
        (this->TilesToLockForNextFrame).ArrayMax = 0;
      }
      TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
      ~TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>(&local_res8);
    }
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// LockTile @ 1459105f0

void __thiscall
FVirtualTextureSystem::LockTile(FVirtualTextureSystem *this,FVirtualTextureLocalTile *param_1)

{
  int *piVar1;
  FVirtualTextureLocalTile *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (this->bUpdating != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x4b3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = FTexturePageLocks::Lock(&this->TileLocks,param_1);
  if (bVar4) {
    pTVar6 = &this->TilesToLock;
    pFVar2 = (FVirtualTextureLocalTile *)(pTVar6->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->TilesToLock).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TilesToLock).ArrayNum;
    piVar1 = &(this->TilesToLock).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->TilesToLock).ArrayNum = iVar5 + 1;
    *(FVirtualTextureLocalTile *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_1
    ;
  }
  return;
}

// RegisterProducer @ 1459149b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTextureProducerHandle __thiscall
FVirtualTextureSystem::RegisterProducer
          (FVirtualTextureSystem *this,FRHICommandListBase *param_1,FVTProducerDescription *param_2,
          IVirtualTexture *param_3)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x340,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FVirtualTextureProducerHandle)uVar3;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FVirtualTextureProducerHandle)uVar3;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  FVirtualTextureProducerCollection::RegisterProducer
            (&this->Producers,param_1,(FVirtualTextureSystem *)param_2,
             (FVTProducerDescription *)this,param_3);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return (FVirtualTextureProducerHandle)(uint)param_1;
}

// ReleasePendingResources @ 145915bb0

void __thiscall FVirtualTextureSystem::ReleasePendingResources(FVirtualTextureSystem *this)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0xc68,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  DestroyPendingVirtualTextures(this,true);
  ReleasePendingSpaces(this,true);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// ReleasePendingSpaces @ 145915c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::ReleasePendingSpaces(FVirtualTextureSystem *this,bool param_1)

{
  FName *pFVar1;
  int iVar2;
  FRenderResource *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FVirtualTextureSpace *this_00;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uchar auVar15 [8];
  uint uVar16;
  FName local_res20;
  FName local_68;
  FStatMessage local_60 [2];
  
  uVar13 = 0;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->PhysicalSpaces).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = *(FRenderResource **)((this->PhysicalSpaces).AllocatorInstance.Data + lVar14);
      if ((pFVar3 != (FRenderResource *)0x0) &&
         (iVar2._0_1_ = pFVar3[0x12].FeatureLevel, iVar2._1_1_ = pFVar3[0x12].InitPhase,
         iVar2._2_1_ = pFVar3[0x12].ResourceState, iVar2._3_1_ = pFVar3[0x12].field_0x1f, iVar2 == 0
         )) {
        if ((pFVar3[8].OwnerName.Number != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PagePool.GetNumMappedPages() == 0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x496,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = pFVar3[8].OwnerName.ComparisonIndex.Value;
        uVar16 = 1;
        if (1 < uVar9) {
          uVar16 = uVar9;
        }
        if ((uVar16 - (int)pFVar3[4]._padding_ != 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PagePool.GetNumLockedPages() == 0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                               ,0x497,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FRenderResource::ReleaseResource(pFVar3);
        pFVar3->_padding_ = (longlong)&___7FVirtualTexturePhysicalSpace__6B_;
        if (pFVar3[0x15].OwnerName != (FName)0x0) {
          FMemory::Free((void *)pFVar3[0x15].OwnerName);
        }
        if (pFVar3[0x14].ResourceName != (FName)0x0) {
          FMemory::Free((void *)pFVar3[0x14].ResourceName);
        }
        if (*(void **)&pFVar3[0x13].ListIndex != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar3[0x13].ListIndex);
        }
        pFVar10 = (FName *)&pFVar3[0x12].ListIndex;
        lVar12 = 8;
        do {
          pFVar1 = pFVar10 + -2;
          pFVar10 = pFVar10 + -2;
          lVar12 = lVar12 + -1;
          if (*pFVar1 != (FName)0x0) {
            FMemory::Free((void *)*pFVar1);
          }
        } while (lVar12 != 0);
        pFVar10 = (FName *)&pFVar3[0xe].ListIndex;
        lVar12 = 8;
        do {
          pFVar1 = pFVar10 + -1;
          pFVar10 = pFVar10 + -1;
          lVar12 = lVar12 + -1;
          if (*pFVar1 != (FName)0x0) {
            FRHIResource::Release((FRHIResource *)*pFVar1);
          }
        } while (lVar12 != 0);
        pFVar10 = (FName *)&pFVar3[0xc].ListIndex;
        lVar12 = 8;
        do {
          pFVar1 = pFVar10 + -1;
          pFVar10 = pFVar10 + -1;
          lVar12 = lVar12 + -1;
          if (*pFVar1 != (FName)0x0) {
            FRHIResource::Release((FRHIResource *)*pFVar1);
          }
        } while (lVar12 != 0);
        pFVar10 = (FName *)&pFVar3[10].ListIndex;
        lVar12 = 8;
        do {
          pFVar1 = pFVar10 + -1;
          pFVar10 = pFVar10 + -1;
          lVar12 = lVar12 + -1;
          if (*pFVar1 != (FName)0x0) {
            (**(code **)(*(longlong *)*pFVar1 + 0x38))();
          }
        } while (lVar12 != 0);
        FTexturePagePool::~FTexturePagePool((FTexturePagePool *)&pFVar3[2].ListIndex);
        if (pFVar3[2].OwnerName != (FName)0x0) {
          FMemory::Free((void *)pFVar3[2].OwnerName);
        }
        FRenderResource::~FRenderResource(pFVar3);
        ::operator_delete(pFVar3,0x2c0);
        uVar9 = 0;
        if ((int)uVar13 < (this->PhysicalSpaces).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined8 *)((this->PhysicalSpaces).AllocatorInstance.Data + lVar14) = 0;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (this->PhysicalSpaces).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (this->Spaces).ArrayNum) {
    lVar14 = 0;
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->Spaces).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar7 = CVarVTSpaceReleaseFrames.Ref;
      pFVar3 = *(FRenderResource **)((this->Spaces).AllocatorInstance.Data + lVar14 * 8);
      if ((pFVar3 != (FRenderResource *)0x0) && (pFVar3[0x37].OwnerName.ComparisonIndex.Value == 0))
      {
        bVar8 = IsInParallelRenderingThread();
        if ((!bVar8) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007955>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((param_1) ||
           ((-1 < pTVar7->ShadowedValue[1] &&
            (pTVar7->ShadowedValue[1] + pFVar3[0x37].OwnerName.Number <= this->Frame)))) {
          uVar9 = 0;
          if ((int)uVar13 < (this->Spaces).ArrayNum) {
            uVar9 = uVar16;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = FVirtualTextureSpace::GetSizeInBytes
                            (*(FVirtualTextureSpace **)
                              ((this->Spaces).AllocatorInstance.Data + lVar14 * 8));
          auVar15[4] = '\0';
          auVar15[5] = '\0';
          auVar15[6] = '\0';
          auVar15[7] = '\0';
          auVar15[0] = (char)uVar9;
          auVar15[1] = (char)(uVar9 >> 8);
          auVar15[2] = (char)(uVar9 >> 0x10);
          auVar15[3] = (char)(uVar9 >> 0x18);
          if (uVar9 != 0) {
            FVar11 = StatPtr_STAT_TotalPagetableMemory;
            if (StatPtr_STAT_TotalPagetableMemory ==
                (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
              pFVar10 = ::FName::FName(&local_68,"STAT_TotalPagetableMemory");
              FVar11 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPagetableMemory,
                                  *pFVar10,L"Total Pagetable Memory",
                                  "STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                                  L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_GPU)
              ;
            }
            FVar4 = *(FName *)FVar11;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_01 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_01 == (FThreadStats *)0x0) {
                this_02 = FThreadStatsPool::Get();
                this_01 = FThreadStatsPool::GetFromPool(this_02);
              }
              local_60[0].NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
              local_res20 = FVar4;
              local_60[0].StatData.Pad = auVar15;
              local_60[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(this_01,local_60);
              FStatsTrace::Add(&local_res20,-(longlong)auVar15);
              if (this_01->ScopeCount == 0) {
                FThreadStats::Flush(this_01,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_01,false,false);
              }
            }
          }
          FRenderResource::ReleaseResource(pFVar3);
          uVar9 = 0;
          if ((int)uVar13 < (this->Spaces).ArrayNum) {
            uVar9 = uVar16;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Spaces).AllocatorInstance.Data;
          this_00 = *(FVirtualTextureSpace **)(pFVar5 + lVar14 * 8);
          if (this_00 != (FVirtualTextureSpace *)0x0) {
            *(undefined8 *)(pFVar5 + lVar14 * 8) = 0;
            FVirtualTextureSpace::_scalar_deleting_destructor_(this_00,1);
          }
          this->NumAllocatedSpaces = this->NumAllocatedSpaces - 1;
        }
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar13 < (this->Spaces).ArrayNum);
  }
  return;
}

// ReleaseProducer @ 145916730

void __thiscall
FVirtualTextureSystem::ReleaseProducer
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x347,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  FVirtualTextureProducerCollection::ReleaseProducer(&this->Producers,this,param_1);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// ReleaseSpace @ 145916af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::ReleaseSpace(FVirtualTextureSystem *this,FVirtualTextureSpace *param_1)

{
  uint *puVar1;
  byte bVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FVirtualTextureSpace *this_00;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar11 [8];
  FName local_res10;
  FName local_res18;
  FStatMessage local_38;
  
  if ((this->bUpdating != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x3e2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->NumRefs == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                         ,0x4b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = &param_1->NumRefs;
  *puVar1 = *puVar1 - 1;
  pTVar6 = CVarVTSpaceReleaseFrames.Ref;
  if (*puVar1 == 0) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((param_1->Description).bPrivateSpace == '\0') && (pTVar6->ShadowedValue[1] != 0)) {
      param_1->ReleasedFrame = this->Frame;
      return;
    }
    uVar8 = FVirtualTextureSpace::GetSizeInBytes(param_1);
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11[0] = (char)uVar8;
    auVar11[1] = (char)(uVar8 >> 8);
    auVar11[2] = (char)(uVar8 >> 0x10);
    auVar11[3] = (char)(uVar8 >> 0x18);
    if (uVar8 != 0) {
      FVar10 = StatPtr_STAT_TotalPagetableMemory;
      if (StatPtr_STAT_TotalPagetableMemory ==
          (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_TotalPagetableMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_TotalPagetableMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPagetableMemory,*pFVar9,
                            L"Total Pagetable Memory","STATGROUP_VirtualTextureMemory",
                            "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                            false,MCR_GPU);
      }
      FVar3 = *(FName *)FVar10;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar3;
        local_38.StatData.Pad = auVar11;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_38);
        FStatsTrace::Add(&local_res10,-(longlong)auVar11);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    FRenderResource::ReleaseResource((FRenderResource *)param_1);
    bVar2 = param_1->ID;
    if (((this->Spaces).ArrayNum <= (int)(uint)bVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Spaces).AllocatorInstance.Data;
    this_00 = *(FVirtualTextureSpace **)(pFVar4 + (ulonglong)bVar2 * 8);
    if (this_00 != (FVirtualTextureSpace *)0x0) {
      *(undefined8 *)(pFVar4 + (ulonglong)bVar2 * 8) = 0;
      FVirtualTextureSpace::_scalar_deleting_destructor_(this_00,1);
    }
    this->NumAllocatedSpaces = this->NumAllocatedSpaces - 1;
  }
  return;
}

// RemoveAllProducerDestroyedCallbacks @ 145918670

uint __thiscall
FVirtualTextureSystem::RemoveAllProducerDestroyedCallbacks
          (FVirtualTextureSystem *this,void *param_1)

{
  FRecursiveMutex *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x35c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  uVar3 = FVirtualTextureProducerCollection::RemoveAllCallbacks(&this->Producers,param_1);
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return uVar3;
}

// RequestRecordedTiles @ 14591b5a0

void __thiscall
FVirtualTextureSystem::RequestRecordedTiles
          (FVirtualTextureSystem *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FRecursiveMutex *this_00;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  piVar1 = &(this->PageRequestPlaybackBuffer).ArrayNum;
  pTVar7 = &this->PageRequestPlaybackBuffer;
  if (*piVar1 == 0) {
    if (pTVar7 != param_1) {
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar7->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->PageRequestPlaybackBuffer).ArrayNum = param_1->ArrayNum;
      (this->PageRequestPlaybackBuffer).ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
  }
  else {
    if ((pTVar7 == param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = param_1->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&pTVar7->AllocatorInstance,piVar1,
                         &(this->PageRequestPlaybackBuffer).ArrayMax);
      memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8,
             (param_1->AllocatorInstance).Data,(longlong)iVar2 << 3);
    }
  }
  if (this_00 == (FRecursiveMutex *)0x0) {
    return;
  }
  UE::FRecursiveMutex::Unlock(this_00);
  return;
}

// RequestTiles @ 14591b6e0

void __thiscall
FVirtualTextureSystem::RequestTiles
          (FVirtualTextureSystem *this,TVector2<double> *param_1,int param_2)

{
  ulonglong uVar1;
  FRecursiveMutex *this_00;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  TVector2<double> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TVector2<double> *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->bUpdating != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x4fa,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  iVar11 = 0;
  puVar2 = &(this->AllocatedVTs).field_0x10;
  iVar3 = *(int *)&(this->AllocatedVTs).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AllocatedVTs).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14591b7ff;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14591b7ff:
  uVar10 = *(uint *)&(this->AllocatedVTs).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar7,iVar11);
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar13;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->AllocatedVTs).field_0x8 -
                       *(int *)&(this->AllocatedVTs).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = local_res18;
  pTVar5 = local_res10;
  uVar7 = *(uint *)&(this->AllocatedVTs).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->AllocatedVTs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14591b920;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14591b920:
  while( true ) {
    if (*(int *)&(this->AllocatedVTs).field_0x8 - *(int *)&(this->AllocatedVTs).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar10) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    RequestTilesInternal
              (this,*(IAllocatedVirtualTexture **)
                     ((longlong)TStack_98.CurrentBitIndex * 0x58 + 0x48 +
                     *(longlong *)&this->AllocatedVTs),pTVar5,iVar3);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// RequestTiles @ 14591b9b0

void __thiscall
FVirtualTextureSystem::RequestTiles
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          TVector2<double> *param_6,int param_7)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FAdaptiveVirtualTexture *this_00;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  TArray<FAdaptiveVirtualTexture::FAllocatedInfo,TSizedDefaultAllocator<32>_> local_a0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<unsigned_int_const_,int> local_68;
  TVector2<double>_u_0 local_58;
  double local_48;
  double dStack_40;
  undefined1 local_38;
  
  if ((&this->Mutex == (FRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::FRecursiveMutex::Lock(&this->Mutex);
  if (param_7 < 0) {
    uVar1 = param_1->MaxLevel;
    dVar3 = (double)(param_1->WidthInBlocks * param_1->BlockWidthInTiles *
                    (param_1->Description).TileSize) / (param_2->field0_0x0)._s_0.X;
    fVar12 = (float)(dVar3 * dVar3);
    dVar3 = (double)(param_1->HeightInBlocks * param_1->BlockHeightInTiles *
                    (param_1->Description).TileSize) / (param_2->field0_0x0)._s_0.Y;
    fVar11 = (float)(dVar3 * dVar3);
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar11 = logf(fVar11);
    uVar7 = (int)ROUND(fVar11 * __real_3fb8aa3b - __real_3f000000) >> 1;
    uVar4 = uVar1;
    if ((int)uVar7 < (int)uVar1) {
      uVar4 = uVar7;
    }
    uVar7 = 0;
    if (0 < (int)uVar4) {
      uVar7 = uVar4;
    }
    RequestTilesForRegionInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,uVar7);
    param_7 = uVar7 + 1;
    if (uVar1 < (uint)param_7) goto LAB_14591bc69;
  }
  else {
    this_00 = GetAdaptiveVirtualTexture(this,param_1->SpaceID);
    if (this_00 != (FAdaptiveVirtualTexture *)0x0) {
      local_48 = (param_6->field0_0x0)._s_0.X;
      dStack_40 = (param_6->field0_0x0)._s_0.Y;
      local_38 = 1;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      local_58._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_58._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      FAdaptiveVirtualTexture::GetAllocatedVirtualTextures
                (this_00,(TBox2<double> *)&local_58._s_0,param_7,&local_a0,&local_90);
      iVar5 = local_a0.ArrayNum;
      uVar8 = (ulonglong)local_a0.ArrayNum;
      pFVar9 = local_a0.AllocatorInstance.Data + 0x18;
      pFVar10 = local_a0.AllocatorInstance.Data + uVar8 * 0x38;
      while( true ) {
        if ((int)uVar8 != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FAdaptiveVirtualTexture::FAllocatedInfo,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 + -0x18 == pFVar10) break;
        RequestTilesForRegionInternal
                  (this,*(IAllocatedVirtualTexture **)(pFVar9 + -0x18),param_2,param_3,param_4,
                   (TVector2<double> *)(pFVar9 + -0x10),(TVector2<double> *)pFVar9,
                   *(int *)(pFVar9 + 0x18));
        uVar8 = local_a0._8_8_ & 0xffffffff;
        pFVar9 = pFVar9 + 0x38;
      }
      iVar5 = local_90.ArrayNum;
      uVar1 = this->Frame;
      local_78 = local_90.AllocatorInstance.Data;
      if ((local_90.ArrayNum < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_70 = iVar5;
      local_68._12_4_ = uStack_6c;
      local_68.ArrayNum = iVar5;
      local_68.DataPtr = (uint *)local_78;
      FAdaptiveVirtualTexture::QueuePackedAllocationRequests(this_00,&local_68,uVar1);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      goto LAB_14591bc69;
    }
  }
  RequestTilesForRegionInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_14591bc69:
  if (&this->Mutex != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(&this->Mutex);
  }
  return;
}

// RequestTiles @ 14591bcc0

void __thiscall
FVirtualTextureSystem::RequestTiles
          (FVirtualTextureSystem *this,FMaterialRenderProxy *param_1,TVector2<double> *param_2,
          Type param_3)

{
  FRecursiveMutex *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bUpdating != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x505,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar5 = (param_1->UniformExpressionCache).Elements.AllocatedVTs.AllocatorInstance.Data;
  iVar2 = (param_1->UniformExpressionCache).Elements.AllocatedVTs.ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->UniformExpressionCache).Elements.AllocatedVTs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAllocatedVirtualTexture_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(IAllocatedVirtualTexture **)pFVar5 != (IAllocatedVirtualTexture *)0x0) {
      RequestTilesInternal(this,*(IAllocatedVirtualTexture **)pFVar5,param_2,-1);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return;
}

// RequestTilesForRegionInternal @ 14591bdb0

void __thiscall
FVirtualTextureSystem::RequestTilesForRegionInternal
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          TVector2<double> *param_6,int param_7)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector2<double>_u_0_s_0 TVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  
  if (param_1->SpaceID < 0x10) {
    dVar2 = (param_5->field0_0x0)._s_0.X;
    dVar3 = *(double *)&param_2->field0_0x0;
    uVar28 = SUB84(dVar3,0);
    uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (dVar3 <= UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X) {
      uVar28 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
      uVar29 = (undefined4)
               ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
    }
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    TVar6 = (param_3->field0_0x0)._s_0;
    bVar13 = (byte)param_7;
    uVar14 = param_1->WidthInBlocks * param_1->BlockWidthInTiles >> (bVar13 & 0x1f);
    dVar25 = __real_3ff0000000000000 / (double)(int)param_1->WidthInBlocks;
    uVar20 = (double)CONCAT44(uVar29,uVar28) + (param_3->field0_0x0)._s_0.X;
    dVar4 = *(double *)((longlong)&param_2->field0_0x0 + 8);
    uVar31 = SUB84(dVar4,0);
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar10 = 1;
    if (1 < (int)uVar14) {
      uVar10 = uVar14;
    }
    uVar21 = (param_4->field0_0x0)._s_0.X;
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    if ((double)uVar21 <= (double)uVar20) {
      uVar20 = uVar21;
    }
    if (dVar4 <= UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y) {
      uVar31 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
      uVar32 = (undefined4)
               ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
    }
    dVar4 = TVar6.X;
    if (dVar4 <= (double)uVar21) {
      uVar21 = dVar4;
    }
    if ((double)uVar20 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    dVar26 = (param_6->field0_0x0)._s_0.X - dVar2;
    dVar9 = (param_6->field0_0x0)._s_0.Y - dVar3;
    if ((double)uVar21 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar21 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    uVar12 = param_1->HeightInBlocks * param_1->BlockHeightInTiles >> (bVar13 & 0x1f);
    uVar20 = ((double)uVar20 - dVar4) / (double)CONCAT44(uVar29,uVar28);
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    uVar21 = ((double)uVar21 - dVar4) / (double)CONCAT44(uVar29,uVar28);
    if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X <= (double)uVar20) {
      uVar20 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
    }
    if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X <= (double)uVar21) {
      uVar21 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
    }
    if ((double)uVar20 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    if ((double)uVar21 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar21 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    fVar23 = (float)(int)uVar10 + (float)(int)uVar10;
    fVar30 = (float)(((double)uVar21 * dVar26 + dVar2) * dVar25);
    fVar27 = (float)(((double)uVar20 * dVar26 + dVar2) * dVar25);
    fVar24 = fVar27;
    if (fVar30 <= fVar27) {
      fVar24 = fVar30;
    }
    iVar17 = (int)ROUND(fVar24 * fVar23 - __real_3f000000) >> 1;
    if (fVar27 <= fVar30) {
      fVar27 = fVar30;
    }
    uVar12 = param_1->VirtualPageX >> (bVar13 & 0x1f);
    uVar16 = param_1->VirtualPageY >> (bVar13 & 0x1f);
    uVar20 = (double)CONCAT44(uVar32,uVar31) + (param_3->field0_0x0)._s_0.Y;
    dVar2 = __real_3ff0000000000000 / (double)(int)param_1->HeightInBlocks;
    if (dVar5 <= (double)uVar20) {
      uVar20 = dVar5;
    }
    dVar4 = TVar6.Y;
    uVar28 = SUB84(dVar5,0);
    uVar29 = (int)((ulonglong)dVar5 >> 0x20);
    if (dVar4 <= dVar5) {
      uVar28 = TVar6.Y._0_4_;
      uVar29 = TVar6.Y._4_4_;
    }
    fVar24 = (float)(int)uVar14;
    if ((double)uVar20 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    uVar21 = CONCAT44(uVar29,uVar28);
    if ((double)CONCAT44(uVar29,uVar28) <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)
    {
      uVar21 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    uVar22 = ((double)uVar20 - dVar4) / (double)CONCAT44(uVar32,uVar31);
    uVar20 = ((double)uVar21 - dVar4) / (double)CONCAT44(uVar32,uVar31);
    if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y <= (double)uVar22) {
      uVar22 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
    }
    if (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y <= (double)uVar20) {
      uVar20 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar22 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar22 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if ((double)uVar20 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    iVar18 = -((int)ROUND(__real_bf000000 - fVar27 * fVar23) >> 1);
    fVar30 = (float)(((double)uVar22 * dVar9 + dVar3) * dVar2);
    fVar23 = (float)(((double)uVar20 * dVar9 + dVar3) * dVar2);
    fVar27 = fVar23;
    if (fVar30 <= fVar23) {
      fVar27 = fVar30;
    }
    if (fVar23 <= fVar30) {
      fVar23 = fVar30;
    }
    local_e0 = (int)ROUND(fVar27 * (fVar24 + fVar24) - __real_3f000000) >> 1;
    local_d0 = -((int)ROUND(__real_bf000000 - fVar23 * (fVar24 + fVar24)) >> 1);
    local_e4 = uVar12;
    local_dc = uVar14;
    local_d8 = iVar17;
    local_d4 = uVar16;
    if (local_e0 < local_d0) {
      do {
        iVar15 = local_e0 % (int)uVar14;
        if (iVar15 < 0) {
          iVar15 = iVar15 + uVar14;
        }
        uVar19 = iVar15 + uVar16;
        if (iVar17 < iVar18) {
          pTVar1 = &this->RequestedPackedTiles;
          iVar15 = iVar17;
          do {
            pFVar7 = (pTVar1->AllocatorInstance).Data;
            iVar17 = iVar15 % (int)uVar10;
            if (iVar17 < 0) {
              iVar17 = iVar17 + uVar10;
            }
            local_e8 = iVar17 + uVar12 | (param_1->SpaceID << 0x10 | uVar19) << 0xc |
                       (param_7 + 1) * 0x1000000;
            if (((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
                ((FScriptContainerElement *)&local_e8 <
                 pFVar7 + (longlong)(this->RequestedPackedTiles).ArrayMax * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = (this->RequestedPackedTiles).ArrayNum;
            if (iVar17 == (this->RequestedPackedTiles).ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar1->AllocatorInstance,
                                  &(this->RequestedPackedTiles).ArrayMax);
            }
            (this->RequestedPackedTiles).ArrayNum = iVar17 + 1;
            iVar15 = iVar15 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_e8;
            uVar14 = local_dc;
            iVar17 = local_d8;
            uVar12 = local_e4;
            uVar16 = local_d4;
          } while (iVar15 < iVar18);
        }
        local_e0 = local_e0 + 1;
      } while (local_e0 < local_d0);
    }
  }
  return;
}

// RequestTilesInternal @ 14591c280

void __thiscall
FVirtualTextureSystem::RequestTilesInternal
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1,TVector2<double> *param_2,
          int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  if (param_3 < 0) {
    uVar1 = param_1->MaxLevel;
    dVar6 = (double)(param_1->WidthInBlocks * param_1->BlockWidthInTiles *
                    (param_1->Description).TileSize) / (param_2->field0_0x0)._s_0.X;
    fVar5 = (float)(dVar6 * dVar6);
    dVar6 = (double)(param_1->HeightInBlocks * param_1->BlockHeightInTiles *
                    (param_1->Description).TileSize) / (param_2->field0_0x0)._s_0.Y;
    fVar4 = (float)(dVar6 * dVar6);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar4 = logf(fVar4);
    uVar3 = (int)ROUND(fVar4 * __real_3fb8aa3b - __real_3f000000) >> 1;
    uVar2 = uVar1;
    if ((int)uVar3 < (int)uVar1) {
      uVar2 = uVar3;
    }
    uVar3 = 0;
    if (0 < (int)uVar2) {
      uVar3 = uVar2;
    }
    RequestTilesInternal(this,param_1,uVar3);
    if (uVar3 + 1 <= uVar1) {
      RequestTilesInternal(this,param_1,uVar3 + 1);
      return;
    }
  }
  else {
    RequestTilesInternal(this,param_1,param_3);
  }
  return;
}

// RequestTilesInternal @ 14591c370

void __thiscall
FVirtualTextureSystem::RequestTilesInternal
          (FVirtualTextureSystem *this,IAllocatedVirtualTexture *param_1,int param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int local_res10;
  uint local_58;
  uint local_54;
  uint local_50;
  
  if (param_1->SpaceID < 0x10) {
    bVar11 = (byte)param_2;
    uVar7 = param_1->WidthInBlocks * param_1->BlockWidthInTiles >> (bVar11 & 0x1f);
    uVar5 = 1;
    if (1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    uVar8 = param_1->HeightInBlocks * param_1->BlockHeightInTiles >> (bVar11 & 0x1f);
    uVar7 = 1;
    if (1 < (int)uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = param_1->VirtualPageX;
    uVar9 = param_1->VirtualPageY >> (bVar11 & 0x1f);
    local_res10 = 0;
    local_54 = uVar7;
    local_50 = uVar9;
    if (0 < (int)uVar7) {
      do {
        iVar12 = 0;
        uVar2 = local_res10 + uVar9;
        if (0 < (int)uVar5) {
          pTVar1 = &this->RequestedPackedTiles;
          do {
            local_58 = (param_1->SpaceID << 0x10 | uVar2) << 0xc |
                       iVar12 + (uVar8 >> (bVar11 & 0x1f)) | (param_2 + 1) * 0x1000000;
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 <
                 pFVar3 + (longlong)(this->RequestedPackedTiles).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (this->RequestedPackedTiles).ArrayNum;
            if (iVar10 == (this->RequestedPackedTiles).ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar1->AllocatorInstance,
                                  &(this->RequestedPackedTiles).ArrayMax);
            }
            iVar12 = iVar12 + 1;
            (this->RequestedPackedTiles).ArrayNum = iVar10 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58;
            uVar7 = local_54;
            uVar9 = local_50;
          } while (iVar12 < (int)uVar5);
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < (int)uVar7);
    }
  }
  return;
}

// SetMipLevelToLock @ 14591cad0

void __thiscall
FVirtualTextureSystem::SetMipLevelToLock
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle param_1,int param_2)

{
  FRecursiveMutex *this_00;
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FVirtualTextureProducer *pFVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FVirtualTextureProducerHandle local_res10 [2];
  uint local_res18;
  FVirtualTextureProducerHandle local_res20 [2];
  FVirtualTextureLocalTile local_60;
  FRecursiveMutex *local_58;
  
  local_res10[0] = param_1;
  if ((this->bUpdating != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUpdating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x58f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->Mutex;
  local_58 = this_00;
  if ((this_00 == (FRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar11 = FVirtualTextureProducerCollection::GetProducer(&this->Producers,local_res10);
  uVar3 = (pFVar11->Description).WidthInBlocks;
  uVar5 = (pFVar11->Description).BlockWidthInTiles;
  uVar4 = (pFVar11->Description).HeightInBlocks;
  uVar6 = (pFVar11->Description).BlockHeightInTiles;
  uVar19 = (pFVar11->Description).MaxLevel + 1;
  puVar1 = &(pFVar11->Description).TileSize;
  iVar10 = 0x1f;
  bVar8 = *puVar1 != 0;
  if (bVar8) {
    for (; *puVar1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  iVar13 = 0;
  if (bVar8) {
    iVar13 = iVar10;
  }
  uVar21 = iVar13 + param_2;
  if (uVar19 < (uint)(iVar13 + param_2)) {
    uVar21 = uVar19;
  }
  uVar21 = uVar19 - uVar21;
  bVar2 = pFVar11->LockedMipCount;
  pFVar11->LockedMipCount = (uchar)uVar21;
  uVar17 = (uint)bVar2;
  if (bVar2 < uVar21) {
    uVar17 = uVar21;
  }
  uVar9 = (uint)bVar2;
  local_res18 = uVar21;
  if (uVar9 < uVar21) {
    local_res18 = uVar9;
  }
  local_res18 = local_res18 + iVar13;
  do {
    if (uVar17 + iVar13 <= local_res18) {
      if (this_00 != (FRecursiveMutex *)0x0) {
        UE::FRecursiveMutex::Unlock(this_00);
      }
      return;
    }
    uVar20 = (uVar19 - local_res18) - 1;
    uVar22 = 0;
    uVar18 = 1 << ((byte)uVar20 & 0x1f);
    uVar15 = (uVar3 * uVar5 + -1 + uVar18) / uVar18;
    uVar18 = (uVar4 * uVar6 + -1 + uVar18) / uVar18;
    if (uVar18 != 0) {
      do {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar14 = ((uVar22 & 0xffff) << 8 ^ uVar22 & 0xffff) & 0xff00ff;
          uVar14 = (uVar14 << 4 ^ uVar14) & 0xf0f0f0f;
          uVar14 = (uVar14 * 4 ^ uVar14) & 0x33333333;
          do {
            uVar12 = ((uVar16 & 0xffff) << 8 ^ uVar16 & 0xffff) & 0xff00ff;
            uVar12 = (uVar12 << 4 ^ uVar12) & 0xf0f0f0f;
            local_60._s_1.PackedProducerHandle = (uint)local_res10[0];
            uVar12 = (uVar12 * 4 ^ uVar12) & 0x33333333;
            local_60.PackedValue._4_4_ =
                 (uVar12 * 2 ^ uVar12) & 0x555555 |
                 ((uVar14 * 2 ^ uVar14) & 0x555555 | (uVar20 & 0xf) << 0x17) * 2;
            if (uVar9 < uVar21) {
              LockTile(this,&local_60);
            }
            else {
              if ((this->bUpdating != false) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!bUpdating",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                     ,0x4cc,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              bVar8 = FTexturePageLocks::Unlock(&this->TileLocks,&local_60);
              if (bVar8) {
                iVar10 = TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_>::Remove
                                   (&this->TilesToLock,&local_60);
                if (iVar10 < 2) {
                  if (iVar10 == 0) {
                    local_res20[0] =
                         (FVirtualTextureProducerHandle)local_60._s_1.PackedProducerHandle;
                    UnlockTileInternal(local_res20,pFVar11,&local_60,this->Frame);
                  }
                }
                else {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NumTilesRemoved <= 1",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                     ,0x4d2,L"");
                  if (bVar8) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar15);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar18);
    }
    local_res18 = local_res18 + 1;
    this_00 = local_58;
  } while( true );
}

// Shutdown @ 14591d6c0

void __cdecl FVirtualTextureSystem::Shutdown(void)

{
  FVirtualTextureSystem *pFVar1;
  
  pFVar1 = GVirtualTextureSystem;
  if (GVirtualTextureSystem != (FVirtualTextureSystem *)0x0) {
    ~FVirtualTextureSystem(GVirtualTextureSystem);
    ::operator_delete(pFVar1,0x388);
    GVirtualTextureSystem = (FVirtualTextureSystem *)0x0;
  }
  return;
}

// SortLocalTileRequests @ 14591d700

TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> * __thiscall
FVirtualTextureSystem::SortLocalTileRequests
          (FVirtualTextureSystem *this,
          TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *__return_storage_ptr__,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1,
          TArrayView<FVirtualTextureLocalTileRequest_const_,int> *param_2)

{
  TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *pTVar1;
  int iVar2;
  uint uVar3;
  FVirtualTextureLocalTileRequest *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *pTVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar12;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ushort uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  FIdentityFunctor local_res10;
  int local_res20;
  uint local_60;
  TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *local_50;
  undefined4 uStack_44;
  
  pFVar18 = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->DataPtr = (TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  pTVar8 = CVarVTSortTileRequestsByPriority.Ref;
  if (param_2->ArrayNum == 0) {
    return __return_storage_ptr__;
  }
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *)(*pcVar6)();
    return pTVar11;
  }
  iVar2 = pTVar8->ShadowedValue[1];
  lVar17 = (longlong)param_2->ArrayNum;
  aVar12 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
           TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(lVar17 * 8 + 0x18,8);
  *(undefined8 *)((longlong)aVar12 + 8) = 0;
  pTVar1 = (TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *)((longlong)aVar12 + 0x18);
  *(undefined ***)aVar12 =
       &
       ___7__TObjectArray_T__TVTTilePriorityAndIndex_UFVTLocalTilePriority___0BA______TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  *(longlong *)((longlong)aVar12 + 0x10) = lVar17;
  aVar13 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar12 + 8) = aVar13;
    LOCK();
    aVar14 = param_1->Next;
    bVar9 = aVar13 == aVar14;
    if (bVar9) {
      param_1->Next = aVar12;
      aVar14 = aVar13;
    }
    UNLOCK();
    aVar13 = aVar14;
    pTVar7 = pTVar1;
  } while (!bVar9);
  for (; lVar17 != 0; lVar17 = lVar17 + -1) {
    pTVar7->SortablePackedValue = 0;
    pTVar7 = pTVar7 + 1;
  }
  uVar3 = param_2->ArrayNum;
  if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *)(*pcVar6)();
    return pTVar11;
  }
  local_res20 = 0;
  uVar19 = 0;
  pFVar20 = pFVar18;
  pFVar22 = pFVar18;
  local_50 = pTVar1;
  if ((ushort)uVar3 != 0) {
    do {
      if ((param_2->ArrayNum <= (int)(uint)uVar19) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar4 = param_2->DataPtr;
      uVar16 = pFVar4[(longlong)pFVar22].PackedValue;
      uVar21 = uVar16 & 0xfffffffffffffff;
      local_60 = (uint)uVar21;
      pFVar15 = (FScriptContainerElement *)(uVar16 & 0xffffffff);
      if (((uint)pFVar18 == 0) || (local_60 != (uint)pFVar18)) {
        local_60 = local_60 & 0x3fffff;
        uVar10 = (this->Producers).Producers.ArrayNum;
        pFVar18 = pFVar15;
        if (local_60 < uVar10) {
          if (((int)uVar10 <= (int)local_60) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> *)
                      (*pcVar6)();
            return pTVar11;
          }
          pFVar20 = (this->Producers).Producers.AllocatorInstance.Data + (ulonglong)local_60 * 0xf8;
          if (*(ushort *)(pFVar20 + 0xf4) == (ushort)((ushort)(uVar21 >> 0x10) >> 6))
          goto LAB_14591d92c;
        }
        pFVar20 = (FScriptContainerElement *)0x0;
      }
LAB_14591d92c:
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        if (iVar2 == 0) {
          uVar16 = 0;
          uVar10 = 0;
        }
        else {
          uVar5 = pFVar4[(longlong)pFVar22].PackedValue;
          uVar16 = uVar5 >> 0x3f;
          uVar10 = (uint)(uVar5 >> 0x3c);
        }
        local_res20 = local_res20 + 1;
        local_50->SortablePackedValue =
             (((ulonglong)(uVar10 & 7) * 2 | uVar16) << 4 | uVar21 >> 0x38) << 0x10 |
             (ulonglong)pFVar22;
        local_50 = local_50 + 1;
      }
      uVar19 = uVar19 + 1;
      pFVar22 = pFVar22 + 1;
    } while (uVar19 < (ushort)uVar3);
    if (0 < local_res20) {
      __return_storage_ptr__->DataPtr = pTVar1;
      *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_44,local_res20);
      if (iVar2 != 0) {
        local_res10 = SUB81(__return_storage_ptr__,0);
        AlgoImpl::
        IntroSortInternal<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int,FIdentityFunctor,TLess<void>_>
                  (__return_storage_ptr__->DataPtr,__return_storage_ptr__->ArrayNum,local_res10,
                   (TLess<void>)local_res10);
      }
    }
  }
  return __return_storage_ptr__;
}

// SubmitRequests @ 145921500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::SubmitRequests
          (FVirtualTextureSystem *this,FRHICommandList *param_1,Type param_2,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_3,
          FVirtualTextureUpdateSettings *param_4,FUniqueRequestList *param_5,bool param_6)

{
  int *piVar1;
  FBinaryHeap<unsigned_int,unsigned_short> *this_00;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  longlong *plVar4;
  FVirtualTexturePhysicalSpace *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  FName FVar11;
  FVirtualTextureSystem *pFVar12;
  FNameEntryId FVar13;
  Type TVar14;
  FName FVar15;
  FVirtualTextureProducer *pFVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  TStatId TVar22;
  FVirtualTextureProducer *pFVar23;
  ulonglong uVar24;
  longlong *plVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<_private:_void___cdecl_FVirtualTextureSystem::SubmitRequests(FRHICommandList_&,ERHIFeatureLevel::Type,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&,FVirtualTextureUpdateSettings_const_&,FUniqueRequestList_*,bool)_::_119_::FStat_ProcessRequests_Wait>
  FVar27;
  FTaskGraphInterface *pFVar28;
  FThreadStats *pFVar29;
  FThreadStatsPool *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_NumStacksRequested> FVar31;
  FThreadSafeStaticStat<FStat_STAT_NumStacksProduced> FVar32;
  FThreadSafeStaticStat<FStat_STAT_NumPageAllocateFails> FVar33;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Map> FVar34;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MapNew> FVar35;
  byte bVar36;
  int iVar37;
  longlong lVar38;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar39;
  ulonglong uVar40;
  uint uVar41;
  ulong64 _Size;
  ForAnyElementType FVar42;
  FName FVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  FScriptContainerElement *pFVar46;
  FVirtualTextureSpace *pFVar47;
  FVirtualTextureSpace *pFVar48;
  FUniqueRequestList *pFVar49;
  byte bVar50;
  uint uVar51;
  FVirtualTextureSystem *pFVar52;
  uint uVar53;
  uchar auVar54 [8];
  uchar auVar55 [8];
  uchar auVar56 [8];
  bool bVar57;
  bool bVar58;
  undefined1 auStackY_408 [32];
  uint local_3a4;
  undefined1 local_39f;
  undefined1 local_39e [2];
  uint local_39c;
  undefined8 local_398;
  FName local_390;
  FVirtualTextureSystem *local_388;
  FVirtualTextureProducerHandle local_380 [2];
  FName local_378;
  Type local_368;
  FName local_360;
  ForAnyElementType local_358;
  undefined8 local_350;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  FUniqueRequestList *local_330;
  FLLMScope local_328 [2];
  FVirtualTextureProducer *local_320;
  uint local_318;
  uint local_314;
  FColor_u_0 local_310;
  FColor_u_0 local_30c;
  FColor_u_0 local_308 [2];
  FName local_300;
  byte local_2f8;
  int local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c0;
  FName local_2b0;
  undefined8 local_2a0;
  int local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FMemScope local_278;
  LARGE_INTEGER local_270;
  IVirtualTextureFinalizer *local_268;
  FStatMessage local_260;
  FStatMessage local_250;
  FStatMessage local_240;
  FStatMessage local_230;
  FSourceLocation local_218;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_1a8;
  int local_180;
  int local_17c;
  longlong local_178;
  undefined8 uStack_170;
  uint local_168 [6];
  undefined8 uStack_150;
  int local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_330 = param_5;
  bVar57 = -1 < CpuChannel->Enabled;
  local_388 = this;
  local_378 = (FName)param_1;
  local_368 = param_2;
  if (bVar57) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2394,"FVirtualTextureSystem::SubmitRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x95a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2394);
  }
  FLLMScope::FLLMScope(local_328,VirtualTextureSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_278,VirtualTextureSystem,true);
  _Size = (ulonglong)(param_5->NumLoadRequests << 3) << 2;
  local_360 = (FName)TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::Malloc
                               (param_3,_Size,4);
  memset((void *)local_360,0xff,_Size);
  TVar22 = FThreadSafeStaticStatInner<FStat_STAT_ProcessRequests_Submit,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ProcessRequests_Submit,1> *)
                      &StatPtr_STAT_ProcessRequests_Submit);
  local_218.Impl._Line = 0x961;
  local_218.Impl._Function =
       "void __cdecl FVirtualTextureSystem::SubmitRequests(class FRHICommandList &,enum ERHIFeatureLevel::Type,class TConcurrentLinearBulkObjectAllocator<struct FDefaultBlockAllocationTag> &,const struct FVirtualTextureUpdateSettings &,class FUniqueRequestList *,bool)"
  ;
  local_218.Impl._Column = 3;
  local_218.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_300,*(TStatIdData **)&(TVar22.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_218);
  uVar41 = param_5->NumLoadRequests;
  uVar24 = 0;
  local_358.Data = (FScriptContainerElement *)0x0;
  local_350 = 0;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if (0 < (int)uVar41) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,uVar41,&local_358,0,(int *)((longlong)&local_350 + 4));
  }
  pTVar10 = CVarVTSyncProduceLockedTiles.Ref;
  bVar58 = false;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2f0 = pTVar10->ShadowedValue[1];
  local_318 = param_4->MaxPagesProduced;
  local_314 = VirtualTextureScalability::GetPageFreeThreshold();
  local_39c = 0;
  local_338 = 0;
  local_3a4 = 0;
  local_344 = 0;
  bVar17 = false;
  if (param_5->NumLoadRequests != 0) {
    do {
      bVar58 = bVar17;
      local_334 = param_5->NumLockRequests;
      bVar17 = (uint)uVar24 < local_334;
      if ((param_6) &&
         (((local_334 <= (uint)uVar24 || (local_2f0 == 0)) &&
          (param_4->bForceSyncPageUpdate == false)))) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      local_398 = param_5->LoadRequests[uVar24].PackedValue & 0xfffffffffffffff;
      local_380[0].PackedValue = (uint)local_398;
      pFVar23 = FVirtualTextureProducerCollection::GetProducer(&this->Producers,local_380);
      uVar40 = 0;
      local_340 = 0;
      bVar50 = param_5->LoadRequestGroupMask[uVar24];
      bVar36 = (pFVar23->Description).NumTextureLayers;
      local_33c = (uint)bVar50;
      uVar24 = uVar40;
      local_320 = pFVar23;
      if (bVar36 != 0) {
        do {
          if ((uint)bVar36 <= (uint)uVar40) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("LayerIndex < Description.NumTextureLayers",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                ,0x1f,L"");
            if (bVar18) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar24 = (ulonglong)local_340;
          }
          if ((bVar50 >> ((pFVar23->Description).PhysicalGroupIndex[uVar40] & 0x1f) & 1) != 0) {
            local_340 = (uint)uVar24 | 1 << ((byte)uVar40 & 0x1f);
            uVar24 = (ulonglong)local_340;
          }
          bVar36 = (pFVar23->Description).NumTextureLayers;
          uVar41 = (uint)uVar40 + 1;
          uVar40 = (ulonglong)uVar41;
        } while (uVar41 < bVar36);
      }
      (**(code **)((longlong)*pFVar23->VirtualTexture + 0x18))
                (pFVar23->VirtualTexture,&local_2a0,local_378,local_380);
      if (local_298 == 2) {
        if (bVar19) {
          local_298 = 3;
          bVar58 = true;
        }
      }
      else if (((local_298 == 3) && (!bVar19)) && (local_318 <= local_3a4)) {
        local_298 = 2;
      }
      bVar19 = false;
      if (local_298 == 0) {
        bVar18 = true;
        if (5 < (byte)LogVirtualTexturing._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
          bVar19 = false;
          bVar18 = true;
        }
      }
      else {
        bVar18 = false;
        if (local_298 == 3) {
          uVar24 = 0;
          local_168[0] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_148 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_128 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_108 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_e8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_c8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_a8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_88 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          bVar50 = (local_320->Description).NumPhysicalGroups;
          uVar44 = (uint)bVar50;
          uStack_170 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_150 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_130 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          uStack_110 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_f0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_d0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_b0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_90 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_178 = 0;
          local_168[2] = 0;
          local_168[3] = 0;
          local_168[4] = 0;
          local_168[5] = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_80 = 0;
          local_78 = ___xmm_ffffffffffffffffffffffffffffffff;
          uStack_70 = _UNK_15060db28;
          local_68 = ___xmm_ffffffffffffffffffffffffffffffff;
          uStack_60 = _UNK_15060db28;
          pFVar23 = local_320;
          uVar41 = local_3a4;
          uVar53 = local_33c;
          if (bVar50 != 0) {
LAB_145921a60:
            uVar40 = 0;
            uVar51 = (uint)uVar24;
            if ((uVar53 >> (uVar51 & 0x1f) & 1) == 0) goto LAB_145921c90;
            if ((uVar44 <= uVar51) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("GroupIndex < Description.NumPhysicalGroups",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                    ,0x22,L""), bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar53 = 0;
            if ((int)uVar51 < (pFVar23->PhysicalGroups).ArrayNum) {
              uVar53 = ~uVar51 >> 0x1f;
            }
            if ((uVar53 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = local_320;
            pFVar12 = local_388;
            lVar38 = *(longlong *)
                      ((pFVar23->PhysicalGroups).AllocatorInstance.Data + (longlong)(int)uVar51 * 8)
            ;
            if (*(int *)(lVar38 + 0x80) != 0) {
              uVar53 = local_314;
              if (local_39c < local_334) {
                uVar53 = 0;
              }
              if ((*(uint *)(*(longlong *)(lVar38 + 0x98) +
                            (ulonglong)**(ushort **)(lVar38 + 0x90) * 4) >> 4) + uVar53 <
                  local_388->Frame) {
                local_348 = FTexturePagePool::Alloc
                                      ((FTexturePagePool *)(lVar38 + 0x58),local_388,
                                       local_388->Frame,local_380,(uchar)uVar24,
                                       (uint)(local_398 >> 0x20) & 0xffffff,
                                       (byte)(local_398 >> 0x38) & 0xf,bVar17);
                if ((local_348 == 0xffffffff) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("pAddress != ~0u",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x9b7,L""), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                bVar50 = (pFVar23->Description).NumTextureLayers;
                if (bVar50 != 0) {
                  plVar25 = (longlong *)(lVar38 + 0x118);
                  do {
                    if (((uint)bVar50 <= (uint)uVar40) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("LayerIndex < Description.NumTextureLayers",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                            ,0x1f,L""), bVar19)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if ((pFVar23->Description).PhysicalGroupIndex[uVar40] == uVar51) {
                      plVar4 = (longlong *)*plVar25;
                      if (plVar4 == (longlong *)0x0) {
                        (&local_178)[uVar40 * 4] = 0;
                      }
                      else {
                        (**(code **)(*plVar4 + 0x30))(plVar4);
                        (&local_178)[uVar40 * 4] = (longlong)plVar4;
                        (**(code **)(*plVar4 + 0x38))(plVar4);
                      }
                      uVar41 = *(uint *)(lVar38 + 0x38);
                      plVar25 = plVar25 + 1;
                      local_168[uVar40 * 8 + -2] = (local_348 & 0xffff) % uVar41;
                      local_168[uVar40 * 8 + -1] = (local_348 & 0xffff) / uVar41;
                      local_168[uVar40 * 8] = 0;
                      *(uint *)((longlong)&local_78 + uVar24 * 4) = local_348;
                      pFVar23 = local_320;
                    }
                    bVar50 = (pFVar23->Description).NumTextureLayers;
                    uVar41 = (uint)uVar40 + 1;
                    uVar40 = (ulonglong)uVar41;
                  } while (uVar41 < bVar50);
                }
                uVar41 = local_3a4 + 1;
                uVar53 = local_33c;
                local_3a4 = uVar41;
                goto LAB_145921c90;
              }
            }
            bVar50 = (pFVar23->Description).NumPhysicalGroups;
            local_344 = local_344 + 1;
            if (bVar50 != 0) {
              do {
                uVar44 = (uint)uVar40;
                uVar53 = *(uint *)((longlong)&local_78 + uVar40 * 4);
                if (uVar53 != 0xffffffff) {
                  if ((bVar50 <= uVar44) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("GroupIndex < Description.NumPhysicalGroups",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                          ,0x22,L""), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar51 = 0;
                  if ((int)uVar44 < (pFVar16->PhysicalGroups).ArrayNum) {
                    uVar51 = ~uVar44 >> 0x1f;
                  }
                  if ((uVar51 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar24 = (ulonglong)(uVar53 & 0xffff);
                  lVar38 = *(longlong *)
                            ((pFVar16->PhysicalGroups).AllocatorInstance.Data +
                            (longlong)(int)uVar44 * 8);
                  FTexturePagePool::UnmapAllPages
                            ((FTexturePagePool *)(lVar38 + 0x58),pFVar12,(ushort)uVar53,true);
                  this_00 = (FBinaryHeap<unsigned_int,unsigned_short> *)(lVar38 + 0x80);
                  if (((uVar53 & 0xffff) < *(uint *)(lVar38 + 0x88)) &&
                     (*(short *)(*(longlong *)(lVar38 + 0xa0) + uVar24 * 2) != -1)) {
                    *(undefined4 *)(*(longlong *)(lVar38 + 0x98) + uVar24 * 4) = 0;
                    uVar3 = *(ushort *)(*(longlong *)(lVar38 + 0xa0) + uVar24 * 2);
                    if ((uVar3 == 0) ||
                       (*(int *)(*(longlong *)(lVar38 + 0x98) +
                                (ulonglong)
                                *(ushort *)
                                 (*(longlong *)(lVar38 + 0x90) +
                                 (ulonglong)((int)(uVar3 - 1) >> 1 & 0xffff) * 2) * 4) == 0)) {
                      FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(this_00,uVar3);
                    }
                    else {
                      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(this_00,uVar3);
                    }
                  }
                  else {
                    FBinaryHeap<unsigned_int,unsigned_short>::Add(this_00,0,(ushort)uVar53);
                  }
                }
                bVar50 = (pFVar16->Description).NumPhysicalGroups;
                uVar40 = (ulonglong)(uVar44 + 1);
              } while (uVar44 + 1 < (uint)bVar50);
            }
            bVar18 = false;
            local_3a4 = uVar41;
            bVar19 = false;
            goto LAB_145921e90;
          }
LAB_145921ca3:
          uVar24 = 0;
          bVar50 = (pFVar23->Description).NumPhysicalGroups;
          uVar53 = (uint)bVar50;
          uVar41 = local_33c;
          if (bVar50 != 0) {
            do {
              uVar44 = (uint)uVar24;
              if ((uVar41 >> (uVar44 & 0x1f) & 1) == 0) {
                if ((uVar53 <= uVar44) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("GroupIndex < Description.NumPhysicalGroups",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                        ,0x22,L""), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar40 = 0;
                uVar53 = 0;
                if ((int)uVar44 < (pFVar23->PhysicalGroups).ArrayNum) {
                  uVar53 = ~uVar44 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar43 = *(FName *)((pFVar23->PhysicalGroups).AllocatorInstance.Data +
                                   (longlong)(int)uVar44 * 8);
                local_390 = FVar43;
                local_348 = FTexturePagePool::FindPageAddress
                                      ((FTexturePagePool *)((longlong)FVar43 + 0x58),local_380,
                                       (uchar)uVar24,local_398._4_4_ & 0xffffff,
                                       (byte)(local_398 >> 0x38) & 0xf);
                if (local_348 == 0xffffffff) {
                  ::FName::ToString((FName *)pFVar23,&local_1b8);
                  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("pAddress != ~0u",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                      ,0x9e5,
                                      L"%s missing tile: LayerMask: %X, Layer %d, vAddress %06X, vLevel %d"
                                     );
                  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                  }
                  FVar43 = local_390;
                  if (bVar17) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                FVar11 = local_390;
                bVar50 = (pFVar23->Description).NumTextureLayers;
                if (bVar50 != 0) {
                  plVar25 = (longlong *)((longlong)FVar43 + 0x118);
                  do {
                    if (((uint)bVar50 <= (uint)uVar40) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("LayerIndex < Description.NumTextureLayers",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                            ,0x1f,L""), bVar17)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if ((pFVar23->Description).PhysicalGroupIndex[uVar40] == uVar44) {
                      plVar4 = (longlong *)*plVar25;
                      if (plVar4 == (longlong *)0x0) {
                        (&local_178)[uVar40 * 4] = 0;
                      }
                      else {
                        (**(code **)(*plVar4 + 0x30))(plVar4);
                        (&local_178)[uVar40 * 4] = (longlong)plVar4;
                        (**(code **)(*plVar4 + 0x38))(plVar4);
                      }
                      uVar41 = *(uint *)((longlong)FVar11 + 0x38);
                      plVar25 = plVar25 + 1;
                      local_168[uVar40 * 8 + -2] = (local_348 & 0xffff) % uVar41;
                      local_168[uVar40 * 8 + -1] = (local_348 & 0xffff) / uVar41;
                      local_168[uVar40 * 8] = 0;
                      pFVar23 = local_320;
                    }
                    bVar50 = (pFVar23->Description).NumTextureLayers;
                    uVar53 = (uint)uVar40 + 1;
                    uVar40 = (ulonglong)uVar53;
                    uVar41 = local_33c;
                  } while (uVar53 < bVar50);
                }
              }
              else {
                iVar21 = *(int *)((longlong)&local_78 + uVar24 * 4);
                if ((iVar21 == -1) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("pAddress != ~0u",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                        ,0x9da,L""), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(int *)((longlong)local_360 + (ulonglong)(local_39c * 8 + uVar44) * 4) = iVar21;
              }
              uVar53 = (uint)(pFVar23->Description).NumPhysicalGroups;
              uVar24 = (ulonglong)(uVar44 + 1);
            } while (uVar44 + 1 < uVar53);
          }
          iVar21 = (int)local_350;
          if ((int)local_350 == local_350._4_4_) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x120,8,&local_358,(int *)((longlong)&local_350 + 4));
          }
          local_350 = CONCAT44(local_350._4_4_,iVar21 + 1);
          pFVar45 = local_358.Data + (longlong)iVar21 * 0x120;
          DefaultConstructItems<_FVirtualTextureSystem::SubmitRequests_::__l3::FProducePageDataPrepareTask,int>
                    (pFVar45,1);
          lVar38 = 2;
          *(IVirtualTexture **)pFVar45 = pFVar23->VirtualTexture;
          pFVar45[8] = (FScriptContainerElement)0x0;
          *(FVirtualTextureProducerHandle *)(pFVar45 + 0xc) = local_380[0];
          pFVar45[0x10] = SUB41(local_340,0);
          pFVar45[0x11] = (FScriptContainerElement)((byte)(local_398 >> 0x38) & 0xf);
          *(uint *)(pFVar45 + 0x14) = local_398._4_4_ & 0xffffff;
          *(undefined8 *)(pFVar45 + 0x18) = local_2a0;
          plVar25 = &local_178;
          pFVar45 = pFVar45 + 0x20;
          do {
            lVar7 = plVar25[1];
            *(longlong *)pFVar45 = *plVar25;
            *(longlong *)(pFVar45 + 8) = lVar7;
            lVar7 = plVar25[3];
            *(longlong *)(pFVar45 + 0x10) = plVar25[2];
            *(longlong *)(pFVar45 + 0x18) = lVar7;
            lVar7 = plVar25[5];
            *(longlong *)(pFVar45 + 0x20) = plVar25[4];
            *(longlong *)(pFVar45 + 0x28) = lVar7;
            lVar7 = plVar25[7];
            *(longlong *)(pFVar45 + 0x30) = plVar25[6];
            *(longlong *)(pFVar45 + 0x38) = lVar7;
            lVar7 = plVar25[9];
            *(longlong *)(pFVar45 + 0x40) = plVar25[8];
            *(longlong *)(pFVar45 + 0x48) = lVar7;
            lVar7 = plVar25[0xb];
            *(longlong *)(pFVar45 + 0x50) = plVar25[10];
            *(longlong *)(pFVar45 + 0x58) = lVar7;
            lVar7 = plVar25[0xd];
            *(longlong *)(pFVar45 + 0x60) = plVar25[0xc];
            *(longlong *)(pFVar45 + 0x68) = lVar7;
            lVar7 = plVar25[0xf];
            *(longlong *)(pFVar45 + 0x70) = plVar25[0xe];
            *(longlong *)(pFVar45 + 0x78) = lVar7;
            lVar38 = lVar38 + -1;
            plVar25 = plVar25 + 0x10;
            pFVar45 = pFVar45 + 0x80;
          } while (lVar38 != 0);
          local_338 = local_338 + 1;
          bVar19 = true;
          bVar18 = false;
        }
      }
LAB_145921e90:
      this = local_388;
      if (((local_39c < local_334) && (!bVar19)) && (!bVar18)) {
        pTVar2 = &local_388->TilesToLockForNextFrame;
        pFVar45 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar45 <= (FScriptContainerElement *)&local_398) &&
            ((FScriptContainerElement *)&local_398 <
             pFVar45 + (longlong)(local_388->TilesToLockForNextFrame).ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar21 = (this->TilesToLockForNextFrame).ArrayNum;
        piVar1 = &(this->TilesToLockForNextFrame).ArrayMax;
        if (iVar21 == *piVar1) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->TilesToLockForNextFrame).ArrayNum = iVar21 + 1;
        *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_398;
      }
      local_39c = local_39c + 1;
      uVar24 = (ulonglong)local_39c;
      param_5 = local_330;
      bVar17 = bVar58;
    } while (local_39c < local_330->NumLoadRequests);
  }
  uVar24 = local_350 & 0xffffffff;
  if ((int)local_350 != 0) {
    if ((bVar58) && (bWaitForTasks != false)) {
      local_1a8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_180 = 0;
      local_17c = 4;
      if ((int)local_350 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar24);
      }
      if (4 < (int)local_350) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,(int)local_350,&local_1a8,0,&local_17c);
        uVar24 = local_350 & 0xffffffff;
      }
      iVar21 = (int)uVar24;
      pFVar45 = local_358.Data + (longlong)iVar21 * 0x120;
      FVar42.Data = local_358.Data;
      while( true ) {
        if ((int)uVar24 != iVar21) {
          local_39f = 0;
          `TCheckedPointerIterator<`FVirtualTextureSystem::SubmitRequests'::__l3::FProducePageDataPrepareTask,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_39f);
          uVar24 = local_350 & 0xffffffff;
        }
        if (FVar42.Data == pFVar45) break;
        if (*(longlong *)(FVar42.Data + 0x18) != 0) {
          (**(code **)(**(longlong **)FVar42.Data + 0x28))
                    (*(longlong **)FVar42.Data,*(longlong *)(FVar42.Data + 0x18),&local_1a8);
          uVar24 = local_350 & 0xffffffff;
        }
        FVar42.Data = FVar42.Data + 0x120;
      }
      bVar58 = -1 < CpuChannel->Enabled;
      if (bVar58) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2604,"FVirtualTextureSystem::ProcessRequests_Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xa2c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2604);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        if (StatPtr_ProcessRequests_Wait ==
            (FThreadSafeStaticStat<_private:_void___cdecl_FVirtualTextureSystem::SubmitRequests(FRHICommandList_&,ERHIFeatureLevel::Type,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&,FVirtualTextureUpdateSettings_const_&,FUniqueRequestList_*,bool)_::_119_::FStat_ProcessRequests_Wait>
             )0x0) {
          pFVar26 = ::FName::FName(&local_1f0,"ProcessRequests_Wait");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_ProcessRequests_Wait,*pFVar26,
                     L"ProcessRequests_Wait","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                     ,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS1);
        }
        else {
          _Init_thread_footer(&::_TSS1);
        }
      }
      FVar27 = StatPtr_ProcessRequests_Wait;
      if (StatPtr_ProcessRequests_Wait ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FVirtualTextureSystem::SubmitRequests(FRHICommandList_&,ERHIFeatureLevel::Type,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&,FVirtualTextureUpdateSettings_const_&,FUniqueRequestList_*,bool)_::_119_::FStat_ProcessRequests_Wait>
           )0x0) {
        pFVar26 = ::FName::FName(&local_1e8,"ProcessRequests_Wait");
        FVar27 = (FThreadSafeStaticStat<_private:_void___cdecl_FVirtualTextureSystem::SubmitRequests(FRHICommandList_&,ERHIFeatureLevel::Type,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&,FVirtualTextureUpdateSettings_const_&,FUniqueRequestList_*,bool)_::_119_::FStat_ProcessRequests_Wait>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_ProcessRequests_Wait,*pFVar26,
                              L"ProcessRequests_Wait","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                              true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar43 = *(FName *)FVar27;
      bVar17 = false;
      bVar19 = false;
      local_2d0.ComparisonIndex.Value = 0;
      local_2d0.Number = 0;
      if ((FVar43.ComparisonIndex.Value.Value == 0) && (FVar43.Number == 0)) {
LAB_14592250f:
        bVar18 = false;
        FVar43 = local_2d0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_310.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_310._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
          bVar17 = false;
          bVar19 = true;
          if (-1 < CpuChannel->Enabled) {
            local_2d8.ComparisonIndex.Value = FVar43.ComparisonIndex.Value.Value;
            local_2d8.Number = FVar43.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0xa2d);
            bVar17 = true;
            bVar19 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14592250f;
        local_390 = FVar43;
        FThreadStats::AddMessage(FVar43,CycleScopeStart);
        bVar18 = true;
      }
      pFVar28 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar28 + 0x60))(pFVar28,&local_1a8);
      if (bVar19) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar18) && (FVar43 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar29 == (FThreadStats *)0x0) {
          pFVar30 = FThreadStatsPool::Get();
          pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
        }
        if (pFVar29->bWaitForExplicitFlush < pFVar29->ScopeCount) {
          local_260.NameAndInfo.Index = FVar43.ComparisonIndex.Value;
          local_260.NameAndInfo.Number = FVar43.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_270);
          local_260.StatData.Pad[4] = '\0';
          local_260.StatData.Pad[5] = '\0';
          local_260.StatData.Pad[6] = '\0';
          local_260.StatData.Pad[7] = '\0';
          local_260.StatData.Pad[0] = local_270.s.LowPart._0_1_;
          local_260.StatData.Pad[1] = local_270.s.LowPart._1_1_;
          local_260.StatData.Pad[2] = local_270.s.LowPart._2_1_;
          local_260.StatData.Pad[3] = local_270.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar29,&local_260);
          piVar1 = &pFVar29->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar29,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar29,false,false);
          }
        }
      }
      if (bVar58) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar39 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar39 = local_1a8.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar39,local_180);
      if (local_1a8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_1a8.SecondaryData);
      }
      uVar24 = local_350 & 0xffffffff;
    }
    TVar14 = local_368;
    FVar43 = local_378;
    iVar21 = (int)uVar24;
    pFVar45 = local_358.Data + 0x18;
    pFVar46 = local_358.Data + (longlong)iVar21 * 0x120;
    while( true ) {
      if ((int)uVar24 != iVar21) {
        local_39e[0] = 0;
        `TCheckedPointerIterator<`FVirtualTextureSystem::SubmitRequests'::__l3::FProducePageDataPrepareTask,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_39e);
      }
      if (pFVar45 + -0x18 == pFVar46) break;
      plVar25 = *(longlong **)(pFVar45 + -0x18);
      local_268 = (IVirtualTextureFinalizer *)
                  (**(code **)(*plVar25 + 0x20))(plVar25,FVar43,TVar14,pFVar45[-0x10]);
      if (local_268 != (IVirtualTextureFinalizer *)0x0) {
        TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<IVirtualTextureFinalizer_*_const_&>(&this->Finalizers,&local_268);
      }
      uVar24 = local_350 & 0xffffffff;
      pFVar45 = pFVar45 + 0x120;
    }
  }
  auVar54[4] = '\0';
  auVar54[5] = '\0';
  auVar54[6] = '\0';
  auVar54[7] = '\0';
  auVar54._0_4_ = param_5->NumLoadRequests;
  if ((auVar54 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar31 = StatPtr_STAT_NumStacksRequested;
    if (StatPtr_STAT_NumStacksRequested == (FThreadSafeStaticStat<FStat_STAT_NumStacksRequested>)0x0
       ) {
      pFVar26 = ::FName::FName(&local_1e0,"STAT_NumStacksRequested");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_NumStacksRequested>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumStacksRequested,*pFVar26,
                          L"Num stacks requested","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar43 = *(FName *)FVar31;
    local_378 = FVar43;
    if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar29 == (FThreadStats *)0x0) {
        pFVar30 = FThreadStatsPool::Get();
        pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
      }
      local_250.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
      local_290 = FVar43;
      local_250.StatData.Pad = auVar54;
      local_250.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar29,&local_250);
      FStatsTrace::Add(&local_290,(long64)auVar54);
      if (pFVar29->ScopeCount == 0) {
        FThreadStats::Flush(pFVar29,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar29,false,false);
      }
    }
  }
  auVar55[4] = '\0';
  auVar55[5] = '\0';
  auVar55[6] = '\0';
  auVar55[7] = '\0';
  auVar55[0] = (undefined1)local_338;
  auVar55[1] = local_338._1_1_;
  auVar55[2] = local_338._2_1_;
  auVar55[3] = local_338._3_1_;
  if ((auVar55 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar32 = StatPtr_STAT_NumStacksProduced;
    if (StatPtr_STAT_NumStacksProduced == (FThreadSafeStaticStat<FStat_STAT_NumStacksProduced>)0x0)
    {
      pFVar26 = ::FName::FName(&local_1d8,"STAT_NumStacksProduced");
      FVar32 = (FThreadSafeStaticStat<FStat_STAT_NumStacksProduced>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumStacksProduced,*pFVar26,
                          L"Num stacks produced","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                          L"Virtual Texturing",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar43 = *(FName *)FVar32;
    local_378 = FVar43;
    if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar29 == (FThreadStats *)0x0) {
        pFVar30 = FThreadStatsPool::Get();
        pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
      }
      local_240.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
      local_288 = FVar43;
      local_240.StatData.Pad = auVar55;
      local_240.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar29,&local_240);
      FStatsTrace::Add(&local_288,(long64)auVar55);
      if (pFVar29->ScopeCount == 0) {
        FThreadStats::Flush(pFVar29,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar29,false,false);
      }
    }
  }
  auVar56[4] = '\0';
  auVar56[5] = '\0';
  auVar56[6] = '\0';
  auVar56[7] = '\0';
  auVar56[0] = (undefined1)local_344;
  auVar56[1] = local_344._1_1_;
  auVar56[2] = local_344._2_1_;
  auVar56[3] = local_344._3_1_;
  if ((auVar56 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar33 = StatPtr_STAT_NumPageAllocateFails;
    if (StatPtr_STAT_NumPageAllocateFails ==
        (FThreadSafeStaticStat<FStat_STAT_NumPageAllocateFails>)0x0) {
      pFVar26 = ::FName::FName(&local_1d0,"STAT_NumPageAllocateFails");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_NumPageAllocateFails>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumPageAllocateFails,*pFVar26,
                          L"Num page allocation fails","STATGROUP_VirtualTexturing",
                          "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar43 = *(FName *)FVar33;
    local_378 = FVar43;
    if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar29 == (FThreadStats *)0x0) {
        pFVar30 = FThreadStatsPool::Get();
        pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
      }
      local_230.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
      local_280 = FVar43;
      local_230.StatData.Pad = auVar56;
      local_230.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar29,&local_230);
      FStatsTrace::Add(&local_280,(long64)auVar56);
      if (pFVar29->ScopeCount == 0) {
        FThreadStats::Flush(pFVar29,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar29,false,false);
      }
    }
  }
  if (local_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data);
  }
  if ((local_2f8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2f8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2f8 & 4) != 0) {
    FThreadStats::AddMessage(local_300,CycleScopeEnd);
  }
  local_2f8 = 0;
  FVar34 = StatPtr_STAT_ProcessRequests_Map;
  if (StatPtr_STAT_ProcessRequests_Map == (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Map>)0x0
     ) {
    pFVar26 = ::FName::FName(&local_1c8,"STAT_ProcessRequests_Map");
    FVar34 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Map>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_Map,*pFVar26,
                        L"Map Requests","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar34;
  bVar58 = false;
  bVar19 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  bVar17 = false;
  bVar18 = false;
  if ((FVar43.ComparisonIndex.Value.Value == 0) && (FVar43.Number == 0)) {
LAB_145922c7c:
    bVar19 = bVar18;
    bVar58 = bVar17;
    bVar17 = false;
    local_390 = local_2c0;
    FVar43 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_30c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_30c._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar58 = false;
      bVar19 = true;
      bVar17 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e0.ComparisonIndex.Value = FVar43.ComparisonIndex.Value.Value;
        local_2e0.Number = FVar43.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xa47);
        bVar58 = true;
        bVar19 = true;
        bVar17 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145922c7c;
    local_390 = FVar43;
    local_378 = FVar43;
    FThreadStats::AddMessage(FVar43,CycleScopeStart);
    bVar17 = true;
  }
  uVar24 = 0;
  if (local_330->NumDirectMappingRequests != 0) {
    do {
      FVar43 = *(FName *)(local_330->DirectMappingRequests + uVar24);
      local_368 = *(Type *)((longlong)local_330->DirectMappingRequests + uVar24 * 0xc + 8);
      local_378.ComparisonIndex = FVar43.ComparisonIndex.Value;
      FVar13.Value = local_378.ComparisonIndex.Value;
      uVar41 = local_378.ComparisonIndex.Value >> 0x1c;
      pFVar47 = (FVirtualTextureSpace *)0x0;
      local_378 = FVar43;
      if ((int)uVar41 < (this->Spaces).ArrayNum) {
        if (((this->Spaces).ArrayNum <= (int)uVar41) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar47 = *(FVirtualTextureSpace **)
                   ((this->Spaces).AllocatorInstance.Data + (ulonglong)uVar41 * 8);
      }
      FVar11 = local_378;
      this = local_388;
      uVar41 = local_378.Number >> 0x10 & 0xff;
      pFVar48 = (FVirtualTextureSpace *)0x0;
      if ((int)uVar41 < (local_388->PhysicalSpaces).ArrayNum) {
        if (((local_388->PhysicalSpaces).ArrayNum <= (int)uVar41) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar48 = *(FVirtualTextureSpace **)
                   ((this->PhysicalSpaces).AllocatorInstance.Data + (ulonglong)uVar41 * 8);
      }
      bVar50 = FVar11.Number._3_1_;
      FTexturePagePool::MapPage
                ((FTexturePagePool *)&(pFVar48->Allocator).FreeList,pFVar47,
                 (FVirtualTexturePhysicalSpace *)pFVar48,(byte)local_368 & 0xf,bVar50 >> 4,
                 FVar43.ComparisonIndex.Value._3_1_ & 0xf,FVar13.Value & 0xffffff,bVar50 & 0xf,
                 (ushort)FVar11.Number);
      uVar41 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar41;
      FVar43 = local_390;
    } while (uVar41 < local_330->NumDirectMappingRequests);
  }
  FVar11 = local_360;
  pFVar12 = local_388;
  uVar24 = 0;
  pFVar49 = local_330;
  if (local_330->NumMappingRequests != 0) {
    do {
      FVar43 = (FName)pFVar49->MappingRequests[uVar24].PackedValue;
      local_368 = *(Type *)((longlong)FVar11 +
                           (ulonglong)
                           ((FVar43.Number >> 0x14 & 0xf) + (uint)(ushort)FVar43.Number * 8) * 4);
      local_360 = FVar43;
      if (local_368 != ~ES2_REMOVED) {
        uVar41 = *(uint *)(pFVar49->LoadRequests + ((ulonglong)FVar43 >> 0x20 & 0xffff));
        uVar53 = uVar41 & 0x3fffff;
        if (((uint)(pFVar12->Producers).Producers.ArrayNum <= uVar53) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < (uint32)Producers.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                                ,0x10f,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((pFVar12->Producers).Producers.ArrayNum <= (int)uVar53) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar45 = (pFVar12->Producers).Producers.AllocatorInstance.Data;
        if ((*(ushort *)(pFVar45 + (ulonglong)uVar53 * 0xf8 + 0xf4) != (ushort)(uVar41 >> 0x16)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Entry.Magic == Handle.Magic",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                                ,0x111,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar15 = local_360;
        uVar41 = local_360.Number;
        uVar44 = local_360.Number >> 0x14 & 0xf;
        if (((byte)pFVar45[(ulonglong)uVar53 * 0xf8 + 0xbc] <= uVar44) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupIndex < Description.NumPhysicalGroups",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                ,0x22,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)(pFVar45 + (ulonglong)uVar53 * 0xf8 + 0xd8) <= (int)uVar44) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = *(FVirtualTexturePhysicalSpace **)
                  (*(longlong *)(pFVar45 + (ulonglong)uVar53 * 0xf8 + 0xd0) + (ulonglong)uVar44 * 8)
        ;
        uVar40 = (ulonglong)FVar43 >> 0x1c & 0xf;
        iVar21 = (int)uVar40;
        if (iVar21 < (pFVar12->Spaces).ArrayNum) {
          if (((pFVar12->Spaces).ArrayNum <= iVar21) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar47 = *(FVirtualTextureSpace **)
                     ((pFVar12->Spaces).AllocatorInstance.Data + uVar40 * 8);
        }
        else {
          pFVar47 = (FVirtualTextureSpace *)0x0;
        }
        if ((((byte)(1 << ((byte)(uVar41 >> 0x14) & 0xf)) &
             local_330->LoadRequestGroupMask[uVar41 & 0xffff]) == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("RequestList->GetGroupMask(MappingRequest.LoadRequestIndex) & (1u << MappingRequest.ProducerPhysicalGroupIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                ,0xa5f,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar50 = FVar15.Number._3_1_;
        FTexturePagePool::MapPage
                  (&pFVar5->Pool,pFVar47,pFVar5,bVar50 & 0xf,bVar50 >> 4,
                   FVar43.ComparisonIndex.Value._3_1_ & 0xf,
                   FVar43.ComparisonIndex.Value.Value & 0xffffff,FVar15.Number._2_1_ & 0xf,
                   (ushort)local_368);
        pFVar49 = local_330;
      }
      uVar41 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar41;
      FVar43 = local_390;
    } while (uVar41 < pFVar49->NumMappingRequests);
  }
  uVar41 = 0;
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar58) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar43,CycleScopeEnd);
  }
  pFVar12 = local_388;
  if ((local_388->AllocatedVTsToMap).ArrayNum < 1) goto LAB_14592339f;
  FVar35 = StatPtr_STAT_ProcessRequests_MapNew;
  if (StatPtr_STAT_ProcessRequests_MapNew ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MapNew>)0x0) {
    pFVar26 = ::FName::FName(&local_1c0,"STAT_ProcessRequests_MapNew");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_MapNew>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_MapNew,*pFVar26,
                        L"Map New VTs","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar35;
  bVar58 = false;
  bVar19 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  bVar17 = false;
  bVar18 = false;
  if ((FVar43.ComparisonIndex.Value.Value == 0) &&
     (bVar8 = bVar58, bVar9 = bVar19, FVar43.Number == 0)) {
LAB_145923207:
    bVar19 = bVar18;
    bVar58 = bVar17;
    bVar17 = false;
    local_360 = local_2b0;
    FVar43 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_308[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_308[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar58 = false;
      bVar19 = true;
      bVar17 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.ComparisonIndex.Value = FVar43.ComparisonIndex.Value.Value;
        local_2e8.Number = FVar43.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0xa69);
        bVar58 = true;
        bVar19 = true;
        bVar17 = true;
        bVar18 = true;
      }
    }
    bVar8 = bVar58;
    bVar9 = bVar19;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145923207;
    local_360 = FVar43;
    FThreadStats::AddMessage(FVar43,CycleScopeStart);
    bVar17 = true;
  }
  pFVar52 = pFVar12;
  if ((pFVar12->AllocatedVTsToMap).ArrayNum != 0) {
    do {
      uVar53 = 0;
      if ((int)uVar41 < (pFVar12->AllocatedVTsToMap).ArrayNum) {
        uVar53 = ~uVar41 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar25 = *(longlong **)
                 ((pFVar12->AllocatedVTsToMap).AllocatorInstance.Data + (longlong)(int)uVar41 * 8);
      cVar20 = (**(code **)(*plVar25 + 0x58))(plVar25,pFVar12);
      if (cVar20 == '\0') {
        uVar41 = uVar41 + 1;
      }
      else {
        uVar53 = 0;
        if ((int)uVar41 < (pFVar12->AllocatedVTsToMap).ArrayNum) {
          uVar53 = ~uVar41 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar21 = (pFVar12->AllocatedVTsToMap).ArrayNum;
        pFVar45 = (pFVar12->AllocatedVTsToMap).AllocatorInstance.Data;
        iVar37 = ~uVar41 + iVar21;
        if (1 < iVar37) {
          iVar37 = 1;
        }
        if (iVar37 != 0) {
          memmove(pFVar45 + (longlong)(int)uVar41 * 8,pFVar45 + (longlong)(iVar21 - iVar37) * 8,
                  (longlong)iVar37 << 3);
        }
        piVar1 = &(pFVar12->AllocatedVTsToMap).ArrayNum;
        *piVar1 = *piVar1 + -1;
        *(undefined1 *)((longlong)plVar25 + 0x6c) = 0;
      }
      FVar43 = local_360;
      pFVar52 = local_388;
      bVar8 = bVar58;
      bVar9 = bVar19;
    } while (uVar41 < (uint)(pFVar12->AllocatedVTsToMap).ArrayNum);
  }
  iVar21 = (pFVar52->AllocatedVTsToMap).ArrayNum;
  piVar1 = &(pFVar52->AllocatedVTsToMap).ArrayMax;
  if (*piVar1 != iVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar21,&(pFVar52->AllocatedVTsToMap).AllocatorInstance,iVar21,piVar1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar43,CycleScopeEnd);
  }
LAB_14592339f:
  FMemScope::~FMemScope(&local_278);
  FLLMScope::~FLLMScope(local_328);
  if (bVar57) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_145921c90:
  uVar44 = (uint)(pFVar23->Description).NumPhysicalGroups;
  uVar24 = (ulonglong)(uVar51 + 1);
  if (uVar44 <= uVar51 + 1) goto LAB_145921ca3;
  goto LAB_145921a60;
}

// SubmitRequestsFromLocalTileRequests @ 1459234b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FVirtualTextureSystem::SubmitRequestsFromLocalTileRequests
          (FVirtualTextureSystem *this,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1,
          FRHICommandList *param_2,
          TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
          *param_3,TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                   *param_4,EVTProducePageFlags param_5,Type param_6,uint param_7)

{
  longlong lVar1;
  code *pcVar2;
  FRHICommandList *pFVar3;
  bool bVar4;
  int iVar5;
  FVirtualTextureLocalTileRequest *this_00;
  FScriptContainerElement FVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  FVirtualTextureLocalTileRequest *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStackY_268 [32];
  bool local_218;
  bool local_217;
  char local_216;
  EVTProducePageFlags local_215;
  FVirtualTextureProducerHandle local_214;
  uint local_210;
  longlong *local_208;
  uint local_200;
  FLLMScope local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  Type local_1ec;
  ulonglong local_1e8;
  FVirtualTextureLocalTileRequest *local_1e0;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *local_1d8;
  TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *local_1d0;
  FVirtualTextureSystem *local_1c8;
  TArray<FVirtualTextureLocalTileRequest,TSizedDefaultAllocator<32>_> local_1c0;
  FRHICommandList *local_1a8;
  IVirtualTextureFinalizer *local_1a0;
  TVTTilePriorityAndIndex<FVTLocalTilePriority,16> *local_198;
  FMemScope local_190;
  TArrayView<FVirtualTextureLocalTileRequest_const_,int> local_188;
  TArrayView<TVTTilePriorityAndIndex<FVTLocalTilePriority,16>,int> local_178;
  undefined1 local_168 [8];
  int local_160;
  longlong local_158;
  undefined8 local_150;
  uint local_148 [6];
  undefined8 local_130;
  int local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_215 = param_5;
  local_1ec = param_6;
  bVar17 = CpuChannel->Enabled < 0;
  local_1d8 = param_3;
  local_1c8 = this;
  local_1a8 = param_2;
  if (bVar17) {
    local_216 = '\0';
  }
  else {
    local_216 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2239,
               "FVirtualTextureSystem::SubmitRequestsFromLocalTileList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x8bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2239);
  }
  FLLMScope::FLLMScope(&local_1fc,VirtualTextureSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_190,VirtualTextureSystem,true);
  uVar9 = 0;
  uVar12 = 0;
  local_210 = 0;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  ::Array(param_4,&local_1c0);
  local_188.ArrayNum = local_1c0.ArrayNum;
  local_188.DataPtr = (FVirtualTextureLocalTileRequest *)local_1c0.AllocatorInstance.Data;
  if ((local_1c0.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  SortLocalTileRequests(this,&local_178,param_1,&local_188);
  local_1d0 = local_178.DataPtr;
  local_198 = local_178.DataPtr + local_178.ArrayNum;
  cVar8 = !bVar17;
  if (local_178.DataPtr != local_198) {
    do {
      uVar12 = *(uint *)local_178.DataPtr & 0xffff;
      local_1d0 = local_178.DataPtr;
      if ((local_1c0.ArrayNum <= (int)uVar12) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      local_1e0 = (FVirtualTextureLocalTileRequest *)
                  (local_1c0.AllocatorInstance.Data + (ulonglong)uVar12 * 8);
      local_208 = (longlong *)
                  (*(ulonglong *)(local_1c0.AllocatorInstance.Data + (ulonglong)uVar12 * 8) &
                  0xfffffffffffffff);
      uVar12 = (this->Producers).Producers.ArrayNum;
      local_1e8 = (ulonglong)local_208 >> 0x20;
      local_214.PackedValue = (uint)local_208;
      uVar13 = (uint)local_208 & 0x3fffff;
      if (uVar13 < uVar12) {
        if (((int)uVar12 <= (int)uVar13) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar11 = (uint)local_1e8;
        pFVar14 = (this->Producers).Producers.AllocatorInstance.Data + (ulonglong)uVar13 * 0xf8;
        if (*(ushort *)(pFVar14 + 0xf4) != (ushort)(local_214.PackedValue >> 0x16))
        goto LAB_1459236ef;
      }
      else {
LAB_1459236ef:
        uVar11 = (uint)local_1e8;
        pFVar14 = (FScriptContainerElement *)0x0;
      }
      uVar13 = 0;
      local_150 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_130 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_110 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_f0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_d0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_b0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_90 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_70 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_158 = 0;
      local_148[0] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_148[2] = 0;
      local_148[3] = 0;
      local_148[4] = 0;
      local_148[5] = 0;
      local_128 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_120 = 0;
      local_118 = 0;
      local_108 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_e0 = 0;
      local_d8 = 0;
      local_c8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_c0 = 0;
      local_b8 = 0;
      local_a8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_a0 = 0;
      local_98 = 0;
      local_88 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_80 = 0;
      local_78 = 0;
      local_68 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_60 = 0;
      FVar6 = pFVar14[0xbc];
      local_200 = 0;
      uVar12 = uVar9;
      if (FVar6 != (FScriptContainerElement)0x0) {
        local_1f4 = uVar11 >> 0x18 & 0xf;
        uVar11 = uVar11 & 0xffffff;
        local_1f0 = uVar11;
        uVar9 = local_1f4;
        uVar16 = uVar13;
        do {
          if (((byte)FVar6 <= uVar13) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GroupIndex < Description.NumPhysicalGroups",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                  ,0x22,L""), bVar17)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          uVar12 = 0;
          if ((int)uVar13 < *(int *)(pFVar14 + 0xd8)) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          lVar1 = *(longlong *)(*(longlong *)(pFVar14 + 0xd0) + (longlong)(int)uVar13 * 8);
          local_1f8 = FTexturePagePool::FindPageAddress
                                ((FTexturePagePool *)(lVar1 + 0x58),&local_214,(uchar)uVar13,uVar11,
                                 (uchar)uVar9);
          if (local_1f8 != 0xffffffff) {
            FVar6 = pFVar14[0x2a];
            uVar15 = 0;
            if (FVar6 != (FScriptContainerElement)0x0) {
              plVar7 = (longlong *)(lVar1 + 0x118);
              local_208 = plVar7;
              do {
                if (((uint)(byte)FVar6 <= (uint)uVar15) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("LayerIndex < Description.NumTextureLayers",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                        ,0x1f,L""), plVar7 = local_208, bVar17)) {
                  pcVar2 = (code *)swi(3);
                  iVar5 = (*pcVar2)();
                  return iVar5;
                }
                if ((byte)pFVar14[uVar15 + 0xbd] == uVar13) {
                  plVar7 = (longlong *)*plVar7;
                  if (plVar7 == (longlong *)0x0) {
                    (&local_158)[uVar15 * 4] = 0;
                  }
                  else {
                    (**(code **)(*plVar7 + 0x30))(plVar7);
                    (&local_158)[uVar15 * 4] = (longlong)plVar7;
                    (**(code **)(*plVar7 + 0x38))(plVar7);
                  }
                  uVar12 = *(uint *)(lVar1 + 0x38);
                  local_148[uVar15 * 8 + -2] = (local_1f8 & 0xffff) % uVar12;
                  local_148[uVar15 * 8 + -1] = (local_1f8 & 0xffff) / uVar12;
                  local_200 = local_200 | 1 << ((byte)uVar15 & 0x1f);
                  local_148[uVar15 * 8] = 0;
                  plVar7 = local_208 + 1;
                  local_208 = plVar7;
                  uVar16 = local_200;
                }
                FVar6 = pFVar14[0x2a];
                uVar12 = (uint)uVar15 + 1;
                uVar15 = (ulonglong)uVar12;
                uVar11 = local_1f0;
                uVar9 = local_1f4;
              } while (uVar12 < (byte)FVar6);
            }
          }
          pFVar3 = local_1a8;
          pFVar10 = local_1e0;
          uVar12 = local_210;
          FVar6 = pFVar14[0xbc];
          uVar13 = uVar13 + 1;
        } while (uVar13 < (byte)FVar6);
        if (uVar16 != 0) {
          if ((param_7 == 0) || (local_210 < param_7)) {
            (**(code **)(**(longlong **)(pFVar14 + 0xe0) + 0x18))
                      (*(longlong **)(pFVar14 + 0xe0),local_168,local_1a8,&local_214);
            pFVar10 = local_1e0;
            if (local_160 == 3) {
              local_1a0 = (IVirtualTextureFinalizer *)
                          (**(code **)(**(longlong **)(pFVar14 + 0xe0) + 0x20))
                                    (*(longlong **)(pFVar14 + 0xe0),pFVar3,local_1ec,local_215);
              if (local_1a0 != (IVirtualTextureFinalizer *)0x0) {
                TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<IVirtualTextureFinalizer_*_const_&>(&local_1c8->Finalizers,&local_1a0)
                ;
              }
              local_210 = uVar12 + 1;
              uVar12 = local_210;
              goto LAB_145923b0f;
            }
            local_217 = false;
            this_00 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                      ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                                (local_1d8,
                                 (int)((local_1e0->PackedValue & 0xfffffffffffffff) >> 0x20) * 0x17
                                 + (int)(local_1e0->PackedValue & 0xfffffffffffffff),local_1e0,
                                 &local_217);
            cVar8 = local_217;
          }
          else {
            local_218 = false;
            this_00 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                      ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                                (local_1d8,
                                 (int)((local_1e0->PackedValue & 0xfffffffffffffff) >> 0x20) * 0x17
                                 + (int)(local_1e0->PackedValue & 0xfffffffffffffff),local_1e0,
                                 &local_218);
            cVar8 = local_218;
          }
          if (cVar8 != '\0') {
            FVirtualTextureLocalTileRequest::MergeWith
                      ((FVirtualTextureLocalTileRequest *)&this_00->_s_1,pFVar10);
          }
        }
      }
LAB_145923b0f:
      local_178.DataPtr = local_1d0 + 1;
      this = local_1c8;
      cVar8 = local_216;
      local_1d0 = local_178.DataPtr;
      uVar9 = uVar12;
    } while (local_178.DataPtr != local_198);
  }
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_190);
  FLLMScope::~FLLMScope(&local_1fc);
  if (cVar8 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar12;
}

// SubmitThrottledRequests @ 145923bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::SubmitThrottledRequests
          (FVirtualTextureSystem *this,FRHICommandList *param_1,FVirtualTextureUpdater *param_2,
          EUpdatePhase param_3)

{
  int *piVar1;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *this_00;
  FVirtualTextureLocalTileRequest *pFVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_QueueAdaptiveRequests> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NumMappedPageUpdate> FVar18;
  FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Sort> FVar19;
  FVirtualTextureLocalTileRequest *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NumContinuousPageUpdate> FVar21;
  int iVar22;
  ulonglong uVar23;
  FName FVar24;
  longlong lVar25;
  FUniqueRequestList *this_01;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *this_02;
  bool local_128;
  bool local_127;
  bool local_126;
  Type local_124;
  FName local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  FUniqueRequestList *local_108;
  FColor_u_0 local_100;
  FColor_u_0 local_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_d8;
  LARGE_INTEGER local_c8;
  FName local_c0;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  TArrayView<unsigned_int_const_,int> local_58;
  
  pTVar9 = CVarVTSortTileRequestsByPriority.Ref;
  this_01 = param_2->MergedRequestList;
  local_b8 = &param_2->Allocator;
  local_124 = param_2->FeatureLevel;
  local_108 = this_01;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_126 = pTVar9->ShadowedValue[1] != 0;
  if (this_01->NumAdaptiveAllocationRequests != 0) {
    FVar15 = StatPtr_STAT_ProcessRequests_QueueAdaptiveRequests;
    if (StatPtr_STAT_ProcessRequests_QueueAdaptiveRequests ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_QueueAdaptiveRequests>)0x0) {
      pFVar14 = ::FName::FName(&local_78,"STAT_ProcessRequests_QueueAdaptiveRequests");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_QueueAdaptiveRequests>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ProcessRequests_QueueAdaptiveRequests,*pFVar14,
                          L"Queue Adaptive Requests","STATGROUP_VirtualTexturing","STATCAT_Advanced"
                          ,L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    bVar7 = false;
    bVar10 = false;
    FVar24 = *(FName *)FVar15;
    if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_145923d6b:
      bVar8 = false;
      FVar24 = local_e8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_100.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar7 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
          local_f8.Number = FVar24.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                     ,0x921);
          bVar7 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145923d6b;
      local_118 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar7 = false;
      bVar8 = true;
    }
    local_118 = (FName)this_01->AdaptiveAllocationsRequests;
    uVar3 = this->Frame;
    uStack_110 = this_01->NumAdaptiveAllocationRequests;
    if (((int)uStack_110 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58._12_4_ = uStack_10c;
    local_58.ArrayNum = uStack_110;
    local_58.DataPtr = (uint *)local_118;
    FAdaptiveVirtualTexture::QueuePackedAllocationRequests(this,&local_58,uVar3);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_a8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_a8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_c8);
        local_a8.StatData.Pad[4] = '\0';
        local_a8.StatData.Pad[5] = '\0';
        local_a8.StatData.Pad[6] = '\0';
        local_a8.StatData.Pad[7] = '\0';
        local_a8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
        local_a8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
        local_a8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
        local_a8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_a8);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
  }
  if (param_3 == Begin) {
    this_00 = &this->MappedTilesToProduce;
    this_02 = &this->TransientCollectedTilesToProduce;
    iVar12 = SubmitRequestsFromLocalTileRequests
                       (this,&param_2->Allocator,param_1,this_02,this_00,None,local_124,
                        param_2->PageUploadBudgetRVT);
    iVar12 = param_2->PageUploadBudgetRVT - iVar12;
    iVar13 = 0;
    if (0 < iVar12) {
      iVar13 = iVar12;
    }
    param_2->PageUploadBudgetRVT = iVar13;
    iVar13 = *(int *)&(this->MappedTilesToProduce).Elements.field_0x8 -
             *(int *)&(this->MappedTilesToProduce).Elements.field_0x34;
    if ((iVar13 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar18 = StatPtr_STAT_NumMappedPageUpdate;
      if (StatPtr_STAT_NumMappedPageUpdate ==
          (FThreadSafeStaticStat<FStat_STAT_NumMappedPageUpdate>)0x0) {
        pFVar14 = ::FName::FName(&local_70,"STAT_NumMappedPageUpdate");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_NumMappedPageUpdate>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumMappedPageUpdate,*pFVar14,
                            L"Num mapped page update","STATGROUP_VirtualTexturing",
                            "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar24 = *(FName *)FVar18;
      local_118 = FVar24;
      if (((FVar24 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_98.NameAndInfo.Number = FVar24.Number & 0xffffafff | 0xa000;
        local_c0 = FVar24;
        local_98.StatData.Pad = (uchar  [8])(longlong)iVar13;
        local_98.NameAndInfo.Index.Value = FVar24.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_98);
        FStatsTrace::Add(&local_c0,(longlong)iVar13);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    if (*(int *)&(this->MappedTilesToProduce).Elements.field_0x8 !=
        *(int *)&(this->MappedTilesToProduce).Elements.field_0x34) {
      TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
      iVar13 = *(int *)&(this->MappedTilesToProduce).Elements.field_0xc;
      *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x8 = 0;
      if (iVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->MappedTilesToProduce).Elements.field_0xc);
      }
      *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->MappedTilesToProduce).Elements.field_0x28 = 0;
    }
    TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>(this_00,this_02);
    TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
    ::Reset(this_02);
    this_01 = local_108;
  }
  FVar19 = StatPtr_STAT_ProcessRequests_Sort;
  if (StatPtr_STAT_ProcessRequests_Sort ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Sort>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_ProcessRequests_Sort");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ProcessRequests_Sort>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessRequests_Sort,*pFVar14,
                        L"Sort Requests","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                        L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar19;
  bVar10 = false;
  bVar7 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_fc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_fc._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_f0.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0x933);
        bVar10 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar8 = true;
      goto LAB_1459241d0;
    }
  }
  bVar8 = false;
  FVar24 = local_d8;
LAB_1459241d0:
  FUniqueRequestList::SortRequests
            (this_01,&this->Producers,&param_2->Allocator,param_2->PageUploadBudgetRVT,
             param_2->PageUploadBudgetSVT,(param_2->Settings).MaxSVTPageUploads == 0,local_126);
  uVar3 = this_01->NumNonStreamingLoadRequests;
  iVar13 = this_01->NumLoadRequests - uVar3;
  if ((iVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRequestsSVT >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                          ,0x941,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar22 = param_2->PageUploadBudgetRVT - uVar3;
  iVar12 = 0;
  if (0 < iVar22) {
    iVar12 = iVar22;
  }
  iVar13 = param_2->PageUploadBudgetSVT - iVar13;
  param_2->PageUploadBudgetRVT = iVar12;
  iVar12 = 0;
  if (0 < iVar13) {
    iVar12 = iVar13;
  }
  param_2->PageUploadBudgetSVT = iVar12;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  if (param_3 == End) {
    uVar3 = (param_2->Settings).MaxContinuousUpdates;
    iVar13 = param_2->PageUploadBudgetRVT;
    uVar4 = local_108->NumContinuousUpdateRequests;
    if ((int)uVar3 < 0) {
      if (0 < (int)uVar4) {
        lVar25 = 0;
        do {
          uVar23 = local_108->ContinuousUpdateRequests[lVar25].PackedValue & 0xfffffffffffffff;
          local_128 = false;
          pFVar2 = local_108->ContinuousUpdateRequests + lVar25;
          pFVar20 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                              (&this->ContinuousUpdateTilesToProduce,
                               (int)(uVar23 >> 0x20) * 0x17 + (int)uVar23,pFVar2,&local_128);
          if (local_128 != false) {
            FVirtualTextureLocalTileRequest::MergeWith
                      ((FVirtualTextureLocalTileRequest *)&pFVar20->_s_1,pFVar2);
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)uVar4);
      }
    }
    else {
      uVar6 = uVar4;
      if ((int)uVar3 < (int)uVar4) {
        uVar6 = uVar3;
      }
      iVar12 = 0;
      if (0 < (int)uVar6) {
        do {
          if (iVar13 <= *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 -
                        *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34) break;
          iVar22 = rand();
          local_127 = false;
          uVar23 = (longlong)iVar22 % (longlong)(int)uVar4 & 0xffffffff;
          pFVar2 = local_108->ContinuousUpdateRequests + uVar23;
          uVar23 = local_108->ContinuousUpdateRequests[uVar23].PackedValue & 0xfffffffffffffff;
          pFVar20 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                              (&this->ContinuousUpdateTilesToProduce,
                               (int)(uVar23 >> 0x20) * 0x17 + (int)uVar23,pFVar2,&local_127);
          if (local_127 != false) {
            FVirtualTextureLocalTileRequest::MergeWith
                      ((FVirtualTextureLocalTileRequest *)&pFVar20->_s_1,pFVar2);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar6);
      }
    }
    iVar12 = SubmitRequestsFromLocalTileRequests
                       (this,local_b8,param_1,&this->TransientCollectedTilesToProduce,
                        &this->ContinuousUpdateTilesToProduce,ContinuousUpdate,local_124,0);
    iVar12 = param_2->PageUploadBudgetRVT - iVar12;
    iVar13 = 0;
    if (0 < iVar12) {
      iVar13 = iVar12;
    }
    param_2->PageUploadBudgetRVT = iVar13;
    iVar13 = *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 -
             *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34;
    if ((iVar13 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar21 = StatPtr_STAT_NumContinuousPageUpdate;
      if (StatPtr_STAT_NumContinuousPageUpdate ==
          (FThreadSafeStaticStat<FStat_STAT_NumContinuousPageUpdate>)0x0) {
        pFVar14 = ::FName::FName(&local_60,"STAT_NumContinuousPageUpdate");
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_NumContinuousPageUpdate>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumContinuousPageUpdate,
                            *pFVar14,L"Num continuous page update","STATGROUP_VirtualTexturing",
                            "STATCAT_Advanced",L"Virtual Texturing",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar24 = *(FName *)FVar21;
      if (((FVar24 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_88.NameAndInfo.Number = FVar24.Number & 0xffffafff | 0xa000;
        local_b0 = FVar24;
        local_88.StatData.Pad = (uchar  [8])(longlong)iVar13;
        local_88.NameAndInfo.Index.Value = FVar24.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_88);
        FStatsTrace::Add(&local_b0,(longlong)iVar13);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    if (*(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 !=
        *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34) {
      TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->ContinuousUpdateTilesToProduce);
      iVar13 = *(int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0xc;
      *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x8 = 0;
      if (iVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&this->ContinuousUpdateTilesToProduce,0,
                   (int *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0xc);
      }
      *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->ContinuousUpdateTilesToProduce).Elements.field_0x28 = 0;
    }
    TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
    ::Reset(&this->TransientCollectedTilesToProduce);
    this_01 = local_108;
  }
  SubmitRequests(this,param_1,local_124,&param_2->Allocator,&param_2->Settings,this_01,true);
  return;
}

// TryReleaseProducer @ 145925a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FVirtualTextureSystem::TryReleaseProducer
          (FVirtualTextureSystem *this,FVirtualTextureProducerHandle *param_1)

{
  FRecursiveMutex *this_00;
  IVirtualTexture *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FProducerEntry *pFVar5;
  TRefCountPtr<FBaseGraphTask> *pTVar6;
  undefined1 auStack_78 [32];
  TRefCountPtr<FBaseGraphTask> local_58 [4];
  TRefCountPtr<FBaseGraphTask> *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->bUpdating != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x34e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = &this->Mutex;
  if (this_00 == (FRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  UE::FRecursiveMutex::Lock(this_00);
  pFVar5 = FVirtualTextureProducerCollection::GetEntry(&this->Producers,param_1);
  if (pFVar5 != (FProducerEntry *)0x0) {
    local_2c = 4;
    local_38 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_30 = 0;
    pIVar1 = (pFVar5->Producer).VirtualTexture;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,local_58);
    if (local_30 != 0) {
      pTVar6 = local_58;
      if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        pTVar6 = local_38;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar6,local_30);
      if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        FMemory::Free(local_38);
      }
      bVar3 = false;
      goto LAB_145925b51;
    }
    pTVar6 = local_58;
    if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar6 = local_38;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar6,0);
    if (local_38 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_38);
    }
  }
  FVirtualTextureProducerCollection::ReleaseProducer(&this->Producers,this,param_1);
  bVar3 = true;
LAB_145925b51:
  if (this_00 != (FRecursiveMutex *)0x0) {
    UE::FRecursiveMutex::Unlock(this_00);
  }
  return bVar3;
}

// UnlockTile @ 145926ac0

void __thiscall
FVirtualTextureSystem::UnlockTile
          (FVirtualTextureSystem *this,FVirtualTextureLocalTile *param_1,
          FVirtualTextureProducer *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FVirtualTextureProducerHandle local_res8 [2];
  
  if (this->bUpdating != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUpdating",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                       ,0x4cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FTexturePageLocks::Unlock(&this->TileLocks,param_1);
  if (bVar2) {
    iVar3 = TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_>::Remove
                      (&this->TilesToLock,param_1);
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        local_res8[0] = (FVirtualTextureProducerHandle)(param_1->_s_1).PackedProducerHandle;
        UnlockTileInternal(local_res8,param_2,param_1,this->Frame);
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTilesRemoved <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                         ,0x4d2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Update @ 145927e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSystem::Update
          (FVirtualTextureSystem *this,FRDGBuilder *param_1,Type param_2,ISceneRenderer *param_3,
          FVirtualTextureUpdateSettings *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FVirtualTextureUpdateSettings *pFVar4;
  
  CallPendingCallbacks(this);
  BeginUpdate(this,(FRDGBuilder *)&param_4,(Type)param_1,(ISceneRenderer *)(ulonglong)param_2,
              (FVirtualTextureUpdateSettings *)param_3);
  EndUpdate(this,param_1,
            (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> *)&param_4,
            param_2);
  FinalizeRequests(this,param_1,param_3);
  pFVar4 = param_4;
  if (param_4 != (FVirtualTextureUpdateSettings *)0x0) {
    puVar3 = *(undefined8 **)(param_4 + 2);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
    ~TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>
              ((TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *)
               &pFVar4[1].bEnablePlayback);
    ::operator_delete(pFVar4,0x60);
  }
  return;
}

// UpdateCsvStats @ 145928d20

void __thiscall FVirtualTextureSystem::UpdateCsvStats(FVirtualTextureSystem *this)

{
  FVirtualTexturePhysicalSpace *this_00;
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  pTVar2 = CVarVTCsvStats.Ref;
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar2->ShadowedValue[1] != 0) {
    uVar5 = 0;
    fVar7 = 0.0;
    if (0 < (this->PhysicalSpaces).ArrayNum) {
      lVar6 = 0;
      fVar8 = fVar7;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->PhysicalSpaces).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar2 = CVarVTCsvStats.Ref;
        this_00 = *(FVirtualTexturePhysicalSpace **)
                   ((this->PhysicalSpaces).AllocatorInstance.Data + lVar6);
        fVar7 = fVar8;
        if (this_00 != (FVirtualTexturePhysicalSpace *)0x0) {
          fVar7 = this_00->ResidencyMipMapBias;
          if (this_00->ResidencyMipMapBias <= fVar8) {
            fVar7 = fVar8;
          }
          bVar3 = IsInParallelRenderingThread();
          if ((!bVar3) &&
             (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007955>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pTVar2->ShadowedValue[1] == 2) {
            FVirtualTexturePhysicalSpace::UpdateCsvStats(this_00);
          }
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
        fVar8 = fVar7;
      } while ((int)uVar5 < (this->PhysicalSpaces).ArrayNum);
    }
    if (__CsvProfilerStat3262 == false) {
      FCsvProfilerTrace::OutputInlineStat("ResidencyMipBias",_GCsvCategory_VirtualTexturing.Index);
      __CsvProfilerStat3262 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("ResidencyMipBias",_GCsvCategory_VirtualTexturing.Index,fVar7,Set);
  }
  return;
}

// UpdateResidencyTracking @ 1459292b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSystem::UpdateResidencyTracking(FVirtualTextureSystem *this)

{
  int *piVar1;
  FVirtualTexturePhysicalSpace *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ResidencyTracking> FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2138,"FVirtualTextureSystem::UpdateResidencyTracking",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x85a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2138);
  }
  uVar13 = 0;
  FVar9 = StatPtr_STAT_ResidencyTracking;
  if (StatPtr_STAT_ResidencyTracking == (FThreadSafeStaticStat<FStat_STAT_ResidencyTracking>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_ResidencyTracking");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ResidencyTracking>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResidencyTracking,*pFVar8,
                       L"Update Residency Tracking","STATGROUP_VirtualTexturing","STATCAT_Advanced",
                       L"Virtual Texturing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar7 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                   ,0x85b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14592945a;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14592945a:
  uVar14 = uVar13;
  if (0 < (this->PhysicalSpaces).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < (this->PhysicalSpaces).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FVirtualTexturePhysicalSpace **)
                 ((this->PhysicalSpaces).AllocatorInstance.Data + uVar14);
      if (this_00 != (FVirtualTexturePhysicalSpace *)0x0) {
        FVirtualTexturePhysicalSpace::UpdateResidencyTracking(this_00,this->Frame);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) < (this->PhysicalSpaces).ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForTasks @ 145929b40

void __thiscall
FVirtualTextureSystem::WaitForTasks(FVirtualTextureSystem *this,FVirtualTextureUpdater *param_1)

{
  FTaskBase *this_00;
  
  if (param_1 != (FVirtualTextureUpdater *)0x0) {
    if (!__CsvProfilerStat3101) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/VirtualTexture");
      __CsvProfilerStat3101 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/VirtualTexture","CsvEventWait/VirtualTexture",
               "CsvEventWait/VirtualTexture (Non-CP)");
    this_00 = (param_1->AsyncTask).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
    this->bUpdating = false;
    FCsvProfiler::EndSetWaitStat();
  }
  return;
}


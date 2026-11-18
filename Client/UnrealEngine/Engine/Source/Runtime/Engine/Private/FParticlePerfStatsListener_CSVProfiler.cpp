// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// operator() @ 148162100

void __thiscall
`FParticlePerfStatsListener_CSVProfiler::Tick'::__l12::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1,
          TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *param_2)

{
  FParticlePerfStats *pFVar1;
  FParticlePerfStats *pFVar2;
  FName FVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (((param_2->Ptr->GameThreadStats).NumInstances != 0) &&
     (pUVar5 = FWeakObjectPtr::Get(&param_1->WeakPtr), pUVar5 != (UObject *)0x0)) {
    pFVar1 = param_2->Ptr;
    pFVar2 = param_2->Ptr;
    dVar7 = (double)((longlong)(pFVar1->GameThreadStats).EndOfFrameCycles +
                     (longlong)(pFVar1->GameThreadStats).ActivationCycles +
                     (pFVar1->GameThreadStats).WaitCycles + (pFVar1->GameThreadStats).FinalizeCycles
                     + (pFVar1->GameThreadStats).TickGameThreadCycles +
                    (longlong)(pFVar1->GameThreadStats).TickConcurrentCycles) *
            FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000;
    pFVar1 = param_2->Ptr;
    dVar8 = (double)((pFVar2->GameThreadStats).WaitCycles + (pFVar2->GameThreadStats).FinalizeCycles
                     + (pFVar2->GameThreadStats).TickGameThreadCycles +
                    (longlong)(pFVar2->GameThreadStats).ActivationCycles) *
            FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000;
    if ((pFVar1->GameThreadStats).NumInstances == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = ((longlong)(pFVar1->GameThreadStats).EndOfFrameCycles +
               (longlong)(pFVar1->GameThreadStats).ActivationCycles +
               (pFVar1->GameThreadStats).WaitCycles + (pFVar1->GameThreadStats).FinalizeCycles +
               (pFVar1->GameThreadStats).TickGameThreadCycles +
              (longlong)(pFVar1->GameThreadStats).TickConcurrentCycles) /
              (pFVar1->GameThreadStats).NumInstances;
    }
    uVar4 = (param_2->Ptr->GameThreadStats).NumInstances;
    dVar9 = (double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000;
    dVar10 = (double)(ulonglong)(param_2->Ptr->GameThreadStats).ActivationCycles *
             FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000;
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    FVar3.Number = *(uint *)&pUVar5->field_0x1c;
    dVar11 = (double)(param_2->Ptr->GameThreadStats).WaitCycles *
             FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000;
    FParticlePerfStats::PopulateStatNames(param_2->Ptr,FVar3);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_Total,_GCsvCategory_Particles.Index,(float)dVar7,Set);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_GTOnly,_GCsvCategory_Particles.Index,(float)dVar8,Set);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_InstAvgGT,_GCsvCategory_Particles.Index,(float)dVar9,Set);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_Count,_GCsvCategory_Particles.Index,(int)uVar4,Set);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_Activation,_GCsvCategory_Particles.Index,(float)dVar10,Set);
    FCsvProfiler::RecordCustomStat
              (&param_2->Ptr->CSVStat_Waits,_GCsvCategory_Particles.Index,(float)dVar11,Set);
  }
  return;
}

// End @ 148172330

void __thiscall
FParticlePerfStatsListener_CSVProfiler::End(FParticlePerfStatsListener_CSVProfiler *this)

{
  FOutputDeviceRedirector *pFVar1;
  
  pFVar1 = GetGlobalLogSingleton();
  if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
    pFVar1 = GetGlobalLogSingleton();
    FParticlePerfStatsListener_GatherAll::DumpStatsToDevice
              ((FParticlePerfStatsListener_GatherAll *)this,(FOutputDevice *)pFVar1);
  }
  FParticlePerfStatsListener_GatherAll::DumpStatsToFile
            ((FParticlePerfStatsListener_GatherAll *)this);
  return;
}

// OnCSVEnd @ 148186cb0

void __cdecl FParticlePerfStatsListener_CSVProfiler::OnCSVEnd(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FParticlePerfStatsListener *pFVar5;
  FParticlePerfStatsListener *pFVar6;
  FParticlePerfStatsListener *pFVar7;
  FParticlePerfStatsListener *pFVar8;
  bool bVar9;
  FSharedReferencer<1> local_20;
  TSharedPtr<FParticlePerfStatsListener,1> local_18;
  
  if (CSVListener.Object != (FParticlePerfStatsListener *)0x0) {
    puVar1 = &(CSVListener.Object)->field_0x8;
    pFVar5 = *(FParticlePerfStatsListener **)&(CSVListener.Object)->field_0x10;
    pFVar7 = (FParticlePerfStatsListener *)0x0;
    pFVar6 = pFVar5;
    pFVar8 = pFVar7;
    if (pFVar5 != (FParticlePerfStatsListener *)0x0) {
      aVar3 = *(atomic<int> *)&pFVar5->field_0x8;
      do {
        pFVar6 = pFVar7;
        pFVar8 = (FParticlePerfStatsListener *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_148186d05;
        LOCK();
        aVar4 = *(atomic<int> *)&pFVar5->field_0x8;
        bVar9 = aVar3 == aVar4;
        if (bVar9) {
          *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar9);
      pFVar6 = pFVar5;
      pFVar8 = *(FParticlePerfStatsListener **)puVar1;
    }
LAB_148186d05:
    pFVar5 = (FParticlePerfStatsListener *)&pFVar8->field_0x8;
    if (pFVar8 == (FParticlePerfStatsListener *)0x0) {
      pFVar5 = pFVar7;
    }
    if ((pFVar5 != (FParticlePerfStatsListener *)puVar1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedThis.Get() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x67f,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pFVar8 == (FParticlePerfStatsListener *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar6 != (FParticlePerfStatsListener *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->field_0x8 + 1);
      UNLOCK();
    }
    local_18.Object = pFVar8;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    FParticlePerfStatsManager::RemoveListener(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
    local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    CSVListener.Object = (FParticlePerfStatsListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&CSVListener.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  return;
}

// OnCSVStart @ 148186e10

void __cdecl FParticlePerfStatsListener_CSVProfiler::OnCSVStart(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FParticlePerfStatsListener *pFVar8;
  FSharedReferencer<1> local_20;
  TSharedPtr<FParticlePerfStatsListener,1> local_18;
  
  cVar5 = (**(code **)(*(longlong *)CVarWriteDetailedCSVStats._8_8_ + 0xc0))();
  if (cVar5 == '\0') {
    return;
  }
  if (CSVListener.Object != (FParticlePerfStatsListener *)0x0) {
    return;
  }
  pTVar7 = ::operator_new(0x148);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FParticlePerfStatsListener *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_CSVProfiler___00_SharedPointerInternals__6B_
    ;
    FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
              ((FParticlePerfStatsListener_GatherAll *)(pTVar7 + 1),false,true,false);
    pFVar8 = (FParticlePerfStatsListener *)(pTVar7 + 1);
    pTVar7[1]._padding_ = (longlong)&___7FParticlePerfStatsListener_CSVProfiler__6B_;
    if (pFVar8 == (FParticlePerfStatsListener *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_148186f31;
    }
  }
  if (((*(longlong *)&pFVar8->field_0x8 == 0) || (*(longlong *)&pFVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FParticlePerfStatsListener **)&pFVar8->field_0x8 = pFVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar8->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar8->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_148186f31:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  CSVListener.Object = pFVar8;
  local_20.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&CSVListener.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_18.Object = CSVListener.Object;
  local_18.SharedReferenceCount.ReferenceController =
       CSVListener.SharedReferenceCount.ReferenceController;
  if (CSVListener.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (CSVListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CSVListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FParticlePerfStatsManager::AddListener(&local_18,true);
  return;
}

// Tick @ 1481a1f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FParticlePerfStatsListener_CSVProfiler::Tick(FParticlePerfStatsListener_CSVProfiler *this)

{
  TOptional<unsigned___int64> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  UClass *pUVar11;
  FUObjectItem *pFVar12;
  FParticlePerfStats *pFVar13;
  ulong64 uVar14;
  uint uVar15;
  int iVar16;
  ForElementType<FSetElementId> FVar17;
  longlong lVar18;
  uint *puVar19;
  undefined1 auStackY_428 [32];
  UFXSystemAsset *local_3f8;
  UFXSystemAsset *local_3f0;
  int local_3e8;
  int local_3e4;
  TObjectIterator<UFXSystemAsset> local_3e0;
  undefined1 local_3c8 [24];
  undefined4 uStack_3b0;
  int iStack_3ac;
  int local_3a8;
  undefined4 uStack_3a4;
  UFXSystemAsset **local_398;
  UFXSystemAsset **local_390;
  FCsvProfiler *local_388;
  FScriptContainerElement *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 local_358;
  FArchiveState local_350;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined4 local_294;
  undefined1 local_288 [32];
  uint *local_268;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  undefined1 local_250 [8];
  ForElementType<FSetElementId> local_248;
  int local_240;
  undefined1 local_238 [72];
  void *local_1f0;
  undefined4 local_1e8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e0;
  void *local_1a0;
  undefined4 local_198;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_190;
  void *local_150;
  undefined4 local_148;
  undefined1 local_138 [72];
  void *local_f0;
  undefined4 local_e8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e0;
  void *local_a0;
  undefined4 local_98;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if ((FParticlePerfStats::bCSVStatsEnabled == (TAtomic<bool>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FParticlePerfStats::GetCSVStatsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                         ,0x4c7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FParticlePerfStatsListener_GatherAll::Tick((FParticlePerfStatsListener_GatherAll *)this);
  local_388 = FCsvProfiler::Get();
  if (local_388 == (FCsvProfiler *)0x0) {
    return false;
  }
  if (GFXDetailedCSVMemoryMode != 0) {
    uVar10 = 1;
    iVar16 = 0;
    bVar6 = GFXDetailedCSVMemoryMode != 3;
    local_288._0_8_ = 0;
    local_288._8_8_ = 0;
    local_268 = (uint *)0x0;
    local_260 = 0;
    local_25c = 0x80;
    local_258 = 0xffffffff;
    local_254 = 0;
    local_248 = (ForElementType<FSetElementId>)0x0;
    local_240 = 0;
    if (1 < GFXDetailedCSVMemoryMode) {
      local_3e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.ObjectArray.ArrayNum = 0;
      local_3e0.ObjectArray.ArrayMax = 0;
      local_3e0.Index = 0xffffffff;
      EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar11 = UFXSystemAsset::StaticClass();
      GetObjectsOfClass(pUVar11,&local_3e0.ObjectArray,true,RF_ClassDefaultObject,
                        EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UFXSystemAsset>::Advance(&local_3e0);
        lVar18 = (longlong)local_3e0.Index;
        if ((local_3e0.Index < 0) || (local_3e0.ObjectArray.ArrayNum <= local_3e0.Index)) break;
        uVar15 = 0;
        if (local_3e0.Index < local_3e0.ObjectArray.ArrayNum) {
          uVar15 = (uint)~local_3e0.Index >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_3f8 = *(UFXSystemAsset **)(local_3e0.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
        if ((((local_3f8 != (UFXSystemAsset *)0x0) &&
             (((uint)local_3f8->_padding_ >> 0x1e & 1) == 0)) &&
            (pFVar12 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,*(int *)((longlong)&local_3f8->_padding_ + 4)),
            ((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
           ((local_3f8->_padding_ & 0x10) == 0)) {
          pFVar13 = FParticlePerfStatsManager::GetSystemPerfStats(local_3f8);
          pTVar1 = &pFVar13->CSVMemoryKB_Asset;
          if ((pFVar13->CSVMemoryKB_Asset).bIsSet == false) {
            FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_238,EstimatedTotal);
            (**(code **)(local_3f8->_padding_ + 400))(local_3f8,local_238);
            uVar14 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_238);
            if ((TOptional<unsigned___int64> *)&local_358 != pTVar1) {
              pTVar1->TypedValue = uVar14;
              (pFVar13->CSVMemoryKB_Asset).bIsSet = true;
            }
            local_148 = 0;
            if (local_150 != (void *)0x0) {
              FMemory::Free(local_150);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_190);
            local_198 = 0;
            if (local_1a0 != (void *)0x0) {
              FMemory::Free(local_1a0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1e0);
            local_1e8 = 0;
            if (local_1f0 != (void *)0x0) {
              FMemory::Free(local_1f0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_238 + 8));
          }
          if (((pFVar13->CSVMemoryKB_Asset).bIsSet == false) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar14 = pTVar1->TypedValue;
          uVar15 = ((uint)((ulonglong)local_3f8 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_3f8 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          uVar15 = uVar15 >> 0x10 ^ uVar15;
          if (local_288._8_4_ != local_254) {
            FVar17 = (ForElementType<FSetElementId>)local_250;
            if (local_248 != (ForElementType<FSetElementId>)0x0) {
              FVar17 = local_248;
            }
            iVar3 = *(int *)((longlong)FVar17 + (ulonglong)(local_240 - 1U & uVar15) * 4);
            while (iVar3 != -1) {
              lVar18 = local_288._0_8_ + (longlong)iVar3 * 0x18;
              if (*(UFXSystemAsset **)(local_288._0_8_ + (longlong)iVar3 * 0x18) == local_3f8) {
                if (lVar18 != 0) goto LAB_1481a2339;
                break;
              }
              iVar3 = *(int *)(lVar18 + 0x10);
            }
          }
          local_398 = &local_3f8;
          TSet<TTuple<UFXSystemAsset_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UFXSystemAsset_*,unsigned___int64,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UFXSystemAsset_*_const_&>_>
                    ((TSet<TTuple<UFXSystemAsset_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UFXSystemAsset_*,unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_288,(uint)&local_3e8,
                     (TKeyInitializer<UFXSystemAsset_*_const_&> *)(ulonglong)uVar15,
                     (bool *)&local_398);
          lVar18 = local_288._0_8_ + (longlong)local_3e8 * 0x18;
LAB_1481a2339:
          *(ulong64 *)(lVar18 + 8) = uVar14;
        }
      }
      if (local_3e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.ObjectArray.AllocatorInstance.Data);
      }
    }
    local_3c8._0_8_ = (FScriptContainerElement *)0x0;
    local_3c8._8_4_ = 0;
    local_3c8._12_4_ = 0;
    local_3c8._16_4_ = -1;
    EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar11 = UFXSystemComponent::StaticClass();
    GetObjectsOfClass(pUVar11,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_3c8,true,
                      RF_ClassDefaultObject,
                      EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UFXSystemComponent>::Advance((TObjectIterator<UFXSystemComponent> *)local_3c8);
    while( true ) {
      lVar18 = (longlong)(int)local_3c8._16_4_;
      if (((int)local_3c8._16_4_ < 0) || ((int)local_3c8._8_4_ <= (int)local_3c8._16_4_)) break;
      uVar15 = 0;
      if ((int)local_3c8._16_4_ < (int)local_3c8._8_4_) {
        uVar15 = (uint)~local_3c8._16_4_ >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar4 = *(longlong **)(local_3c8._0_8_ + lVar18 * 8);
      local_3f0 = (UFXSystemAsset *)(**(code **)(*plVar4 + 0xac0))(plVar4);
      if ((((((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0) && (local_3f0 != (UFXSystemAsset *)0x0)) &&
           (((uint)local_3f0->_padding_ >> 0x1e & 1) == 0)) &&
          ((pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)plVar4 + 0xc)),
           ((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0 &&
           ((*(uint *)(plVar4 + 1) & 0x10) == 0)))) &&
         (pFVar13 = FParticlePerfStatsManager::GetSystemPerfStats(local_3f0),
         pFVar13->CSVStat_MemoryKB != (FName)0x0)) {
        uVar15 = ((uint)((ulonglong)local_3f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3f0 >> 4))
                 * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        if (local_288._8_4_ != local_254) {
          FVar17 = (ForElementType<FSetElementId>)local_250;
          if (local_248 != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_248;
          }
          iVar3 = *(int *)((longlong)FVar17 + (ulonglong)(local_240 - 1U & uVar15) * 4);
          while (iVar3 != -1) {
            lVar18 = local_288._0_8_ + (longlong)iVar3 * 0x18;
            if (*(UFXSystemAsset **)(local_288._0_8_ + (longlong)iVar3 * 0x18) == local_3f0) {
              if (lVar18 != 0) goto LAB_1481a2569;
              break;
            }
            iVar3 = *(int *)(lVar18 + 0x10);
          }
        }
        local_390 = &local_3f0;
        TSet<TTuple<UFXSystemAsset_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UFXSystemAsset_*,unsigned___int64,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UFXSystemAsset_*_const_&>_>
                  ((TSet<TTuple<UFXSystemAsset_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<UFXSystemAsset_*,unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_288,(uint)&local_3e4,
                   (TKeyInitializer<UFXSystemAsset_*_const_&> *)(ulonglong)uVar15,(bool *)&local_390
                  );
        lVar18 = local_288._0_8_ + (longlong)local_3e4 * 0x18;
LAB_1481a2569:
        if (bVar6) {
          uVar15 = (**(code **)(*plVar4 + 0xae8))(plVar4);
          *(longlong *)(lVar18 + 8) = *(longlong *)(lVar18 + 8) + (ulonglong)uVar15;
          goto LAB_1481a2671;
        }
        FArchiveState::FArchiveState(&local_350);
        local_350._padding_ = (longlong)&___7FArchiveCountMem__6B_;
        local_350.ArIsFilterEditorOnly = '\0';
        local_350.ArIsCountingMemory = '\x01';
        local_2c0 = 0;
        local_2b8 = 0;
        (**(code **)(*plVar4 + 200))(plVar4,&local_350);
        *(longlong *)(lVar18 + 8) = *(longlong *)(lVar18 + 8) + local_2b8;
        FArchive::~FArchive((FArchive *)&local_350);
        FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_138,EstimatedTotal);
        (**(code **)(*plVar4 + 400))(plVar4,local_138);
        uVar14 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_138);
        *(longlong *)(lVar18 + 8) = *(longlong *)(lVar18 + 8) + uVar14;
        local_48 = 0;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_90);
        local_98 = 0;
        if (local_a0 != (void *)0x0) {
          FMemory::Free(local_a0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e0);
        local_e8 = 0;
        if (local_f0 != (void *)0x0) {
          FMemory::Free(local_f0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_138 + 8));
        TObjectIterator<UFXSystemComponent>::Advance
                  ((TObjectIterator<UFXSystemComponent> *)local_3c8);
      }
      else {
LAB_1481a2671:
        TObjectIterator<UFXSystemComponent>::Advance
                  ((TObjectIterator<UFXSystemComponent> *)local_3c8);
      }
    }
    if ((FScriptContainerElement *)local_3c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3c8._0_8_);
    }
    local_3c8._8_4_ = 0;
    local_3a8 = local_3c8._8_4_;
    if (local_260 != 0) {
      puVar19 = (uint *)(local_288 + 0x10);
      if (local_268 != (uint *)0x0) {
        puVar19 = local_268;
      }
      uVar15 = *puVar19;
      local_3a8 = iVar16;
      local_3c8._8_4_ = iVar16;
      while (uVar15 == 0) {
        lVar18 = (longlong)(int)local_3c8._8_4_;
        local_3a8 = local_3a8 + 0x20;
        local_3c8._8_4_ = local_3c8._8_4_ + 1;
        iVar16 = local_260;
        if ((int)(local_260 + -1 + (local_260 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_3c8._8_4_)
        goto LAB_1481a272c;
        uVar15 = puVar19[lVar18 + 1];
      }
      uVar10 = -uVar15 & uVar15;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar16 = (int)lVar18 + -1 + local_3a8;
      if (local_260 < iVar16) {
        iVar16 = local_260;
      }
    }
LAB_1481a272c:
    local_3c8._0_8_ = local_288;
    local_3c8._16_8_ = local_288 + 0x10;
    local_3c8._12_4_ = uVar10;
    uStack_3b0 = 0xffffffff;
    uStack_3a4 = local_294;
    TStack_378.CurrentBitIndex = iVar16;
    TStack_378.UnvisitedBitMask = 0xffffffff;
    TStack_378._padding_ = local_3c8._8_8_;
    TStack_378._28_4_ = local_294;
    TStack_378.BaseBitIndex = local_3a8;
    iStack_3ac = iVar16;
    local_380 = (FScriptContainerElement *)local_3c8._0_8_;
    TStack_378.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3c8._16_8_;
    if (iVar16 < local_260) {
      do {
        lVar18 = *(longlong *)(*(longlong *)local_380 + 8 + (longlong)iVar16 * 0x18);
        pFVar13 = FParticlePerfStatsManager::GetSystemPerfStats
                            (*(UFXSystemAsset **)(*(longlong *)local_380 + (longlong)iVar16 * 0x18))
        ;
        FCsvProfiler::RecordCustomStat
                  (&pFVar13->CSVStat_MemoryKB,_GCsvCategory_Particles.Index,
                   (int)(lVar18 + 0x3ffU >> 10),Set);
        TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
        iVar16 = TStack_378.CurrentBitIndex;
      } while (TStack_378.CurrentBitIndex < (TStack_378.Array)->NumBits);
    }
    local_240 = 0;
    if (local_248 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_248);
    }
    TSparseArray<TSparseSetElement<TTuple<UFXSystemAsset_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UFXSystemAsset_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UFXSystemAsset_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_288);
  }
  FParticlePerfStatsManager::
  ForAllSystemStats<_FParticlePerfStatsListener_CSVProfiler::Tick_::__l12::<lambda_1>_>
            ((<lambda_1>)&local_388);
  return true;
}

// TickRT @ 1481a55d0

void __thiscall
FParticlePerfStatsListener_CSVProfiler::TickRT(FParticlePerfStatsListener_CSVProfiler *this)

{
  undefined1 *lpCriticalSection;
  FCsvProfiler *local_res8;
  
  lpCriticalSection = &this->field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FParticlePerfStatsListener_GatherAll::
    TickStats_Internal<UWorld_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              ((FParticlePerfStatsListener_GatherAll *)this,
               (TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
                *)&this->field_0x48,local_res8._0_1_);
    FParticlePerfStatsListener_GatherAll::
    TickStats_Internal<UFXSystemAsset_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              ((FParticlePerfStatsListener_GatherAll *)this,
               (TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
                *)&this->field_0x98,local_res8._0_1_);
    FParticlePerfStatsListener_GatherAll::
    TickStats_Internal<UFXSystemComponent_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              ((FParticlePerfStatsListener_GatherAll *)this,
               (TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
                *)&this->field_0xe8,local_res8._0_1_);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = FCsvProfiler::Get();
    if (local_res8 != (FCsvProfiler *)0x0) {
      FParticlePerfStatsManager::
      ForAllSystemStats<_FParticlePerfStatsListener_CSVProfiler::TickRT_::__l5::<lambda_1>_>
                ((<lambda_1>)&local_res8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}


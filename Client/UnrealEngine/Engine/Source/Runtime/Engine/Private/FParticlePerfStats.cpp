// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FParticlePerfStats @ 14815a6e0

FParticlePerfStats * __thiscall FParticlePerfStats::FParticlePerfStats(FParticlePerfStats *this)

{
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).NumInstances = 0;
  (this->GameThreadStats).TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).WaitCycles = 0;
  (this->RenderThreadStats).NumInstances = 0;
  (this->RenderThreadStats).RenderUpdateCycles = 0;
  (this->RenderThreadStats).GetDynamicMeshElementsCycles = 0;
  (this->GPUStats).NumInstances = 0;
  (this->GPUStats).TotalMicroseconds = 0;
  (this->CSVStat_Count).ComparisonIndex = 0;
  (this->CSVStat_Count).Number = 0;
  (this->CSVStat_Total).ComparisonIndex = 0;
  (this->CSVStat_Total).Number = 0;
  (this->CSVStat_GTOnly).ComparisonIndex = 0;
  (this->CSVStat_GTOnly).Number = 0;
  (this->CSVStat_InstAvgGT).ComparisonIndex = 0;
  (this->CSVStat_InstAvgGT).Number = 0;
  (this->CSVStat_RT).ComparisonIndex = 0;
  (this->CSVStat_RT).Number = 0;
  (this->CSVStat_InstAvgRT).ComparisonIndex = 0;
  (this->CSVStat_InstAvgRT).Number = 0;
  (this->CSVStat_GPU).ComparisonIndex = 0;
  (this->CSVStat_GPU).Number = 0;
  (this->CSVStat_InstAvgGPU).ComparisonIndex = 0;
  (this->CSVStat_InstAvgGPU).Number = 0;
  (this->CSVStat_Activation).ComparisonIndex = 0;
  (this->CSVStat_Activation).Number = 0;
  (this->CSVStat_Waits).ComparisonIndex = 0;
  (this->CSVStat_Waits).Number = 0;
  (this->CSVStat_Culled).ComparisonIndex = 0;
  (this->CSVStat_Culled).Number = 0;
  (this->CSVStat_MemoryKB).ComparisonIndex = 0;
  (this->CSVStat_MemoryKB).Number = 0;
  (this->CSVMemoryKB_Asset).bIsSet = false;
  return this;
}

// GetComponentPerfStats @ 148178a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl FParticlePerfStats::GetComponentPerfStats(UFXSystemComponent *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 auStackX_8 [8];
  int aiStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  UFXSystemComponent *pUStack_58;
  FWeakObjectPtr *pFStack_50;
  FParticlePerfStats *pFStack_48;
  UFXSystemComponent *pUStack_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  pUStack_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_58);
  uVar8 = FStackX_18.ObjectSerialNumber ^ FStackX_18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&FParticlePerfStatsManager::ComponentToPerfStats,uVar8,
                     (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&FStackX_18);
  if ((iVar5 == -1) ||
     (lVar10 = FParticlePerfStatsManager::ComponentToPerfStats._0_8_ + (longlong)iVar5 * 0x18,
     lVar10 == 0)) {
    pFStack_50 = &FStackX_18;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&FParticlePerfStatsManager::ComponentToPerfStats,(uint)aiStackX_10,
               (TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_&&> *)
               (ulonglong)uVar8,(bool *)&pFStack_50);
    lVar10 = FParticlePerfStatsManager::ComponentToPerfStats._0_8_ + (longlong)aiStackX_10[0] * 0x18
    ;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FParticlePerfStatsManager::FreeComponentStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats(this);
      }
      pFStack_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (pFStack_48 == pFVar7) goto LAB_148178bfa;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FParticlePerfStatsManager::FreeComponentStatsPool,(EAllowShrinking)&pFStack_48)
      ;
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(pFStack_48,0xd0);
  }
LAB_148178bfa:
  param_1->ParticlePerfStats = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  iVar5 = FParticlePerfStatsManager::Listeners.ArrayNum;
  FVar11 = FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData;
  if (FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
             &FParticlePerfStatsManager::Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (FParticlePerfStatsManager::Listeners.ArrayNum != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x48);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FStackX_20.ObjectIndex = 0;
    FStackX_20.ObjectSerialNumber = 0;
    pUStack_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_40);
    (*pcVar3)(plVar2,&FStackX_20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// GetSystemPerfStats @ 14817f530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl FParticlePerfStats::GetSystemPerfStats(UFXSystemAsset *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 auStackX_8 [8];
  int aiStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  UFXSystemAsset *pUStack_58;
  FWeakObjectPtr *pFStack_50;
  FParticlePerfStats *pFStack_48;
  UFXSystemAsset *pUStack_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  pUStack_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_58);
  uVar8 = FStackX_18.ObjectSerialNumber ^ FStackX_18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&FParticlePerfStatsManager::SystemToPerfStats,uVar8,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&FStackX_18);
  if ((iVar5 == -1) ||
     (lVar10 = FParticlePerfStatsManager::SystemToPerfStats._0_8_ + (longlong)iVar5 * 0x18,
     lVar10 == 0)) {
    pFStack_50 = &FStackX_18;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&FParticlePerfStatsManager::SystemToPerfStats,(uint)aiStackX_10,
               (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *)
               (ulonglong)uVar8,(bool *)&pFStack_50);
    lVar10 = FParticlePerfStatsManager::SystemToPerfStats._0_8_ + (longlong)aiStackX_10[0] * 0x18;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FParticlePerfStatsManager::FreeSystemStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats(this);
      }
      pFStack_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (pFStack_48 == pFVar7) goto LAB_14817f6c7;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FParticlePerfStatsManager::FreeSystemStatsPool,(EAllowShrinking)&pFStack_48);
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(pFStack_48,0xd0);
  }
LAB_14817f6c7:
  pFVar7 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  param_1->ParticlePerfStats = pFVar7;
  PopulateStatNames(pFVar7,(FName)param_1->_padding_);
  iVar5 = FParticlePerfStatsManager::Listeners.ArrayNum;
  FVar11 = FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData;
  if (FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
             &FParticlePerfStatsManager::Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (FParticlePerfStatsManager::Listeners.ArrayNum != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x38);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FStackX_20.ObjectIndex = 0;
    FStackX_20.ObjectSerialNumber = 0;
    pUStack_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_40);
    (*pcVar3)(plVar2,&FStackX_20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// GetWorldPerfStats @ 1481807b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl FParticlePerfStats::GetWorldPerfStats(UWorld *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 auStackX_8 [8];
  int aiStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  UWorld *pUStack_58;
  FWeakObjectPtr *pFStack_50;
  FParticlePerfStats *pFStack_48;
  UWorld *pUStack_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  pUStack_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_58);
  uVar8 = FStackX_18.ObjectSerialNumber ^ FStackX_18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&FParticlePerfStatsManager::WorldToPerfStats,uVar8,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&FStackX_18);
  if ((iVar5 == -1) ||
     (lVar10 = FParticlePerfStatsManager::WorldToPerfStats._0_8_ + (longlong)iVar5 * 0x18,
     lVar10 == 0)) {
    pFStack_50 = &FStackX_18;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&FParticlePerfStatsManager::WorldToPerfStats,(uint)aiStackX_10,
               (TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&> *)(ulonglong)uVar8,
               (bool *)&pFStack_50);
    lVar10 = FParticlePerfStatsManager::WorldToPerfStats._0_8_ + (longlong)aiStackX_10[0] * 0x18;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FParticlePerfStatsManager::FreeWorldStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats(this);
      }
      pFStack_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (pFStack_48 == pFVar7) goto LAB_14818094a;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FParticlePerfStatsManager::FreeWorldStatsPool,(EAllowShrinking)&pFStack_48);
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(pFStack_48,0xd0);
  }
LAB_14818094a:
  param_1->ParticlePerfStats = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  iVar5 = FParticlePerfStatsManager::Listeners.ArrayNum;
  FVar11 = FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData;
  if (FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
             &FParticlePerfStatsManager::Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (FParticlePerfStatsManager::Listeners.ArrayNum != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FStackX_20.ObjectIndex = 0;
    FStackX_20.ObjectSerialNumber = 0;
    pUStack_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_40);
    (*pcVar3)(plVar2,&FStackX_20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// PopulateStatNames @ 1481891b0

void __thiscall FParticlePerfStats::PopulateStatNames(FParticlePerfStats *this,FName param_1)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (this->CSVStat_Total == (FName)0x0) {
    local_res10 = param_1;
    ::FName::ToString(&local_res10,&local_28);
    ::FString::PrintfImpl(&local_18,L"Total/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_Total = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"GTOnly/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_GTOnly = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"InstAvgGT/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_InstAvgGT = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"RT/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_RT = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"InstAvgRT/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_InstAvgRT = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"GPU/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_GPU = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"InstAvgGPU/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_InstAvgGPU = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"Count/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_Count = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"Activation/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_Activation = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"Waits/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_Waits = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"Culled/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_Culled = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"MemoryKB/%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data,0,false);
    this->CSVStat_MemoryKB = *pFVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Reset @ 148191ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParticlePerfStats::Reset(FParticlePerfStats *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FParticlePerfStats *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FParticlePerfStats *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,599,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GameThreadStats).NumInstances = 0;
  (this->GameThreadStats).TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).WaitCycles = 0;
  if (param_1) {
    FlushRenderingCommands();
    bVar2 = IsInActualRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInActualRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                         ,0x24c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->RenderThreadStats).NumInstances = 0;
    (this->RenderThreadStats).RenderUpdateCycles = 0;
    (this->RenderThreadStats).GetDynamicMeshElementsCycles = 0;
    (this->GPUStats).NumInstances = 0;
    (this->GPUStats).TotalMicroseconds = 0;
  }
  else {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FParticlePerfStats::Reset'::`14'::<lambda_1>,1,0>::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FParticlePerfStats::Reset'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FParticlePerfStats::Reset_::__l14::TSTR_FResetParticlePerfStats610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FParticlePerfStats::Reset'::__l14::TSTR_FResetParticlePerfStats610>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// ResetGT @ 148192a30

void __thiscall FParticlePerfStats::ResetGT(FParticlePerfStats *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GameThreadStats).NumInstances = 0;
  (this->GameThreadStats).TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).WaitCycles = 0;
  return;
}

// ResetRT @ 148193140

void __thiscall FParticlePerfStats::ResetRT(FParticlePerfStats *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInActualRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInActualRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x24c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->RenderThreadStats).NumInstances = 0;
  (this->RenderThreadStats).RenderUpdateCycles = 0;
  (this->RenderThreadStats).GetDynamicMeshElementsCycles = 0;
  (this->GPUStats).NumInstances = 0;
  (this->GPUStats).TotalMicroseconds = 0;
  return;
}

// ResetStatNames @ 1481931a0

void __thiscall FParticlePerfStats::ResetStatNames(FParticlePerfStats *this)

{
  (this->CSVStat_Total).ComparisonIndex = 0;
  (this->CSVStat_Total).Number = 0;
  (this->CSVStat_GTOnly).ComparisonIndex = 0;
  (this->CSVStat_GTOnly).Number = 0;
  (this->CSVStat_InstAvgGT).ComparisonIndex = 0;
  (this->CSVStat_InstAvgGT).Number = 0;
  (this->CSVStat_RT).ComparisonIndex = 0;
  (this->CSVStat_RT).Number = 0;
  (this->CSVStat_InstAvgRT).ComparisonIndex = 0;
  (this->CSVStat_InstAvgRT).Number = 0;
  (this->CSVStat_GPU).ComparisonIndex = 0;
  (this->CSVStat_GPU).Number = 0;
  (this->CSVStat_InstAvgGPU).ComparisonIndex = 0;
  (this->CSVStat_InstAvgGPU).Number = 0;
  (this->CSVStat_Count).ComparisonIndex = 0;
  (this->CSVStat_Count).Number = 0;
  (this->CSVStat_Activation).ComparisonIndex = 0;
  (this->CSVStat_Activation).Number = 0;
  (this->CSVStat_Waits).ComparisonIndex = 0;
  (this->CSVStat_Waits).Number = 0;
  (this->CSVStat_Culled).ComparisonIndex = 0;
  (this->CSVStat_Culled).Number = 0;
  (this->CSVStat_MemoryKB).ComparisonIndex = 0;
  (this->CSVStat_MemoryKB).Number = 0;
  return;
}

// Tick @ 1481a1f10

void __thiscall FParticlePerfStats::Tick(FParticlePerfStats *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x26e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GameThreadStats).NumInstances = 0;
  (this->GameThreadStats).TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).WaitCycles = 0;
  return;
}

// TickRT @ 1481a5570

void __thiscall FParticlePerfStats::TickRT(FParticlePerfStats *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x274,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->RenderThreadStats).NumInstances = 0;
  (this->RenderThreadStats).RenderUpdateCycles = 0;
  (this->RenderThreadStats).GetDynamicMeshElementsCycles = 0;
  (this->GPUStats).NumInstances = 0;
  (this->GPUStats).TotalMicroseconds = 0;
  return;
}


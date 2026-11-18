// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 24

// FOperatorPool @ 14b2a6ed0

FOperatorPool * __thiscall
Metasound::FOperatorPool::FOperatorPool(FOperatorPool *this,FOperatorPoolSettings param_1)

{
  TUniquePtr<Metasound::Engine::FOperatorCacheStatTracker,TDefaultDelete<Metasound::Engine::FOperatorCacheStatTracker>_>
  *pTVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOperatorPool *pFVar6;
  FOperatorCacheStatTracker *pFVar7;
  FOperatorCacheStatTracker *this_00;
  FCsvProfiler *pFVar8;
  undefined8 local_18 [2];
  
  this_00 = (FOperatorCacheStatTracker *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Settings).MaxNumOperators = param_1.MaxNumOperators;
  this->LastTaskId = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->HitRateTracker).History.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->CacheStatTracker;
  (this->HitRateTracker).History.ArrayNum = 0;
  (this->HitRateTracker).History.ArrayMax = 0;
  (this->HitRateTracker).CurrHitCount = 0;
  (this->HitRateTracker).CurrTotal = 0;
  (this->HitRateTracker).RunningHitCount = 0;
  (this->HitRateTracker).RunningTotal = 0;
  (this->HitRateTracker).CurrTTLSeconds = OperatorPoolPrivate::MetasoundPoolHitRateWindowSecondsCVar
  ;
  (this->HitRateTracker).PreviousTimeCycles = 0;
  (this->HitRateTracker).bIsFirstUpdate = true;
  pTVar1->Ptr = (FOperatorCacheStatTracker *)0x0;
  this->bStopping = (atomic<bool>)0x0;
  *(undefined8 *)&this->ActiveBuildTasks = 0;
  *(undefined8 *)&(this->ActiveBuildTasks).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveBuildTasks).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveBuildTasks).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x48 = 0;
  (this->AsyncBuildPipe).LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  (this->AsyncBuildPipe).TaskCount = (atomic<unsigned___int64>)0x0;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->AsyncBuildPipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)0x10;
    (this->AsyncBuildPipe).EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar5->WeakReferenceCount = 1;
    (this->AsyncBuildPipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)(pTVar5 + 1);
    (this->AsyncBuildPipe).EmptyEventRef.SharedReferenceCount.ReferenceController = pTVar5;
    if ((pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOperatorPool *)(*pcVar3)();
      return pFVar6;
    }
  }
  (this->AsyncBuildPipe).DebugName =
       L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp(273)"
  ;
  *(undefined8 *)&this->Operators = 0;
  *(undefined8 *)&(this->Operators).field_0x8 = 0;
  *(undefined8 *)&(this->Operators).field_0x20 = 0;
  *(undefined4 *)&(this->Operators).field_0x28 = 0;
  *(undefined4 *)&(this->Operators).field_0x2c = 0x80;
  *(undefined4 *)&(this->Operators).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Operators).field_0x34 = 0;
  *(undefined8 *)&(this->Operators).field_0x40 = 0;
  *(undefined4 *)&(this->Operators).field_0x48 = 0;
  *(undefined8 *)&this->AssetIdToGraphIdLookUp = 0;
  *(undefined8 *)&(this->AssetIdToGraphIdLookUp).field_0x8 = 0;
  *(undefined8 *)&(this->AssetIdToGraphIdLookUp).field_0x20 = 0;
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x28 = 0;
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x34 = 0;
  *(undefined8 *)&(this->AssetIdToGraphIdLookUp).field_0x40 = 0;
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x48 = 0;
  *(undefined8 *)&this->GraphIdToAssetIdLookUp = 0;
  *(undefined8 *)&(this->GraphIdToAssetIdLookUp).field_0x8 = 0;
  *(undefined8 *)&(this->GraphIdToAssetIdLookUp).field_0x20 = 0;
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x28 = 0;
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x34 = 0;
  *(undefined8 *)&(this->GraphIdToAssetIdLookUp).field_0x40 = 0;
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x48 = 0;
  (this->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stack).ArrayNum = 0;
  (this->Stack).ArrayMax = 0;
  pFVar7 = ::operator_new(0x88);
  if (pFVar7 != (FOperatorCacheStatTracker *)0x0) {
    this_00 = Engine::FOperatorCacheStatTracker::FOperatorCacheStatTracker(pFVar7);
  }
  if (pTVar1 == (TUniquePtr<Metasound::Engine::FOperatorCacheStatTracker,TDefaultDelete<Metasound::Engine::FOperatorCacheStatTracker>_>
                 *)local_18) {
    if (this_00 != (FOperatorCacheStatTracker *)0x0) {
      pFVar8 = FCsvProfiler::Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar8->OnCSVProfileEndFrameDelegate,
                 (FDelegateHandle)(this_00->CsvEndFrameDelegateHandle).ID);
      (this_00->CsvEndFrameDelegateHandle).ID = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CriticalSection);
      *(undefined4 *)&(this_00->StatEntries).field_0x48 = 0;
      pvVar2 = *(void **)&(this_00->StatEntries).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      ::operator_delete(this_00,0x88);
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar7 != (FOperatorCacheStatTracker *)0x0) {
      pFVar8 = FCsvProfiler::Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar8->OnCSVProfileEndFrameDelegate,
                 (FDelegateHandle)(pFVar7->CsvEndFrameDelegateHandle).ID);
      (pFVar7->CsvEndFrameDelegateHandle).ID = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar7->CriticalSection);
      *(undefined4 *)&(pFVar7->StatEntries).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar7->StatEntries).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pFVar7);
      ::operator_delete(pFVar7,0x88);
    }
  }
  return this;
}

// ~FOperatorPool @ 14b2a8620

void __thiscall Metasound::FOperatorPool::~FOperatorPool(FOperatorPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FOperatorCacheStatTracker *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FCsvProfiler *pFVar8;
  
  StopAsyncTasks(this);
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->GraphIdToAssetIdLookUp).field_0x48 = 0;
  pvVar4 = *(void **)&(this->GraphIdToAssetIdLookUp).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphIdToAssetIdLookUp);
  *(undefined4 *)&(this->AssetIdToGraphIdLookUp).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AssetIdToGraphIdLookUp).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FOperatorPoolEntryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FOperatorPoolEntryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FOperatorPoolEntryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetIdToGraphIdLookUp);
  *(undefined4 *)&(this->Operators).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Operators).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Operators);
  if ((this->AsyncBuildPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncBuildPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ActiveBuildTasks).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveBuildTasks).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveBuildTasks);
  this_00 = (this->CacheStatTracker).Ptr;
  if (this_00 != (FOperatorCacheStatTracker *)0x0) {
    pFVar8 = FCsvProfiler::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar8->OnCSVProfileEndFrameDelegate,
               (FDelegateHandle)(this_00->CsvEndFrameDelegateHandle).ID);
    (this_00->CsvEndFrameDelegateHandle).ID = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CriticalSection);
    *(undefined4 *)&(this_00->StatEntries).field_0x48 = 0;
    pvVar4 = *(void **)&(this_00->StatEntries).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x88);
  }
  pFVar3 = (this->HitRateTracker).History.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
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

// operator() @ 14b2a8aa0

void __thiscall
`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TWeakPtr<Metasound::FOperatorPool,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b2a8ad0;
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
    if (param_2->Object != (FOperatorPool *)0x0) {
      Metasound::FOperatorPool::AddOperatorInternal
                (param_2->Object,this,(FOperatorAndInputs *)((longlong)this + 0x20));
    }
  }
LAB_14b2a8ad0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// operator() @ 14b2a8dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TWeakPtr<Metasound::FOperatorPool,1> *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  longlong lVar3;
  FOperatorPool *pFVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  int iVar9;
  longlong *plVar10;
  INodeClassRegistry *pIVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ulong64 uVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  TSharedRef<Metasound::FGraphRenderCost,1> *pTVar17;
  FGraphRenderCost **ppFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FNameEntryId FVar20;
  atomic<int> aVar22;
  uint uVar23;
  TReferenceControllerBase<1> *pTVar24;
  atomic<int> aVar25;
  atomic<int> aVar26;
  bool bVar27;
  undefined1 auStackY_1d8 [32];
  FLLMScope local_1a8;
  atomic<int> local_1a4;
  TWeakPtr<Metasound::FOperatorPool,1> *local_1a0;
  FMemScope local_198;
  FName local_190;
  FOperatorPoolEntryID local_188;
  FString local_168;
  longlong local_158;
  FSharedReferencer<1> local_150;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  FGraphRenderCost *local_138;
  FSharedReferencer<1> local_130;
  TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&> local_128;
  FOperatorPoolEntryID *local_118;
  FOperatorAndInputs local_108;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  TSharedRef<Metasound::FGraphRenderCost,1> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  TReferenceControllerBase<1> *pTVar21;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a0 = param_2;
  local_168.Data.AllocatorInstance.Data = this;
  FLLMScope::FLLMScope
            (&local_1a8,Metasound::LLMTagDeclaration_Audio_Metasound_OperatorPool.UniqueName,false,
             None,Default,true);
  local_190 = Metasound::LLMTagDeclaration_Audio_Metasound_OperatorPool.UniqueName;
  FMemScope::FMemScope(&local_198,&local_190,true);
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorPool::AsyncOperatorPrecache");
  }
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId468,"Metasound::FOperatorPool::AsyncOperatorPrecache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
               ,0x1d4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId468);
  }
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8479151279308799530>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                       ,0x1d6,"PreCacheData");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (bVar27) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(&local_1a8);
    pTVar19 = (param_2->WeakReferenceCount).ReferenceController;
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pTVar19->WeakReferenceCount;
    aVar25 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar25 != (atomic<int>)0x1) {
      return;
    }
    (**(code **)(pTVar19->_padding_ + 8))(pTVar19,1);
    return;
  }
  lVar15 = *(longlong *)this;
  if (lVar15 == 0) {
    if (Metasound::OperatorPoolPrivate::bMetasoundPoolSyncGraphRetrieval != false)
    goto LAB_14b2a9089;
    pIVar11 = Metasound::Frontend::INodeClassRegistry::Get();
    puVar12 = (undefined8 *)
              (**(code **)((longlong)*pIVar11 + 0x28))
                        (pIVar11,local_c8,*(longlong *)((longlong)this + 0x10) + 0xa0);
    local_140.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
    local_148 = *puVar12;
    if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_140.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar15 = *(longlong *)((longlong)this + 0x10);
    puVar12 = (undefined8 *)(lVar15 + 0x20);
    if (puVar12 != &local_148) {
      *puVar12 = local_148;
      local_148 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar15 + 0x28),&local_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.ReferenceController);
  }
  else {
    local_150.ReferenceController = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_150.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar3 = *(longlong *)((longlong)this + 0x10);
    plVar10 = (longlong *)(lVar3 + 0x20);
    local_c0 = local_150.ReferenceController;
    local_158 = lVar15;
    if (plVar10 != &local_158) {
      *plVar10 = lVar15;
      local_158 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar3 + 0x28),&local_150);
      local_c0 = local_150.ReferenceController;
    }
  }
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  lVar15 = *(longlong *)((longlong)this + 0x10);
  if (*(longlong **)(lVar15 + 0x20) == (longlong *)0x0) {
    if (1 < (byte)LogMetasoundGenerator._0_1_) {
      Metasound::Frontend::FGraphClassRegistryKey::ToString
                ((FGraphClassRegistryKey *)(lVar15 + 0xa0),&local_168);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
LAB_14b2a9089:
    if (bVar27) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(&local_1a8);
    pTVar19 = (param_2->WeakReferenceCount).ReferenceController;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar19->WeakReferenceCount;
      aVar25 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar25 == (atomic<int>)0x1) {
        (**(code **)(pTVar19->_padding_ + 8))(pTVar19,1);
      }
    }
    return;
  }
  aVar25 = *(atomic<int> *)(lVar15 + 0xe8);
  local_1a4 = aVar25;
  puVar13 = (uint *)(**(code **)(**(longlong **)(lVar15 + 0x20) + 0x10))();
  local_188.OperatorID.A = *puVar13;
  local_188.OperatorID.B = puVar13[1];
  local_188.OperatorID.C = puVar13[2];
  local_188.OperatorID.D = puVar13[3];
  puVar13 = *(uint **)((longlong)this + 0x10);
  local_188.OperatorSettings.SampleRate = *puVar13;
  local_188.OperatorSettings.TargetBlockRate = (float)puVar13[1];
  local_188.OperatorSettings.ActualBlockRate = (float)puVar13[2];
  local_188.OperatorSettings.NumFramesPerBlock = puVar13[3];
  aVar26 = (atomic<int>)0x0;
  if ((char)puVar13[0x3b] != '\0') {
    pTVar21 = (param_2->WeakReferenceCount).ReferenceController;
    pTVar16 = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      aVar22 = pTVar21->SharedReferenceCount;
      do {
        pTVar16 = pTVar19;
        if (aVar22 == (atomic<int>)0x0) goto LAB_14b2a922b;
        LOCK();
        aVar8 = pTVar21->SharedReferenceCount;
        bVar7 = aVar22 == aVar8;
        if (bVar7) {
          pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar22 + 1);
          aVar8 = aVar22;
        }
        UNLOCK();
        aVar22 = aVar8;
      } while (!bVar7);
      pFVar4 = param_2->Object;
      param_2 = local_1a0;
      pTVar16 = pTVar21;
      if (pFVar4 != (FOperatorPool *)0x0) {
        pFVar2 = &pFVar4->CriticalSection;
        if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_14b2a9666;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
        uVar23 = local_188.OperatorSettings.SampleRate * 0x40 +
                 local_188.OperatorSettings.NumFramesPerBlock +
                 ((uint)(CONCAT44(local_188.OperatorSettings.TargetBlockRate,
                                  local_188.OperatorSettings.SampleRate) >> 2) & 0x3fffffff) +
                 0x9e3779b9 ^ local_188.OperatorSettings.SampleRate;
        uVar14 = CityHash64((char *)&local_188,0x10);
        iVar9 = TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                          ((TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&pFVar4->Operators,
                           ((uint)(uVar14 >> 2) & 0x3fffffff) +
                           (uint)uVar14 * 0x40 + uVar23 + 0x9e3779b9 ^ (uint)uVar14,&local_188);
        if (iVar9 == -1) {
LAB_14b2a91ed:
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          aVar22 = aVar26;
        }
        else {
          lVar15 = (longlong)iVar9 * 0x38 + *(longlong *)&pFVar4->Operators;
          pTVar16 = (TReferenceControllerBase<1> *)(lVar15 + 0x20);
          if (lVar15 == 0) {
            pTVar16 = pTVar19;
          }
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_14b2a91ed;
          aVar22 = pTVar16->SharedReferenceCount;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
        }
        aVar25 = local_1a4;
        aVar8 = local_1a4;
        if ((int)aVar22 < (int)local_1a4) {
          aVar8 = aVar22;
        }
        Metasound::FOperatorPool::TouchOperators(pFVar4,&local_188,(int)aVar8);
        aVar25 = (atomic<int>)((int)aVar25 - (int)aVar22);
        this = local_168.Data.AllocatorInstance.Data;
        param_2 = local_1a0;
        pTVar16 = pTVar21;
        local_1a4 = aVar25;
      }
    }
LAB_14b2a922b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  pTVar21 = (param_2->WeakReferenceCount).ReferenceController;
  pTVar16 = pTVar21;
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) goto LAB_14b2a933e;
  aVar22 = pTVar21->SharedReferenceCount;
  do {
    pTVar16 = pTVar19;
    if (aVar22 == (atomic<int>)0x0) goto LAB_14b2a933e;
    LOCK();
    aVar8 = pTVar21->SharedReferenceCount;
    bVar7 = aVar22 == aVar8;
    if (bVar7) {
      pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar22 + 1);
      aVar8 = aVar22;
    }
    UNLOCK();
    aVar22 = aVar8;
  } while (!bVar7);
  pFVar4 = param_2->Object;
  param_2 = local_1a0;
  pTVar16 = pTVar21;
  if (pFVar4 == (FOperatorPool *)0x0) goto LAB_14b2a933e;
  pFVar2 = &pFVar4->CriticalSection;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
LAB_14b2a9666:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  uVar23 = local_188.OperatorSettings.SampleRate * 0x40 +
           local_188.OperatorSettings.NumFramesPerBlock +
           ((uint)(CONCAT44(local_188.OperatorSettings.TargetBlockRate,
                            local_188.OperatorSettings.SampleRate) >> 2) & 0x3fffffff) + 0x9e3779b9
           ^ local_188.OperatorSettings.SampleRate;
  uVar14 = CityHash64((char *)&local_188,0x10);
  iVar9 = TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                    ((TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&pFVar4->Operators,
                     ((uint)(uVar14 >> 2) & 0x3fffffff) + (uint)uVar14 * 0x40 + uVar23 + 0x9e3779b9
                     ^ (uint)uVar14,&local_188);
  if (iVar9 == -1) {
LAB_14b2a9310:
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  }
  else {
    lVar15 = (longlong)iVar9 * 0x38 + *(longlong *)&pFVar4->Operators;
    pTVar16 = (TReferenceControllerBase<1> *)(lVar15 + 0x20);
    if (lVar15 == 0) {
      pTVar16 = pTVar19;
    }
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_14b2a9310;
    aVar26 = pTVar16->SharedReferenceCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  }
  this = local_168.Data.AllocatorInstance.Data;
  aVar25 = local_1a4;
  Metasound::Engine::FOperatorCacheStatTracker::RecordPreCacheRequest
            ((pFVar4->CacheStatTracker).Ptr,
             *(FOperatorBuildData **)(local_168.Data.AllocatorInstance.Data + 0x10),(int)local_1a4,
             (int)aVar26);
  param_2 = local_1a0;
  pTVar16 = pTVar21;
LAB_14b2a933e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  local_190 = (FName)((ulonglong)local_190 & 0xffffffff00000000);
  pTVar21 = pTVar19;
  if (0 < (int)aVar25) {
    do {
      pTVar16 = (param_2->WeakReferenceCount).ReferenceController;
      pTVar24 = pTVar16;
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b2a95a4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24)
        ;
        if (bVar27) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar5) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        FMemScope::~FMemScope(&local_198);
        FLLMScope::~FLLMScope(&local_1a8);
        pTVar19 = (param_2->WeakReferenceCount).ReferenceController;
        goto LAB_14b2a9609;
      }
      aVar25 = pTVar16->SharedReferenceCount;
      do {
        pTVar24 = pTVar19;
        if (aVar25 == (atomic<int>)0x0) goto LAB_14b2a95a4;
        LOCK();
        aVar26 = pTVar16->SharedReferenceCount;
        bVar7 = aVar25 == aVar26;
        if (bVar7) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar25 + 1);
          aVar26 = aVar25;
        }
        UNLOCK();
        aVar25 = aVar26;
      } while (!bVar7);
      pFVar4 = param_2->Object;
      pTVar24 = pTVar16;
      param_2 = local_1a0;
      if ((pFVar4 == (FOperatorPool *)0x0) || (pFVar4->bStopping != (atomic<bool>)0x0))
      goto LAB_14b2a95a4;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_4_ = 0;
      local_a8._12_4_ = 0;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_98._40_4_ = 0;
      local_98._44_4_ = 0x80;
      local_98._48_4_ = 0xffffffff;
      local_98._52_4_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      if (((int)pTVar21 != 0) || (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x78) == 0))
      {
        pTVar17 = Metasound::FGraphRenderCost::MakeGraphRenderCost(&local_b8);
        local_130.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
        local_138 = pTVar17->Object;
        if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_130.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        lVar15 = *(longlong *)((longlong)this + 0x10);
        ppFVar18 = (FGraphRenderCost **)(lVar15 + 0x78);
        if (ppFVar18 != &local_138) {
          *ppFVar18 = local_138;
          local_138 = (FGraphRenderCost *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(lVar15 + 0x80),&local_130);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
      }
      Metasound::GeneratorBuilder::BuildGraphOperator
                (&local_108,*(FOperatorSettings **)((longlong)this + 0x10),
                 (FGeneratorInitParams *)*(FOperatorSettings **)((longlong)this + 0x10),
                 (FBuildResults *)local_a8);
      Metasound::GeneratorBuilder::LogBuildErrors
                ((FTopLevelAssetPath *)(*(longlong *)((longlong)this + 0x10) + 0x90),
                 (FBuildResults *)local_a8);
      Metasound::FOperatorPool::AddOperatorInternal(pFVar4,&local_188,&local_108);
      lVar15 = *(longlong *)((longlong)this + 0x10);
      if (&pFVar4->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&pFVar4->CriticalSection);
      local_118 = &local_188;
      local_128.Value = (FOperatorPoolEntryID *)(lVar15 + 0xd8);
      TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&>_>
                ((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                  *)&pFVar4->AssetIdToGraphIdLookUp,&local_128,(bool *)&local_128.Value);
      TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
      ::EmplaceUnique<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>
                (&pFVar4->GraphIdToAssetIdLookUp,&local_188,(FGuid *)(lVar15 + 0xd8));
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar4->CriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.RenderCost.SharedReferenceCount.ReferenceController);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_108.Inputs.SubInterfaces.AllocatorInstance.Data,
                 local_108.Inputs.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_108.Inputs.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_108.Inputs.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                ((FInputBinding *)local_108.Inputs.Bindings.AllocatorInstance.Data,
                 local_108.Inputs.Bindings.ArrayNum);
      if ((FInputBinding *)local_108.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0)
      {
        FMemory::Free(local_108.Inputs.Bindings.AllocatorInstance.Data);
      }
      if (local_108.Operator.Ptr != (IOperator *)0x0) {
        (**(code **)*local_108.Operator.Ptr)(local_108.Operator.Ptr,1);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
                ((TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
                  *)local_a8._0_8_,local_a8._8_4_);
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      FVar20.Value = local_190.ComparisonIndex.Value + 1;
      pTVar21 = (TReferenceControllerBase<1> *)(ulonglong)FVar20.Value;
      local_190.ComparisonIndex.Value = FVar20.Value;
      this = local_168.Data.AllocatorInstance.Data;
      param_2 = local_1a0;
    } while ((int)FVar20.Value < (int)local_1a4);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_198);
  FLLMScope::~FLLMScope(&local_1a8);
  pTVar19 = (local_1a0->WeakReferenceCount).ReferenceController;
LAB_14b2a9609:
  if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &pTVar19->WeakReferenceCount;
  aVar25 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar25 != (atomic<int>)0x1) {
    return;
  }
  (**(code **)(pTVar19->_padding_ + 8))(pTVar19,1);
  return;
}

// operator() @ 14b2a9800

void __thiscall
`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined8 uVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint local_res8 [2];
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *(undefined8 *)this;
  local_10 = *(longlong **)((longlong)this + 8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_res8[0] = *(uint *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar3 = *(code **)((longlong)this + 0x20);
  plVar8 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)this + 0x48);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(uVar7,local_res8,&local_18);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar9->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b2a98b0;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    lVar4 = *(longlong *)this;
    if (lVar4 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x18);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      local_res8[0] = *(uint *)((longlong)this + 0x10);
      if (*(int *)(lVar4 + 0x90) != *(int *)(lVar4 + 0xbc)) {
        TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
                           *)(lVar4 + 0x88),local_res8[0],(int *)local_res8);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
LAB_14b2a98b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14b2a9920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TWeakPtr<Metasound::FOperatorPool,1> *param_2)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  FOperatorPool *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ushort uVar6;
  atomic<int> aVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  void *local_res18;
  FString local_28;
  
  pTVar9 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b2a9960;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar10);
    pFVar3 = param_2->Object;
    if (pFVar3 != (FOperatorPool *)0x0) {
      if (6 < (byte)LogMetasoundGenerator._0_1_) {
        Metasound::FOperatorPoolEntryID::ToString(this,&local_28);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      lpCriticalSection = &pFVar3->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
      ::Remove((TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
                *)&pFVar3->Operators,this);
      pFVar4 = (pFVar3->Stack).AllocatorInstance.Data;
      if (((pFVar4 <= this) && (this < pFVar4 + (longlong)(pFVar3->Stack).ArrayMax * 0x20)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res18 = this;
      iVar8 = TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_>::
              RemoveAll<_TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                        (&pFVar3->Stack,(<lambda_1> *)&local_res18);
      if ((iVar8 != 0) &&
         (Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.Value =
               Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.Value - iVar8,
         -1 < CountersChannel->Enabled)) {
        if (Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar6 = FCountersTrace::OutputInitCounter
                            (Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.
                             CounterName,TraceCounterType_Int,
                             Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.
                             CounterFlags & 0xf);
          LOCK();
          if (Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId ==
              (atomic<unsigned_int>)0x0) {
            Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._2_2_ = 0;
            Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_ = uVar6;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_,
                   Metasound::__GTraceCounterMetaSound_OperatorPool_NumOperators.Value);
      }
      Metasound::Engine::FOperatorCacheStatTracker::OnOperatorRemoved
                ((pFVar3->CacheStatTracker).Ptr,this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14b2a9960:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  return;
}

// AddAssetIdToGraphIdLookUpInternal @ 14b2aa9d0

void __thiscall
Metasound::FOperatorPool::AddAssetIdToGraphIdLookUpInternal
          (FOperatorPool *this,FGuid *param_1,FOperatorPoolEntryID *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGuid *local_18;
  FOperatorPoolEntryID *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&>_>
              ((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                *)&this->AssetIdToGraphIdLookUp,
               (TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&> *)
               &stack0x00000008,(bool *)&local_18);
    TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
    ::EmplaceUnique<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>
              (&this->GraphIdToAssetIdLookUp,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014b2aaa4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddOperator @ 14b2aab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FOperatorPool::AddOperator
          (FOperatorPool *this,FOperatorPoolEntryID *param_1,FOperatorAndInputs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FGraphRenderCost *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  code **ppcVar10;
  undefined1 auStack_d8 [32];
  FOperatorAndInputs *local_b8;
  FScriptContainerElement *local_b0;
  FOperatorPool *local_a8;
  code *local_a0;
  code *pcStack_98;
  code *local_90;
  code *pcStack_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = this;
  if (((param_2->Operator).Ptr == (IOperator *)0x0) &&
     (local_b8 = param_2,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("OperatorAndInputs.Operator.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                        ,0x167,L""), param_2 = local_b8, bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_a0 = *(code **)&param_1->OperatorID;
  pcStack_98 = *(code **)&(param_1->OperatorID).C;
  local_b8 = (FOperatorAndInputs *)(param_2->Operator).Ptr;
  local_78[0] = (code *)0x0;
  local_90 = *(code **)&param_1->OperatorSettings;
  pcStack_88 = *(code **)&(param_1->OperatorSettings).ActualBlockRate;
  (param_2->Operator).Ptr = (IOperator *)0x0;
  local_b0 = (param_2->Inputs).Bindings.AllocatorInstance.Data;
  bVar9 = (param_2->Inputs).bIsVertexInterfaceFrozen;
  (param_2->Inputs).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_2->Inputs).Bindings.ArrayNum;
  iVar2 = (param_2->Inputs).Bindings.ArrayMax;
  (param_2->Inputs).Bindings.ArrayNum = 0;
  (param_2->Inputs).Bindings.ArrayMax = 0;
  pFVar5 = (param_2->Inputs).SubInterfaces.AllocatorInstance.Data;
  (param_2->Inputs).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_2->Inputs).SubInterfaces.ArrayNum;
  iVar4 = (param_2->Inputs).SubInterfaces.ArrayMax;
  (param_2->Inputs).SubInterfaces.ArrayNum = 0;
  (param_2->Inputs).SubInterfaces.ArrayMax = 0;
  pFVar6 = (param_2->RenderCost).Object;
  pTVar7 = (param_2->RenderCost).SharedReferenceCount.ReferenceController;
  (param_2->RenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->RenderCost).Object = (FGraphRenderCost *)0x0;
  local_50 = FMemory::Malloc(0x68,8);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[1] = local_a0;
  local_50[2] = pcStack_98;
  local_50[3] = local_90;
  local_50[4] = pcStack_88;
  local_50[5] = (code *)local_b8;
  local_50[7] = (code *)local_b0;
  *(bool *)(local_50 + 6) = bVar9;
  *(int *)(local_50 + 8) = iVar1;
  *(int *)((longlong)local_50 + 0x44) = iVar2;
  local_50[9] = (code *)pFVar5;
  *(int *)(local_50 + 10) = iVar3;
  *(int *)((longlong)local_50 + 0x54) = iVar4;
  local_50[0xb] = (code *)pFVar6;
  local_50[0xc] = (code *)pTVar7;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
                  ::Call;
  }
  ExecuteTaskAsync(local_a8,(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)>
                             *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar10 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar10 = local_50;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>((FInputBinding *)0x0,0);
  return;
}

// AddOperator @ 14b2aad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FOperatorPool::AddOperator
          (FOperatorPool *this,FOperatorPoolEntryID *param_1,
          TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *param_2,
          FInputVertexInterfaceData *param_3,TSharedPtr<Metasound::FGraphRenderCost,1> *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  IOperator *pIVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  code **ppcVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  FGraphRenderCost *local_b0;
  TReferenceControllerBase<1> *local_a8;
  code *local_a0;
  code *pcStack_98;
  code *local_90;
  code *pcStack_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pIVar4 = param_2->Ptr;
  param_2->Ptr = (IOperator *)0x0;
  bVar1 = param_3->bIsVertexInterfaceFrozen;
  pFVar5 = (param_3->Bindings).AllocatorInstance.Data;
  (param_3->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_3->Bindings).ArrayNum;
  iVar3 = (param_3->Bindings).ArrayMax;
  (param_3->Bindings).ArrayNum = 0;
  (param_3->Bindings).ArrayMax = 0;
  pFVar6 = (param_3->SubInterfaces).AllocatorInstance.Data;
  (param_3->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8 = (param_3->SubInterfaces).ArrayNum;
  local_b4 = (param_3->SubInterfaces).ArrayMax;
  (param_3->SubInterfaces).ArrayNum = 0;
  (param_3->SubInterfaces).ArrayMax = 0;
  local_b0 = param_4->Object;
  local_a8 = (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (FGraphRenderCost *)0x0;
  if ((pIVar4 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OperatorAndInputs.Operator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                         ,0x167,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a0 = *(code **)&param_1->OperatorID;
  pcStack_98 = *(code **)&(param_1->OperatorID).C;
  local_78[0] = (code *)0x0;
  local_90 = *(code **)&param_1->OperatorSettings;
  pcStack_88 = *(code **)&(param_1->OperatorSettings).ActualBlockRate;
  local_50 = FMemory::Malloc(0x68,8);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[1] = local_a0;
  local_50[2] = pcStack_98;
  local_50[3] = local_90;
  local_50[4] = pcStack_88;
  local_50[5] = (code *)pIVar4;
  *(bool *)(local_50 + 6) = bVar1;
  local_50[7] = (code *)pFVar5;
  *(int *)(local_50 + 8) = iVar2;
  *(int *)((longlong)local_50 + 0x44) = iVar3;
  local_50[9] = (code *)pFVar6;
  *(int *)(local_50 + 10) = local_b8;
  *(int *)((longlong)local_50 + 0x54) = local_b4;
  local_50[0xb] = (code *)local_b0;
  local_50[0xc] = (code *)local_a8;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
                  ::Call;
  }
  ExecuteTaskAsync(this,(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)> *)
                        local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar9 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar9 = local_50;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>((FInputBinding *)0x0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>((FInputBinding *)0x0,0);
  return;
}

// AddOperatorInternal @ 14b2aaf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOperatorPool::AddOperatorInternal
          (FOperatorPool *this,FOperatorPoolEntryID *param_1,FOperatorAndInputs *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_> *pTVar2;
  FOperatorPoolEntryID *pFVar3;
  FScriptContainerElement *pFVar4;
  FOperatorAndInputs *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType local_48;
  undefined8 local_40;
  FOperatorPoolEntryID *local_38;
  ForAnyElementType *local_30;
  FString local_28;
  
  if ((param_2->Operator).Ptr != (IOperator *)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &this->Stack;
    pFVar3 = (FOperatorPoolEntryID *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Stack).ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->Stack).ArrayNum;
    piVar1 = &(this->Stack).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x420,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Stack).ArrayNum = iVar10 + 1;
    uVar7 = *(undefined8 *)&(param_1->OperatorID).C;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar12 = pFVar4 + (longlong)iVar10 * 0x20;
    *(undefined8 *)pFVar12 = *(undefined8 *)&param_1->OperatorID;
    *(undefined8 *)(pFVar12 + 8) = uVar7;
    uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
    pFVar4 = pFVar4 + (longlong)iVar10 * 0x20 + 0x10;
    *(undefined8 *)pFVar4 = *(undefined8 *)&param_1->OperatorSettings;
    *(undefined8 *)(pFVar4 + 8) = uVar7;
    __GTraceCounterMetaSound_OperatorPool_NumOperators.Value =
         __GTraceCounterMetaSound_OperatorPool_NumOperators.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId == (atomic<unsigned_int>)0x0)
      {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId ==
            (atomic<unsigned_int>)0x0) {
          __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._2_2_ = 0;
          __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_,
                 __GTraceCounterMetaSound_OperatorPool_NumOperators.Value);
    }
    Engine::FOperatorCacheStatTracker::OnOperatorAdded((this->CacheStatTracker).Ptr,param_1);
    if (6 < (byte)LogMetasoundGenerator._0_1_) {
      FOperatorPoolEntryID::ToString(param_1,&local_28);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pTVar11 = TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->Operators,param_1);
    if (pTVar11 == (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0) {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&local_48,(int *)((longlong)&local_40 + 4));
      pFVar12 = local_48.Data + (longlong)iVar10 * 0x40;
      local_40 = CONCAT44(local_40._4_4_,iVar10 + 1);
      *(IOperator **)&pFVar12->field_0x0 = (param_2->Operator).Ptr;
      (param_2->Operator).Ptr = (IOperator *)0x0;
      pFVar12[8] = (FScriptContainerElement)(param_2->Inputs).bIsVertexInterfaceFrozen;
      *(undefined8 *)(pFVar12 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar12 + 0x10) =
           (param_2->Inputs).Bindings.AllocatorInstance.Data;
      (param_2->Inputs).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 0x18) = (param_2->Inputs).Bindings.ArrayNum;
      *(int *)(pFVar12 + 0x1c) = (param_2->Inputs).Bindings.ArrayMax;
      (param_2->Inputs).Bindings.ArrayNum = 0;
      (param_2->Inputs).Bindings.ArrayMax = 0;
      *(undefined8 *)(pFVar12 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar12 + 0x20) =
           (param_2->Inputs).SubInterfaces.AllocatorInstance.Data;
      (param_2->Inputs).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 0x28) = (param_2->Inputs).SubInterfaces.ArrayNum;
      *(int *)(pFVar12 + 0x2c) = (param_2->Inputs).SubInterfaces.ArrayMax;
      (param_2->Inputs).SubInterfaces.ArrayNum = 0;
      (param_2->Inputs).SubInterfaces.ArrayMax = 0;
      *(FGraphRenderCost **)(pFVar12 + 0x30) = (param_2->RenderCost).Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 0x38) =
           (param_2->RenderCost).SharedReferenceCount.ReferenceController;
      local_30 = &local_48;
      (param_2->RenderCost).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (param_2->RenderCost).Object = (FGraphRenderCost *)0x0;
      local_38 = param_1;
      TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->Operators,
                 (TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_&&>
                  *)&stack0x00000018,(bool *)&local_38);
      DestructItems<Metasound::FOperatorAndInputs,int>
                ((FOperatorAndInputs *)local_48.Data,(int)local_40);
      if ((FOperatorAndInputs *)local_48.Data != (FOperatorAndInputs *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
    else {
      pFVar5 = (FOperatorAndInputs *)(pTVar11->AllocatorInstance).Data;
      if (((pFVar5 <= param_2) && (param_2 < pFVar5 + pTVar11->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = pTVar11->ArrayNum;
      if (iVar10 == pTVar11->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
      }
      pTVar11->ArrayNum = iVar10 + 1;
      pFVar12 = (pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 0x40;
      *(IOperator **)pFVar12 = (param_2->Operator).Ptr;
      (param_2->Operator).Ptr = (IOperator *)0x0;
      pFVar12[8] = (FScriptContainerElement)(param_2->Inputs).bIsVertexInterfaceFrozen;
      *(undefined8 *)(pFVar12 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar12 + 0x10) =
           (param_2->Inputs).Bindings.AllocatorInstance.Data;
      (param_2->Inputs).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 0x18) = (param_2->Inputs).Bindings.ArrayNum;
      *(int *)(pFVar12 + 0x1c) = (param_2->Inputs).Bindings.ArrayMax;
      (param_2->Inputs).Bindings.ArrayNum = 0;
      (param_2->Inputs).Bindings.ArrayMax = 0;
      *(undefined8 *)(pFVar12 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar12 + 0x20) =
           (param_2->Inputs).SubInterfaces.AllocatorInstance.Data;
      (param_2->Inputs).SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 0x28) = (param_2->Inputs).SubInterfaces.ArrayNum;
      *(int *)(pFVar12 + 0x2c) = (param_2->Inputs).SubInterfaces.ArrayMax;
      (param_2->Inputs).SubInterfaces.ArrayNum = 0;
      (param_2->Inputs).SubInterfaces.ArrayMax = 0;
      *(FGraphRenderCost **)(pFVar12 + 0x30) = (param_2->RenderCost).Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 0x38) =
           (param_2->RenderCost).SharedReferenceCount.ReferenceController;
      (param_2->RenderCost).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (param_2->RenderCost).Object = (FGraphRenderCost *)0x0;
    }
    Trim(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// BuildAndAddOperator @ 14b2ac080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOperatorPool::BuildAndAddOperator
          (FOperatorPool *this,
          TUniquePtr<Metasound::FOperatorBuildData,TDefaultDelete<Metasound::FOperatorBuildData>_>
          param_1)

{
  longlong lVar1;
  FGeneratorInitParams *pFVar2;
  code *pcVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  INodeClassRegistry *pIVar7;
  code **ppcVar8;
  undefined1 auStackY_b8 [32];
  code *local_88;
  FSharedReferencer<1> FStack_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  lVar1._0_4_ = ((param_1.Ptr)->InitParams).OperatorSettings.SampleRate;
  lVar1._4_4_ = ((param_1.Ptr)->InitParams).OperatorSettings.TargetBlockRate;
  if (lVar1 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8479151279308799555>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                       ,0x1bd,"InBuildData");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = *(FGeneratorInitParams **)&((param_1.Ptr)->InitParams).OperatorSettings;
    if (pFVar2 == (FGeneratorInitParams *)0x0) {
      return;
    }
    FGeneratorInitParams::~FGeneratorInitParams(pFVar2);
    ::operator_delete(pFVar2,0xf0);
    return;
  }
  local_88 = (code *)0x0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (OperatorPoolPrivate::bMetasoundPoolSyncGraphRetrieval) {
    pIVar7 = Frontend::INodeClassRegistry::Get();
    ppcVar8 = (code **)(**(code **)((longlong)*pIVar7 + 0x28))
                                 (pIVar7,local_78,
                                  *(longlong *)&((param_1.Ptr)->InitParams).OperatorSettings + 0xa0)
    ;
    if (&local_88 != ppcVar8) {
      local_88 = *ppcVar8;
      *ppcVar8 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_80,(FSharedReferencer<1> *)(ppcVar8 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if (local_88 == (code *)0x0) {
      if (1 < (byte)LogMetasoundGenerator._0_1_) {
        Frontend::FGraphClassRegistryKey::ToString
                  ((FGraphClassRegistryKey *)
                   (*(longlong *)&((param_1.Ptr)->InitParams).OperatorSettings + 0xa0),&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      goto LAB_14b2ac293;
    }
  }
  FVar5.ReferenceController = FStack_80.ReferenceController;
  pcVar4 = local_88;
  if (FStack_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)&((param_1.Ptr)->InitParams).OperatorSettings;
  ((param_1.Ptr)->InitParams).OperatorSettings.SampleRate = 0;
  ((param_1.Ptr)->InitParams).OperatorSettings.TargetBlockRate = 0.0;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  local_30[1] = pcVar4;
  local_30[2] = (code *)FVar5.ReferenceController;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_30[3] = pcVar3;
  if (local_30 != (code **)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
                  ::Call;
  }
  ExecuteTaskAsync(this,(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)> *)
                        local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar8 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar8 = local_30;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
LAB_14b2ac293:
  pFVar2 = *(FGeneratorInitParams **)&((param_1.Ptr)->InitParams).OperatorSettings;
  if (pFVar2 != (FGeneratorInitParams *)0x0) {
    FGeneratorInitParams::~FGeneratorInitParams(pFVar2);
    ::operator_delete(pFVar2,0xf0);
  }
  return;
}

// ClaimOperator @ 14b2ade70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOperatorAndInputs * __thiscall
Metasound::FOperatorPool::ClaimOperator
          (FOperatorPool *this,FOperatorAndInputs *__return_storage_ptr__,
          FOperatorPoolEntryID *param_1,FOperatorContext *param_2)

{
  TSharedPtr<Metasound::FGraphRenderCost,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Metasound::FGraphRenderCost,1> *pTVar2;
  uint *puVar3;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int *piVar4;
  TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_> *pTVar5;
  IOperator *pIVar6;
  FOperatorCacheStatTracker *this_00;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *this_01;
  FOperatorAndInputs *pFVar14;
  TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
  *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  int iVar18;
  wchar_t *pwVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  double dVar23;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FOperatorAndInputs local_90;
  FString local_50;
  
  (__return_storage_ptr__->Operator).Ptr = (IOperator *)0x0;
  FInputVertexInterfaceData::FInputVertexInterfaceData(&__return_storage_ptr__->Inputs);
  pTVar1 = &__return_storage_ptr__->RenderCost;
  pTVar1->Object = (FGraphRenderCost *)0x0;
  (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (this->bStopping == (atomic<bool>)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_14b2ae3b9:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar9 = false;
    this_01 = TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->Operators,param_1);
    if ((this_01 == (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0) ||
       (this_01->ArrayNum < 1)) {
      uVar22 = (this->HitRateTracker).CurrTotal;
      bVar11 = false;
    }
    else {
      pFVar14 = TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>::Pop
                          (this_01,&local_90,Default);
      if (__return_storage_ptr__ != pFVar14) {
        pIVar6 = (__return_storage_ptr__->Operator).Ptr;
        (__return_storage_ptr__->Operator).Ptr = (pFVar14->Operator).Ptr;
        (pFVar14->Operator).Ptr = (IOperator *)0x0;
        if (pIVar6 != (IOperator *)0x0) {
          (**(code **)*pIVar6)(pIVar6,1);
        }
      }
      FInputVertexInterfaceData::operator=(&__return_storage_ptr__->Inputs,&pFVar14->Inputs);
      pTVar2 = &pFVar14->RenderCost;
      if (pTVar1 != pTVar2) {
        pTVar1->Object = pTVar2->Object;
        pTVar2->Object = (FGraphRenderCost *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->RenderCost).SharedReferenceCount,
                   &(pFVar14->RenderCost).SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.RenderCost.SharedReferenceCount.ReferenceController);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_90.Inputs.SubInterfaces.AllocatorInstance.Data,
                 local_90.Inputs.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_90.Inputs.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_90.Inputs.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                ((FInputBinding *)local_90.Inputs.Bindings.AllocatorInstance.Data,
                 local_90.Inputs.Bindings.ArrayNum);
      if ((FInputBinding *)local_90.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0)
      {
        FMemory::Free(local_90.Inputs.Bindings.AllocatorInstance.Data);
      }
      if (local_90.Operator.Ptr != (IOperator *)0x0) {
        (**(code **)*local_90.Operator.Ptr)(local_90.Operator.Ptr,1);
      }
      pTVar5 = &this->Stack;
      pFVar16 = (pTVar5->AllocatorInstance).Data;
      pFVar21 = pFVar16 + (longlong)(this->Stack).ArrayNum * 0x20;
      do {
        pFVar8 = pFVar21;
        if (pFVar8 == pFVar16) {
          uVar20 = 0xffffffff;
          uVar22 = 0;
          goto LAB_14b2ae028;
        }
        pFVar21 = pFVar8 + -0x20;
      } while ((((*(uint *)(pFVar8 + -0x14) != (param_1->OperatorID).D ||
                 *(uint *)(pFVar8 + -0x18) != (param_1->OperatorID).C) ||
                *(uint *)(pFVar8 + -0x1c) != (param_1->OperatorID).B) ||
                (param_1->OperatorID).A != *(uint *)pFVar21) ||
              (bVar9 = Metasound::operator==
                                 ((FOperatorSettings *)(pFVar8 + -0x10),&param_1->OperatorSettings),
              !bVar9));
      uVar20 = (uint)((longlong)pFVar21 - (longlong)pFVar16 >> 5);
      uVar22 = ~uVar20;
      uVar13 = 0;
      if ((int)uVar20 < (this->Stack).ArrayNum) {
        uVar13 = uVar22 >> 0x1f;
      }
      if (uVar13 == 0) {
LAB_14b2ae028:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FOperatorAndInputs *)(*pcVar7)();
          return pFVar14;
        }
      }
      pFVar16 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x20;
      iVar18 = (this->Stack).ArrayNum + uVar22;
      if (iVar18 != 0) {
        memmove(pFVar16,pFVar16 + 0x20,(longlong)iVar18 << 5);
      }
      iVar18 = (this->Stack).ArrayNum + -1;
      (this->Stack).ArrayNum = iVar18;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,&pTVar5->AllocatorInstance,iVar18,&(this->Stack).ArrayMax);
      LOCK();
      OperatorPoolPrivate::CacheHitCount =
           (atomic<unsigned_int>)((int)OperatorPoolPrivate::CacheHitCount + 1);
      UNLOCK();
      bVar11 = true;
      bVar9 = true;
      FCountersTrace::TCounter<__int64,0,__int64,0>::Decrement
                (&__GTraceCounterMetaSound_OperatorPool_NumOperators);
      uVar22 = (this->HitRateTracker).CurrTotal;
      puVar3 = &(this->HitRateTracker).CurrHitCount;
      *puVar3 = *puVar3 + 1;
    }
    (this->HitRateTracker).CurrTotal = uVar22 + 1;
    LOCK();
    OperatorPoolPrivate::CacheAttemptCount =
         (atomic<unsigned_int>)((int)OperatorPoolPrivate::CacheAttemptCount + 1);
    UNLOCK();
    dVar23 = 0.0;
    if (OperatorPoolPrivate::CacheAttemptCount != (atomic<unsigned_int>)0x0) {
      dVar23 = (double)(uint)OperatorPoolPrivate::CacheHitCount /
               (double)(uint)OperatorPoolPrivate::CacheAttemptCount;
    }
    if ((__GTraceCounterMetaSound_OperatorPool_HitRatio.Value != dVar23) &&
       (__GTraceCounterMetaSound_OperatorPool_HitRatio.Value = dVar23, -1 < CountersChannel->Enabled
       )) {
      if (__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId == (atomic<unsigned_int>)0x0) {
        uVar12 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterName,
                            TraceCounterType_Float,
                            __GTraceCounterMetaSound_OperatorPool_HitRatio.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId._2_2_ = 0;
          __GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId._0_2_ = uVar12;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId._0_2_,
                 __GTraceCounterMetaSound_OperatorPool_HitRatio.Value);
    }
    this_00 = (this->CacheStatTracker).Ptr;
    if (bVar11) {
      lpCriticalSection_00 = &this_00->CriticalSection;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14b2ae3b9;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pTVar15 = TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                        *)this_00,param_1);
      puVar17 = &pTVar15->field_0x20;
      if (pTVar15 ==
          (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
           *)0x0) {
        puVar17 = (undefined1 *)0x0;
      }
      if (puVar17 != (undefined1 *)0x0) {
        piVar4 = (int *)(puVar17 + 0x18);
        *piVar4 = *piVar4 + -1;
        if ((*piVar4 < 0) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5823954633806053210>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                                ,0xa6,"StatEntry->NumAvailableInCache >= 0"), bVar11)) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FOperatorAndInputs *)(*pcVar7)();
          return pFVar14;
        }
      }
      piVar4 = &this_00->NumInCache;
      *piVar4 = *piVar4 + -1;
      if ((*piVar4 < 0) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5823954633806053206>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCacheStatTracker.cpp"
                              ,0xaa,"NumInCache >= 0"), bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FOperatorAndInputs *)(*pcVar7)();
        return pFVar14;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    else {
      bVar9 = false;
      if (((Engine::Private::bMetasoundOperatorPoolCsvStatsEnabled != false) &&
          (cVar10 = (**(code **)(*(longlong *)
                                  Engine::Private::CVarCacheMissCsvStatsEnabled._padding_ + 0xc0))()
          , cVar10 != '\0')) && ((param_2->GraphAssetPath).PackageName != (FName)0x0)) {
        Engine::RecordOperatorStat
                  (&param_2->GraphAssetPath,Engine::_GCsvCategory_Metasound_OperatorCacheMiss.Index,
                   1,Accumulate);
      }
    }
    if (6 < (byte)LogMetasoundGenerator._0_1_) {
      pwVar19 = L"true";
      if (!bVar9) {
        pwVar19 = L"false";
      }
      ::FString::FString(&local_a0,pwVar19);
      FOperatorSettings::ToString(&param_1->OperatorSettings,&local_50);
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->OperatorID,&local_c0,Digits);
      ::FString::PrintfImpl(&local_b0,L"%s %s");
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// ExecuteTaskAsync @ 14b2b02e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FOperatorPool::ExecuteTaskAsync
          (FOperatorPool *this,
          TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<int> *paVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned_int> *paVar3;
  atomic<int> aVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  Type TVar10;
  FTaskBase *this_00;
  longlong *plVar11;
  FOperatorPool *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStackY_e8 [32];
  bool local_b8 [4];
  undefined1 local_b4 [4];
  FTaskBase *local_b0;
  TPairInitializer<int_const_&,UE::Tasks::Private::FTaskHandle_&&> local_a8;
  FTaskBase **local_98;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->bStopping == (atomic<bool>)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)this->_padding_;
    pFVar12 = (FOperatorPool *)0x0;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar13->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b2b0367;
        }
        LOCK();
        aVar9 = pTVar13->SharedReferenceCount;
        bVar7 = aVar4 == aVar9;
        if (bVar7) {
          pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar9 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar9;
      } while (!bVar7);
      pFVar12 = (FOperatorPool *)this->_padding_;
    }
LAB_14b2b0367:
    if ((pFVar12 != this) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedThis.Get() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x67f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (pFVar12 == (FOperatorPool *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    this->LastTaskId = this->LastTaskId + 1;
    local_b4 = (undefined1  [4])this->LastTaskId;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_88._32_8_ = *(undefined8 *)param_1;
    local_88._72_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_88._64_8_ = *(undefined8 *)&param_1->field_0x20;
    local_88._48_8_ = *(undefined8 *)&param_1->field_0x10;
    local_88._56_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_88._32_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_88._0_8_ = pFVar12;
    local_88._8_8_ = pTVar13;
    local_88._16_4_ = local_b4;
    this_00 = FMemory::Malloc(0x140,0x40);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::
      TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>,void,void>
      ::
      TExecutableTaskBase<_Metasound::FOperatorPool::ExecuteTaskAsync_::__l2::<lambda_1>,void,void>
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp(336)"
                 ,(<lambda_1> *)local_88,Default,None,None);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`Metasound::FOperatorPool::ExecuteTaskAsync'::`2'::<lambda_1>_>::
            _vftable_;
    }
    LOCK();
    paVar1 = &(this->AsyncBuildPipe).TaskCount;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    LOCK();
    this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
    UNLOCK();
    this_00->Pipe = &this->AsyncBuildPipe;
    if (-1 < TaskTrace::TaskChannel->Enabled) {
      TVar10 = UE::Tasks::Private::TranslatePriority
                         ((ETaskPriority)
                          ((ulonglong)*(undefined8 *)&(this_00->LowLevelTask).field_0x38 >> 0x3b) &
                          (Inherit|Default),this_00->ExtendedPriority);
      TaskTrace::Launched((ulong64)this_00->TraceId,
                          (wchar_t *)
                          (*(ulonglong *)&(this_00->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff
                          ),true,TVar10,0x140);
    }
    local_b8[0] = true;
    UE::Tasks::Private::FTaskBase::TryUnlock(this_00,local_b8);
    local_b0 = this_00;
    if (local_88._32_8_ != 0) {
      plVar11 = (longlong *)(local_88 + 0x30);
      if ((longlong *)local_88._72_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_88._72_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((TReferenceControllerBase<1> *)local_88._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)(local_88._8_8_ + 0xc);
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_88._8_8_ + 8))(local_88._8_8_,1);
      }
    }
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_a8.Value = (FTaskHandle *)local_b4;
    local_98 = &local_b0;
    TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Tasks::Private::FTaskHandle_&&>_>
              ((TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
                *)&this->ActiveBuildTasks,&local_a8,(bool *)&local_a8.Value);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_b0 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &local_b0->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_b0->_padding_)(local_b0,1);
      }
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar13->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
      }
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// GetNumCachedOperatorsWithAssetClassID @ 14b2b11e0

int __thiscall
Metasound::FOperatorPool::GetNumCachedOperatorsWithAssetClassID(FOperatorPool *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  FOperatorPoolEntryID *pFVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                        *)&this->AssetIdToGraphIdLookUp,(uint)uVar3,param_1);
    iVar2 = 0;
    if (iVar1 != -1) {
      lVar4 = (longlong)iVar1 * 0x38 + *(longlong *)&this->AssetIdToGraphIdLookUp;
      pFVar5 = (FOperatorPoolEntryID *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        pFVar5 = (FOperatorPoolEntryID *)0x0;
      }
      if (pFVar5 != (FOperatorPoolEntryID *)0x0) {
        iVar2 = GetNumCachedOperatorsWithID(this,pFVar5);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumCachedOperatorsWithID @ 14b2b1290

int __thiscall
Metasound::FOperatorPool::GetNumCachedOperatorsWithID
          (FOperatorPool *this,FOperatorPoolEntryID *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->Operators,param_1);
    if (pTVar1 == (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = pTVar1->ArrayNum;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsStopping @ 14b2b24a0

bool __thiscall Metasound::FOperatorPool::IsStopping(FOperatorPool *this)

{
  return (bool)this->bStopping;
}

// RemoveOperatorsWithAssetClassID @ 14b2b6ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FOperatorPool::RemoveOperatorsWithAssetClassID(FOperatorPool *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  *pTVar2;
  FOperatorPoolEntryID *pFVar3;
  FGuid *pFVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  longlong lVar8;
  code **ppcVar9;
  longlong lVar10;
  TRetainedRef<Metasound::FOperatorPoolEntryID_const_> TVar11;
  FOperatorPoolEntryID *pFVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  TBaseKeyIterator<1> local_a8;
  FGuid *local_90;
  code *local_88;
  code *pcStack_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lpCriticalSection = &this->CriticalSection;
  local_90 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = CityHash64((char *)param_1,0x10);
  iVar6 = TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                      *)&this->AssetIdToGraphIdLookUp,(uint)uVar7,param_1);
  if (iVar6 == -1) goto LAB_14b2b7148;
  pFVar12 = (FOperatorPoolEntryID *)0x0;
  lVar10 = (longlong)iVar6 * 0x38 + *(longlong *)&this->AssetIdToGraphIdLookUp;
  TVar11.Ref = (FOperatorPoolEntryID *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    TVar11.Ref = pFVar12;
  }
  if (TVar11.Ref == (FOperatorPoolEntryID *)0x0) goto LAB_14b2b7148;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_a8,
             (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
              *)&this->GraphIdToAssetIdLookUp,TVar11);
  pFVar3 = local_a8.Key;
  pTVar2 = local_a8.Set;
  if (local_a8.Index == -1) {
LAB_14b2b705d:
    if (this->bStopping == (atomic<bool>)0x0) {
      local_88 = *(code **)&(TVar11.Ref)->OperatorID;
      pcStack_80 = *(code **)&((TVar11.Ref)->OperatorID).C;
      local_78[0] = (code *)0x0;
      local_a8.Set = *(TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
                       **)&(TVar11.Ref)->OperatorSettings;
      local_a8.Key = *(FOperatorPoolEntryID **)&((TVar11.Ref)->OperatorSettings).ActualBlockRate;
      local_50 = FMemory::Malloc(0x28,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_50[1] = local_88;
      local_50[2] = pcStack_80;
      local_50[3] = (code *)local_a8.Set;
      local_50[4] = (code *)local_a8.Key;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
                      ::Call;
      }
      ExecuteTaskAsync(this,(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)>
                             *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar9 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar9 = local_50;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
  }
  else {
    do {
      uVar13 = (int)pFVar12 + 1;
      pFVar12 = (FOperatorPoolEntryID *)(ulonglong)uVar13;
      iVar6 = local_a8.NextIndex;
      if (local_a8.NextIndex == -1) break;
      do {
        lVar8 = (longlong)iVar6 * 0x38;
        lVar10 = *(longlong *)&pTVar2->Elements;
        iVar1 = *(int *)(lVar8 + 0x30 + lVar10);
        if ((((*(uint *)(lVar8 + 0xc + lVar10) == (pFVar3->OperatorID).D &&
              *(uint *)(lVar8 + 4 + lVar10) == (pFVar3->OperatorID).B) &&
             *(uint *)(lVar8 + 8 + lVar10) == (pFVar3->OperatorID).C) &&
             (pFVar3->OperatorID).A == *(uint *)(lVar8 + lVar10)) &&
           (bVar5 = Metasound::operator==
                              ((FOperatorSettings *)(lVar8 + lVar10 + 0x10),
                               &pFVar3->OperatorSettings), bVar5)) break;
        iVar6 = iVar1;
      } while (iVar1 != -1);
      local_a8.NextIndex = iVar1;
    } while (iVar6 != -1);
    if ((int)uVar13 < 2) goto LAB_14b2b705d;
  }
  pFVar4 = local_90;
  TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
  ::Remove(&this->GraphIdToAssetIdLookUp,TVar11.Ref,local_90);
  if (*(int *)&(this->AssetIdToGraphIdLookUp).field_0x8 !=
      *(int *)&(this->AssetIdToGraphIdLookUp).field_0x34) {
    uVar7 = CityHash64((char *)pFVar4,0x10);
    TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                         *)&this->AssetIdToGraphIdLookUp,(uint)uVar7,pFVar4);
  }
LAB_14b2b7148:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveOperatorsWithID @ 14b2b7190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FOperatorPool::RemoveOperatorsWithID(FOperatorPool *this,FOperatorPoolEntryID *param_1)

{
  code **ppcVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code *pcStack_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->bStopping == (atomic<bool>)0x0) {
    local_68 = *(code **)&param_1->OperatorID;
    pcStack_60 = *(code **)&(param_1->OperatorID).C;
    local_48[0] = (code *)0x0;
    local_58 = *(code **)&param_1->OperatorSettings;
    pcStack_50 = *(code **)&(param_1->OperatorSettings).ActualBlockRate;
    local_20 = FMemory::Malloc(0x28,8);
    *local_20 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_20[1] = local_68;
    local_20[2] = pcStack_60;
    local_20[3] = local_58;
    local_20[4] = pcStack_50;
    if (local_20 + 1 != (code **)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,void,int,TWeakPtr<Metasound::FOperatorPool,1>_>
                    ::Call;
    }
    ExecuteTaskAsync(this,(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)> *
                          )local_48);
    if (local_48[0] != (code *)0x0) {
      ppcVar1 = local_48 + 2;
      if (local_20 != (code **)0x0) {
        ppcVar1 = local_20;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
  }
  return;
}

// SetMaxNumOperators @ 14b2b8370

void __thiscall Metasound::FOperatorPool::SetMaxNumOperators(FOperatorPool *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->bStopping == (atomic<bool>)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Settings).MaxNumOperators = param_1;
    Trim(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// StopAsyncTasks @ 14b2b85d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FOperatorPool::StopAsyncTasks(FOperatorPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<int,UE::Tasks::Private::FTaskHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>_>
  *this_00;
  ulonglong uVar2;
  longlong lVar3;
  FTaskBase *this_01;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  int local_114;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lpCriticalSection = &this->CriticalSection;
  uVar7 = 1;
  LOCK();
  this->bStopping = (atomic<bool>)0x1;
  UNLOCK();
  local_88._0_8_ = (void *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar12 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->ActiveBuildTasks;
  if ((TMap<int,UE::Tasks::Private::FTaskHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>_>
       *)local_88 != this_00) {
    TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    if ((void *)local_88._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    local_88._0_8_ = *(undefined8 *)&this_00->field_0x0;
    puVar1 = &(this->ActiveBuildTasks).field_0x10;
    *(undefined8 *)&this_00->field_0x0 = 0;
    local_88._8_8_ = *(undefined8 *)&(this->ActiveBuildTasks).field_0x8;
    *(undefined8 *)&(this->ActiveBuildTasks).field_0x8 = 0;
    if (local_88 + 0x10 != puVar1) {
      if (*(longlong *)&(this->ActiveBuildTasks).field_0x20 == 0) {
        local_88._16_8_ = *(undefined8 *)puVar1;
        local_88._24_8_ = *(undefined8 *)&(this->ActiveBuildTasks).field_0x18;
      }
      if (local_68 != (uint *)0x0) {
        FMemory::Free(local_68);
      }
      local_68 = *(uint **)&(this->ActiveBuildTasks).field_0x20;
      *(undefined8 *)&(this->ActiveBuildTasks).field_0x20 = 0;
      local_60 = *(uint *)&(this->ActiveBuildTasks).field_0x28;
      local_5c = *(undefined4 *)&(this->ActiveBuildTasks).field_0x2c;
      *(undefined8 *)&(this->ActiveBuildTasks).field_0x28 = 0;
    }
    local_58 = *(undefined4 *)&(this->ActiveBuildTasks).field_0x30;
    local_54 = *(int *)&(this->ActiveBuildTasks).field_0x34;
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x34 = 0;
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x30 = 0xffffffff;
    if (*(longlong *)&(this->ActiveBuildTasks).field_0x40 == 0) {
      local_50 = *(undefined4 *)&(this->ActiveBuildTasks).field_0x38;
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    local_48 = *(void **)&(this->ActiveBuildTasks).field_0x40;
    *(undefined8 *)&(this->ActiveBuildTasks).field_0x40 = 0;
    local_40 = *(undefined4 *)&(this->ActiveBuildTasks).field_0x48;
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x48 = 0;
  }
  if (*(int *)&(this->ActiveBuildTasks).field_0x8 != *(int *)&(this->ActiveBuildTasks).field_0x34) {
    TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
                      *)this_00);
    TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ActiveBuildTasks).field_0x8);
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x8 = 0;
    if (*(int *)&(this->ActiveBuildTasks).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->ActiveBuildTasks).field_0xc)
      ;
    }
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x34 = 0;
    *(undefined4 *)&(this->ActiveBuildTasks).field_0x28 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_88._8_4_ != local_54) {
    if (3 < (byte)LogMetasoundGenerator._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
    }
    uVar11 = local_60;
    local_f0 = 0;
    uStack_f4 = local_f0;
    if (local_60 != 0) {
      puVar13 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar14 = *puVar13;
      local_f0 = 0;
      uVar12 = 0;
      while (uVar14 == 0) {
        lVar9 = (longlong)(int)uVar12;
        local_f0 = local_f0 + 0x20;
        uVar12 = uVar12 + 1;
        uStack_f4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14b2b8842;
        uVar14 = puVar13[lVar9 + 1];
      }
      uVar7 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_114 = (int)lVar9;
      uStack_f4 = (local_f0 - 1) + local_114;
      if ((int)local_60 < (int)uStack_f4) {
        uStack_f4 = local_60;
      }
    }
LAB_14b2b8842:
    iStack_e8 = local_88._8_4_ - local_54;
    local_110 = (longlong *)local_88;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_f8 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    uVar14 = local_60 & 0xffffffe0;
    TStack_d8._padding_ = CONCAT44(uVar7,uVar12);
    uStack_ec = local_94;
    iVar10 = (int)local_60 >> 5;
    TStack_d8._28_4_ = local_94;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    bVar8 = (byte)local_60;
    uStack_108 = uVar12;
    uStack_104 = uVar7;
    local_e0 = local_110;
    TStack_d8.Array = local_100;
    if (((int)local_60 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar11 != local_60) {
      puVar13 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar12 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14b2b894c;
        uVar12 = puVar13[lVar9 + 1];
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar14;
      if ((int)local_60 < (int)uVar11) {
        uVar11 = local_60;
      }
    }
LAB_14b2b894c:
    while( true ) {
      plVar5 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (((TStack_d8.CurrentBitIndex == uVar11) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar5 == (longlong *)local_88)) break;
      lVar9 = *plVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x18;
      lVar3 = *(longlong *)(lVar9 + 8);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0xd0) == '\0')) &&
         (this_01 = *(FTaskBase **)(lVar9 + 8), this_01 != (FTaskBase *)0x0)) {
        UE::Tasks::Private::FTaskBase::Wait(this_01);
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
  }
  LOCK();
  this->bStopping = (atomic<bool>)0x0;
  UNLOCK();
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// TouchOperators @ 14b2b8cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOperatorPool::TouchOperators
          (FOperatorPool *this,FOperatorPoolEntryID *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FOperatorPoolEntryID *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  FString local_28;
  
  if (this->bStopping == (atomic<bool>)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar6 = GetNumCachedOperatorsWithID(this,param_1);
    if (param_2 < (int)uVar6) {
      uVar6 = param_2;
    }
    if (6 < (byte)LogMetasoundGenerator._0_1_) {
      FOperatorPoolEntryID::ToString(param_1,&local_28);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((uVar6 != 0) && (0 < (int)uVar6)) {
      pTVar10 = &this->Stack;
      uVar11 = (ulonglong)uVar6;
      do {
        pFVar2 = (FOperatorPoolEntryID *)(pTVar10->AllocatorInstance).Data;
        if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Stack).ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Stack).ArrayNum;
        if (iVar7 == (this->Stack).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x420,&pTVar10->AllocatorInstance,&(this->Stack).ArrayMax);
        }
        (this->Stack).ArrayNum = iVar7 + 1;
        uVar4 = *(undefined8 *)&(param_1->OperatorID).C;
        pFVar9 = (pTVar10->AllocatorInstance).Data;
        pFVar8 = pFVar9 + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar8 = *(undefined8 *)&param_1->OperatorID;
        *(undefined8 *)(pFVar8 + 8) = uVar4;
        uVar4 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
        pFVar9 = pFVar9 + (longlong)iVar7 * 0x20 + 0x10;
        *(undefined8 *)pFVar9 = *(undefined8 *)&param_1->OperatorSettings;
        *(undefined8 *)(pFVar9 + 8) = uVar4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar11 = (ulonglong)uVar6;
      do {
        pFVar8 = (pTVar10->AllocatorInstance).Data;
        iVar7 = (this->Stack).ArrayNum;
        for (pFVar9 = pFVar8; pFVar9 != pFVar8 + (longlong)iVar7 * 0x20; pFVar9 = pFVar9 + 0x20) {
          if ((((*(uint *)(pFVar9 + 8) == (param_1->OperatorID).C &&
                *(uint *)(pFVar9 + 4) == (param_1->OperatorID).B) &&
               *(uint *)(pFVar9 + 0xc) == (param_1->OperatorID).D) &&
               (param_1->OperatorID).A == *(uint *)pFVar9) &&
             (bVar5 = Metasound::operator==
                                ((FOperatorSettings *)(pFVar9 + 0x10),&param_1->OperatorSettings),
             bVar5)) {
            iVar7 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 5);
            if (iVar7 != -1) {
              pFVar8 = (pTVar10->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
              memmove(pFVar8,pFVar8 + 0x20,(longlong)(((this->Stack).ArrayNum - iVar7) + -1) << 5);
              piVar1 = &(this->Stack).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            break;
          }
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// TouchOperatorsViaAssetClassID @ 14b2b8f20

void __thiscall
Metasound::FOperatorPool::TouchOperatorsViaAssetClassID
          (FOperatorPool *this,FGuid *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  FOperatorPoolEntryID *pFVar4;
  
  if (this->bStopping == (atomic<bool>)0x0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                        *)&this->AssetIdToGraphIdLookUp,(uint)uVar2,param_1);
    if (iVar1 != -1) {
      lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)&this->AssetIdToGraphIdLookUp;
      pFVar4 = (FOperatorPoolEntryID *)(lVar3 + 0x10);
      if (lVar3 == 0) {
        pFVar4 = (FOperatorPoolEntryID *)0x0;
      }
      if (pFVar4 != (FOperatorPoolEntryID *)0x0) {
        TouchOperators(this,pFVar4,param_2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Trim @ 14b2b8fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Metasound::FOperatorPool::Trim(FOperatorPool *this)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<FSetElementId> FVar3;
  FOperatorCacheStatTracker *this_00;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  atomic<unsigned_char> *paVar14;
  ForElementType<FSetElementId> FVar15;
  ulonglong uVar16;
  FGuid *pFVar17;
  uint uVar18;
  FOperatorPoolEntryID *pFVar19;
  ForElementType<unsigned_int> FVar20;
  uint uVar21;
  longlong lVar22;
  TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *this_01;
  ForAnyElementType FVar23;
  uint uVar24;
  uint *puVar25;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  *this_02;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  longlong local_e8;
  longlong local_e0;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_d0;
  TBaseKeyIterator<0> local_c0;
  longlong local_a8;
  FString local_a0;
  FOperatorAndInputs local_90;
  
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar18 = (this->Stack).ArrayNum - (this->Settings).MaxNumOperators;
  if (0 < (int)uVar18) {
    if (5 < (byte)LogMetasoundGenerator._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
    }
    local_a8 = (longlong)(int)uVar18;
    local_res18 = 0;
    if (0 < (int)uVar18) {
      local_e8 = 0;
      local_e0 = 0;
      do {
        uVar10 = local_res18;
        if (6 < (byte)LogMetasoundGenerator._0_1_) {
          uVar24 = 0;
          if ((int)local_res18 < (this->Stack).ArrayNum) {
            uVar24 = ~local_res18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FOperatorPoolEntryID::ToString
                    ((FOperatorPoolEntryID *)
                     ((this->Stack).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20),&local_a0
                    );
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        uVar24 = ~uVar10 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar10 < (this->Stack).ArrayNum) {
          uVar8 = uVar24;
        }
        local_res20 = uVar24;
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (FOperatorPoolEntryID *)((this->Stack).AllocatorInstance.Data + local_e0);
        uVar8 = (pFVar19->OperatorSettings).SampleRate;
        iVar9 = (pFVar19->OperatorSettings).NumFramesPerBlock;
        uVar11 = CityHash64((char *)pFVar19,0x10);
        iVar9 = TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                          ((TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->Operators,
                           ((uint)(uVar11 >> 2) & 0x3fffffff) +
                           (uint)uVar11 * 0x40 +
                           (iVar9 + uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8) + 0x9e3779b9 ^
                           (uint)uVar11,pFVar19);
        if (iVar9 == -1) {
LAB_14b2b96ba:
          pcVar12 = "OperatorArray";
          iVar9 = 0x2b5;
          paVar14 = &bGEnsureHasExecuted<_8479151279308799307>;
LAB_14b2b96ce:
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (paVar14,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                             ,iVar9,pcVar12);
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          lVar22 = (longlong)iVar9 * 0x38 + *(longlong *)&this->Operators;
          this_01 = (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)
                    (lVar22 + 0x20);
          if (lVar22 == 0) {
            this_01 = (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (this_01 == (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0)
          goto LAB_14b2b96ba;
          if (this_01->ArrayNum < 1) {
            pcVar12 = "OperatorArray->Num() > 0";
            iVar9 = 0x2b7;
            paVar14 = &bGEnsureHasExecuted<_8479151279308799305>;
            goto LAB_14b2b96ce;
          }
          TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>::Pop
                    (this_01,&local_90,Default);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90.RenderCost.SharedReferenceCount.ReferenceController);
          FVar23.Data = local_90.Inputs.SubInterfaces.AllocatorInstance.Data;
          DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                    ((FSubInterfaceLayout *)local_90.Inputs.SubInterfaces.AllocatorInstance.Data,
                     local_90.Inputs.SubInterfaces.ArrayNum);
          if ((FSubInterfaceLayout *)FVar23.Data != (FSubInterfaceLayout *)0x0) {
            FMemory::Free(FVar23.Data);
          }
          FVar23.Data = local_90.Inputs.Bindings.AllocatorInstance.Data;
          DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                    ((FInputBinding *)local_90.Inputs.Bindings.AllocatorInstance.Data,
                     local_90.Inputs.Bindings.ArrayNum);
          if ((FInputBinding *)FVar23.Data != (FInputBinding *)0x0) {
            FMemory::Free(FVar23.Data);
          }
          if (local_90.Operator.Ptr != (IOperator *)0x0) {
            (**(code **)*local_90.Operator.Ptr)(local_90.Operator.Ptr,1);
          }
          if (this_01->ArrayNum == 0) {
            uVar8 = 0;
            if ((int)uVar10 < (this->Stack).ArrayNum) {
              uVar8 = uVar24;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
            ::Remove((TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->Operators,
                     (FOperatorPoolEntryID *)((this->Stack).AllocatorInstance.Data + local_e0));
            local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d0.ArrayNum = 0;
            local_d0.ArrayMax = 0;
            uVar8 = 0;
            if ((int)uVar10 < (this->Stack).ArrayNum) {
              uVar8 = uVar24;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
            ::MultiFind<TSizedDefaultAllocator<32>_>
                      (&this->GraphIdToAssetIdLookUp,
                       (FOperatorPoolEntryID *)((this->Stack).AllocatorInstance.Data + local_e0),
                       &local_d0,false);
            uVar5 = local_d0._8_8_;
            uVar13 = (ulonglong)local_d0.ArrayNum;
            pFVar17 = (FGuid *)(local_d0.AllocatorInstance.Data + uVar13 * 0x10);
            uVar16 = uVar13;
            FVar23.Data = local_d0.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar13 != (int)uVar16) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if ((FGuid *)FVar23.Data == pFVar17) break;
              if (*(int *)&(this->AssetIdToGraphIdLookUp).field_0x8 !=
                  *(int *)&(this->AssetIdToGraphIdLookUp).field_0x34) {
                uVar11 = CityHash64((char *)FVar23.Data,0x10);
                TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                                     *)&this->AssetIdToGraphIdLookUp,(uint)uVar11,
                                    (FGuid *)FVar23.Data);
              }
              uVar8 = 0;
              if ((int)uVar10 < (this->Stack).ArrayNum) {
                uVar8 = uVar24;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                        (&local_c0,
                         (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
                          *)&this->GraphIdToAssetIdLookUp,
                         (FOperatorPoolEntryID *)((this->Stack).AllocatorInstance.Data + local_e0));
              this_02 = local_c0.Set;
              pFVar19 = local_c0.Key;
              uVar21 = local_c0.Index;
              uVar8 = local_c0.NextIndex;
joined_r0x00014b2b9441:
              local_c0.Index = uVar21;
              if (uVar21 != 0xffffffff) {
                lVar22 = (longlong)(int)uVar21 * 0x38 + *(longlong *)&this_02->Elements;
                local_c0.Index = uVar8;
                if (((*(uint *)(lVar22 + 0x2c) == ((FGuid *)FVar23.Data)->D &&
                     *(uint *)(lVar22 + 0x28) == ((FGuid *)FVar23.Data)->C) &&
                    *(uint *)(lVar22 + 0x24) == ((FGuid *)FVar23.Data)->B) &&
                    *(uint *)(lVar22 + 0x20) == ((FGuid *)FVar23.Data)->A) {
                  local_c0.Index = uVar21;
                  if (((int)uVar21 < 0) || (*(int *)&(this_02->Elements).field_0x28 <= (int)uVar21))
                  {
LAB_14b2b94f5:
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Elements.IsValidIndex(ElementIndex)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                       ,0x2ab,
                                       L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                      );
                    if (bVar6) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  else {
                    if ((*(int *)&(this_02->Elements).field_0x28 <= (int)uVar21) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    FVar2 = *(ForElementType<unsigned_int> *)&(this_02->Elements).field_0x20;
                    FVar20 = (ForElementType<unsigned_int>)&(this_02->Elements).field_0x10;
                    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
                      FVar20 = FVar2;
                    }
                    uVar10 = uVar21;
                    if ((int)uVar21 < 0) {
                      uVar10 = uVar21 + 0x1f;
                    }
                    if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar10 >> 5) * 4) >>
                         (uVar21 & 0x1f) & 1) == 0) goto LAB_14b2b94f5;
                  }
                  FVar3 = (this_02->Hash).SecondaryData;
                  lVar22 = (longlong)(int)uVar21 * 0x38 + *(longlong *)&this_02->Elements;
                  FVar15 = (ForElementType<FSetElementId>)&this_02->Hash;
                  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                    FVar15 = FVar3;
                  }
                  puVar25 = (uint *)((longlong)FVar15 + (longlong)*(int *)(lVar22 + 0x34) * 4);
                  while( true ) {
                    uVar10 = *puVar25;
                    if ((uVar10 == 0xffffffff) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("NextElementIndex != INDEX_NONE",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                           ,0x2b5,L"Corrupt hash"), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (uVar10 == uVar21) break;
                    puVar25 = (uint *)(*(longlong *)&this_02->Elements + 0x30 +
                                      (longlong)(int)uVar10 * 0x38);
                  }
                  *puVar25 = *(uint *)(lVar22 + 0x30);
                  TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)this_02,uVar21,1);
                  pFVar19 = local_c0.Key;
                  this_02 = local_c0.Set;
                  local_c0.Index = local_c0.NextIndex;
                }
                uVar24 = local_res20;
                uVar21 = local_c0.Index;
                uVar10 = local_res18;
                if (local_c0.Index == 0xffffffff) goto LAB_14b2b961d;
                do {
                  puVar25 = (uint *)((longlong)(int)uVar21 * 0x38 + *(longlong *)&this_02->Elements)
                  ;
                  uVar8 = puVar25[0xc];
                  local_c0.NextIndex = uVar8;
                  if ((((puVar25[2] == (pFVar19->OperatorID).C &&
                        puVar25[3] == (pFVar19->OperatorID).D) &&
                       puVar25[1] == (pFVar19->OperatorID).B) && (pFVar19->OperatorID).A == *puVar25
                      ) && (bVar6 = Metasound::operator==
                                              ((FOperatorSettings *)(puVar25 + 4),
                                               &pFVar19->OperatorSettings), uVar24 = local_res20,
                           uVar10 = local_res18, bVar6)) break;
                  uVar21 = uVar8;
                  uVar24 = local_res20;
                  uVar10 = local_res18;
                } while (uVar8 != 0xffffffff);
                goto joined_r0x00014b2b9441;
              }
LAB_14b2b961d:
              uVar13 = local_d0._8_8_ & 0xffffffff;
              uVar16 = uVar5 & 0xffffffff;
              FVar23.Data = FVar23.Data + 0x10;
            }
            if ((FGuid *)local_d0.AllocatorInstance.Data != (FGuid *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
          }
          this_00 = (this->CacheStatTracker).Ptr;
          uVar24 = 0;
          if ((int)uVar10 < (this->Stack).ArrayNum) {
            uVar24 = ~uVar10 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          Engine::FOperatorCacheStatTracker::OnOperatorTrimmed
                    (this_00,(FOperatorPoolEntryID *)
                             ((this->Stack).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20));
        }
        local_res18 = uVar10 + 1;
        local_e8 = local_e8 + 1;
        local_e0 = local_e0 + 0x20;
      } while (local_e8 < local_a8);
    }
    uVar10 = 0;
    if ((int)uVar18 <= (this->Stack).ArrayNum) {
      uVar10 = ~uVar18 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    _Dst = (this->Stack).AllocatorInstance.Data;
    iVar9 = (this->Stack).ArrayNum - uVar18;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar18 * 0x20,(longlong)iVar9 << 5);
    }
    piVar1 = &(this->Stack).ArrayNum;
    *piVar1 = *piVar1 - uVar18;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&(this->Stack).AllocatorInstance,(this->Stack).ArrayNum,
               &(this->Stack).ArrayMax);
    __GTraceCounterMetaSound_OperatorPool_NumOperators.Value =
         __GTraceCounterMetaSound_OperatorPool_NumOperators.Value - (int)uVar18;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId == (atomic<unsigned_int>)0x0)
      {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId ==
            (atomic<unsigned_int>)0x0) {
          __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._2_2_ = 0;
          __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_,
                 __GTraceCounterMetaSound_OperatorPool_NumOperators.Value);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014b2b9841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// UpdateHitRateTracker @ 14b2ba6b0

void __thiscall Metasound::FOperatorPool::UpdateHitRateTracker(FOperatorPool *this)

{
  OperatorPoolPrivate::FWindowedHitRate::Update(&this->HitRateTracker);
  return;
}


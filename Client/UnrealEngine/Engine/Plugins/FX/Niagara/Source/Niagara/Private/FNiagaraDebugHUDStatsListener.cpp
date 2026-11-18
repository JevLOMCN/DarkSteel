// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// ~FNiagaraDebugHUDStatsListener @ 149279f80

void __thiscall
FNiagaraDebugHUDStatsListener::~FNiagaraDebugHUDStatsListener(FNiagaraDebugHUDStatsListener *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SystemStatsGuard);
  *(undefined4 *)&(this->SystemStats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemStats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemStats);
  pFVar2 = (this->GlobalStats).History.GPUFrames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GlobalStats).History.RTFrames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GlobalStats).History.GTFrames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  return;
}

// GetGlobalStats @ 1492a4190

FNiagaraDebugHUDPerfStats * __thiscall
FNiagaraDebugHUDStatsListener::GetGlobalStats(FNiagaraDebugHUDStatsListener *this)

{
  return &this->GlobalStats;
}

// GetSystemStats @ 1492a8120

TSharedPtr<FNiagaraDebugHUDPerfStats,1> * __thiscall
FNiagaraDebugHUDStatsListener::GetSystemStats
          (FNiagaraDebugHUDStatsListener *this,
          TSharedPtr<FNiagaraDebugHUDPerfStats,1> *__return_storage_ptr__,UFXSystemAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  lpCriticalSection = &this->SystemStatsGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  local_res20 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
                      *)&this->SystemStats,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_res20);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->SystemStats;
    puVar4 = (undefined8 *)(lVar3 + 8);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FNiagaraDebugHUDPerfStats *)*puVar4;
      pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1492a8202;
    }
  }
  __return_storage_ptr__->Object = (FNiagaraDebugHUDPerfStats *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_1492a8202:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// OnAddSystem @ 1492ae780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraDebugHUDStatsListener::OnAddSystem
          (FNiagaraDebugHUDStatsListener *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  longlong *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> **ppTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&> local_res8;
  TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *local_res18;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  
  FParticlePerfStatsListener_GatherAll::OnAddSystem
            ((FParticlePerfStatsListener_GatherAll *)this,param_1);
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->SystemStatsGuard;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      local_res18 = param_1;
      TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&>_>
                ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
                  *)&this->SystemStats,&local_res8,(bool *)&local_res18);
      ppTVar4 = (TReferenceControllerBase<1> **)
                (*(longlong *)&this->SystemStats + (longlong)(int)local_res8.Key * 0x20 + 8);
      FStack_30.ReferenceController = ::operator_new(0x90);
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_38 = ___xmm_00000000000000000000000000000010;
        pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
        FStack_30.ReferenceController = _UNK_150651568;
      }
      else {
        (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pTVar5 = FStack_30.ReferenceController + 1;
        (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        FStack_30.ReferenceController[1]._padding_ = 0;
        (FStack_30.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNiagaraDebugHUDPerfStats___00_SharedPointerInternals__6B_
        ;
        FStack_30.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[2]._padding_ = 0;
        FStack_30.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[3]._padding_ = 0;
        FStack_30.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[4]._padding_ = 0;
        FStack_30.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[5]._padding_ = 0;
        FStack_30.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[6]._padding_ = 0;
        FStack_30.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[7]._padding_ = 0;
        FStack_30.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
        FStack_30.ReferenceController[8]._padding_ = 0;
        if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        LOCK();
        (FStack_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar3 = FStack_30.ReferenceController;
        local_38 = pTVar5;
      }
      if (ppTVar4 != &local_38) {
        *ppTVar4 = pTVar5;
        local_38 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(ppTVar4 + 1),&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x0001492ae93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnRemoveSystem @ 1492ae9e0

void __thiscall
FNiagaraDebugHUDStatsListener::OnRemoveSystem
          (FNiagaraDebugHUDStatsListener *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  longlong *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *this_00;
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint *puVar9;
  FWeakObjectPtr local_res8;
  
  FParticlePerfStatsListener_GatherAll::OnRemoveSystem
            ((FParticlePerfStatsListener_GatherAll *)this,param_1);
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
LAB_1492aebc8:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = &this->SystemStatsGuard;
  if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_1492aebc8;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  local_res8 = param_1->WeakPtr;
  this_00 = &this->SystemStats;
  uVar6 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
                      *)this_00,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_res8);
  if (uVar6 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PairId.IsValidId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x556,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)&this_00->field_0x0;
  lVar8 = (longlong)(int)uVar6 * 0x20;
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar8 + 0x10 + lVar2);
  *(undefined8 *)(lVar8 + 0x10 + lVar2) = 0;
  *(undefined8 *)(lVar8 + 8 + lVar2) = 0;
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->SystemStats).field_0x28)) {
    puVar7 = *(undefined1 **)&(this->SystemStats).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SystemStats).field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_1492aeb04;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1492aeb04:
  puVar7 = *(undefined1 **)&(this->SystemStats).field_0x40;
  lVar8 = *(longlong *)&this_00->field_0x0 + lVar8;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &(this->SystemStats).field_0x38;
  }
  puVar9 = (uint *)(puVar7 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if (uVar1 == 0xffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar1 == uVar6) break;
    puVar9 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  *puVar9 = *(uint *)(lVar8 + 0x18);
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,uVar6,1);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00,uVar6,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x0001492aebc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Tick @ 1492b7150

bool __thiscall FNiagaraDebugHUDStatsListener::Tick(FNiagaraDebugHUDStatsListener *this)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *pTVar4;
  FWeakObjectPtr *this_00;
  uint uVar5;
  FWeakObjectPtr this_01;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  UObject *pUVar22;
  ulonglong uVar23;
  UFXSystemAsset *pUVar24;
  FAccumulatedParticlePerfStats *this_02;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  int iVar30;
  uint *puVar31;
  uint uVar32;
  ulonglong *puVar33;
  longlong lVar34;
  ForElementType<unsigned___int64> FVar35;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1c8;
  undefined4 uStack_18c;
  FWeakObjectPtr local_170;
  LPCRITICAL_SECTION local_168;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined4 local_b4;
  
  FParticlePerfStatsListener_GatherAll::Tick((FParticlePerfStatsListener_GatherAll *)this);
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_168 = (LPCRITICAL_SECTION)&this->SystemStatsGuard;
    if (local_168 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(local_168);
      iVar30 = NiagaraDebugLocal::Settings.PerfReportFrames;
      iVar21 = this->NumFrames;
      this->NumFrames = iVar21 + 1;
      bVar6 = iVar30 < iVar21;
      if (bVar6) {
        this->NumFrames = 0;
      }
      iVar21 = (int)this->_padding_;
      plVar1 = &this->_padding_;
      plVar2 = &this->_padding_;
      local_1c8 = 1;
      iVar27 = 0;
      iVar30 = 0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      uVar19 = 1;
      iVar20 = 0;
      if (iVar21 != 0) {
        plVar28 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar28 = plVar1;
        }
        uVar19 = (uint)*plVar28;
        while (uVar19 == 0) {
          lVar26 = (longlong)iVar27;
          iVar30 = iVar30 + 0x20;
          iVar27 = iVar27 + 1;
          uVar19 = 1;
          iVar20 = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_1492b72bf;
          uVar19 = *(uint *)((longlong)plVar28 + lVar26 * 4 + 4);
        }
        uVar19 = -uVar19 & uVar19;
        uVar23 = (ulonglong)uVar19 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar20 = iVar30 + -1 + (int)lVar26;
        if (iVar21 < iVar20) {
          iVar20 = iVar21;
        }
      }
LAB_1492b72bf:
      uVar32 = (uint)this->_padding_;
      TStack_128._padding_ = CONCAT44(uVar19,iVar27);
      uVar19 = uVar32 & 0xffffffe0;
      TStack_128.CurrentBitIndex = iVar20;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      iVar27 = (int)uVar32 >> 5;
      TStack_128._28_4_ = local_b4;
      TStack_128.BaseBitIndex = iVar30;
      uStack_108 = CONCAT44(uStack_18c,
                            (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
      local_130 = plVar2;
      TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar32 < 0) || (iVar21 < (int)uVar32)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      dVar15 = __real_412e848000000000;
      uVar5 = (uint)this->_padding_;
      if (uVar32 != uVar5) {
        plVar28 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar28 = plVar1;
        }
        uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)((longlong)plVar28 + (longlong)iVar27 * 4);
        while (uVar32 == 0) {
          lVar26 = (longlong)iVar27;
          uVar19 = uVar19 + 0x20;
          iVar27 = iVar27 + 1;
          uVar32 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_1492b7410;
          uVar32 = *(uint *)((longlong)plVar28 + lVar26 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar32 = (int)lVar26 + -1 + uVar19;
        if ((int)uVar5 < (int)uVar32) {
          uVar32 = uVar5;
        }
      }
LAB_1492b7410:
      while( true ) {
        plVar28 = local_130;
        if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_128.CurrentBitIndex == uVar32) &&
            (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (plVar28 == plVar2)) break;
        this_00 = (FWeakObjectPtr *)(*plVar28 + (longlong)TStack_128.CurrentBitIndex * 0x18);
        pUVar22 = FWeakObjectPtr::Get(this_00);
        if (pUVar22 != (UObject *)0x0) {
          this_01 = this_00[1];
          if ((this_01 == (FWeakObjectPtr)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stats",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                  ,0xddd,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (NiagaraDebugLocal::Settings.PerfSampleMode == FrameTotal) {
            if (*(int *)this_01 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (ulonglong)
                       (*(longlong *)((longlong)this_01 + 0xe8) +
                        *(longlong *)((longlong)this_01 + 0xd8) +
                       *(longlong *)((longlong)this_01 + 0xf8) +
                       *(longlong *)((longlong)this_01 + 0xe0) +
                       *(longlong *)((longlong)this_01 + 0xd0) +
                       *(longlong *)((longlong)this_01 + 0xf0)) / (ulonglong)*(uint *)this_01;
            }
            if ((longlong)uVar23 < 0) {
              puVar33 = (ulonglong *)((longlong)this_01 + 8);
              iVar21 = *(int *)((longlong)this_01 + 0x60);
              dVar12 = (double)uVar23;
            }
            else {
              iVar21 = *(int *)((longlong)this_01 + 0x60);
              puVar33 = (ulonglong *)((longlong)this_01 + 8);
              dVar12 = (double)(longlong)uVar23;
            }
          }
          else {
            if (*(longlong *)((longlong)this_01 + 200) == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (ulonglong)
                       (*(longlong *)((longlong)this_01 + 0xe8) +
                        *(longlong *)((longlong)this_01 + 0xd8) +
                       *(longlong *)((longlong)this_01 + 0xf8) +
                       *(longlong *)((longlong)this_01 + 0xe0) +
                       *(longlong *)((longlong)this_01 + 0xd0) +
                       *(longlong *)((longlong)this_01 + 0xf0)) /
                       *(ulonglong *)((longlong)this_01 + 200);
            }
            dVar12 = (double)uVar23;
            iVar21 = *(int *)((longlong)this_01 + 0xc0);
            puVar33 = (ulonglong *)((longlong)this_01 + 0x68);
          }
          dVar12 = dVar12 * FGenericPlatformTime::SecondsPerCycle64;
          if ((iVar21 < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if ((ulonglong *)puVar33[10] != (ulonglong *)0x0) {
            puVar33 = (ulonglong *)puVar33[10];
          }
          dVar11 = (double)*puVar33 * FGenericPlatformTime::SecondsPerCycle64;
          FAccumulatedParticlePerfStats::ResetGT((FAccumulatedParticlePerfStats *)this_01);
          dVar13 = dVar13 + (double)(float)(dVar12 * dVar15);
          dVar14 = dVar14 + (double)(float)(dVar11 * dVar15);
        }
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      FNiagaraDebugHudStatHistory::AddFrame_GT(&(this->GlobalStats).History,dVar13);
      if (bVar6) {
        (this->GlobalStats).Avg.Time_GT = dVar13;
        (this->GlobalStats).Max.Time_GT = dVar14;
      }
      puVar3 = &(this->SystemStats).field_0x10;
      iStack_158 = 0;
      iVar21 = *(int *)&(this->SystemStats).field_0x28;
      pTVar4 = &this->SystemStats;
      local_140 = 0;
      iStack_144 = 0;
      if (iVar21 != 0) {
        puVar31 = *(uint **)&(this->SystemStats).field_0x20;
        if (puVar31 == (uint *)0x0) {
          puVar31 = (uint *)puVar3;
        }
        uVar19 = *puVar31;
        while (uVar19 == 0) {
          lVar26 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_1492b7721;
          uVar19 = puVar31[lVar26 + 1];
        }
        local_1c8 = -uVar19 & uVar19;
        uVar23 = (ulonglong)local_1c8 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iStack_144 = local_140 + -1 + (int)lVar26;
        if (iVar21 < iStack_144) {
          iStack_144 = iVar21;
        }
      }
LAB_1492b7721:
      uStack_154 = local_1c8;
      iStack_138 = *(int *)&(this->SystemStats).field_0x8 - *(int *)&(this->SystemStats).field_0x34;
      uVar19 = *(uint *)&(this->SystemStats).field_0x28;
      uVar32 = uVar19 & 0xffffffe0;
      uStack_148 = 0xffffffff;
      TStack_f8._padding_ = CONCAT44(local_1c8,iStack_158);
      TStack_f8.CurrentBitIndex = iStack_144;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      iVar30 = (int)uVar19 >> 5;
      TStack_f8._28_4_ = iVar20;
      TStack_f8.BaseBitIndex = local_140;
      uStack_d8 = CONCAT44(uStack_134,iStack_138);
      local_160 = pTVar4;
      local_150 = puVar3;
      iStack_13c = iVar20;
      local_100 = pTVar4;
      TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if ((((int)uVar19 < 0) || (iVar21 < (int)uVar19)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      uVar5 = *(uint *)&(this->SystemStats).field_0x28;
      if (uVar19 != uVar5) {
        puVar29 = *(undefined1 **)&(this->SystemStats).field_0x20;
        if (puVar29 == (undefined1 *)0x0) {
          puVar29 = puVar3;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar30 * 4);
        while (uVar19 == 0) {
          lVar26 = (longlong)iVar30;
          uVar32 = uVar32 + 0x20;
          iVar30 = iVar30 + 1;
          uVar19 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_1492b7860;
          uVar19 = *(uint *)(puVar29 + lVar26 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar19 = (uVar32 - 1) + (int)lVar26;
        if ((int)uVar5 < (int)uVar19) {
          uVar19 = uVar5;
        }
      }
LAB_1492b7860:
      do {
        pTVar16 = local_100;
        if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_f8.CurrentBitIndex == uVar19) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
           (pTVar16 == pTVar4)) {
          LeaveCriticalSection(local_168);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
        lVar26 = *(longlong *)pTVar16;
        lVar34 = (longlong)TStack_f8.CurrentBitIndex * 0x20;
        local_170 = *(FWeakObjectPtr *)(lVar34 + lVar26);
        pUVar24 = (UFXSystemAsset *)FWeakObjectPtr::Get(&local_170);
        if ((pUVar24 != (UFXSystemAsset *)0x0) &&
           (this_02 = FParticlePerfStatsListener_GatherAll::GetStats
                                ((FParticlePerfStatsListener_GatherAll *)this,pUVar24),
           this_02 != (FAccumulatedParticlePerfStats *)0x0)) {
          if (NiagaraDebugLocal::Settings.PerfSampleMode == FrameTotal) {
            if ((this_02->GameThreadStats).NumFrames == 0) {
              dVar13 = 0.0;
LAB_1492b7987:
              uVar23 = 0;
            }
            else {
              uVar32 = (this_02->GameThreadStats).NumFrames;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (longlong)(this_02->GameThreadStats).AccumulatedStats.EndOfFrameCycles
                             + (longlong)
                               (this_02->GameThreadStats).AccumulatedStats.ActivationCycles +
                               (this_02->GameThreadStats).AccumulatedStats.WaitCycles +
                               (this_02->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
                               (this_02->GameThreadStats).AccumulatedStats.FinalizeCycles +
                             (longlong)
                             (this_02->GameThreadStats).AccumulatedStats.TickConcurrentCycles;
              auVar8 = auVar8 / ZEXT416(uVar32);
              uVar23 = auVar8._0_8_;
              if ((longlong)uVar23 < 0) {
                dVar13 = (double)(uVar23 >> 1 | (ulonglong)(auVar8._0_4_ & 1));
                dVar13 = dVar13 + dVar13;
              }
              else {
                dVar13 = (double)(longlong)uVar23;
              }
              dVar13 = dVar13 * FGenericPlatformTime::SecondsPerCycle64;
              if (uVar32 == 0) goto LAB_1492b7987;
              uVar23 = ((this_02->GameThreadStats).AccumulatedStats.WaitCycles +
                        (longlong)(this_02->GameThreadStats).AccumulatedStats.ActivationCycles +
                        (this_02->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
                       (this_02->GameThreadStats).AccumulatedStats.FinalizeCycles) /
                       (ulonglong)(this_02->GameThreadStats).NumFrames;
            }
            if ((longlong)uVar23 < 0) {
              FVar35 = (ForElementType<unsigned___int64>)
                       &(this_02->GameThreadStats).MaxPerFrameTotalCycles;
              iVar21 = (this_02->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum;
              dVar14 = (double)uVar23;
            }
            else {
              iVar21 = (this_02->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum;
              FVar35 = (ForElementType<unsigned___int64>)
                       &(this_02->GameThreadStats).MaxPerFrameTotalCycles;
              dVar14 = (double)(longlong)uVar23;
            }
          }
          else {
            if ((this_02->GameThreadStats).AccumulatedStats.NumInstances == 0) {
              dVar13 = 0.0;
LAB_1492b7a78:
              uVar23 = 0;
            }
            else {
              uVar23 = (this_02->GameThreadStats).AccumulatedStats.NumInstances;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar23;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (longlong)(this_02->GameThreadStats).AccumulatedStats.EndOfFrameCycles
                             + (this_02->GameThreadStats).AccumulatedStats.WaitCycles +
                               (this_02->GameThreadStats).AccumulatedStats.FinalizeCycles +
                               (this_02->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
                               (longlong)
                               (this_02->GameThreadStats).AccumulatedStats.ActivationCycles +
                             (longlong)
                             (this_02->GameThreadStats).AccumulatedStats.TickConcurrentCycles;
              uVar25 = SUB168(auVar9 / auVar7,0);
              if ((longlong)uVar25 < 0) {
                dVar13 = (double)(uVar25 >> 1 | (ulonglong)(SUB164(auVar9 / auVar7,0) & 1));
                dVar13 = dVar13 + dVar13;
              }
              else {
                dVar13 = (double)(longlong)uVar25;
              }
              dVar13 = dVar13 * FGenericPlatformTime::SecondsPerCycle64;
              if (uVar23 == 0) goto LAB_1492b7a78;
              uVar23 = ((this_02->GameThreadStats).AccumulatedStats.WaitCycles +
                        (this_02->GameThreadStats).AccumulatedStats.FinalizeCycles +
                        (this_02->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
                       (longlong)(this_02->GameThreadStats).AccumulatedStats.ActivationCycles) /
                       (this_02->GameThreadStats).AccumulatedStats.NumInstances;
            }
            dVar14 = (double)uVar23;
            iVar21 = (this_02->GameThreadStats).MaxPerInstanceCycles.ArrayNum;
            FVar35 = (ForElementType<unsigned___int64>)
                     &(this_02->GameThreadStats).MaxPerInstanceCycles;
          }
          dVar14 = dVar14 * FGenericPlatformTime::SecondsPerCycle64;
          if ((iVar21 < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (*(ForElementType<unsigned___int64> *)((longlong)FVar35 + 0x50) !=
              (ForElementType<unsigned___int64>)0x0) {
            FVar35 = *(ForElementType<unsigned___int64> *)((longlong)FVar35 + 0x50);
          }
          dVar12 = (double)*(ulonglong *)FVar35 * FGenericPlatformTime::SecondsPerCycle64;
          if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          FNiagaraDebugHudStatHistory::AddFrame_GT
                    ((FNiagaraDebugHudStatHistory *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x40),
                     (double)(float)(dVar13 * dVar15));
          if (bVar6) {
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            **(double **)(lVar34 + 8 + lVar26) = (double)(float)(dVar13 * dVar15);
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 8) = (double)(float)(dVar14 * dVar15);
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x20) =
                 (double)(float)(dVar12 * dVar15);
          }
          FAccumulatedParticlePerfStats::ResetGT(this_02);
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickRT @ 1492bbfc0

void __thiscall FNiagaraDebugHUDStatsListener::TickRT(FNiagaraDebugHUDStatsListener *this)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  FWeakObjectPtr *this_00;
  longlong *lpCriticalSection;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *pTVar6;
  int iVar7;
  FWeakObjectPtr this_01;
  ForElementType<unsigned___int64> FVar8;
  bool bVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *pTVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  UObject *pUVar22;
  ulonglong uVar23;
  UFXSystemAsset *pUVar24;
  FAccumulatedParticlePerfStats *this_02;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong *puVar27;
  int iVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  longlong lVar34;
  uint uVar35;
  ForElementType<unsigned___int64> FVar36;
  uint uVar37;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint uStack_1f4;
  uint uStack_1d4;
  undefined8 uStack_1c0;
  uint uStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_19c;
  undefined4 uStack_164;
  FWeakObjectPtr local_150;
  LPCRITICAL_SECTION local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  undefined4 local_c4;
  
  FParticlePerfStatsListener_GatherAll::TickRT((FParticlePerfStatsListener_GatherAll *)this);
  iVar31 = NiagaraDebugLocal::Settings.PerfReportFrames;
  iVar7 = this->NumFramesRT;
  this->NumFramesRT = iVar7 + 1;
  bVar9 = iVar31 < iVar7;
  if (bVar9) {
    this->NumFramesRT = 0;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_148 = (LPCRITICAL_SECTION)&this->SystemStatsGuard;
    if (local_148 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(local_148);
      iVar7 = (int)this->_padding_;
      plVar3 = &this->_padding_;
      iVar28 = 0;
      plVar4 = &this->_padding_;
      iVar31 = 0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar13 = 0.0;
      dVar16 = 0.0;
      uVar20 = 1;
      iVar21 = 0;
      if (iVar7 != 0) {
        plVar29 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar29 = plVar3;
        }
        uVar35 = (uint)*plVar29;
        while (uVar35 == 0) {
          lVar26 = (longlong)iVar28;
          iVar31 = iVar31 + 0x20;
          iVar28 = iVar28 + 1;
          iVar21 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_1492bc13f;
          uVar35 = *(uint *)((longlong)plVar29 + lVar26 * 4 + 4);
        }
        uVar20 = -uVar35 & uVar35;
        uVar23 = (ulonglong)uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar21 = (int)lVar26 + -1 + iVar31;
        if (iVar7 < iVar21) {
          iVar21 = iVar7;
        }
      }
LAB_1492bc13f:
      uStack_1f4 = (uint)this->_padding_;
      iVar32 = (int)uStack_1f4 >> 5;
      uVar35 = uStack_1f4 & 0xffffffe0;
      TStack_138._padding_ = CONCAT44(uVar20,iVar28);
      TStack_138.CurrentBitIndex = iVar21;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      TStack_138._28_4_ = local_c4;
      TStack_138.BaseBitIndex = iVar31;
      uStack_118 = CONCAT44(uStack_164,
                            (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
      local_140 = plVar4;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar3;
      if ((((int)uStack_1f4 < 0) || (iVar7 < (int)uStack_1f4)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      dVar17 = __real_412e848000000000;
      uVar20 = (uint)this->_padding_;
      if (uStack_1f4 != uVar20) {
        plVar29 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar29 = plVar3;
        }
        uVar37 = -1 << ((byte)uStack_1f4 & 0x1f) &
                 *(uint *)((longlong)plVar29 + (longlong)iVar32 * 4);
        while (uVar37 == 0) {
          uVar35 = uVar35 + 0x20;
          lVar26 = (longlong)iVar32;
          iVar32 = iVar32 + 1;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
          goto LAB_1492bc2a3;
          uVar37 = *(uint *)((longlong)plVar29 + lVar26 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uStack_1f4 = (int)lVar26 + -1 + uVar35;
        if ((int)uVar20 < (int)uStack_1f4) {
LAB_1492bc2a3:
          uStack_1f4 = uVar20;
        }
      }
      while( true ) {
        plVar29 = local_140;
        if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_138.CurrentBitIndex == uStack_1f4) &&
            (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar3)) &&
           (plVar29 == plVar4)) break;
        this_00 = (FWeakObjectPtr *)(*plVar29 + (longlong)TStack_138.CurrentBitIndex * 0x18);
        pUVar22 = FWeakObjectPtr::Get(this_00);
        if (pUVar22 != (UObject *)0x0) {
          this_01 = this_00[1];
          if ((this_01 == (FWeakObjectPtr)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stats",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                  ,0xe3e,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (NiagaraDebugLocal::Settings.PerfSampleMode == FrameTotal) {
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(uint *)((longlong)this_01 + 0x100) == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (ulonglong)
                       (*(longlong *)((longlong)this_01 + 0x118) +
                       *(longlong *)((longlong)this_01 + 0x110)) /
                       (ulonglong)*(uint *)((longlong)this_01 + 0x100);
            }
            dVar12 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((*(int *)((longlong)this_01 + 0x178) < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar27 = (ulonglong *)((longlong)this_01 + 0x120);
            if (*(ulonglong **)((longlong)this_01 + 0x170) != (ulonglong *)0x0) {
              puVar27 = *(ulonglong **)((longlong)this_01 + 0x170);
            }
            dVar11 = (double)*puVar27 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(uint *)((longlong)this_01 + 0x1e0) == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = *(ulonglong *)((longlong)this_01 + 0x1f0) /
                       (ulonglong)*(uint *)((longlong)this_01 + 0x1e0);
            }
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar7 = *(int *)((longlong)this_01 + 0x250);
            puVar27 = (ulonglong *)((longlong)this_01 + 0x1f8);
          }
          else {
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = 0;
            if (*(ulonglong *)((longlong)this_01 + 0x108) != 0) {
              uVar23 = (ulonglong)
                       (*(longlong *)((longlong)this_01 + 0x118) +
                       *(longlong *)((longlong)this_01 + 0x110)) /
                       *(ulonglong *)((longlong)this_01 + 0x108);
            }
            dVar12 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((*(int *)((longlong)this_01 + 0x1d8) < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar27 = (ulonglong *)((longlong)this_01 + 0x180);
            if (*(ulonglong **)((longlong)this_01 + 0x1d0) != (ulonglong *)0x0) {
              puVar27 = *(ulonglong **)((longlong)this_01 + 0x1d0);
            }
            dVar11 = (double)*puVar27 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(ulonglong *)((longlong)this_01 + 0x1e8) == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = *(ulonglong *)((longlong)this_01 + 0x1f0) /
                       *(ulonglong *)((longlong)this_01 + 0x1e8);
            }
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar7 = *(int *)((longlong)this_01 + 0x2b0);
            puVar27 = (ulonglong *)((longlong)this_01 + 600);
          }
          if ((iVar7 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((ulonglong *)puVar27[10] != (ulonglong *)0x0) {
            puVar27 = (ulonglong *)puVar27[10];
          }
          dVar16 = dVar16 + (double)*puVar27;
          FAccumulatedParticlePerfStats::ResetRT((FAccumulatedParticlePerfStats *)this_01);
          dVar14 = dVar14 + (double)(float)(dVar12 * dVar17);
          dVar15 = dVar15 + (double)(float)(dVar11 * dVar17);
          dVar13 = dVar13 + (double)uVar23;
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
      FNiagaraDebugHudStatHistory::AddFrame_RT(&(this->GlobalStats).History,dVar14);
      FNiagaraDebugHudStatHistory::AddFrame_GPU(&(this->GlobalStats).History,dVar13);
      if (bVar9) {
        (this->GlobalStats).Avg.Time_RT = dVar14;
        (this->GlobalStats).Max.Time_RT = dVar15;
        (this->GlobalStats).Avg.Time_GPU = dVar13;
        (this->GlobalStats).Max.Time_GPU = dVar16;
      }
      puVar5 = &(this->SystemStats).field_0x10;
      iVar7 = *(int *)&(this->SystemStats).field_0x28;
      pTVar6 = &this->SystemStats;
      iVar31 = 0;
      TStack_108.BaseBitIndex = 0;
      uVar20 = 1;
      TStack_108.CurrentBitIndex = 0;
      if (iVar7 != 0) {
        puVar33 = *(uint **)&(this->SystemStats).field_0x20;
        if (puVar33 == (uint *)0x0) {
          puVar33 = (uint *)puVar5;
        }
        uVar35 = *puVar33;
        while (uVar35 == 0) {
          lVar26 = (longlong)iVar31;
          TStack_108.BaseBitIndex = TStack_108.BaseBitIndex + 0x20;
          iVar31 = iVar31 + 1;
          TStack_108.CurrentBitIndex = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31) goto LAB_1492bc93f;
          uVar35 = puVar33[lVar26 + 1];
        }
        uVar20 = -uVar35 & uVar35;
        uVar23 = (ulonglong)uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        TStack_108.CurrentBitIndex = TStack_108.BaseBitIndex + -1 + (int)lVar26;
        if (iVar7 < TStack_108.CurrentBitIndex) {
          TStack_108.CurrentBitIndex = iVar7;
        }
      }
LAB_1492bc93f:
      uStack_1d4 = *(uint *)&(this->SystemStats).field_0x28;
      iVar28 = (int)uStack_1d4 >> 5;
      uVar35 = uStack_1d4 & 0xffffffe0;
      uStack_1c0 = CONCAT44(uVar20,iVar31);
      TStack_108._padding_ = uStack_1c0;
      uStack_e8 = CONCAT44(uStack_19c,
                           *(int *)&(this->SystemStats).field_0x8 -
                           *(int *)&(this->SystemStats).field_0x34);
      TStack_108.UnvisitedBitMask = 0xffffffff;
      TStack_108._28_4_ = iVar21;
      local_110 = pTVar6;
      TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
      if ((((int)uStack_1d4 < 0) || (iVar7 < (int)uStack_1d4)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar20 = *(uint *)&(this->SystemStats).field_0x28;
      if (uStack_1d4 != uVar20) {
        puVar30 = *(undefined1 **)&(this->SystemStats).field_0x20;
        if (puVar30 == (undefined1 *)0x0) {
          puVar30 = puVar5;
        }
        uVar37 = -1 << ((byte)uStack_1d4 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar28 * 4);
        while (uVar37 == 0) {
          uVar35 = uVar35 + 0x20;
          lVar26 = (longlong)iVar28;
          iVar28 = iVar28 + 1;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
          goto LAB_1492bcaa3;
          uVar37 = *(uint *)(puVar30 + lVar26 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uStack_1d4 = (uVar35 - 1) + (int)lVar26;
        if ((int)uVar20 < (int)uStack_1d4) {
LAB_1492bcaa3:
          uStack_1d4 = uVar20;
        }
      }
      do {
        pTVar18 = local_110;
        if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_108.CurrentBitIndex == uStack_1d4) &&
            (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) &&
           (pTVar18 == pTVar6)) {
          LeaveCriticalSection(local_148);
                    /* WARNING: Could not recover jumptable at 0x0001492bd1c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return;
        }
        lVar26 = *(longlong *)pTVar18;
        lVar34 = (longlong)TStack_108.CurrentBitIndex * 0x20;
        local_150 = *(FWeakObjectPtr *)(lVar34 + lVar26);
        pUVar24 = (UFXSystemAsset *)FWeakObjectPtr::Get(&local_150);
        if ((pUVar24 != (UFXSystemAsset *)0x0) &&
           (this_02 = FParticlePerfStatsListener_GatherAll::GetStats
                                ((FParticlePerfStatsListener_GatherAll *)this,pUVar24),
           this_02 != (FAccumulatedParticlePerfStats *)0x0)) {
          if (NiagaraDebugLocal::Settings.PerfSampleMode == FrameTotal) {
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = (this_02->RenderThreadStats).NumFrames;
            puVar1 = &(this_02->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles;
            puVar2 = &(this_02->RenderThreadStats).AccumulatedStats.RenderUpdateCycles;
            if (uVar20 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (*puVar1 + *puVar2) / (ulonglong)uVar20;
            }
            dVar13 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = (this_02->RenderThreadStats).NumFrames;
            if (uVar20 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (*puVar1 + *puVar2) / (ulonglong)uVar20;
            }
            dVar14 = (double)uVar23 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = (this_02->GPUStats).NumFrames;
            puVar1 = &(this_02->GPUStats).AccumulatedStats.TotalMicroseconds;
            if (uVar20 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = *puVar1 / (ulonglong)uVar20;
            }
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = (this_02->GPUStats).NumFrames;
            if (uVar20 == 0) {
              uVar25 = 0;
            }
            else {
              uVar25 = *puVar1 / (ulonglong)uVar20;
            }
          }
          else {
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = (this_02->RenderThreadStats).AccumulatedStats.NumInstances;
            uVar25 = 0;
            if (uVar23 != 0) {
              uVar25 = ((this_02->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
                       (this_02->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) / uVar23;
            }
            dVar13 = (double)uVar25 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884568>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0x98,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((this_02->RenderThreadStats).MaxPerInstanceCycles.ArrayNum < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar8 = (this_02->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.
                    SecondaryData;
            FVar36 = (ForElementType<unsigned___int64>)
                     &(this_02->RenderThreadStats).MaxPerInstanceCycles;
            if (FVar8 != (ForElementType<unsigned___int64>)0x0) {
              FVar36 = FVar8;
            }
            dVar14 = (double)*(ulonglong *)FVar36 * FGenericPlatformTime::SecondsPerCycle64;
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = (this_02->GPUStats).AccumulatedStats.NumInstances;
            if (uVar23 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (this_02->GPUStats).AccumulatedStats.TotalMicroseconds / uVar23;
            }
            bVar19 = IsInGameThread();
            if (((!bVar19) && (bVar19 = IsInRenderingThread(), !bVar19)) &&
               (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<392709136413884585>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                    ,0xa9,"IsInRenderingThread()"), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((this_02->GPUStats).MaxPerInstanceMicroseconds.ArrayNum < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar8 = (this_02->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
            FVar36 = (ForElementType<unsigned___int64>)
                     &(this_02->GPUStats).MaxPerInstanceMicroseconds;
            if (FVar8 != (ForElementType<unsigned___int64>)0x0) {
              FVar36 = FVar8;
            }
            uVar25 = *(ulonglong *)FVar36;
          }
          if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FNiagaraDebugHudStatHistory::AddFrame_RT
                    ((FNiagaraDebugHudStatHistory *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x40),
                     (double)(float)(dVar13 * dVar17));
          if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FNiagaraDebugHudStatHistory::AddFrame_GPU
                    ((FNiagaraDebugHudStatHistory *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x40),
                     (double)uVar23);
          if (bVar9) {
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x10) =
                 (double)(float)(dVar13 * dVar17);
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x30) =
                 (double)(float)(dVar14 * dVar17);
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x18) = (double)uVar23;
            if ((*(longlong *)(lVar34 + 8 + lVar26) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(double *)(*(longlong *)(lVar34 + 8 + lVar26) + 0x38) = (double)uVar25;
          }
          FAccumulatedParticlePerfStats::ResetRT(this_02);
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}


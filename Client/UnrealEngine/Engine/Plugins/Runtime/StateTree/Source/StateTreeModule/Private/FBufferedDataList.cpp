// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 12

// ~FBufferedDataList @ 14d4b34c0

void __thiscall UE::StateTreeTrace::FBufferedDataList::~FBufferedDataList(FBufferedDataList *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  BOOLEAN BVar6;
  
  if (this->BufferedEventsMapMTDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->AssetDebugIdMapMTDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->BufferedEventsMapLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BufferedEventsMapLock);
  }
  *(undefined4 *)&(this->BufferedEventsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BufferedEventsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BufferedEventsMap);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AssetDebugIdMapLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AssetDebugIdMapLock);
  }
  pFVar2 = (this->AssetDebugIdMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->TracedInstancesRWLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->TracedInstancesRWLock);
  }
  (this->TracedInstances).HashSize = 0;
  FVar3 = (this->TracedInstances).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FStateTreeInstanceDebugId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FStateTreeInstanceDebugId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TracedInstances).Elements);
  return;
}

// operator() @ 14d4b50e0

void __thiscall
`UE::StateTreeTrace::FBufferedDataList::UpdatePhaseScope_AnyThread'::__l2::<lambda_1>::operator()
          (void *this,FInstanceEventBufferedData *param_1)

{
  TArray<UE::StateTreeTrace::FPhaseTraceStatusPair,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  undefined4 *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 local_18;
  ushort local_14;
  undefined4 local_12 [2];
  
  pTVar1 = &param_1->PhaseStack;
  if (*(char *)((longlong)this + 9) == '\x05') {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)((longlong)this + 8));
    local_18 = CONCAT22(*(undefined2 *)((longlong)this + 10),(undefined2)local_18);
    local_14 = local_14 & 0xff00;
    if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar5 + (longlong)(param_1->PhaseStack).ArrayMax * 6)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (param_1->PhaseStack).ArrayNum;
    piVar2 = &(param_1->PhaseStack).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x206,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_1->PhaseStack).ArrayNum = iVar9 + 1;
    pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 6;
    *(undefined4 *)pFVar5 = local_18;
    *(ushort *)(pFVar5 + 4) = local_14;
    return;
  }
  if ((param_1->PhaseStack).ArrayNum == 0) {
    local_res8[0] = 0;
    bVar8 = ``UE::StateTreeTrace::FBufferedDataList::UpdatePhaseScope_AnyThread'::__l2::<lambda_1>::
            operator()'::__l2::<lambda_1>::operator()(local_res8);
    if (!bVar8) {
      return;
    }
  }
  if (((param_1->PhaseStack).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (param_1->PhaseStack).ArrayNum;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  uVar4 = *(undefined4 *)(pFVar5 + (longlong)iVar9 * 6 + -6);
  uVar3 = *(undefined2 *)(pFVar5 + (longlong)iVar9 * 6 + -2);
  (param_1->PhaseStack).ArrayNum = iVar9 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (6,2,&pTVar1->AllocatorInstance,iVar9 + -1,&(param_1->PhaseStack).ArrayMax);
  puVar6 = *(undefined4 **)this;
  if (local_12 != puVar6) {
    *puVar6 = uVar4;
    *(undefined2 *)(puVar6 + 1) = uVar3;
    *(undefined1 *)((longlong)puVar6 + 6) = 1;
  }
  return;
}

// FindOrAddDebugIdForAsset_AnyThread @ 14d4bc770

FStateTreeIndex16 __thiscall
UE::StateTreeTrace::FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread
          (FBufferedDataList *this,UStateTree *param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *this_00;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  code *pcVar5;
  bool bVar6;
  FStateTreeIndex16 FVar7;
  ushort uVar8;
  int iVar9;
  FStateTreeIndex16 FVar10;
  FScriptContainerElement *this_01;
  UStateTree *in_R8;
  undefined1 local_res18 [16];
  
  FVar7.Value = (ushort)param_1;
  if (in_R8 == (UStateTree *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4697239808458620504>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x1a8,"StateTree != nullptr");
    if (!bVar6) {
      *(undefined2 *)param_1 = 0xffff;
      return (FStateTreeIndex16)FVar7.Value;
    }
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (FStateTreeIndex16)uVar8;
  }
  SRWLock = &this->AssetDebugIdMapLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (FStateTreeIndex16)uVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  LOCK();
  pFVar2 = &this->AssetDebugIdMapMTDetector;
  FVar4 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 1);
  UNLOCK();
  if (((((uint)FVar4 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (FStateTreeIndex16)uVar8;
  }
  this_01 = (this->AssetDebugIdMap).AllocatorInstance.Data;
  pFVar3 = this_01 + (longlong)(this->AssetDebugIdMap).ArrayNum * 0xc;
  do {
    if (this_01 == pFVar3) {
LAB_14d4bc888:
      LOCK();
      pFVar2 = &this->AssetDebugIdMapMTDetector;
      FVar4 = *pFVar2;
      *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -1);
      UNLOCK();
      if (((((uint)FVar4 & 0xfff00000) != 0) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x67,
                             L"Another thread asked to have a write access during this read access")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (FStateTreeIndex16)uVar8;
      }
      if (SRWLock == (FPlatformRWLock *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (FStateTreeIndex16)uVar8;
        }
      }
      else {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      LOCK();
      pFVar2 = &this->AssetDebugIdMapMTDetector;
      FVar4 = *pFVar2;
      *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
      UNLOCK();
      if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x72,
                             L"Acquiring a write access while there are ongoing read or write access"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (FStateTreeIndex16)uVar8;
      }
      piVar1 = &(this->AssetDebugIdMap).ArrayMax;
      FVar10.Value = this->NextAssetDebugId + 1;
      this->NextAssetDebugId = FVar10.Value;
      iVar9 = (this->AssetDebugIdMap).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(this->AssetDebugIdMap).AllocatorInstance,piVar1);
      }
      (this->AssetDebugIdMap).ArrayNum = iVar9 + 1;
      this_00 = (FWeakObjectPtr *)
                ((this->AssetDebugIdMap).AllocatorInstance.Data + (longlong)iVar9 * 0xc);
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)in_R8);
      }
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)in_R8);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_res18);
      *(ushort *)&this_00[1].ObjectIndex = FVar10.Value;
      LOCK();
      pFVar2 = &this->AssetDebugIdMapMTDetector;
      FVar4 = *pFVar2;
      *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
      UNLOCK();
      if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                             ,0x7d,
                             L"Another thread asked to have a read or write access during this write access"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (FStateTreeIndex16)uVar8;
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      OutputAssetDebugIdEvent(in_R8,FVar10);
      *(ushort *)param_1 = FVar10.Value;
      return (FStateTreeIndex16)FVar7.Value;
    }
    bVar6 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals<UStateTree,bool>
                      ((TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)this_01,in_R8);
    if (bVar6) {
      if (this_01 != (FScriptContainerElement *)0x0) {
        *(undefined2 *)param_1 = *(undefined2 *)&this_01[8].field_0x0;
        LOCK();
        pFVar2 = &this->AssetDebugIdMapMTDetector;
        FVar4 = *pFVar2;
        *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -1);
        UNLOCK();
        if (((((uint)FVar4 & 0xfff00000) != 0) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0x67,
                               L"Another thread asked to have a write access during this read access"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (FStateTreeIndex16)uVar8;
        }
        if (SRWLock == (FPlatformRWLock *)0x0) {
          return (FStateTreeIndex16)FVar7.Value;
        }
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        return (FStateTreeIndex16)FVar7.Value;
      }
      goto LAB_14d4bc888;
    }
    this_01 = this_01 + 0xc;
  } while( true );
}

// Flush_AnyThread @ 14d4bcc40

void __thiscall
UE::StateTreeTrace::FBufferedDataList::Flush_AnyThread
          (FBufferedDataList *this,FStateTreeInstanceDebugId param_1)

{
  if ((param_1.Id != 0xffffffff) && (param_1.SerialNumber != 0xffffffff)) {
    TraceWorldTimeIfNeeded_AnyThread(this);
    TraceStackedPhases_AnyThread(this,param_1);
  }
  return;
}

// OnStoppingTraces_GameThread @ 14d4c7ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StateTreeTrace::FBufferedDataList::OnStoppingTraces_GameThread(FBufferedDataList *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  undefined1 *puVar2;
  TMap<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
  *pTVar3;
  ulonglong uVar4;
  FRWFallbackSafeAccessDetectorDefinition FVar5;
  int iVar6;
  atomic<double> aVar7;
  longlong lVar8;
  code *pcVar9;
  TMap<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FActiveStates local_f0;
  int local_d0;
  int local_cc;
  atomic<double> local_c8;
  TMap<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  atomic<double> *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                          ,0x199,
                          L"Expecting to only be called by the statetree delegate on the main thread after worker threads traced events."
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = 1;
  LOCK();
  pFVar1 = &this->BufferedEventsMapMTDetector;
  FVar5 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar5 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar2 = &(this->BufferedEventsMap).field_0x10;
  iStack_b8 = 0;
  iVar6 = *(int *)&(this->BufferedEventsMap).field_0x28;
  pTVar3 = &this->BufferedEventsMap;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar6 != 0) {
    puVar18 = *(uint **)&(this->BufferedEventsMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14d4c7cce;
      uVar16 = puVar18[lVar13 + 1];
    }
    uVar12 = -uVar16 & uVar16;
    uVar4 = (ulonglong)uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d0 = (int)lVar13;
    iStack_a4 = local_d0 + -1 + local_a0;
    if (iVar6 < iStack_a4) {
      iStack_a4 = iVar6;
    }
  }
LAB_14d4c7cce:
  uVar16 = *(uint *)&(this->BufferedEventsMap).field_0x28;
  uStack_9c = local_44;
  iStack_98 = *(int *)&(this->BufferedEventsMap).field_0x8 -
              *(int *)&(this->BufferedEventsMap).field_0x34;
  uStack_a8 = 0xffffffff;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar12,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar3;
  uStack_b4 = uVar12;
  local_b0 = puVar2;
  local_90 = pTVar3;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = *(uint *)&(this->BufferedEventsMap).field_0x28;
  if (uVar16 != uVar12) {
    puVar17 = *(undefined1 **)&(this->BufferedEventsMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d4c7dd0;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_cc = (int)lVar13;
    uVar16 = local_cc + -1 + uVar15;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_14d4c7dd0:
  while( true ) {
    pTVar10 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    lVar13 = (longlong)TStack_88.CurrentBitIndex;
    if (((TStack_88.CurrentBitIndex == uVar16) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar3))
    break;
    aVar7 = this->TracedRecordingWorldTime;
    lVar8 = *(longlong *)pTVar10;
    if (-1 < StateTreeDebugChannel->Enabled) {
      Trace::Private::FLogScope::Enter<FStateTreeDebuggerWorldTimestampEventFields>
                ((TLogScope<0> *)&local_40);
      *local_40 = aVar7;
      *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
      local_c8 = aVar7;
    }
    local_f0.StatesIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.StatesIndices.ArrayNum = 0;
    local_f0.StatesIndices.ArrayMax = 0;
    local_f0.AssetDebugIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.AssetDebugIds.ArrayNum = 0;
    local_f0.AssetDebugIds.ArrayMax = 0;
    FInstanceEventBufferedData::FActiveStates::Output
              (&local_f0,*(FStateTreeInstanceDebugId *)(lVar8 + 8 + lVar13 * 0x28));
    if (local_f0.AssetDebugIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AssetDebugIds.AllocatorInstance.Data);
    }
    if (local_f0.StatesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.StatesIndices.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  this->RecordingWorldTime = -1.0;
  LOCK();
  pFVar1 = &this->BufferedEventsMapMTDetector;
  FVar5 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar5 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x67,
                          L"Another thread asked to have a write access during this read access"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}

// OnTracesStarted_GameThread @ 14d4c7fb0

void __thiscall
UE::StateTreeTrace::FBufferedDataList::OnTracesStarted_GameThread(FBufferedDataList *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x18b,
                       L"Expecting to only be called by the statetree delegate on the main thread before worker threads trace events."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (__real_bff0000000000000 == this->RecordingWorldTime) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                         ,0x1f7,
                         L"Expecting to only be called by the world delegate on the main thread before worker threads trace events."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->RecordingWorldTime = 0.0;
    LOCK();
    this->TracedRecordingWorldTime = (atomic<double>)0xbff0000000000000;
    UNLOCK();
  }
  TraceWorldTimeIfNeeded_AnyThread(this);
  return;
}

// OutputActiveStates_AnyThread @ 14d4c8220

void __thiscall
UE::StateTreeTrace::FBufferedDataList::OutputActiveStates_AnyThread
          (FBufferedDataList *this,FStateTreeInstanceDebugId param_1,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_2)

{
  TArrayView<FStateTreeExecutionFrame_const_,int> local_38;
  FActiveStates local_28;
  
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FInstanceEventBufferedData::FActiveStates::FActiveStates(&local_28,this,&local_38);
  FInstanceEventBufferedData::FActiveStates::Output(&local_28,param_1);
  if (local_28.AssetDebugIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AssetDebugIds.AllocatorInstance.Data);
  }
  if (local_28.StatesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StatesIndices.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14d4ceb40

void __thiscall UE::StateTreeTrace::FBufferedDataList::Reset(FBufferedDataList *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TracedInstancesRWLock);
  bVar4 = 1 < (this->TracedInstances).HashSize;
  if (!bVar4) {
    TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->TracedInstances);
  }
  puVar1 = &(this->TracedInstances).Elements.field_0xc;
  *(undefined4 *)&(this->TracedInstances).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->TracedInstances,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TracedInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TracedInstances).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->TracedInstances).Elements.field_0x2c;
  *(undefined4 *)&(this->TracedInstances).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TracedInstances).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TracedInstances).Elements.field_0x10,
               0);
  }
  if (bVar4) {
    (this->TracedInstances).HashSize = 1;
    TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
    ::Rehash(&this->TracedInstances);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TracedInstancesRWLock);
  this->RecordingWorldTime = -1.0;
  piVar2 = &(this->AssetDebugIdMap).ArrayMax;
  LOCK();
  this->TracedRecordingWorldTime = (atomic<double>)0xbff0000000000000;
  UNLOCK();
  (this->AssetDebugIdMap).ArrayNum = 0;
  if (*piVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->AssetDebugIdMap).AllocatorInstance,0,piVar2);
  }
  TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
           *)&this->BufferedEventsMap);
  this->NextAssetDebugId = 1;
  return;
}

// SetWorldTime_GameThread @ 14d4d0820

void __thiscall
UE::StateTreeTrace::FBufferedDataList::SetWorldTime_GameThread
          (FBufferedDataList *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x1f7,
                       L"Expecting to only be called by the world delegate on the main thread before worker threads trace events."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RecordingWorldTime = param_1;
  LOCK();
  this->TracedRecordingWorldTime = (atomic<double>)0xbff0000000000000;
  UNLOCK();
  return;
}

// TraceStackedPhases_AnyThread @ 14d4d2880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StateTreeTrace::FBufferedDataList::TraceStackedPhases_AnyThread
          (FBufferedDataList *this,FStateTreeInstanceDebugId param_1)

{
  TArray<UE::StateTreeTrace::FPhaseTraceStatusPair,TSizedDefaultAllocator<32>_> *pTVar1;
  FPlatformRWLock *SRWLock;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FInstanceEventBufferedData *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FStateTreeInstanceDebugId local_res10;
  undefined1 auStackY_a8 [32];
  undefined1 local_68;
  undefined1 local_67 [7];
  ForAnyElementType local_60;
  undefined8 local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (-1 < StateTreeDebugChannel->Enabled) {
    SRWLock = &this->BufferedEventsMapLock;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    local_res10 = param_1;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    LOCK();
    pFVar2 = &this->BufferedEventsMapMTDetector;
    FVar3 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 1);
    UNLOCK();
    if (((((uint)FVar3 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x5c,L"Acquiring a read access while there is already a write access"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar9 = TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
             ::Find((TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
                     *)&this->BufferedEventsMap,&local_res10);
    if (pFVar9 != (FInstanceEventBufferedData *)0x0) {
      pTVar1 = &pFVar9->PhaseStack;
      if ((TArray<UE::StateTreeTrace::FPhaseTraceStatusPair,TSizedDefaultAllocator<32>_> *)&local_60
          != pTVar1) {
        iVar4 = (pFVar9->PhaseStack).ArrayNum;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        local_58 = CONCAT44(local_58._4_4_,iVar4);
        if (((iVar4 != 0) || (local_58._4_4_ != 0)) &&
           (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (6,2,iVar4,local_58._4_4_,&local_60,iVar4,(int *)((longlong)&local_58 + 4)),
           iVar4 != 0)) {
          memcpy(local_60.Data,pFVar5,(longlong)iVar4 * 6);
        }
      }
      iVar4 = (pFVar9->PhaseStack).ArrayNum;
      pFVar11 = (pTVar1->AllocatorInstance).Data;
      pFVar5 = pFVar11 + (longlong)iVar4 * 6;
      while( true ) {
        if ((pFVar9->PhaseStack).ArrayNum != iVar4) {
          local_68 = 0;
          `TCheckedPointerIterator<UE::StateTreeTrace::FPhaseTraceStatusPair,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_68);
        }
        if (pFVar11 == pFVar5) break;
        pFVar11[4] = (FScriptContainerElement)0x1;
        pFVar11 = pFVar11 + 6;
      }
    }
    LOCK();
    pFVar2 = &this->BufferedEventsMapMTDetector;
    FVar3 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -1);
    UNLOCK();
    if (((((uint)FVar3 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x67,
                           L"Another thread asked to have a write access during this read access"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    iVar4 = (int)local_58;
    uVar7 = local_res10.SerialNumber;
    pFVar5 = local_60.Data + (longlong)(int)local_58 * 6;
    FVar10.Data = local_60.Data;
    while( true ) {
      if ((int)local_58 != iVar4) {
        `TCheckedPointerIterator<UE::StateTreeTrace::FPhaseTraceStatusPair,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_67);
      }
      if (FVar10.Data == pFVar5) break;
      if ((FVar10.Data[4] == (FScriptContainerElement)0x0) && (-1 < StateTreeDebugChannel->Enabled))
      {
        Trace::Private::FLogScope::Enter<FStateTreeDebuggerPhaseEventFields>
                  ((TLogScope<0> *)&local_48);
        QueryPerformanceCounter(&local_50);
        *local_48 = local_50;
        local_48[1].s.LowPart = local_res10.Id;
        *(uint *)((longlong)local_48 + 0xc) = uVar7;
        *(FScriptContainerElement *)(local_48 + 2) = *FVar10.Data;
        *(undefined2 *)((longlong)local_48 + 0x11) = *(undefined2 *)(FVar10.Data + 2);
        *(undefined1 *)((longlong)local_48 + 0x13) = 5;
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
      FVar10.Data = FVar10.Data + 6;
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  return;
}

// TraceWorldTimeIfNeeded_AnyThread @ 14d4d2b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StateTreeTrace::FBufferedDataList::TraceWorldTimeIfNeeded_AnyThread(FBufferedDataList *this)

{
  code *pcVar1;
  bool bVar2;
  atomic<double> aVar3;
  undefined1 auStack_48 [40];
  double *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((__real_bff0000000000000 == this->RecordingWorldTime) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecordingWorldTime != UNINITIALIZED_WORLD_TIME",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                         ,0x153,
                         L"Expecting world time to always be set at the beginning of the frame before any worker thread attempts to trace."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  aVar3 = this->TracedRecordingWorldTime;
  if (aVar3 == (atomic<double>)0xbff0000000000000) {
    this->TracedRecordingWorldTime = (atomic<double>)this->RecordingWorldTime;
    aVar3 = (atomic<double>)0xbff0000000000000;
  }
  UNLOCK();
  if ((aVar3 == (atomic<double>)0xbff0000000000000) && (-1 < StateTreeDebugChannel->Enabled)) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerWorldTimestampEventFields>
              ((TLogScope<0> *)&local_20);
    *local_20 = this->RecordingWorldTime;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// UpdatePhaseScope_AnyThread @ 14d4d43e0

TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair> __thiscall
UE::StateTreeTrace::FBufferedDataList::UpdatePhaseScope_AnyThread
          (FBufferedDataList *this,FStateTreeInstanceDebugId param_1,EStateTreeUpdatePhase param_2,
          EStateTreeTraceEventType param_3,FStateTreeStateHandle param_4)

{
  FPlatformRWLock *SRWLock;
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair> TVar6;
  FInstanceEventBufferedData *pFVar7;
  undefined7 in_register_00000081;
  FStateTreeInstanceDebugId *local_res8;
  FStateTreeInstanceDebugId local_res18 [2];
  undefined2 in_stack_0000002a;
  FStateTreeInstanceDebugId local_28;
  EStateTreeTraceEventType local_20;
  undefined1 local_1f;
  
  iVar4 = _param_4;
  local_res18[0]._1_7_ = in_register_00000081;
  local_res18[0].Id._0_1_ = param_2;
  SRWLock = &this->BufferedEventsMapLock;
  local_1f = (undefined1)param_4.Index;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  _param_4 = iVar4;
  local_28 = param_1;
  local_20 = param_3;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
      return TVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  LOCK();
  pFVar1 = &this->BufferedEventsMapMTDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
      return TVar6;
    }
  }
  pFVar7 = TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
           ::Find((TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
                   *)&this->BufferedEventsMap,local_res18);
  if (pFVar7 == (FInstanceEventBufferedData *)0x0) {
    LOCK();
    pFVar1 = &this->BufferedEventsMapMTDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
    UNLOCK();
    if ((((uint)FVar2 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
        return TVar6;
      }
    }
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
        return TVar6;
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    LOCK();
    pFVar1 = &this->BufferedEventsMapMTDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
    UNLOCK();
    if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
        return TVar6;
      }
    }
    local_res8 = local_res18;
    TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FStateTreeInstanceDebugId_const_&>_>
              ((TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
                *)&this->BufferedEventsMap,
               (TKeyInitializer<FStateTreeInstanceDebugId_const_&> *)&param_4,(bool *)&local_res8);
    `UE::StateTreeTrace::FBufferedDataList::UpdatePhaseScope_AnyThread'::__l2::<lambda_1>::
    operator()(&local_28,
               (FInstanceEventBufferedData *)
               (*(longlong *)&this->BufferedEventsMap + ((longlong)_param_4 * 5 + 1) * 8));
    LOCK();
    pFVar1 = &this->BufferedEventsMapMTDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
    UNLOCK();
    if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
        return TVar6;
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  else {
    `UE::StateTreeTrace::FBufferedDataList::UpdatePhaseScope_AnyThread'::__l2::<lambda_1>::
    operator()(&local_28,pFVar7);
    LOCK();
    pFVar1 = &this->BufferedEventsMapMTDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
    UNLOCK();
    if ((((uint)FVar2 & 0xfff00000) != 0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)(*pcVar3)();
        return TVar6;
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)param_1;
    }
  }
  return (TOptional<UE::StateTreeTrace::FPhaseTraceStatusPair>)param_1;
}


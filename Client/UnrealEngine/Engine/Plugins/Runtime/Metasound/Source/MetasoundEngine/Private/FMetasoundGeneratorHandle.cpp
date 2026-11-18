// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 34

// FMetasoundGeneratorHandle @ 14b34a230

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundGeneratorHandle * __thiscall
Metasound::FMetasoundGeneratorHandle::FMetasoundGeneratorHandle
          (FMetasoundGeneratorHandle *this,FPrivateToken param_1,
          TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar4;
  ulong64 uVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnGeneratorSet = 0;
  *(undefined8 *)&(this->OnGeneratorSet).field_0x8 = 0;
  *(undefined4 *)&(this->OnGeneratorSet).field_0x10 = 0;
  *(undefined8 *)&this->OnGraphUpdated = 0;
  *(undefined8 *)&(this->OnGraphUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->OnGraphUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratorIOUpdated = 0;
  *(undefined8 *)&(this->OnGeneratorIOUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->OnGeneratorIOUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratorIOUpdatedWithChanges = 0;
  *(undefined8 *)&(this->OnGeneratorIOUpdatedWithChanges).field_0x8 = 0;
  *(undefined4 *)&(this->OnGeneratorIOUpdatedWithChanges).field_0x10 = 0;
  (this->AudioComponent).WeakPtr = param_2->WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->AudioComponent).WeakPtr);
    uVar5 = *(ulong64 *)&pUVar3[0x4e].field_0x18;
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  this->AudioComponentId = uVar5;
  (this->GeneratorCreatedDelegateHandle).ID = 0;
  (this->GeneratorDestroyedDelegateHandle).ID = 0;
  (this->GeneratorGraphSetDelegateHandle).ID = 0;
  (this->GeneratorVertexInterfaceChangedDelegateHandle).ID = 0;
  (this->GeneratorOutputChangedDelegateHandle).ID = 0;
  (this->Generator).Object = (FMetasoundGenerator *)0x0;
  (this->Generator).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LatestParameterState).Object = (FMetasoundParameterPackStorage *)0x0;
  (this->LatestParameterState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OutputWatchers = 0;
  *(undefined8 *)&(this->OutputWatchers).field_0x8 = 0;
  *(undefined8 *)&(this->OutputWatchers).field_0x20 = 0;
  *(undefined4 *)&(this->OutputWatchers).field_0x28 = 0;
  *(undefined4 *)&(this->OutputWatchers).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputWatchers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputWatchers).field_0x34 = 0;
  *(undefined8 *)&(this->OutputWatchers).field_0x40 = 0;
  *(undefined4 *)&(this->OutputWatchers).field_0x48 = 0;
  (this->ChangedOutputs).Tail =
       (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>)
       0x0;
  (this->ChangedOutputs).NumElems = (atomic<int>)0x0;
  aVar4 = (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
          )FMemory::Malloc(0x28,8);
  *(undefined8 *)aVar4 = 0;
  (this->ChangedOutputs).Tail = aVar4;
  (this->ChangedOutputs).TailCopy = (FNode *)aVar4;
  (this->ChangedOutputs).First = (FNode *)aVar4;
  (this->ChangedOutputs).Head = (FNode *)aVar4;
  LOCK();
  (this->ChangedOutputs).NumElems = (atomic<int>)0x0;
  UNLOCK();
  this->ChangedOutputsQueueCount = (atomic<int>)0x0;
  this->ChangedOutputsQueueShouldLogIfFull = (atomic<bool>)0x1;
  (this->OutputWatcherUpdateScheduled)._Storage = (atomic<long>)0x0;
  this->bRuntimeRenderTimingShouldBeEnabled = false;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::FMetasoundGeneratorHandle");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId28,"FMetasoundGeneratorHandle::FMetasoundGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId28);
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->AudioComponent).WeakPtr);
    if (((pUVar3[0x1e].field_0x19 & 8) != 0) && (2 < (byte)LogMetaSound._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FMetasoundGeneratorHandle @ 14b351a90

void __thiscall
Metasound::FMetasoundGeneratorHandle::~FMetasoundGeneratorHandle(FMetasoundGeneratorHandle *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FDelegateHandle FVar5;
  void *pvVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  UObject *pUVar11;
  FWeakObjectPtr local_res8;
  TWeakPtr<Metasound::FMetasoundGenerator,1> local_18;
  
  bVar10 = IsInGameThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                        ,0x5c,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  GetMetaSoundSource(this);
  bVar10 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar10) {
    pUVar11 = FWeakObjectPtr::Get(&local_res8);
    FVar5.ID = (this->GeneratorCreatedDelegateHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&pUVar11[0x2e].field_0x18,
                 FVar5);
    }
    pUVar11 = FWeakObjectPtr::Get(&local_res8);
    FVar5.ID = (this->GeneratorDestroyedDelegateHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&pUVar11[0x30].field_0x8,
                 FVar5);
    }
  }
  local_18.Object = (FMetasoundGenerator *)0x0;
  local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SetGenerator(this,&local_18);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::
  ~TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>(&this->ChangedOutputs);
  *(undefined4 *)&(this->OutputWatchers).field_0x48 = 0;
  pvVar6 = *(void **)&(this->OutputWatchers).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputWatchers);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestParameterState).SharedReferenceCount.ReferenceController);
  pTVar7 = (this->Generator).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorIOUpdatedWithChanges);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorIOUpdated);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGraphUpdated);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorSet);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 14b35b1f0

void __thiscall
`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>::
operator()(void *this)

{
  FMetasoundGeneratorHandle *this_00;
  atomic<int> aVar1;
  char cVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  FReadAccessScope local_28;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b35b237;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    this_00 = *(FMetasoundGeneratorHandle **)this;
    if (this_00 != (FMetasoundGeneratorHandle *)0x0) {
      Metasound::FMetasoundGeneratorHandle::SendParametersToGenerator(this_00);
      Metasound::FMetasoundGeneratorHandle::FixUpOutputWatchers(this_00);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->OnGeneratorIOUpdated,&local_28);
      plVar6 = (longlong *)0x0;
      if (((*(int *)&(this_00->OnGeneratorIOUpdated).field_0x10 != 0) &&
          (plVar4 = *(longlong **)&(this_00->OnGeneratorIOUpdated).field_0x8,
          plVar4 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this_00->OnGeneratorIOUpdated,&local_28);
        plVar4 = plVar6;
        if (*(int *)&(this_00->OnGeneratorIOUpdated).field_0x10 != 0) {
          plVar4 = *(longlong **)&(this_00->OnGeneratorIOUpdated).field_0x8;
        }
        (**(code **)(*plVar4 + 0x60))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->OnGeneratorIOUpdatedWithChanges,&local_28);
      if (((*(int *)&(this_00->OnGeneratorIOUpdatedWithChanges).field_0x10 != 0) &&
          (plVar4 = *(longlong **)&(this_00->OnGeneratorIOUpdatedWithChanges).field_0x8,
          plVar4 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this_00->OnGeneratorIOUpdatedWithChanges,&local_28);
        if (*(int *)&(this_00->OnGeneratorIOUpdatedWithChanges).field_0x10 != 0) {
          plVar6 = *(longlong **)&(this_00->OnGeneratorIOUpdatedWithChanges).field_0x8;
        }
        (**(code **)(*plVar6 + 0x60))(plVar6,(longlong)this + 0x10);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
LAB_14b35b237:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Create @ 14b36a820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> * __cdecl
Metasound::FMetasoundGeneratorHandle::Create
          (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *__return_storage_ptr__,
          TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  ulong64 uVar6;
  FMetasoundGenerator *pFVar7;
  code *pcVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar11;
  UObject *pUVar12;
  ulong64 *puVar13;
  FDelegateHandle FVar14;
  ulong64 *puVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  TReferenceControllerBase<1> *pTVar16;
  FWeakReferencer<1> FVar17;
  FMetasoundGeneratorHandle *pFVar18;
  FMetasoundGeneratorHandle *this;
  FPrivateToken local_res18;
  FName local_res20;
  FMetasoundGeneratorHandle *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  UObject *local_60;
  TWeakPtr<Metasound::FMetasoundGenerator,1> local_58;
  TSharedRef<Metasound::FMetasoundGeneratorHandle,1> local_48;
  
  pTVar10 = ::operator_new(0x168);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FMetasoundGeneratorHandle *)&DAT_00000010;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar16 = _UNK_150651568;
    this = ___xmm_00000000000000000000000000000010;
LAB_14b36a904:
    local_a8 = this;
    pTStack_a0 = pTVar16;
    if (((pFVar18->_padding_ == 0) || (*(longlong *)&pFVar18->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar18->_padding_ + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar18->_padding_ = (longlong)pFVar18;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar18->_padding_) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar18->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar18->_padding_ = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetasoundGeneratorHandle_Metasound___00_SharedPointerInternals__6B_
    ;
    FMetasoundGeneratorHandle((FMetasoundGeneratorHandle *)(pTVar10 + 1),local_res18,param_1);
    pFVar18 = (FMetasoundGeneratorHandle *)(pTVar10 + 1);
    pTVar16 = pTVar10;
    this = pFVar18;
    if (pFVar18 != (FMetasoundGeneratorHandle *)0x0) goto LAB_14b36a904;
    local_a8 = pFVar18;
    pTStack_a0 = pTVar10;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar8)();
      return pTVar11;
    }
  }
  bVar9 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar9) {
    GetMetaSoundSource(this);
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res18);
    if (bVar9) {
      uVar6 = this->AudioComponentId;
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
      local_60 = pUVar12;
      if ((uVar6 == 0xffffffffffffffff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComponentId != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                             ,0x680,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar8)();
        return pTVar11;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(pUVar12 + 0x35);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      puVar13 = *(ulong64 **)(local_60 + 0x36);
      puVar15 = puVar13 + (longlong)*(int *)&local_60[0x36].field_0x8 * 4;
      for (; puVar13 != puVar15; puVar13 = puVar13 + 4) {
        if (*puVar13 == uVar6) {
          FVar17.ReferenceController = (TReferenceControllerBase<1> *)puVar13[3];
          pFVar7 = (FMetasoundGenerator *)puVar13[2];
          if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar17.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          local_58.Object = pFVar7;
          local_58.WeakReferenceCount.ReferenceController = FVar17.ReferenceController;
          LeaveCriticalSection(lpCriticalSection);
          if (((pFVar7 != (FMetasoundGenerator *)0x0) &&
              (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)(FVar17.ReferenceController)->SharedReferenceCount)) {
            SetGenerator(this,&local_58);
            FVar17.ReferenceController = local_58.WeakReferenceCount.ReferenceController;
          }
          goto LAB_14b36ab9f;
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      FVar17.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14b36ab9f:
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
      FVar14 = TMulticastDelegateRegistration<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
               ::AddSP<Metasound::FMetasoundGeneratorHandle,1>
                         ((TMulticastDelegateRegistration<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
                           *)&pUVar12[0x31].field_0x20,&local_48,(pmf_8a6c2547)&local_a8);
                    /* WARNING: Load size is inaccurate */
      (this->GeneratorCreatedDelegateHandle).ID = *FVar14.ID;
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
      FVar14 = TMulticastDelegateRegistration<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
               ::AddSP<Metasound::FMetasoundGeneratorHandle,1>
                         ((TMulticastDelegateRegistration<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
                           *)&pUVar12[0x33].field_0x10,
                          (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)
                          &local_48.SharedReferenceCount,(pmf_8a6c2547)&local_a8);
                    /* WARNING: Load size is inaccurate */
      (this->GeneratorDestroyedDelegateHandle).ID = *FVar14.ID;
      __return_storage_ptr__->Object = this;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar16;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(FVar17.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((FVar17.ReferenceController)->_padding_ + 8))(FVar17.ReferenceController,1);
        }
      }
      goto LAB_14b36aae6;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      bVar9 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
      if (bVar9) {
        bVar9 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AudioComponent.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                               ,0xda,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar8)();
          return pTVar11;
        }
        pUVar12 = FWeakObjectPtr::Get(&(this->AudioComponent).WeakPtr);
        if (*(longlong *)&pUVar12[4].field_0x8 == 0) {
          ::FString::FString(&local_88,L"None");
        }
        else {
          local_res20 = *(FName *)(*(longlong *)&pUVar12[4].field_0x8 + 0x18);
          ::FName::ToString(&local_res20,&local_88);
        }
        pUVar12 = FWeakObjectPtr::Get(&(this->AudioComponent).WeakPtr);
        if (pUVar12 == (UObject *)0x0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          local_68.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
          local_68.Number = *(uint *)&pUVar12->field_0x1c;
          ::FName::ToString(&local_68,&local_98);
        }
        ::FString::PrintfImpl(&local_78,L"%s [Id:%d] with owner %s");
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::PrintfImpl(&local_78,L"Invalid Handle");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  __return_storage_ptr__->Object = (FMetasoundGeneratorHandle *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14b36aae6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return __return_storage_ptr__;
}

// CreateOutputWatcher @ 14b388db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::FMetasoundGeneratorHandle::CreateOutputWatcher
          (FMetasoundGeneratorHandle *this,FAnalyzerAddress *param_1,
          FWatchOutputUnifiedDelegate *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FOutputWatcher *pFVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  ELLMTagSet local_res10 [8];
  FName local_res20;
  FMemScope local_e8;
  FOutputWatcherKey local_e0;
  FOutputWatcherKey *local_c8;
  undefined ***local_c0;
  undefined **local_b8;
  ulong64 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  undefined1 local_68;
  undefined1 local_60 [8];
  void *pvStack_58;
  undefined8 local_50;
  FMRSWRecursiveAccessDetector local_48;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_40;
  int local_38;
  undefined8 uStack_30;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_e8,&local_res20,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::CreateOutputWatcher");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId557,"FMetasoundGeneratorHandle::CreateOutputWatcher",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x22d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x22f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e0.OutputName = param_1->OutputName;
  local_e0.AnalyzerName = param_1->AnalyzerName;
  local_e0.AnalyzerMemberName = param_1->AnalyzerMemberName;
  pFVar4 = TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
           ::Find((TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
                   *)&this->OutputWatchers,&local_e0);
  if (pFVar4 == (FOutputWatcher *)0x0) {
    local_a8._0_4_ = (param_1->NodeID).A;
    local_a8._4_4_ = (param_1->NodeID).B;
    uStack_a0._0_4_ = (param_1->NodeID).C;
    uStack_a0._4_4_ = (param_1->NodeID).D;
    local_b8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_b0 = param_1->InstanceID;
    local_98 = param_1->OutputName;
    local_90 = param_1->DataType;
    local_88 = param_1->AnalyzerName;
    local_70 = param_1->AnalyzerMemberName;
    local_68 = param_1->UseDataTransmissionCenter;
    local_80._0_4_ = (param_1->AnalyzerInstanceID).A;
    local_80._4_4_ = (param_1->AnalyzerInstanceID).B;
    uStack_78._0_4_ = (param_1->AnalyzerInstanceID).C;
    uStack_78._4_4_ = (param_1->AnalyzerInstanceID).D;
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    pvStack_58 = (void *)0x0;
    local_48.State = (atomic<unsigned___int64>)0x0;
    pTStack_40 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    _local_38 = ___xmm_00000000000000020000000000000000;
    uStack_30 = _UNK_150631d48;
    FWatchOutputUnifiedMulticastDelegate::Add
              ((FWatchOutputUnifiedMulticastDelegate *)local_60,param_2);
    local_c8 = &local_e0;
    local_c0 = &local_b8;
    TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey_const_&,Metasound::FMetasoundGeneratorHandle::FOutputWatcher_&&>_>
              ((TSet<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>,FDefaultSetAllocator>
                *)&this->OutputWatchers,
               (TPairInitializer<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey_const_&,Metasound::FMetasoundGeneratorHandle::FOutputWatcher_&&>
                *)&local_res8[2].TagSet,(bool *)&local_c8);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_40,local_38);
    if (pTStack_40 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(pTStack_40);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48);
    if (pvStack_58 != (void *)0x0) {
      FMemory::Free(pvStack_58);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
  }
  else {
    FWatchOutputUnifiedMulticastDelegate::Add(&pFVar4->OnOutputValueChanged,param_2);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// EnableRuntimeRenderTiming @ 14b398a40

void __thiscall
Metasound::FMetasoundGeneratorHandle::EnableRuntimeRenderTiming
          (FMetasoundGeneratorHandle *this,bool param_1)

{
  FMetasoundGenerator *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  this->bRuntimeRenderTimingShouldBeEnabled = param_1;
  pTVar4 = (this->Generator).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b398a70;
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
    pFVar1 = (this->Generator).Object;
    if (pFVar1 != (FMetasoundGenerator *)0x0) {
      pFVar1->field_0x250 =
           (this->bRuntimeRenderTimingShouldBeEnabled << 6 ^ pFVar1->field_0x250) & 0x40U ^
           pFVar1->field_0x250;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_14b398a70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// FixUpOutputWatchers @ 14b3a9950

void __thiscall
Metasound::FMetasoundGeneratorHandle::FixUpOutputWatchers(FMetasoundGeneratorHandle *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FMetasoundGenerator *this_00;
  bool bVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TMap<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
  *pTVar7;
  bool bVar8;
  atomic<int> aVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  uint *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  uint local_res20;
  FName local_114;
  TMap<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
  *local_108;
  FMemScope local_100;
  TMap<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80 [2];
  undefined4 local_4c;
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_114 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_100,&local_114,true);
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::FixUpOutputWatchers");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId524,"FMetasoundGeneratorHandle::FixUpOutputWatchers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x20c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId524);
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x20e,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar8 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar8) {
    pTVar15 = (this->Generator).WeakReferenceCount.ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar15->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b3a9a97;
        }
        LOCK();
        aVar9 = pTVar15->SharedReferenceCount;
        bVar8 = aVar6 == aVar9;
        if (bVar8) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar9 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar9;
      } while (!bVar8);
      this_00 = (this->Generator).Object;
      if (this_00 != (FMetasoundGenerator *)0x0) {
        iStack_f0 = 0;
        iVar2 = *(int *)&(this->OutputWatchers).field_0x28;
        local_108 = &this->OutputWatchers;
        uStack_ec = 1;
        local_d8 = 0;
        iStack_dc = 0;
        if (iVar2 != 0) {
          puVar14 = *(uint **)&(this->OutputWatchers).field_0x20;
          if (puVar14 == (uint *)0x0) {
            puVar14 = (uint *)&(this->OutputWatchers).field_0x10;
          }
          uVar16 = *puVar14;
          while (uVar16 == 0) {
            lVar10 = (longlong)iStack_f0;
            local_d8 = local_d8 + 0x20;
            iStack_f0 = iStack_f0 + 1;
            iStack_dc = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
            goto LAB_14b3a9bb8;
            uVar16 = puVar14[lVar10 + 1];
          }
          uStack_ec = -uVar16 & uVar16;
          uVar1 = (ulonglong)uStack_ec * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iStack_dc = local_d8 + -1 + (int)lVar10;
          if (iVar2 < iStack_dc) {
            iStack_dc = iVar2;
          }
        }
LAB_14b3a9bb8:
        local_e8 = &(this->OutputWatchers).field_0x10;
        uStack_d4 = local_4c;
        iStack_d0 = *(int *)&(this->OutputWatchers).field_0x8 -
                    *(int *)&(this->OutputWatchers).field_0x34;
        uVar16 = *(uint *)&(this->OutputWatchers).field_0x28;
        uStack_e0 = 0xffffffff;
        TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
        uVar17 = uVar16 & 0xffffffe0;
        TStack_c0.CurrentBitIndex = iStack_dc;
        TStack_c0.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar16 >> 5;
        TStack_c0._28_4_ = local_4c;
        TStack_c0.BaseBitIndex = local_d8;
        uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
        local_res20 = uVar16;
        local_f8 = local_108;
        local_c8 = local_108;
        TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
        if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(uint *)&(this->OutputWatchers).field_0x28;
        if (uVar16 != uVar3) {
          puVar13 = *(undefined1 **)&(this->OutputWatchers).field_0x20;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &(this->OutputWatchers).field_0x10;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
          while (uVar16 == 0) {
            lVar10 = (longlong)iVar11;
            uVar17 = uVar17 + 0x20;
            iVar11 = iVar11 + 1;
            uVar16 = uVar3;
            local_res20 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_14b3a9ce1;
            uVar16 = *(uint *)(puVar13 + lVar10 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar16 = (int)lVar10 + -1 + uVar17;
          local_res20 = uVar16;
          if ((int)uVar3 < (int)uVar16) {
            uVar16 = uVar3;
            local_res20 = uVar3;
          }
        }
LAB_14b3a9ce1:
        while( true ) {
          pTVar7 = local_c8;
          if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
            `TSparseArray<TSparseSetElement<TTuple<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_c0.CurrentBitIndex == uVar16) &&
              (TStack_c0.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputWatchers).field_0x10)) &&
             (pTVar7 == local_108)) break;
          lVar10 = (longlong)TStack_c0.CurrentBitIndex * 0xb0 + *(longlong *)pTVar7;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x70),
                     local_80);
          iVar2 = *(int *)(lVar10 + 0x80);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_80);
          if (iVar2 < 1) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x88),
                       &local_98);
            iVar2 = *(int *)(lVar10 + 0x98);
            plVar12 = *(longlong **)(lVar10 + 0x90);
            plVar18 = plVar12 + (longlong)iVar2 * 2;
            while( true ) {
              if (*(int *)(lVar10 + 0x98) != iVar2) {
                `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if (plVar12 == plVar18) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_98);
                FMetasoundGenerator::RemoveOutputVertexAnalyzer
                          (this_00,(FAnalyzerAddress *)(lVar10 + 0x18));
                goto LAB_14b3a9db0;
              }
              if (((int)plVar12[1] != 0) && (*plVar12 != 0)) break;
              plVar12 = plVar12 + 2;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_98);
          }
          FMetasoundGenerator::AddOutputVertexAnalyzer(this_00,(FAnalyzerAddress *)(lVar10 + 0x18));
LAB_14b3a9db0:
          TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
          uVar16 = local_res20;
        }
      }
    }
LAB_14b3a9a97:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// GetAudioComponentId @ 14b3ad4f0

ulong64 __thiscall
Metasound::FMetasoundGeneratorHandle::GetAudioComponentId(FMetasoundGeneratorHandle *this)

{
  return this->AudioComponentId;
}

// GetCPUCoreUtilization @ 14b3ae400

double __thiscall
Metasound::FMetasoundGeneratorHandle::GetCPUCoreUtilization(FMetasoundGeneratorHandle *this)

{
  FMetasoundGenerator *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  double dVar5;
  
  pTVar3 = (this->Generator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3ae430;
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
    this_00 = (this->Generator).Object;
    if (this_00 != (FMetasoundGenerator *)0x0) {
      dVar5 = FMetasoundGenerator::GetCPUCoreUtilization(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return dVar5;
    }
  }
LAB_14b3ae430:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return 0.0;
}

// GetGenerator @ 14b3b4440

TSharedPtr<Metasound::FMetasoundGenerator,1> * __thiscall
Metasound::FMetasoundGeneratorHandle::GetGenerator
          (FMetasoundGeneratorHandle *this,
          TSharedPtr<Metasound::FMetasoundGenerator,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FMetasoundGenerator *)0x0;
  pTVar1 = (this->Generator).WeakReferenceCount.ReferenceController;
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
    __return_storage_ptr__->Object = (this->Generator).Object;
  }
  return __return_storage_ptr__;
}

// GetMetaSoundSource @ 14b3b6b20

TWeakObjectPtr<UMetaSoundSource,FWeakObjectPtr> __thiscall
Metasound::FMetasoundGeneratorHandle::GetMetaSoundSource(FMetasoundGeneratorHandle *this)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TWeakObjectPtr<UMetaSoundSource,FWeakObjectPtr> TVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr in_RDX;
  FObjectPtr_u_0 FVar8;
  bool bVar9;
  FLLMScope local_res8 [5];
  FName local_res18;
  undefined8 local_res20;
  UObject *local_38;
  FMemScope local_30;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_30,&local_res18,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::GetMetaSoundSource");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId329,"FMetasoundGeneratorHandle::GetMetaSoundSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x149);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId329);
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x14b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
    return (TWeakObjectPtr<UMetaSoundSource,FWeakObjectPtr>)TVar5.WeakPtr;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (!bVar4) {
    FVar8.Handle = (UObject *)&local_res20;
    *(undefined8 *)in_RDX = 0;
    local_res20 = 0;
    goto LAB_14b3b6cb9;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->AudioComponent).WeakPtr);
  pUVar6 = (UObject *)(**(code **)(*(longlong *)&pUVar6[0xe].field_0x20 + 0xa0))();
  if (pUVar6 == (UObject *)0x0) {
LAB_14b3b6c7d:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = UMetaSoundSource::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14b3b6c7d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(undefined8 *)in_RDX = 0;
  local_38 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FVar8.Handle = (UObject *)&local_38;
LAB_14b3b6cb9:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)FVar8);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res8);
  return (TWeakObjectPtr<UMetaSoundSource,FWeakObjectPtr>)in_RDX;
}

// HandleGeneratorCreated @ 14b3c2e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated
          (FMetasoundGeneratorHandle *this,FGeneratorInstanceInfo *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMetasoundGenerator *pFVar6;
  bool bVar7;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar8;
  FTSTicker *this_00;
  code **ppcVar9;
  bool bVar10;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98 [2];
  TWeakPtr<FTSTicker::FElement,1> local_90;
  FMemScope local_80;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FLLMScope::FLLMScope
            (local_98,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_90.Object = (FElement *)LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_80,(FName *)&local_90,true);
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::HandleGeneratorCreated");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId606,"FMetasoundGeneratorHandle::HandleGeneratorCreated",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x25e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId606);
  }
  if (param_1->AudioComponentID == this->AudioComponentId) {
    this->CurrentGeneratorInstanceID = param_1->InstanceID;
    pTVar8 = TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsWeak
                       ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,&local_78);
    pFVar3 = pTVar8->Object;
    pTVar4 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (FMetasoundGeneratorHandle *)0x0;
    pTVar5 = (param_1->Generator).WeakReferenceCount.ReferenceController;
    pFVar6 = (param_1->Generator).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x28,8);
    local_40[1] = (code *)pFVar3;
    local_40[2] = (code *)pTVar4;
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::`5'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_40[3] = (code *)pFVar6;
    local_40[4] = (code *)pTVar5;
    if (local_40 != (code **)&DAT_fffffffffffffff8) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_00,&local_90,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp(613)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
    if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_90.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_68[0] != (code *)0x0) {
      ppcVar9 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar9 = local_40;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_98);
  return;
}

// HandleGeneratorDestroyed @ 14b3c30b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed
          (FMetasoundGeneratorHandle *this,FGeneratorInstanceInfo *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMetasoundGeneratorHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar6;
  FTSTicker *this_00;
  undefined ***pppuVar7;
  bool bVar8;
  undefined1 auStackY_a8 [32];
  FLLMScope local_78 [2];
  TWeakPtr<FTSTicker::FElement,1> local_70;
  FMemScope local_60;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  FMetasoundGeneratorHandle *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FLLMScope::FLLMScope
            (local_78,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_70.Object = (FElement *)LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_60,(FName *)&local_70,true);
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::HandleGeneratorDestroyed");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId626,"FMetasoundGeneratorHandle::HandleGeneratorDestroyed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x272);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId626);
  }
  if ((param_1->AudioComponentID == this->AudioComponentId) &&
     (param_1->InstanceID == this->CurrentGeneratorInstanceID)) {
    pTVar6 = TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsWeak
                       ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,&local_58);
    pFVar3 = pTVar6->Object;
    pTVar4 = (pTVar6->WeakReferenceCount).ReferenceController;
    (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6->Object = (FMetasoundGeneratorHandle *)0x0;
    this_00 = FTSTicker::GetCoreTicker();
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::`5'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
    local_30 = pFVar3;
    local_28 = pTVar4;
    FTSTicker::AddTicker
              (this_00,&local_70,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp(631)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
    if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_70.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar7 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar7 = local_20;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_78);
  return;
}

// HandleGeneratorGraphSet @ 14b3c32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet(FMetasoundGeneratorHandle *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMetasoundGeneratorHandle *pFVar4;
  bool bVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FMetasoundGeneratorHandle *pFVar8;
  FTSTicker *this_00;
  undefined ***pppuVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_b8 [32];
  FLLMScope local_88;
  FName local_84;
  FMemScope local_78;
  TWeakPtr<FTSTicker::FElement,1> local_70;
  code *local_58 [2];
  undefined **local_48;
  FMetasoundGeneratorHandle *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FLLMScope::FLLMScope
            (&local_88,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_84 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_78,&local_84,true);
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::HandleGeneratorGraphSet");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId644,"FMetasoundGeneratorHandle::HandleGeneratorGraphSet",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x284);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId644);
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar4 = (FMetasoundGeneratorHandle *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14b3c3412;
      }
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar11 = aVar2 == aVar7;
      if (bVar11) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar11);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar8 = pFVar4;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FMetasoundGeneratorHandle *)0x0;
  }
  if (pFVar8 != this) {
LAB_14b3c3412:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6c3,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                ::Call;
  local_40 = pFVar4;
  local_38 = pTVar3;
  FTSTicker::AddTicker
            (this_00,&local_70,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp(647)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_70.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar9 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar9 = local_30;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(&local_88);
  return;
}

// HandleGeneratorVertexInterfaceChanged @ 14b3c3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged
          (FMetasoundGeneratorHandle *this,
          TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType *pFVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMetasoundGeneratorHandle *pFVar7;
  FScriptContainerElement *_Src;
  bool bVar8;
  code *pcVar9;
  ForAnyElementType FVar10;
  atomic<int> aVar11;
  FMetasoundGeneratorHandle *pFVar12;
  FTSTicker *this_00;
  code **ppcVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_118 [32];
  FLLMScope local_d8 [2];
  FMetasoundGeneratorHandle *local_d0;
  TReferenceControllerBase<1> *local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FMetasoundGeneratorHandle *local_b0;
  TReferenceControllerBase<1> *local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  FName local_90;
  FMemScope local_88;
  TWeakPtr<FTSTicker::FElement,1> local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FLLMScope::FLLMScope
            (local_d8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_90 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_88,&local_90,true);
  bVar8 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar8) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId665,
               "FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x299);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId665);
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar7 = (FMetasoundGeneratorHandle *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14b3c3680;
      }
      LOCK();
      aVar11 = pTVar6->SharedReferenceCount;
      bVar16 = aVar4 == aVar11;
      if (bVar16) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar11 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar11;
    } while (!bVar16);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar12 = pFVar7;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar12 = (FMetasoundGeneratorHandle *)0x0;
  }
  if (pFVar12 != this) {
LAB_14b3c3680:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6c3,L"");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_98 = param_1->ArrayNum;
  lVar14 = (longlong)local_98;
  local_a0.Data = (FScriptContainerElement *)0x0;
  _Src = (param_1->AllocatorInstance).Data;
  if (local_98 == 0) {
    local_94 = 0;
    local_b0 = pFVar7;
    local_a8 = pTVar6;
  }
  else {
    local_b0 = pFVar7;
    local_a8 = pTVar6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_98,0,&local_a0,local_98,&local_94);
    memcpy(local_a0.Data,_Src,lVar14 * 0xc);
  }
  this_00 = FTSTicker::GetCoreTicker();
  FVar10.Data = local_a0.Data;
  lVar14 = (longlong)local_98;
  local_d0 = local_b0;
  local_c8 = local_a8;
  local_a8 = (TReferenceControllerBase<1> *)0x0;
  local_b0 = (FMetasoundGeneratorHandle *)0x0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = local_98;
  if (local_98 == 0) {
    local_b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_98,0,&local_c0,local_98,&local_b4);
    memcpy(local_c0.Data,FVar10.Data,lVar14 * 0xc);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  FVar10.Data = local_c0.Data;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar13 = local_40 + 1;
  pFVar1 = (ForAnyElementType *)(local_40 + 3);
  *ppcVar13 = (code *)local_d0;
  local_40[2] = (code *)local_c8;
  local_c8 = (TReferenceControllerBase<1> *)0x0;
  local_d0 = (FMetasoundGeneratorHandle *)0x0;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  lVar14 = (longlong)local_b8;
  *(int *)(local_40 + 4) = local_b8;
  if (local_b8 == 0) {
    *(int *)((longlong)local_40 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_b8,0,pFVar1,local_b8,(int *)((longlong)local_40 + 0x24));
    memcpy(pFVar1->Data,FVar10.Data,lVar14 * 0xc);
  }
  if (ppcVar13 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker
            (this_00,&local_80,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp(668)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
  if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_80.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_68[0] != (code *)0x0) {
    ppcVar13 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar13 = local_40;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)local_c8 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(local_c8->_padding_ + 8))(local_c8,1);
    }
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)local_a8 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(local_a8->_padding_ + 8))(local_a8,1);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_d8);
  return;
}

// HandleOutputChanged @ 14b3c3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundGeneratorHandle::HandleOutputChanged
          (FMetasoundGeneratorHandle *this,FName param_1,FName param_2,FName param_3,
          TSharedPtr<Metasound::IOutputStorage,1> *param_4)

{
  TTypeCompatibleBytes<Metasound::FMetasoundGeneratorHandle::FOutputPayload> *pTVar1;
  atomic<int> *paVar2;
  atomic<long> aVar3;
  atomic<int> aVar4;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar5;
  IOutputStorage *pIVar6;
  undefined8 *puVar7;
  FMetasoundGeneratorHandle *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uchar *puVar11;
  int iVar12;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar13;
  undefined8 *puVar14;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar15;
  FTSTicker *this_00;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStackY_e8 [32];
  FLLMScope local_b4;
  TReferenceControllerBase<1> *local_b0;
  FName local_a8;
  undefined8 *local_a0;
  FMemScope local_98;
  TWeakPtr<FTSTicker::FElement,1> local_90;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> local_80;
  code *local_68 [2];
  undefined **local_58;
  FMetasoundGeneratorHandle *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FLLMScope::FLLMScope
            (&local_b4,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_a8 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_98,&local_a8,true);
  iVar12 = GCycleStatsShouldEmitNamedEvents;
  bVar10 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar10) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::HandleOutputChanged");
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId697,"FMetasoundGeneratorHandle::HandleOutputChanged",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x2b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId697);
  }
  if (0x3ff < (int)this->ChangedOutputsQueueCount) {
    if (this->ChangedOutputsQueueShouldLogIfFull != (atomic<bool>)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      LOCK();
      this->ChangedOutputsQueueShouldLogIfFull = (atomic<bool>)0x0;
      UNLOCK();
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (0 < iVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    goto LAB_14b3c3cdd;
  }
  aVar13 = (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
            )(this->ChangedOutputs).First;
  if (aVar13 == (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
                 )(this->ChangedOutputs).TailCopy) {
    aVar5 = (this->ChangedOutputs).Tail;
    aVar13 = (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
              )(this->ChangedOutputs).First;
    (this->ChangedOutputs).TailCopy = (FNode *)aVar5;
    if (aVar13 != aVar5) goto LAB_14b3c3ad7;
    aVar13 = (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
              )FMemory::Malloc(0x28,8);
    pTVar1 = (TTypeCompatibleBytes<Metasound::FMetasoundGeneratorHandle::FOutputPayload> *)
             ((longlong)aVar13 + 8);
    pTVar1->Pad[0] = '\0';
    pTVar1->Pad[1] = '\0';
    pTVar1->Pad[2] = '\0';
    pTVar1->Pad[3] = '\0';
    pTVar1->Pad[4] = '\0';
    pTVar1->Pad[5] = '\0';
    pTVar1->Pad[6] = '\0';
    pTVar1->Pad[7] = '\0';
    puVar11 = (uchar *)((longlong)aVar13 + 0x10);
    puVar11[0] = '\0';
    puVar11[1] = '\0';
    puVar11[2] = '\0';
    puVar11[3] = '\0';
    puVar11[4] = '\0';
    puVar11[5] = '\0';
    puVar11[6] = '\0';
    puVar11[7] = '\0';
    puVar11 = (uchar *)((longlong)aVar13 + 0x18);
    puVar11[0] = '\0';
    puVar11[1] = '\0';
    puVar11[2] = '\0';
    puVar11[3] = '\0';
    puVar11[4] = '\0';
    puVar11[5] = '\0';
    puVar11[6] = '\0';
    puVar11[7] = '\0';
    puVar11 = (uchar *)((longlong)aVar13 + 0x20);
    puVar11[0] = '\0';
    puVar11[1] = '\0';
    puVar11[2] = '\0';
    puVar11[3] = '\0';
    puVar11[4] = '\0';
    puVar11[5] = '\0';
    puVar11[6] = '\0';
    puVar11[7] = '\0';
    *(undefined8 *)aVar13 = 0;
  }
  else {
LAB_14b3c3ad7:
    (this->ChangedOutputs).First = *(FNode **)aVar13;
    *(undefined8 *)aVar13 = 0;
  }
  local_b0 = (param_4->SharedReferenceCount).ReferenceController;
  pIVar6 = param_4->Object;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FName *)((longlong)aVar13 + 0x10) = param_2;
  puVar11 = (uchar *)((longlong)aVar13 + 0x20);
  *(FName *)((TTypeCompatibleBytes<Metasound::FMetasoundGeneratorHandle::FOutputPayload> *)
            ((longlong)aVar13 + 8))->Pad = param_1;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  *(FName *)((longlong)aVar13 + 0x18) = param_3;
  if (pIVar6 != (IOutputStorage *)0x0) {
    puVar14 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,&local_a0);
    if (puVar11 != (uchar *)puVar14) {
      puVar7 = *(undefined8 **)puVar11;
      *(undefined8 *)puVar11 = *puVar14;
      *puVar14 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  ((this->ChangedOutputs).Head)->Next = aVar13;
  (this->ChangedOutputs).Head = (FNode *)aVar13;
  LOCK();
  paVar2 = &(this->ChangedOutputs).NumElems;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  LOCK();
  this->ChangedOutputsQueueCount = (atomic<int>)((int)this->ChangedOutputsQueueCount + 1);
  UNLOCK();
  LOCK();
  aVar3 = (this->OutputWatcherUpdateScheduled)._Storage;
  (this->OutputWatcherUpdateScheduled)._Storage = (atomic<long>)0x1;
  UNLOCK();
  if (aVar3 == (atomic<long>)0x0) {
    pTVar15 = TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsWeak
                        ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,&local_80);
    pFVar8 = pTVar15->Object;
    pTVar9 = (pTVar15->WeakReferenceCount).ReferenceController;
    (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar15->Object = (FMetasoundGeneratorHandle *)0x0;
    this_00 = FTSTicker::GetCoreTicker();
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::`29'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::__l29::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
    local_50 = pFVar8;
    local_48 = pTVar9;
    FTSTicker::AddTicker
              (this_00,&local_90,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp(718)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
    if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_90.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar16 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar16 = local_40;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
LAB_14b3c3cdd:
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(&local_b4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// IsValid @ 14b3c8f50

bool __thiscall Metasound::FMetasoundGeneratorHandle::IsValid(FMetasoundGeneratorHandle *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  return bVar1;
}

// RegisterGeneratorEvents @ 14b3d1530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FMetasoundGeneratorHandle::RegisterGeneratorEvents(FMetasoundGeneratorHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMetasoundGenerator *this_00;
  FMetasoundGeneratorHandle *pFVar2;
  bool bVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  pmf_93cef49d pVar9;
  FDelegateHandle FVar10;
  TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  pmf_330099e8 pVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  undefined1 auStackY_f8 [32];
  FLLMScope local_c8;
  uint local_c4;
  FName local_c0;
  FMemScope local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  TReferenceControllerBase<1> *local_90;
  TSharedRef<Metasound::FMetasoundGeneratorHandle,1> local_88;
  TSharedRef<Metasound::FMetasoundGeneratorHandle,1> local_78;
  _RTL_CRITICAL_SECTION local_68;
  FDelegateAllocation local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c4 = 0;
  FLLMScope::FLLMScope
            (&local_c8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_c0 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_b8,&local_c0,true);
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::RegisterGeneratorEvents");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId286,"FMetasoundGeneratorHandle::RegisterGeneratorEvents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x11e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId286);
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x120,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = (this->Generator).WeakReferenceCount.ReferenceController;
  pTVar15 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar1->SharedReferenceCount;
    do {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14b3d1667;
      LOCK();
      aVar7 = pTVar1->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    this_00 = (this->Generator).Object;
    pTVar15 = pTVar1;
    if (this_00 != (FMetasoundGenerator *)0x0) {
      pVar9 = (pmf_93cef49d)
              TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsShared
                        ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,
                         (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)(local_a0 + 8));
      FVar10 = TMulticastDelegateRegistration<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
               ::AddSP<Metasound::FMetasoundGeneratorHandle,1>
                         ((TMulticastDelegateRegistration<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>
                           *)&this_00->OnOutputChanged,
                          (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)local_b0,pVar9);
                    /* WARNING: Load size is inaccurate */
      (this->GeneratorOutputChangedDelegateHandle).ID = *FVar10.ID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      InitializeCriticalSectionAndSpinCount(&local_68,4000);
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      pTVar11 = TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsShared
                          ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,&local_88
                          );
      EnterCriticalSection(&local_68);
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_40);
      uVar8 = local_c4;
      if (puVar12 != (undefined8 *)0x0) {
        local_c0 = (FName)pTVar11->Object;
        pFVar2 = (FMetasoundGeneratorHandle *)(pTVar11->SharedReferenceCount).ReferenceController;
        if (pFVar2 != (FMetasoundGeneratorHandle *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->_padding_ + 1);
          UNLOCK();
        }
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VFMetasoundGeneratorHandle_Metasound___00__A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar12 + 3) = local_c0;
        puVar12[4] = pFVar2;
        if (pFVar2 != (FMetasoundGeneratorHandle *)0x0) {
          LOCK();
          ((atomic<int> *)&pFVar2->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pFVar2->_padding_)[1] + 1);
          UNLOCK();
        }
        puVar12[5] = HandleGeneratorGraphSet;
        local_b0._0_8_ = pFVar2;
        uVar8 = 1;
      }
      if ((uVar8 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_b0._0_8_);
      }
      LeaveCriticalSection(&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      FVar10 = FMetasoundGenerator::AddGraphSetCallback
                         (this_00,(TDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                                  (local_b0 + 8));
                    /* WARNING: Load size is inaccurate */
      (this->GeneratorGraphSetDelegateHandle).ID = *FVar10.ID;
      EnterCriticalSection(&local_68);
      if ((local_40.DelegateSize != 0) &&
         (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_40,0,0,0x10);
        local_40.DelegateSize = 0;
      }
      LeaveCriticalSection(&local_68);
      if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_40.DelegateAllocator);
      }
      DeleteCriticalSection(&local_68);
      pVar14 = (pmf_330099e8)
               TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsShared
                         ((TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *)this,&local_78)
      ;
      FVar10 = TMulticastDelegateRegistration<void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
               ::AddSP<Metasound::FMetasoundGeneratorHandle,1>
                         ((TMulticastDelegateRegistration<void___cdecl(TArray<Metasound::FVertexInterfaceChange,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
                           *)&this_00->OnVertexInterfaceDataUpdatedWithChanges,
                          (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)local_a0,pVar14);
                    /* WARNING: Load size is inaccurate */
      (this->GeneratorVertexInterfaceChangedDelegateHandle).ID = *FVar10.ID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14b3d1667:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(&local_c8);
  return;
}

// RegisterPassthroughAnalyzerForType @ 14b3d2230

void __cdecl
Metasound::FMetasoundGeneratorHandle::RegisterPassthroughAnalyzerForType
          (FName param_1,FName param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FName local_res8 [2];
  FName local_28;
  FName local_20;
  FName *local_18;
  FName *local_10;
  
  local_res8[0] = param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (PassthroughAnalyzers._8_4_ != PassthroughAnalyzers._52_4_) {
    lVar5 = 0x154cc5ff8;
    if (PassthroughAnalyzers._64_8_ != 0) {
      lVar5 = PassthroughAnalyzers._64_8_;
    }
    for (iVar1 = *(int *)(lVar5 + (ulonglong)
                                  (PassthroughAnalyzers._72_4_ - 1 & param_1.Number + uVar4) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + PassthroughAnalyzers._0_8_)) {
      if (*(FName *)((longlong)iVar1 * 0x20 + PassthroughAnalyzers._0_8_) == param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PassthroughAnalyzers.Contains(TypeName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                           ,0xbb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
    }
  }
  local_18 = local_res8;
  local_10 = &local_28;
  local_28 = param_2;
  local_20 = param_3;
  TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>_>
            ((TSet<TTuple<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>,FDefaultSetAllocator>
              *)&PassthroughAnalyzers,
             (TPairInitializer<FName_const_&,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo_&&>
              *)(local_res8 + 1),(bool *)&local_18);
  return;
}

// RemoveOutputWatcher @ 14b3d5290

void __thiscall
Metasound::FMetasoundGeneratorHandle::RemoveOutputWatcher
          (FMetasoundGeneratorHandle *this,FAnalyzerAddress *param_1,
          FWatchOutputUnifiedDelegate *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  FOutputWatcher *pFVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  FOutputWatcherKey local_48;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::RemoveOutputWatcher");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId585,"FMetasoundGeneratorHandle::RemoveOutputWatcher",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x249);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId585);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x24b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48.OutputName = param_1->OutputName;
  local_48.AnalyzerName = param_1->AnalyzerName;
  local_48.AnalyzerMemberName = param_1->AnalyzerMemberName;
  pFVar4 = TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
           ::Find((TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
                   *)&this->OutputWatchers,&local_48);
  if (pFVar4 != (FOutputWatcher *)0x0) {
    FWatchOutputUnifiedMulticastDelegate::Remove(&pFVar4->OnOutputValueChanged,param_2);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SendParametersToGenerator @ 14b3ded40

void __thiscall
Metasound::FMetasoundGeneratorHandle::SendParametersToGenerator(FMetasoundGeneratorHandle *this)

{
  FMetasoundGenerator *this_00;
  bool bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  TSharedPtr<FMetasoundParameterPackStorage,1> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::SendParametersToGenerator");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId344,"FMetasoundGeneratorHandle::SendParametersToGenerator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x158);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId344);
  }
  if ((this->LatestParameterState).Object != (FMetasoundParameterPackStorage *)0x0) {
    pTVar4 = (this->Generator).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b3dee30;
        }
        LOCK();
        aVar3 = pTVar4->SharedReferenceCount;
        bVar6 = aVar2 == aVar3;
        if (bVar6) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar6);
      this_00 = (this->Generator).Object;
      if (this_00 != (FMetasoundGenerator *)0x0) {
        local_28.Object = (this->LatestParameterState).Object;
        local_28.SharedReferenceCount.ReferenceController =
             (this->LatestParameterState).SharedReferenceCount.ReferenceController;
        if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMetasoundGenerator::QueueParameterPack(this_00,&local_28);
      }
    }
LAB_14b3dee30:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetGenerator @ 14b3df9f0

void __thiscall
Metasound::FMetasoundGeneratorHandle::SetGenerator
          (FMetasoundGeneratorHandle *this,TWeakPtr<Metasound::FMetasoundGenerator,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FMetasoundGenerator *pFVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  atomic<int> aVar10;
  uint uVar11;
  FMetasoundGenerator *pFVar12;
  FMetasoundGenerator *pFVar13;
  FMetasoundGenerator *pFVar14;
  bool bVar15;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  FMetasoundGenerator *local_98;
  TReferenceControllerBase<1> *local_90;
  TWeakPtr<Metasound::FMetasoundGenerator,1> local_88;
  undefined8 local_78 [2];
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FMetasoundGeneratorHandle::SetGenerator");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId225,"FMetasoundGeneratorHandle::SetGenerator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0xe1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId225);
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0xe3,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((((this->Generator).Object == (FMetasoundGenerator *)0x0) ||
       (pTVar3 = (this->Generator).WeakReferenceCount.ReferenceController,
       pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) &&
     (((param_1->Object == (FMetasoundGenerator *)0x0 ||
       (pTVar3 = (param_1->WeakReferenceCount).ReferenceController,
       pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1))))
  {
    pFVar12 = (this->Generator).Object;
    uVar11 = ((uint)((ulonglong)pFVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar12 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if ((uVar11 >> 0x10 != uVar11) &&
       (bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorSet),
       bVar8)) {
      local_88.Object = param_1->Object;
      local_88.WeakReferenceCount.ReferenceController =
           (param_1->WeakReferenceCount).ReferenceController;
      if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TWeakPtr<Metasound::FMetasoundGenerator,1>_&&),FDefaultDelegateUserPolicy>
      ::Execute(&this->OnGeneratorSet,&local_88);
      if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_88.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    if (&this->Generator != (TWeakPtr<Metasound::FMetasoundGenerator,1> *)local_78) {
      pTVar3 = (this->Generator).WeakReferenceCount.ReferenceController;
      (this->Generator).Object = (FMetasoundGenerator *)0x0;
      (this->Generator).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
  }
  else {
    pFVar12 = (FMetasoundGenerator *)(this->Generator).WeakReferenceCount.ReferenceController;
    pFVar14 = (FMetasoundGenerator *)0x0;
    pFVar13 = pFVar12;
    if (pFVar12 != (FMetasoundGenerator *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar12->_padding_;
      do {
        pFVar13 = pFVar14;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14b3dfb76;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar12->_padding_;
        bVar8 = aVar2 == aVar10;
        if (bVar8) {
          *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar10;
      } while (!bVar8);
      pFVar5 = (this->Generator).Object;
      pFVar13 = pFVar12;
      if (pFVar5 != (FMetasoundGenerator *)0x0) {
        pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
        pFVar13 = pFVar14;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = pTVar3->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_14b3dfc75;
            }
            LOCK();
            aVar10 = pTVar3->SharedReferenceCount;
            bVar8 = aVar2 == aVar10;
            if (bVar8) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar10 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar10;
          } while (!bVar8);
          pFVar13 = param_1->Object;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (pFVar13 == pFVar5) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar12);
          goto LAB_14b3dfe21;
        }
LAB_14b3dfc75:
        UnregisterGeneratorEvents(this);
        pFVar13 = pFVar12;
      }
    }
LAB_14b3dfb76:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (&this->Generator != param_1) {
      (this->Generator).Object = param_1->Object;
      param_1->Object = (FMetasoundGenerator *)0x0;
      pTVar3 = (this->Generator).WeakReferenceCount.ReferenceController;
      (this->Generator).WeakReferenceCount.ReferenceController =
           (param_1->WeakReferenceCount).ReferenceController;
      (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorSet,
               &local_68);
    if (((*(int *)&(this->OnGeneratorSet).field_0x10 == 0) ||
        (plVar4 = *(longlong **)&(this->OnGeneratorSet).field_0x8, plVar4 == (longlong *)0x0)) ||
       (cVar9 = (**(code **)(*plVar4 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      local_98 = (this->Generator).Object;
      local_90 = (this->Generator).WeakReferenceCount.ReferenceController;
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_90->WeakReferenceCount = (atomic<int>)((int)local_90->WeakReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratorSet,
                 &local_50);
      pFVar12 = pFVar14;
      if (*(int *)&(this->OnGeneratorSet).field_0x10 != 0) {
        pFVar12 = *(FMetasoundGenerator **)&(this->OnGeneratorSet).field_0x8;
      }
      (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12,&local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &local_90->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_90->_padding_ + 8))(local_90,1);
        }
      }
    }
    pFVar12 = (FMetasoundGenerator *)(this->Generator).WeakReferenceCount.ReferenceController;
    pFVar13 = pFVar12;
    if (pFVar12 != (FMetasoundGenerator *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar12->_padding_;
      do {
        pFVar13 = pFVar14;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14b3dfd03;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar12->_padding_;
        bVar8 = aVar2 == aVar10;
        if (bVar8) {
          *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar10;
      } while (!bVar8);
      pFVar14 = (this->Generator).Object;
      pFVar13 = pFVar12;
      if (pFVar14 != (FMetasoundGenerator *)0x0) {
        RegisterGeneratorEvents(this);
        SendParametersToGenerator(this);
        FixUpOutputWatchers(this);
        pFVar14->field_0x250 =
             (this->bRuntimeRenderTimingShouldBeEnabled << 6 ^ pFVar14->field_0x250) & 0x40U ^
             pFVar14->field_0x250;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        goto LAB_14b3dfe21;
      }
    }
LAB_14b3dfd03:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
  }
LAB_14b3dfe21:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ToString @ 14b3e1e10

FString * __thiscall
Metasound::FMetasoundGeneratorHandle::ToString
          (FMetasoundGeneratorHandle *this,FString *__return_storage_ptr__)

{
  TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UObject *pUVar4;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  this_00 = &this->AudioComponent;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"Invalid Handle");
    return __return_storage_ptr__;
  }
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioComponent.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0xda,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (*(longlong *)&pUVar4[4].field_0x8 == 0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&pUVar4[4].field_0x8 + 0x18);
    ::FName::ToString(&local_res8,&local_28);
  }
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res18.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res18.Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(&local_res18,&local_38);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s [Id:%d] with owner %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryCreateAnalyzerAddress @ 14b3e30c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FMetasoundGeneratorHandle::TryCreateAnalyzerAddress
          (FMetasoundGeneratorHandle *this,FName param_1,FName param_2,FName param_3,
          FAnalyzerAddress *param_4)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FGuid *pFVar5;
  UObject *pUVar6;
  longlong lVar7;
  FMetasoundFrontendClassInterface *pFVar8;
  FPassthroughAnalyzerInfo *pFVar9;
  IVertexAnalyzerRegistry *pIVar10;
  FName *pFVar11;
  FName *pFVar12;
  FWeakObjectPtr local_res8;
  FGuid local_78;
  ulong64 local_60;
  FName local_58;
  FName FStack_50;
  FName local_40;
  FName local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  FName local_20;
  
  local_60 = this->AudioComponentId;
  local_38 = param_2;
  local_20 = param_3;
  pFVar5 = FGuid::NewGuid(&local_78);
  local_30._0_4_ = pFVar5->A;
  local_30._4_4_ = pFVar5->B;
  uStack_28._0_4_ = pFVar5->C;
  uStack_28._4_4_ = pFVar5->D;
  GetMetaSoundSource(this);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    lVar7 = (**(code **)(*(longlong *)&pUVar6[0x1e].field_0x8 + 0x18))();
    pFVar8 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)(lVar7 + 0x70))
    ;
    pFVar11 = (FName *)(pFVar8->Outputs).AllocatorInstance.Data;
    pFVar12 = (FName *)((longlong)pFVar11 + (longlong)(pFVar8->Outputs).ArrayNum * 0x34);
    for (; pFVar11 != pFVar12; pFVar11 = (FName *)&pFVar11[6].Number) {
      if (*pFVar11 == param_1) {
        FVar2 = pFVar11[1];
        local_58 = pFVar11[4];
        FStack_50 = pFVar11[5];
        local_40 = FVar2;
        if (param_2 == (FName)0x0) {
          uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (PassthroughAnalyzers._8_4_ == PassthroughAnalyzers._52_4_) {
            return false;
          }
          lVar7 = 0x154cc5ff8;
          if (PassthroughAnalyzers._64_8_ != 0) {
            lVar7 = PassthroughAnalyzers._64_8_;
          }
          iVar1 = *(int *)(lVar7 + (ulonglong)
                                   (PassthroughAnalyzers._72_4_ - 1 & FVar2.Number + uVar4) * 4);
          while( true ) {
            if (iVar1 == -1) {
              return false;
            }
            if (*(FName *)((longlong)iVar1 * 0x20 + PassthroughAnalyzers._0_8_) == FVar2) break;
            iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + PassthroughAnalyzers._0_8_);
          }
          pFVar9 = TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
                   ::FindChecked((TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
                                  *)&PassthroughAnalyzers,local_40);
          local_38 = pFVar9->AnalyzerName;
          pFVar9 = TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
                   ::FindChecked((TMapBase<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FMetasoundGeneratorHandle::FPassthroughAnalyzerInfo,0>_>
                                  *)&PassthroughAnalyzers,local_40);
          local_20 = pFVar9->OutputName;
        }
        pIVar10 = Frontend::IVertexAnalyzerRegistry::Get();
        lVar7 = (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_38);
        if (lVar7 == 0) {
          return false;
        }
        param_4->InstanceID = local_60;
        param_4->DataType = local_40;
        param_4->AnalyzerName = local_38;
        (param_4->NodeID).A = local_58.ComparisonIndex.Value;
        (param_4->NodeID).B = local_58.Number;
        (param_4->NodeID).C = FStack_50.ComparisonIndex.Value;
        (param_4->NodeID).D = FStack_50.Number;
        param_4->AnalyzerMemberName = local_20;
        param_4->OutputName = param_1;
        param_4->UseDataTransmissionCenter = true;
        (param_4->AnalyzerInstanceID).A = (undefined4)local_30;
        (param_4->AnalyzerInstanceID).B = local_30._4_4_;
        (param_4->AnalyzerInstanceID).C = (undefined4)uStack_28;
        (param_4->AnalyzerInstanceID).D = uStack_28._4_4_;
        return true;
      }
    }
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return false;
}

// UnregisterGeneratorEvents @ 14b3e4b30

void __thiscall
Metasound::FMetasoundGeneratorHandle::UnregisterGeneratorEvents(FMetasoundGeneratorHandle *this)

{
  FMetasoundGenerator *this_00;
  FDelegateHandle FVar1;
  bool bVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::UnregisterGeneratorEvents");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId314,"FMetasoundGeneratorHandle::UnregisterGeneratorEvents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x13a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x13c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = (this->Generator).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b3e4c43;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_00 = (this->Generator).Object;
    if (this_00 != (FMetasoundGenerator *)0x0) {
      FVar1.ID = (this->GeneratorOutputChangedDelegateHandle).ID;
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this_00->OnOutputChanged
                   ,FVar1);
      }
      FMetasoundGenerator::RemoveGraphSetCallback(this_00,&this->GeneratorGraphSetDelegateHandle);
      FVar1.ID = (this->GeneratorVertexInterfaceChangedDelegateHandle).ID;
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &this_00->OnVertexInterfaceDataUpdatedWithChanges,FVar1);
      }
    }
  }
LAB_14b3e4c43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UnwatchOutput @ 14b3e4df0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::UnwatchOutput
          (FMetasoundGeneratorHandle *this,FName param_1,
          TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
          *param_2,FName param_3,FName param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulong64 *puVar3;
  ulong64 uVar4;
  undefined1 local_res18 [16];
  FReadAccessScope local_68;
  FWatchOutputUnifiedDelegate local_50;
  
  uVar4 = 0;
  local_50.WatchDelegate._0_8_ = 0;
  local_50.WatchDelegate._8_8_ = 0;
  local_50.WatchDelegate._16_8_ = 0;
  TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
            (&local_50.NativeWatchDelegate,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    puVar3 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res18);
    uVar4 = *puVar3;
  }
  local_50.NativeWatchDelegateHandle.ID = uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  bVar2 = UnwatchOutputInternal(this,param_1,&local_50,param_3,param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50.NativeWatchDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_50);
  return bVar2;
}

// UnwatchOutput @ 14b3e4ed0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::UnwatchOutput
          (FMetasoundGeneratorHandle *this,FName param_1,FDelegateHandle *param_2,FName param_3,
          FName param_4)

{
  bool bVar1;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  FDelegateHandle local_10;
  
  local_10 = (FDelegateHandle)param_2->ID;
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  local_40._8_8_ = 0;
  local_40._16_8_ = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  bVar1 = UnwatchOutputInternal
                    (this,param_1,(FWatchOutputUnifiedDelegate *)local_40,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return bVar1;
}

// UnwatchOutput @ 14b3e4fb0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::UnwatchOutput
          (FMetasoundGeneratorHandle *this,FName param_1,FOnMetasoundOutputValueChanged *param_2,
          FName param_3,FName param_4)

{
  bool bVar1;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  FDelegateHandle local_10;
  
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  local_40._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_40._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  local_18 = 0;
  local_10.ID = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  bVar1 = UnwatchOutputInternal
                    (this,param_1,(FWatchOutputUnifiedDelegate *)local_40,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return bVar1;
}

// UnwatchOutputInternal @ 14b3e5af0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::UnwatchOutputInternal
          (FMetasoundGeneratorHandle *this,FName param_1,FWatchOutputUnifiedDelegate *param_2,
          FName param_3,FName param_4)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FOutputWatcher *pFVar6;
  bool bVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  FLLMScope local_d8 [5];
  FAnalyzerAddress local_c8;
  FName local_68;
  FName local_60;
  FMemScope local_58;
  FMemScope local_50;
  FOutputWatcherKey local_48;
  
  FLLMScope::FLLMScope
            (local_d8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_50,&local_68,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::UnwatchOutputInternal");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId396,"FMetasoundGeneratorHandle::UnwatchOutputInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x18c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId396);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x18e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar3) {
    local_c8._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_c8.InstanceID = 0xffffffffffffffff;
    local_c8.NodeID.A = 0;
    local_c8.NodeID.B = 0;
    local_c8.NodeID.C = 0;
    local_c8.NodeID.D = 0;
    local_c8.OutputName.ComparisonIndex.Value = 0;
    local_c8.OutputName.Number = 0;
    local_c8.DataType.ComparisonIndex.Value = 0;
    local_c8.DataType.Number = 0;
    local_c8.AnalyzerName.ComparisonIndex.Value = 0;
    local_c8.AnalyzerName.Number = 0;
    local_c8.AnalyzerInstanceID.A = 0;
    local_c8.AnalyzerInstanceID.B = 0;
    local_c8.AnalyzerInstanceID.C = 0;
    local_c8.AnalyzerInstanceID.D = 0;
    local_c8.AnalyzerMemberName.ComparisonIndex.Value = 0;
    local_c8.AnalyzerMemberName.Number = 0;
    local_c8.UseDataTransmissionCenter = true;
    bVar3 = TryCreateAnalyzerAddress(this,param_1,param_3,param_4,&local_c8);
    if (bVar3) {
      FLLMScope::FLLMScope
                (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
      local_60 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
      FMemScope::FMemScope(&local_58,&local_60,true);
      bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
      if (bVar3) {
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Green,"FMetasoundGeneratorHandle::RemoveOutputWatcher");
      }
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId585,"FMetasoundGeneratorHandle::RemoveOutputWatcher",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                   ,0x249);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId585);
      }
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                             ,0x24b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_48.OutputName = local_c8.OutputName;
      local_48.AnalyzerName = local_c8.AnalyzerName;
      local_48.AnalyzerMemberName = local_c8.AnalyzerMemberName;
      pFVar6 = TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
               ::Find((TMapBase<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FMetasoundGeneratorHandle::FOutputWatcherKey,Metasound::FMetasoundGeneratorHandle::FOutputWatcher,0>_>
                       *)&this->OutputWatchers,&local_48);
      if (pFVar6 != (FOutputWatcher *)0x0) {
        FWatchOutputUnifiedMulticastDelegate::Remove(&pFVar6->OnOutputValueChanged,param_2);
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      FMemScope::~FMemScope(&local_58);
      FLLMScope::~FLLMScope(local_res8);
      FixUpOutputWatchers(this);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_d8);
  return bVar3;
}

// UpdateOutputWatchersInternal @ 14b3e6050

void __thiscall
Metasound::FMetasoundGeneratorHandle::UpdateOutputWatchersInternal(FMetasoundGeneratorHandle *this)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*> aVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  atomic<int> aVar16;
  FName *pFVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  FName *pFVar20;
  FName *pFVar21;
  bool bVar22;
  FLLMScope local_res18 [2];
  FName local_res20;
  uint uStack_a4;
  FMemScope local_a0;
  FName local_98;
  FName local_90;
  FMetaSoundOutput local_88;
  char local_78;
  longlong local_58 [3];
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_res20,true);
  bVar9 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar9) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::UpdateOutputWatchersInternal");
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId423,
               "FMetasoundGeneratorHandle::UpdateOutputWatchersInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId423);
  }
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                          ,0x1a9,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar20 = (FName *)0x0;
  LOCK();
  (this->OutputWatcherUpdateScheduled)._Storage = (atomic<long>)0x0;
  UNLOCK();
  pFVar21 = pFVar20;
  do {
    aVar3 = *(atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
              *)(this->ChangedOutputs).Tail;
    if (aVar3 == (atomic<TSpscQueue<Metasound::FMetasoundGeneratorHandle::FOutputPayload,FMemory>::FNode_*>
                  )0x0) {
      local_78 = '\0';
    }
    else {
      FVar4 = *(FName *)((longlong)aVar3 + 8);
      plVar1 = (longlong *)((longlong)aVar3 + 0x20);
      FVar5 = *(FName *)((longlong)aVar3 + 0x10);
      FVar6 = *(FName *)((longlong)aVar3 + 0x18);
      pFVar17 = pFVar20;
      if (local_58 != plVar1) {
        pFVar17 = (FName *)*plVar1;
        *plVar1 = 0;
      }
      puVar7 = (undefined8 *)*plVar1;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
      local_78 = '\x01';
      (this->ChangedOutputs).Tail = aVar3;
      LOCK();
      paVar2 = &(this->ChangedOutputs).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      local_98 = FVar4;
      local_90 = FVar5;
      local_88._padding_ = (longlong)FVar6;
      local_88.Data.Ptr = (IOutputStorage *)pFVar17;
    }
    lVar11 = local_88._padding_;
    FVar5 = local_90;
    FVar4 = local_98;
    if (local_78 == '\0') {
      aVar16 = (atomic<int>)((int)this->ChangedOutputsQueueCount - (int)pFVar21);
      if ((int)aVar16 < 0) {
        aVar16 = (atomic<int>)0x0;
      }
      LOCK();
      this->ChangedOutputsQueueCount = aVar16;
      UNLOCK();
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      FMemScope::~FMemScope(&local_a0);
      FLLMScope::~FLLMScope(local_res18);
      return;
    }
    uVar13 = ::GetTypeHash((FNameEntryId)(uint)local_88._padding_);
    uStack_a4 = (uint)((ulonglong)lVar11 >> 0x20);
    uVar14 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar15 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    uVar15 = FVar5.Number + uVar15;
    uVar15 = uVar15 * 0x40 + FVar4.Number + uVar14 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15;
    if (*(int *)&(this->OutputWatchers).field_0x8 != *(int *)&(this->OutputWatchers).field_0x34) {
      puVar8 = *(undefined1 **)&(this->OutputWatchers).field_0x40;
      puVar18 = &(this->OutputWatchers).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar18 = puVar8;
      }
      uVar13 = *(uint *)(puVar18 +
                        (ulonglong)
                        (*(int *)&(this->OutputWatchers).field_0x48 - 1U &
                        (uVar15 * 0x40 + -0x61c88647 + uStack_a4 + uVar13 + (uVar15 >> 2) ^ uVar15))
                        * 4);
      if (uVar13 != 0xffffffff) {
        do {
          pFVar17 = (FName *)((longlong)(int)uVar13 * 0xb0 + *(longlong *)&this->OutputWatchers);
          if (((*pFVar17 == FVar5) && (pFVar17[1] == FVar4)) && (pFVar17[2] == (FName)lVar11)) {
            if (uVar13 != 0xffffffff) {
              pFVar19 = pFVar17 + 3;
              if (pFVar17 == (FName *)0x0) {
                pFVar19 = pFVar20;
              }
              if (pFVar19 != (FName *)0x0) {
                if (local_78 == '\0') {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     );
                  if (bVar12) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if ((local_78 == '\0') &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar12)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                FWatchOutputUnifiedMulticastDelegate::Broadcast
                          ((FWatchOutputUnifiedMulticastDelegate *)(pFVar19 + 0xb),local_90,
                           &local_88);
              }
            }
            break;
          }
          uVar13 = pFVar17[0x15].ComparisonIndex.Value;
        } while (uVar13 != 0xffffffff);
      }
    }
    pFVar21 = (FName *)(ulonglong)((int)pFVar21 + 1);
    if ((local_78 != '\0') && ((FName *)local_88.Data.Ptr != (FName *)0x0)) {
      (**(code **)*(FName *)local_88.Data.Ptr)(local_88.Data.Ptr,1);
    }
  } while( true );
}

// UpdateParameters @ 14b3e6460

void __thiscall
Metasound::FMetasoundGeneratorHandle::UpdateParameters
          (FMetasoundGeneratorHandle *this,UMetasoundParameterPack *param_1)

{
  bool bVar1;
  TSharedPtr<FMetasoundParameterPackStorage,1> *pTVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<FMetasoundParameterPackStorage,1> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::UpdateParameters");
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId128,"FMetasoundGeneratorHandle::UpdateParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x80);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId128);
  }
  pTVar2 = UMetasoundParameterPack::GetCopyOfParameterStorage(param_1,&local_28);
  if (&this->LatestParameterState != pTVar2) {
    (this->LatestParameterState).Object = pTVar2->Object;
    pTVar2->Object = (FMetasoundParameterPackStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LatestParameterState).SharedReferenceCount,&pTVar2->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SendParametersToGenerator(this);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// WatchOutput @ 14b3e6bd0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::WatchOutput
          (FMetasoundGeneratorHandle *this,FName param_1,
          TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
          *param_2,FName param_3,FName param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulong64 *puVar3;
  ulong64 uVar4;
  undefined1 local_res18 [16];
  FReadAccessScope local_68;
  FWatchOutputUnifiedDelegate local_50;
  
  uVar4 = 0;
  local_50.WatchDelegate._0_8_ = 0;
  local_50.WatchDelegate._8_8_ = 0;
  local_50.WatchDelegate._16_8_ = 0;
  TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
            (&local_50.NativeWatchDelegate,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    puVar3 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res18);
    uVar4 = *puVar3;
  }
  local_50.NativeWatchDelegateHandle.ID = uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  bVar2 = WatchOutputInternal(this,param_1,&local_50,param_3,param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50.NativeWatchDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_50);
  return bVar2;
}

// WatchOutput @ 14b3e6cb0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::WatchOutput
          (FMetasoundGeneratorHandle *this,FName param_1,FOnMetasoundOutputValueChanged *param_2,
          FName param_3,FName param_4)

{
  bool bVar1;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  FDelegateHandle local_10;
  
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  local_40._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_40._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  local_18 = 0;
  local_10.ID = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  bVar1 = WatchOutputInternal(this,param_1,(FWatchOutputUnifiedDelegate *)local_40,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return bVar1;
}

// WatchOutputInternal @ 14b3e79d0

bool __thiscall
Metasound::FMetasoundGeneratorHandle::WatchOutputInternal
          (FMetasoundGeneratorHandle *this,FName param_1,FWatchOutputUnifiedDelegate *param_2,
          FName param_3,FName param_4)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  FName local_98;
  FMemScope local_90;
  FAnalyzerAddress local_88;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_98 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_90,&local_98,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundGeneratorHandle::WatchOutputInternal");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId365,"FMetasoundGeneratorHandle::WatchOutputInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
               ,0x16d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId365);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundGeneratorHandle.cpp"
                         ,0x16f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->AudioComponent).WeakPtr);
  if (bVar3) {
    local_88._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_88.InstanceID = 0xffffffffffffffff;
    local_88.NodeID.A = 0;
    local_88.NodeID.B = 0;
    local_88.NodeID.C = 0;
    local_88.NodeID.D = 0;
    local_88.OutputName.ComparisonIndex.Value = 0;
    local_88.OutputName.Number = 0;
    local_88.DataType.ComparisonIndex.Value = 0;
    local_88.DataType.Number = 0;
    local_88.AnalyzerName.ComparisonIndex.Value = 0;
    local_88.AnalyzerName.Number = 0;
    local_88.AnalyzerInstanceID.A = 0;
    local_88.AnalyzerInstanceID.B = 0;
    local_88.AnalyzerInstanceID.C = 0;
    local_88.AnalyzerInstanceID.D = 0;
    local_88.AnalyzerMemberName.ComparisonIndex.Value = 0;
    local_88.AnalyzerMemberName.Number = 0;
    local_88.UseDataTransmissionCenter = true;
    bVar3 = TryCreateAnalyzerAddress(this,param_1,param_3,param_4,&local_88);
    if (bVar3) {
      CreateOutputWatcher(this,&local_88,param_2);
      FixUpOutputWatchers(this);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  return bVar3;
}


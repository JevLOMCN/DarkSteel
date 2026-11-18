// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 44

// FMovieSceneEntitySystemRunner @ 146119a00

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemRunner * __thiscall
FMovieSceneEntitySystemRunner::FMovieSceneEntitySystemRunner
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  UMovieSceneEntitySystemLinker *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakLinker).WeakPtr,(FObjectPtr)&local_res8);
  (this->UpdateQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateQueue).ArrayNum = 0;
  (this->UpdateQueue).ArrayMax = 0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  (this->DissectedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DissectedUpdates).ArrayNum = 0;
  (this->DissectedUpdates).ArrayMax = 0;
  (this->OnFlushedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnFlushedDelegates).ArrayNum = 0;
  (this->OnFlushedDelegates).ArrayMax = 0;
  *(undefined8 *)&this->EventTriggers = 0;
  *(undefined8 *)&(this->EventTriggers).field_0x8 = 0;
  *(undefined8 *)&(this->EventTriggers).field_0x10 = 0;
  this->CurrentPhase = None;
  this->FlushState = None;
  this->CurrentFlushState = None;
  this->bRequireFullFlush = false;
  this->bIsUpdatingSequence = false;
  *(undefined8 *)&(this->EventTriggers).field_0x18 = 2;
  this->GameThread = GameThread_Local;
  return this;
}

// FMovieSceneEntitySystemRunner @ 146119ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemRunner * __thiscall
FMovieSceneEntitySystemRunner::FMovieSceneEntitySystemRunner(FMovieSceneEntitySystemRunner *this)

{
  *(undefined8 *)&(this->EventTriggers).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  (this->UpdateQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateQueue).ArrayNum = 0;
  (this->UpdateQueue).ArrayMax = 0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  (this->DissectedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DissectedUpdates).ArrayNum = 0;
  (this->DissectedUpdates).ArrayMax = 0;
  (this->OnFlushedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnFlushedDelegates).ArrayNum = 0;
  (this->OnFlushedDelegates).ArrayMax = 0;
  *(undefined8 *)&this->EventTriggers = 0;
  *(undefined8 *)&(this->EventTriggers).field_0x8 = 0;
  *(undefined8 *)&(this->EventTriggers).field_0x10 = 0;
  this->CurrentPhase = None;
  this->FlushState = None;
  this->CurrentFlushState = None;
  this->bRequireFullFlush = false;
  this->bIsUpdatingSequence = false;
  this->GameThread = GameThread_Local;
  return this;
}

// ~FMovieSceneEntitySystemRunner @ 14611de50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::~FMovieSceneEntitySystemRunner(FMovieSceneEntitySystemRunner *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EventTriggers).field_0x8,*(int *)&(this->EventTriggers).field_0x10);
  pvVar3 = *(void **)&(this->EventTriggers).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventTriggers);
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->OnFlushedDelegates).AllocatorInstance.Data,(this->OnFlushedDelegates).ArrayNum);
  pFVar4 = (this->OnFlushedDelegates).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,int>
            ((FDissectedUpdate *)(this->DissectedUpdates).AllocatorInstance.Data,
             (this->DissectedUpdates).ArrayNum);
  pFVar4 = (this->DissectedUpdates).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CurrentInstances).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>
            ((FUpdateParamsAndContext *)(this->UpdateQueue).AllocatorInstance.Data,
             (this->UpdateQueue).ArrayNum);
  pFVar4 = (this->UpdateQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
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

// AbandonAndDestroyInstance @ 146122220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::AbandonAndDestroyInstance
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  bool bVar1;
  
  bVar1 = QueueFinalUpdateImpl(this,param_1,param_2,true);
  if (bVar1) {
    if (this->FlushState == None) {
      this->FlushState = UE::MovieScene::FlushState::Everything;
    }
    FlushOutstanding(this,0.0,UE::MovieScene::FlushState::Everything);
    return;
  }
  return;
}

// AbandonAndDestroyInstance @ 146122270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::AbandonAndDestroyInstance
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1)

{
  bool bVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  bVar1 = QueueFinalUpdateImpl
                    (this,param_1,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  if (bVar1) {
    if (this->FlushState == None) {
      this->FlushState = UE::MovieScene::FlushState::Everything;
    }
    FlushOutstanding(this,0.0,UE::MovieScene::FlushState::Everything);
  }
  return;
}

// DiscardQueuedUpdates @ 14612c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::DiscardQueuedUpdates
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ushort uStackX_12;
  
  uVar11 = (this->UpdateQueue).ArrayNum - 1;
  uStackX_12 = param_1.InstanceSerial;
  uVar7 = param_1.InstanceID;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 * 0xa0;
    do {
      uVar8 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < (this->UpdateQueue).ArrayNum) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *(undefined4 *)((this->UpdateQueue).AllocatorInstance.Data + lVar12 + 0x98);
      if (((ushort)uVar2 == uVar7) && ((ushort)((uint)uVar2 >> 0x10) == uStackX_12)) {
        uVar5 = 0;
        if ((int)uVar11 < (this->UpdateQueue).ArrayNum) {
          uVar5 = uVar8;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar9 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 ((this->UpdateQueue).AllocatorInstance.Data + lVar12);
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(pTVar9 + 4));
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  (*(FMovieSceneNestedSequenceTransform **)&pTVar9[3].field_0x8,
                   *(int *)&pTVar9[3].field_0x10);
        if (*(void **)&pTVar9[3].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar9[3].field_0x8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (pTVar9);
        iVar6 = (this->UpdateQueue).ArrayNum + ~uVar11;
        if (iVar6 != 0) {
          memmove(pTVar9,&pTVar9[6].field_0x10,(longlong)iVar6 * 0xa0);
        }
        piVar1 = &(this->UpdateQueue).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar12 = lVar12 + -0xa0;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  uVar11 = (this->DissectedUpdates).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 * 0xa8;
    do {
      uVar8 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < (this->DissectedUpdates).ArrayNum) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *(undefined4 *)((this->DissectedUpdates).AllocatorInstance.Data + lVar12 + 0x98);
      if (((ushort)uVar2 == uVar7) && ((ushort)((uint)uVar2 >> 0x10) == uStackX_12)) {
        uVar5 = 0;
        if ((int)uVar11 < (this->DissectedUpdates).ArrayNum) {
          uVar5 = uVar8;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar9 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 ((this->DissectedUpdates).AllocatorInstance.Data + lVar12);
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(pTVar9 + 4));
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  (*(FMovieSceneNestedSequenceTransform **)&pTVar9[3].field_0x8,
                   *(int *)&pTVar9[3].field_0x10);
        if (*(void **)&pTVar9[3].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar9[3].field_0x8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (pTVar9);
        iVar6 = (this->DissectedUpdates).ArrayNum + ~uVar11;
        if (iVar6 != 0) {
          memmove(pTVar9,pTVar9 + 7,(longlong)iVar6 * 0xa8);
        }
        piVar1 = &(this->DissectedUpdates).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar12 = lVar12 + -0xa8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  uVar11 = (this->CurrentInstances).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11;
    lVar12 = lVar10 * 8;
    do {
      uVar8 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < (this->CurrentInstances).ArrayNum) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *(undefined4 *)((this->CurrentInstances).AllocatorInstance.Data + lVar12);
      if (((ushort)uVar2 == uVar7) && ((ushort)((uint)uVar2 >> 0x10) == uStackX_12)) {
        uVar5 = 0;
        if ((int)uVar11 < (this->CurrentInstances).ArrayNum) {
          uVar5 = uVar8;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        _Dst = (this->CurrentInstances).AllocatorInstance.Data + lVar10 * 8;
        iVar6 = (this->CurrentInstances).ArrayNum + ~uVar11;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->CurrentInstances).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// EndEvaluation @ 14612f6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::EndEvaluation
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  
  iVar2 = (param_1->RunnerReentrancyFlags).NumBits;
  uVar1 = iVar2 - 1;
  if (((int)uVar1 < 0) || (iVar2 <= (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5 = (param_1->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&param_1->RunnerReentrancyFlags;
  }
  if ((*(uint *)((longlong)FVar5 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar1 & 0x1f) & 1) != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699618>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0x15e,"RunnerReentrancyFlags[LastIndex] == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&param_1->RunnerReentrancyFlags,uVar1,1);
  return;
}

// EnterFlushState @ 14612f890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::EnterFlushState
          (FMovieSceneEntitySystemRunner *this,ERunnerFlushState param_1)

{
  this->CurrentFlushState = param_1;
  this->FlushState = this->FlushState & ~param_1;
  return;
}

// Flush @ 146132b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::Flush
          (FMovieSceneEntitySystemRunner *this,double param_1,ERunnerFlushState param_2)

{
  if (this->FlushState == None) {
    this->FlushState = UE::MovieScene::FlushState::Everything;
  }
  if (param_2 == None) {
    param_2 = UE::MovieScene::FlushState::Everything;
  }
  FlushOutstanding(this,param_1,param_2);
  return;
}

// FlushNext @ 146132b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::FlushNext
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  uint uVar1;
  ESystemPhase EVar2;
  ERunnerFlushState EVar3;
  ERunnerFlushState EVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  ERunnerFlushResult EVar10;
  ForElementType<unsigned_int> FVar11;
  FDestructionSentinel local_88;
  undefined1 local_70 [16];
  int local_60;
  undefined8 uStack_58;
  FMovieSceneEntitySystemEvaluationReentrancyWindow local_50;
  
  EVar2 = this->CurrentPhase;
  EVar10 = ContinueAllowBudget;
  this->CurrentPhase = None;
  EVar3 = this->CurrentFlushState;
  this->CurrentFlushState = None;
  EVar4 = this->FlushState;
  if ((EVar4 & Start) == None) {
    if ((EVar4 & ConditionalRecompile) != None) {
      this->CurrentFlushState = ConditionalRecompile;
      this->FlushState = EVar4 & ~ConditionalRecompile;
      EVar10 = GameThread_ConditionalRecompile(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 & Import) != None) {
      this->CurrentFlushState = Import;
      this->FlushState = EVar4 & ~Import;
      EVar10 = GameThread_UpdateSequenceInstances(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 & ReimportAfterCompile) != None) {
      this->CurrentFlushState = ReimportAfterCompile;
      this->FlushState = EVar4 & ~ReimportAfterCompile;
      EVar10 = GameThread_ReimportSequenceInstances(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 & Spawn) != None) {
      this->CurrentFlushState = Spawn;
      this->FlushState = EVar4 & ~Spawn;
      EVar10 = GameThread_SpawnPhase(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 & Instantiation) != None) {
      this->CurrentFlushState = Instantiation;
      this->FlushState = EVar4 & ~Instantiation;
      EVar10 = GameThread_InstantiationPhase(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 & Evaluation) != None) {
      this->CurrentFlushState = Evaluation;
      this->FlushState = EVar4 & ~Evaluation;
      EVar10 = GameThread_EvaluationPhase(this,param_1);
      goto LAB_146132ba5;
    }
    if ((char)EVar4 < '\0') {
      this->CurrentFlushState = Finalization;
      this->FlushState = EVar4 & ~Finalization;
      GameThread_EvaluationFinalizationPhase(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 >> 8 & 1) != 0) {
      this->CurrentFlushState = EventTriggers;
      this->FlushState = EVar4 & ~EventTriggers;
      bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers)
      ;
      if (bVar9) {
        FMovieSceneEntitySystemEvaluationReentrancyWindow::
        FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_50,this,param_1);
        uVar8 = _UNK_150631d48;
        uVar7 = ___xmm_00000000000000020000000000000000;
        local_70._0_8_ = *(undefined8 *)&this->EventTriggers;
        local_70._8_8_ = *(undefined8 *)&(this->EventTriggers).field_0x8;
        _local_60 = *(undefined8 *)&(this->EventTriggers).field_0x10;
        uStack_58 = *(undefined8 *)&(this->EventTriggers).field_0x18;
        *(undefined8 *)&this->EventTriggers = 0;
        *(undefined8 *)&(this->EventTriggers).field_0x8 = 0;
        *(undefined8 *)&(this->EventTriggers).field_0x10 = uVar7;
        *(undefined8 *)&(this->EventTriggers).field_0x18 = uVar8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EventTriggers,
                   (FWriteAccessScope *)&local_88);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_70);
        DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                  ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_70._8_8_,local_60);
        if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_70._8_8_ !=
            (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
          FMemory::Free((void *)local_70._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_70);
        FMovieSceneEntitySystemEvaluationReentrancyWindow::
        ~FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_50);
      }
      goto LAB_146132ba5;
    }
    if ((EVar4 >> 9 & 1) != 0) {
      this->FlushState = EVar4 & ~PostEvaluation;
      this->CurrentFlushState = PostEvaluation;
      GameThread_PostEvaluationPhase(this,param_1);
      goto LAB_146132ba5;
    }
    if ((EVar4 >> 10 & 1) != 0) {
      this->CurrentFlushState = End;
      this->FlushState = EVar4 & ~End;
      iVar5 = (param_1->RunnerReentrancyFlags).NumBits;
      uVar1 = iVar5 - 1;
      if (((int)uVar1 < 0) || (iVar5 <= (int)uVar1)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          EVar10 = (*pcVar6)();
          return EVar10;
        }
      }
      FVar11 = (param_1->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)&param_1->RunnerReentrancyFlags;
      }
      if ((*(uint *)((longlong)FVar11 +
                    (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar1 & 0x1f) & 1) != 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1595841733583699618>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                           ,0x15e,"RunnerReentrancyFlags[LastIndex] == false");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          EVar10 = (*pcVar6)();
          return EVar10;
        }
      }
      TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&param_1->RunnerReentrancyFlags,uVar1,1);
      goto LAB_146132ba5;
    }
  }
  else {
    if ((((param_1->LastInstantiationVersion == 0) ||
         (param_1->LastInstantiationVersion <
          (param_1->EntityManager).StructureMutationSystemSerialNumber)) ||
        ((this->UpdateQueue).ArrayNum != 0)) || ((this->DissectedUpdates).ArrayNum != 0)) {
      iVar5 = (param_1->RunnerReentrancyFlags).NumBits;
      if (iVar5 != 0) {
        uVar1 = iVar5 - 1;
        if (((int)uVar1 < 0) || (iVar5 <= (int)uVar1)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            EVar10 = (*pcVar6)();
            return EVar10;
          }
        }
        FVar11 = (param_1->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<unsigned_int>)0x0) {
          FVar11 = (ForElementType<unsigned_int>)&param_1->RunnerReentrancyFlags;
        }
        if ((*(uint *)((longlong)FVar11 +
                      (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
             (uVar1 & 0x1f) & 1) == 0) {
          if (2 < (byte)LogMovieSceneECS._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
          }
          goto LAB_146132ba0;
        }
      }
      TBitArray<FDefaultBitArrayAllocator>::Add(&param_1->RunnerReentrancyFlags,false);
      this->FlushState = this->FlushState & ~Start;
      this->CurrentFlushState = Start;
      if ((param_1->EntityManager).LockdownState == Locked) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EntityManager.IsLockedDown()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                           ,0x169,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          EVar10 = (*pcVar6)();
          return EVar10;
        }
      }
      (param_1->EntityManager).DispatchThread = GameThread_Local;
      (param_1->EntityManager).GatherThread = GameThread_Local;
      EVar10 = ContinueAllowBudget;
      goto LAB_146132ba5;
    }
    this->FlushState = None;
  }
LAB_146132ba0:
  EVar10 = Break;
LAB_146132ba5:
  this->CurrentFlushState = EVar3;
  this->CurrentPhase = EVar2;
  return EVar10;
}

// FlushOutstanding @ 146132fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::FlushOutstanding
          (FMovieSceneEntitySystemRunner *this,double param_1,ERunnerFlushState param_2)

{
  int *piVar1;
  code *pcVar2;
  ERunnerFlushState EVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  FEntityManager *pFVar9;
  bool bVar10;
  ERunnerFlushResult EVar11;
  UMovieSceneEntitySystemLinker *pUVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_MovieSceneEval_RunnerFlush> FVar14;
  UObject *pUVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  double dVar19;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_80 [4];
  
  if (this->FlushState == None) {
    return;
  }
  if (this->CurrentFlushState != None) {
    if ((byte)LogMovieSceneECS._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    return;
  }
  pUVar12 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar12 == (UMovieSceneEntitySystemLinker *)0x0) {
    return;
  }
  FVar14 = StatPtr_MovieSceneEval_RunnerFlush;
  if (StatPtr_MovieSceneEval_RunnerFlush ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_RunnerFlush>)0x0) {
    pFVar13 = ::FName::FName(&local_98,"MovieSceneEval_RunnerFlush");
    FVar14 = (FThreadSafeStaticStat<FStat_MovieSceneEval_RunnerFlush>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_RunnerFlush,*pFVar13,
                        L"Runner Flush","STATGROUP_MovieSceneEval","STATCAT_Advanced",
                        L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x20b);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8.s.LowPart = FVar17.Value;
      local_a8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar6 = true;
      goto LAB_14613318d;
    }
  }
  bVar6 = false;
  FVar18 = local_90;
LAB_14613318d:
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                          ,0x20e,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar15 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  pFVar9 = UE::MovieScene::GEntityManagerForDebuggingVisualizers;
  UE::MovieScene::GEntityManagerForDebuggingVisualizers = (FEntityManager *)(pUVar15 + 1);
  if (pUVar15 == (UObject *)0x0) {
    UE::MovieScene::GEntityManagerForDebuggingVisualizers = (FEntityManager *)0x0;
  }
  if (param_2 == None) {
    param_2 = UE::MovieScene::FlushState::Everything;
  }
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  dVar4 = param_1 * __real_3f50624dd2f1a9fc;
  if (this->bRequireFullFlush == false) {
    if (dVar4 <= 0.0) {
      EVar3 = this->FlushState;
      while (((EVar3 & param_2) != None && (EVar11 = FlushNext(this,pUVar12), EVar11 != Break))) {
        EVar3 = this->FlushState;
      }
    }
    else {
      dVar19 = FWindowsPlatformTime::Seconds();
      dVar8 = __real_4170000000000000;
      if ((this->FlushState & param_2) != None) {
        while (EVar11 = FlushNext(this,pUVar12), EVar11 != Break) {
          if (((EVar11 == ContinueAllowBudget) &&
              (QueryPerformanceCounter(&local_a8),
              dVar4 <= ((double)CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) *
                        FGenericPlatformTime::SecondsPerCycle + dVar8) - dVar19)) ||
             ((this->FlushState & param_2) == None)) break;
        }
      }
    }
  }
  else {
    EVar3 = this->FlushState & UE::MovieScene::FlushState::Everything;
    while ((EVar3 != None && (EVar11 = FlushNext(this,pUVar12), EVar11 != Break))) {
      EVar3 = UE::MovieScene::FlushState::Everything & this->FlushState;
    }
    this->bRequireFullFlush = false;
  }
  EVar3 = this->FlushState;
  if ((EVar3 != None) && (EVar3 != End)) {
    this->FlushState = EVar3 | ConditionalRecompile;
  }
  UE::MovieScene::GEntityManagerForDebuggingVisualizers = pFVar9;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80[0].NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_80[0].NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_80[0].StatData.Pad[4] = '\0';
      local_80[0].StatData.Pad[5] = '\0';
      local_80[0].StatData.Pad[6] = '\0';
      local_80[0].StatData.Pad[7] = '\0';
      local_80[0].StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_80[0].StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_80[0].StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_80[0].StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FlushSingleEvaluationPhase @ 146133470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase(FMovieSceneEntitySystemRunner *this)

{
  ulong64 *puVar1;
  ESystemPhase EVar2;
  ulonglong uVar3;
  bool bVar4;
  UMovieSceneEntitySystemLinker *pUVar5;
  FTaskGraphInterface *pFVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((this->FlushState == None) && (this->CurrentPhase == None)) {
LAB_1461334b5:
    pUVar5 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
    if (pUVar5 == (UMovieSceneEntitySystemLinker *)0x0) {
      bVar4 = `FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase'::__l6::<lambda_2>::
              operator()(local_48);
      if (!bVar4) goto LAB_1461335f4;
    }
    EVar2 = this->CurrentPhase;
    this->CurrentPhase = Evaluation;
    (pUVar5->EntityManager).LockdownState = Locked;
    bVar4 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
    if ((bVar4) && ((pUVar5->SystemGraph).TaskScheduler.Ptr != (FEntitySystemScheduler *)0x0)) {
      puVar1 = &(pUVar5->EntityManager).SystemSerialNumber;
      *puVar1 = *puVar1 + 1;
      uVar3 = (pUVar5->SystemGraph).SchedulerSerialNumber;
      if ((uVar3 == 0) || (uVar3 < (pUVar5->EntityManager).StructureMutationSystemSerialNumber)) {
        FMovieSceneEntitySystemGraph::ReconstructTaskSchedule
                  (&pUVar5->SystemGraph,&pUVar5->EntityManager);
      }
      UE::MovieScene::FEntitySystemScheduler::ExecuteTasks((pUVar5->SystemGraph).TaskScheduler.Ptr);
    }
    local_40.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 4;
    FMovieSceneEntitySystemGraph::UpdateCache(&pUVar5->SystemGraph);
    FMovieSceneEntitySystemGraph::
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
              (&pUVar5->SystemGraph,Evaluation,&(pUVar5->SystemGraph).EvaluationPhase,pUVar5,
               &local_40);
    if (local_40.ArrayNum != 0) {
      pFVar6 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar6 + 0x60))(pFVar6,&local_40,0x101);
    }
    (pUVar5->EntityManager).LockdownState = Unlocked;
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = local_40.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_40.ArrayNum);
    if (local_40.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
    }
    this->CurrentPhase = EVar2;
    bVar4 = true;
  }
  else {
    bVar4 = `FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase'::__l3::<lambda_1>::
            operator()(local_48);
    if (bVar4) goto LAB_1461334b5;
LAB_1461335f4:
    bVar4 = false;
  }
  return bVar4;
}

// GameThread_ConditionalRecompile @ 146135550

/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_ConditionalRecompile
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  int iVar2;
  FCompiledDataVolatilityManager *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ERunnerFlushResult EVar9;
  uint uVar10;
  UObject *pUVar11;
  FBuiltInComponentTypes *pFVar12;
  FComponentMask *pFVar13;
  ERunnerFlushState EVar14;
  FSequenceInstance *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId654,
               "FMovieSceneEntitySystemRunner::GameThread_ConditionalRecompile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
               ,0x28e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId654);
  }
  pUVar11 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  uVar18 = 0;
  uVar19 = uVar18;
  if (pUVar11 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar11[0x23].field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    uVar19 = *(ulonglong *)&pUVar11[0x23].field_0x8;
  }
  iVar2 = (this->CurrentInstances).ArrayNum;
  bVar7 = false;
  bVar6 = false;
  if (iVar2 == 0) {
    uVar21 = uVar18;
    if (0 < (this->UpdateQueue).ArrayNum) {
      do {
        uVar16 = (uint)uVar18;
        uVar10 = 0;
        if ((int)uVar16 < (this->UpdateQueue).ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7 = bVar6, bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pFVar4 = (this->UpdateQueue).AllocatorInstance.Data;
        uVar10 = *(uint *)(pFVar4 + uVar21 + 0x98);
        local_50 = uVar10;
        if ((int)(uVar10 & 0xffff) < *(int *)(uVar19 + 0x30)) {
          if ((*(int *)(uVar19 + 0x30) <= (int)(uVar10 & 0xffff)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          lVar20 = uVar19 + 0x18;
          if (*(longlong *)(uVar19 + 0x28) != 0) {
            lVar20 = *(longlong *)(uVar19 + 0x28);
          }
          bVar7 = bVar6;
          if ((*(uint *)(lVar20 + (ulonglong)((uVar10 & 0xffff) >> 5) * 4) >> (uVar10 & 0x1f) & 1)
              != 0) {
            if ((*(short *)((ulonglong)(uVar10 & 0xffff) * 0x140 + 0x134 + *(longlong *)(uVar19 + 8)
                           ) == local_50._2_2_) && (((byte)pFVar4[uVar21 + 0x9c] & 6) == 0)) {
              pFVar15 = (FSequenceInstance *)
                        ((ulonglong)*(ushort *)(pFVar4 + uVar21 + 0x98) * 0x140 +
                        *(longlong *)(uVar19 + 8));
              if ((SUB42(pFVar15->RootInstanceHandle,0) == (pFVar15->InstanceHandle).InstanceID) &&
                 (SUB42(pFVar15->RootInstanceHandle,2) == (pFVar15->InstanceHandle).InstanceSerial))
              {
                if (!pFVar15->bInitialized) {
                  local_58[0] = 0;
                  `UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::
                  operator()(local_58);
                }
                pFVar3 = (pFVar15->VolatilityManager).Ptr;
                if ((pFVar3 != (FCompiledDataVolatilityManager *)0x0) &&
                   (bVar8 = UE::MovieScene::FCompiledDataVolatilityManager::ConditionalRecompile
                                      (pFVar3), bVar8)) {
                  UE::MovieScene::FSequenceInstance::InvalidateCachedData(pFVar15,DataChanged);
                  bVar6 = true;
                  bVar7 = bVar6;
                }
              }
            }
          }
        }
        uVar18 = (ulonglong)(uVar16 + 1);
        uVar21 = uVar21 + 0xa0;
      } while ((int)(uVar16 + 1) < (this->UpdateQueue).ArrayNum);
      goto LAB_146135927;
    }
  }
  else {
    pFVar17 = (this->CurrentInstances).AllocatorInstance.Data;
    pFVar4 = pFVar17 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->CurrentInstances).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FQueuedUpdateParams,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
        bVar7 = bVar6;
      }
      if (pFVar17 == pFVar4) break;
      uVar10 = *(uint *)pFVar17;
      local_50 = uVar10;
      if ((int)(uVar10 & 0xffff) < *(int *)(uVar19 + 0x30)) {
        if ((*(int *)(uVar19 + 0x30) <= (int)(uVar10 & 0xffff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        lVar20 = uVar19 + 0x18;
        if (*(longlong *)(uVar19 + 0x28) != 0) {
          lVar20 = *(longlong *)(uVar19 + 0x28);
        }
        bVar7 = bVar6;
        if ((*(uint *)(lVar20 + (ulonglong)((uVar10 & 0xffff) >> 5) * 4) >> (uVar10 & 0x1f) & 1) ==
            0) goto LAB_146135783;
        if ((*(short *)((ulonglong)(uVar10 & 0xffff) * 0x140 + 0x134 + *(longlong *)(uVar19 + 8)) !=
             local_50._2_2_) || (((byte)pFVar17[4] & 6) != 0)) goto LAB_146135783;
        pFVar15 = (FSequenceInstance *)
                  ((ulonglong)*(ushort *)pFVar17 * 0x140 + *(longlong *)(uVar19 + 8));
        if ((SUB42(pFVar15->RootInstanceHandle,0) != (pFVar15->InstanceHandle).InstanceID) ||
           (SUB42(pFVar15->RootInstanceHandle,2) != (pFVar15->InstanceHandle).InstanceSerial))
        goto LAB_146135783;
        if (!pFVar15->bInitialized) {
          local_res20[0] = 0;
          `UE::MovieScene::FSequenceInstance::ConditionalRecompile'::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        pFVar3 = (pFVar15->VolatilityManager).Ptr;
        if ((pFVar3 == (FCompiledDataVolatilityManager *)0x0) ||
           (bVar8 = UE::MovieScene::FCompiledDataVolatilityManager::ConditionalRecompile(pFVar3),
           !bVar8)) goto LAB_146135783;
        UE::MovieScene::FSequenceInstance::InvalidateCachedData(pFVar15,DataChanged);
        bVar7 = true;
        pFVar17 = pFVar17 + 8;
        bVar6 = true;
      }
      else {
LAB_146135783:
        pFVar17 = pFVar17 + 8;
      }
    }
LAB_146135927:
    EVar9 = ContinueAllowBudget;
    if (bVar7) {
      EVar14 = this->FlushState;
      if ((EVar14 & Import) == None) {
        pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
        uVar1 = (pFVar12->Tags).NeedsUnlink.Value;
        pFVar13 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
        if (((uVar1 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar1)) ||
           ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f)
            & 1) == 0)) {
          pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
          uVar1 = (pFVar12->Tags).NeedsLink.Value;
          pFVar13 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
          if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (pFVar13->Bits).NumBits)) &&
             ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >>
               (uVar1 & 0x1f) & 1) != 0)) goto LAB_1461359bb;
        }
        else {
LAB_1461359bb:
          EVar14 = this->CurrentFlushState;
          this->CurrentFlushState = None;
          FlushOutstanding(this,0.0,Instantiation|Spawn);
          this->CurrentFlushState = EVar14;
        }
        this->FlushState = this->FlushState | ReimportAfterCompile;
        EVar14 = this->FlushState;
      }
      this->FlushState =
           UE::MovieScene::FlushState::LoopEval & ~(Import|ConditionalRecompile) | EVar14;
      goto LAB_146135a05;
    }
  }
  EVar9 = ContinueNoBudgeting;
LAB_146135a05:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar9;
}

// GameThread_EvaluationFinalizationPhase @ 146135a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::GameThread_EvaluationFinalizationPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  uint uVar1;
  FMovieSceneSequenceID FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FMovieSceneTrackEvaluator *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UMovieSceneEntitySystemLinker *pUVar8;
  FMovieSceneEntitySystemRunner *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_MovieSceneEval_FinalizationPhase> FVar14;
  UObject *pUVar15;
  IMovieScenePlayer *pIVar16;
  FMovieSceneContext *pFVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  longlong lVar19;
  FName FVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_1c8 [32];
  undefined1 local_167 [7];
  FName local_160;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FColor_u_0 local_148 [2];
  undefined4 local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  UMovieSceneEntitySystemLinker *local_118;
  FMovieSceneEntitySystemRunner *local_110;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_108;
  FName local_f8;
  FMovieSceneContext local_f0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_118 = param_1;
  local_110 = this;
  if (((this->GameThread != GameThread) && (this->GameThread != GameThread_Local)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GameThread == ENamedThreads::GameThread || GameThread == ENamedThreads::GameThread_Local"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                          ,0x4d4,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->CurrentPhase = Finalization;
  FVar20 = (FName)0x0;
  this->bCanQueueEventTriggers = true;
  FVar14 = StatPtr_MovieSceneEval_FinalizationPhase;
  if (StatPtr_MovieSceneEval_FinalizationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_FinalizationPhase>)0x0) {
    pFVar13 = ::FName::FName(&local_f8,"MovieSceneEval_FinalizationPhase");
    FVar14 = (FThreadSafeStaticStat<FStat_MovieSceneEval_FinalizationPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_FinalizationPhase,
                        *pFVar13,L"Finalization Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar3 = *(FName *)FVar14;
  bVar11 = false;
  bVar6 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar11 = false;
      bVar6 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_138.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x4dc);
        bVar11 = true;
        bVar6 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar3;
      local_130 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar10 = true;
      goto LAB_146135c12;
    }
  }
  bVar6 = bVar12;
  bVar11 = bVar10;
  bVar10 = false;
  local_130 = local_128;
LAB_146135c12:
  pUVar15 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar15 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar15[0x23].field_0x8 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar20 = *(FName *)&pUVar15[0x23].field_0x8;
  }
  local_150 = (this->CurrentInstances).ArrayNum;
  lVar19 = (longlong)local_150;
  local_158.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (this->CurrentInstances).AllocatorInstance.Data;
  local_160 = FVar20;
  if (local_150 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_150,0,&local_158,local_150,&local_14c);
    memcpy(local_158.Data,pFVar4,lVar19 << 3);
  }
  iVar7 = local_150;
  pFVar4 = local_158.Data + (longlong)local_150 * 8;
  FVar21.Data = local_158.Data;
  do {
    while( true ) {
      if (local_150 != iVar7) {
        local_167[0] = 0;
        `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FQueuedUpdateParams,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_167);
      }
      pUVar8 = local_118;
      if (FVar21.Data == pFVar4) {
        local_70.AllocatorInstance.SecondaryData =
             (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 4;
        FMovieSceneEntitySystemGraph::UpdateCache(&local_118->SystemGraph);
        FMovieSceneEntitySystemGraph::
        ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                  (&pUVar8->SystemGraph,Finalization,&(pUVar8->SystemGraph).FinalizationPhase,pUVar8
                   ,&local_70);
        pFVar9 = local_110;
        FVar20 = local_130;
        if ((local_70.ArrayNum != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Tasks.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                                ,0x4f0,L"Cannot dispatch new tasks during finalization"), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_70.AllocatorInstance.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar18,local_70.ArrayNum);
        if (local_70.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
        }
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data);
        }
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar10) {
          FThreadStats::AddMessage(FVar20,CycleScopeEnd);
        }
        pFVar9->bCanQueueEventTriggers = false;
        bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                           ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                            &pFVar9->EventTriggers);
        if (!bVar11) {
          pFVar9->FlushState = pFVar9->FlushState & ~EventTriggers;
        }
        return;
      }
      uVar1 = *(uint *)FVar21.Data;
      local_140 = uVar1;
      if ((int)(uVar1 & 0xffff) < *(int *)((longlong)FVar20 + 0x30)) break;
LAB_146135e4c:
      FVar21.Data = FVar21.Data + 8;
    }
    if ((*(int *)((longlong)FVar20 + 0x30) <= (int)(uVar1 & 0xffff)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar19 = (longlong)FVar20 + 0x18;
    if (*(longlong *)((longlong)FVar20 + 0x28) != 0) {
      lVar19 = *(longlong *)((longlong)FVar20 + 0x28);
    }
    if ((*(uint *)(lVar19 + (((ulonglong)uVar1 & 0xffff) >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
    goto LAB_146135e4c;
    if (*(short *)((ulonglong)(uVar1 & 0xffff) * 0x140 + 0x134 + *(longlong *)((longlong)FVar20 + 8)
                  ) != local_140._2_2_) goto LAB_146135e4c;
    lVar19 = (ulonglong)*(ushort *)FVar21.Data * 0x140 + *(longlong *)((longlong)FVar20 + 8);
    if ((((short)*(undefined4 *)(lVar19 + 0x13a) != (short)*(undefined4 *)(lVar19 + 0x132)) ||
        ((short)((uint)*(undefined4 *)(lVar19 + 0x13a) >> 0x10) !=
         (short)((uint)*(undefined4 *)(lVar19 + 0x132) >> 0x10))) ||
       (*(longlong *)(lVar19 + 0xf8) == 0)) goto LAB_146135e4c;
    local_108.Object = *(FSharedPlaybackState **)(lVar19 + 0x118);
    local_108.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar19 + 0x120);
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar16 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_108);
    FVar20 = local_160;
    if (pIVar16 == (IMovieScenePlayer *)0x0) goto LAB_146135e4c;
    this_00 = *(FMovieSceneTrackEvaluator **)(lVar19 + 0xf8);
    if ((*(byte *)(lVar19 + 0x13e) & 2) == 0) {
      FVar2.Value = *(uint *)(lVar19 + 300);
      pFVar17 = FMovieSceneContext::FMovieSceneContext
                          (&local_f0,(FMovieSceneContext *)(lVar19 + 0x68));
      FMovieSceneTrackEvaluator::Evaluate(this_00,pFVar17,pIVar16,FVar2);
      FVar20 = local_160;
      goto LAB_146135e4c;
    }
    FMovieSceneTrackEvaluator::Finish(this_00,pIVar16);
    FVar21.Data = FVar21.Data + 8;
    FVar20 = local_160;
  } while( true );
}

// GameThread_EvaluationPhase @ 146135fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_EvaluationPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ERunnerFlushResult EVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluationPhase> FVar14;
  FBuiltInComponentTypes *pFVar15;
  FComponentMask *pFVar16;
  FTaskGraphInterface *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  FNameEntryId FVar19;
  FName FVar20;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c8 [2];
  TRefCountPtr<FBaseGraphTask> local_c0;
  FName local_b8;
  FName local_b0;
  TStatIdData *local_a0;
  FConstructor local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar14 = StatPtr_MovieSceneEval_EvaluationPhase;
  if (StatPtr_MovieSceneEval_EvaluationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluationPhase>)0x0) {
    pFVar13 = ::FName::FName(&local_78,"MovieSceneEval_EvaluationPhase");
    FVar14 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluationPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluationPhase,
                        *pFVar13,L"Evaluation Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar20 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar17 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar19.Value;
        local_b8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x4a8);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0.Reference._0_4_ = FVar19.Value;
      local_c0.Reference._4_4_ = uVar17;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_1461360fb;
    }
  }
  bVar9 = false;
  FVar20 = local_b0;
LAB_1461360fb:
  this->CurrentPhase = Evaluation;
  (param_1->EntityManager).LockdownState = Locked;
  pFVar15 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar4 = (pFVar15->Tags).NeedsUnlink.Value;
  pFVar16 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if (((uVar4 != 0xffff) && ((int)(uint)uVar4 < (pFVar16->Bits).NumBits)) &&
     ((*(uint *)(pFVar16->Bits).AllocatorInstance.InlineData[uVar4 >> 5].Pad >> (uVar4 & 0x1f) & 1)
      != 0)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Linker->EntityManager.ContainsComponent(FBuiltInComponentTypes::Get()->Tags.NeedsUnlink)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                        ,0x4b1,
                        L"Stale entities remain in the entity manager during evaluation - these should have been destroyed during the instantiation phase. Did it run?"
                       );
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      EVar12 = (*pcVar6)();
      return EVar12;
    }
  }
  bVar11 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  if ((bVar11) && ((param_1->SystemGraph).TaskScheduler.Ptr != (FEntitySystemScheduler *)0x0)) {
    puVar2 = &(param_1->EntityManager).SystemSerialNumber;
    *puVar2 = *puVar2 + 1;
    uVar5 = (param_1->SystemGraph).SchedulerSerialNumber;
    if ((uVar5 == 0) || (uVar5 < (param_1->EntityManager).StructureMutationSystemSerialNumber)) {
      FMovieSceneEntitySystemGraph::ReconstructTaskSchedule
                (&param_1->SystemGraph,&param_1->EntityManager);
    }
    UE::MovieScene::FEntitySystemScheduler::ExecuteTasks((param_1->SystemGraph).TaskScheduler.Ptr);
  }
  local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 4;
  FMovieSceneEntitySystemGraph::UpdateCache(&param_1->SystemGraph);
  FMovieSceneEntitySystemGraph::
  ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
            (&param_1->SystemGraph,Evaluation,&(param_1->SystemGraph).EvaluationPhase,param_1,
             &local_70);
  if (local_70.ArrayNum != 0) {
    local_98.Prerequisites = &local_70;
    local_a0 = &TStatId::TStatId_NAME_None;
    TGraphTask<FNullGraphTask>::FConstructor::
    ConstructAndDispatchWhenReady<TStatId,enum_ENamedThreads::Type_&>
              (&local_98,(TStatId *)&local_c0,(Type *)&local_a0);
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_c0,GameThread_Local);
    puVar7 = (undefined8 *)CONCAT44(local_c0.Reference._4_4_,local_c0.Reference._0_4_);
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  (param_1->EntityManager).LockdownState = Unlocked;
  if (((this->AccumulatedUpdateFlags & HasLegacyTemplates) == None) &&
     ((param_1->SystemGraph).FinalizationPhase.ArrayNum == 0)) {
    bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
    if (!bVar11) {
      this->FlushState = this->FlushState & ~(EventTriggers|Finalization);
    }
  }
  FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar18 = local_70.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar18,local_70.ArrayNum);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_88);
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
  return ContinueAllowBudget;
}

// GameThread_EventTriggerPhase @ 1461363b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::GameThread_EventTriggerPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  int local_40;
  undefined8 uStack_38;
  FMovieSceneEntitySystemEvaluationReentrancyWindow local_30;
  
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
  if (bVar3) {
    FMovieSceneEntitySystemEvaluationReentrancyWindow::
    FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_30,this,param_1);
    uVar2 = _UNK_150631d48;
    uVar1 = ___xmm_00000000000000020000000000000000;
    local_50._0_8_ = *(undefined8 *)&this->EventTriggers;
    local_50._8_8_ = *(undefined8 *)&(this->EventTriggers).field_0x8;
    _local_40 = *(undefined8 *)&(this->EventTriggers).field_0x10;
    uStack_38 = *(undefined8 *)&(this->EventTriggers).field_0x18;
    *(undefined8 *)&this->EventTriggers = 0;
    *(undefined8 *)&(this->EventTriggers).field_0x8 = 0;
    *(undefined8 *)&(this->EventTriggers).field_0x10 = uVar1;
    *(undefined8 *)&(this->EventTriggers).field_0x18 = uVar2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EventTriggers,
               (FWriteAccessScope *)&local_68);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_50);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_50._8_8_,local_40);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_50._8_8_ !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free((void *)local_50._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_50);
    FMovieSceneEntitySystemEvaluationReentrancyWindow::
    ~FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_30);
  }
  return;
}

// GameThread_InstantiationPhase @ 1461364a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_InstantiationPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ERunnerFlushResult EVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_MovieSceneEval_InstantiationPhase> FVar11;
  FTaskGraphInterface *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c8 [2];
  TRefCountPtr<FBaseGraphTask> local_c0;
  FName local_b8;
  FName local_b0;
  TStatIdData *local_a0;
  FConstructor local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar11 = StatPtr_MovieSceneEval_InstantiationPhase;
  if (StatPtr_MovieSceneEval_InstantiationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_InstantiationPhase>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"MovieSceneEval_InstantiationPhase");
    FVar11 = (FThreadSafeStaticStat<FStat_MovieSceneEval_InstantiationPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_InstantiationPhase,
                        *pFVar10,L"Instantiation Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced"
                        ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid
                       );
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar14.Value;
        local_b8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x46a);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0.Reference._0_4_ = FVar14.Value;
      local_c0.Reference._4_4_ = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1461365eb;
    }
  }
  bVar6 = false;
  FVar15 = local_b0;
LAB_1461365eb:
  if ((this->GameThread != GameThread) && (this->GameThread != GameThread_Local)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThread == ENamedThreads::GameThread || GameThread == ENamedThreads::GameThread_Local"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                       ,0x46c,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      EVar9 = (*pcVar3)();
      return EVar9;
    }
  }
  this->CurrentPhase = Instantiation;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 4;
  FMovieSceneEntitySystemGraph::UpdateCache(&param_1->SystemGraph);
  FMovieSceneEntitySystemGraph::
  ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
            (&param_1->SystemGraph,Instantiation,&(param_1->SystemGraph).InstantiationPhase,param_1,
             &local_70);
  if (local_70.ArrayNum != 0) {
    local_98.Prerequisites = &local_70;
    local_a0 = &TStatId::TStatId_NAME_None;
    TGraphTask<FNullGraphTask>::FConstructor::
    ConstructAndDispatchWhenReady<TStatId,enum_ENamedThreads::Type_&>
              (&local_98,(TStatId *)&local_c0,(Type *)&local_a0);
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_c0,GameThread_Local);
    puVar4 = (undefined8 *)CONCAT44(local_c0.Reference._4_4_,local_c0.Reference._0_4_);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  EVar9 = GameThread_PostInstantiation(this,param_1);
  FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar13 = local_70.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar13,local_70.ArrayNum);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_88);
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
  return EVar9;
}

// GameThread_PostEvaluationPhase @ 146136800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::GameThread_PostEvaluationPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FEntityManager *this_00;
  FMovieSceneEntityID FVar3;
  FInstanceHandle FVar4;
  FName FVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  UMovieSceneEntitySystemLinker *pUVar11;
  TArray<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,TSizedDefaultAllocator<32>_>
  *pTVar12;
  TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_> *pTVar13;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  bool bVar15;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PostEvaluationPhase> FVar22;
  FBuiltInComponentTypes *pFVar23;
  longlong *plVar24;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FUpdateParamsAndContext *pFVar25;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar26;
  undefined1 *puVar27;
  FDissectedUpdate *pFVar28;
  FInstanceRegistry *pFVar29;
  FInstanceHandle *pFVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType FVar32;
  FSequenceInstance *this_02;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  FInstanceHandle local_1b0;
  FName local_1a8;
  undefined8 local_1a0;
  FColor_u_0 local_198 [2];
  FInstanceRegistry *local_190;
  FUpdateParamsAndContext *local_188;
  undefined8 uStack_180;
  FName local_178 [2];
  FDissectedUpdate *local_168;
  undefined8 uStack_160;
  FName local_158;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_148;
  UMovieSceneEntitySystemLinker *local_138;
  FInstanceHandle *local_130;
  TArray<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,TSizedDefaultAllocator<32>_>
  *local_128;
  TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_> *local_120;
  FMovieSceneEntitySystemRunner *local_118;
  FInstanceHandle *local_110;
  undefined8 uStack_108;
  <lambda_1> local_100;
  FName local_f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_e8;
  undefined8 uStack_e0;
  FUpdateParamsAndContext *local_d8;
  undefined8 uStack_d0;
  FDissectedUpdate *local_c8;
  undefined8 uStack_c0;
  FReadAccessScope local_b8;
  FMovieSceneEntitySystemEvaluationReentrancyWindow local_a0;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FVar22 = StatPtr_MovieSceneEval_PostEvaluationPhase;
  local_138 = param_1;
  local_118 = this;
  if (StatPtr_MovieSceneEval_PostEvaluationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostEvaluationPhase>)0x0) {
    pFVar21 = ::FName::FName(&local_f0,"MovieSceneEval_PostEvaluationPhase");
    FVar22 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PostEvaluationPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostEvaluationPhase,
                        *pFVar21,L"Post Evaluation Phase","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar22;
  bVar9 = false;
  bVar10 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178[0].ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_178[0].Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_178,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x513);
        bVar9 = true;
        bVar10 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar15 = true;
      goto LAB_146136975;
    }
  }
  bVar10 = bVar16;
  bVar9 = bVar15;
  bVar15 = false;
  local_1a8 = local_158;
LAB_146136975:
  local_188 = (FUpdateParamsAndContext *)(this->UpdateQueue).AllocatorInstance.Data;
  uStack_180._0_4_ = (this->UpdateQueue).ArrayNum;
  uStack_180._4_4_ = (this->UpdateQueue).ArrayMax;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_128 = &this->UpdateQueue;
  local_1b8 = 0;
  (local_128->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UpdateQueue).ArrayNum = 0;
  (this->UpdateQueue).ArrayMax = 0;
  local_168 = (FDissectedUpdate *)(this->DissectedUpdates).AllocatorInstance.Data;
  uStack_160._0_4_ = (this->DissectedUpdates).ArrayNum;
  uStack_160._4_4_ = (this->DissectedUpdates).ArrayMax;
  local_120 = &this->DissectedUpdates;
  (local_120->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DissectedUpdates).ArrayNum = 0;
  (this->DissectedUpdates).ArrayMax = 0;
  local_110 = (FInstanceHandle *)(this->CurrentInstances).AllocatorInstance.Data;
  uStack_108._0_4_ = (this->CurrentInstances).ArrayNum;
  uStack_108._4_4_ = (this->CurrentInstances).ArrayMax;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  local_e8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->OnFlushedDelegates).AllocatorInstance.Data;
  uStack_e0._0_4_ = (this->OnFlushedDelegates).ArrayNum;
  uStack_e0._4_4_ = (this->OnFlushedDelegates).ArrayMax;
  (this->OnFlushedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnFlushedDelegates).ArrayNum = 0;
  (this->OnFlushedDelegates).ArrayMax = 0;
  local_d8 = local_188;
  uStack_d0 = uStack_180;
  local_c8 = local_168;
  uStack_c0 = uStack_160;
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar29 = (param_1->InstanceRegistry).Ptr;
  local_190 = pFVar29;
  FMovieSceneEntitySystemEvaluationReentrancyWindow::
  FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_a0,this,param_1);
  local_130 = local_110 + (longlong)(int)uStack_108 * 2;
  pFVar30 = local_110;
  do {
    pTVar14 = local_e8;
    if (pFVar30 == local_130) {
      local_1a0 = (FInstanceHandle *)CONCAT44((int)((ulonglong)pFVar30 >> 0x20),(int)uStack_e0);
      pTVar26 = local_e8 + (int)uStack_e0;
      for (this_01 = local_e8; this_01 != pTVar26; this_01 = this_01 + 1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_b8);
        if (*(int *)&this_01->field_0x10 == 0) {
          plVar24 = (longlong *)0x0;
        }
        else {
          plVar24 = *(longlong **)&this_01->field_0x8;
        }
        (**(code **)(*plVar24 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b8);
      }
      FMovieSceneEntitySystemEvaluationReentrancyWindow::
      ~FMovieSceneEntitySystemEvaluationReentrancyWindow(&local_a0);
      pFVar29 = local_190;
      iVar18 = (int)local_1b8;
      pFVar30 = (FInstanceHandle *)(local_1c0.Data + (longlong)(int)local_1b8 * 4);
      FVar32.Data = local_1c0.Data;
      while( true ) {
        if ((int)local_1b8 != iVar18) {
          local_1c6[0] = 0;
          `TCheckedPointerIterator<UE::MovieScene::FInstanceHandle,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1c6);
        }
        pTVar12 = local_128;
        if ((FInstanceHandle *)FVar32.Data == pFVar30) break;
        FVar4 = *(FInstanceHandle *)FVar32.Data;
        local_1b0 = FVar4;
        if ((int)((uint)FVar4 & 0xffff) < *(int *)&(pFVar29->Instances).field_0x28) {
          if ((*(int *)&(pFVar29->Instances).field_0x28 <= (int)((uint)FVar4 & 0xffff)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar6 = *(undefined1 **)&(pFVar29->Instances).field_0x20;
          puVar27 = &(pFVar29->Instances).field_0x10;
          if (puVar6 != (undefined1 *)0x0) {
            puVar27 = puVar6;
          }
          if (((*(uint *)(puVar27 + (ulonglong)(((uint)FVar4 & 0xffff) >> 5) * 4) >>
                ((uint)FVar4 & 0x1f) & 1) != 0) &&
             (*(ushort *)
               ((ulonglong)((uint)FVar4 & 0xffff) * 0x140 + 0x134 + *(longlong *)&pFVar29->Instances
               ) == local_1b0.InstanceSerial)) {
            UE::MovieScene::FInstanceRegistry::DestroyInstance(pFVar29,FVar4);
          }
        }
        FVar32.Data = FVar32.Data + 4;
      }
      pFVar25 = (FUpdateParamsAndContext *)(local_128->AllocatorInstance).Data;
      iVar18 = local_128->ArrayNum;
      uStack_180._0_4_ = local_128->ArrayNum;
      uStack_180._4_4_ = local_128->ArrayMax;
      (local_128->AllocatorInstance).Data = (FScriptContainerElement *)local_d8;
      local_128->ArrayNum = (undefined4)uStack_d0;
      local_128->ArrayMax = uStack_d0._4_4_;
      local_188 = pFVar25;
      if (0 < iVar18) {
        if ((local_128 ==
             (TArray<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,TSizedDefaultAllocator<32>_>
              *)&local_188) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa0,8,iVar18,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                            &pTVar12->ArrayMax);
        pFVar25 = local_188;
        ConstructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>
                  ((pTVar12->AllocatorInstance).Data + (longlong)iVar19 * 0xa0,local_188,iVar18);
      }
      pTVar13 = local_120;
      pFVar28 = (FDissectedUpdate *)(local_120->AllocatorInstance).Data;
      iVar19 = local_120->ArrayNum;
      uStack_160._0_4_ = local_120->ArrayNum;
      uStack_160._4_4_ = local_120->ArrayMax;
      (local_120->AllocatorInstance).Data = (FScriptContainerElement *)local_c8;
      local_120->ArrayNum = (undefined4)uStack_c0;
      local_120->ArrayMax = uStack_c0._4_4_;
      local_168 = pFVar28;
      if (0 < iVar19) {
        if ((local_120 ==
             (TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_> *)
             &local_168) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar20 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa8,8,iVar19,&pTVar13->AllocatorInstance,&pTVar13->ArrayNum,
                            &pTVar13->ArrayMax);
        pFVar28 = local_168;
        ConstructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,FMovieSceneEntitySystemRunner::FDissectedUpdate,int>
                  ((pTVar13->AllocatorInstance).Data + (longlong)iVar20 * 0xa8,local_168,iVar19);
      }
      FVar5 = local_1a8;
      if ((0 < (local_118->UpdateQueue).ArrayNum) || (0 < (local_118->DissectedUpdates).ArrayNum)) {
        local_118->FlushState = UE::MovieScene::FlushState::LoopEval;
      }
      DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
                (pTVar14,(int)local_1a0);
      if (pTVar14 != (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
        FMemory::Free(pTVar14);
      }
      if ((FInstanceHandle *)local_1c0.Data != (FInstanceHandle *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      DestructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,int>(pFVar28,iVar19);
      if (pFVar28 != (FDissectedUpdate *)0x0) {
        FMemory::Free(pFVar28);
      }
      DestructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>(pFVar25,iVar18);
      if (pFVar25 != (FUpdateParamsAndContext *)0x0) {
        FMemory::Free(pFVar25);
      }
      if (local_110 != (FInstanceHandle *)0x0) {
        FMemory::Free(local_110);
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar15) {
        FThreadStats::AddMessage(FVar5,CycleScopeEnd);
      }
      return;
    }
    FVar4 = *pFVar30;
    local_1b0 = FVar4;
    if ((int)((uint)FVar4 & 0xffff) < *(int *)&(pFVar29->Instances).field_0x28) {
      local_1a0 = pFVar30;
      if ((*(int *)&(pFVar29->Instances).field_0x28 <= (int)((uint)FVar4 & 0xffff)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar6 = *(undefined1 **)&(pFVar29->Instances).field_0x20;
      puVar27 = &(pFVar29->Instances).field_0x10;
      if (puVar6 != (undefined1 *)0x0) {
        puVar27 = puVar6;
      }
      if ((*(uint *)(puVar27 + (ulonglong)(((uint)FVar4 & 0xffff) >> 5) * 4) >> ((uint)FVar4 & 0x1f)
          & 1) != 0) {
        if (*(ushort *)
             ((ulonglong)((uint)FVar4 & 0xffff) * 0x140 + 0x134 + *(longlong *)&pFVar29->Instances)
            == local_1b0.InstanceSerial) {
          this_02 = (FSequenceInstance *)
                    ((ulonglong)pFVar30->InstanceID * 0x140 + *(longlong *)&pFVar29->Instances);
          pFVar23 = UE::MovieScene::FBuiltInComponentTypes::Get();
          local_80.NumBits = 0;
          local_80.MaxBits = 0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    (&local_80,&(pFVar23->FinishedMask).Bits);
          pUVar11 = local_138;
          pFVar31 = (this_02->Ledger).OneShotEntities.AllocatorInstance.Data;
          iVar18 = (this_02->Ledger).OneShotEntities.ArrayNum;
          pFVar2 = pFVar31 + (longlong)iVar18 * 2;
          while( true ) {
            if ((this_02->Ledger).OneShotEntities.ArrayNum != iVar18) {
              local_1c7 = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_1c7);
            }
            pFVar30 = local_1a0;
            if (pFVar31 == pFVar2) break;
            FVar3.Value = *(ushort *)pFVar31;
            this_00 = &pUVar11->EntityManager;
            UE::MovieScene::FEntityManager::AddComponents(this_00,FVar3,(FComponentMask *)&local_80)
            ;
            local_100.EntityComponentMask = (FComponentMask *)&local_80;
            local_100.__this = this_00;
            UE::MovieScene::FEntityManager::
            IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
                      (this_00,FVar3,&local_100);
            pFVar31 = pFVar31 + 2;
          }
          piVar1 = &(this_02->Ledger).OneShotEntities.ArrayMax;
          (this_02->Ledger).OneShotEntities.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,0,(ForAnyElementType *)this_02,0,piVar1);
          }
          pTVar7 = (this_02->SharedPlaybackState).SharedReferenceCount.ReferenceController;
          local_148.Object = (this_02->SharedPlaybackState).Object;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_148.SharedReferenceCount.ReferenceController = pTVar7;
          uVar17 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayerIndex(&local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          if (uVar17 != 0xffff) {
            IMovieScenePlayer::SetIsEvaluatingFlag(uVar17,false);
          }
          if ((this_02->UpdateFlags & NeedsPostEvaluation) != None) {
            UE::MovieScene::FSequenceInstance::PostEvaluation(this_02);
          }
          pFVar29 = local_190;
          if ((pFVar30[1].InstanceID & 4) != 0) {
            if (((local_1c0.Data <= pFVar30) &&
                (pFVar30 < (FInstanceHandle *)(local_1c0.Data + (longlong)local_1b8._4_4_ * 4))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar18 = (int)local_1b8;
            if ((int)local_1b8 == local_1b8._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x204,&local_1c0,(int *)((longlong)&local_1b8 + 4));
            }
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar18 + 1);
            *(FInstanceHandle *)(local_1c0.Data + (longlong)iVar18 * 4) = *pFVar30;
            pFVar29 = local_190;
          }
        }
      }
    }
    pFVar30 = pFVar30 + 2;
  } while( true );
}

// GameThread_PostInstantiation @ 146137030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_PostInstantiation
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  undefined1 *puVar1;
  FComponentMask *pFVar2;
  int *piVar3;
  TTypeCompatibleBytes<unsigned_int> *pTVar4;
  FInstanceRegistry *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ERunnerFlushResult EVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PostInstantiation> FVar14;
  FBuiltInComponentTypes *pFVar15;
  FEntityComponentFilter *pFVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar17;
  FName FVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStackY_2b8 [32];
  FComponentTypeID local_258;
  FComponentTypeID local_256;
  FColor_u_0 local_254;
  LARGE_INTEGER local_250;
  FName local_248;
  FName local_240;
  FStatMessage local_230;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  FName local_208 [2];
  IMovieSceneEntityMutation local_1f8;
  TBitArray<TFixedAllocator<12>_> local_1f0;
  FEntityComponentFilter local_1b8;
  FEntityComponentFilter local_138;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FVar14 = StatPtr_MovieSceneEval_PostInstantiation;
  if (StatPtr_MovieSceneEval_PostInstantiation ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostInstantiation>)0x0) {
    pFVar13 = ::FName::FName(local_208,"MovieSceneEval_PostInstantiation");
    FVar14 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PostInstantiation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostInstantiation,
                        *pFVar13,L"Post Instantiation","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar18 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar19 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_254.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_254._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_248.ComparisonIndex.Value = FVar17.Value;
        local_248.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_248,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x483);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_250.s.LowPart = FVar17.Value;
      local_250.s.HighPart = uVar19;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar9 = true;
      goto LAB_146137193;
    }
  }
  bVar9 = false;
  FVar18 = local_240;
LAB_146137193:
  if (((this->GameThread != GameThread) && (this->GameThread != GameThread_Local)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GameThread == ENamedThreads::GameThread || GameThread == ENamedThreads::GameThread_Local"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                          ,0x485,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    EVar12 = (*pcVar6)();
    return EVar12;
  }
  param_1->LastInstantiationVersion = (param_1->EntityManager).SystemSerialNumber;
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    EVar12 = (*pcVar6)();
    return EVar12;
  }
  pFVar5 = (param_1->InstanceRegistry).Ptr;
  bVar11 = 1 < (pFVar5->InvalidatedObjectBindings).HashSize;
  if (!bVar11) {
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::UnhashElements(&pFVar5->InvalidatedObjectBindings);
  }
  puVar1 = &(pFVar5->InvalidatedObjectBindings).Elements.field_0xc;
  *(undefined4 *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&pFVar5->InvalidatedObjectBindings,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x34 = 0;
  iVar22 = *(int *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x2c;
  *(undefined4 *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x28 = 0;
  if ((iVar22 < 0) || (0x80 < iVar22)) {
    *(undefined4 *)&(pFVar5->InvalidatedObjectBindings).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pFVar5->InvalidatedObjectBindings).Elements.field_0x10,0);
  }
  if (bVar11) {
    (pFVar5->InvalidatedObjectBindings).HashSize = 1;
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::Rehash(&pFVar5->InvalidatedObjectBindings);
  }
  TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *)&pFVar5->Instances);
  pFVar15 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_1f0.MaxBits = 0x180;
  local_1f8 = (IMovieSceneEntityMutation)&___7FRemoveMultipleMutation_MovieScene_UE__6B_;
  local_1f0.NumBits = 0;
  pFVar2 = &pFVar15->RequiresInstantiationMask;
  if (&local_1f0 != &pFVar2->Bits) {
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_1f0,&pFVar2->Bits);
  }
  uVar21 = 0;
  iVar22 = (int)(((int)(local_1f0.NumBits + 0x1fU) >> 0x1f & 0x1fU) + local_1f0.NumBits + 0x1fU) >>
           5;
  uVar19 = local_1f0.NumBits & 0x8000001f;
  if ((int)uVar19 < 0) {
    uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
  }
  uVar7 = 0xffffffff >> ((byte)(0x20 - uVar19) & 0x1f);
  if (0x1f < (int)(0x20 - uVar19)) {
    uVar7 = 0xffffffff;
  }
  uVar19 = 0xffffffff;
  if (iVar22 == 1) {
    uVar19 = uVar7;
  }
  if (0 < iVar22) {
    do {
      pTVar4 = local_1f0.AllocatorInstance.InlineData + uVar21;
      uVar20 = uVar19 & *(uint *)local_1f0.AllocatorInstance.InlineData[uVar21].Pad;
      if (uVar19 == 0xffffffff) {
        uVar20 = *(uint *)pTVar4->Pad;
      }
      uVar19 = ~uVar20 & uVar7;
      if ((uint)uVar21 != iVar22 - 1U) {
        uVar19 = ~uVar20;
      }
      uVar20 = (uint)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      *(uint *)pTVar4->Pad = uVar19;
      uVar19 = 0xffffffff;
      if (uVar20 == iVar22 - 1U) {
        uVar19 = uVar7;
      }
    } while ((int)uVar20 < iVar22);
  }
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_138.NoneMask.Bits.NumBits = 0;
  local_138.NoneMask.Bits.MaxBits = 0x180;
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_138.AllMask.Bits.NumBits = 0;
  local_138.AllMask.Bits.MaxBits = 0x180;
  local_138.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ComplexMasks.ArrayNum = 0;
  local_138.ComplexMasks.ArrayMax = 0;
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_138.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_138.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  pFVar16 = UE::MovieScene::FEntityComponentFilter::Any(&local_138,pFVar2);
  UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_b8,pFVar16);
  if (local_138.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::FEntityManager::MutateAll(&param_1->EntityManager,&local_b8,&local_1f8,Mandatory);
  local_258.Value = (pFVar15->Tags).NeedsUnlink.Value;
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_218._First = &local_258;
  local_218._Last = &local_256;
  local_1b8.NoneMask.Bits.NumBits = 0;
  local_1b8.NoneMask.Bits.MaxBits = 0x180;
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_1b8.AllMask.Bits.NumBits = 0;
  local_1b8.AllMask.Bits.MaxBits = 0x180;
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_1b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_1b8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_1b8.ComplexMasks.ArrayNum = 0;
  local_1b8.ComplexMasks.ArrayMax = 0;
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_1b8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  UE::MovieScene::FComponentMask::SetAll(&local_1b8.AllMask,&local_218);
  UE::MovieScene::FEntityManager::FreeEntities
            (&param_1->EntityManager,&local_1b8,
             (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
              *)0x0);
  if (local_1b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.ComplexMasks.AllocatorInstance.Data);
  }
  if ((param_1->AutoLinkMode == Enabled) &&
     ((param_1->LastSystemUnlinkVersion == 0 ||
      (param_1->LastSystemUnlinkVersion <
       (param_1->EntityManager).StructureMutationSystemSerialNumber)))) {
    FMovieSceneEntitySystemGraph::RemoveIrrelevantSystems(&param_1->SystemGraph,param_1);
    param_1->LastSystemUnlinkVersion = (param_1->EntityManager).SystemSerialNumber;
  }
  UE::MovieScene::FEntityManager::Compact(&param_1->EntityManager);
  bVar11 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  if (bVar11) {
    FMovieSceneEntitySystemGraph::ReconstructTaskSchedule
              (&param_1->SystemGraph,&param_1->EntityManager);
  }
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  local_1f8 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_230.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_230.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_230.StatData.Pad[4] = '\0';
      local_230.StatData.Pad[5] = '\0';
      local_230.StatData.Pad[6] = '\0';
      local_230.StatData.Pad[7] = '\0';
      local_230.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_230.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_230.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_230.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_230);
      piVar3 = &this_00->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return ContinueAllowBudget;
}

// GameThread_ReimportSequenceInstances @ 146137630

/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_ReimportSequenceInstances
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FInstanceRegistry *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  code *pcVar11;
  bool bVar12;
  ERunnerFlushResult EVar13;
  int iVar14;
  FSequenceInstance *this_00;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  short sStackX_12;
  
  bVar3 = this->bIsUpdatingSequence;
  this->bIsUpdatingSequence = true;
  if ((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstanceRegistry.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                        ,0x96,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      EVar13 = (*pcVar11)();
      return EVar13;
    }
  }
  pFVar6 = (param_1->InstanceRegistry).Ptr;
  piVar1 = &(this->CurrentInstances).ArrayMax;
  puVar2 = &(param_1->EntityManager).SystemSerialNumber;
  *puVar2 = *puVar2 + 1;
  pFVar7 = (this->CurrentInstances).AllocatorInstance.Data;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar4 = (this->CurrentInstances).ArrayNum;
  (this->CurrentInstances).ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar4,&(this->CurrentInstances).AllocatorInstance,0,piVar1);
  }
  pFVar15 = pFVar7;
LAB_1461376f0:
  do {
    if (pFVar15 == pFVar7 + (longlong)(int)uVar4 * 8) {
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      this->bIsUpdatingSequence = bVar3;
      return ContinueAllowBudget;
    }
    uVar5 = *(uint *)pFVar15;
    if ((int)(uVar5 & 0xffff) < *(int *)&(pFVar6->Instances).field_0x28) {
      if (*(int *)&(pFVar6->Instances).field_0x28 <= (int)(uVar5 & 0xffff)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          EVar13 = (*pcVar11)();
          return EVar13;
        }
      }
      puVar8 = *(undefined1 **)&(pFVar6->Instances).field_0x20;
      puVar16 = &(pFVar6->Instances).field_0x10;
      if (puVar8 != (undefined1 *)0x0) {
        puVar16 = puVar8;
      }
      if (((*(uint *)(puVar16 + (ulonglong)((uVar5 & 0xffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
         && (sStackX_12 = (short)(uVar5 >> 0x10),
            *(short *)((ulonglong)(uVar5 & 0xffff) * 0x140 + 0x134 + *(longlong *)&pFVar6->Instances
                      ) == sStackX_12)) {
        this_00 = (FSequenceInstance *)
                  ((ulonglong)*(ushort *)pFVar15 * 0x140 + *(longlong *)&pFVar6->Instances);
        if (((byte)pFVar15[4] & 6) != 0) {
          if (!this_00->bFinished) {
            UE::MovieScene::FSequenceInstance::Finish(this_00);
          }
          pFVar9 = (this->CurrentInstances).AllocatorInstance.Data;
          if ((pFVar9 <= pFVar15) &&
             (pFVar15 < pFVar9 + (longlong)(this->CurrentInstances).ArrayMax * 8)) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              EVar13 = (*pcVar11)();
              return EVar13;
            }
          }
          iVar14 = (this->CurrentInstances).ArrayNum;
          if (iVar14 == (this->CurrentInstances).ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->CurrentInstances).AllocatorInstance,
                                &(this->CurrentInstances).ArrayMax);
          }
          (this->CurrentInstances).ArrayNum = iVar14 + 1;
          uVar10 = *(undefined8 *)pFVar15;
          pFVar15 = pFVar15 + 8;
          *(undefined8 *)((this->CurrentInstances).AllocatorInstance.Data + (longlong)iVar14 * 8) =
               uVar10;
          goto LAB_1461376f0;
        }
        if ((SUB42(this_00->RootInstanceHandle,0) == (this_00->InstanceHandle).InstanceID) &&
           (SUB42(this_00->RootInstanceHandle,2) == (this_00->InstanceHandle).InstanceSerial)) {
          pFVar9 = (this->CurrentInstances).AllocatorInstance.Data;
          if ((pFVar9 <= pFVar15) &&
             (pFVar15 < pFVar9 + (longlong)(this->CurrentInstances).ArrayMax * 8)) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              EVar13 = (*pcVar11)();
              return EVar13;
            }
          }
          iVar14 = (this->CurrentInstances).ArrayNum;
          if (iVar14 == (this->CurrentInstances).ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->CurrentInstances).AllocatorInstance,
                                &(this->CurrentInstances).ArrayMax);
          }
          (this->CurrentInstances).ArrayNum = iVar14 + 1;
          *(undefined8 *)((this->CurrentInstances).AllocatorInstance.Data + (longlong)iVar14 * 8) =
               *(undefined8 *)pFVar15;
          UE::MovieScene::FSequenceInstance::Update(this_00,&this_00->Context);
        }
      }
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// GameThread_SpawnPhase @ 146137960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_SpawnPhase
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong64 *puVar3;
  int iVar4;
  FName FVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ERunnerFlushResult EVar12;
  UObject *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SpawnPhase> FVar15;
  FTaskGraphInterface *this_00;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PostSpawnEvent> FVar18;
  FBuiltInComponentTypes *pFVar19;
  TBitArray<TFixedAllocator<12>_> *pTVar20;
  TTypeCompatibleBytes<unsigned_int> *pTVar21;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStackY_208 [32];
  FName local_1a0;
  FName local_190;
  <lambda_1> local_178 [4];
  FColor_u_0 local_174;
  FColor_u_0 local_170 [2];
  FName local_168;
  TRefCountPtr<FBaseGraphTask> local_160;
  FName local_158;
  TStatIdData *local_150;
  FConstructor local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  FStatMessage local_130;
  FStatMessage local_120;
  FDestructionSentinel local_110;
  FName local_f8;
  FName local_f0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_e8;
  TBitArray<TFixedAllocator<12>_> local_b8;
  TTypeCompatibleBytes<unsigned_int> local_80 [4];
  TTypeCompatibleBytes<unsigned_int> local_70 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_68 [2];
  TTypeCompatibleBytes<unsigned_int> local_60 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_58 [2];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (((this->GameThread != GameThread) && (this->GameThread != GameThread_Local)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GameThread == ENamedThreads::GameThread || GameThread == ENamedThreads::GameThread_Local"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                          ,0x428,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar12 = (*pcVar7)();
    return EVar12;
  }
  this->CurrentPhase = Spawn;
  pUVar13 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  uVar26 = 0;
  uVar27 = uVar26;
  if (pUVar13 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar13[0x23].field_0x8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar12 = (*pcVar7)();
      return EVar12;
    }
    uVar27 = *(ulonglong *)&pUVar13[0x23].field_0x8;
  }
  puVar3 = &(param_1->EntityManager).StructureMutationSystemSerialNumber;
  if (((param_1->LastInstantiationVersion == 0) || (param_1->LastInstantiationVersion < *puVar3)) ||
     (bVar10 = false, *(int *)(uVar27 + 0x50) != *(int *)(uVar27 + 0x7c))) {
    bVar10 = true;
  }
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 4;
  if ((param_1->AutoLinkMode == Enabled) &&
     ((param_1->LastSystemLinkVersion == 0 || (param_1->LastSystemLinkVersion < *puVar3)))) {
    UMovieSceneEntitySystem::LinkRelevantSystems(param_1);
    param_1->LastSystemLinkVersion = (param_1->EntityManager).SystemSerialNumber;
  }
  FVar15 = StatPtr_MovieSceneEval_SpawnPhase;
  if (StatPtr_MovieSceneEval_SpawnPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SpawnPhase>)0x0) {
    pFVar14 = ::FName::FName(&local_f8,"MovieSceneEval_SpawnPhase");
    FVar15 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SpawnPhase>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SpawnPhase,*pFVar14,
                        L"Spawn Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  bVar28 = false;
  FVar5 = *(FName *)FVar15;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_168.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x438);
        bVar8 = true;
        bVar28 = true;
      }
    }
    bVar9 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar9 = true;
      local_1a0 = FVar5;
    }
  }
  if (bVar10) {
    this->bCanQueueEventTriggers = true;
    FMovieSceneEntitySystemGraph::UpdateCache(&param_1->SystemGraph);
    FMovieSceneEntitySystemGraph::
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
              (&param_1->SystemGraph,Spawn,&(param_1->SystemGraph).SpawnPhase,param_1,&local_e8);
    this->bCanQueueEventTriggers = false;
    bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
    if (bVar11) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->EventTriggers);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EventTriggers,
                 (FWriteAccessScope *)&local_110);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTriggers);
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
    }
  }
  if (local_e8.ArrayNum != 0) {
    local_148.Prerequisites = &local_e8;
    local_150 = &TStatId::TStatId_NAME_None;
    TGraphTask<FNullGraphTask>::FConstructor::
    ConstructAndDispatchWhenReady<TStatId,enum_ENamedThreads::Type_&>
              (&local_148,(TStatId *)&local_160,(Type *)&local_150);
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(this_00,&local_160,GameThread_Local);
    if (local_160.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_160.Reference)->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_160.Reference)(local_160.Reference,1);
      }
    }
  }
  if (bVar28) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (local_1a0 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_130.NameAndInfo.Index = local_1a0.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = local_1a0.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_130);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  FVar18 = StatPtr_MovieSceneEval_PostSpawnEvent;
  if (StatPtr_MovieSceneEval_PostSpawnEvent ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostSpawnEvent>)0x0) {
    pFVar14 = ::FName::FName(&local_f0,"MovieSceneEval_PostSpawnEvent");
    FVar18 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PostSpawnEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostSpawnEvent,*pFVar14
                        ,L"Post Spawn Event","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar9 = false;
  bVar8 = false;
  bVar28 = false;
  FVar5 = *(FName *)FVar18;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_170[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_170[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_158.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                   ,0x456);
        bVar8 = true;
        bVar28 = true;
      }
    }
    bVar9 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar9 = true;
      local_190 = FVar5;
    }
  }
  TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
  Broadcast(&(param_1->Events).PostSpawnEvent,param_1);
  if (bVar28) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (local_190 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_120.NameAndInfo.Index = local_190.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = local_190.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_120);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  pFVar19 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTVar20 = &UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager)->Bits;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x180;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (pTVar20,&(pFVar19->RequiresInstantiationMask).Bits,&local_b8,MinSize,local_178);
  iVar4 = local_b8.NumBits;
  uVar24 = local_b8.NumBits + 0x1f;
  local_80[0].Pad[0] = local_b8.AllocatorInstance.InlineData[0].Pad[0];
  local_80[0].Pad[1] = local_b8.AllocatorInstance.InlineData[0].Pad[1];
  local_80[0].Pad[2] = local_b8.AllocatorInstance.InlineData[0].Pad[2];
  local_80[0].Pad[3] = local_b8.AllocatorInstance.InlineData[0].Pad[3];
  local_80[1].Pad[0] = local_b8.AllocatorInstance.InlineData[1].Pad[0];
  local_80[1].Pad[1] = local_b8.AllocatorInstance.InlineData[1].Pad[1];
  local_80[1].Pad[2] = local_b8.AllocatorInstance.InlineData[1].Pad[2];
  local_80[1].Pad[3] = local_b8.AllocatorInstance.InlineData[1].Pad[3];
  local_80[2].Pad[0] = local_b8.AllocatorInstance.InlineData[2].Pad[0];
  local_80[2].Pad[1] = local_b8.AllocatorInstance.InlineData[2].Pad[1];
  local_80[2].Pad[2] = local_b8.AllocatorInstance.InlineData[2].Pad[2];
  local_80[2].Pad[3] = local_b8.AllocatorInstance.InlineData[2].Pad[3];
  local_80[3].Pad[0] = local_b8.AllocatorInstance.InlineData[3].Pad[0];
  local_80[3].Pad[1] = local_b8.AllocatorInstance.InlineData[3].Pad[1];
  local_80[3].Pad[2] = local_b8.AllocatorInstance.InlineData[3].Pad[2];
  local_80[3].Pad[3] = local_b8.AllocatorInstance.InlineData[3].Pad[3];
  local_50 = local_b8.NumBits;
  local_4c = local_b8.MaxBits;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0;
  local_70[0].Pad[0] = local_b8.AllocatorInstance.InlineData[4].Pad[0];
  local_70[0].Pad[1] = local_b8.AllocatorInstance.InlineData[4].Pad[1];
  local_70[0].Pad[2] = local_b8.AllocatorInstance.InlineData[4].Pad[2];
  local_70[0].Pad[3] = local_b8.AllocatorInstance.InlineData[4].Pad[3];
  local_70[1].Pad[0] = local_b8.AllocatorInstance.InlineData[5].Pad[0];
  local_70[1].Pad[1] = local_b8.AllocatorInstance.InlineData[5].Pad[1];
  local_70[1].Pad[2] = local_b8.AllocatorInstance.InlineData[5].Pad[2];
  local_70[1].Pad[3] = local_b8.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_68[0].Pad[0] = local_b8.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_68[0].Pad[1] = local_b8.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_68[0].Pad[2] = local_b8.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_68[0].Pad[3] = local_b8.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_68[1].Pad[0] = local_b8.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_68[1].Pad[1] = local_b8.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_68[1].Pad[2] = local_b8.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_68[1].Pad[3] = local_b8.AllocatorInstance.InlineData[7].Pad[3];
  local_60[0].Pad[0] = local_b8.AllocatorInstance.InlineData[8].Pad[0];
  local_60[0].Pad[1] = local_b8.AllocatorInstance.InlineData[8].Pad[1];
  local_60[0].Pad[2] = local_b8.AllocatorInstance.InlineData[8].Pad[2];
  local_60[0].Pad[3] = local_b8.AllocatorInstance.InlineData[8].Pad[3];
  local_60[1].Pad[0] = local_b8.AllocatorInstance.InlineData[9].Pad[0];
  local_60[1].Pad[1] = local_b8.AllocatorInstance.InlineData[9].Pad[1];
  local_60[1].Pad[2] = local_b8.AllocatorInstance.InlineData[9].Pad[2];
  local_60[1].Pad[3] = local_b8.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_58[0].Pad[0] = local_b8.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_58[0].Pad[1] = local_b8.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_58[0].Pad[2] = local_b8.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_58[0].Pad[3] = local_b8.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_58[1].Pad[0] = local_b8.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_58[1].Pad[1] = local_b8.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_58[1].Pad[2] = local_b8.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_58[1].Pad[3] = local_b8.AllocatorInstance.InlineData[0xb].Pad[3];
  if (uVar24 >> 5 == 0) {
LAB_146138070:
    if (*(int *)(uVar27 + 0x50) == *(int *)(uVar27 + 0x7c)) {
      bVar28 = false;
    }
    else {
LAB_146138080:
      bVar28 = true;
    }
    if ((!bVar10) && (!bVar28)) {
      this->FlushState = this->FlushState & ~Instantiation;
    }
    FVar22 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e8;
    if (local_e8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar22 = local_e8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar22,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    return ContinueAllowBudget;
  }
  pTVar21 = local_80;
LAB_146138004:
  if (*(int *)pTVar21->Pad == 0) goto code_r0x000146138009;
  iVar6 = 0;
  bVar28 = *(int *)local_80[uVar26].Pad != 0;
  if (bVar28) {
    for (; (*(uint *)local_80[uVar26].Pad >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  iVar23 = 0x20;
  if (bVar28) {
    iVar23 = iVar6;
  }
  uVar24 = iVar23 + (int)uVar26 * 0x20;
  if ((iVar4 <= (int)uVar24) || (uVar24 == 0xffffffff)) goto LAB_146138070;
  if (((uVar24 & 0xffff0000) != 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(BitIndex & 0xFFFF0000) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                          ,0xba,L""), bVar28)) {
    pcVar7 = (code *)swi(3);
    EVar12 = (*pcVar7)();
    return EVar12;
  }
  if ((short)uVar24 == -1) goto LAB_146138070;
  goto LAB_146138080;
code_r0x000146138009:
  uVar25 = (int)uVar26 + 1;
  uVar26 = (ulonglong)uVar25;
  pTVar21 = pTVar21 + 1;
  if ((int)(uVar24 >> 5) <= (int)uVar25) goto LAB_146138070;
  goto LAB_146138004;
}

// GameThread_UpdateSequenceInstances @ 146138100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::GameThread_UpdateSequenceInstances
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulong64 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  FInstanceHandle FVar6;
  Type TVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FUpdateParamsAndContext *pFVar11;
  FFrameRate FVar12;
  FSharedPlaybackState *this_00;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar15;
  code *pcVar16;
  undefined8 uVar17;
  TArray<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,TSizedDefaultAllocator<32>_>
  *pTVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  ushort uVar22;
  ERunnerFlushResult EVar23;
  int iVar24;
  int iVar25;
  UObject *pUVar26;
  FMovieSceneEvaluationRange *pFVar27;
  IMovieScenePlayer *pIVar28;
  longlong lVar29;
  UMovieSceneSequence *pUVar30;
  UEnum *pUVar31;
  FMovieSceneSequenceHierarchy *pFVar32;
  FMovieSceneSubSequenceData *pFVar33;
  FString *pFVar34;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_01;
  longlong lVar35;
  FSequenceInstance *pFVar36;
  ForElementType<unsigned_int> FVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong *plVar40;
  FScriptContainerElement *pFVar41;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar42;
  byte bVar43;
  TBitArray<FDefaultBitArrayAllocator> *pTVar44;
  ERunnerUpdateFlags EVar45;
  ulonglong uVar46;
  uint uVar47;
  longlong *plVar48;
  FUpdateParamsAndContext *pFVar49;
  uint uVar50;
  FScriptContainerElement *pFVar51;
  bool bVar52;
  undefined1 auStackY_738 [32];
  uint local_6c8;
  TLess<void> local_6c4;
  undefined8 local_6c0;
  undefined1 local_6b8;
  undefined1 local_6b7 [7];
  FInstanceHandle local_6b0;
  ulonglong local_6a8;
  uint local_6a0;
  TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> local_698;
  UMovieSceneEntitySystemLinker *local_688;
  FScriptContainerElement *local_680;
  FUpdateParamsAndContext *local_678;
  ulonglong uStack_670;
  FMovieSceneSequenceID local_668;
  FMovieSceneSequenceID local_664;
  FMovieSceneSequenceID local_660 [2];
  int local_658;
  uint uStack_654;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_650;
  undefined4 local_648;
  int iStack_644;
  int iStack_640;
  undefined4 uStack_63c;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_638;
  FString local_628;
  FString local_618;
  longlong *local_608;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_600;
  int local_5e0;
  UObject *local_5d8;
  FName local_5d0;
  FName local_5c8;
  FName local_5c0;
  FScopedPreAnimatedCaptureSource **local_5b8;
  FScopedPreAnimatedCaptureSource *local_5b0;
  FName local_5a8;
  int local_5a0;
  int local_59c;
  FString local_598;
  FString local_588;
  FString local_578;
  TArray<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,TSizedDefaultAllocator<32>_>
  *local_568;
  UMovieSceneSequence *local_560;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_558;
  FDestructionSentinel local_548;
  FSequenceInstance *local_530;
  UMovieSceneSequence **local_528;
  UObject **local_520;
  FMovieSceneContext local_518;
  FMovieSceneContext local_498;
  undefined1 local_418 [8];
  void *local_410;
  undefined4 local_408;
  FMovieSceneContext local_400;
  FInstanceHandle local_380;
  undefined4 local_37c;
  ERunnerUpdateFlags local_378;
  FString local_370;
  TRange<FFrameTime> local_358;
  TRange<FFrameTime> local_338;
  TRange<FFrameTime> local_318;
  FReadAccessScope local_300;
  TRange<FFrameTime> local_2e8;
  FString local_2d0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2c0;
  FMovieSceneContext local_2a8;
  FInstanceHandle local_228;
  uint local_224;
  ERunnerUpdateFlags local_220;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_218;
  FMovieSceneContext local_200;
  FInstanceHandle local_180;
  undefined4 local_17c;
  ERunnerUpdateFlags local_178;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_170;
  FMovieSceneContext local_158;
  FInstanceHandle local_d8;
  undefined4 local_d4;
  ERunnerUpdateFlags local_d0;
  FReadAccessScope local_c8;
  FMovieSceneEvaluationRange local_b0;
  FMovieSceneEvaluationRange local_88;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_738;
  uVar39 = 0;
  local_6a0 = 0;
  bVar52 = -1 < CpuChannel->Enabled;
  local_688 = param_1;
  if (bVar52) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId719,
               "FMovieSceneEntitySystemRunner::GameThread_UpdateSequenceInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
               ,0x2cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId719);
  }
  local_5b8 = FScopedPreAnimatedCaptureSource::GetCaptureSourcePtr();
  local_5b0 = *local_5b8;
  *local_5b8 = (FScopedPreAnimatedCaptureSource *)0x0;
  pUVar26 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  uVar46 = uVar39;
  if (pUVar26 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar26[0x23].field_0x8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar19)) {
      pcVar16 = (code *)swi(3);
      EVar23 = (*pcVar16)();
      return EVar23;
    }
    uVar46 = *(ulonglong *)&pUVar26[0x23].field_0x8;
  }
  iVar24 = (this->DissectedUpdates).ArrayNum;
  pTVar1 = &this->DissectedUpdates;
  local_6a8 = uVar46;
  if (iVar24 == 0) {
    local_678 = (FUpdateParamsAndContext *)(this->UpdateQueue).AllocatorInstance.Data;
    uStack_670._0_4_ = (this->UpdateQueue).ArrayNum;
    uStack_670._4_4_ = (this->UpdateQueue).ArrayMax;
    local_568 = &this->UpdateQueue;
    local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_698.ArrayNum = 0;
    local_698.ArrayMax = 0;
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    (local_568->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UpdateQueue).ArrayNum = 0;
    (this->UpdateQueue).ArrayMax = 0;
    if ((int)uStack_670 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uStack_670 & 0xffffffff);
    }
    if ((this->DissectedUpdates).ArrayMax < (int)uStack_670) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,(int)uStack_670,&pTVar1->AllocatorInstance,(this->DissectedUpdates).ArrayNum
                 ,&(this->DissectedUpdates).ArrayMax);
    }
    local_6c8 = 0;
    if (0 < (int)uStack_670) {
      local_680 = (FScriptContainerElement *)0x0;
      do {
        pFVar41 = local_680;
        uVar50 = (uint)uVar39;
        uVar47 = 0;
        if ((int)uVar50 < (int)uStack_670) {
          uVar47 = ~uVar50 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar50 = local_6c8, bVar19)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        pFVar49 = (FUpdateParamsAndContext *)(&(local_678->OnFlushed).field_0x0 + (longlong)pFVar41)
        ;
        FVar6 = (pFVar49->Params).InstanceHandle;
        uVar22 = (pFVar49->Params).InstanceHandle.InstanceID;
        uVar47 = (uint)FVar6 & 0xffff;
        local_6b0 = FVar6;
        if ((int)uVar47 < *(int *)(uVar46 + 0x30)) {
          if ((*(int *)(uVar46 + 0x30) <= (int)uVar47) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar19)) {
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
          pTVar18 = local_568;
          uVar39 = local_6a8;
          lVar38 = uVar46 + 0x18;
          if (*(longlong *)(uVar46 + 0x28) != 0) {
            lVar38 = *(longlong *)(uVar46 + 0x28);
          }
          uVar46 = uVar39;
          uVar50 = local_6c8;
          if (((*(uint *)(lVar38 + (ulonglong)(uVar47 >> 5) * 4) >> ((uint)FVar6 & 0x1f) & 1) != 0)
             && (*(ushort *)
                  ((ulonglong)((uint)FVar6 & 0xffff) * 0x140 + 0x134 + *(longlong *)(local_6a8 + 8))
                 == local_6b0.InstanceSerial)) {
            if ((int)(uint)uVar22 < local_60.NumBits) {
              FVar37 = (ForElementType<unsigned_int>)&local_60;
              if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar37 = local_60.AllocatorInstance.SecondaryData;
              }
              if ((*(uint *)((longlong)FVar37 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1
                  ) != 0) {
                pFVar11 = (FUpdateParamsAndContext *)(local_568->AllocatorInstance).Data;
                piVar2 = &local_568->ArrayMax;
                if (((pFVar11 <= pFVar49) && (pFVar49 < pFVar11 + *piVar2)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar16 = (code *)swi(3);
                  EVar23 = (*pcVar16)();
                  return EVar23;
                }
                iVar24 = pTVar18->ArrayNum;
                if (iVar24 == *piVar2) {
                  iVar24 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8a0,&pTVar18->AllocatorInstance,piVar2);
                }
                pTVar18->ArrayNum = iVar24 + 1;
                FUpdateParamsAndContext::FUpdateParamsAndContext
                          ((FUpdateParamsAndContext *)
                           ((pTVar18->AllocatorInstance).Data + (longlong)iVar24 * 0xa0),pFVar49);
                goto LAB_146138fcb;
              }
            }
            iVar24 = ((uint)uVar22 - local_60.NumBits) + 1;
            if (0 < iVar24) {
              iVar25 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_60,iVar24);
              TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_60,iVar25,iVar24,false);
            }
            if ((local_60.NumBits <= (int)(uint)uVar22) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar19)) {
              pcVar16 = (code *)swi(3);
              EVar23 = (*pcVar16)();
              return EVar23;
            }
            FVar37 = (ForElementType<unsigned_int>)&local_60;
            if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar37 = local_60.AllocatorInstance.SecondaryData;
            }
            puVar4 = (uint *)((longlong)FVar37 + (ulonglong)(uVar22 >> 5) * 4);
            *puVar4 = *puVar4 | 1 << ((byte)uVar22 & 0x1f);
            if (((pFVar49->Params).UpdateFlags & FinalDissectionMask) == None) {
              pFVar36 = (FSequenceInstance *)
                        ((ulonglong)(pFVar49->Params).InstanceHandle.InstanceID * 0x140 +
                        *(longlong *)(uVar39 + 8));
              if ((SUB42(pFVar36->RootInstanceHandle,0) == (pFVar36->InstanceHandle).InstanceID) &&
                 (SUB42(pFVar36->RootInstanceHandle,2) == (pFVar36->InstanceHandle).InstanceSerial))
              {
                UE::MovieScene::FSequenceInstance::DissectContext
                          (pFVar36,&pFVar49->Context,&local_698);
                if (local_698.ArrayNum == 0) {
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                            (&local_218,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)pFVar49);
                  FMovieSceneContext::FMovieSceneContext(&local_200,&pFVar49->Context);
                  local_180 = (pFVar49->Params).InstanceHandle;
                  pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                            (pTVar1->AllocatorInstance).Data;
                  local_178 = (pFVar49->Params).UpdateFlags;
                  local_17c = 0x7fffffff;
                  if (((pTVar42 <= &local_218) &&
                      (&local_218 < pTVar42 + (longlong)(this->DissectedUpdates).ArrayMax * 7)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar16 = (code *)swi(3);
                    EVar23 = (*pcVar16)();
                    return EVar23;
                  }
                  iVar24 = (this->DissectedUpdates).ArrayNum;
                  if (iVar24 == (this->DissectedUpdates).ArrayMax) {
                    iVar24 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8a8,&pTVar1->AllocatorInstance,
                                        &(this->DissectedUpdates).ArrayMax);
                  }
                  (this->DissectedUpdates).ArrayNum = iVar24 + 1;
                  pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                            ((pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0xa8);
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(pTVar42,&local_218);
                  FMovieSceneContext::FMovieSceneContext
                            ((FMovieSceneContext *)(pTVar42 + 1),&local_200);
                  *(ushort *)&pTVar42[6].field_0x8 = local_180.InstanceID;
                  *(ushort *)&pTVar42[6].field_0xa = local_180.InstanceSerial;
                  *(undefined4 *)&pTVar42[6].field_0xc = local_17c;
                  *(ERunnerUpdateFlags *)&pTVar42[6].field_0x10 = local_178;
                  FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                            (&local_200.RootToSequenceWarpCounter);
                  DestructItems<FMovieSceneNestedSequenceTransform,int>
                            ((FMovieSceneNestedSequenceTransform *)
                             local_200.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                             Data,local_200.RootToSequenceTransform.NestedTransforms.ArrayNum);
                  if ((FMovieSceneNestedSequenceTransform *)
                      local_200.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                      (FMovieSceneNestedSequenceTransform *)0x0) {
                    FMemory::Free(local_200.RootToSequenceTransform.NestedTransforms.
                                  AllocatorInstance.Data);
                  }
                  this_01 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218;
                  goto LAB_14613867d;
                }
                if ((int)(pFVar49->Context)._padding_ == 1) {
                  AlgoImpl::Reverse<TRange<FFrameTime>_>
                            ((TRange<FFrameTime> *)local_698.AllocatorInstance.Data,
                             local_698.ArrayNum);
                }
                bVar43 = (pFVar49->Context).field_0x7c;
                uVar47 = 0;
                if (0 < local_698.ArrayNum + -1) {
                  local_6c0 = 0;
                  iVar24 = local_698.ArrayNum;
                  do {
                    local_6b0 = *(FInstanceHandle *)&(pFVar49->Context)._padding_;
                    FVar12 = (FFrameRate)(pFVar49->Context)._padding_;
                    EVar45 = (pFVar49->Params).UpdateFlags & ~FinalDissectionMask;
                    local_2c0._0_8_ = 0;
                    local_2c0._8_8_ = 0;
                    TVar7 = (pFVar49->Context).Status;
                    uVar50 = 0;
                    if ((int)uVar47 < iVar24) {
                      uVar50 = ~uVar47 >> 0x1f;
                    }
                    local_2c0._16_8_ = 0;
                    if ((uVar50 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar16 = (code *)swi(3);
                      EVar23 = (*pcVar16)();
                      return EVar23;
                    }
                    local_358.LowerBound._0_8_ =
                         *(undefined8 *)(local_698.AllocatorInstance.Data + local_6c0);
                    local_358._8_8_ =
                         *(undefined8 *)(local_698.AllocatorInstance.Data + local_6c0 + 8);
                    local_358.UpperBound.Value =
                         *(FFrameTime *)(local_698.AllocatorInstance.Data + local_6c0 + 0x10);
                    pFVar27 = FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                                        (&local_b0,&local_358,FVar12,(EPlayDirection)local_6b0);
                    local_518._padding_._0_1_ = (pFVar27->EvaluationRange).LowerBound.Type;
                    local_518._padding_._1_3_ =
                         *(undefined3 *)&(pFVar27->EvaluationRange).LowerBound.field_0x1;
                    local_518._padding_._4_4_ =
                         (pFVar27->EvaluationRange).LowerBound.Value.FrameNumber;
                    local_518._padding_ =
                         *(longlong *)&(pFVar27->EvaluationRange).LowerBound.Value.SubFrame;
                    local_518._padding_ = *(longlong *)&(pFVar27->EvaluationRange).UpperBound.Value;
                    local_518._padding_ = *(longlong *)&pFVar27->CurrentFrameRate;
                    local_518._padding_._0_4_ = pFVar27->Direction;
                    local_518._padding_._4_4_ = pFVar27->TimeOverride;
                    local_518.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
                    local_518.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    local_518.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
                    local_518.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
                    local_518.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
                    local_518.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
                    FMovieSceneWarpCounter::FMovieSceneWarpCounter
                              (&local_518.RootToSequenceWarpCounter);
                    local_518.PrePostRollStartEndTime.Value = -0x80000000;
                    local_518.bHasPostRollStartTime = false;
                    local_518.bHasPreRollEndTime = false;
                    local_518.bSectionPostRoll = false;
                    local_518.bSectionPreRoll = false;
                    local_518.bSilent = false;
                    local_518.bHasLooped = false;
                    local_518.bHasJumped = bVar43;
                    local_518.HierarchicalBias = 0;
                    local_518.Status = TVar7;
                    FMovieSceneContext::FMovieSceneContext(&local_2a8,&local_518);
                    FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                              (&local_518.RootToSequenceWarpCounter);
                    DestructItems<FMovieSceneNestedSequenceTransform,int>
                              ((FMovieSceneNestedSequenceTransform *)
                               local_518.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                               Data,local_518.RootToSequenceTransform.NestedTransforms.ArrayNum);
                    if ((FMovieSceneNestedSequenceTransform *)
                        local_518.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                        (FMovieSceneNestedSequenceTransform *)0x0) {
                      FMemory::Free(local_518.RootToSequenceTransform.NestedTransforms.
                                    AllocatorInstance.Data);
                    }
                    local_228 = (pFVar49->Params).InstanceHandle;
                    pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                              (pTVar1->AllocatorInstance).Data;
                    local_224 = uVar47;
                    local_220 = EVar45;
                    if (((pTVar42 <= &local_2c0) &&
                        (&local_2c0 < pTVar42 + (longlong)(this->DissectedUpdates).ArrayMax * 7)) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar19)) {
                      pcVar16 = (code *)swi(3);
                      EVar23 = (*pcVar16)();
                      return EVar23;
                    }
                    iVar24 = (this->DissectedUpdates).ArrayNum;
                    if (iVar24 == (this->DissectedUpdates).ArrayMax) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x8a8,&pTVar1->AllocatorInstance,
                                          &(this->DissectedUpdates).ArrayMax);
                    }
                    (this->DissectedUpdates).ArrayNum = iVar24 + 1;
                    pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                              ((pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0xa8);
                    *(undefined8 *)pTVar42 = 0;
                    *(undefined8 *)&pTVar42->field_0x8 = 0;
                    *(undefined4 *)&pTVar42->field_0x10 = 0;
                    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                    CopyFrom<FDefaultDelegateUserPolicy>(pTVar42,&local_2c0);
                    FMovieSceneContext::FMovieSceneContext
                              ((FMovieSceneContext *)(pTVar42 + 1),&local_2a8);
                    bVar43 = 0;
                    *(ushort *)&pTVar42[6].field_0x8 = local_228.InstanceID;
                    *(ushort *)&pTVar42[6].field_0xa = local_228.InstanceSerial;
                    *(uint *)&pTVar42[6].field_0xc = local_224;
                    *(ERunnerUpdateFlags *)&pTVar42[6].field_0x10 = local_220;
                    if (uVar47 == 0) {
                      MarkForUpdate(this,(pFVar49->Params).InstanceHandle,EVar45);
                    }
                    FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                              (&local_2a8.RootToSequenceWarpCounter);
                    DestructItems<FMovieSceneNestedSequenceTransform,int>
                              ((FMovieSceneNestedSequenceTransform *)
                               local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                               Data,local_2a8.RootToSequenceTransform.NestedTransforms.ArrayNum);
                    if ((FMovieSceneNestedSequenceTransform *)
                        local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                        (FMovieSceneNestedSequenceTransform *)0x0) {
                      FMemory::Free(local_2a8.RootToSequenceTransform.NestedTransforms.
                                    AllocatorInstance.Data);
                    }
                    TDelegateBase<FNotThreadSafeDelegateMode>::
                    ~TDelegateBase<FNotThreadSafeDelegateMode>
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c0);
                    uVar47 = uVar47 + 1;
                    local_6c0 = local_6c0 + 0x18;
                    iVar24 = local_698.ArrayNum;
                  } while ((int)uVar47 < local_698.ArrayNum + -1);
                }
                local_418 = (undefined1  [8])0x0;
                local_410 = (void *)0x0;
                local_408 = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar49,
                           (FWriteAccessScope *)&local_548);
                if (local_410 != (void *)0x0) {
                  FMemory::Free(local_410);
                }
                local_410 = *(void **)&(pFVar49->OnFlushed).field_0x8;
                *(undefined8 *)&(pFVar49->OnFlushed).field_0x8 = 0;
                local_408 = *(undefined4 *)&(pFVar49->OnFlushed).field_0x10;
                *(undefined4 *)&(pFVar49->OnFlushed).field_0x10 = 0;
                if (local_548.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
                }
                TVar7 = (pFVar49->Context).Status;
                lVar38 = (pFVar49->Context)._padding_;
                FVar12 = (FFrameRate)(pFVar49->Context)._padding_;
                uVar47 = 0;
                if ((int)(local_698.ArrayNum - 1U) < local_698.ArrayNum) {
                  uVar47 = ~(local_698.ArrayNum - 1U) >> 0x1f;
                }
                if (uVar47 == 0) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar19) {
                    pcVar16 = (code *)swi(3);
                    EVar23 = (*pcVar16)();
                    return EVar23;
                  }
                }
                local_338.LowerBound._0_8_ =
                     *(undefined8 *)
                      &local_698.AllocatorInstance.Data[(longlong)(local_698.ArrayNum + -1) * 0x18].
                       field_0x0;
                local_338._8_8_ =
                     *(undefined8 *)
                      (local_698.AllocatorInstance.Data + (longlong)(local_698.ArrayNum + -1) * 0x18
                      + 8);
                local_338.UpperBound.Value =
                     *(FFrameTime *)
                      (local_698.AllocatorInstance.Data +
                      (longlong)(local_698.ArrayNum + -1) * 0x18 + 0x10);
                pFVar27 = FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                                    (&local_88,&local_338,FVar12,(EPlayDirection)lVar38);
                local_498._padding_._0_1_ = (pFVar27->EvaluationRange).LowerBound.Type;
                local_498._padding_._1_3_ =
                     *(undefined3 *)&(pFVar27->EvaluationRange).LowerBound.field_0x1;
                local_498._padding_._4_4_ = (pFVar27->EvaluationRange).LowerBound.Value.FrameNumber;
                local_498._padding_ =
                     *(longlong *)&(pFVar27->EvaluationRange).LowerBound.Value.SubFrame;
                local_498._padding_ = *(longlong *)&(pFVar27->EvaluationRange).UpperBound.Value;
                local_498._padding_ = *(longlong *)&pFVar27->CurrentFrameRate;
                local_498._padding_._0_4_ = pFVar27->Direction;
                local_498._padding_._4_4_ = pFVar27->TimeOverride;
                local_498.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
                local_498.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
                local_498.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
                local_498.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                local_498.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
                local_498.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
                FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_498.RootToSequenceWarpCounter)
                ;
                local_498.PrePostRollStartEndTime.Value = -0x80000000;
                local_498.bHasPostRollStartTime = false;
                local_498.bHasPreRollEndTime = false;
                local_498.bSectionPostRoll = false;
                local_498.bSectionPreRoll = false;
                local_498.bSilent = false;
                local_498.bHasLooped = false;
                local_498.bHasJumped = bVar43;
                local_498.HierarchicalBias = 0;
                local_498.Status = TVar7;
                FMovieSceneContext::FMovieSceneContext(&local_400,&local_498);
                FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                          (&local_498.RootToSequenceWarpCounter);
                DestructItems<FMovieSceneNestedSequenceTransform,int>
                          ((FMovieSceneNestedSequenceTransform *)
                           local_498.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data
                           ,local_498.RootToSequenceTransform.NestedTransforms.ArrayNum);
                if ((FMovieSceneNestedSequenceTransform *)
                    local_498.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                    (FMovieSceneNestedSequenceTransform *)0x0) {
                  FMemory::Free(local_498.RootToSequenceTransform.NestedTransforms.AllocatorInstance
                                .Data);
                }
                local_380 = (pFVar49->Params).InstanceHandle;
                pFVar41 = (pTVar1->AllocatorInstance).Data;
                local_378 = (pFVar49->Params).UpdateFlags;
                local_37c = 0x7fffffff;
                if (((pFVar41 <= (FScriptContainerElement *)local_418) &&
                    ((FScriptContainerElement *)local_418 <
                     pFVar41 + (longlong)(this->DissectedUpdates).ArrayMax * 0xa8)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar16 = (code *)swi(3);
                  EVar23 = (*pcVar16)();
                  return EVar23;
                }
                iVar24 = (this->DissectedUpdates).ArrayNum;
                if (iVar24 == (this->DissectedUpdates).ArrayMax) {
                  iVar24 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8a8,&pTVar1->AllocatorInstance,
                                      &(this->DissectedUpdates).ArrayMax);
                }
                (this->DissectedUpdates).ArrayNum = iVar24 + 1;
                pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                          ((pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0xa8);
                *(undefined8 *)pTVar42 = 0;
                *(undefined8 *)&pTVar42->field_0x8 = 0;
                *(undefined4 *)&pTVar42->field_0x10 = 0;
                TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CopyFrom<FDefaultDelegateUserPolicy>
                          (pTVar42,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                   local_418);
                FMovieSceneContext::FMovieSceneContext
                          ((FMovieSceneContext *)(pTVar42 + 1),&local_400);
                *(ushort *)&pTVar42[6].field_0x8 = local_380.InstanceID;
                *(ushort *)&pTVar42[6].field_0xa = local_380.InstanceSerial;
                *(undefined4 *)&pTVar42[6].field_0xc = local_37c;
                *(ERunnerUpdateFlags *)&pTVar42[6].field_0x10 = local_378;
                if (local_698.ArrayNum == 1) {
                  MarkForUpdate(this,(pFVar49->Params).InstanceHandle,(pFVar49->Params).UpdateFlags)
                  ;
                }
                uVar17 = local_698._8_8_;
                iVar24 = local_698.ArrayMax;
                local_698._8_8_ = (ulonglong)(uint)local_698.ArrayMax << 0x20;
                if (((longlong)uVar17 < 0) && (iVar24 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,4,0,&local_698.AllocatorInstance,0,&local_698.ArrayMax);
                }
                FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                          (&local_400.RootToSequenceWarpCounter);
                DestructItems<FMovieSceneNestedSequenceTransform,int>
                          ((FMovieSceneNestedSequenceTransform *)
                           local_400.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data
                           ,local_400.RootToSequenceTransform.NestedTransforms.ArrayNum);
                if ((FMovieSceneNestedSequenceTransform *)
                    local_400.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                    (FMovieSceneNestedSequenceTransform *)0x0) {
                  FMemory::Free(local_400.RootToSequenceTransform.NestedTransforms.AllocatorInstance
                                .Data);
                }
                TDelegateBase<FNotThreadSafeDelegateMode>::
                ~TDelegateBase<FNotThreadSafeDelegateMode>
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
                uVar46 = local_6a8;
                uVar50 = local_6c8;
              }
              else {
                pTVar13 = (pFVar36->SharedPlaybackState).SharedReferenceCount.ReferenceController;
                this_00 = (pFVar36->SharedPlaybackState).Object;
                if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar13->SharedReferenceCount =
                       (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                  UNLOCK();
                  LOCK();
                  pTVar13->SharedReferenceCount =
                       (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar13);
                local_5d8 = FWeakObjectPtr::Get(&(this_00->WeakRootSequence).WeakPtr);
                local_660[0].Value = (pFVar36->SequenceID).Value;
                local_560 = UE::MovieScene::FSharedPlaybackState::GetSequence(this_00,local_660);
                if ((SUB42(pFVar36->RootInstanceHandle,0) != (pFVar36->InstanceHandle).InstanceID)
                   || (SUB42(pFVar36->RootInstanceHandle,2) !=
                       (pFVar36->InstanceHandle).InstanceSerial)) {
                  local_528 = &local_560;
                  local_520 = &local_5d8;
                  local_530 = pFVar36;
                  `FMovieSceneEntitySystemRunner::GameThread_UpdateSequenceInstances'::__l20::
                  <lambda_1>::operator()(&local_530);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar13);
                uVar46 = local_6a8;
              }
            }
            else {
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                        (&local_170,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)pFVar49);
              FMovieSceneContext::FMovieSceneContext(&local_158,&pFVar49->Context);
              local_d8 = (pFVar49->Params).InstanceHandle;
              pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                        (pTVar1->AllocatorInstance).Data;
              local_d0 = (pFVar49->Params).UpdateFlags;
              local_d4 = 0x7fffffff;
              if (((pTVar42 <= &local_170) &&
                  (&local_170 < pTVar42 + (longlong)(this->DissectedUpdates).ArrayMax * 7)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar16 = (code *)swi(3);
                EVar23 = (*pcVar16)();
                return EVar23;
              }
              iVar24 = (this->DissectedUpdates).ArrayNum;
              if (iVar24 == (this->DissectedUpdates).ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x8a8,&pTVar1->AllocatorInstance,
                                    &(this->DissectedUpdates).ArrayMax);
              }
              (this->DissectedUpdates).ArrayNum = iVar24 + 1;
              pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                        ((pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0xa8);
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(pTVar42,&local_170);
              FMovieSceneContext::FMovieSceneContext((FMovieSceneContext *)(pTVar42 + 1),&local_158)
              ;
              *(ushort *)&pTVar42[6].field_0x8 = local_d8.InstanceID;
              *(ushort *)&pTVar42[6].field_0xa = local_d8.InstanceSerial;
              *(undefined4 *)&pTVar42[6].field_0xc = local_d4;
              *(ERunnerUpdateFlags *)&pTVar42[6].field_0x10 = local_d0;
              FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_158.RootToSequenceWarpCounter);
              DestructItems<FMovieSceneNestedSequenceTransform,int>
                        ((FMovieSceneNestedSequenceTransform *)
                         local_158.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                         local_158.RootToSequenceTransform.NestedTransforms.ArrayNum);
              if ((FMovieSceneNestedSequenceTransform *)
                  local_158.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                  (FMovieSceneNestedSequenceTransform *)0x0) {
                FMemory::Free(local_158.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                              Data);
              }
              this_01 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170;
LAB_14613867d:
              TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                        (this_01);
              MarkForUpdate(this,(pFVar49->Params).InstanceHandle,(pFVar49->Params).UpdateFlags);
            }
          }
        }
LAB_146138fcb:
        local_6c8 = uVar50 + 1;
        uVar39 = (ulonglong)local_6c8;
        local_680 = local_680 + 0xa0;
      } while ((int)local_6c8 < (int)uStack_670);
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_>
              ((FDissectedUpdate *)(this->DissectedUpdates).AllocatorInstance.Data,
               (this->DissectedUpdates).ArrayNum,
               (TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>)0x9c,
               local_6c4);
    pFVar49 = local_678;
    DestructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>
              (local_678,(int)uStack_670);
    if (pFVar49 != (FUpdateParamsAndContext *)0x0) {
      FMemory::Free(pFVar49);
    }
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if ((TRange<FFrameTime> *)local_698.AllocatorInstance.Data != (TRange<FFrameTime> *)0x0) {
      FMemory::Free(local_698.AllocatorInstance.Data);
    }
  }
  else {
    if ((iVar24 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar16 = (code *)swi(3);
      EVar23 = (*pcVar16)();
      return EVar23;
    }
    iVar24 = *(int *)((pTVar1->AllocatorInstance).Data + 0x9c);
    uVar46 = uVar39;
    if (0 < (this->DissectedUpdates).ArrayNum) {
      do {
        uVar50 = (uint)uVar39;
        uVar47 = 0;
        if ((int)uVar50 < (this->DissectedUpdates).ArrayNum) {
          uVar47 = ~uVar50 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        if (*(int *)((pTVar1->AllocatorInstance).Data + uVar46 + 0x9c) != iVar24) break;
        uVar47 = 0;
        if ((int)uVar50 < (this->DissectedUpdates).ArrayNum) {
          uVar47 = ~uVar50 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        pFVar41 = (pTVar1->AllocatorInstance).Data;
        MarkForUpdate(this,*(FInstanceHandle *)(pFVar41 + uVar46 + 0x98),
                      *(ERunnerUpdateFlags *)(pFVar41 + uVar46 + 0xa0));
        uVar39 = (ulonglong)(uVar50 + 1);
        uVar46 = uVar46 + 0xa8;
      } while ((int)(uVar50 + 1) < (this->DissectedUpdates).ArrayNum);
    }
  }
  uVar39 = local_6a8;
  if ((this->CurrentInstances).ArrayNum == 0) {
    plVar48 = (longlong *)(local_6a8 + 8);
    local_658 = 0;
    iVar24 = *(int *)(local_6a8 + 0x30);
    pTStack_650 = (TBitArray<FDefaultBitArrayAllocator> *)(local_6a8 + 0x18);
    uStack_654 = 1;
    iStack_644 = 0;
    iStack_640 = 0;
    if (iVar24 != 0) {
      pTVar44 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_6a8 + 0x28);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_6a8 + 0x28) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar44 = pTStack_650;
      }
      uVar47 = *(uint *)(pTVar44->AllocatorInstance).InlineData;
      local_658 = 0;
      iStack_640 = 0;
      while (uVar47 == 0) {
        iStack_640 = iStack_640 + 0x20;
        lVar38 = (longlong)local_658;
        local_658 = local_658 + 1;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < local_658) goto LAB_14613922a;
        uVar47 = *(uint *)((pTVar44->AllocatorInstance).InlineData + lVar38 * 4 + 4);
      }
      uStack_654 = -uVar47 & uVar47;
      uVar46 = (ulonglong)uStack_654 * 2 + 1;
      lVar38 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_5a0 = (int)lVar38;
      iStack_644 = local_5a0 + -1 + iStack_640;
      if (iVar24 < iStack_644) {
LAB_14613922a:
        iStack_644 = iVar24;
      }
    }
    local_648 = 0xffffffff;
    uVar47 = *(uint *)(local_6a8 + 0x30);
    local_5e0 = *(int *)(local_6a8 + 0x10) - *(int *)(local_6a8 + 0x3c);
    local_600._padding_ = CONCAT44(uStack_654,local_658);
    iVar24 = (int)uVar47 >> 5;
    local_600.CurrentBitIndex = iStack_644;
    local_600.UnvisitedBitMask = 0xffffffff;
    local_600._28_4_ = uStack_63c;
    local_600.BaseBitIndex = iStack_640;
    uVar50 = uVar47 & 0xffffffe0;
    local_608 = plVar48;
    local_600.Array = pTStack_650;
    if (((int)uVar47 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar16 = (code *)swi(3);
      EVar23 = (*pcVar16)();
      return EVar23;
    }
    uVar8 = *(uint *)(uVar39 + 0x30);
    if (uVar47 != uVar8) {
      lVar38 = uVar39 + 0x18;
      if (*(longlong *)(uVar39 + 0x28) != 0) {
        lVar38 = *(longlong *)(uVar39 + 0x28);
      }
      uVar47 = -1 << ((byte)uVar47 & 0x1f) & *(uint *)(lVar38 + (longlong)iVar24 * 4);
      while (uVar47 == 0) {
        lVar35 = (longlong)iVar24;
        uVar50 = uVar50 + 0x20;
        iVar24 = iVar24 + 1;
        uVar47 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_146139314;
        uVar47 = *(uint *)(lVar38 + 4 + lVar35 * 4);
      }
      uVar46 = (ulonglong)(-uVar47 & uVar47) * 2 + 1;
      lVar38 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_59c = (int)lVar38;
      uVar47 = local_59c + -1 + uVar50;
      if ((int)uVar8 < (int)uVar47) {
        uVar47 = uVar8;
      }
    }
LAB_146139314:
    plVar40 = plVar48;
    while( true ) {
      if ((int)plVar40[1] - *(int *)((longlong)plVar40 + 0x34) != local_5e0) {
        local_6b8 = 0;
        `TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
        TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_6b8);
      }
      if (((local_600.CurrentBitIndex == uVar47) &&
          (local_600.Array == (TBitArray<FDefaultBitArrayAllocator> *)(uVar39 + 0x18))) &&
         (plVar40 == plVar48)) break;
      MarkForUpdate(this,*(FInstanceHandle *)
                          ((longlong)local_600.CurrentBitIndex * 0x140 + 0x132 + *plVar40),None);
      local_600.UnvisitedBitMask = local_600.UnvisitedBitMask & ~local_600._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_600);
      plVar40 = local_608;
    }
  }
  uVar39 = local_6a8;
  this->AccumulatedUpdateFlags = None;
  pFVar51 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar24 = (this->CurrentInstances).ArrayNum;
  pFVar41 = pFVar51 + (longlong)iVar24 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar24) {
      local_6b7[0] = 0;
      `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FQueuedUpdateParams,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_6b7);
    }
    if (pFVar51 == pFVar41) break;
    if (((byte)pFVar51[4] & 4) == 0) {
      lVar38 = *(longlong *)(uVar39 + 8);
      lVar35 = (ulonglong)*(ushort *)pFVar51 * 0x140;
      this->AccumulatedUpdateFlags =
           this->AccumulatedUpdateFlags | *(ESequenceInstanceUpdateFlags *)(lVar35 + 0x130 + lVar38)
      ;
      pTVar13 = *(TReferenceControllerBase<1> **)(lVar35 + 0x120 + lVar38);
      local_638.Object = *(FSharedPlaybackState **)(lVar35 + 0x118 + lVar38);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_638.SharedReferenceCount.ReferenceController = pTVar13;
      uVar22 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayerIndex(&local_638);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if (uVar22 != 0xffff) {
        IMovieScenePlayer::SetIsEvaluatingFlag(uVar22,true);
      }
      if ((*(byte *)(lVar35 + 0x130 + lVar38) & 2) != 0) {
        uVar9 = *(undefined4 *)(lVar35 + 0x132 + lVar38);
        uVar10 = *(undefined4 *)(lVar35 + 0x13a + lVar38);
        if (((short)uVar10 == (short)uVar9) &&
           ((short)((uint)uVar10 >> 0x10) == (short)((uint)uVar9 >> 0x10))) {
          local_558.Object = *(FSharedPlaybackState **)(lVar35 + 0x118 + lVar38);
          local_558.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar35 + 0x120 + lVar38);
          if (local_558.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pIVar28 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_558);
          if (pIVar28 != (IMovieScenePlayer *)0x0) {
            (**(code **)(pIVar28->_padding_ + 0xa8))(pIVar28,lVar38 + 0x68 + lVar35);
          }
        }
      }
    }
    pFVar51 = pFVar51 + 8;
  }
  puVar3 = &(local_688->EntityManager).SystemSerialNumber;
  *puVar3 = *puVar3 + 1;
  if ((6 < (byte)LogMovieSceneECS._0_1_) && (0 < (this->DissectedUpdates).ArrayNum)) {
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    }
    uVar47 = 0;
    if (0 < (this->DissectedUpdates).ArrayNum) {
      lVar38 = 0;
      do {
        uVar50 = 0;
        if ((int)uVar47 < (this->DissectedUpdates).ArrayNum) {
          uVar50 = ~uVar47 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        pFVar41 = (this->DissectedUpdates).AllocatorInstance.Data + lVar38;
        lVar35 = *(longlong *)(local_6a8 + 8);
        lVar29 = (ulonglong)*(ushort *)&pFVar41[0x98].field_0x0 * 0x140;
        local_688 = *(UMovieSceneEntitySystemLinker **)(lVar29 + 0x120 + lVar35);
        lVar14 = *(longlong *)(lVar29 + 0x118 + lVar35);
        if (local_688 != (UMovieSceneEntitySystemLinker *)0x0) {
          LOCK();
          *(int *)&local_688->_padding_ = (int)local_688->_padding_ + 1;
          UNLOCK();
        }
        local_668.Value = *(uint *)(lVar29 + 0x128 + lVar35);
        if (local_668.Value == 0) {
          pUVar30 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + 0x10));
        }
        else if ((((*(UMovieSceneCompiledDataManager **)(lVar14 + 0x28) ==
                    (UMovieSceneCompiledDataManager *)0x0) || (*(int *)(lVar14 + 0x34) == -1)) ||
                 (pFVar32 = UMovieSceneCompiledDataManager::FindHierarchy
                                      (*(UMovieSceneCompiledDataManager **)(lVar14 + 0x28),
                                       (FMovieSceneCompiledDataID)*(int *)(lVar14 + 0x34)),
                 pFVar32 == (FMovieSceneSequenceHierarchy *)0x0)) ||
                (pFVar33 = FMovieSceneSequenceHierarchy::FindSubData(pFVar32,&local_668),
                pFVar33 == (FMovieSceneSubSequenceData *)0x0)) {
          pUVar30 = (UMovieSceneSequence *)0x0;
        }
        else {
          pUVar30 = FMovieSceneSubSequenceData::GetSequence(pFVar33);
        }
        if (6 < (byte)LogMovieSceneECS._0_1_) {
          if (pUVar30 == (UMovieSceneSequence *)0x0) {
            ::FString::FString(&local_628,L"None");
          }
          else {
            local_5d0 = (FName)pUVar30->_padding_;
            ::FName::ToString(&local_5d0,&local_628);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar41,&local_c8);
          if ((*(int *)&pFVar41[0x10].field_0x0 != 0) &&
             (*(longlong **)&pFVar41[8].field_0x0 != (longlong *)0x0)) {
            (**(code **)(**(longlong **)&pFVar41[8].field_0x0 + 0x38))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_c8);
          local_318.LowerBound._0_8_ = *(undefined8 *)&pFVar41[0x18].field_0x0;
          local_318._8_8_ = *(undefined8 *)&pFVar41[0x20].field_0x0;
          local_318.UpperBound.Value = *(FFrameTime *)(pFVar41 + 0x28);
          ::LexToString(&local_2d0,&local_318);
          local_6b0 = *(FInstanceHandle *)&pFVar41[0x88].field_0x0;
          pUVar31 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
          if ((pUVar31 == (UEnum *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnumClass != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xca4,L""), bVar19)) {
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
          UEnum::GetNameByValue(pUVar31,(long64)&local_5a8);
          ::FName::ToString(&local_5a8,&local_588);
          local_6b0.InstanceSerial = 0;
          local_6b0.InstanceID = *(ushort *)(pFVar41 + 0x9a);
          uVar50 = local_6a0;
          if (*(int *)(pFVar41 + 0x9c) != 0x7fffffff) {
            uVar50 = local_6a0 | 1;
            local_6a0 = uVar50;
            ::FString::PrintfImpl(&local_598,L"%d");
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
          if (((uVar50 & 1) != 0) &&
             (local_6a0 = uVar50 & 0xfffffffe,
             local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_598.Data.AllocatorInstance.Data);
          }
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_688);
        uVar47 = uVar47 + 1;
        lVar38 = lVar38 + 0xa8;
      } while ((int)uVar47 < (this->DissectedUpdates).ArrayNum);
    }
  }
  if ((this->DissectedUpdates).ArrayNum != 0) {
    bVar19 = this->bIsUpdatingSequence;
    this->bIsUpdatingSequence = true;
    if (((this->DissectedUpdates).ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar16 = (code *)swi(3);
      EVar23 = (*pcVar16)();
      return EVar23;
    }
    uVar39 = local_6a8;
    uVar47 = 0;
    iVar24 = *(int *)((this->DissectedUpdates).AllocatorInstance.Data + 0x9c);
    if (0 < (this->DissectedUpdates).ArrayNum) {
      lVar38 = 0;
      do {
        uVar50 = 0;
        if ((int)uVar47 < (this->DissectedUpdates).ArrayNum) {
          uVar50 = ~uVar47 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        if (*(int *)((this->DissectedUpdates).AllocatorInstance.Data + lVar38 + 0x9c) != iVar24)
        break;
        uVar50 = 0;
        if ((int)uVar47 < (this->DissectedUpdates).ArrayNum) {
          uVar50 = ~uVar47 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        pTVar42 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                  ((this->DissectedUpdates).AllocatorInstance.Data + lVar38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar42,&local_300);
        if (((*(int *)&pTVar42->field_0x10 == 0) ||
            (*(longlong **)&pTVar42->field_0x8 == (longlong *)0x0)) ||
           (cVar21 = (**(code **)(**(longlong **)&pTVar42->field_0x8 + 0x38))(), cVar21 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_300);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_300);
          pTVar15 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                    (this->OnFlushedDelegates).AllocatorInstance.Data;
          if (((pTVar15 <= pTVar42) && (pTVar42 < pTVar15 + (this->OnFlushedDelegates).ArrayMax)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
          iVar25 = (this->OnFlushedDelegates).ArrayNum;
          piVar2 = &(this->OnFlushedDelegates).ArrayMax;
          if (iVar25 == *piVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(this->OnFlushedDelegates).AllocatorInstance,piVar2);
          }
          (this->OnFlushedDelegates).ArrayNum = iVar25 + 1;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     ((this->OnFlushedDelegates).AllocatorInstance.Data + (longlong)iVar25 * 0x18),
                     pTVar42);
          this->AccumulatedUpdateFlags = this->AccumulatedUpdateFlags | NeedsPostEvaluation;
        }
        uVar50 = *(uint *)&pTVar42[6].field_0x8;
        if ((int)(uVar50 & 0xffff) < *(int *)(uVar39 + 0x30)) {
          if ((*(int *)(uVar39 + 0x30) <= (int)(uVar50 & 0xffff)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar20)) {
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
          lVar35 = uVar39 + 0x18;
          if (*(longlong *)(uVar39 + 0x28) != 0) {
            lVar35 = *(longlong *)(uVar39 + 0x28);
          }
          if ((*(uint *)(lVar35 + (ulonglong)((uVar50 & 0xffff) >> 5) * 4) >> (uVar50 & 0x1f) & 1)
              == 0) goto LAB_146139b70;
          local_6c0._2_2_ = (short)(uVar50 >> 0x10);
          if (*(short *)((ulonglong)(uVar50 & 0xffff) * 0x140 + 0x134 + *(longlong *)(uVar39 + 8))
              != local_6c0._2_2_) goto LAB_146139b70;
          pFVar36 = (FSequenceInstance *)
                    ((ulonglong)*(ushort *)&pTVar42[6].field_0x8 * 0x140 + *(longlong *)(uVar39 + 8)
                    );
          if ((*(uint *)&pTVar42[6].field_0x10 & 2) == 0) {
            if ((*(uint *)&pTVar42[6].field_0x10 & 4) == 0) {
              UE::MovieScene::FSequenceInstance::Update(pFVar36,(FMovieSceneContext *)(pTVar42 + 1))
              ;
            }
            else if ((!pFVar36->bFinished) &&
                    (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<6835856732699231159>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                                         ,0x3b7,"Instance.HasFinished()"), bVar20))
            goto code_r0x000146139b9c;
          }
          else {
            UE::MovieScene::FSequenceInstance::Finish(pFVar36);
          }
        }
        else {
LAB_146139b70:
          bVar20 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6835856732699231148>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                              ,0x3ac,"InstanceRegistry->IsHandleValid(Update.InstanceHandle)");
          if (bVar20) {
code_r0x000146139b9c:
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
        }
        uVar47 = uVar47 + 1;
        lVar38 = lVar38 + 0xa8;
      } while ((int)uVar47 < (this->DissectedUpdates).ArrayNum);
    }
    uVar50 = 0;
    if ((int)uVar47 <= (this->DissectedUpdates).ArrayNum) {
      uVar50 = ~uVar47 >> 0x1f;
    }
    if ((uVar50 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar20)) {
      pcVar16 = (code *)swi(3);
      EVar23 = (*pcVar16)();
      return EVar23;
    }
    if (uVar47 != 0) {
      TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_>::
      RemoveAtImpl(&this->DissectedUpdates,0,uVar47);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,&(this->DissectedUpdates).AllocatorInstance,
                 (this->DissectedUpdates).ArrayNum,&(this->DissectedUpdates).ArrayMax);
    }
    this->bIsUpdatingSequence = bVar19;
  }
  if ((6 < (byte)LogMovieSceneECS._0_1_) && (0 < (this->CurrentInstances).ArrayNum)) {
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    }
    uVar39 = local_6a8;
    uVar47 = 0;
    if (0 < (this->CurrentInstances).ArrayNum) {
      lVar38 = 0;
      do {
        uVar50 = 0;
        if ((int)uVar47 < (this->CurrentInstances).ArrayNum) {
          uVar50 = ~uVar47 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          EVar23 = (*pcVar16)();
          return EVar23;
        }
        lVar35 = *(longlong *)(uVar39 + 8);
        lVar29 = (ulonglong)*(ushort *)((this->CurrentInstances).AllocatorInstance.Data + lVar38) *
                 0x140;
        pTVar13 = *(TReferenceControllerBase<1> **)(lVar29 + 0x120 + lVar35);
        lVar14 = *(longlong *)(lVar29 + 0x118 + lVar35);
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_664.Value = *(uint *)(lVar29 + 0x128 + lVar35);
        if (local_664.Value == 0) {
          pUVar30 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + 0x10));
        }
        else if ((((*(UMovieSceneCompiledDataManager **)(lVar14 + 0x28) ==
                    (UMovieSceneCompiledDataManager *)0x0) || (*(int *)(lVar14 + 0x34) == -1)) ||
                 (pFVar32 = UMovieSceneCompiledDataManager::FindHierarchy
                                      (*(UMovieSceneCompiledDataManager **)(lVar14 + 0x28),
                                       (FMovieSceneCompiledDataID)*(int *)(lVar14 + 0x34)),
                 pFVar32 == (FMovieSceneSequenceHierarchy *)0x0)) ||
                (pFVar33 = FMovieSceneSequenceHierarchy::FindSubData(pFVar32,&local_664),
                pFVar33 == (FMovieSceneSubSequenceData *)0x0)) {
          pUVar30 = (UMovieSceneSequence *)0x0;
        }
        else {
          pUVar30 = FMovieSceneSubSequenceData::GetSequence(pFVar33);
        }
        if (6 < (byte)LogMovieSceneECS._0_1_) {
          if (pUVar30 == (UMovieSceneSequence *)0x0) {
            ::FString::FString(&local_618,L"None");
          }
          else {
            local_5c8 = (FName)pUVar30->_padding_;
            ::FName::ToString(&local_5c8,&local_618);
          }
          puVar5 = (undefined8 *)(lVar29 + 0x68 + lVar35);
          local_2e8.LowerBound._0_8_ = *puVar5;
          local_2e8._8_8_ = puVar5[1];
          local_688 = (UMovieSceneEntitySystemLinker *)L"";
          if (local_618.Data.ArrayNum != 0) {
            local_688 = (UMovieSceneEntitySystemLinker *)local_618.Data.AllocatorInstance.Data;
          }
          local_2e8.UpperBound.Value = *(FFrameTime *)(lVar29 + 0x78 + lVar35);
          pFVar34 = ::LexToString(&local_370,&local_2e8);
          if ((pFVar34->Data).ArrayNum == 0) {
            local_680 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_680 = (pFVar34->Data).AllocatorInstance.Data;
          }
          pUVar31 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
          if ((pUVar31 == (UEnum *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EnumClass != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xca4,L""), bVar19)) {
            pcVar16 = (code *)swi(3);
            EVar23 = (*pcVar16)();
            return EVar23;
          }
          UEnum::GetNameByValue(pUVar31,(long64)&local_5c0);
          ::FName::ToString(&local_5c0,&local_578);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
          if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_578.Data.AllocatorInstance.Data);
          }
          if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Data.AllocatorInstance.Data);
          }
          if ((UMovieSceneEntitySystemLinker *)local_618.Data.AllocatorInstance.Data !=
              (UMovieSceneEntitySystemLinker *)0x0) {
            FMemory::Free(local_618.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        uVar47 = uVar47 + 1;
        lVar38 = lVar38 + 8;
      } while ((int)uVar47 < (this->CurrentInstances).ArrayNum);
    }
  }
  *local_5b8 = local_5b0;
  if (bVar52) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return ContinueAllowBudget;
}

// GetEntityManager @ 14613aae0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityManager * __thiscall
FMovieSceneEntitySystemRunner::GetEntityManager(FMovieSceneEntitySystemRunner *this)

{
  UObject *pUVar1;
  FEntityManager *pFVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  pFVar2 = (FEntityManager *)0x0;
  if (pUVar1 != (UObject *)0x0) {
    pFVar2 = (FEntityManager *)(pUVar1 + 1);
  }
  return pFVar2;
}

// GetInstanceRegistry @ 14613b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceRegistry * __thiscall
FMovieSceneEntitySystemRunner::GetInstanceRegistry(FMovieSceneEntitySystemRunner *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FInstanceRegistry *pFVar4;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    return (FInstanceRegistry *)0x0;
  }
  if (*(longlong *)&pUVar3[0x23].field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInstanceRegistry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FInstanceRegistry **)&pUVar3[0x23].field_0x8;
}

// GetQueuedEventTriggers @ 14613c8c0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FMovieSceneEntitySystemRunner::GetQueuedEventTriggers(FMovieSceneEntitySystemRunner *this)

{
  code *pcVar1;
  bool bVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  if (this->bCanQueueEventTriggers != false) {
    return &this->EventTriggers;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bCanQueueEventTriggers",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                     ,0x58f,L"Can\'t queue event triggers at this point in the update loop.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar1)();
    return pTVar3;
  }
  return &this->EventTriggers;
}

// GetQueuedUpdateCount @ 14613c920

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMovieSceneEntitySystemRunner::GetQueuedUpdateCount(FMovieSceneEntitySystemRunner *this)

{
  return (this->DissectedUpdates).ArrayNum + (this->UpdateQueue).ArrayNum;
}

// HasQueuedUpdates @ 14613dd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::HasQueuedUpdates
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->UpdateQueue).ArrayNum;
  pFVar2 = (this->UpdateQueue).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->UpdateQueue).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) goto LAB_14613dda5;
    if (((ushort)*(undefined4 *)(pFVar2 + 0x98) == param_1.InstanceID) &&
       ((ushort)((uint)*(undefined4 *)(pFVar2 + 0x98) >> 0x10) == param_1.InstanceSerial)) break;
    pFVar2 = pFVar2 + 0xa0;
  }
  if (pFVar2 == (FScriptContainerElement *)0x0) {
LAB_14613dda5:
    iVar1 = (this->DissectedUpdates).ArrayNum;
    pFVar2 = (this->DissectedUpdates).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0xa8;
    while( true ) {
      if ((this->DissectedUpdates).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FDissectedUpdate_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) {
        return false;
      }
      if (((ushort)*(undefined4 *)(pFVar2 + 0x98) == param_1.InstanceID) &&
         ((ushort)((uint)*(undefined4 *)(pFVar2 + 0x98) >> 0x10) == param_1.InstanceSerial)) break;
      pFVar2 = pFVar2 + 0xa8;
    }
    if (pFVar2 == (FScriptContainerElement *)0x0) {
      return false;
    }
  }
  return true;
}

// HasQueuedUpdates @ 14613de10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMovieSceneEntitySystemRunner::HasQueuedUpdates(FMovieSceneEntitySystemRunner *this)

{
  UObject *pUVar1;
  
  if (((this->UpdateQueue).ArrayNum == 0) && ((this->DissectedUpdates).ArrayNum == 0)) {
    pUVar1 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
    if ((pUVar1 == (UObject *)0x0) ||
       ((*(ulonglong *)&pUVar1[0x2d].field_0x20 != 0 &&
        (*(ulonglong *)(pUVar1 + 0x11) <= *(ulonglong *)&pUVar1[0x2d].field_0x20)))) {
      return false;
    }
  }
  return true;
}

// IsCurrentlyEvaluating @ 146140c90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(FMovieSceneEntitySystemRunner *this)

{
  return this->FlushState != None;
}

// IsUpdatingSequence @ 146141690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::IsUpdatingSequence(FMovieSceneEntitySystemRunner *this)

{
  return this->bIsUpdatingSequence;
}

// MarkForUpdate @ 146142dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::MarkForUpdate
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1,ERunnerUpdateFlags param_2)

{
  int *piVar1;
  FInstanceHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneEntitySystemLinker *this_00;
  FInstanceRegistry *pFVar6;
  FSequenceInstance *this_01;
  FInstanceHandle local_18;
  ERunnerUpdateFlags EStack_14;
  
  if ((this->bIsUpdatingSequence != false) && ((param_2 & FinalDissectionMask) != None)) {
    this_00 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
    pFVar6 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
    this_01 = (FSequenceInstance *)
              ((ulonglong)((uint)param_1 & 0xffff) * 0x140 + *(longlong *)&pFVar6->Instances);
    if (!this_01->bFinished) {
      UE::MovieScene::FSequenceInstance::Finish(this_01);
    }
  }
  pFVar2 = (FInstanceHandle *)(this->CurrentInstances).AllocatorInstance.Data;
  local_18 = param_1;
  EStack_14 = param_2;
  if ((pFVar2 <= &local_18) &&
     (&local_18 < pFVar2 + (longlong)(this->CurrentInstances).ArrayMax * 2)) {
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
  iVar5 = (this->CurrentInstances).ArrayNum;
  piVar1 = &(this->CurrentInstances).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->CurrentInstances).AllocatorInstance,piVar1);
  }
  (this->CurrentInstances).ArrayNum = iVar5 + 1;
  *(ulonglong *)((this->CurrentInstances).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       CONCAT44(EStack_14,local_18);
  return;
}

// QueueFinalUpdate @ 14614a820

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::QueueFinalUpdate
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  bool bVar1;
  
  bVar1 = QueueFinalUpdateImpl(this,param_1,param_2,false);
  return bVar1;
}

// QueueFinalUpdate @ 14614a830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::QueueFinalUpdate
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1)

{
  bool bVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  bVar1 = QueueFinalUpdateImpl
                    (this,param_1,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return bVar1;
}

// QueueFinalUpdateAndDestroy @ 14614a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::QueueFinalUpdateAndDestroy
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  bool bVar1;
  
  bVar1 = QueueFinalUpdateImpl(this,param_1,param_2,true);
  return bVar1;
}

// QueueFinalUpdateAndDestroy @ 14614a900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::QueueFinalUpdateAndDestroy
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1)

{
  bool bVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  bVar1 = QueueFinalUpdateImpl
                    (this,param_1,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return bVar1;
}

// QueueFinalUpdateImpl @ 14614a9c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieSceneEntitySystemRunner::QueueFinalUpdateImpl
          (FMovieSceneEntitySystemRunner *this,FInstanceHandle param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UObject *pUVar8;
  FName FVar9;
  UMovieSceneSequence *pUVar10;
  FSequenceInstance *this_01;
  FScriptContainerElement *pFVar11;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FInstanceHandle local_res10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_res18;
  char local_res20;
  undefined1 local_148 [8];
  FSequenceInstance *local_140;
  FName local_138;
  FString local_130;
  FDestructionSentinel local_120;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  int local_f8;
  FMovieSceneContext local_f0;
  FInstanceHandle local_70;
  undefined4 uStack_6c;
  FReadAccessScope local_68;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pUVar8 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
  if (pUVar8 != (UObject *)0x0) {
    FVar9 = (FName)GetInstanceRegistry(this);
    local_138 = FVar9;
    bVar5 = UE::MovieScene::FInstanceRegistry::IsHandleValid((FInstanceRegistry *)FVar9,param_1);
    if (bVar5) {
      this_01 = (FSequenceInstance *)
                ((ulonglong)((uint)param_1 & 0xffff) * 0x140 + *(longlong *)((longlong)FVar9 + 8));
      local_140 = this_01;
      bVar5 = UE::MovieScene::FSequenceInstance::CanFinishImmediately(this_01);
      if ((bVar5) &&
         ((this->FlushState & UE::MovieScene::FlushState::Everything & ~(End|PostEvaluation)) ==
          None)) {
        iVar7 = (this->UpdateQueue).ArrayNum;
        pFVar11 = (this->UpdateQueue).AllocatorInstance.Data;
        pFVar13 = pFVar11 + (longlong)iVar7 * 0xa0;
        while( true ) {
          if ((this->UpdateQueue).ArrayNum != iVar7) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar11 == pFVar13) goto LAB_14614aac7;
          if (((ushort)*(undefined4 *)(pFVar11 + 0x98) == param_1.InstanceID) &&
             ((ushort)((uint)*(undefined4 *)(pFVar11 + 0x98) >> 0x10) == param_1.InstanceSerial))
          break;
          pFVar11 = pFVar11 + 0xa0;
        }
        this_01 = local_140;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
LAB_14614aac7:
          iVar7 = (this->DissectedUpdates).ArrayNum;
          pFVar11 = (this->DissectedUpdates).AllocatorInstance.Data;
          pFVar13 = pFVar11 + (longlong)iVar7 * 0xa8;
          while( true ) {
            if ((this->DissectedUpdates).ArrayNum != iVar7) {
              local_148[0] = 0;
              `TCheckedPointerIterator<FMovieSceneEntitySystemRunner::FDissectedUpdate_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_148);
            }
            if (pFVar11 == pFVar13) goto LAB_14614ab20;
            if (((ushort)*(undefined4 *)(pFVar11 + 0x98) == param_1.InstanceID) &&
               ((ushort)((uint)*(undefined4 *)(pFVar11 + 0x98) >> 0x10) == param_1.InstanceSerial))
            break;
            pFVar11 = pFVar11 + 0xa8;
          }
          this_01 = local_140;
          param_3 = (bool)local_res20;
          if (pFVar11 == (FScriptContainerElement *)0x0) {
LAB_14614ab20:
            UE::MovieScene::FSequenceInstance::Finish(local_140);
            UE::MovieScene::FSequenceInstance::PostEvaluation(local_140);
            pTVar12 = local_res18;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_res18,
                       &local_68);
            if ((*(int *)&pTVar12->field_0x10 != 0) &&
               (plVar2 = *(longlong **)&pTVar12->field_0x8, plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x68))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_68);
            FVar9 = local_138;
            if (local_res20 == '\0') {
              return false;
            }
            bVar5 = UE::MovieScene::FInstanceRegistry::IsHandleValid
                              ((FInstanceRegistry *)local_138,param_1);
            if (!bVar5) {
              return false;
            }
            UE::MovieScene::FInstanceRegistry::DestroyInstance((FInstanceRegistry *)FVar9,param_1);
            return false;
          }
        }
      }
      local_108 = (undefined1  [8])0x0;
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      FMovieSceneContext::FMovieSceneContext(&local_f0);
      uStack_6c = 2;
      if (param_3 != false) {
        uStack_6c = 6;
      }
      local_70 = param_1;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108,local_res18);
      pFVar11 = (this->UpdateQueue).AllocatorInstance.Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_108) &&
          ((FScriptContainerElement *)local_108 <
           pFVar11 + (longlong)(this->UpdateQueue).ArrayMax * 0xa0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (this->UpdateQueue).ArrayNum;
      piVar1 = &(this->UpdateQueue).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&(this->UpdateQueue).AllocatorInstance,piVar1);
      }
      pFVar11 = (this->UpdateQueue).AllocatorInstance.Data;
      (this->UpdateQueue).ArrayNum = iVar7 + 1;
      pTVar12 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (pFVar11 + (longlong)iVar7 * 0xa0);
      *(undefined8 *)pTVar12 = 0;
      *(undefined8 *)&pTVar12->field_0x8 = 0;
      *(undefined4 *)&pTVar12->field_0x10 = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (pTVar12,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108);
      FMovieSceneContext::FMovieSceneContext((FMovieSceneContext *)(pTVar12 + 1),&local_f0);
      *(ulonglong *)&pTVar12[6].field_0x8 = CONCAT44(uStack_6c,local_70);
      if (6 < (byte)LogMovieSceneECS._0_1_) {
        pTVar3 = (this_01->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        this_00 = (this_01->SharedPlaybackState).Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_140 = (FSequenceInstance *)CONCAT44(local_140._4_4_,(this_01->SequenceID).Value);
        pUVar10 = UE::MovieScene::FSharedPlaybackState::GetSequence
                            (this_00,(FMovieSceneSequenceID *)&local_140);
        if (6 < (byte)LogMovieSceneECS._0_1_) {
          if (pUVar10 == (UMovieSceneSequence *)0x0) {
            ::FString::FString(&local_130,L"None");
          }
          else {
            local_138 = (FName)pUVar10->_padding_;
            ::FName::ToString(&local_138,&local_130);
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_f0.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_f0.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                 (FWriteAccessScope *)&local_120);
      if ((local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_100.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,0x10);
        local_f8 = 0;
      }
      if (local_120.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_108);
      return true;
    }
  }
  return false;
}

// QueueUpdate @ 14614ae40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::QueueUpdate
          (FMovieSceneEntitySystemRunner *this,FMovieSceneContext *param_1,FInstanceHandle param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          ERunnerUpdateFlags param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  ERunnerUpdateFlags EVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  UMovieSceneSequence *pUVar11;
  FMovieSceneSequenceHierarchy *this_00;
  FMovieSceneSubSequenceData *this_01;
  UEnum *this_02;
  longlong lVar12;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  FName local_res8;
  FString local_148;
  FName local_138;
  FString local_130;
  FDestructionSentinel local_120;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  int local_f8;
  FMovieSceneContext local_f0;
  FInstanceHandle local_70;
  ERunnerUpdateFlags EStack_6c;
  FString local_68;
  TRange<FFrameTime> local_58;
  
  EVar7 = param_4;
  if ((param_4 & Flush) != None) {
    this->bRequireFullFlush = true;
  }
  local_108 = (undefined1  [8])0x0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108,param_3);
  FMovieSceneContext::FMovieSceneContext(&local_f0,param_1);
  pFVar2 = (this->UpdateQueue).AllocatorInstance.Data;
  EStack_6c = EVar7;
  local_70 = param_2;
  if (((pFVar2 <= (FScriptContainerElement *)local_108) &&
      ((FScriptContainerElement *)local_108 < pFVar2 + (longlong)(this->UpdateQueue).ArrayMax * 0xa0
      )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->UpdateQueue).ArrayNum;
  piVar1 = &(this->UpdateQueue).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&(this->UpdateQueue).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->UpdateQueue).AllocatorInstance.Data;
  (this->UpdateQueue).ArrayNum = iVar9 + 1;
  this_03 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (pFVar2 + (longlong)iVar9 * 0xa0);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (this_03,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108);
  FMovieSceneContext::FMovieSceneContext((FMovieSceneContext *)(this_03 + 1),&local_f0);
  *(ulonglong *)&this_03[6].field_0x8 = CONCAT44(EStack_6c,local_70);
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_f0.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_f0.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_120);
  if ((local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,0x10);
    local_f8 = 0;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pUVar10 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
    if ((*(longlong *)&pUVar10[0x23].field_0x8 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar12 = (ulonglong)((uint)param_2 & 0xffff) * 0x140;
    lVar3 = *(longlong *)(*(longlong *)&pUVar10[0x23].field_0x8 + 8);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x120 + lVar12);
    lVar5 = *(longlong *)(lVar3 + 0x118 + lVar12);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_4 = *(ERunnerUpdateFlags *)(lVar3 + 0x128 + lVar12);
    if (param_4 == None) {
      pUVar11 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar5 + 0x10));
    }
    else {
      pUVar11 = (UMovieSceneSequence *)0x0;
      if ((((*(UMovieSceneCompiledDataManager **)(lVar5 + 0x28) !=
             (UMovieSceneCompiledDataManager *)0x0) && (*(int *)(lVar5 + 0x34) != -1)) &&
          (this_00 = UMovieSceneCompiledDataManager::FindHierarchy
                               (*(UMovieSceneCompiledDataManager **)(lVar5 + 0x28),
                                (FMovieSceneCompiledDataID)*(int *)(lVar5 + 0x34)),
          pUVar11 = (UMovieSceneSequence *)0x0, this_00 != (FMovieSceneSequenceHierarchy *)0x0)) &&
         (this_01 = FMovieSceneSequenceHierarchy::FindSubData
                              (this_00,(FMovieSceneSequenceID *)&param_4),
         this_01 != (FMovieSceneSubSequenceData *)0x0)) {
        pUVar11 = FMovieSceneSubSequenceData::GetSequence(this_01);
      }
    }
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      if (pUVar11 == (UMovieSceneSequence *)0x0) {
        ::FString::FString(&local_148,L"None");
      }
      else {
        local_res8 = (FName)pUVar11->_padding_;
        ::FName::ToString(&local_res8,&local_148);
      }
      local_58.LowerBound._0_8_ = param_1->_padding_;
      local_58._8_8_ = param_1->_padding_;
      local_58.UpperBound.Value = (FFrameTime)param_1->_padding_;
      ::LexToString(&local_68,&local_58);
      this_02 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
      if ((this_02 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UEnum::GetNameByValue(this_02,(long64)&local_138);
      ::FName::ToString(&local_138,&local_130);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// QueueUpdate @ 14614b230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::QueueUpdate
          (FMovieSceneEntitySystemRunner *this,FMovieSceneContext *param_1,FInstanceHandle param_2,
          ERunnerUpdateFlags param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UMovieSceneSequence *pUVar10;
  FMovieSceneSequenceHierarchy *this_00;
  FMovieSceneSubSequenceData *this_01;
  UEnum *this_02;
  longlong lVar11;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  FName local_res8;
  FMovieSceneSequenceID local_res20 [2];
  FString local_148;
  FName local_138;
  FString local_130;
  FDestructionSentinel local_120;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  ulonglong local_f8;
  FMovieSceneContext local_f0;
  FInstanceHandle local_70;
  ERunnerUpdateFlags EStack_6c;
  FString local_68;
  TRange<FFrameTime> local_58;
  
  if ((param_3 & Flush) != None) {
    this->bRequireFullFlush = true;
  }
  local_f8 = 0;
  local_108 = (undefined1  [8])0x0;
  local_100.Data = (FScriptContainerElement *)0x0;
  FMovieSceneContext::FMovieSceneContext(&local_f0,param_1);
  pFVar2 = (this->UpdateQueue).AllocatorInstance.Data;
  local_70 = param_2;
  EStack_6c = param_3;
  if (((pFVar2 <= (FScriptContainerElement *)local_108) &&
      ((FScriptContainerElement *)local_108 < pFVar2 + (longlong)(this->UpdateQueue).ArrayMax * 0xa0
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->UpdateQueue).ArrayNum;
  piVar1 = &(this->UpdateQueue).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&(this->UpdateQueue).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->UpdateQueue).AllocatorInstance.Data;
  (this->UpdateQueue).ArrayNum = iVar8 + 1;
  this_03 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (pFVar2 + (longlong)iVar8 * 0xa0);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (this_03,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_108);
  FMovieSceneContext::FMovieSceneContext((FMovieSceneContext *)(this_03 + 1),&local_f0);
  *(ulonglong *)&this_03[6].field_0x8 = CONCAT44(EStack_6c,local_70);
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_f0.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_f0.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_f0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_120);
  if (((int)local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,0x10);
    local_f8 = local_f8 & 0xffffffff00000000;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pUVar9 = FWeakObjectPtr::Get(&(this->WeakLinker).WeakPtr);
    if ((*(longlong *)&pUVar9[0x23].field_0x8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = (ulonglong)((uint)param_2 & 0xffff) * 0x140;
    lVar3 = *(longlong *)(*(longlong *)&pUVar9[0x23].field_0x8 + 8);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x120 + lVar11);
    lVar5 = *(longlong *)(lVar3 + 0x118 + lVar11);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res20[0].Value = *(uint *)(lVar3 + 0x128 + lVar11);
    if (local_res20[0].Value == 0) {
      pUVar10 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar5 + 0x10));
    }
    else {
      pUVar10 = (UMovieSceneSequence *)0x0;
      if ((((*(UMovieSceneCompiledDataManager **)(lVar5 + 0x28) !=
             (UMovieSceneCompiledDataManager *)0x0) && (*(int *)(lVar5 + 0x34) != -1)) &&
          (this_00 = UMovieSceneCompiledDataManager::FindHierarchy
                               (*(UMovieSceneCompiledDataManager **)(lVar5 + 0x28),
                                (FMovieSceneCompiledDataID)*(int *)(lVar5 + 0x34)),
          pUVar10 = (UMovieSceneSequence *)0x0, this_00 != (FMovieSceneSequenceHierarchy *)0x0)) &&
         (this_01 = FMovieSceneSequenceHierarchy::FindSubData(this_00,local_res20),
         this_01 != (FMovieSceneSubSequenceData *)0x0)) {
        pUVar10 = FMovieSceneSubSequenceData::GetSequence(this_01);
      }
    }
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      if (pUVar10 == (UMovieSceneSequence *)0x0) {
        ::FString::FString(&local_148,L"None");
      }
      else {
        local_res8 = (FName)pUVar10->_padding_;
        ::FName::ToString(&local_res8,&local_148);
      }
      local_58.LowerBound._0_8_ = param_1->_padding_;
      local_58._8_8_ = param_1->_padding_;
      local_58.UpperBound.Value = (FFrameTime)param_1->_padding_;
      ::LexToString(&local_68,&local_58);
      this_02 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
      if ((this_02 == (UEnum *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UEnum::GetNameByValue(this_02,(long64)&local_138);
      ::FName::ToString(&local_138,&local_130);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// ResetFlushState @ 1461515c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieSceneEntitySystemRunner::ResetFlushState(FMovieSceneEntitySystemRunner *this)

{
  if (((this->FlushState & (EventTriggers|Finalization|Evaluation|Instantiation)) != None) &&
     ((this->FlushState & (Spawn|Import)) == None)) {
    this->FlushState = UE::MovieScene::FlushState::LoopEval & ~Import;
  }
  return;
}

// SkipFlushState @ 146154e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemRunner::SkipFlushState
          (FMovieSceneEntitySystemRunner *this,ERunnerFlushState param_1)

{
  this->FlushState = this->FlushState & ~param_1;
  return;
}

// StartEvaluation @ 146155560

/* WARNING: Enum "Type": Some values do not have unique names */

ERunnerFlushResult __thiscall
FMovieSceneEntitySystemRunner::StartEvaluation
          (FMovieSceneEntitySystemRunner *this,UMovieSceneEntitySystemLinker *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ERunnerFlushResult EVar5;
  ForElementType<unsigned_int> FVar6;
  
  if ((((param_1->LastInstantiationVersion != 0) &&
       ((param_1->EntityManager).StructureMutationSystemSerialNumber <=
        param_1->LastInstantiationVersion)) && ((this->UpdateQueue).ArrayNum == 0)) &&
     ((this->DissectedUpdates).ArrayNum == 0)) {
    this->FlushState = None;
    return Break;
  }
  iVar2 = (param_1->RunnerReentrancyFlags).NumBits;
  if (iVar2 != 0) {
    uVar1 = iVar2 - 1;
    if (((int)uVar1 < 0) || (iVar2 <= (int)uVar1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    FVar6 = (param_1->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&param_1->RunnerReentrancyFlags;
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) == 0) {
      if (2 < (byte)LogMovieSceneECS._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      }
      return Break;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::Add(&param_1->RunnerReentrancyFlags,false);
  this->FlushState = this->FlushState & ~Start;
  this->CurrentFlushState = Start;
  if ((param_1->EntityManager).LockdownState == Locked) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EntityManager.IsLockedDown()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                       ,0x169,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  (param_1->EntityManager).DispatchThread = GameThread_Local;
  (param_1->EntityManager).GatherThread = GameThread_Local;
  return ContinueAllowBudget;
}

// operator() @ 1504e3fb0

bool __thiscall
`FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6835856732699231641>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6835856732699231641>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4230

bool __thiscall
`FMovieSceneEntitySystemRunner::GameThread_UpdateSequenceInstances'::__l20::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6835856732699230986>);
  if (bVar2) {
    bVar4 = **(longlong **)((longlong)this + 0x10) != 0;
    if (bVar4) {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar5 = **(longlong **)((longlong)this + 8) != 0;
    if (bVar5) {
      local_res18[0] = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6835856732699230986>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e4324;
    }
  }
  bVar2 = false;
LAB_1504e4324:
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// operator() @ 1504e4a40

bool __thiscall
`FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase'::__l6::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6835856732699231647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6835856732699231647>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


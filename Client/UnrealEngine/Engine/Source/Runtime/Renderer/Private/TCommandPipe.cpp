// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// EnqueueCommand<FPrimitiveRange_&> @ 145516860

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TCommandPipe<FPrimitiveRange>::EnqueueCommand<FPrimitiveRange_&>
          (TCommandPipe<FPrimitiveRange> *this,FPrimitiveRange *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned_int> *paVar3;
  int *piVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FPrimitiveRange *pFVar8;
  FTaskBase *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  wchar_t *pwVar13;
  FTaskBase *this_00;
  
  if ((*(longlong *)&this->CommandFunction == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CommandFunction",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                          ,0x52,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  LOCK();
  bVar11 = (this->QueueMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    (this->QueueMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    UE::FMutex::LockSlow(&this->QueueMutex);
  }
  iVar7 = (this->Queue).ArrayNum;
  piVar4 = &(this->Queue).ArrayMax;
  iVar12 = iVar7;
  if (iVar7 == *piVar4) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveRange>_>
                       (0x408,&(this->Queue).AllocatorInstance,piVar4);
    (this->Queue).ArrayNum = iVar12;
  }
  pFVar8 = (this->Queue).AllocatorInstance.Data;
  (this->Queue).ArrayNum = iVar12 + 1;
  pFVar8[iVar12] = *param_1;
  LOCK();
  pFVar1 = &this->QueueMutex;
  aVar5 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->QueueMutex);
  }
  if (iVar7 == 0) {
    pwVar13 = UE::Tasks::FPipe::GetDebugName(&this->Pipe);
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_1>__M_____EnqueueCommand_AEAUFPrimitiveRange_____TCommandPipe_UFPrimitiveRange____QEAAXAEAUFPrimitiveRange___Z_XX_Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::Init(this_00,pwVar13,High,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__M_____EnqueueCommand_AEAUFPrimitiveRange_____TCommandPipe_UFPrimitiveRange____QEAAXAEAUFPrimitiveRange___Z__Private_Tasks_UE__6B_
      ;
    }
    LOCK();
    paVar2 = &(this->Pipe).TaskCount;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    LOCK();
    this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
    UNLOCK();
    this_00->Pipe = &this->Pipe;
    pFVar9 = (this->PrerequisiteTask).Pimpl.Reference;
    if (pFVar9 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar9);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar3 = &this_00->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// EnqueueCommand<FDynamicPrimitiveIndexList> @ 145516a00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TCommandPipe<FDynamicPrimitiveIndexList>::EnqueueCommand<FDynamicPrimitiveIndexList>
          (TCommandPipe<FDynamicPrimitiveIndexList> *this,FDynamicPrimitiveIndexList *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned_int> *paVar3;
  int *piVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  wchar_t *pwVar11;
  FTaskBase *pFVar12;
  FDynamicPrimitiveIndexList *pFVar13;
  FTaskBase *this_00;
  
  if ((*(longlong *)&this->CommandFunction == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                         ,0x52,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  bVar9 = (this->QueueMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    (this->QueueMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    UE::FMutex::LockSlow(&this->QueueMutex);
  }
  iVar7 = (this->Queue).ArrayNum;
  piVar4 = &(this->Queue).ArrayMax;
  iVar10 = iVar7;
  if (iVar7 == *piVar4) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndexList>_>
                       (0x810,&(this->Queue).AllocatorInstance,piVar4);
    (this->Queue).ArrayNum = iVar10;
  }
  (this->Queue).ArrayNum = iVar10 + 1;
  pFVar13 = (this->Queue).AllocatorInstance.Data + iVar10;
  this_00 = (FTaskBase *)0x0;
  (pFVar13->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  (pFVar13->Primitives).AllocatorInstance.Data = (param_1->Primitives).AllocatorInstance.Data;
  (param_1->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  (pFVar13->Primitives).ArrayNum = (param_1->Primitives).ArrayNum;
  (pFVar13->Primitives).ArrayMax = (param_1->Primitives).ArrayMax;
  (param_1->Primitives).ArrayNum = 0;
  (param_1->Primitives).ArrayMax = 0;
  LOCK();
  pFVar1 = &this->QueueMutex;
  aVar5 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->QueueMutex);
  }
  if (iVar7 == 0) {
    pwVar11 = UE::Tasks::FPipe::GetDebugName(&this->Pipe);
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar12 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_1>__M_____EnqueueCommand_UFDynamicPrimitiveIndexList_____TCommandPipe_UFDynamicPrimitiveIndexList____QEAAX__QEAUFDynamicPrimitiveIndexList___Z_XX_Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::Init(pFVar12,pwVar11,High,None,None);
      pFVar12[1]._padding_ = (longlong)this;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__M_____EnqueueCommand_UFDynamicPrimitiveIndexList_____TCommandPipe_UFDynamicPrimitiveIndexList____QEAAX__QEAUFDynamicPrimitiveIndexList___Z__Private_Tasks_UE__6B_
      ;
      this_00 = pFVar12;
    }
    LOCK();
    paVar2 = &(this->Pipe).TaskCount;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    LOCK();
    this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
    UNLOCK();
    this_00->Pipe = &this->Pipe;
    pFVar12 = (this->PrerequisiteTask).Pimpl.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar12);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar3 = &this_00->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 145516bc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned_int> *paVar3;
  int *piVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  wchar_t *pwVar11;
  FTaskBase *pFVar12;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar13;
  FTaskBase *this_00;
  
  if ((*(longlong *)&this->CommandFunction == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                         ,0x52,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  bVar9 = (this->QueueMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    (this->QueueMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    UE::FMutex::LockSlow(&this->QueueMutex);
  }
  iVar7 = (this->Queue).ArrayNum;
  piVar4 = &(this->Queue).ArrayMax;
  iVar10 = iVar7;
  if (iVar7 == *piVar4) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                       (0x810,&(this->Queue).AllocatorInstance,piVar4);
    (this->Queue).ArrayNum = iVar10;
  }
  (this->Queue).ArrayNum = iVar10 + 1;
  pTVar13 = (this->Queue).AllocatorInstance.Data + iVar10;
  this_00 = (FTaskBase *)0x0;
  (pTVar13->AllocatorInstance).Data = (int *)0x0;
  (pTVar13->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (int *)0x0;
  pTVar13->ArrayNum = param_1->ArrayNum;
  pTVar13->ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  LOCK();
  pFVar1 = &this->QueueMutex;
  aVar5 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->QueueMutex);
  }
  if (iVar7 == 0) {
    pwVar11 = UE::Tasks::FPipe::GetDebugName(&this->Pipe);
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar12 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_1>__M_____EnqueueCommand_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________TCommandPipe_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______QEAAX__QEAV__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Z_XX_Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::Init(pFVar12,pwVar11,High,None,None);
      pFVar12[1]._padding_ = (longlong)this;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__M_____EnqueueCommand_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________TCommandPipe_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______QEAAX__QEAV__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Z__Private_Tasks_UE__6B_
      ;
      this_00 = pFVar12;
    }
    LOCK();
    paVar2 = &(this->Pipe).TaskCount;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    LOCK();
    this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
    UNLOCK();
    this_00->Pipe = &this->Pipe;
    pFVar12 = (this->PrerequisiteTask).Pimpl.Reference;
    if (pFVar12 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar12);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar3 = &this_00->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// ~TCommandPipe<FPrimitiveRange> @ 14551fd60

void __thiscall
TCommandPipe<FPrimitiveRange>::~TCommandPipe<FPrimitiveRange>(TCommandPipe<FPrimitiveRange> *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FPrimitiveRange *pFVar3;
  longlong *plVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  
  if ((this->Queue).ArrayNum != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x29,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Tasks::FPipe::WaitUntilEmpty(&this->Pipe,(FTimespan)0x7fffffffffffffff);
  if ((this->Pipe).TaskCount != (atomic<unsigned___int64>)0x0) {
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
            ((this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Queue).AllocatorInstance.Data;
  if (pFVar3 != (FPrimitiveRange *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
  }
  if (*(longlong *)&this->EmptyFunction != 0) {
    plVar4 = *(longlong **)&(this->EmptyFunction).field_0x28;
    plVar8 = (longlong *)&(this->EmptyFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->CommandFunction != 0) {
    plVar4 = *(longlong **)&(this->CommandFunction).field_0x28;
    plVar8 = (longlong *)&(this->CommandFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar5 = (this->PrerequisiteTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014551fe56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar5->_padding_)(pFVar5,1);
      return;
    }
  }
  return;
}

// ~TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 14551fe70

void __thiscall
TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
~TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar3;
  longlong *plVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  
  if ((this->Queue).ArrayNum != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x29,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Tasks::FPipe::WaitUntilEmpty(&this->Pipe,(FTimespan)0x7fffffffffffffff);
  if ((this->Pipe).TaskCount != (atomic<unsigned___int64>)0x0) {
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
            ((this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  DestructItems<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            ((this->Queue).AllocatorInstance.Data,(this->Queue).ArrayNum);
  pTVar3 = (this->Queue).AllocatorInstance.Data;
  if (pTVar3 != (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0)
  {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar3);
  }
  if (*(longlong *)&this->EmptyFunction != 0) {
    plVar4 = *(longlong **)&(this->EmptyFunction).field_0x28;
    plVar8 = (longlong *)&(this->EmptyFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->CommandFunction != 0) {
    plVar4 = *(longlong **)&(this->CommandFunction).field_0x28;
    plVar8 = (longlong *)&(this->CommandFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar5 = (this->PrerequisiteTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014551ff75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar5->_padding_)(pFVar5,1);
      return;
    }
  }
  return;
}

// operator() @ 1455232b0

void __thiscall
`TCommandPipe<FPrimitiveRange>::EnqueueCommand<FPrimitiveRange_&>'::__l12::<lambda_1>::operator()
          (void *this)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  atomic<unsigned_char> *paVar8;
  longlong *plVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  bool bVar15;
  FTaskTagScope local_48;
  undefined8 local_38 [2];
  
  FTaskTagScope::FTaskTagScope(&local_48,EParallelRenderingThread);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,pwVar5);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar5,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
               ,0x5e);
  }
  pvVar11 = (void *)0x0;
  paVar8 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  iVar12 = 0;
  LOCK();
  FVar1.State = *paVar8;
  if (FVar1.State == (atomic<unsigned_char>)0x0) {
    *paVar8 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar1.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)paVar8);
  }
  lVar3 = *(longlong *)this;
  puVar6 = (undefined8 *)(lVar3 + 0x78);
  pvVar13 = pvVar11;
  if (local_38 != puVar6) {
    pvVar13 = (void *)*puVar6;
    *puVar6 = 0;
    iVar12 = *(int *)(lVar3 + 0x80);
    *(undefined8 *)(lVar3 + 0x80) = 0;
  }
  paVar8 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  LOCK();
  aVar2 = *paVar8;
  *paVar8 = (atomic<unsigned_char>)((char)*paVar8 + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)paVar8);
  }
  for (pvVar14 = pvVar13; iVar10 = (int)pvVar11,
      pvVar14 != (void *)((longlong)iVar12 * 8 + (longlong)pvVar13);
      pvVar14 = (void *)((longlong)pvVar14 + 8)) {
    lVar3 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x10));
    pcVar4 = *(code **)(lVar3 + 0x10);
    plVar9 = (longlong *)(lVar3 + 0x20);
    if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar3 + 0x38);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar7,pvVar14);
    pvVar11 = (void *)(ulonglong)(iVar10 + 1);
  }
  if (iVar10 != 0) {
    TCommandPipe<FPrimitiveRange>::ReleaseNumCommands
              (*(TCommandPipe<FPrimitiveRange> **)this,iVar10);
  }
  if (pvVar13 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar13);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_48);
  return;
}

// operator() @ 145523460

/* WARNING: Removing unreachable block (ram,0x00014552357b) */

void __thiscall
`TCommandPipe<FDynamicPrimitiveIndexList>::EnqueueCommand<FDynamicPrimitiveIndexList>'::__l12::
<lambda_1>::operator()(void *this)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  atomic<unsigned_char> *paVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  FDynamicPrimitiveIndexList *pFVar11;
  int iVar12;
  bool bVar13;
  FDynamicPrimitiveIndexList *local_res18;
  FTaskTagScope local_58;
  undefined8 local_48 [2];
  
  FTaskTagScope::FTaskTagScope(&local_58,EParallelRenderingThread);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,pwVar5);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar5,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
               ,0x5e);
  }
  iVar9 = 0;
  paVar7 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  local_res18 = (FDynamicPrimitiveIndexList *)0x0;
  iVar12 = 0;
  LOCK();
  FVar1.State = *paVar7;
  if (FVar1.State == (atomic<unsigned_char>)0x0) {
    *paVar7 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar1.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)paVar7);
  }
  lVar3 = *(longlong *)this;
  puVar10 = (undefined8 *)(lVar3 + 0x78);
  if (local_48 != puVar10) {
    DestructItems<FDynamicPrimitiveIndexList,int>((FDynamicPrimitiveIndexList *)0x0,0);
    local_res18 = (FDynamicPrimitiveIndexList *)*puVar10;
    *puVar10 = 0;
    iVar12 = *(int *)(lVar3 + 0x80);
    *(undefined8 *)(lVar3 + 0x80) = 0;
  }
  paVar7 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  LOCK();
  aVar2 = *paVar7;
  *paVar7 = (atomic<unsigned_char>)((char)*paVar7 + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)paVar7);
  }
  for (pFVar11 = local_res18; pFVar11 != local_res18 + iVar12; pFVar11 = pFVar11 + 1) {
    lVar3 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x10));
    pcVar4 = *(code **)(lVar3 + 0x10);
    plVar8 = (longlong *)(lVar3 + 0x20);
    if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar3 + 0x38);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar4)(uVar6,pFVar11);
    iVar9 = iVar9 + 1;
  }
  if (iVar9 != 0) {
    TCommandPipe<FDynamicPrimitiveIndexList>::ReleaseNumCommands
              (*(TCommandPipe<FDynamicPrimitiveIndexList> **)this,iVar9);
  }
  DestructItems<FDynamicPrimitiveIndexList,int>(local_res18,iVar12);
  if (local_res18 != (FDynamicPrimitiveIndexList *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_res18);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_58);
  return;
}

// operator() @ 145523630

/* WARNING: Removing unreachable block (ram,0x00014552374b) */

void __thiscall
`TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>'::__l12
::<lambda_1>::operator()(void *this)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  atomic<unsigned_char> *paVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar11;
  int iVar12;
  bool bVar13;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *local_res18;
  FTaskTagScope local_58;
  undefined8 local_48 [2];
  
  FTaskTagScope::FTaskTagScope(&local_58,EParallelRenderingThread);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,pwVar5);
  pwVar5 = UE::Tasks::FPipe::GetDebugName((FPipe *)(*(longlong *)this + 0x88));
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar5,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
               ,0x5e);
  }
  iVar9 = 0;
  paVar7 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  local_res18 = (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0;
  iVar12 = 0;
  LOCK();
  FVar1.State = *paVar7;
  if (FVar1.State == (atomic<unsigned_char>)0x0) {
    *paVar7 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar1.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)paVar7);
  }
  lVar3 = *(longlong *)this;
  puVar10 = (undefined8 *)(lVar3 + 0x78);
  if (local_48 != puVar10) {
    DestructItems<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
              ((TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0,0)
    ;
    local_res18 = (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
                  *puVar10;
    *puVar10 = 0;
    iVar12 = *(int *)(lVar3 + 0x80);
    *(undefined8 *)(lVar3 + 0x80) = 0;
  }
  paVar7 = (atomic<unsigned_char> *)(*(longlong *)this + 0x70);
  LOCK();
  aVar2 = *paVar7;
  *paVar7 = (atomic<unsigned_char>)((char)*paVar7 + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)paVar7);
  }
  for (pTVar11 = local_res18; pTVar11 != local_res18 + iVar12; pTVar11 = pTVar11 + 1) {
    lVar3 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x10));
    pcVar4 = *(code **)(lVar3 + 0x10);
    plVar8 = (longlong *)(lVar3 + 0x20);
    if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar3 + 0x38);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar4)(uVar6,pTVar11);
    iVar9 = iVar9 + 1;
  }
  if (iVar9 != 0) {
    TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
    ReleaseNumCommands(*(TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         **)this,iVar9);
  }
  DestructItems<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            (local_res18,iVar12);
  if (local_res18 !=
      (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_res18);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_58);
  return;
}

// ReleaseNumCommands @ 14554f1c0

void __thiscall
TCommandPipe<FDynamicPrimitiveIndexList>::ReleaseNumCommands
          (TCommandPipe<FDynamicPrimitiveIndexList> *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  LOCK();
  paVar1 = &this->NumCommands;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 - param_1);
  UNLOCK();
  if ((int)aVar2 - param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FinalNumCommands >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((aVar2 == (atomic<int>)param_1) && (*(void **)&this->EmptyFunction != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->EmptyFunction);
    plVar3 = *(longlong **)&(this->EmptyFunction).field_0x28;
    pcVar4 = *(code **)&this->EmptyFunction;
    plVar7 = (longlong *)&(this->EmptyFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar4)(uVar6);
  }
  return;
}

// ReleaseNumCommands @ 14554f250

void __thiscall
TCommandPipe<FPrimitiveRange>::ReleaseNumCommands(TCommandPipe<FPrimitiveRange> *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  LOCK();
  paVar1 = &this->NumCommands;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 - param_1);
  UNLOCK();
  if ((int)aVar2 - param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FinalNumCommands >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((aVar2 == (atomic<int>)param_1) && (*(void **)&this->EmptyFunction != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->EmptyFunction);
    plVar3 = *(longlong **)&(this->EmptyFunction).field_0x28;
    pcVar4 = *(code **)&this->EmptyFunction;
    plVar7 = (longlong *)&(this->EmptyFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar4)(uVar6);
  }
  return;
}

// ReleaseNumCommands @ 14554f2e0

void __thiscall
TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
ReleaseNumCommands(TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  LOCK();
  paVar1 = &this->NumCommands;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 - param_1);
  UNLOCK();
  if ((int)aVar2 - param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FinalNumCommands >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x44,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((aVar2 == (atomic<int>)param_1) && (*(void **)&this->EmptyFunction != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->EmptyFunction);
    plVar3 = *(longlong **)&(this->EmptyFunction).field_0x28;
    pcVar4 = *(code **)&this->EmptyFunction;
    plVar7 = (longlong *)&(this->EmptyFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar4)(uVar6);
  }
  return;
}


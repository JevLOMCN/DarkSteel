// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14768b6f0

void __thiscall `FAudioAsyncBatcher::Flush'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AudioMisc,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioMisc,true);
  iVar1 = *(int *)((longlong)this + 8);
  puVar5 = *(undefined8 **)this;
  puVar6 = puVar5 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar6) break;
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar2 = (code *)*puVar5;
    plVar4 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar5[5];
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3);
    puVar5 = puVar5 + 6;
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Flush @ 1476a9670

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAudioAsyncBatcher::Flush(FAudioAsyncBatcher *this)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  TUniqueFunction<void___cdecl(void)> *pTVar6;
  code *pcVar7;
  ETaskPriority EVar8;
  bool bVar9;
  FTaskBase *pFVar10;
  undefined8 *puVar11;
  FTaskBase *this_00;
  FTaskBase *pFVar12;
  int iVar13;
  longlong local_38 [2];
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x1b0,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar8 = GAudioTaskPriority;
  iVar13 = (this->WorkItems).ArrayNum;
  if (iVar13 == 0) {
    return;
  }
  pFVar12 = (FTaskBase *)(this->WorkItems).AllocatorInstance.Data;
  piVar1 = &(this->WorkItems).ArrayMax;
  (this->WorkItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = *piVar1;
  *piVar1 = 0;
  (this->WorkItems).ArrayNum = 0;
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  this_00 = (FTaskBase *)0x0;
  if (pFVar10 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1__Flush_FAudioAsyncBatcher__QEAAXXZ_XX_Private_Tasks_UE__6B_
    ;
    UE::Tasks::Private::FTaskBase::Init(pFVar10,L"AudioBatch",EVar8,None,None);
    pFVar10[1]._padding_ = (longlong)pFVar12;
    *(int *)&pFVar10[1]._padding_ = iVar13;
    *(int *)((longlong)&pFVar10[1]._padding_ + 4) = iVar5;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1__Flush_FAudioAsyncBatcher__QEAAXXZ__Private_Tasks_UE__6B_
    ;
    this_00 = pFVar10;
    pFVar12 = (FTaskBase *)0x0;
    iVar13 = 0;
  }
  LOCK();
  GAudioPipe.TaskCount = (atomic<unsigned___int64>)((longlong)GAudioPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &GAudioPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar2 = &this->LastBatch;
  if (pFVar2 == (FTaskHandle *)local_38) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_1476a97e6;
    LOCK();
    paVar3 = &this_00->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1476a97e6;
    puVar11 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar10 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = this_00;
    if (pFVar10 == (FTaskBase *)0x0) goto LAB_1476a97e6;
    LOCK();
    paVar3 = &pFVar10->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1476a97e6;
    puVar11 = (undefined8 *)pFVar10->_padding_;
    this_00 = pFVar10;
  }
  (*(code *)*puVar11)(this_00,1);
LAB_1476a97e6:
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)pFVar12,iVar13);
  if (pFVar12 != (FTaskBase *)0x0) {
    FMemory::Free(pFVar12);
  }
  pTVar6 = (TUniqueFunction<void___cdecl(void)> *)(this->WorkItems).AllocatorInstance.Data;
  iVar13 = (this->WorkItems).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar6,iVar13);
    (this->WorkItems).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar6,iVar13);
    (this->WorkItems).ArrayNum = 0;
  }
  return;
}


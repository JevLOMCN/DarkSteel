// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 71

// RecvWaitTime'' @ 140f8f530

void __cdecl `dynamic_initializer_for_'FUdpPingWorker::RecvWaitTime__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_40a3890000000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  FUdpPingWorker::RecvWaitTime.Ticks = (longlong)auVar1._0_8_;
  return;
}

// SendWaitTime'' @ 140f8f560

void __cdecl `dynamic_initializer_for_'FUdpPingWorker::SendWaitTime__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_40a3890000000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  FUdpPingWorker::SendWaitTime.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'LogIcmp'' @ 140f8f590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIcmp__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIcmp,L"LogIcmp",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogIcmp__);
  return;
}

// `dynamic_initializer_for_'LogPing'' @ 140f8f5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPing__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPing,L"LogPing",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPing__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIcmp'' @ 140f8f610

void __cdecl _dynamic_initializer_for__ModuleRegistrantIcmp__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Icmp";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Icmp",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FIcmpModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14454e940

void * __thiscall FIcmpModule::_scalar_deleting_destructor_(FIcmpModule *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->field_0x8);
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14454e988

/* [thunk]:public: virtual void * __ptr64 __cdecl FIcmpModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FIcmpModule::_vector_deleting_destructor__adjustor_8__(FIcmpModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FIcmpModule *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// ApplyAfter<`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_&,FIcmpEchoManyResult> @ 14454eb10

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FUdpPingManyAsync::RunWorker_::__l2::<lambda_1>_&,FIcmpEchoManyResult>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,
          FIcmpEchoManyResult *param_2)

{
  FIcmpEchoManyResult local_58;
  
  local_58.EchoResult.Status = (param_2->EchoResult).Status;
  local_58.EchoResult.ResolvedAddress.Data.AllocatorInstance.Data =
       (param_2->EchoResult).ResolvedAddress.Data.AllocatorInstance.Data;
  (param_2->EchoResult).ResolvedAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_58.EchoResult.ResolvedAddress.Data.ArrayNum =
       (param_2->EchoResult).ResolvedAddress.Data.ArrayNum;
  local_58.EchoResult.ResolvedAddress.Data.ArrayMax =
       (param_2->EchoResult).ResolvedAddress.Data.ArrayMax;
  (param_2->EchoResult).ResolvedAddress.Data.ArrayNum = 0;
  (param_2->EchoResult).ResolvedAddress.Data.ArrayMax = 0;
  local_58.EchoResult.ReplyFrom.Data.AllocatorInstance.Data =
       (param_2->EchoResult).ReplyFrom.Data.AllocatorInstance.Data;
  (param_2->EchoResult).ReplyFrom.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.EchoResult.ReplyFrom.Data.ArrayNum = (param_2->EchoResult).ReplyFrom.Data.ArrayNum;
  local_58.EchoResult.ReplyFrom.Data.ArrayMax = (param_2->EchoResult).ReplyFrom.Data.ArrayMax;
  (param_2->EchoResult).ReplyFrom.Data.ArrayNum = 0;
  (param_2->EchoResult).ReplyFrom.Data.ArrayMax = 0;
  local_58.EchoResult.Time = (param_2->EchoResult).Time;
  local_58.Target.Address.Data.AllocatorInstance.Data =
       (param_2->Target).Address.Data.AllocatorInstance.Data;
  (param_2->Target).Address.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Target.Address.Data.ArrayNum = (param_2->Target).Address.Data.ArrayNum;
  local_58.Target.Address.Data.ArrayMax = (param_2->Target).Address.Data.ArrayMax;
  (param_2->Target).Address.Data.ArrayNum = 0;
  (param_2->Target).Address.Data.ArrayMax = 0;
  local_58.Target.Port = (param_2->Target).Port;
  `FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>::operator()(param_1,&local_58);
  return;
}

// Async<TFunction<FIcmpEchoResult___cdecl(void)>_&> @ 14454ec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<FIcmpEchoResult> * __cdecl
Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>
          (TFuture<FIcmpEchoResult> *__return_storage_ptr__,EAsyncExecution param_1,
          TFunction<FIcmpEchoResult___cdecl(void)> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FIcmpEchoResult> *pTVar6;
  TFutureState<FIcmpEchoResult> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<FIcmpEchoResult> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_258 [32];
  EExtendedTaskPriority local_218;
  ETaskPriority local_217 [7];
  TPromise<FIcmpEchoResult> local_210;
  FTaskBase *local_1f8;
  FRunnableThread *local_1f0;
  TPromise<FRunnableThread_*> local_1e8;
  TPromise<FRunnableThread_*> local_1d0;
  undefined4 local_1b8 [2];
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158 [2];
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  undefined4 local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<FIcmpEchoResult> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar15 = (FTaskBase *)0x0;
  local_1f0 = (FRunnableThread *)((ulonglong)local_1f0 & 0xffffffff00000000);
  local_f8 = *(FTaskBase **)param_2;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (local_f8 != (FTaskBase *)0x0) {
    puVar16 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar16)(puVar16,&local_e8);
  }
  TPromise<FIcmpEchoResult>::TPromise<FIcmpEchoResult>(&local_210,param_3);
  if ((local_210.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
    return pTVar11;
  }
  local_210.bFutureRetrieved = true;
  if ((local_210.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_210.State.SharedReferenceCount.ReferenceController;
  pTVar7 = local_210.State.Object;
  if (local_210.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_210.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_210.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_UFIcmpEchoResult______6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar20[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar20[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_210.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_210.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_210.bFutureRetrieved;
    local_210.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_210.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_217,&local_218);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_217[0],local_218,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_210.State.Object;
    local_90 = local_210.State.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_210.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_210.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
    local_88 = local_210.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ____YA_AV__TFuture_UFIcmpEchoResult____W4EAsyncExecution__AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<FIcmpEchoResult> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<FIcmpEchoResult> *)0x0) &&
        (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)(*(code **)pFVar19 + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_1e8);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_1f8;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_1e8.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_1e8.State.Object;
        local_1e8.bFutureRetrieved = true;
        if ((local_1e8.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_1e8.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_1e8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1e8.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_UFIcmpEchoResult____6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar12->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<FIcmpEchoResult> **)&(pFVar12->StateChangeEvent).Count =
             local_210.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_210.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_1e8.State.SharedReferenceCount.ReferenceController;
        local_210.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_210.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
        *(bool *)&pFVar12->TraceId = local_210.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = pFVar12;
        pFVar14 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar14 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar15,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_1f0 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_1e8,&local_1f0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_1e8.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_1e8.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(local_1b8,uVar17);
      if (local_210.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_210.State.Object;
      if ((*(TAtomic<bool> *)&(local_210.State.Object)->_padding_ != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      (pTVar6->Result).Pad[8] = '\0';
      (pTVar6->Result).Pad[9] = '\0';
      (pTVar6->Result).Pad[10] = '\0';
      (pTVar6->Result).Pad[0xb] = '\0';
      (pTVar6->Result).Pad[0xc] = '\0';
      (pTVar6->Result).Pad[0xd] = '\0';
      (pTVar6->Result).Pad[0xe] = '\0';
      (pTVar6->Result).Pad[0xf] = '\0';
      *(undefined4 *)(pTVar6->Result).Pad = local_1b8[0];
      *(void **)((pTVar6->Result).Pad + 8) = local_1b0;
      local_1b0 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x10) = (undefined4)local_1a8;
      *(undefined4 *)((pTVar6->Result).Pad + 0x14) = local_1a8._4_4_;
      local_1a8 = 0;
      (pTVar6->Result).Pad[0x18] = '\0';
      (pTVar6->Result).Pad[0x19] = '\0';
      (pTVar6->Result).Pad[0x1a] = '\0';
      (pTVar6->Result).Pad[0x1b] = '\0';
      (pTVar6->Result).Pad[0x1c] = '\0';
      (pTVar6->Result).Pad[0x1d] = '\0';
      (pTVar6->Result).Pad[0x1e] = '\0';
      (pTVar6->Result).Pad[0x1f] = '\0';
      *(void **)((pTVar6->Result).Pad + 0x18) = local_1a0;
      local_1a0 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x20) = (undefined4)local_198;
      *(undefined4 *)((pTVar6->Result).Pad + 0x24) = local_198._4_4_;
      local_198 = 0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x28) = local_190;
      FFutureState::MarkComplete((FFutureState *)pTVar6);
      if (local_1a0 != (void *)0x0) {
        FMemory::Free(local_1a0);
      }
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_1d0);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_1d0.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_1d0.State.Object;
        local_1d0.bFutureRetrieved = true;
        if ((local_1d0.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_1d0.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_1d0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1d0.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_UFIcmpEchoResult____6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar14->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<FIcmpEchoResult> **)&(pFVar14->StateChangeEvent).Count =
             local_210.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_210.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_1d0.State.SharedReferenceCount.ReferenceController;
        local_210.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_210.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
        *(bool *)&pFVar14->TraceId = local_210.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_1f8 = pFVar15;
        pFVar15 = pFVar14;
        pFVar20 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar20 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1f8);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar15,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_1f8 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_1d0,(FRunnableThread **)&local_1f8);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_1d0.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_1d0.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d0.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(local_188,uVar17);
      if (local_210.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_210.State.Object;
      if ((*(TAtomic<bool> *)&(local_210.State.Object)->_padding_ != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      (pTVar6->Result).Pad[8] = '\0';
      (pTVar6->Result).Pad[9] = '\0';
      (pTVar6->Result).Pad[10] = '\0';
      (pTVar6->Result).Pad[0xb] = '\0';
      (pTVar6->Result).Pad[0xc] = '\0';
      (pTVar6->Result).Pad[0xd] = '\0';
      (pTVar6->Result).Pad[0xe] = '\0';
      (pTVar6->Result).Pad[0xf] = '\0';
      *(undefined4 *)(pTVar6->Result).Pad = local_188[0];
      *(void **)((pTVar6->Result).Pad + 8) = local_180;
      local_180 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x10) = (undefined4)local_178;
      *(undefined4 *)((pTVar6->Result).Pad + 0x14) = local_178._4_4_;
      local_178 = 0;
      (pTVar6->Result).Pad[0x18] = '\0';
      (pTVar6->Result).Pad[0x19] = '\0';
      (pTVar6->Result).Pad[0x1a] = '\0';
      (pTVar6->Result).Pad[0x1b] = '\0';
      (pTVar6->Result).Pad[0x1c] = '\0';
      (pTVar6->Result).Pad[0x1d] = '\0';
      (pTVar6->Result).Pad[0x1e] = '\0';
      (pTVar6->Result).Pad[0x1f] = '\0';
      *(void **)((pTVar6->Result).Pad + 0x18) = local_170;
      local_170 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x20) = (undefined4)local_168;
      *(undefined4 *)((pTVar6->Result).Pad + 0x24) = local_168._4_4_;
      local_168 = 0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x28) = local_160;
      FFutureState::MarkComplete((FFutureState *)pTVar6);
      if (local_170 != (void *)0x0) {
        FMemory::Free(local_170);
      }
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_UFIcmpEchoResult____6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_210.State.Object;
        puVar16[9] = local_210.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_210.bFutureRetrieved;
        local_210.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_210.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(local_158,uVar17);
      if (local_210.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar6 = local_210.State.Object;
      if ((*(TAtomic<bool> *)&(local_210.State.Object)->_padding_ != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
        return pTVar11;
      }
      (pTVar6->Result).Pad[8] = '\0';
      (pTVar6->Result).Pad[9] = '\0';
      (pTVar6->Result).Pad[10] = '\0';
      (pTVar6->Result).Pad[0xb] = '\0';
      (pTVar6->Result).Pad[0xc] = '\0';
      (pTVar6->Result).Pad[0xd] = '\0';
      (pTVar6->Result).Pad[0xe] = '\0';
      (pTVar6->Result).Pad[0xf] = '\0';
      *(undefined4 *)(pTVar6->Result).Pad = local_158[0];
      *(void **)((pTVar6->Result).Pad + 8) = local_150;
      local_150 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x10) = (undefined4)local_148;
      *(undefined4 *)((pTVar6->Result).Pad + 0x14) = local_148._4_4_;
      local_148 = 0;
      (pTVar6->Result).Pad[0x18] = '\0';
      (pTVar6->Result).Pad[0x19] = '\0';
      (pTVar6->Result).Pad[0x1a] = '\0';
      (pTVar6->Result).Pad[0x1b] = '\0';
      (pTVar6->Result).Pad[0x1c] = '\0';
      (pTVar6->Result).Pad[0x1d] = '\0';
      (pTVar6->Result).Pad[0x1e] = '\0';
      (pTVar6->Result).Pad[0x1f] = '\0';
      *(void **)((pTVar6->Result).Pad + 0x18) = local_140;
      local_140 = (void *)0x0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x20) = (undefined4)local_138;
      *(undefined4 *)((pTVar6->Result).Pad + 0x24) = local_138._4_4_;
      local_138 = 0;
      *(undefined4 *)((pTVar6->Result).Pad + 0x28) = local_130;
      FFutureState::MarkComplete((FFutureState *)pTVar6);
      if (local_140 != (void *)0x0) {
        FMemory::Free(local_140);
      }
      if (local_150 != (void *)0x0) {
        FMemory::Free(local_150);
      }
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<FIcmpEchoResult> **)__return_storage_ptr__ = pTVar7;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_210.State.Object != (TFutureState<FIcmpEchoResult> *)0x0) &&
      (((TAtomic<bool> *)&(local_210.State.Object)->_padding_)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<FIcmpEchoResult> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_210.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_> @ 14454fb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<FIcmpEchoManyCompleteResult> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<FIcmpEchoManyCompleteResult> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_> @ 1445507d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<FIcmpEchoResult>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<FIcmpEchoResult> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,void>::Call
  ;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<FIcmpEchoResult> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AsyncThread<TFunction<FIcmpEchoManyCompleteResult___cdecl(void)>_&> @ 144551470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<FIcmpEchoManyCompleteResult> * __cdecl
AsyncThread<TFunction<FIcmpEchoManyCompleteResult___cdecl(void)>_&>
          (TFuture<FIcmpEchoManyCompleteResult> *__return_storage_ptr__,
          TFunction<FIcmpEchoManyCompleteResult___cdecl(void)> *param_1,uint param_2,
          EThreadPriority param_3,TUniqueFunction<void___cdecl(void)> *param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  TFuture<FIcmpEchoManyCompleteResult> *pTVar4;
  FFutureState *pFVar5;
  FRunnableThread *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  FFutureState *pFVar9;
  void **ppvVar10;
  ForAnyElementType FVar11;
  TFutureState<FRunnableThread_*> *this;
  FFutureState *pFVar12;
  FFutureState *pFVar13;
  FFutureState *this_00;
  FFutureState *pFVar14;
  FFutureState *pFVar15;
  undefined1 auStackY_118 [32];
  TReferenceControllerBase<1> *local_e8;
  TPromise<FRunnableThread_*> local_e0;
  EThreadPriority local_c8;
  uint local_c4;
  FIcmpEchoManyResult *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  FFutureState *local_a8;
  FString local_a0;
  FFutureState *local_88;
  void *local_78;
  longlong lStack_70;
  undefined8 local_68;
  void **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_88 = *(FFutureState **)param_1;
  pFVar12 = (FFutureState *)0x0;
  local_a8 = (FFutureState *)param_4;
  local_60 = (void **)0x0;
  local_c8 = param_3;
  local_c4 = param_2;
  if (local_88 != (FFutureState *)0x0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_78);
  }
  local_e8 = operator_new(0xa0);
  if (local_e8 == (TReferenceControllerBase<1> *)0x0) {
    local_e8 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    local_e8->SharedReferenceCount = (atomic<int>)0x1;
    local_e8->WeakReferenceCount = (atomic<int>)0x1;
    local_e8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_UFIcmpEchoManyCompleteResult_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)(local_e8 + 1),param_4);
    this_00 = (FFutureState *)(local_e8 + 1);
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    LOCK();
    local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    LOCK();
    local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = local_e8;
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  pFVar15 = this_00;
  if (bVar3) {
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_e0);
    pFVar5 = operator_new(0x70);
    pFVar9 = local_a8;
    this = local_e0.State.Object;
    pFVar13 = pFVar12;
    pFVar14 = pFVar12;
    if (pFVar5 != (FFutureState *)0x0) {
      if ((local_e0.bFutureRetrieved != false) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
      local_e0.bFutureRetrieved = true;
      if ((local_e0.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
      if ((FEvent *)local_e0.State.SharedReferenceCount.ReferenceController != (FEvent *)0x0) {
        LOCK();
        (local_e0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      (pFVar5->Mutex).CriticalSection.Opaque1[0] =
           &___7__TAsyncRunnable_UFIcmpEchoManyCompleteResult____6B_;
      (pFVar5->Mutex).CriticalSection.Opaque3[0] = local_88;
      *(void ***)&(pFVar5->CompletionCallback).field_0x8 = local_60;
      local_60 = (void **)0x0;
      (pFVar5->Mutex).CriticalSection.Opaque3[2] = local_78;
      pFVar5->_padding_ = lStack_70;
      *(undefined8 *)&(pFVar5->CompletionCallback).field_0x0 = local_68;
      if ((pFVar5->Mutex).CriticalSection.Opaque3[0] != (void *)0x0) {
        local_88 = pFVar12;
      }
      (pFVar5->CompletionEvent).Event =
           (FEvent *)local_e0.State.SharedReferenceCount.ReferenceController;
      *(FFutureState **)&(pFVar5->CompletionCallback).field_0x10 = this_00;
      *(TReferenceControllerBase<1> **)&(pFVar5->CompletionCallback).field_0x18 = pTVar2;
      (pFVar5->CompletionCallback).field_0x20 = 1;
      *(TFutureState<FRunnableThread_*> **)&(pFVar5->CompletionCallback).field_0x28 =
           local_e0.State.Object;
      pFVar9 = pFVar12;
      this = local_e0.State.Object;
      pFVar13 = (FFutureState *)&DAT_00000001;
      pFVar14 = pFVar5;
      pFVar15 = pFVar12;
    }
    if (pFVar13 != (FFutureState *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_a0,L"TAsyncThread %d");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar11.Data = local_a0.Data.AllocatorInstance.Data;
    }
    pFVar6 = FRunnableThread::Create
                       ((FRunnable *)pFVar14,(wchar_t *)FVar11.Data,local_c4,local_c8,
                        0xffffffffffffffff,None);
    if ((pFVar6 == (FRunnableThread *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x1bd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (this == (TFutureState<FRunnableThread_*> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((*(TAtomic<bool> *)&this->field_0x68 != (TAtomic<bool>)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    *(FRunnableThread **)(this->Result).Pad = pFVar6;
    FFutureState::MarkComplete((FFutureState *)this);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (((this != (TFutureState<FRunnableThread_*> *)0x0) &&
        (*(TAtomic<bool> *)&this->field_0x68 == (TAtomic<bool>)0x0)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.State.SharedReferenceCount.ReferenceController);
    param_4 = (TUniqueFunction<void___cdecl(void)> *)local_a8;
  }
  else {
    UE::Core::Private::Function::CheckCallable(local_88);
    pFVar12 = local_88;
    ppvVar10 = &local_78;
    if (local_60 != (void **)0x0) {
      ppvVar10 = local_60;
    }
    uVar7 = (**(code **)((longlong)*ppvVar10 + 8))();
    (*(code *)pFVar12)(&local_c0,uVar7);
    if (this_00 == (FFutureState *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
      return pTVar4;
    }
    this_00[1].Mutex.CriticalSection.Opaque1[0] = (void *)0x0;
    this_00[1].Mutex.CriticalSection.Opaque1[0] = local_c0;
    local_c0 = (FIcmpEchoManyResult *)0x0;
    this_00[1].Mutex.CriticalSection.Opaque2[0] = (long)local_b8;
    this_00[1].Mutex.CriticalSection.Opaque2[1] = local_b8._4_4_;
    local_b8 = 0;
    *(undefined1 *)this_00[1].Mutex.CriticalSection.Opaque3 = local_b0;
    FFutureState::MarkComplete(this_00);
    DestructItems<FIcmpEchoManyResult,int>(local_c0,(long)local_b8);
    if (local_c0 != (FIcmpEchoManyResult *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  *(FFutureState **)__return_storage_ptr__ = this_00;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar15 != (FFutureState *)0x0) && (pFVar15->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TFuture<FIcmpEchoManyCompleteResult> *)(*pcVar1)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  if (local_88 != (FFutureState *)0x0) {
    ppvVar10 = &local_78;
    if (local_60 != (void **)0x0) {
      ppvVar10 = local_60;
    }
    (**(code **)((longlong)*ppvVar10 + 0x10))();
  }
  if ((((FFutureState *)param_4)->Mutex).CriticalSection.Opaque1[0] != (void *)0x0) {
    ppvVar10 = (((FFutureState *)param_4)->Mutex).CriticalSection.Opaque3;
    if ((void **)((FFutureState *)param_4)->_padding_ != (void **)0x0) {
      ppvVar10 = (void **)((FFutureState *)param_4)->_padding_;
    }
    (**(code **)((longlong)*ppvVar10 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AsyncThread<TFunction<FIcmpEchoResult___cdecl(void)>_&> @ 1445519f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<FIcmpEchoResult> * __cdecl
AsyncThread<TFunction<FIcmpEchoResult___cdecl(void)>_&>
          (TFuture<FIcmpEchoResult> *__return_storage_ptr__,
          TFunction<FIcmpEchoResult___cdecl(void)> *param_1,uint param_2,EThreadPriority param_3,
          TUniqueFunction<void___cdecl(void)> *param_4)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TFuture<FIcmpEchoResult> *pTVar4;
  TFutureState<FIcmpEchoResult> *pTVar5;
  FRunnableThread *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TFutureState<FIcmpEchoResult> *pTVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  TFutureState<FRunnableThread_*> *this;
  TFutureState<FIcmpEchoResult> *pTVar12;
  TFutureState<FIcmpEchoResult> *pTVar13;
  undefined1 auStackY_138 [32];
  TPromise<FIcmpEchoResult> local_108;
  TPromise<FRunnableThread_*> local_f0;
  EThreadPriority local_d8;
  TFutureState<FIcmpEchoResult> *local_d0;
  undefined4 local_c8 [2];
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  FString local_98;
  TFutureState<FIcmpEchoResult> *local_88;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_88 = *(TFutureState<FIcmpEchoResult> **)param_1;
  pTVar12 = (TFutureState<FIcmpEchoResult> *)0x0;
  local_d0 = (TFutureState<FIcmpEchoResult> *)((ulonglong)local_d0 & 0xffffffff00000000);
  local_60 = (longlong *)0x0;
  local_d8 = param_3;
  if (local_88 != (TFutureState<FIcmpEchoResult> *)0x0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_78);
  }
  TPromise<FIcmpEchoResult>::TPromise<FIcmpEchoResult>(&local_108,param_4);
  if ((local_108.bFutureRetrieved != false) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
    return pTVar4;
  }
  local_108.bFutureRetrieved = true;
  if ((local_108.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
    return pTVar4;
  }
  FVar2.ReferenceController = local_108.State.SharedReferenceCount.ReferenceController;
  pTVar9 = local_108.State.Object;
  local_d0 = local_108.State.Object;
  if (local_108.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_108.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar3) {
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_f0);
    pTVar5 = operator_new(0x70);
    pTVar9 = local_d0;
    this = local_f0.State.Object;
    pTVar13 = pTVar12;
    if (pTVar5 != (TFutureState<FIcmpEchoResult> *)0x0) {
      if ((local_f0.bFutureRetrieved != false) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
      local_f0.bFutureRetrieved = true;
      if ((local_f0.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
      if ((FEvent *)local_f0.State.SharedReferenceCount.ReferenceController != (FEvent *)0x0) {
        LOCK();
        (local_f0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      (((FWindowsRecursiveMutex *)&pTVar5->_padding_)->CriticalSection).Opaque1[0] =
           &___7__TAsyncRunnable_UFIcmpEchoResult____6B_;
      pTVar5->_padding_ = (longlong)local_88;
      pTVar5->_padding_ = (longlong)local_60;
      local_60 = (longlong *)0x0;
      pTVar5->_padding_ = local_78;
      pTVar5->_padding_ = lStack_70;
      *(undefined8 *)&((TUniqueFunction<void___cdecl(void)> *)&pTVar5->_padding_)->field_0x0 =
           local_68;
      if ((void *)pTVar5->_padding_ != (void *)0x0) {
        local_88 = pTVar12;
      }
      pTVar5->_padding_ = (longlong)local_108.State.Object;
      pTVar5->_padding_ = (longlong)local_108.State.SharedReferenceCount.ReferenceController;
      *(bool *)&pTVar5->_padding_ = local_108.bFutureRetrieved;
      local_108.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_108.State.Object = (TFutureState<FIcmpEchoResult> *)0x0;
      ((FPooledSyncEvent *)&pTVar5->_padding_)->Event =
           (FEvent *)local_f0.State.SharedReferenceCount.ReferenceController;
      pTVar5->_padding_ = (longlong)local_f0.State.Object;
      pTVar9 = pTVar12;
      this = local_f0.State.Object;
      pTVar12 = pTVar5;
      pTVar13 = (TFutureState<FIcmpEchoResult> *)&DAT_00000001;
    }
    if (pTVar13 != (TFutureState<FIcmpEchoResult> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar9);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_98,L"TAsyncThread %d");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
    }
    pFVar6 = FRunnableThread::Create
                       ((FRunnable *)pTVar12,(wchar_t *)FVar11.Data,param_2,local_d8,
                        0xffffffffffffffff,None);
    if ((pFVar6 == (FRunnableThread *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x1bd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (this == (TFutureState<FRunnableThread_*> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((*(TAtomic<bool> *)&this->field_0x68 != (TAtomic<bool>)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
      return pTVar4;
    }
    *(FRunnableThread **)(this->Result).Pad = pFVar6;
    FFutureState::MarkComplete((FFutureState *)this);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (((this != (TFutureState<FRunnableThread_*> *)0x0) &&
        (*(TAtomic<bool> *)&this->field_0x68 == (TAtomic<bool>)0x0)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
      return pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.State.SharedReferenceCount.ReferenceController);
    pTVar9 = local_d0;
  }
  else {
    UE::Core::Private::Function::CheckCallable(local_88);
    pTVar12 = local_88;
    plVar10 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    uVar7 = (**(code **)(*plVar10 + 8))();
    (*(code *)pTVar12)(local_c8,uVar7);
    if (pTVar9 == (TFutureState<FIcmpEchoResult> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
      if ((local_108.State.Object == (TFutureState<FIcmpEchoResult> *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar12 = local_108.State.Object;
    if ((*(TAtomic<bool> *)&(local_108.State.Object)->_padding_ != (TAtomic<bool>)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
      return pTVar4;
    }
    (pTVar12->Result).Pad[8] = '\0';
    (pTVar12->Result).Pad[9] = '\0';
    (pTVar12->Result).Pad[10] = '\0';
    (pTVar12->Result).Pad[0xb] = '\0';
    (pTVar12->Result).Pad[0xc] = '\0';
    (pTVar12->Result).Pad[0xd] = '\0';
    (pTVar12->Result).Pad[0xe] = '\0';
    (pTVar12->Result).Pad[0xf] = '\0';
    *(undefined4 *)(pTVar12->Result).Pad = local_c8[0];
    *(void **)((pTVar12->Result).Pad + 8) = local_c0;
    local_c0 = (void *)0x0;
    *(undefined4 *)((pTVar12->Result).Pad + 0x10) = (undefined4)local_b8;
    *(undefined4 *)((pTVar12->Result).Pad + 0x14) = local_b8._4_4_;
    local_b8 = 0;
    (pTVar12->Result).Pad[0x18] = '\0';
    (pTVar12->Result).Pad[0x19] = '\0';
    (pTVar12->Result).Pad[0x1a] = '\0';
    (pTVar12->Result).Pad[0x1b] = '\0';
    (pTVar12->Result).Pad[0x1c] = '\0';
    (pTVar12->Result).Pad[0x1d] = '\0';
    (pTVar12->Result).Pad[0x1e] = '\0';
    (pTVar12->Result).Pad[0x1f] = '\0';
    *(void **)((pTVar12->Result).Pad + 0x18) = local_b0;
    local_b0 = (void *)0x0;
    *(undefined4 *)((pTVar12->Result).Pad + 0x20) = (undefined4)local_a8;
    *(undefined4 *)((pTVar12->Result).Pad + 0x24) = local_a8._4_4_;
    local_a8 = 0;
    *(undefined4 *)((pTVar12->Result).Pad + 0x28) = local_a0;
    FFutureState::MarkComplete((FFutureState *)pTVar12);
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  *(TFutureState<FIcmpEchoResult> **)__return_storage_ptr__ = pTVar9;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar2.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_108.State.Object != (TFutureState<FIcmpEchoResult> *)0x0) &&
      (*(TAtomic<bool> *)&(local_108.State.Object)->_padding_ == (TAtomic<bool>)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TFuture<FIcmpEchoResult> *)(*pcVar1)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.State.SharedReferenceCount.ReferenceController);
  if (local_88 != (TFutureState<FIcmpEchoResult> *)0x0) {
    plVar10 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar10 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ConstructItems<FIcmpEchoManyResult,FIcmpEchoManyResult,int> @ 144551f70

void __cdecl
ConstructItems<FIcmpEchoManyResult,FIcmpEchoManyResult,int>
          (void *param_1,FIcmpEchoManyResult *param_2,int param_3)

{
  FIcmpEchoManyResult *pFVar1;
  FIcmpTarget *pFVar2;
  int *this;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 8);
    pFVar1 = param_2;
    do {
      this[-2] = *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)this);
      FString::FString((FString *)this,&(pFVar1->EchoResult).ResolvedAddress);
      FString::FString((FString *)(this + 4),&(pFVar1->EchoResult).ReplyFrom);
      *(float *)&(((FString *)(this + 8))->Data).AllocatorInstance.Data = (pFVar1->EchoResult).Time;
      FString::FString((FString *)(this + 10),&(pFVar1->Target).Address);
      pFVar2 = &pFVar1->Target;
      pFVar1 = pFVar1 + 1;
      this[0xe] = pFVar2->Port;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FIcmpTarget,FIcmpTarget,int> @ 144552000

void __cdecl
ConstructItems<FIcmpTarget,FIcmpTarget,int>(void *param_1,FIcmpTarget *param_2,int param_3)

{
  int *piVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,&param_2->Address);
      piVar1 = &param_2->Port;
      param_2 = param_2 + 1;
      *(int *)&this[1].Data.AllocatorInstance.Data = *piVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FIcmpEchoManyResult,int> @ 144552070

void __cdecl DestructItems<FIcmpEchoManyResult,int>(FIcmpEchoManyResult *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->EchoResult).ReplyFrom;
    do {
      if (*(void **)((longlong)(pFVar2 + 1) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + 1) + 8));
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FIcmpTarget,int> @ 1445520d0

void __cdecl DestructItems<FIcmpTarget,int>(FIcmpTarget *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Address).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// SetPromise<FIcmpEchoManyCompleteResult,TUniqueFunction<FIcmpEchoManyCompleteResult___cdecl(void)>_&> @ 144552520

void __cdecl
SetPromise<FIcmpEchoManyCompleteResult,TUniqueFunction<FIcmpEchoManyCompleteResult___cdecl(void)>_&>
          (TPromise<FIcmpEchoManyCompleteResult> *param_1,
          TUniqueFunction<FIcmpEchoManyCompleteResult___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<FIcmpEchoManyCompleteResult> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FIcmpEchoManyResult *local_28;
  undefined8 local_20;
  uchar local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_28,uVar3);
  if ((param_1->State).Object == (TFutureState<FIcmpEchoManyCompleteResult> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<FIcmpEchoManyCompleteResult> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Result).Pad[0] = '\0';
  (this->Result).Pad[1] = '\0';
  (this->Result).Pad[2] = '\0';
  (this->Result).Pad[3] = '\0';
  (this->Result).Pad[4] = '\0';
  (this->Result).Pad[5] = '\0';
  (this->Result).Pad[6] = '\0';
  (this->Result).Pad[7] = '\0';
  *(FIcmpEchoManyResult **)(this->Result).Pad = local_28;
  local_28 = (FIcmpEchoManyResult *)0x0;
  *(int *)((this->Result).Pad + 8) = (int)local_20;
  *(undefined4 *)((this->Result).Pad + 0xc) = local_20._4_4_;
  local_20 = 0;
  (this->Result).Pad[0x10] = local_18;
  FFutureState::MarkComplete((FFutureState *)this);
  DestructItems<FIcmpEchoManyResult,int>(local_28,(int)local_20);
  if (local_28 != (FIcmpEchoManyResult *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SetPromise<FIcmpEchoResult,TUniqueFunction<FIcmpEchoResult___cdecl(void)>_&> @ 144552660

void __cdecl
SetPromise<FIcmpEchoResult,TUniqueFunction<FIcmpEchoResult___cdecl(void)>_&>
          (TPromise<FIcmpEchoResult> *param_1,
          TUniqueFunction<FIcmpEchoResult___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<FIcmpEchoResult> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_38 [2];
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(local_38,uVar3);
  if ((param_1->State).Object == (TFutureState<FIcmpEchoResult> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<FIcmpEchoResult> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Result).Pad[8] = '\0';
  (this->Result).Pad[9] = '\0';
  (this->Result).Pad[10] = '\0';
  (this->Result).Pad[0xb] = '\0';
  (this->Result).Pad[0xc] = '\0';
  (this->Result).Pad[0xd] = '\0';
  (this->Result).Pad[0xe] = '\0';
  (this->Result).Pad[0xf] = '\0';
  *(undefined4 *)(this->Result).Pad = local_38[0];
  *(void **)((this->Result).Pad + 8) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)((this->Result).Pad + 0x10) = (undefined4)local_28;
  *(undefined4 *)((this->Result).Pad + 0x14) = local_28._4_4_;
  local_28 = 0;
  (this->Result).Pad[0x18] = '\0';
  (this->Result).Pad[0x19] = '\0';
  (this->Result).Pad[0x1a] = '\0';
  (this->Result).Pad[0x1b] = '\0';
  (this->Result).Pad[0x1c] = '\0';
  (this->Result).Pad[0x1d] = '\0';
  (this->Result).Pad[0x1e] = '\0';
  (this->Result).Pad[0x1f] = '\0';
  *(void **)((this->Result).Pad + 0x18) = local_20;
  local_20 = (void *)0x0;
  *(undefined4 *)((this->Result).Pad + 0x20) = (undefined4)local_18;
  *(undefined4 *)((this->Result).Pad + 0x24) = local_18._4_4_;
  local_18 = 0;
  *(undefined4 *)((this->Result).Pad + 0x28) = local_10;
  FFutureState::MarkComplete((FFutureState *)this);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// ~<lambda_1> @ 1445535b0

void __thiscall
`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000144553617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 144553630

void __thiscall
`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000144553697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1445536b0

void __thiscall
`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000144553717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0> @ 1445537d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0> @ 1445537f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TAsyncRunnable<FIcmpEchoResult>::Run_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1> @ 144553810

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1>
::~TFunction_OwnedObject<_FUdpPingManyAsync::Start_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUdpPingManyAsync::Start'::`2'::<lambda_1>,0,1>::_vftable_;
  DestructItems<FIcmpTarget,int>
            (*(FIcmpTarget **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1> @ 144553850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ____YA_AV__TFuture_UFIcmpEchoResult____W4EAsyncExecution__AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 144553870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 144553890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<FIcmpEchoResult>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1> @ 1445538b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FIcmpAsyncResult::FIcmpAsyncResult_::__l5::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FIcmpAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1> @ 1445538d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FUDPPingAsyncResult::FUDPPingAsyncResult_::__l5::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FUDPPingAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 144554090

void * __thiscall
IBaseDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445540c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445540f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554120

void * __thiscall
TAsyncQueuedWork<FIcmpEchoResult>::_scalar_deleting_destructor_
          (TAsyncQueuedWork<FIcmpEchoResult> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<FIcmpEchoResult> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<FIcmpEchoResult> *)0x0) && ((char)pTVar3->_padding_ == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445541f0

void * __thiscall
TAsyncRunnable<FIcmpEchoManyCompleteResult>::_scalar_deleting_destructor_
          (TAsyncRunnable<FIcmpEchoManyCompleteResult> *this,uint param_1)

{
  TFutureState<FIcmpEchoManyCompleteResult> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<FIcmpEchoManyCompleteResult> *)0x0) && (pTVar1->field_0x68 == '\0'))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445542a0

void * __thiscall
TAsyncRunnable<FIcmpEchoResult>::_scalar_deleting_destructor_
          (TAsyncRunnable<FIcmpEchoResult> *this,uint param_1)

{
  TFutureState<FIcmpEchoResult> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<FIcmpEchoResult> *)0x0) && ((char)pTVar1->_padding_ == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445543b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445543e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554410

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554440

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554470

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445544a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AXUFIcmpEchoResult___Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445544e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554560

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUdpPingManyAsync::Start'::`2'::<lambda_1>,0,1>::_vftable_;
  DestructItems<FIcmpTarget,int>
            (*(FIcmpTarget **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445545c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ____YA_AV__TFuture_UFIcmpEchoResult____W4EAsyncExecution__AEAV__TFunction___A6A_AUFIcmpEchoResult__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoManyCompleteResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFIcmpEchoResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445546b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FIcmpAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FUDPPingAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554750

void * __thiscall
TGraphTask<TAsyncGraphTask<FIcmpEchoResult>_>::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<FIcmpEchoResult>_> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445547b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FIcmpEchoManyCompleteResult>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FIcmpEchoManyCompleteResult>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445547f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FIcmpEchoResult>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FIcmpEchoResult>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554830

void * __thiscall
FIcmpAsyncResult::_scalar_deleting_destructor_(FIcmpAsyncResult *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *(undefined ***)this = &___7FIcmpAsyncResult__6B_;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\Icmp.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  if (*(longlong *)&this->Callback != 0) {
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    plVar6 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554900

void * __thiscall
FUDPPingAsyncResult::_scalar_deleting_destructor_(FUDPPingAsyncResult *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *(undefined ***)this = &___7FUDPPingAsyncResult__6B_;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x5e7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  if (*(longlong *)&this->Callback != 0) {
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    plVar6 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445549d0

void * __thiscall
FUdpPingManyAsync::_scalar_deleting_destructor_(FUdpPingManyAsync *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7FUdpPingManyAsync__6B_;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x3e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompletionDelegate);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144554a80

void * __thiscall FUdpPingWorker::_scalar_deleting_destructor_(FUdpPingWorker *this,uint param_1)

{
  ~FUdpPingWorker(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// CalculateChecksum @ 144554b90

int __cdecl CalculateChecksum(uchar *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  uVar4 = 0;
  if (3 < param_2) {
    uVar1 = (param_2 - 4U >> 2) + 1;
    uVar2 = (ulonglong)uVar1;
    param_2 = param_2 + uVar1 * -4;
    do {
      iVar3 = iVar3 + (uint)*(ushort *)param_1;
      iVar5 = iVar5 + (uint)*(ushort *)((longlong)param_1 + 2);
      param_1 = (uchar *)((longlong)param_1 + 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (1 < param_2) {
    uVar4 = (uint)*(ushort *)param_1;
    param_1 = (uchar *)((longlong)param_1 + 2);
    param_2 = param_2 + -2;
  }
  uVar4 = uVar4 + iVar5 + iVar3;
  if (param_2 == 1) {
    uVar4 = uVar4 + (byte)*(ushort *)param_1;
  }
  iVar3 = ((int)uVar4 >> 0x10) + (uVar4 & 0xffff);
  return ~((iVar3 >> 0x10) + iVar3);
}

// GetTypeHash @ 144556940

uint __cdecl GetTypeHash(FProgressKey *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (param_1->Address).Data.ArrayNum;
  uVar4 = param_1->UniqueId;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Address).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  uVar7 = uVar2 - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar6 = (uVar4 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar4 = (uVar2 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar2 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar6 = (uVar7 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 << 10;
  return (uVar2 - uVar4) - uVar6 ^ uVar4 >> 0xf;
}

// HtoNL @ 144556c90

/* unsigned int __cdecl HtoNL(unsigned int) */

uint __cdecl HtoNL(uint param_1)

{
  u_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144556c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htonl(param_1);
  return uVar1;
}

// HtoNS @ 144556ca0

/* unsigned short __cdecl HtoNS(unsigned short) */

ushort __cdecl HtoNS(ushort param_1)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144556ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(param_1);
  return uVar1;
}

// IcmpEchoImpl @ 144556de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FIcmpEchoResult * __cdecl
IcmpEchoImpl(FIcmpEchoResult *__return_storage_ptr__,ISocketSubsystem *param_1,FString *param_2,
            float param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  ulong DestinationAddress;
  DWORD DVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  wchar_t *_Str;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackY_3e8 [32];
  FString local_3a8;
  FString local_398;
  FScriptContainerElement local_388 [128];
  ForAnyElementType local_308;
  FScriptContainerElement *local_300;
  int local_2f8;
  wchar_t local_2e8 [16];
  undefined1 local_2c8 [4];
  uint local_2c4 [151];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  __return_storage_ptr__->Status = InternalError;
  (__return_storage_ptr__->ResolvedAddress).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = &__return_storage_ptr__->ReplyFrom;
  (__return_storage_ptr__->ResolvedAddress).Data.ArrayNum = 0;
  (__return_storage_ptr__->ResolvedAddress).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ReplyFrom).Data.ArrayNum = 0;
  (__return_storage_ptr__->ReplyFrom).Data.ArrayMax = 0;
  __return_storage_ptr__->Time = -1.0;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  bVar5 = ResolveIp(param_1,param_2,&local_3a8);
  FVar4.Data = local_3a8.Data.AllocatorInstance.Data;
  if (!bVar5) {
    __return_storage_ptr__->Status = Unresolvable;
    if (local_3a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  iVar7 = local_3a8.Data.ArrayNum;
  iVar13 = local_3a8.Data.ArrayNum + -1;
  if (local_3a8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  FString::AssignRange
            (&__return_storage_ptr__->ResolvedAddress,
             (wchar_t *)local_3a8.Data.AllocatorInstance.Data,iVar13);
  local_308.Data = (FScriptContainerElement *)0x0;
  if (iVar7 == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)FVar4.Data;
    if (FVar4.Data == (FScriptContainerElement *)0x0) {
      local_2f8 = 0;
      local_300 = (FScriptContainerElement *)0x0;
      goto LAB_144556f3f;
    }
  }
  sVar8 = wcslen(_Str);
  local_2f8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar8);
  uVar11 = local_2f8 + 1;
  uVar14 = uVar11;
  if (uVar11 < 0x81) {
    if (local_308.Data != (FScriptContainerElement *)0x0) {
      uVar14 = 0;
      goto LAB_144556f05;
    }
  }
  else {
LAB_144556f05:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_308,0,uVar14,1);
  }
  local_300 = local_388;
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    local_300 = local_308.Data;
  }
  UE::Core::Private::Convert((uchar *)local_300,uVar11,_Str,(int)sVar8 + 1);
LAB_144556f3f:
  DestinationAddress = inet_addr((char *)local_300);
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  if ((DestinationAddress != 0xffffffff) &&
     (local_3a8.Data.AllocatorInstance.Data = IcmpCreateFile(),
     local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0xffffffffffffffff)) {
    DVar6 = IcmpSendEcho(local_3a8.Data.AllocatorInstance.Data,DestinationAddress,
                         ">>>>This string is 32 bytes<<<<",0x20,(PIP_OPTION_INFORMATION)0x0,
                         local_2c8,600,(int)(param_3 * __real_447a0000));
    fVar3 = __real_3a83126f;
    if (DVar6 == 0) {
      DVar6 = GetLastError();
      if (DVar6 == 0x2b02) {
        __return_storage_ptr__->Status = Timeout;
      }
    }
    else {
      puVar10 = local_2c4;
      bVar5 = false;
      __return_storage_ptr__->Status = Timeout;
      uVar12 = 0;
      do {
        if (bVar5) break;
        __return_storage_ptr__->Time = (float)puVar10[1] * fVar3;
        lVar9 = InetNtopW(2,local_2c8 + uVar12 * 0x1c,local_2e8,0x10);
        if ((lVar9 == 0) && (2 < (byte)LogIcmp._0_1_)) {
          GetLastError();
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogIcmp);
        }
        FString::FString(&local_398,local_2e8);
        if (pFVar1 != &local_398) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->ReplyFrom).Data.ArrayNum = local_398.Data.ArrayNum;
          (__return_storage_ptr__->ReplyFrom).Data.ArrayMax = local_398.Data.ArrayMax;
          local_398.Data.ArrayNum = 0;
          local_398.Data.ArrayMax = 0;
          local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        uVar11 = *puVar10;
        if (uVar11 < 0x2afd) {
          if (uVar11 != 0x2afc) {
            if (uVar11 == 0) {
              iVar7 = (__return_storage_ptr__->ReplyFrom).Data.ArrayNum;
              iVar13 = (__return_storage_ptr__->ResolvedAddress).Data.ArrayNum;
              if (iVar7 == iVar13) {
                if (1 < iVar7) {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)(pFVar1->Data).AllocatorInstance.Data,
                                     (wchar_t *)
                                     (__return_storage_ptr__->ResolvedAddress).Data.
                                     AllocatorInstance.Data);
                  bVar15 = iVar7 == 0;
                  goto LAB_1445570fa;
                }
              }
              else {
                bVar15 = iVar7 + iVar13 == 1;
LAB_1445570fa:
                if (!bVar15) goto LAB_1445570c5;
              }
              __return_storage_ptr__->Status = Success;
              bVar5 = true;
              goto LAB_1445570c5;
            }
            if ((uVar11 != 0x2afa) && (uVar11 != 0x2afb)) goto LAB_144557118;
          }
LAB_1445570bf:
          __return_storage_ptr__->Status = Unreachable;
        }
        else {
          if (uVar11 == 0x2afd) goto LAB_1445570bf;
          if (uVar11 != 0x2b02) {
LAB_144557118:
            __return_storage_ptr__->Status = InternalError;
          }
        }
LAB_1445570c5:
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        puVar10 = puVar10 + 7;
      } while (uVar11 < DVar6);
    }
    IcmpCloseHandle(local_3a8.Data.AllocatorInstance.Data);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return __return_storage_ptr__;
}

// IpToString @ 144557780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl IcmpWindows::IpToString(FString *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  wchar_t local_38 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  lVar1 = InetNtopW(2,param_1,local_38,0x10);
  if ((lVar1 == 0) && (2 < (byte)LogIcmp._0_1_)) {
    GetLastError();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIcmp);
  }
  ::FString::FString(__return_storage_ptr__,local_38);
  return __return_storage_ptr__;
}

// NtoHL @ 144557a50

/* unsigned int __cdecl NtoHL(unsigned int) */

uint __cdecl NtoHL(uint param_1)

{
  u_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144557a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohl(param_1);
  return uVar1;
}

// NtoHS @ 144557a60

/* unsigned short __cdecl NtoHS(unsigned short) */

ushort __cdecl NtoHS(ushort param_1)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144557a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohs(param_1);
  return uVar1;
}

// ResolveIp @ 144558450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl ResolveIp(ISocketSubsystem *param_1,FString *param_2,FString *param_3)

{
  ushort uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *_Str;
  uint uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  void *local_f8 [2];
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_1 == (ISocketSubsystem *)0x0) {
    return false;
  }
  (**(code **)(param_1->_padding_ + 0x90))();
  plVar3 = local_108;
  pFVar8 = (FScriptContainerElement *)0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  pcVar2 = *(code **)(param_1->_padding_ + 0x68);
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_1445585b3;
    }
  }
  sVar7 = wcslen(_Str);
  local_58 = (int)sVar7;
  uVar12 = local_58 + 1;
  FVar13.Data = pFVar8;
  if (0x80 < uVar12) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,1);
    FVar13.Data = local_68.Data;
  }
  lVar14 = (longlong)(int)uVar12;
  pFVar11 = local_e8;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    pFVar11 = FVar13.Data;
  }
  bVar4 = false;
  pFVar10 = pFVar8;
  local_60 = pFVar11;
  if (0 < lVar14) {
    do {
      uVar1 = *(ushort *)((longlong)_Str + (longlong)pFVar10 * 2);
      pFVar11[(longlong)pFVar10] = SUB21(uVar1,0);
      pFVar10 = pFVar10 + 1;
      bVar4 = (bool)(bVar4 | 0x7f < uVar1);
    } while ((longlong)pFVar10 < lVar14);
    if (bVar4) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + (longlong)pFVar8 * 2)) {
          pFVar8[(longlong)pFVar11] = (FScriptContainerElement)0x3f;
        }
        pFVar8 = pFVar8 + 1;
      } while ((longlong)pFVar8 < lVar14);
    }
  }
  if ((pFVar11 + lVar14 == (FScriptContainerElement *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_1445585b3:
  iVar6 = (*pcVar2)(param_1,local_60,plVar3);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if ((iVar6 != 0) && (iVar6 != 7)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    return false;
  }
  pFVar9 = (FString *)(**(code **)(*local_108 + 0x80))(local_108,local_f8,0);
  if (param_3 != pFVar9) {
    pFVar8 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_f8[0] != (void *)0x0) {
    FMemory::Free(local_f8[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  return true;
}

// UDPEchoImpl @ 14455b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIcmpEchoResult * __cdecl
UDPEchoImpl(FIcmpEchoResult *__return_storage_ptr__,ISocketSubsystem *param_1,FString *param_2,
           float param_3)

{
  FString *this;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ushort uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  FNameEntryId FVar14;
  DWORD DVar15;
  u_long uVar16;
  FIcmpEchoResult *pFVar17;
  undefined8 uVar18;
  undefined4 extraout_var;
  longlong *plVar19;
  undefined8 *puVar20;
  u_short hostshort;
  ForAnyElementType FVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStackY_218 [32];
  char local_1d8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d0;
  u_short local_1c0 [2];
  int local_1bc;
  undefined4 local_1b8 [2];
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  FString local_140;
  undefined1 local_130 [8];
  void *local_128 [2];
  u_short local_118;
  u_short local_116;
  ushort local_114;
  ushort local_112;
  ushort uStack_110;
  ushort uStack_10e;
  ushort uStack_10c;
  uint local_10a;
  uint local_106;
  ushort local_100;
  ushort uStack_fe;
  ushort uStack_fc;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  ushort uStack_f2;
  ushort uStack_f0;
  ushort uStack_ee;
  ushort local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this = &__return_storage_ptr__->ReplyFrom;
  (__return_storage_ptr__->ResolvedAddress).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ResolvedAddress).Data.ArrayNum = 0;
  (__return_storage_ptr__->ResolvedAddress).Data.ArrayMax = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ReplyFrom).Data.ArrayNum = 0;
  (__return_storage_ptr__->ReplyFrom).Data.ArrayMax = 0;
  __return_storage_ptr__->Time = -1.0;
  __return_storage_ptr__->Status = InternalError;
  local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.Data.ArrayNum = 0;
  local_190.Data.ArrayMax = 0;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  iVar13 = FString::ParseIntoArray(param_2,&local_1d0,L":",true);
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar23 = (longlong)local_1a0.Data.ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (local_1a0.Data.ArrayNum == 0) {
    local_1a0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0,local_1a0.Data.ArrayNum
               ,&local_1a0.Data.ArrayMax);
    memcpy(local_1a0.Data.AllocatorInstance.Data,pFVar2,lVar23 * 2);
  }
  if (iVar13 == 2) {
    if ((local_1d0.ArrayNum < 1) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar17 = (FIcmpEchoResult *)(*pcVar3)();
      return pFVar17;
    }
    iVar13 = *(int *)(local_1d0.AllocatorInstance.Data + 8) + -1;
    if (*(int *)(local_1d0.AllocatorInstance.Data + 8) == 0) {
      iVar13 = 0;
    }
    FString::AssignRange(&local_1a0,*(wchar_t **)local_1d0.AllocatorInstance.Data,iVar13);
    if ((local_1d0.ArrayNum < 2) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar17 = (FIcmpEchoResult *)(*pcVar3)();
      return pFVar17;
    }
    iVar13 = *(int *)(local_1d0.AllocatorInstance.Data + 0x18) + -1;
    if (*(int *)(local_1d0.AllocatorInstance.Data + 0x18) == 0) {
      iVar13 = 0;
    }
    FString::AssignRange(&local_190,*(wchar_t **)(local_1d0.AllocatorInstance.Data + 0x10),iVar13);
  }
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = 0;
  local_1b0.Data.ArrayMax = 0;
  bVar11 = ResolveIp(param_1,&local_1a0,&local_1b0);
  if (bVar11) {
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar21.Data = local_190.Data.AllocatorInstance.Data;
    }
    _wtoi((wchar_t *)FVar21.Data);
    if (param_1 != (ISocketSubsystem *)0x0) {
      (**(code **)(param_1->_padding_ + 0x90))(param_1,&local_178);
      iVar13 = local_1b0.Data.ArrayNum;
      local_1d8[0] = '\0';
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_1b0.Data.ArrayNum != 0) {
        FVar21.Data = local_1b0.Data.AllocatorInstance.Data;
      }
      (**(code **)(*local_178 + 0x10))(local_178,FVar21.Data,local_1d8);
      (**(code **)(*local_178 + 0x28))();
      if (local_1d8[0] != '\0') {
        uStack_f0 = 0;
        uStack_ee = 0;
        local_ec = 0;
        local_100 = 0;
        uStack_fe = 0;
        uStack_fc = 0;
        uStack_fa = 0;
        uStack_f8 = 0;
        uStack_f2 = 0;
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar13 + -1;
        }
        FString::AssignRange
                  (&__return_storage_ptr__->ResolvedAddress,
                   (wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar13);
        pcVar3 = *(code **)(param_1->_padding_ + 0x18);
        uVar18 = (**(code **)(*local_178 + 0xa8))(local_178,local_130);
        FString::FString(&local_140,L"UDPPing");
        FVar14 = FNameEntryId::FromValidEName((EName)local_1c0);
        local_180 = *(undefined4 *)CONCAT44(extraout_var,FVar14.Value);
        local_17c = 0;
        plVar19 = (longlong *)(*pcVar3)(param_1,&local_180,&local_140,uVar18);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (plVar19 != (longlong *)0x0) {
          DVar15 = FWindowsPlatformProcess::GetCurrentProcessId();
          hostshort = (u_short)PingSequence;
          PingSequence = PingSequence + 1;
          local_1c0[0] = hostshort;
          local_100 = htons((u_short)DVar15);
          uStack_fe = htons(hostshort);
          bVar11 = false;
          uStack_fc = 0;
          uVar16 = htonl(0xaaaaaaaa);
          uStack_f2 = (ushort)uVar16;
          uStack_f0 = (ushort)(uVar16 >> 0x10);
          uVar16 = htonl(0xbbbbbbbb);
          uStack_ee = (ushort)uVar16;
          local_ec = (ushort)(uVar16 >> 0x10);
          QueryPerformanceCounter(&local_158);
          uStack_fa = (undefined2)local_158.s.LowPart;
          uStack_f8 = (undefined6)((ulonglong)local_158 >> 0x10);
          uVar22 = (local_158.s.HighPart & 0xffffU) +
                   ((uint)((ulonglong)local_158 >> 0x10) & 0xffff) +
                   (uint)local_158.s.HighPart._2_2_ + (uint)local_ec + (uint)uStack_ee +
                   (uint)uStack_f0 + (uint)uStack_f2 + (local_158.s.LowPart & 0xffff) +
                   (uint)uStack_fc + (uint)uStack_fe + (uint)local_100;
          iVar13 = (uVar22 & 0xffff) + ((int)uVar22 >> 0x10);
          uStack_fc = ~((short)((uint)iVar13 >> 0x10) + (short)iVar13);
          dVar24 = FWindowsPlatformTime::Seconds();
          local_1b8[0] = 0;
          cVar12 = (**(code **)(*plVar19 + 0x58))(plVar19,&local_100,0x16,local_1b8);
          dVar9 = __real_40ed4c0000000000;
          dVar8 = __real_4170000000000000;
          dVar7 = __real_416312d000000000;
          dVar6 = __real_3fe0000000000000;
          dVar5 = (double)param_3;
          if (cVar12 != '\0') {
            do {
              auVar25._8_8_ = 0;
              auVar25._0_8_ = dVar5 * dVar7 + dVar6;
              auVar25 = roundpd(auVar25,auVar25,1);
              cVar12 = (**(code **)(*plVar19 + 0x80))(plVar19,0,(longlong)auVar25._0_8_);
              if (cVar12 == '\0') {
                __return_storage_ptr__->Status = Timeout;
                FString::Empty(this);
                __return_storage_ptr__->Time = param_3;
                break;
              }
              QueryPerformanceCounter(&local_150);
              local_1bc = 0;
              dVar5 = (double)param_3 -
                      (((double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8)
                      - dVar24);
              if (dVar5 <= 0.0) {
                dVar5 = 0.0;
              }
              (**(code **)(param_1->_padding_ + 0x90))(param_1);
              cVar12 = (**(code **)(*plVar19 + 0x68))(plVar19,&local_118,0x16,&local_1bc);
              if (cVar12 == '\0') {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_160);
                break;
              }
              if (local_1bc == 0x16) {
                QueryPerformanceCounter(&local_148);
                puVar20 = (undefined8 *)(**(code **)(*local_168 + 0x80))(local_168,local_128,0);
                if (this != (FString *)puVar20) {
                  pFVar2 = (this->Data).AllocatorInstance.Data;
                  if (pFVar2 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar2);
                  }
                  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar20;
                  *puVar20 = 0;
                  (__return_storage_ptr__->ReplyFrom).Data.ArrayNum = *(int *)(puVar20 + 1);
                  (__return_storage_ptr__->ReplyFrom).Data.ArrayMax =
                       *(int *)((longlong)puVar20 + 0xc);
                  puVar20[1] = 0;
                }
                if (local_128[0] != (void *)0x0) {
                  FMemory::Free(local_128[0]);
                }
                uVar10 = local_114;
                local_114 = 0;
                uVar22 = (local_106 >> 0x10) + (local_106 & 0xffff) + (local_10a >> 0x10) +
                         (local_10a & 0xffff) + (uint)uStack_10c + (uint)uStack_10e +
                         (uint)uStack_110 + (uint)local_112 + (uint)local_116 + (uint)local_118;
                iVar13 = (uVar22 & 0xffff) + (uVar22 >> 0x10);
                if (uVar10 == (ushort)~((short)((uint)iVar13 >> 0x10) + (short)iVar13)) {
                  local_118 = ntohs(local_118);
                  local_116 = ntohs(local_116);
                  if ((local_10a == 0xaaaaaaaa) && (local_106 == 0xbbbbbbbb)) {
                    iVar13 = (__return_storage_ptr__->ReplyFrom).Data.ArrayNum;
                    iVar1 = (__return_storage_ptr__->ResolvedAddress).Data.ArrayNum;
                    dVar4 = (double)(ulonglong)
                                    (local_148.QuadPart -
                                    CONCAT26(uStack_10c,
                                             CONCAT24(uStack_10e,CONCAT22(uStack_110,local_112)))) *
                            FGenericPlatformTime::SecondsPerCycle64;
                    if (iVar13 == iVar1) {
                      if (1 < iVar13) {
                        iVar13 = FGenericPlatformStricmp::Stricmp
                                           ((wchar_t *)(this->Data).AllocatorInstance.Data,
                                            (wchar_t *)
                                            (__return_storage_ptr__->ResolvedAddress).Data.
                                            AllocatorInstance.Data);
                        bVar11 = iVar13 == 0;
                        goto LAB_14455bf4a;
                      }
                    }
                    else {
                      bVar11 = iVar13 + iVar1 == 1;
LAB_14455bf4a:
                      if (!bVar11) goto LAB_14455bf78;
                    }
                    if ((((local_118 == (u_short)DVar15) && (local_116 == local_1c0[0])) &&
                        (0.0 <= dVar4)) && (dVar4 < dVar9)) {
                      __return_storage_ptr__->Status = Success;
                      __return_storage_ptr__->Time = (float)dVar4;
                    }
                  }
                }
LAB_14455bf78:
                bVar11 = true;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_160);
            } while (!bVar11);
          }
        }
        (**(code **)(param_1->_padding_ + 0x38))(param_1,plVar19);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
    }
  }
  else {
    __return_storage_ptr__->Status = Unresolvable;
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_Icmp @ 14455caa0

void __cdecl IMPLEMENT_MODULE_Icmp(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogIcmp'' @ 15036c820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIcmp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIcmp);
  return;
}

// `dynamic_atexit_destructor_for_'LogPing'' @ 15036c840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPing);
  return;
}


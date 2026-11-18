// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 40

// `dynamic_initializer_for_'GThreadedSwapDebugExtraTimeMsCVar'' @ 14116a100

void __cdecl Audio::_dynamic_initializer_for__GThreadedSwapDebugExtraTimeMsCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GThreadedSwapDebugExtraTimeMsCVar,L"au.ThreadedSwapDebugExtraTime",
             &GThreadedSwapDebugExtraTimeMs,
             L"Simulate a slow device swap by adding additional time to the swap task",0);
  atexit(_dynamic_atexit_destructor_for__GThreadedSwapDebugExtraTimeMsCVar__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioMixerXAudio2'' @ 14116a150

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioMixerXAudio2__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioMixerXAudio2";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioMixerXAudio2",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioMixerModuleXAudio2>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'WindowsNotificationClient'' @ 14116a1a0

void __cdecl Audio::_dynamic_initializer_for__WindowsNotificationClient__(void)

{
  atexit(_dynamic_atexit_destructor_for__WindowsNotificationClient__);
  return;
}

// `scalar_deleting_destructor' @ 148d39a10

void * __thiscall
FAudioMixerModuleXAudio2::_scalar_deleting_destructor_(FAudioMixerModuleXAudio2 *this,uint param_1)

{
  *this = (FAudioMixerModuleXAudio2)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_> @ 148d39a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run_::__l2::<lambda_1>_>
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
  TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
  *local_a8;
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
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>,void>
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
    local_a8 = (TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
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
                    TFunctionRefCaller<`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
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

// Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_> @ 148d3a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> * __cdecl
Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>
          (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *__return_storage_ptr__,EAsyncExecution param_1,
          TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>
          *param_2,TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskBase *pFVar9;
  TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *pTVar10;
  FTaskBase *pFVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  FPipe *pFVar17;
  FSharedReferencer<1> FVar18;
  FTaskBase *pFVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FTaskBase *pFVar22;
  Type TVar23;
  FTaskBase *pFVar24;
  FTaskBase *this_00;
  undefined1 auStackY_1f8 [32];
  EExtendedTaskPriority local_1b8;
  ETaskPriority local_1b7 [7];
  FTaskBase *local_1b0;
  FTaskBase *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
  *local_188;
  FTaskBase *local_180;
  FRunnableThread *local_178;
  FRunnableThread *local_170;
  TPromise<FRunnableThread_*> local_168;
  TPromise<FRunnableThread_*> local_150;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_2->field_0x28;
  pFVar22 = (FTaskBase *)0x0;
  local_f8 = *(FTaskBase **)param_2;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_e8.EmptyEventRef.Object = *(TEventCount<unsigned_int> **)&param_2->field_0x20;
  local_1b0 = (FTaskBase *)((ulonglong)local_1b0 & 0xffffffff00000000);
  local_e8.LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)&param_2->field_0x10;
  local_e8.TaskCount = *(atomic<unsigned___int64> *)&param_2->field_0x18;
  if (local_f8 != (FTaskBase *)0x0) {
    *(undefined8 *)param_2 = 0;
  }
  local_188 = __return_storage_ptr__;
  local_180 = (FTaskBase *)param_3;
  pFVar9 = operator_new(0x90);
  if (pFVar9 == (FTaskBase *)0x0) {
    local_1a8 = (FTaskBase *)0x0;
    local_1b0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar9 = pFVar22;
  }
  else {
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar9->_padding_)[1] = (atomic<int>)0x1;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio_________00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)&pFVar9->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar9->_padding_;
    local_1a8 = pFVar9;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
    local_1b0 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar23 = GameThread;
    if (param_1 == TaskGraph) {
      TVar23 = AnyNormalThreadNormalTask;
    }
    pFVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar19 = pFVar22;
    if (pFVar11 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar11,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TGraphTask_V__TAsyncGraphTask_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio__________6B_
      ;
      pFVar19 = pFVar11;
    }
    pFVar19[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar19[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar19[1]._padding_ = (longlong)local_e8.TaskCount;
    local_1b0 = (FTaskBase *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar19[1]._padding_ != 0) {
      local_f8 = pFVar22;
    }
    *(FTaskBase **)&pFVar19[1].StateChangeEvent = local_1a8;
    pFVar19[1].Pipe = (FPipe *)this_00;
    *(undefined1 *)&pFVar19[1].ExecutingThreadId = 1;
    *(Type *)&pFVar19[1].TraceId = TVar23;
    UE::Tasks::Private::TranslatePriority(TVar23,local_1b7,&local_1b8);
    UE::Tasks::Private::FTaskBase::Init(pFVar19,L"GraphTask",local_1b7[0],local_1b8,None);
    if (pFVar19 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar19->RefCount = (atomic<unsigned_int>)((int)pFVar19->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x130);
      LOCK();
      paVar1 = &pFVar19->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
    }
    goto LAB_148d3a9a1;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1b0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar9;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ____YA_AV__TFuture_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________W4EAsyncExecution____QEAV__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar17 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar17 = local_a0;
      }
      (**(code **)((longlong)pFVar17->LastTask + 0x10))();
    }
LAB_148d3a9a1:
    pTVar10 = local_188;
    *(FTaskBase **)local_188 = this_00;
    *(FTaskBase **)&local_188->field_0x8 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_148d3b3a4;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_168);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_180;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_168.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_168.State.Object;
        local_168.bFutureRetrieved = true;
        if ((local_168.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        if (local_168.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_168.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________6B_
        ;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_168.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000001;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar21.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_168,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_168.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_168.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_1a0,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 **)&(this_00->Prerequisites).Mutex = local_1a0;
      local_1a0 = (undefined8 *)0x0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      puVar14 = local_1a0;
LAB_148d3ae53:
      pFVar22 = this_00;
      if (puVar14 != (undefined8 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_150);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_180;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_150.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_150.State.Object;
        local_150.bFutureRetrieved = true;
        if ((local_150.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        if (local_150.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_150.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_150.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________6B_
        ;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_150.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000002;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar21.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_150,&local_170);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_150.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_150.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_198,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 **)&(this_00->Prerequisites).Mutex = local_198;
      local_198 = (undefined8 *)0x0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      pFVar22 = this_00;
      if (local_198 != (undefined8 *)0x0) {
        (**(code **)*local_198)(local_198,1);
      }
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar7) {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_190,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 **)&(this_00->Prerequisites).Mutex = local_190;
      local_190 = (undefined8 *)0x0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      puVar14 = local_190;
      goto LAB_148d3ae53;
    }
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("GThreadPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x16f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar14 = operator_new(0x60);
    if (puVar14 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
      pFVar22 = this_00;
    }
    else {
      puVar14[1] = 0;
      local_1b0 = (FTaskBase *)0x0;
      *puVar14 = &
                 ___7__TAsyncQueuedWork_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________6B_
      ;
      puVar14[2] = local_f8;
      puVar14[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)(puVar14 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar14 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar14 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar14[6] = local_e8.EmptyEventRef.Object;
      if (puVar14[2] != 0) {
        local_f8 = pFVar22;
      }
      puVar14[8] = this_00;
      puVar14[9] = pFVar9;
      *(undefined1 *)(puVar14 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar14,3);
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    pFVar22 = this_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
  }
  pTVar10 = local_188;
  *(FTaskBase **)local_188 = this_00;
  *(FTaskBase **)&local_188->field_0x8 = pFVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar22 != (FTaskBase *)0x0) &&
      ((char)(pFVar22->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
               *)(*pcVar5)();
    return pTVar10;
  }
LAB_148d3b3a4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 0x10))();
  }
  if (local_180->_padding_ != 0) {
    plVar20 = &local_180->_padding_;
    if ((longlong *)local_180->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_180->_padding_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return pTVar10;
}

// SetPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>,TUniqueFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_&> @ 148d3b4f0

void __cdecl
SetPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>,TUniqueFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_&>
          (TPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *param_1,
          TUniqueFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>
          *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> local_res10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar3 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_2->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_res10,uVar2);
  TPromise<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::
  SetValue(param_1,&local_res10);
  if (local_res10.Ptr != (FDeviceSwapResult *)0x0) {
    (**(code **)(local_res10.Ptr)->_padding_)(local_res10.Ptr,1);
  }
  return;
}

// ~<lambda_1> @ 148d3b760

void __thiscall
`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x000148d3b7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 148d3b7e0

void __thiscall
`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x000148d3b847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0> @ 148d3b8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>,1,0> @ 148d3b900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 148d3b920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1> @ 148d3b940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ____YA_AV__TFuture_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________W4EAsyncExecution____QEAV__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d3bdcc

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerPlatformXAudio2::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerPlatformXAudio2::_vector_deleting_destructor__adjustor_8__
          (FMixerPlatformXAudio2 *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMixerPlatformXAudio2 *)&this[-1].DeviceSwapContext,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 148d3bddc

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerPlatformXAudio2::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerPlatformXAudio2::_vector_deleting_destructor__adjustor_16__
          (FMixerPlatformXAudio2 *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMixerPlatformXAudio2 *)&this[-1].field_0x250,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148d3bdf0

void * __thiscall
TAsyncQueuedWork<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::
_scalar_deleting_destructor_
          (TAsyncQueuedWork<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
  *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                  *)0x0) && (pTVar3->field_0x68 == '\0')) {
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

// `scalar_deleting_destructor' @ 148d3bec0

void * __thiscall
TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::
_scalar_deleting_destructor_
          (TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
           *this,uint param_1)

{
  TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
  *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                  *)0x0) && (pTVar1->field_0x68 == '\0')) {
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

// `scalar_deleting_destructor' @ 148d3bf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3bfb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3bff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ____YA_AV__TFuture_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio________W4EAsyncExecution____QEAV__TFunction___A6A_AV__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio______XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c090

void * __thiscall
TGraphTask<TAsyncGraphTask<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>_>
           *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148d3c0f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c130

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FWindowsMMNotificationClient,`Audio::FMixerPlatformXAudio2::RegisterDeviceChangedListener'::__l5::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c170

void * __thiscall
Audio::FDeviceSwapContext::_scalar_deleting_destructor_(FDeviceSwapContext *this,uint param_1)

{
  ~FDeviceSwapContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c1b0

void * __thiscall
Audio::FDeviceSwapResult::_scalar_deleting_destructor_(FDeviceSwapResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SwapReason).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c220

void * __thiscall
Audio::FMixerPlatformXAudio2::_scalar_deleting_destructor_(FMixerPlatformXAudio2 *this,uint param_1)

{
  FXAudio2DeviceSwapContext *pFVar1;
  IAudioPlatformDeviceInfoCache *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->_padding_ = (longlong)&___7FMixerPlatformXAudio2_Audio__6B_;
  FWindowsPlatformMisc::CoUninitialize();
  pFVar1 = (this->DeviceSwapContext).Ptr;
  if (pFVar1 != (FXAudio2DeviceSwapContext *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pIVar2 = (this->DeviceInfoCache).Ptr;
  if (pIVar2 != (IAudioPlatformDeviceInfoCache *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->OutputVoiceCallback = (FXAudio2VoiceCallback)&___7FXAudio2VoiceCallback_Audio__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c2f0

void * __thiscall
Audio::FXAudio2DeviceSwapContext::_scalar_deleting_destructor_
          (FXAudio2DeviceSwapContext *this,uint param_1)

{
  FDeviceSwapContext::~FDeviceSwapContext((FDeviceSwapContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d3c330

void * __thiscall
Audio::FXAudio2DeviceSwapResult::_scalar_deleting_destructor_
          (FXAudio2DeviceSwapResult *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// GetDllName @ 148d3d260

FString * __cdecl GetDllName(FName param_1)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pTVar1 = &FPaths::EngineDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&XAudio2_9Redist.Data,pTVar1,0x3f - (uint)(pTVar1->ArrayNum != 0));
      FString::PathAppend(&XAudio2_9Redist,
                          L"Binaries/ThirdParty/Windows/XAudio2_9/x64/xaudio2_9redist.dll",0x3d);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`GetDllName'::__l2::_dynamic_atexit_destructor_for__XAudio2_9Redist__);
      _Init_thread_footer(&_TSS0);
      return &XAudio2_9Redist;
    }
  }
  return &XAudio2_9Redist;
}

// GetMMDeviceInfo @ 148d3d330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::GetMMDeviceInfo(IMMDevice *param_1,FAudioPlatformDeviceInfo *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  short *psVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  uint uVar13;
  Type *pTVar14;
  bool bVar15;
  bool local_res8;
  uint local_res18;
  longlong *local_res20;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0 [2];
  FString local_e8;
  uint *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  short *local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  wchar_t *pwStack_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerPlatformXAudio2_GetMMDeviceInfo");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId604,"FMixerPlatformXAudio2_GetMMDeviceInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x25c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId604);
  }
  if ((param_1 == (IMMDevice *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MMDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x25e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FAudioPlatformDeviceInfo::Reset(param_2);
  local_res20 = (longlong *)0x0;
  if ((param_1 == (IMMDevice *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MMDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x269,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_a0 = 0;
  local_c0 = (short *)0x0;
  local_b0 = 0;
  pwStack_a8 = (wchar_t *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  iVar8 = (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_b8);
  if (iVar8 < 0) {
    if ((byte)LogAudioMixer._0_1_ < 2) goto LAB_148d3d520;
    if (iVar8 == -0x7769ffff) {
      pwVar12 = L"XAUDIO2_E_INVALID_CALL";
LAB_148d3d4bf:
      ::FString::FString(&local_e8,pwVar12);
    }
    else {
      if (iVar8 == -0x7769fffe) {
        pwVar12 = L"XAUDIO2_E_XMA_DECODER_ERROR";
        goto LAB_148d3d4bf;
      }
      if (iVar8 == -0x7769fffd) {
        pwVar12 = L"XAUDIO2_E_XAPO_CREATION_FAILED";
        goto LAB_148d3d4bf;
      }
      if (iVar8 == -0x7769fffc) {
        pwVar12 = L"XAUDIO2_E_DEVICE_INVALIDATED";
        goto LAB_148d3d4bf;
      }
      AudioClientErrorToFString(&local_e8,iVar8);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
LAB_148d3d516:
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar8 = (**(code **)((longlong)*param_1 + 0x20))(param_1,0,&local_res20);
    if (iVar8 < 0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        ToErrorFString(&local_98,iVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        local_e8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        goto LAB_148d3d516;
      }
    }
    else {
      iVar8 = (**(code **)(*local_res20 + 0x28))(local_res20,&PKEY_Device_FriendlyName,&local_b0);
      if (iVar8 < 0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          ToErrorFString(&local_88,iVar8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          local_e8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          goto LAB_148d3d516;
        }
      }
      else {
        pFVar11 = ::FString::FString(&local_78,pwStack_a8);
        ::FString::operator=(&param_2->Name,pFVar11);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        iVar8 = (**(code **)(*local_res20 + 0x28))(local_res20,&PKEY_AudioEngine_DeviceFormat);
        if (iVar8 < 0) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            ToErrorFString(&local_68,iVar8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            local_e8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            goto LAB_148d3d516;
          }
        }
        else {
          if (local_c0 != (short *)0x0) {
LAB_148d3d825:
            psVar5 = local_c0;
            local_res8 = true;
            pFVar11 = ::FString::FString(&local_48,local_b8);
            ::FString::operator=(&param_2->DeviceId,pFVar11);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            piVar1 = &(param_2->OutputChannelArray).ArrayMax;
            uVar13 = 8;
            if ((ushort)psVar5[1] < 8) {
              uVar13 = (uint)(ushort)psVar5[1];
            }
            uVar9 = 2;
            if (2 < uVar13) {
              uVar9 = uVar13;
            }
            param_2->NumChannels = uVar9;
            param_2->SampleRate = *(int *)(psVar5 + 2);
            param_2->Format = Float;
            (param_2->OutputChannelArray).ArrayNum = 0;
            if (*piVar1 < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&(param_2->OutputChannelArray).AllocatorInstance,0,piVar1);
            }
            if (*psVar5 == -2) {
              local_res18 = 0;
              uVar13 = 0;
              local_d8 = ChannelTypeMap;
              do {
                if ((uint)param_2->NumChannels <= local_res18) goto LAB_148d3d523;
                if ((*local_d8 & *(uint *)(psVar5 + 10)) != 0) {
                  pFVar3 = (param_2->OutputChannelArray).AllocatorInstance.Data;
                  local_f8 = uVar13;
                  if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
                      ((FScriptContainerElement *)&local_f8 < pFVar3 + (longlong)*piVar1 * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                  iVar8 = (param_2->OutputChannelArray).ArrayNum;
                  if (iVar8 == *piVar1) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&(param_2->OutputChannelArray).AllocatorInstance,piVar1
                                      );
                  }
                  (param_2->OutputChannelArray).ArrayNum = iVar8 + 1;
                  *(uint *)((param_2->OutputChannelArray).AllocatorInstance.Data +
                           (longlong)iVar8 * 4) = local_f8;
                  local_res18 = local_res18 + 1;
                }
                local_d8 = local_d8 + 1;
                uVar13 = uVar13 + 1;
              } while (uVar13 < 0x13);
              if (local_res18 < (uint)param_2->NumChannels) {
                if (2 < (byte)LogAudioMixer._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
                }
                (param_2->OutputChannelArray).ArrayNum = 0;
                if ((param_2->OutputChannelArray).ArrayMax < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,&(param_2->OutputChannelArray).AllocatorInstance,0,piVar1);
                }
                iVar8 = param_2->NumChannels;
                pTVar14 = (Type *)&DAT_154c76090;
                if (iVar8 == 4) {
                  pTVar14 = DefaultChannelOrderingQuad;
                }
                else if (iVar8 == 6) {
                  pTVar14 = DefaultChannelOrdering51;
                }
                else if ((8 < iVar8) &&
                        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                           ("OutInfo.NumChannels <= 8",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                                            ,0x2db,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                iVar8 = 0;
                if (0 < param_2->NumChannels) {
                  do {
                    pFVar3 = (param_2->OutputChannelArray).AllocatorInstance.Data;
                    if (((pFVar3 <= pTVar14) &&
                        (pTVar14 < pFVar3 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4))
                       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      uVar7 = (*pcVar4)();
                      return (bool)uVar7;
                    }
                    iVar10 = (param_2->OutputChannelArray).ArrayNum;
                    if (iVar10 == (param_2->OutputChannelArray).ArrayMax) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_2->OutputChannelArray).AllocatorInstance,
                                          piVar1);
                    }
                    (param_2->OutputChannelArray).ArrayNum = iVar10 + 1;
                    iVar8 = iVar8 + 1;
                    uVar2 = *pTVar14;
                    pTVar14 = (Type *)((longlong)pTVar14 + 4);
                    *(undefined4 *)
                     ((param_2->OutputChannelArray).AllocatorInstance.Data + (longlong)iVar10 * 4) =
                         uVar2;
                  } while (iVar8 < param_2->NumChannels);
                }
              }
            }
            else {
              pFVar3 = (param_2->OutputChannelArray).AllocatorInstance.Data;
              local_f4 = 0;
              if (((pFVar3 <= (FScriptContainerElement *)&local_f4) &&
                  ((FScriptContainerElement *)&local_f4 < pFVar3 + (longlong)*piVar1 * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar8 = (param_2->OutputChannelArray).ArrayNum;
              if (iVar8 == (param_2->OutputChannelArray).ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&(param_2->OutputChannelArray).AllocatorInstance,piVar1);
              }
              (param_2->OutputChannelArray).ArrayNum = iVar8 + 1;
              *(undefined4 *)
               ((param_2->OutputChannelArray).AllocatorInstance.Data + (longlong)iVar8 * 4) =
                   local_f4;
              local_res8 = true;
              if (param_2->NumChannels == 2) {
                pFVar3 = (param_2->OutputChannelArray).AllocatorInstance.Data;
                local_f0[0] = 1;
                if (((pFVar3 <= (FScriptContainerElement *)local_f0) &&
                    ((FScriptContainerElement *)local_f0 <
                     pFVar3 + (longlong)(param_2->OutputChannelArray).ArrayMax * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                iVar8 = (param_2->OutputChannelArray).ArrayNum;
                if (iVar8 == (param_2->OutputChannelArray).ArrayMax) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&(param_2->OutputChannelArray).AllocatorInstance,piVar1);
                }
                (param_2->OutputChannelArray).ArrayNum = iVar8 + 1;
                *(undefined4 *)
                 ((param_2->OutputChannelArray).AllocatorInstance.Data + (longlong)iVar8 * 4) =
                     local_f0[0];
              }
            }
            goto LAB_148d3d523;
          }
          iVar8 = (**(code **)(*local_res20 + 0x28))();
          if (iVar8 < 0) {
            if (1 < (byte)LogAudioMixer._0_1_) {
              ToErrorFString(&local_58,iVar8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
              local_e8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
              goto LAB_148d3d516;
            }
          }
          else {
            if (local_c0 != (short *)0x0) goto LAB_148d3d825;
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6538217543490863749>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               ,0x285,"DeviceFormat.blob.pBlobData");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
        }
      }
    }
  }
LAB_148d3d520:
  local_res8 = false;
LAB_148d3d523:
  PropVariantClear((PROPVARIANT *)&local_b0);
  PropVariantClear((PROPVARIANT *)&local_d0);
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return local_res8;
}

// RegisterForSessionEvents @ 148d40f90

void __cdecl Audio::RegisterForSessionEvents(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    return;
  }
  if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWindowsMMNotificationClient::RegisterForSessionNotifications
            (WindowsNotificationClient.Object,param_1);
  return;
}

// ToErrorFString @ 148d41b70

FString * __cdecl Audio::ToErrorFString(FString *__return_storage_ptr__,int param_1)

{
  if (param_1 == -0x7769ffff) {
    ::FString::FString(__return_storage_ptr__,L"XAUDIO2_E_INVALID_CALL");
    return __return_storage_ptr__;
  }
  if (param_1 == -0x7769fffe) {
    ::FString::FString(__return_storage_ptr__,L"XAUDIO2_E_XMA_DECODER_ERROR");
    return __return_storage_ptr__;
  }
  if (param_1 == -0x7769fffd) {
    ::FString::FString(__return_storage_ptr__,L"XAUDIO2_E_XAPO_CREATION_FAILED");
    return __return_storage_ptr__;
  }
  if (param_1 != -0x7769fffc) {
    AudioClientErrorToFString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"XAUDIO2_E_DEVICE_INVALIDATED");
  return __return_storage_ptr__;
}

// UnregisterForSessionEvents @ 148d41d00

void __cdecl Audio::UnregisterForSessionEvents(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    return;
  }
  if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWindowsMMNotificationClient::UnregisterForSessionNotifications(WindowsNotificationClient.Object);
  return;
}

// IMPLEMENT_MODULE_AudioMixerXAudio2 @ 148d41d60

void __cdecl IMPLEMENT_MODULE_AudioMixerXAudio2(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Cs'' @ 15040c4b0

void __cdecl
`Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce'::__l2::
_dynamic_atexit_destructor_for__Cs__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015040c4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GThreadedSwapDebugExtraTimeMsCVar'' @ 15040c4d0

void __cdecl Audio::_dynamic_atexit_destructor_for__GThreadedSwapDebugExtraTimeMsCVar__(void)

{
  GThreadedSwapDebugExtraTimeMsCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GThreadedSwapDebugExtraTimeMsCVar);
  return;
}

// `dynamic_atexit_destructor_for_'LogHistory'' @ 15040c4f0

void __cdecl
`Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce'::__l2::
_dynamic_atexit_destructor_for__LogHistory__(void)

{
  `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
  ::__l2::LogHistory.HashSize = 0;
  if (`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
      ::__l2::LogHistory.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                          ::__l2::LogHistory.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::LogHistory.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'WindowsNotificationClient'' @ 15040c530

void __cdecl Audio::_dynamic_atexit_destructor_for__WindowsNotificationClient__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (WindowsNotificationClient.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'XAudio2_9Redist'' @ 15040c550

void __cdecl `GetDllName'::__l2::_dynamic_atexit_destructor_for__XAudio2_9Redist__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = XAudio2_9Redist.Data.AllocatorInstance.Data;
  if (XAudio2_9Redist.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (XAudio2_9Redist.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}


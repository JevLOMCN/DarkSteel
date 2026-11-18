// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 40

// `dynamic_initializer_for_'LogAVIWriter'' @ 140f94a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAVIWriter__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAVIWriter,L"LogAVIWriter",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAVIWriter__);
  return;
}

// `dynamic_initializer_for_'LogMovieCapture'' @ 140f94a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieCapture__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieCapture,L"LogMovieCapture",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieCapture__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAVIWriter'' @ 140f94aa0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAVIWriter__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AVIWriter";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AVIWriter",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAVIWriterModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14464db50

void * __thiscall
FAVIWriterModule::_scalar_deleting_destructor_(FAVIWriterModule *this,uint param_1)

{
  *this = (FAVIWriterModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_> @ 14464db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FCapturedFrames::StartUnArchiving_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1d8 [32];
  TPromise<void> local_198;
  undefined4 local_180;
  TFutureState<void> *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FConstructor local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined ***local_d0;
  TFutureState<void> *local_c8;
  undefined **local_b8;
  FCapturedFrames *pFStack_b0;
  code *local_a8;
  undefined ***local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_180 = 0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>,1,0>::
              _vftable_;
  uStack_e0 = param_2->__this;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,void>::Call;
  local_d0 = (undefined ***)0x0;
  TPromise<void>::TPromise<void>(&local_198,param_3);
  if ((local_198.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_198.bFutureRetrieved = true;
  if ((local_198.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_198.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_198.State.Object;
  if (local_198.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_180 = 1;
    if (param_1 == TaskGraph) {
      local_180 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_130,(TUniqueFunction<void___cdecl(void)> *)&local_178,
               (TPromise<void> *)local_f8,(Type *)&local_198);
    if (local_178 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_178->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_178)(local_178,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (TFutureState<void> *)local_f8._0_8_;
    local_a0 = local_d0;
    local_98 = local_198.State.Object;
    local_90 = local_198.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8;
    pFStack_b0 = uStack_e0;
    local_a8 = local_d8;
    local_f8._0_8_ = (TFutureState<void> *)0x0;
    local_198.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_198.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_c8;
    local_50[7] = (code *)local_a0;
    local_a0 = (undefined ***)0x0;
    local_50[4] = (code *)local_b8;
    local_50[5] = (code *)pFStack_b0;
    local_50[6] = local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_c8 = (TFutureState<void> *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_c8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar17 = local_a0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FCapturedFrames **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FCapturedFrames **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar19.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
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
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_f8._0_8_;
        puVar14[7] = local_d0;
        *(undefined4 *)(puVar14 + 4) = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_e0._4_4_;
        puVar14[6] = local_d8;
        if (puVar14[2] != 0) {
          local_f8._0_8_ = pTVar20;
        }
        puVar14[8] = local_198.State.Object;
        puVar14[9] = local_198.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_198.bFutureRetrieved;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_198.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_f8._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar17 = local_d0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// DestructItems<FCapturedFrame,int> @ 14464e770

void __cdecl DestructItems<FCapturedFrame,int>(FCapturedFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FrameData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~<lambda_1> @ 14464eb40

void __thiscall
`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
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
                    /* WARNING: Could not recover jumptable at 0x00014464eba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0> @ 14464ebc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FCapturedFrames::StartUnArchiving_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 14464ebe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FCapturedFrames::StartUnArchiving_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// operator<< @ 14464ede0

FArchive * __cdecl operator<<(FArchive *param_1,FCapturedFrame *param_2)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  uint *puVar4;
  
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->StartTimeSeconds = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar2 = &param_2->EndTimeSeconds;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->FrameIndex;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FColor,TSizedDefaultAllocator<32>_>(param_1,&param_2->FrameData);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{120}' @ 14464f34c

/* [thunk]:public: virtual void * __ptr64 __cdecl FCapturePin::`vector deleting
   destructor'`adjustor{120}' (unsigned int) __ptr64 */

void * __thiscall
FCapturePin::_vector_deleting_destructor__adjustor_120__(FCapturePin *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FCapturePin *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14464f360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14464f3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14464f3f0

void * __thiscall FAVIWriter::_scalar_deleting_destructor_(FAVIWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAVIWriter__6B_;
  pFVar1 = (this->Options).CodecName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Options).OutputFilename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FCapturedFrames>::operator()
            ((TDefaultDelete<FCapturedFrames> *)&this->CapturedFrames,(this->CapturedFrames).Ptr);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14464f460

void * __thiscall FAVIWriterWin::_scalar_deleting_destructor_(FAVIWriterWin *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAVIWriter__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TDefaultDelete<FCapturedFrames>::operator()
            ((TDefaultDelete<FCapturedFrames> *)&this->_padding_,(FCapturedFrames *)this->_padding_)
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14464f4d0

void * __thiscall FCapturePin::_scalar_deleting_destructor_(FCapturePin *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCapturePin__6B_;
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IPin__;
  this->_padding_ = (longlong)&_vftable__for__IQualityControl__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SharedState);
  CSourceStream::~CSourceStream((CSourceStream *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14464f550

void * __thiscall FCaptureSource::_scalar_deleting_destructor_(FCaptureSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IBaseFilter__;
  this->_padding_ = (longlong)&_vftable__for__IAMovieSetup__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ShutdownEvent);
  CSource::~CSource((CSource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// AddRef @ 14464f7b0

ulong __thiscall CBaseFilter::AddRef(CBaseFilter *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464f7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this[-1].m_pSink + 8))();
  return uVar1;
}

// AddRef`adjustor{8}' @ 14464f7c4

/* [thunk]:public: virtual unsigned long __cdecl CBaseFilter::AddRef`adjustor{8}' (void) __ptr64 */

ulong __thiscall CBaseFilter::AddRef_adjustor_8__(CBaseFilter *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((CBaseFilter *)&this[-1].m_PinVersion);
  return uVar1;
}

// AddRef @ 14464f7e0

ulong __thiscall CBasePin::AddRef(CBasePin *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464f7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this[-1].m_tStop.m_time + 8))();
  return uVar1;
}

// AddRef`adjustor{8}' @ 14464f7f4

/* [thunk]:public: virtual unsigned long __cdecl CBasePin::AddRef`adjustor{8}' (void) __ptr64 */

ulong __thiscall CBasePin::AddRef_adjustor_8__(CBasePin *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((CBasePin *)&this[-1].m_dRate);
  return uVar1;
}

// FindEncodingFilter @ 144650260

IBaseFilter * __cdecl FindEncodingFilter(FString *param_1)

{
  HRESULT HVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong *local_res10;
  longlong *local_res18;
  IBaseFilter *local_res20;
  longlong *local_48;
  longlong *local_40;
  VARIANTARG local_38;
  
  local_40 = (longlong *)0x0;
  HVar1 = CoCreateInstance((IID *)&CLSID_SystemDeviceEnum,(LPUNKNOWN)0x0,3,
                           (IID *)&IID_ICreateDevEnum,&local_40);
  if (-1 < HVar1) {
    local_48 = (longlong *)0x0;
    iVar2 = (**(code **)(*local_40 + 0x18))(local_40,&CLSID_VideoCompressorCategory,&local_48,0);
    if (iVar2 == 0) {
      local_res10 = (longlong *)0x0;
      iVar2 = (**(code **)(*local_48 + 0x18))(local_48,1,&local_res10,0);
      while (iVar2 == 0) {
        local_res18 = (longlong *)0x0;
        iVar2 = (**(code **)(*local_res10 + 0x48))(local_res10,0,0,&IID_IPropertyBag,&local_res18);
        if (-1 < iVar2) {
          VariantInit(&local_38);
          iVar2 = (**(code **)(*local_res18 + 0x18))(local_res18,L"FriendlyName",&local_38,0);
          if (-1 < iVar2) {
            if ((param_1->Data).ArrayNum == 0) {
              pwVar3 = L"";
            }
            else {
              pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,(wchar_t *)local_38.n1.decVal.u2);
            if (iVar2 == 0) {
              VariantClear(&local_38);
              (**(code **)(*local_res18 + 0x10))();
              local_res20 = (IBaseFilter *)0x0;
              iVar2 = (**(code **)(*local_res10 + 0x40))
                                (local_res10,0,0,&IID_IBaseFilter,&local_res20);
              if (iVar2 == 0) {
                (**(code **)((longlong)*local_res20 + 8))();
                (**(code **)(*local_res10 + 0x10))();
                return local_res20;
              }
              goto LAB_1446503d2;
            }
          }
          VariantClear(&local_38);
          (**(code **)(*local_res18 + 0x10))();
          local_res20 = (IBaseFilter *)0x0;
        }
LAB_1446503d2:
        (**(code **)(*local_res10 + 0x10))();
        iVar2 = (**(code **)(*local_48 + 0x18))(local_48,1,&local_res10,0);
      }
    }
  }
  return (IBaseFilter *)0x0;
}

// GetMediaType @ 144650610

undefined4 __thiscall CSourceStream::GetMediaType(CSourceStream *this,CMediaType *param_1)

{
  return 0x8000ffff;
}

// GetPin @ 144650800

IPin * __cdecl GetPin(IBaseFilter *param_1,_PinDirection param_2)

{
  int iVar1;
  _PinDirection local_res8 [4];
  IPin *local_res18;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  local_res18 = (IPin *)0x0;
  iVar1 = (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_res20);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
    while (iVar1 == 0) {
      iVar1 = (**(code **)((longlong)*local_res18 + 0x48))(local_res18,local_res8);
      if ((-1 < iVar1) && (param_2 == local_res8[0])) {
        (**(code **)(*local_res20 + 0x10))();
        return local_res18;
      }
      (**(code **)((longlong)*local_res18 + 0x10))();
      iVar1 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
    }
    (**(code **)(*local_res20 + 0x10))();
  }
  return (IPin *)0x0;
}

// GetSetupData @ 1446508b0

_AMOVIESETUP_FILTER * __thiscall CBaseFilter::GetSetupData(CBaseFilter *this)

{
  return (_AMOVIESETUP_FILTER *)0x0;
}

// OnThreadCreate @ 144651280

undefined4 __thiscall CSourceStream::OnThreadCreate(CSourceStream *this)

{
  return 0;
}

// OnThreadDestroy @ 144651290

undefined4 __thiscall CSourceStream::OnThreadDestroy(CSourceStream *this)

{
  return 0;
}

// OnThreadStartPlay @ 1446512a0

undefined4 __thiscall CSourceStream::OnThreadStartPlay(CSourceStream *this)

{
  return 0;
}

// QueryInterface @ 144651490

undefined4 __thiscall CBaseFilter::QueryInterface(CBaseFilter *this,_GUID *param_1,void **param_2)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144651497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)*this[-1].m_pSink)();
  return uVar1;
}

// QueryInterface`adjustor{8}' @ 1446514a0

/* [thunk]:public: virtual long __cdecl CBaseFilter::QueryInterface`adjustor{8}' (struct _GUID const
   & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
CBaseFilter::QueryInterface_adjustor_8__(CBaseFilter *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((CBaseFilter *)&this[-1].m_PinVersion,(_GUID *)param_1,param_2);
  return lVar1;
}

// QueryInterface @ 1446514b0

undefined4 __thiscall CBasePin::QueryInterface(CBasePin *this,_GUID *param_1,void **param_2)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001446514b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)this[-1].m_tStop.m_time)();
  return uVar1;
}

// QueryInterface`adjustor{8}' @ 1446514c0

/* [thunk]:public: virtual long __cdecl CBasePin::QueryInterface`adjustor{8}' (struct _GUID const &
   __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall CBasePin::QueryInterface_adjustor_8__(CBasePin *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((CBasePin *)&this[-1].m_dRate,(_GUID *)param_1,param_2);
  return lVar1;
}

// QueryInternalConnections @ 1446514d0

undefined4 __thiscall
CBasePin::QueryInternalConnections(CBasePin *this,IPin **param_1,ulong *param_2)

{
  return 0x80004001;
}

// Release @ 144651640

ulong __thiscall CBaseFilter::Release(CBaseFilter *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144651647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this[-1].m_pSink + 0x10))();
  return uVar1;
}

// Release`adjustor{8}' @ 144651654

/* [thunk]:public: virtual unsigned long __cdecl CBaseFilter::Release`adjustor{8}' (void) __ptr64 */

ulong __thiscall CBaseFilter::Release_adjustor_8__(CBaseFilter *this)

{
  ulong uVar1;
  
  uVar1 = Release((CBaseFilter *)&this[-1].m_PinVersion);
  return uVar1;
}

// Release @ 144651670

ulong __thiscall CBasePin::Release(CBasePin *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144651677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this[-1].m_tStop.m_time + 0x10))();
  return uVar1;
}

// Release`adjustor{8}' @ 144651684

/* [thunk]:public: virtual unsigned long __cdecl CBasePin::Release`adjustor{8}' (void) __ptr64 */

ulong __thiscall CBasePin::Release_adjustor_8__(CBasePin *this)

{
  ulong uVar1;
  
  uVar1 = Release((CBasePin *)&this[-1].m_dRate);
  return uVar1;
}

// IMPLEMENT_MODULE_AVIWriter @ 144651bb0

void __cdecl IMPLEMENT_MODULE_AVIWriter(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAVIWriter'' @ 15036e970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAVIWriter__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAVIWriter);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieCapture'' @ 15036e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieCapture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieCapture);
  return;
}


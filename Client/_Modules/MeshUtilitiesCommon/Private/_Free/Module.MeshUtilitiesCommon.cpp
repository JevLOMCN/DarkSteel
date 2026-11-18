// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 35

// `dynamic_initializer_for_'LogLayoutUV'' @ 140f87170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLayoutUV__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLayoutUV,L"LogLayoutUV",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLayoutUV__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMeshUtilitiesCommon'' @ 140f871b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMeshUtilitiesCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MeshUtilitiesCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MeshUtilitiesCommon",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_> @ 14434d7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_FLayoutUV::FChartPacker::FindBestPacking_::__l24::<lambda_1>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TArray<_public:_bool___cdecl_FLayoutUV::FChartPacker::FindBestPacking(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshChart,TSizedDefaultAllocator<32>_>_&)_::_2_::FThreadContext,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  atomic<unsigned___int64> aVar8;
  TFutureState<FRunnableThread_*> *pTVar9;
  bool bVar10;
  atomic<unsigned_char> aVar11;
  int iVar12;
  FTaskBase *pFVar13;
  TFuture<bool> *pTVar14;
  FTaskBase *pFVar15;
  FTSTicker *this;
  undefined8 uVar16;
  FTaskBase *pFVar17;
  FRunnableThread *pFVar18;
  undefined8 *puVar19;
  code **ppcVar20;
  FPipe *pFVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  FTaskBase *pFVar25;
  FTaskBase *pFVar26;
  Type TVar27;
  FTaskBase *pFVar28;
  FTaskBase *this_00;
  undefined1 auStackY_1e8 [32];
  EExtendedTaskPriority local_1a8;
  ETaskPriority local_1a7 [7];
  FTaskBase *local_1a0;
  EAsyncExecution local_198;
  TFuture<bool> *local_190;
  FTaskBase *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar26 = (FTaskBase *)0x0;
  local_1a0 = (FTaskBase *)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_198 = param_1;
  local_190 = __return_storage_ptr__;
  local_188 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x38,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>::
        _vftable_;
  pTVar6 = param_2->ThreadContexts;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pTVar6;
  pTVar7 = param_2->TexCoords;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2->SortedTris;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName =
       (wchar_t *)pTVar7;
  aVar8 = *(atomic<unsigned___int64> *)&param_2->ThreadUVScale;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)param_2->bAbort;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  TaskCount = aVar8;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,bool>
               ::Call;
  }
  pFVar13 = operator_new(0x90);
  if (pFVar13 == (FTaskBase *)0x0) {
    local_1a0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar13 = pFVar26;
  }
  else {
    *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar13->_padding_)[1] = (atomic<int>)0x1;
    pFVar13->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
    FFutureState::FFutureState((FFutureState *)&pFVar13->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar13->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    LOCK();
    *(atomic<int> *)&pFVar13->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
    UNLOCK();
    local_1a0 = pFVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    LOCK();
    *(atomic<int> *)&pFVar13->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
    UNLOCK();
  }
  pFVar25 = this_00;
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar27 = GameThread;
    if (local_198 == TaskGraph) {
      TVar27 = AnyNormalThreadNormalTask;
    }
    pFVar15 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar25 = pFVar26;
    if (pFVar15 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar15,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar15->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar25 = pFVar15;
    }
    pFVar25[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar25[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar25[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar25[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_1a0 = (FTaskBase *)0x0;
    pFVar25[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar25[1]._padding_ != 0) {
      local_f8 = pFVar26;
    }
    pFVar25[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar25[1].StateChangeEvent = pFVar13;
    *(undefined1 *)&pFVar25[1].ExecutingThreadId = 1;
    *(Type *)&pFVar25[1].TraceId = TVar27;
    UE::Tasks::Private::TranslatePriority(TVar27,local_1a7,&local_1a8);
    UE::Tasks::Private::FTaskBase::Init(pFVar25,L"GraphTask",local_1a7[0],local_1a8,None);
    if (pFVar25 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar25->RefCount = (atomic<unsigned_int>)((int)pFVar25->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar25,0x130);
      LOCK();
      paVar1 = &pFVar25->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar25->_padding_)(pFVar25,1);
      }
    }
    goto LAB_14434da52;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1a0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar13;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar20 = local_50 + 2;
    *ppcVar20 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar20 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar20 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
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
      ppcVar20 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar20 = local_50;
      }
      (**(code **)(*ppcVar20 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State->IsComplete()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x242,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar21 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar21 = local_a0;
      }
      (**(code **)(*(code **)pFVar21 + 0x10))();
    }
LAB_14434da52:
    pTVar14 = local_190;
    *(FTaskBase **)local_190 = this_00;
    *(FTaskBase **)&local_190->field_0x8 = pFVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_14434e278;
  case Thread:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar10) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pFVar17 = operator_new(0x70);
      pFVar15 = local_188;
      pFVar28 = pFVar26;
      if (pFVar17 != (FTaskBase *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("!bFutureRetrieved",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x24d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TFuture<bool> *)(*pcVar5)();
          return pTVar14;
        }
        pTVar9 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TFuture<bool> *)(*pcVar5)();
          return pTVar14;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a0 = (FTaskBase *)0x0;
        pFVar17->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar17->_padding_ = (longlong)local_f8;
        pFVar17->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar17->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar17->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar17->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar17->_padding_ != 0) {
          local_f8 = pFVar26;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar17->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_170.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar17->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar17->ExecutingThreadId = pFVar13;
        (pFVar17->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar17->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
        pFVar15 = pFVar26;
        pFVar25 = pFVar26;
        pFVar26 = (FTaskBase *)&DAT_00000001;
        pFVar28 = pFVar17;
      }
      if (pFVar26 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar24.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar18 = FRunnableThread::Create
                          ((FRunnable *)pFVar28,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar18;
      if ((pFVar18 == (FRunnableThread *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      iVar12 = (**(code **)(pFVar18->_padding_ + 0x28))(pFVar18);
      if ((iVar12 != 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14e,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
LAB_14434de36:
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar26 = local_f8;
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 8))();
      aVar11 = (atomic<unsigned_char>)(*(code *)pFVar26)(uVar16);
      if (this_00 == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TFuture<bool> *)(*pcVar5)();
          return pTVar14;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TFuture<bool> *)(*pcVar5)();
          return pTVar14;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      (this_00->Prerequisites).Mutex.State = aVar11;
      FFutureState::MarkComplete((FFutureState *)this_00);
    }
    break;
  case ThreadIfForkSafe:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if ((!bVar10) && (bVar10 = FForkProcessHelper::IsForkedMultithreadInstance(), !bVar10))
    goto LAB_14434de36;
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
    pFVar17 = operator_new(0x70);
    pFVar15 = local_188;
    pFVar28 = pFVar26;
    if (pFVar17 != (FTaskBase *)0x0) {
      if ((local_158.bFutureRetrieved != false) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!bFutureRetrieved",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x24d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      pTVar9 = local_158.State.Object;
      local_158.bFutureRetrieved = true;
      if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x283,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TFuture<bool> *)(*pcVar5)();
        return pTVar14;
      }
      if (local_158.State.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_1a0 = (FTaskBase *)0x0;
      pFVar17->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
      pFVar17->_padding_ = (longlong)local_f8;
      pFVar17->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar17->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
      pFVar17->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
      *(TEventCount<unsigned_int> **)&(pFVar17->RefCount).field_0x0 = local_e8.EmptyEventRef.Object;
      if (pFVar17->_padding_ != 0) {
        local_f8 = pFVar26;
      }
      *(TReferenceControllerBase<1> **)
       &(pFVar17->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
           local_158.State.SharedReferenceCount.ReferenceController;
      *(FTaskBase **)&(pFVar17->StateChangeEvent).Count = this_00;
      *(FTaskBase **)&pFVar17->ExecutingThreadId = pFVar13;
      (pFVar17->TraceId).field_0x0 = 1;
      *(TFutureState<FRunnableThread_*> **)
       (pFVar17->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
      pFVar15 = pFVar26;
      pFVar25 = pFVar26;
      pFVar26 = (FTaskBase *)&DAT_00000002;
      pFVar28 = pFVar17;
    }
    if (pFVar26 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_120,L"TAsync %d");
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar24.Data = local_120.Data.AllocatorInstance.Data;
    }
    pFVar18 = FForkProcessHelper::CreateForkableThread
                        ((FRunnable *)pFVar28,(wchar_t *)FVar24.Data,0,TPri_Normal,
                         0xffffffffffffffff,None,false);
    local_178 = pFVar18;
    if ((pFVar18 == (FRunnableThread *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("RunnableThread != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                            ,0x161,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    iVar12 = (**(code **)(pFVar18->_padding_ + 0x28))(pFVar18);
    if ((iVar12 != 0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                            ,0x162,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
        ((local_158.State.Object)->field_0x68 == '\0')) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State->IsComplete()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x242,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.State.SharedReferenceCount.ReferenceController);
    break;
  case ThreadPool:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar10) goto LAB_14434de36;
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("GThreadPool != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                            ,0x16f,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar19 = operator_new(0x60);
    if (puVar19 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
    }
    else {
      puVar19[1] = 0;
      local_1a0 = (FTaskBase *)0x0;
      *puVar19 = &___7__TAsyncQueuedWork__N__6B_;
      puVar19[2] = local_f8;
      puVar19[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)(puVar19 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar19 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar19 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar19[6] = local_e8.EmptyEventRef.Object;
      if (puVar19[2] != 0) {
        local_f8 = pFVar26;
      }
      puVar19[8] = this_00;
      puVar19[9] = pFVar13;
      *(undefined1 *)(puVar19 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar19,3);
      pFVar25 = pFVar26;
    }
    break;
  default:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                        ,0x187,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFuture<bool> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pTVar14 = local_190;
  *(FTaskBase **)local_190 = this_00;
  *(FTaskBase **)&local_190->field_0x8 = pFVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar25 != (FTaskBase *)0x0) &&
      ((char)(pFVar25->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("State->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x242,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TFuture<bool> *)(*pcVar5)();
    return pTVar14;
  }
LAB_14434e278:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (local_188->_padding_ != 0) {
    plVar23 = &local_188->_padding_;
    if ((longlong *)local_188->_padding_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_188->_padding_;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return pTVar14;
}

// DefaultConstructItems<FAllocator2D::FRun,int> @ 14434e330

void __cdecl DefaultConstructItems<FAllocator2D::FRun,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`FLayoutUV::FChartPacker::FindBestPacking'::__l2::FThreadContext,int> @ 14434e360

void __cdecl
DefaultConstructItems<_FLayoutUV::FChartPacker::FindBestPacking_::__l2::FThreadContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAllocator2D::FRun,int> @ 14434e3a0

void __cdecl DestructItems<FAllocator2D::FRun,int>(FRun *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAllocator2D::FSegment,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Segments;
    pFVar1 = (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
             AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FRun *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<`FLayoutUV::FChartPacker::FindBestPacking'::__l2::FThreadContext,int> @ 14434e3f0

void __cdecl
DestructItems<_FLayoutUV::FChartPacker::FindBestPacking_::__l2::FThreadContext,int>
          (FThreadContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(param_1->Result).field_0x8);
    pFVar1 = (param_1->Charts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>_>_> @ 14434e5e0

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l2::<lambda_1>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_FAllocator2D::CreateUsedSegments(void)_::_2_::<lambda_1>_>
          param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14434e704:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            uVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,(uint)param_1[(longlong)iVar7 + 2],
                                     (uint)param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,(uint)param_1[iVar9],(uint)param_1[iVar4]);
                if (!bVar3) break;
                uVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,(uint)param_1[(longlong)iVar5 + 2],(uint)param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(uint)param_1[iVar4],(uint)param_1[iVar6]);
    if (!bVar3) goto LAB_14434e704;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>_>_> @ 14434e800

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l49::<lambda_2>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_FAllocator2D::CreateUsedSegments(void)_::_49_::<lambda_2>_>
          param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14434e924:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            uVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                                    (param_4.Predicate,(uint)param_1[(longlong)iVar7 + 2],
                                     (uint)param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                                  (param_4.Predicate,(uint)param_1[iVar9],(uint)param_1[iVar4]);
                if (!bVar3) break;
                uVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                        (param_4.Predicate,(uint)param_1[(longlong)iVar5 + 2],(uint)param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                      (param_4.Predicate,(uint)param_1[iVar4],(uint)param_1[iVar6]);
    if (!bVar3) goto LAB_14434e924;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,`FLayoutUV::FChartFinder::FindCharts'::__l2::FCompareTris> @ 14434ea20

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,_FLayoutUV::FChartFinder::FindCharts_::__l2::FCompareTris>
          (uint *param_1,int param_2,FIdentityFunctor param_3,FCompareTris param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int local_res10;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar8 = iVar4 * 2 + 1;
  iVar2 = iVar8;
  iVar5 = iVar4;
  do {
    while (param_2 <= iVar8) {
LAB_14434eb62:
      if (iVar5 == 0) {
        iVar8 = param_2 + -1;
        lVar9 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            uVar7 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar7;
            local_res10 = 0;
            if (1 < iVar8) {
              do {
                iVar2 = local_res10 * 2;
                iVar4 = iVar2 + 1;
                if (iVar2 + 2 < iVar8) {
                  uVar7 = param_1[iVar4];
                  uVar6 = FDisjointSet::operator[](param_4.DisjointSet,param_1[(longlong)iVar2 + 2])
                  ;
                  uVar7 = FDisjointSet::operator[](param_4.DisjointSet,uVar7);
                  if (uVar6 < uVar7) {
                    iVar4 = iVar2;
                  }
                  iVar4 = iVar4 + 1;
                }
                uVar7 = param_1[iVar4];
                uVar6 = FDisjointSet::operator[](param_4.DisjointSet,param_1[local_res10]);
                uVar7 = FDisjointSet::operator[](param_4.DisjointSet,uVar7);
                if (uVar7 <= uVar6) break;
                uVar7 = param_1[local_res10];
                param_1[local_res10] = param_1[iVar4];
                param_1[iVar4] = uVar7;
                local_res10 = iVar4;
              } while (iVar4 * 2 + 1 < iVar8);
            }
            lVar9 = lVar9 + -1;
            iVar8 = iVar8 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar5 + -1;
      iVar8 = iVar2 + -2;
      iVar2 = iVar8;
      iVar5 = iVar4;
    }
    iVar8 = iVar4 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      uVar7 = param_1[iVar10];
      uVar6 = FDisjointSet::operator[](param_4.DisjointSet,param_1[(longlong)iVar8 + 2]);
      uVar7 = FDisjointSet::operator[](param_4.DisjointSet,uVar7);
      if (uVar6 < uVar7) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    uVar7 = param_1[iVar10];
    uVar6 = FDisjointSet::operator[](param_4.DisjointSet,param_1[iVar4]);
    uVar7 = FDisjointSet::operator[](param_4.DisjointSet,uVar7);
    if (uVar7 <= uVar6) goto LAB_14434eb62;
    uVar7 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar10];
    iVar8 = iVar10 * 2 + 1;
    param_1[iVar10] = uVar7;
    iVar4 = iVar10;
  } while( true );
}

// HeapSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_> @ 14434ec90

void __cdecl
AlgoImpl::
HeapSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ> param_4)

{
  FIndexAndZ FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14434ed76:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].Z <= param_1[iVar4].Z &&
                      param_1[iVar4].Z != param_1[(longlong)iVar8 + 2].Z) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].Z < param_1[iVar7].Z || param_1[iVar4].Z == param_1[iVar7].Z)
                break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].Z <= param_1[iVar6].Z &&
          param_1[iVar6].Z != param_1[(longlong)iVar5 + 2].Z) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].Z < param_1[iVar4].Z || param_1[iVar6].Z == param_1[iVar4].Z)
    goto LAB_14434ed76;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FMeshChart,int,FIdentityFunctor,`FLayoutUV::FChartPacker::ScaleCharts'::__l2::FCompareCharts> @ 14434ee40

void __cdecl
AlgoImpl::
HeapSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l2::FCompareCharts>
          (FMeshChart *param_1,int param_2,FIdentityFunctor param_3,FCompareCharts param_4)

{
  FMeshChart *pFVar1;
  FMeshChart *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  TVector2<float>_u_0 TVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  FMeshChart *pFVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  
  if (param_2 < 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar22) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar22) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar23 = (param_2 + -2) / 2;
  iVar24 = iVar23 * 2 + 1;
  iVar30 = iVar24;
  iVar29 = iVar23;
  do {
    while (param_2 <= iVar24) {
LAB_14434f05a:
      if (iVar29 == 0) {
        iVar24 = param_2 + -1;
        lVar25 = (longlong)iVar24;
        if (0 < iVar24) {
          pFVar27 = param_1 + lVar25;
          do {
            uVar19 = pFVar27->LastTri;
            TVar6 = (pFVar27->MinUV).field0_0x0;
            uVar20 = param_1->FirstTri;
            uVar21 = param_1->LastTri;
            TVar7 = (param_1->MinUV).field0_0x0;
            TVar8 = (param_1->MaxUV).field0_0x0;
            uVar9 = *(undefined8 *)&param_1->UVArea;
            uVar10 = *(undefined8 *)((longlong)&(param_1->UVScale).field0_0x0 + 4);
            uVar11 = *(undefined8 *)((longlong)&(param_1->WorldScale).field0_0x0 + 4);
            uVar12 = *(undefined8 *)&param_1->WorldLengthSum;
            uVar13 = *(undefined8 *)((longlong)&(param_1->PackingScaleU).field0_0x0 + 4);
            uVar14 = *(undefined8 *)((longlong)&(param_1->PackingScaleV).field0_0x0 + 4);
            uVar15 = *(undefined8 *)((longlong)&(param_1->PackingBias).field0_0x0 + 4);
            uVar16 = *(undefined8 *)(param_1->Join + 1);
            uVar17 = *(undefined8 *)(param_1->Join + 3);
            param_1->FirstTri = pFVar27->FirstTri;
            param_1->LastTri = uVar19;
            (param_1->MinUV).field0_0x0 = TVar6;
            uVar18 = *(undefined8 *)&pFVar27->UVArea;
            (param_1->MaxUV).field0_0x0 = (pFVar27->MaxUV).field0_0x0;
            *(undefined8 *)&param_1->UVArea = uVar18;
            uVar18 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->UVScale).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->WorldScale).field0_0x0 + 4) = uVar18;
            uVar18 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
            *(undefined8 *)&param_1->WorldLengthSum = *(undefined8 *)&pFVar27->WorldLengthSum;
            *(undefined8 *)((longlong)&(param_1->PackingScaleU).field0_0x0 + 4) = uVar18;
            uVar18 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->PackingScaleV).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->PackingBias).field0_0x0 + 4) = uVar18;
            uVar18 = *(undefined8 *)(pFVar27->Join + 3);
            *(undefined8 *)(param_1->Join + 1) = *(undefined8 *)(pFVar27->Join + 1);
            *(undefined8 *)(param_1->Join + 3) = uVar18;
            pFVar27->FirstTri = uVar20;
            pFVar27->LastTri = uVar21;
            (pFVar27->MinUV).field0_0x0 = TVar7;
            (pFVar27->MaxUV).field0_0x0 = TVar8;
            *(undefined8 *)&pFVar27->UVArea = uVar9;
            *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) = uVar10;
            *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar11;
            *(undefined8 *)&pFVar27->WorldLengthSum = uVar12;
            *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar13;
            *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) = uVar14;
            *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar15;
            *(undefined8 *)(pFVar27->Join + 1) = uVar16;
            *(undefined8 *)(pFVar27->Join + 3) = uVar17;
            iVar30 = 0;
            if (1 < iVar24) {
              do {
                iVar23 = iVar30 * 2;
                iVar29 = iVar23 + 1;
                if (iVar23 + 2 < iVar24) {
                  lVar26 = (longlong)iVar23 + 2;
                  if ((param_1[iVar29].MaxUV.field0_0x0._s_0.Y -
                      param_1[iVar29].MinUV.field0_0x0._s_0.Y) *
                      param_1[iVar29].UVScale.field0_0x0._s_0.Y *
                      (param_1[iVar29].MaxUV.field0_0x0._s_0.X -
                      param_1[iVar29].MinUV.field0_0x0._s_0.X) *
                      param_1[iVar29].UVScale.field0_0x0._s_0.X <
                      (param_1[lVar26].MaxUV.field0_0x0._s_0.Y -
                      param_1[lVar26].MinUV.field0_0x0._s_0.Y) *
                      param_1[lVar26].UVScale.field0_0x0._s_0.Y *
                      (param_1[lVar26].MaxUV.field0_0x0._s_0.X -
                      param_1[lVar26].MinUV.field0_0x0._s_0.X) *
                      param_1[lVar26].UVScale.field0_0x0._s_0.X) {
                    iVar29 = iVar23;
                  }
                  iVar29 = iVar29 + 1;
                }
                if ((param_1[iVar30].MaxUV.field0_0x0._s_0.Y -
                    param_1[iVar30].MinUV.field0_0x0._s_0.Y) *
                    param_1[iVar30].UVScale.field0_0x0._s_0.Y *
                    (param_1[iVar30].MaxUV.field0_0x0._s_0.X -
                    param_1[iVar30].MinUV.field0_0x0._s_0.X) *
                    param_1[iVar30].UVScale.field0_0x0._s_0.X <=
                    (param_1[iVar29].MaxUV.field0_0x0._s_0.Y -
                    param_1[iVar29].MinUV.field0_0x0._s_0.Y) *
                    param_1[iVar29].UVScale.field0_0x0._s_0.Y *
                    (param_1[iVar29].MaxUV.field0_0x0._s_0.X -
                    param_1[iVar29].MinUV.field0_0x0._s_0.X) *
                    param_1[iVar29].UVScale.field0_0x0._s_0.X) break;
                pFVar1 = param_1 + iVar29;
                uVar19 = pFVar1->LastTri;
                TVar6 = (pFVar1->MinUV).field0_0x0;
                pFVar2 = param_1 + iVar30;
                uVar20 = pFVar2->FirstTri;
                uVar21 = pFVar2->LastTri;
                TVar7 = (pFVar2->MinUV).field0_0x0;
                TVar8 = param_1[iVar30].MaxUV.field0_0x0;
                uVar9 = (&param_1[iVar30].MaxUV)[1];
                puVar3 = (undefined8 *)((longlong)&param_1[iVar30].UVScale.field0_0x0 + 4);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = *(undefined8 *)&param_1[iVar30].WorldLengthSum;
                uVar13 = *(undefined8 *)(&param_1[iVar30].WorldLengthSum + 2);
                puVar3 = (undefined8 *)((longlong)&param_1[iVar30].PackingScaleV.field0_0x0 + 4);
                uVar14 = *puVar3;
                uVar15 = puVar3[1];
                uVar16 = *(undefined8 *)(param_1[iVar30].Join + 1);
                uVar17 = *(undefined8 *)(param_1[iVar30].Join + 3);
                pFVar2 = param_1 + iVar30;
                pFVar2->FirstTri = pFVar1->FirstTri;
                pFVar2->LastTri = uVar19;
                (pFVar2->MinUV).field0_0x0 = TVar6;
                uVar18 = (&param_1[iVar29].MaxUV)[1];
                param_1[iVar30].MaxUV.field0_0x0 = param_1[iVar29].MaxUV.field0_0x0;
                (&param_1[iVar30].MaxUV)[1] = (TVector2<float>)uVar18;
                puVar3 = (undefined8 *)((longlong)&param_1[iVar29].UVScale.field0_0x0 + 4);
                uVar18 = puVar3[1];
                puVar4 = (undefined8 *)((longlong)&param_1[iVar30].UVScale.field0_0x0 + 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar18;
                uVar18 = *(undefined8 *)(&param_1[iVar29].WorldLengthSum + 2);
                *(undefined8 *)&param_1[iVar30].WorldLengthSum =
                     *(undefined8 *)&param_1[iVar29].WorldLengthSum;
                *(undefined8 *)(&param_1[iVar30].WorldLengthSum + 2) = uVar18;
                puVar3 = (undefined8 *)((longlong)&param_1[iVar29].PackingScaleV.field0_0x0 + 4);
                uVar18 = puVar3[1];
                puVar4 = (undefined8 *)((longlong)&param_1[iVar30].PackingScaleV.field0_0x0 + 4);
                *puVar4 = *puVar3;
                puVar4[1] = uVar18;
                uVar18 = *(undefined8 *)(param_1[iVar29].Join + 3);
                *(undefined8 *)(param_1[iVar30].Join + 1) =
                     *(undefined8 *)(param_1[iVar29].Join + 1);
                *(undefined8 *)(param_1[iVar30].Join + 3) = uVar18;
                pFVar1 = param_1 + iVar29;
                pFVar1->FirstTri = uVar20;
                pFVar1->LastTri = uVar21;
                (pFVar1->MinUV).field0_0x0 = TVar7;
                param_1[iVar29].MaxUV.field0_0x0 = TVar8;
                (&param_1[iVar29].MaxUV)[1] = (TVector2<float>)uVar9;
                puVar3 = (undefined8 *)((longlong)&param_1[iVar29].UVScale.field0_0x0 + 4);
                *puVar3 = uVar10;
                puVar3[1] = uVar11;
                *(undefined8 *)&param_1[iVar29].WorldLengthSum = uVar12;
                *(undefined8 *)(&param_1[iVar29].WorldLengthSum + 2) = uVar13;
                puVar3 = (undefined8 *)((longlong)&param_1[iVar29].PackingScaleV.field0_0x0 + 4);
                *puVar3 = uVar14;
                puVar3[1] = uVar15;
                *(undefined8 *)(param_1[iVar29].Join + 1) = uVar16;
                *(undefined8 *)(param_1[iVar29].Join + 3) = uVar17;
                iVar30 = iVar29;
              } while (iVar29 * 2 + 1 < iVar24);
            }
            iVar24 = iVar24 + -1;
            lVar25 = lVar25 + -1;
            pFVar27 = pFVar27 + -1;
          } while (0 < lVar25);
        }
        return;
      }
      iVar23 = iVar29 + -1;
      iVar24 = iVar30 + -2;
      iVar30 = iVar24;
      iVar29 = iVar23;
    }
    iVar24 = iVar23 * 2;
    iVar28 = iVar24 + 1;
    if (iVar24 + 2 < param_2) {
      lVar25 = (longlong)iVar24 + 2;
      if ((param_1[iVar28].MaxUV.field0_0x0._s_0.Y - param_1[iVar28].MinUV.field0_0x0._s_0.Y) *
          param_1[iVar28].UVScale.field0_0x0._s_0.Y *
          (param_1[iVar28].MaxUV.field0_0x0._s_0.X - param_1[iVar28].MinUV.field0_0x0._s_0.X) *
          param_1[iVar28].UVScale.field0_0x0._s_0.X <
          (param_1[lVar25].MaxUV.field0_0x0._s_0.Y - param_1[lVar25].MinUV.field0_0x0._s_0.Y) *
          param_1[lVar25].UVScale.field0_0x0._s_0.Y *
          (param_1[lVar25].MaxUV.field0_0x0._s_0.X - param_1[lVar25].MinUV.field0_0x0._s_0.X) *
          param_1[lVar25].UVScale.field0_0x0._s_0.X) {
        iVar28 = iVar24;
      }
      iVar28 = iVar28 + 1;
    }
    if ((param_1[iVar23].MaxUV.field0_0x0._s_0.Y - param_1[iVar23].MinUV.field0_0x0._s_0.Y) *
        param_1[iVar23].UVScale.field0_0x0._s_0.Y *
        (param_1[iVar23].MaxUV.field0_0x0._s_0.X - param_1[iVar23].MinUV.field0_0x0._s_0.X) *
        param_1[iVar23].UVScale.field0_0x0._s_0.X <=
        (param_1[iVar28].MaxUV.field0_0x0._s_0.Y - param_1[iVar28].MinUV.field0_0x0._s_0.Y) *
        param_1[iVar28].UVScale.field0_0x0._s_0.Y *
        (param_1[iVar28].MaxUV.field0_0x0._s_0.X - param_1[iVar28].MinUV.field0_0x0._s_0.X) *
        param_1[iVar28].UVScale.field0_0x0._s_0.X) goto LAB_14434f05a;
    pFVar27 = param_1 + iVar28;
    uVar19 = pFVar27->LastTri;
    TVar6 = (pFVar27->MinUV).field0_0x0;
    iVar24 = iVar28 * 2 + 1;
    pFVar1 = param_1 + iVar23;
    uVar20 = pFVar1->FirstTri;
    uVar21 = pFVar1->LastTri;
    TVar7 = (pFVar1->MinUV).field0_0x0;
    TVar8 = param_1[iVar23].MaxUV.field0_0x0;
    uVar9 = (&param_1[iVar23].MaxUV)[1];
    puVar3 = (undefined8 *)((longlong)&param_1[iVar23].UVScale.field0_0x0 + 4);
    uVar10 = *puVar3;
    uVar11 = puVar3[1];
    uVar12 = *(undefined8 *)&param_1[iVar23].WorldLengthSum;
    uVar13 = *(undefined8 *)(&param_1[iVar23].WorldLengthSum + 2);
    puVar3 = (undefined8 *)((longlong)&param_1[iVar23].PackingScaleV.field0_0x0 + 4);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    uVar16 = *(undefined8 *)(param_1[iVar23].Join + 1);
    uVar17 = *(undefined8 *)(param_1[iVar23].Join + 3);
    pFVar1 = param_1 + iVar23;
    pFVar1->FirstTri = pFVar27->FirstTri;
    pFVar1->LastTri = uVar19;
    (pFVar1->MinUV).field0_0x0 = TVar6;
    uVar18 = (&param_1[iVar28].MaxUV)[1];
    param_1[iVar23].MaxUV.field0_0x0 = param_1[iVar28].MaxUV.field0_0x0;
    (&param_1[iVar23].MaxUV)[1] = (TVector2<float>)uVar18;
    puVar3 = (undefined8 *)((longlong)&param_1[iVar28].UVScale.field0_0x0 + 4);
    uVar18 = puVar3[1];
    puVar4 = (undefined8 *)((longlong)&param_1[iVar23].UVScale.field0_0x0 + 4);
    *puVar4 = *puVar3;
    puVar4[1] = uVar18;
    uVar18 = *(undefined8 *)(&param_1[iVar28].WorldLengthSum + 2);
    *(undefined8 *)&param_1[iVar23].WorldLengthSum = *(undefined8 *)&param_1[iVar28].WorldLengthSum;
    *(undefined8 *)(&param_1[iVar23].WorldLengthSum + 2) = uVar18;
    puVar3 = (undefined8 *)((longlong)&param_1[iVar28].PackingScaleV.field0_0x0 + 4);
    uVar18 = puVar3[1];
    puVar4 = (undefined8 *)((longlong)&param_1[iVar23].PackingScaleV.field0_0x0 + 4);
    *puVar4 = *puVar3;
    puVar4[1] = uVar18;
    uVar18 = *(undefined8 *)(param_1[iVar28].Join + 3);
    *(undefined8 *)(param_1[iVar23].Join + 1) = *(undefined8 *)(param_1[iVar28].Join + 1);
    *(undefined8 *)(param_1[iVar23].Join + 3) = uVar18;
    pFVar27 = param_1 + iVar28;
    pFVar27->FirstTri = uVar20;
    pFVar27->LastTri = uVar21;
    (pFVar27->MinUV).field0_0x0 = TVar7;
    param_1[iVar28].MaxUV.field0_0x0 = TVar8;
    (&param_1[iVar28].MaxUV)[1] = (TVector2<float>)uVar9;
    puVar3 = (undefined8 *)((longlong)&param_1[iVar28].UVScale.field0_0x0 + 4);
    *puVar3 = uVar10;
    puVar3[1] = uVar11;
    *(undefined8 *)&param_1[iVar28].WorldLengthSum = uVar12;
    *(undefined8 *)(&param_1[iVar28].WorldLengthSum + 2) = uVar13;
    puVar3 = (undefined8 *)((longlong)&param_1[iVar28].PackingScaleV.field0_0x0 + 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    *(undefined8 *)(param_1[iVar28].Join + 1) = uVar16;
    *(undefined8 *)(param_1[iVar28].Join + 3) = uVar17;
    iVar23 = iVar28;
  } while( true );
}

// HeapSortInternal<FMeshChart,int,FIdentityFunctor,`FLayoutUV::FChartPacker::ScaleCharts'::__l7::<lambda_1>_> @ 14434f2b0

void __cdecl
AlgoImpl::
HeapSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l7::<lambda_1>_>
          (FMeshChart *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FMeshChart *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  FMeshChart *pFVar26;
  FMeshChart *pFVar27;
  int iVar28;
  
  if (param_2 < 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar21 = (param_2 + -2) / 2;
  iVar22 = iVar21 * 2 + 1;
  iVar28 = iVar22;
  iVar23 = iVar21;
  do {
    while (param_2 <= iVar22) {
LAB_14434f433:
      if (iVar23 == 0) {
        iVar22 = param_2 + -1;
        lVar25 = (longlong)iVar22;
        if (0 < iVar22) {
          pFVar26 = param_1 + lVar25;
          do {
            uVar17 = pFVar26->LastTri;
            TVar4 = (pFVar26->MinUV).field0_0x0;
            uVar18 = param_1->FirstTri;
            uVar19 = param_1->LastTri;
            TVar5 = (param_1->MinUV).field0_0x0;
            TVar6 = (param_1->MaxUV).field0_0x0;
            uVar7 = *(undefined8 *)&param_1->UVArea;
            uVar8 = *(undefined8 *)((longlong)&(param_1->UVScale).field0_0x0 + 4);
            uVar9 = *(undefined8 *)((longlong)&(param_1->WorldScale).field0_0x0 + 4);
            uVar10 = *(undefined8 *)&param_1->WorldLengthSum;
            uVar11 = *(undefined8 *)((longlong)&(param_1->PackingScaleU).field0_0x0 + 4);
            uVar12 = *(undefined8 *)((longlong)&(param_1->PackingScaleV).field0_0x0 + 4);
            uVar13 = *(undefined8 *)((longlong)&(param_1->PackingBias).field0_0x0 + 4);
            uVar14 = *(undefined8 *)(param_1->Join + 1);
            uVar15 = *(undefined8 *)(param_1->Join + 3);
            param_1->FirstTri = pFVar26->FirstTri;
            param_1->LastTri = uVar17;
            (param_1->MinUV).field0_0x0 = TVar4;
            uVar16 = *(undefined8 *)&pFVar26->UVArea;
            (param_1->MaxUV).field0_0x0 = (pFVar26->MaxUV).field0_0x0;
            *(undefined8 *)&param_1->UVArea = uVar16;
            uVar16 = *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->UVScale).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->WorldScale).field0_0x0 + 4) = uVar16;
            uVar16 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4);
            *(undefined8 *)&param_1->WorldLengthSum = *(undefined8 *)&pFVar26->WorldLengthSum;
            *(undefined8 *)((longlong)&(param_1->PackingScaleU).field0_0x0 + 4) = uVar16;
            uVar16 = *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->PackingScaleV).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->PackingBias).field0_0x0 + 4) = uVar16;
            uVar16 = *(undefined8 *)(pFVar26->Join + 3);
            *(undefined8 *)(param_1->Join + 1) = *(undefined8 *)(pFVar26->Join + 1);
            *(undefined8 *)(param_1->Join + 3) = uVar16;
            pFVar26->FirstTri = uVar18;
            pFVar26->LastTri = uVar19;
            (pFVar26->MinUV).field0_0x0 = TVar5;
            (pFVar26->MaxUV).field0_0x0 = TVar6;
            *(undefined8 *)&pFVar26->UVArea = uVar7;
            *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4) = uVar8;
            *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4) = uVar9;
            *(undefined8 *)&pFVar26->WorldLengthSum = uVar10;
            *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4) = uVar11;
            *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4) = uVar12;
            *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4) = uVar13;
            *(undefined8 *)(pFVar26->Join + 1) = uVar14;
            *(undefined8 *)(pFVar26->Join + 3) = uVar15;
            iVar28 = 0;
            if (1 < iVar22) {
              do {
                iVar21 = iVar28 * 2;
                iVar23 = iVar21 + 1;
                if (iVar21 + 2 < iVar22) {
                  if (param_1[(longlong)iVar21 + 2].Id < param_1[iVar23].Id) {
                    iVar23 = iVar21;
                  }
                  iVar23 = iVar23 + 1;
                }
                pFVar27 = param_1 + iVar23;
                if (pFVar27->Id <= param_1[iVar28].Id) break;
                uVar17 = pFVar27->LastTri;
                TVar4 = (pFVar27->MinUV).field0_0x0;
                pFVar1 = param_1 + iVar28;
                uVar18 = pFVar1->FirstTri;
                uVar19 = pFVar1->LastTri;
                TVar5 = (pFVar1->MinUV).field0_0x0;
                TVar6 = param_1[iVar28].MaxUV.field0_0x0;
                uVar7 = (&param_1[iVar28].MaxUV)[1];
                puVar2 = (undefined8 *)((longlong)&param_1[iVar28].UVScale.field0_0x0 + 4);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                uVar10 = *(undefined8 *)&param_1[iVar28].WorldLengthSum;
                uVar11 = *(undefined8 *)(&param_1[iVar28].WorldLengthSum + 2);
                puVar2 = (undefined8 *)((longlong)&param_1[iVar28].PackingScaleV.field0_0x0 + 4);
                uVar12 = *puVar2;
                uVar13 = puVar2[1];
                uVar14 = *(undefined8 *)(param_1[iVar28].Join + 1);
                uVar15 = *(undefined8 *)(param_1[iVar28].Join + 3);
                pFVar1 = param_1 + iVar28;
                pFVar1->FirstTri = pFVar27->FirstTri;
                pFVar1->LastTri = uVar17;
                (pFVar1->MinUV).field0_0x0 = TVar4;
                uVar16 = *(undefined8 *)&pFVar27->UVArea;
                param_1[iVar28].MaxUV.field0_0x0 = (pFVar27->MaxUV).field0_0x0;
                (&param_1[iVar28].MaxUV)[1] = (TVector2<float>)uVar16;
                uVar16 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
                puVar2 = (undefined8 *)((longlong)&param_1[iVar28].UVScale.field0_0x0 + 4);
                *puVar2 = *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
                puVar2[1] = uVar16;
                uVar16 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
                *(undefined8 *)&param_1[iVar28].WorldLengthSum =
                     *(undefined8 *)&pFVar27->WorldLengthSum;
                *(undefined8 *)(&param_1[iVar28].WorldLengthSum + 2) = uVar16;
                uVar16 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
                puVar2 = (undefined8 *)((longlong)&param_1[iVar28].PackingScaleV.field0_0x0 + 4);
                *puVar2 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
                puVar2[1] = uVar16;
                uVar16 = *(undefined8 *)(pFVar27->Join + 3);
                *(undefined8 *)(param_1[iVar28].Join + 1) = *(undefined8 *)(pFVar27->Join + 1);
                *(undefined8 *)(param_1[iVar28].Join + 3) = uVar16;
                pFVar27->FirstTri = uVar18;
                pFVar27->LastTri = uVar19;
                (pFVar27->MinUV).field0_0x0 = TVar5;
                (pFVar27->MaxUV).field0_0x0 = TVar6;
                *(undefined8 *)&pFVar27->UVArea = uVar7;
                *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) = uVar8;
                *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar9;
                *(undefined8 *)&pFVar27->WorldLengthSum = uVar10;
                *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar11;
                *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) = uVar12;
                *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar13;
                *(undefined8 *)(pFVar27->Join + 1) = uVar14;
                *(undefined8 *)(pFVar27->Join + 3) = uVar15;
                iVar28 = iVar23;
              } while (iVar23 * 2 + 1 < iVar22);
            }
            iVar22 = iVar22 + -1;
            lVar25 = lVar25 + -1;
            pFVar26 = pFVar26 + -1;
          } while (0 < lVar25);
        }
        return;
      }
      iVar21 = iVar23 + -1;
      iVar22 = iVar28 + -2;
      iVar28 = iVar22;
      iVar23 = iVar21;
    }
    iVar22 = iVar21 * 2;
    iVar24 = iVar22 + 1;
    if (iVar22 + 2 < param_2) {
      if (param_1[(longlong)iVar22 + 2].Id < param_1[iVar24].Id) {
        iVar24 = iVar22;
      }
      iVar24 = iVar24 + 1;
    }
    pFVar26 = param_1 + iVar24;
    if (pFVar26->Id <= param_1[iVar21].Id) goto LAB_14434f433;
    uVar17 = pFVar26->LastTri;
    TVar4 = (pFVar26->MinUV).field0_0x0;
    iVar22 = iVar24 * 2 + 1;
    pFVar27 = param_1 + iVar21;
    uVar18 = pFVar27->FirstTri;
    uVar19 = pFVar27->LastTri;
    TVar5 = (pFVar27->MinUV).field0_0x0;
    TVar6 = param_1[iVar21].MaxUV.field0_0x0;
    uVar7 = (&param_1[iVar21].MaxUV)[1];
    puVar2 = (undefined8 *)((longlong)&param_1[iVar21].UVScale.field0_0x0 + 4);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    uVar10 = *(undefined8 *)&param_1[iVar21].WorldLengthSum;
    uVar11 = *(undefined8 *)(&param_1[iVar21].WorldLengthSum + 2);
    puVar2 = (undefined8 *)((longlong)&param_1[iVar21].PackingScaleV.field0_0x0 + 4);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = *(undefined8 *)(param_1[iVar21].Join + 1);
    uVar15 = *(undefined8 *)(param_1[iVar21].Join + 3);
    pFVar27 = param_1 + iVar21;
    pFVar27->FirstTri = pFVar26->FirstTri;
    pFVar27->LastTri = uVar17;
    (pFVar27->MinUV).field0_0x0 = TVar4;
    uVar16 = *(undefined8 *)&pFVar26->UVArea;
    param_1[iVar21].MaxUV.field0_0x0 = (pFVar26->MaxUV).field0_0x0;
    (&param_1[iVar21].MaxUV)[1] = (TVector2<float>)uVar16;
    uVar16 = *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4);
    puVar2 = (undefined8 *)((longlong)&param_1[iVar21].UVScale.field0_0x0 + 4);
    *puVar2 = *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4);
    puVar2[1] = uVar16;
    uVar16 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4);
    *(undefined8 *)&param_1[iVar21].WorldLengthSum = *(undefined8 *)&pFVar26->WorldLengthSum;
    *(undefined8 *)(&param_1[iVar21].WorldLengthSum + 2) = uVar16;
    uVar16 = *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4);
    puVar2 = (undefined8 *)((longlong)&param_1[iVar21].PackingScaleV.field0_0x0 + 4);
    *puVar2 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4);
    puVar2[1] = uVar16;
    uVar16 = *(undefined8 *)(pFVar26->Join + 3);
    *(undefined8 *)(param_1[iVar21].Join + 1) = *(undefined8 *)(pFVar26->Join + 1);
    *(undefined8 *)(param_1[iVar21].Join + 3) = uVar16;
    pFVar26->FirstTri = uVar18;
    pFVar26->LastTri = uVar19;
    (pFVar26->MinUV).field0_0x0 = TVar5;
    (pFVar26->MaxUV).field0_0x0 = TVar6;
    *(undefined8 *)&pFVar26->UVArea = uVar7;
    *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4) = uVar8;
    *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4) = uVar9;
    *(undefined8 *)&pFVar26->WorldLengthSum = uVar10;
    *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4) = uVar11;
    *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4) = uVar12;
    *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4) = uVar13;
    *(undefined8 *)(pFVar26->Join + 1) = uVar14;
    *(undefined8 *)(pFVar26->Join + 3) = uVar15;
    iVar21 = iVar24;
  } while( true );
}

// HeapSortInternal<FAllocator2D::FSegment,int,FIdentityFunctor,TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_>_> @ 14434f5f0

void __cdecl
AlgoImpl::
HeapSortInternal<FAllocator2D::FSegment,int,FIdentityFunctor,TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_>_>
          (FSegment *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_> param_4)

{
  FSegment *pFVar1;
  FSegment *pFVar2;
  FSegment FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14434f6d2:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].StartPos < param_1[iVar6].StartPos) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->StartPos <= pFVar2->StartPos) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].StartPos < param_1[iVar8].StartPos) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->StartPos <= pFVar2->StartPos) goto LAB_14434f6d2;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>_>_> @ 14434f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l2::<lambda_1>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_FAllocator2D::CreateUsedSegments(void)_::_2_::<lambda_1>_>
          param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort **ppuVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  ushort *local_358;
  ushort *local_348;
  ushort *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppuVar7 = &local_348;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_358 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14434f840:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_14434f870:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x00014434f879;
          goto LAB_14434f890;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,(uint)*puVar9,(uint)*puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_14434f95c;
      }
LAB_14434f94b:
      HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l2::<lambda_1>_>_>
                (puVar5,iVar3,param_3,param_4);
LAB_14434f95c:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_348 <= ppuVar7);
  }
  return;
code_r0x00014434f879:
  bVar2 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,(uint)*puVar10,(uint)*puVar5);
  if (!bVar2) goto LAB_14434f870;
LAB_14434f890:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `FAllocator2D::CreateUsedSegments'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(uint)*puVar8,(uint)*puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_14434f870;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-2 - (longlong)puVar10) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffeU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_14434f95c;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_14434f95c;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_14434f94b;
  goto LAB_14434f840;
}

// IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>_>_> @ 14434fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l49::<lambda_2>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_FAllocator2D::CreateUsedSegments(void)_::_49_::<lambda_2>_>
          param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort **ppuVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  ushort *local_358;
  ushort *local_348;
  ushort *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppuVar7 = &local_348;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_358 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14434fae0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_14434fb10:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x00014434fb19;
          goto LAB_14434fb30;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                              (param_4.Predicate,(uint)*puVar9,(uint)*puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_14434fbfc;
      }
LAB_14434fbeb:
      HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_FAllocator2D::CreateUsedSegments_::__l49::<lambda_2>_>_>
                (puVar5,iVar3,param_3,param_4);
LAB_14434fbfc:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_348 <= ppuVar7);
  }
  return;
code_r0x00014434fb19:
  bVar2 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                    (param_4.Predicate,(uint)*puVar10,(uint)*puVar5);
  if (!bVar2) goto LAB_14434fb10;
LAB_14434fb30:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `FAllocator2D::CreateUsedSegments'::__l49::<lambda_2>::operator()
                      (param_4.Predicate,(uint)*puVar8,(uint)*puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_14434fb10;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-2 - (longlong)puVar10) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffeU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_14434fbfc;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_14434fbfc;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_14434fbeb;
  goto LAB_14434fae0;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,`FLayoutUV::FChartFinder::FindCharts'::__l2::FCompareTris> @ 14434fcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,_FLayoutUV::FChartFinder::FindCharts_::__l2::FCompareTris>
          (uint *param_1,int param_2,FIdentityFunctor param_3,FCompareTris param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  float fVar9;
  undefined1 auStack_398 [32];
  FIdentityFunctor local_378;
  uint **local_370;
  int local_368;
  uint *local_350;
  uint *local_348;
  uint *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_378 = param_3;
    local_348 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar9;
    memset(local_330,0,0x2e8);
    local_370 = &local_348;
    do {
      puVar6 = local_370[1];
      puVar5 = *local_370;
      local_350 = local_370[2];
      iVar1 = (int)((longlong)puVar6 - (longlong)puVar5 >> 2) + 1;
      local_368 = (int)local_350;
      puVar4 = puVar5;
      if ((int)local_350 != 0) {
LAB_14434fd90:
        if (8 < iVar1) {
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          puVar7 = puVar6 + 1;
          uVar3 = puVar4[iVar1 >> 1];
          puVar4[iVar1 >> 1] = *puVar4;
          *puVar4 = uVar3;
          puVar5 = puVar4;
LAB_14434fdc0:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar6) goto code_r0x00014434fdc9;
          goto LAB_14434fdf0;
        }
        for (; puVar7 = puVar4, puVar5 = puVar4, puVar4 < puVar6; puVar6 = puVar6 + -1) {
          while (puVar8 = puVar7, puVar5 = puVar5 + 1, puVar5 <= puVar6) {
            uVar3 = *puVar5;
            uVar2 = FDisjointSet::operator[](param_4.DisjointSet,*puVar8);
            uVar3 = FDisjointSet::operator[](param_4.DisjointSet,uVar3);
            puVar7 = puVar5;
            if (uVar3 <= uVar2) {
              puVar7 = puVar8;
            }
          }
          uVar3 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar3;
          param_3 = local_378;
        }
        goto LAB_14434fee2;
      }
LAB_14434fecc:
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,_FLayoutUV::FChartFinder::FindCharts_::__l2::FCompareTris>
                (puVar5,iVar1,param_3,param_4);
LAB_14434fee2:
      local_370 = local_370 + -3;
    } while (&local_348 <= local_370);
  }
  return;
code_r0x00014434fdc9:
  uVar3 = *puVar5;
  uVar2 = FDisjointSet::operator[](param_4.DisjointSet,*puVar4);
  uVar3 = FDisjointSet::operator[](param_4.DisjointSet,uVar3);
  if (uVar3 <= uVar2) goto LAB_14434fdc0;
LAB_14434fdf0:
  do {
    puVar8 = puVar7;
    puVar7 = puVar8 + -1;
    if (puVar7 <= puVar4) break;
    uVar3 = *puVar4;
    uVar2 = FDisjointSet::operator[](param_4.DisjointSet,*puVar7);
    uVar3 = FDisjointSet::operator[](param_4.DisjointSet,uVar3);
  } while (uVar3 <= uVar2);
  if (puVar5 <= puVar7) {
    uVar3 = *puVar5;
    *puVar5 = *puVar7;
    *puVar7 = uVar3;
    goto LAB_14434fdc0;
  }
  uVar3 = *puVar4;
  *puVar4 = *puVar7;
  local_368 = local_368 + -1;
  *puVar7 = uVar3;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar4) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar6 - (longlong)puVar5 & 0xfffffffffffffffcU)) {
    if (puVar5 < puVar6) {
      *local_370 = puVar5;
      local_370[1] = puVar6;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (puVar7 <= puVar4 + 1) goto LAB_14434fee2;
    puVar6 = puVar8 + -2;
    puVar5 = puVar4;
  }
  else {
    if (puVar4 + 1 < puVar7) {
      *local_370 = puVar4;
      local_370[1] = puVar8 + -2;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (puVar6 <= puVar5) goto LAB_14434fee2;
  }
  iVar1 = (int)((longlong)puVar6 - (longlong)puVar5 >> 2) + 1;
  puVar4 = puVar5;
  if (local_368 == 0) goto LAB_14434fecc;
  goto LAB_14434fd90;
}

// IntroSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_> @ 14434ffc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ> param_4)

{
  FIndexAndZ *pFVar1;
  FIndexAndZ FVar2;
  int iVar3;
  FIndexAndZ *pFVar4;
  FIndexAndZ *pFVar5;
  FIndexAndZ **ppFVar6;
  FIndexAndZ *pFVar7;
  FIndexAndZ *pFVar8;
  FIndexAndZ *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FIndexAndZ *local_338;
  FIndexAndZ *local_328;
  FIndexAndZ *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_144350070:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_1443500a0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x0001443500a9;
          goto LAB_1443500b3;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->Z;
                  if (pFVar5->Z < pFVar4->Z) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->Z;
                  }
                  if (fVar10 < pFVar4[1].Z) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->Z;
                  if (pFVar5->Z < pFVar4[2].Z) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].Z;
                  }
                  if (fVar10 < pFVar4[3].Z) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->Z < pFVar4->Z) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_144350170;
      }
LAB_14435015f:
      local_338 = pFVar1;
      HeapSortInternal<FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndZ,FCompareIndexAndZ>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_144350170:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x0001443500a9:
  if (pFVar5->Z < pFVar9->Z || pFVar5->Z == pFVar9->Z) goto LAB_1443500a0;
LAB_1443500b3:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->Z < pFVar4->Z || pFVar9->Z == pFVar4->Z);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_1443500a0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_144350170;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_144350170;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14435015f;
  goto LAB_144350070;
}

// IntroSortInternal<FMeshChart,int,FIdentityFunctor,`FLayoutUV::FChartPacker::ScaleCharts'::__l2::FCompareCharts> @ 144350260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l2::FCompareCharts>
          (FMeshChart *param_1,int param_2,FIdentityFunctor param_3,FCompareCharts param_4)

{
  FMeshChart *pFVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FMeshChart *pFVar20;
  longlong lVar21;
  FMeshChart *pFVar22;
  int iVar23;
  FMeshChart *pFVar24;
  FMeshChart *pFVar25;
  FMeshChart *pFVar26;
  FMeshChart *pFVar27;
  FMeshChart **ppFVar28;
  float fVar29;
  undefined1 auStack_3a8 [48];
  FMeshChart *local_378;
  FMeshChart *local_368;
  FMeshChart *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (1 < param_2) {
    local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar29;
    memset(local_350,0,0x2e8);
    ppFVar28 = &local_368;
    do {
      pFVar25 = ppFVar28[1];
      pFVar22 = *ppFVar28;
      pFVar1 = ppFVar28[2];
      local_378._0_4_ = (int)pFVar1;
      iVar23 = (int)(((longlong)pFVar25 - (longlong)pFVar22) / 0x60) + 1;
      pFVar27 = pFVar22;
      if ((int)local_378 != 0) {
LAB_144350340:
        if (8 < iVar23) {
          uVar17 = pFVar27->LastTri;
          TVar2 = (pFVar27->MinUV).field0_0x0;
          pFVar24 = pFVar25 + 1;
          pFVar22 = pFVar27 + iVar23 / 2;
          uVar18 = pFVar22->FirstTri;
          uVar19 = pFVar22->LastTri;
          TVar3 = (pFVar22->MinUV).field0_0x0;
          TVar4 = (pFVar22->MaxUV).field0_0x0;
          uVar5 = *(undefined8 *)&pFVar22->UVArea;
          uVar6 = *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4);
          uVar7 = *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4);
          uVar8 = *(undefined8 *)&pFVar22->WorldLengthSum;
          uVar9 = *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4);
          uVar10 = *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4);
          uVar11 = *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4);
          uVar12 = *(undefined8 *)(pFVar22->Join + 1);
          uVar13 = *(undefined8 *)(pFVar22->Join + 3);
          pFVar22->FirstTri = pFVar27->FirstTri;
          pFVar22->LastTri = uVar17;
          (pFVar22->MinUV).field0_0x0 = TVar2;
          uVar14 = *(undefined8 *)&pFVar27->UVArea;
          (pFVar22->MaxUV).field0_0x0 = (pFVar27->MaxUV).field0_0x0;
          *(undefined8 *)&pFVar22->UVArea = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
          *(undefined8 *)&pFVar22->WorldLengthSum = *(undefined8 *)&pFVar27->WorldLengthSum;
          *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)(pFVar27->Join + 3);
          *(undefined8 *)(pFVar22->Join + 1) = *(undefined8 *)(pFVar27->Join + 1);
          *(undefined8 *)(pFVar22->Join + 3) = uVar14;
          pFVar27->FirstTri = uVar18;
          pFVar27->LastTri = uVar19;
          (pFVar27->MinUV).field0_0x0 = TVar3;
          (pFVar27->MaxUV).field0_0x0 = TVar4;
          *(undefined8 *)&pFVar27->UVArea = uVar5;
          *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) = uVar6;
          *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar7;
          *(undefined8 *)&pFVar27->WorldLengthSum = uVar8;
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar9;
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) = uVar10;
          *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar11;
          *(undefined8 *)(pFVar27->Join + 1) = uVar12;
          *(undefined8 *)(pFVar27->Join + 3) = uVar13;
          pFVar22 = pFVar27;
LAB_1443503d0:
          pFVar20 = pFVar22;
          pFVar22 = pFVar20 + 1;
          if (pFVar22 <= pFVar25) goto code_r0x0001443503dc;
          goto LAB_144350430;
        }
        if (pFVar27 < pFVar25) {
          pFVar1 = pFVar27 + 1;
          do {
            pFVar22 = pFVar27;
            if (pFVar1 <= pFVar25) {
              pFVar24 = pFVar1;
              if (0x17f < (ulonglong)((longlong)pFVar25 + (0x60 - (longlong)pFVar1))) {
                do {
                  pFVar20 = pFVar24;
                  if (((pFVar22->MaxUV).field0_0x0._s_0.Y - (pFVar22->MinUV).field0_0x0._s_0.Y) *
                      (pFVar22->UVScale).field0_0x0._s_0.Y *
                      ((pFVar22->MaxUV).field0_0x0._s_0.X - (pFVar22->MinUV).field0_0x0._s_0.X) *
                      (pFVar22->UVScale).field0_0x0._s_0.X <=
                      ((pFVar24->MaxUV).field0_0x0._s_0.Y - (pFVar24->MinUV).field0_0x0._s_0.Y) *
                      (pFVar24->UVScale).field0_0x0._s_0.Y *
                      ((pFVar24->MaxUV).field0_0x0._s_0.X - (pFVar24->MinUV).field0_0x0._s_0.X) *
                      (pFVar24->UVScale).field0_0x0._s_0.X) {
                    pFVar20 = pFVar22;
                  }
                  pFVar22 = pFVar24 + 1;
                  if (((pFVar20->MaxUV).field0_0x0._s_0.Y - (pFVar20->MinUV).field0_0x0._s_0.Y) *
                      (pFVar20->UVScale).field0_0x0._s_0.Y *
                      ((pFVar20->MaxUV).field0_0x0._s_0.X - (pFVar20->MinUV).field0_0x0._s_0.X) *
                      (pFVar20->UVScale).field0_0x0._s_0.X <=
                      (pFVar24[1].MaxUV.field0_0x0._s_0.Y - pFVar24[1].MinUV.field0_0x0._s_0.Y) *
                      pFVar24[1].UVScale.field0_0x0._s_0.Y *
                      (pFVar24[1].MaxUV.field0_0x0._s_0.X - pFVar24[1].MinUV.field0_0x0._s_0.X) *
                      pFVar24[1].UVScale.field0_0x0._s_0.X) {
                    pFVar22 = pFVar20;
                  }
                  pFVar20 = pFVar24 + 2;
                  if (((pFVar22->MaxUV).field0_0x0._s_0.Y - (pFVar22->MinUV).field0_0x0._s_0.Y) *
                      (pFVar22->UVScale).field0_0x0._s_0.Y *
                      ((pFVar22->MaxUV).field0_0x0._s_0.X - (pFVar22->MinUV).field0_0x0._s_0.X) *
                      (pFVar22->UVScale).field0_0x0._s_0.X <=
                      (pFVar24[2].MaxUV.field0_0x0._s_0.Y - pFVar24[2].MinUV.field0_0x0._s_0.Y) *
                      pFVar24[2].UVScale.field0_0x0._s_0.Y *
                      (pFVar24[2].MaxUV.field0_0x0._s_0.X - pFVar24[2].MinUV.field0_0x0._s_0.X) *
                      pFVar24[2].UVScale.field0_0x0._s_0.X) {
                    pFVar20 = pFVar22;
                  }
                  pFVar22 = pFVar24 + 3;
                  if (((pFVar20->MaxUV).field0_0x0._s_0.Y - (pFVar20->MinUV).field0_0x0._s_0.Y) *
                      (pFVar20->UVScale).field0_0x0._s_0.Y *
                      ((pFVar20->MaxUV).field0_0x0._s_0.X - (pFVar20->MinUV).field0_0x0._s_0.X) *
                      (pFVar20->UVScale).field0_0x0._s_0.X <=
                      (pFVar24[3].MaxUV.field0_0x0._s_0.Y - pFVar24[3].MinUV.field0_0x0._s_0.Y) *
                      pFVar24[3].UVScale.field0_0x0._s_0.Y *
                      (pFVar24[3].MaxUV.field0_0x0._s_0.X - pFVar24[3].MinUV.field0_0x0._s_0.X) *
                      pFVar24[3].UVScale.field0_0x0._s_0.X) {
                    pFVar22 = pFVar20;
                  }
                  pFVar24 = pFVar24 + 4;
                } while (pFVar24 <= pFVar25 + -3);
              }
              for (; pFVar24 <= pFVar25; pFVar24 = pFVar24 + 1) {
                pFVar20 = pFVar24;
                if (((pFVar22->MaxUV).field0_0x0._s_0.Y - (pFVar22->MinUV).field0_0x0._s_0.Y) *
                    (pFVar22->UVScale).field0_0x0._s_0.Y *
                    ((pFVar22->MaxUV).field0_0x0._s_0.X - (pFVar22->MinUV).field0_0x0._s_0.X) *
                    (pFVar22->UVScale).field0_0x0._s_0.X <=
                    ((pFVar24->MaxUV).field0_0x0._s_0.Y - (pFVar24->MinUV).field0_0x0._s_0.Y) *
                    (pFVar24->UVScale).field0_0x0._s_0.Y *
                    ((pFVar24->MaxUV).field0_0x0._s_0.X - (pFVar24->MinUV).field0_0x0._s_0.X) *
                    (pFVar24->UVScale).field0_0x0._s_0.X) {
                  pFVar20 = pFVar22;
                }
                pFVar22 = pFVar20;
              }
            }
            uVar18 = pFVar22->FirstTri;
            uVar19 = pFVar22->LastTri;
            TVar2 = (pFVar22->MinUV).field0_0x0;
            pFVar24 = pFVar25 + -1;
            TVar3 = (pFVar22->MaxUV).field0_0x0;
            uVar5 = *(undefined8 *)&pFVar22->UVArea;
            uVar6 = *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4);
            uVar7 = *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4);
            uVar17 = pFVar25->LastTri;
            TVar4 = (pFVar25->MinUV).field0_0x0;
            uVar8 = *(undefined8 *)&pFVar22->WorldLengthSum;
            uVar9 = *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4);
            uVar10 = *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4);
            uVar11 = *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4);
            uVar12 = *(undefined8 *)(pFVar22->Join + 1);
            uVar13 = *(undefined8 *)(pFVar22->Join + 3);
            pFVar22->FirstTri = pFVar25->FirstTri;
            pFVar22->LastTri = uVar17;
            (pFVar22->MinUV).field0_0x0 = TVar4;
            uVar14 = *(undefined8 *)&pFVar25->UVArea;
            (pFVar22->MaxUV).field0_0x0 = (pFVar25->MaxUV).field0_0x0;
            *(undefined8 *)&pFVar22->UVArea = uVar14;
            uVar14 = *(undefined8 *)((longlong)&(pFVar25->WorldScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar25->UVScale).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4) = uVar14;
            uVar14 = *(undefined8 *)((longlong)&(pFVar25->PackingScaleU).field0_0x0 + 4);
            *(undefined8 *)&pFVar22->WorldLengthSum = *(undefined8 *)&pFVar25->WorldLengthSum;
            *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4) = uVar14;
            uVar14 = *(undefined8 *)((longlong)&(pFVar25->PackingBias).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar25->PackingScaleV).field0_0x0 + 4);
            *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4) = uVar14;
            uVar14 = *(undefined8 *)(pFVar25->Join + 3);
            *(undefined8 *)(pFVar22->Join + 1) = *(undefined8 *)(pFVar25->Join + 1);
            *(undefined8 *)(pFVar22->Join + 3) = uVar14;
            pFVar25->FirstTri = uVar18;
            pFVar25->LastTri = uVar19;
            (pFVar25->MinUV).field0_0x0 = TVar2;
            (pFVar25->MaxUV).field0_0x0 = TVar3;
            *(undefined8 *)&pFVar25->UVArea = uVar5;
            *(undefined8 *)((longlong)&(pFVar25->UVScale).field0_0x0 + 4) = uVar6;
            *(undefined8 *)((longlong)&(pFVar25->WorldScale).field0_0x0 + 4) = uVar7;
            *(undefined8 *)&pFVar25->WorldLengthSum = uVar8;
            *(undefined8 *)((longlong)&(pFVar25->PackingScaleU).field0_0x0 + 4) = uVar9;
            *(undefined8 *)((longlong)&(pFVar25->PackingScaleV).field0_0x0 + 4) = uVar10;
            *(undefined8 *)((longlong)&(pFVar25->PackingBias).field0_0x0 + 4) = uVar11;
            *(undefined8 *)(pFVar25->Join + 1) = uVar12;
            *(undefined8 *)(pFVar25->Join + 3) = uVar13;
            pFVar25 = pFVar24;
          } while (pFVar27 < pFVar24);
        }
        goto LAB_144350636;
      }
LAB_144350626:
      local_378 = pFVar1;
      HeapSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l2::FCompareCharts>
                (pFVar22,iVar23,param_3,param_4);
LAB_144350636:
      ppFVar28 = ppFVar28 + -3;
    } while (&local_368 <= ppFVar28);
  }
  return;
code_r0x0001443503dc:
  if (((pFVar27->MaxUV).field0_0x0._s_0.Y - (pFVar27->MinUV).field0_0x0._s_0.Y) *
      (pFVar27->UVScale).field0_0x0._s_0.Y *
      ((pFVar27->MaxUV).field0_0x0._s_0.X - (pFVar27->MinUV).field0_0x0._s_0.X) *
      (pFVar27->UVScale).field0_0x0._s_0.X <=
      (pFVar20[1].MaxUV.field0_0x0._s_0.Y - pFVar20[1].MinUV.field0_0x0._s_0.Y) *
      pFVar20[1].UVScale.field0_0x0._s_0.Y *
      (pFVar20[1].MaxUV.field0_0x0._s_0.X - pFVar20[1].MinUV.field0_0x0._s_0.X) *
      pFVar20[1].UVScale.field0_0x0._s_0.X) goto LAB_1443503d0;
LAB_144350430:
  do {
    pFVar26 = pFVar24;
    pFVar24 = pFVar26 + -1;
    if (pFVar24 <= pFVar27) break;
  } while ((pFVar26[-1].MaxUV.field0_0x0._s_0.X - pFVar26[-1].MinUV.field0_0x0._s_0.X) *
           pFVar26[-1].UVScale.field0_0x0._s_0.X *
           (pFVar26[-1].MaxUV.field0_0x0._s_0.Y - pFVar26[-1].MinUV.field0_0x0._s_0.Y) *
           pFVar26[-1].UVScale.field0_0x0._s_0.Y <=
           ((pFVar27->MaxUV).field0_0x0._s_0.Y - (pFVar27->MinUV).field0_0x0._s_0.Y) *
           (pFVar27->UVScale).field0_0x0._s_0.Y *
           ((pFVar27->MaxUV).field0_0x0._s_0.X - (pFVar27->MinUV).field0_0x0._s_0.X) *
           (pFVar27->UVScale).field0_0x0._s_0.X);
  uVar15 = pFVar24->FirstTri;
  uVar16 = pFVar24->LastTri;
  TVar2 = pFVar26[-1].MinUV.field0_0x0;
  if (pFVar22 <= pFVar24) {
    uVar17 = pFVar22->FirstTri;
    uVar18 = pFVar22->LastTri;
    TVar3 = pFVar20[1].MinUV.field0_0x0;
    TVar4 = pFVar20[1].MaxUV.field0_0x0;
    uVar5 = *(undefined8 *)&pFVar20[1].UVArea;
    uVar6 = *(undefined8 *)((longlong)&pFVar20[1].UVScale.field0_0x0 + 4);
    uVar7 = *(undefined8 *)((longlong)&pFVar20[1].WorldScale.field0_0x0 + 4);
    uVar8 = *(undefined8 *)&pFVar20[1].WorldLengthSum;
    uVar9 = *(undefined8 *)((longlong)&pFVar20[1].PackingScaleU.field0_0x0 + 4);
    uVar10 = *(undefined8 *)((longlong)&pFVar20[1].PackingScaleV.field0_0x0 + 4);
    uVar11 = *(undefined8 *)((longlong)&pFVar20[1].PackingBias.field0_0x0 + 4);
    uVar12 = *(undefined8 *)(pFVar20[1].Join + 1);
    uVar13 = *(undefined8 *)(pFVar20[1].Join + 3);
    pFVar22->FirstTri = uVar15;
    pFVar22->LastTri = uVar16;
    pFVar20[1].MinUV.field0_0x0 = TVar2;
    uVar14 = *(undefined8 *)&pFVar26[-1].UVArea;
    pFVar20[1].MaxUV.field0_0x0 = pFVar26[-1].MaxUV.field0_0x0;
    *(undefined8 *)&pFVar20[1].UVArea = uVar14;
    uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].WorldScale.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar20[1].UVScale.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&pFVar26[-1].UVScale.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar20[1].WorldScale.field0_0x0 + 4) = uVar14;
    uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleU.field0_0x0 + 4);
    *(undefined8 *)&pFVar20[1].WorldLengthSum = *(undefined8 *)&pFVar26[-1].WorldLengthSum;
    *(undefined8 *)((longlong)&pFVar20[1].PackingScaleU.field0_0x0 + 4) = uVar14;
    uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].PackingBias.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar20[1].PackingScaleV.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleV.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar20[1].PackingBias.field0_0x0 + 4) = uVar14;
    uVar14 = *(undefined8 *)(pFVar26[-1].Join + 3);
    *(undefined8 *)(pFVar20[1].Join + 1) = *(undefined8 *)(pFVar26[-1].Join + 1);
    *(undefined8 *)(pFVar20[1].Join + 3) = uVar14;
    pFVar24->FirstTri = uVar17;
    pFVar24->LastTri = uVar18;
    pFVar26[-1].MinUV.field0_0x0 = TVar3;
    pFVar26[-1].MaxUV.field0_0x0 = TVar4;
    *(undefined8 *)&pFVar26[-1].UVArea = uVar5;
    *(undefined8 *)((longlong)&pFVar26[-1].UVScale.field0_0x0 + 4) = uVar6;
    *(undefined8 *)((longlong)&pFVar26[-1].WorldScale.field0_0x0 + 4) = uVar7;
    *(undefined8 *)&pFVar26[-1].WorldLengthSum = uVar8;
    *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleU.field0_0x0 + 4) = uVar9;
    *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleV.field0_0x0 + 4) = uVar10;
    *(undefined8 *)((longlong)&pFVar26[-1].PackingBias.field0_0x0 + 4) = uVar11;
    *(undefined8 *)(pFVar26[-1].Join + 1) = uVar12;
    *(undefined8 *)(pFVar26[-1].Join + 3) = uVar13;
    goto LAB_1443503d0;
  }
  uVar17 = pFVar27->FirstTri;
  uVar18 = pFVar27->LastTri;
  TVar3 = (pFVar27->MinUV).field0_0x0;
  TVar4 = (pFVar27->MaxUV).field0_0x0;
  uVar5 = *(undefined8 *)&pFVar27->UVArea;
  local_378._0_4_ = (int)local_378 + -1;
  uVar6 = *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
  uVar7 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
  lVar21 = (longlong)pFVar24 + (-0x60 - (longlong)pFVar27);
  uVar8 = *(undefined8 *)&pFVar27->WorldLengthSum;
  uVar9 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
  uVar10 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
  uVar11 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
  uVar12 = *(undefined8 *)(pFVar27->Join + 1);
  uVar13 = *(undefined8 *)(pFVar27->Join + 3);
  pFVar27->FirstTri = uVar15;
  pFVar27->LastTri = uVar16;
  (pFVar27->MinUV).field0_0x0 = TVar2;
  uVar14 = *(undefined8 *)&pFVar26[-1].UVArea;
  lVar21 = lVar21 / 6 + (lVar21 >> 0x3f);
  (pFVar27->MaxUV).field0_0x0 = pFVar26[-1].MaxUV.field0_0x0;
  *(undefined8 *)&pFVar27->UVArea = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].WorldScale.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&pFVar26[-1].UVScale.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleU.field0_0x0 + 4);
  *(undefined8 *)&pFVar27->WorldLengthSum = *(undefined8 *)&pFVar26[-1].WorldLengthSum;
  *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar26[-1].PackingBias.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleV.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)(pFVar26[-1].Join + 3);
  *(undefined8 *)(pFVar27->Join + 1) = *(undefined8 *)(pFVar26[-1].Join + 1);
  *(undefined8 *)(pFVar27->Join + 3) = uVar14;
  pFVar24->FirstTri = uVar17;
  pFVar24->LastTri = uVar18;
  pFVar26[-1].MinUV.field0_0x0 = TVar3;
  pFVar26[-1].MaxUV.field0_0x0 = TVar4;
  *(undefined8 *)&pFVar26[-1].UVArea = uVar5;
  *(undefined8 *)((longlong)&pFVar26[-1].UVScale.field0_0x0 + 4) = uVar6;
  *(undefined8 *)((longlong)&pFVar26[-1].WorldScale.field0_0x0 + 4) = uVar7;
  *(undefined8 *)&pFVar26[-1].WorldLengthSum = uVar8;
  *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleU.field0_0x0 + 4) = uVar9;
  *(undefined8 *)((longlong)&pFVar26[-1].PackingScaleV.field0_0x0 + 4) = uVar10;
  *(undefined8 *)((longlong)&pFVar26[-1].PackingBias.field0_0x0 + 4) = uVar11;
  *(undefined8 *)(pFVar26[-1].Join + 1) = uVar12;
  *(undefined8 *)(pFVar26[-1].Join + 3) = uVar13;
  if ((lVar21 >> 4) - (lVar21 >> 0x3f) < ((longlong)pFVar25 - (longlong)pFVar22) / 0x60) {
    if (pFVar22 < pFVar25) {
      *ppFVar28 = pFVar22;
      ppFVar28[1] = pFVar25;
      *(int *)(ppFVar28 + 2) = (int)local_378;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar24 <= pFVar27 + 1) goto LAB_144350636;
    pFVar25 = pFVar26 + -2;
    pFVar22 = pFVar27;
  }
  else {
    if (pFVar27 + 1 < pFVar24) {
      *ppFVar28 = pFVar27;
      ppFVar28[1] = pFVar26 + -2;
      *(int *)(ppFVar28 + 2) = (int)local_378;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar25 <= pFVar22) goto LAB_144350636;
  }
  iVar23 = (int)(((longlong)pFVar25 - (longlong)pFVar22) / 0x60) + 1;
  pFVar27 = pFVar22;
  if ((int)local_378 == 0) goto LAB_144350626;
  goto LAB_144350340;
}

// IntroSortInternal<FMeshChart,int,FIdentityFunctor,`FLayoutUV::FChartPacker::ScaleCharts'::__l7::<lambda_1>_> @ 144350930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l7::<lambda_1>_>
          (FMeshChart *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FMeshChart *pFVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  FMeshChart *pFVar22;
  FMeshChart *pFVar23;
  FMeshChart *pFVar24;
  FMeshChart *pFVar25;
  FMeshChart *pFVar26;
  FMeshChart *pFVar27;
  FMeshChart **ppFVar28;
  float fVar29;
  undefined1 auStack_398 [48];
  FMeshChart *local_368;
  FMeshChart *local_358;
  FMeshChart *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar29;
    memset(local_340,0,0x2e8);
    ppFVar28 = &local_358;
    do {
      pFVar22 = ppFVar28[1];
      pFVar27 = *ppFVar28;
      pFVar1 = ppFVar28[2];
      local_368._0_4_ = (int)pFVar1;
      iVar21 = (int)(((longlong)pFVar22 - (longlong)pFVar27) / 0x60) + 1;
      pFVar26 = pFVar27;
      if ((int)local_368 != 0) {
LAB_144350a10:
        if (8 < iVar21) {
          uVar17 = pFVar26->LastTri;
          TVar2 = (pFVar26->MinUV).field0_0x0;
          pFVar24 = pFVar22 + 1;
          pFVar27 = pFVar26 + iVar21 / 2;
          uVar18 = pFVar27->FirstTri;
          uVar19 = pFVar27->LastTri;
          TVar3 = (pFVar27->MinUV).field0_0x0;
          TVar4 = (pFVar27->MaxUV).field0_0x0;
          uVar5 = *(undefined8 *)&pFVar27->UVArea;
          uVar6 = *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
          uVar7 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
          uVar8 = *(undefined8 *)&pFVar27->WorldLengthSum;
          uVar9 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
          uVar10 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
          uVar11 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
          uVar12 = *(undefined8 *)(pFVar27->Join + 1);
          uVar13 = *(undefined8 *)(pFVar27->Join + 3);
          pFVar27->FirstTri = pFVar26->FirstTri;
          pFVar27->LastTri = uVar17;
          (pFVar27->MinUV).field0_0x0 = TVar2;
          uVar14 = *(undefined8 *)&pFVar26->UVArea;
          (pFVar27->MaxUV).field0_0x0 = (pFVar26->MaxUV).field0_0x0;
          *(undefined8 *)&pFVar27->UVArea = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4);
          *(undefined8 *)&pFVar27->WorldLengthSum = *(undefined8 *)&pFVar26->WorldLengthSum;
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)(pFVar26->Join + 3);
          *(undefined8 *)(pFVar27->Join + 1) = *(undefined8 *)(pFVar26->Join + 1);
          *(undefined8 *)(pFVar27->Join + 3) = uVar14;
          pFVar26->FirstTri = uVar18;
          pFVar26->LastTri = uVar19;
          (pFVar26->MinUV).field0_0x0 = TVar3;
          (pFVar26->MaxUV).field0_0x0 = TVar4;
          *(undefined8 *)&pFVar26->UVArea = uVar5;
          *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4) = uVar6;
          *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4) = uVar7;
          *(undefined8 *)&pFVar26->WorldLengthSum = uVar8;
          *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4) = uVar9;
          *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4) = uVar10;
          *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4) = uVar11;
          *(undefined8 *)(pFVar26->Join + 1) = uVar12;
          *(undefined8 *)(pFVar26->Join + 3) = uVar13;
          pFVar27 = pFVar26;
LAB_144350aa0:
          pFVar23 = pFVar27;
          pFVar27 = pFVar23 + 1;
          if (pFVar27 <= pFVar22) goto code_r0x000144350aa9;
          goto LAB_144350ab3;
        }
        for (; pFVar27 = pFVar26, pFVar1 = pFVar26, pFVar26 < pFVar22; pFVar22 = pFVar22 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar22) {
            if (pFVar27->Id < pFVar1->Id) {
              pFVar27 = pFVar1;
            }
          }
          uVar18 = pFVar27->FirstTri;
          uVar19 = pFVar27->LastTri;
          TVar2 = (pFVar27->MinUV).field0_0x0;
          TVar3 = (pFVar27->MaxUV).field0_0x0;
          uVar5 = *(undefined8 *)&pFVar27->UVArea;
          uVar6 = *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4);
          uVar7 = *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4);
          uVar17 = pFVar22->LastTri;
          TVar4 = (pFVar22->MinUV).field0_0x0;
          uVar8 = *(undefined8 *)&pFVar27->WorldLengthSum;
          uVar9 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4);
          uVar10 = *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4);
          uVar11 = *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4);
          uVar12 = *(undefined8 *)(pFVar27->Join + 1);
          uVar13 = *(undefined8 *)(pFVar27->Join + 3);
          pFVar27->FirstTri = pFVar22->FirstTri;
          pFVar27->LastTri = uVar17;
          (pFVar27->MinUV).field0_0x0 = TVar4;
          uVar14 = *(undefined8 *)&pFVar22->UVArea;
          (pFVar27->MaxUV).field0_0x0 = (pFVar22->MaxUV).field0_0x0;
          *(undefined8 *)&pFVar27->UVArea = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->UVScale).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->WorldScale).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4);
          *(undefined8 *)&pFVar27->WorldLengthSum = *(undefined8 *)&pFVar22->WorldLengthSum;
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleU).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->PackingScaleV).field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar27->PackingBias).field0_0x0 + 4) = uVar14;
          uVar14 = *(undefined8 *)(pFVar22->Join + 3);
          *(undefined8 *)(pFVar27->Join + 1) = *(undefined8 *)(pFVar22->Join + 1);
          *(undefined8 *)(pFVar27->Join + 3) = uVar14;
          pFVar22->FirstTri = uVar18;
          pFVar22->LastTri = uVar19;
          (pFVar22->MinUV).field0_0x0 = TVar2;
          (pFVar22->MaxUV).field0_0x0 = TVar3;
          *(undefined8 *)&pFVar22->UVArea = uVar5;
          *(undefined8 *)((longlong)&(pFVar22->UVScale).field0_0x0 + 4) = uVar6;
          *(undefined8 *)((longlong)&(pFVar22->WorldScale).field0_0x0 + 4) = uVar7;
          *(undefined8 *)&pFVar22->WorldLengthSum = uVar8;
          *(undefined8 *)((longlong)&(pFVar22->PackingScaleU).field0_0x0 + 4) = uVar9;
          *(undefined8 *)((longlong)&(pFVar22->PackingScaleV).field0_0x0 + 4) = uVar10;
          *(undefined8 *)((longlong)&(pFVar22->PackingBias).field0_0x0 + 4) = uVar11;
          *(undefined8 *)(pFVar22->Join + 1) = uVar12;
          *(undefined8 *)(pFVar22->Join + 3) = uVar13;
        }
        goto LAB_144350c71;
      }
LAB_144350c61:
      local_368 = pFVar1;
      HeapSortInternal<FMeshChart,int,FIdentityFunctor,_FLayoutUV::FChartPacker::ScaleCharts_::__l7::<lambda_1>_>
                (pFVar27,iVar21,param_3,param_4);
LAB_144350c71:
      ppFVar28 = ppFVar28 + -3;
    } while (&local_358 <= ppFVar28);
  }
  return;
code_r0x000144350aa9:
  if (pFVar23[1].Id <= pFVar26->Id) goto LAB_144350aa0;
LAB_144350ab3:
  do {
    pFVar25 = pFVar24;
    pFVar24 = pFVar25 + -1;
    if (pFVar24 <= pFVar26) break;
  } while (pFVar26->Id <= pFVar25[-1].Id);
  uVar15 = pFVar24->FirstTri;
  uVar16 = pFVar24->LastTri;
  TVar2 = pFVar25[-1].MinUV.field0_0x0;
  if (pFVar27 <= pFVar24) {
    uVar17 = pFVar27->FirstTri;
    uVar18 = pFVar27->LastTri;
    TVar3 = pFVar23[1].MinUV.field0_0x0;
    TVar4 = pFVar23[1].MaxUV.field0_0x0;
    uVar6 = *(undefined8 *)&pFVar23[1].UVArea;
    uVar7 = *(undefined8 *)((longlong)&pFVar23[1].UVScale.field0_0x0 + 4);
    uVar8 = *(undefined8 *)((longlong)&pFVar23[1].WorldScale.field0_0x0 + 4);
    uVar9 = *(undefined8 *)&pFVar23[1].WorldLengthSum;
    uVar10 = *(undefined8 *)((longlong)&pFVar23[1].PackingScaleU.field0_0x0 + 4);
    uVar11 = *(undefined8 *)((longlong)&pFVar23[1].PackingScaleV.field0_0x0 + 4);
    uVar12 = *(undefined8 *)((longlong)&pFVar23[1].PackingBias.field0_0x0 + 4);
    uVar13 = *(undefined8 *)(pFVar23[1].Join + 1);
    uVar14 = *(undefined8 *)(pFVar23[1].Join + 3);
    pFVar27->FirstTri = uVar15;
    pFVar27->LastTri = uVar16;
    pFVar23[1].MinUV.field0_0x0 = TVar2;
    uVar5 = *(undefined8 *)&pFVar25[-1].UVArea;
    pFVar23[1].MaxUV.field0_0x0 = pFVar25[-1].MaxUV.field0_0x0;
    *(undefined8 *)&pFVar23[1].UVArea = uVar5;
    uVar5 = *(undefined8 *)((longlong)&pFVar25[-1].WorldScale.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar23[1].UVScale.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&pFVar25[-1].UVScale.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar23[1].WorldScale.field0_0x0 + 4) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleU.field0_0x0 + 4);
    *(undefined8 *)&pFVar23[1].WorldLengthSum = *(undefined8 *)&pFVar25[-1].WorldLengthSum;
    *(undefined8 *)((longlong)&pFVar23[1].PackingScaleU.field0_0x0 + 4) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&pFVar25[-1].PackingBias.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar23[1].PackingScaleV.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleV.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar23[1].PackingBias.field0_0x0 + 4) = uVar5;
    uVar5 = *(undefined8 *)(pFVar25[-1].Join + 3);
    *(undefined8 *)(pFVar23[1].Join + 1) = *(undefined8 *)(pFVar25[-1].Join + 1);
    *(undefined8 *)(pFVar23[1].Join + 3) = uVar5;
    pFVar24->FirstTri = uVar17;
    pFVar24->LastTri = uVar18;
    pFVar25[-1].MinUV.field0_0x0 = TVar3;
    pFVar25[-1].MaxUV.field0_0x0 = TVar4;
    *(undefined8 *)&pFVar25[-1].UVArea = uVar6;
    *(undefined8 *)((longlong)&pFVar25[-1].UVScale.field0_0x0 + 4) = uVar7;
    *(undefined8 *)((longlong)&pFVar25[-1].WorldScale.field0_0x0 + 4) = uVar8;
    *(undefined8 *)&pFVar25[-1].WorldLengthSum = uVar9;
    *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleU.field0_0x0 + 4) = uVar10;
    *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleV.field0_0x0 + 4) = uVar11;
    *(undefined8 *)((longlong)&pFVar25[-1].PackingBias.field0_0x0 + 4) = uVar12;
    *(undefined8 *)(pFVar25[-1].Join + 1) = uVar13;
    *(undefined8 *)(pFVar25[-1].Join + 3) = uVar14;
    goto LAB_144350aa0;
  }
  uVar17 = pFVar26->FirstTri;
  uVar18 = pFVar26->LastTri;
  TVar3 = (pFVar26->MinUV).field0_0x0;
  TVar4 = (pFVar26->MaxUV).field0_0x0;
  uVar5 = *(undefined8 *)&pFVar26->UVArea;
  local_368._0_4_ = (int)local_368 + -1;
  uVar6 = *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4);
  uVar7 = *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4);
  lVar20 = (longlong)pFVar24 + (-0x60 - (longlong)pFVar26);
  uVar8 = *(undefined8 *)&pFVar26->WorldLengthSum;
  uVar9 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4);
  uVar10 = *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4);
  uVar11 = *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4);
  uVar12 = *(undefined8 *)(pFVar26->Join + 1);
  uVar13 = *(undefined8 *)(pFVar26->Join + 3);
  pFVar26->FirstTri = uVar15;
  pFVar26->LastTri = uVar16;
  (pFVar26->MinUV).field0_0x0 = TVar2;
  uVar14 = *(undefined8 *)&pFVar25[-1].UVArea;
  lVar20 = lVar20 / 6 + (lVar20 >> 0x3f);
  (pFVar26->MaxUV).field0_0x0 = pFVar25[-1].MaxUV.field0_0x0;
  *(undefined8 *)&pFVar26->UVArea = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar25[-1].WorldScale.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar26->UVScale).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&pFVar25[-1].UVScale.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar26->WorldScale).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleU.field0_0x0 + 4);
  *(undefined8 *)&pFVar26->WorldLengthSum = *(undefined8 *)&pFVar25[-1].WorldLengthSum;
  *(undefined8 *)((longlong)&(pFVar26->PackingScaleU).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)((longlong)&pFVar25[-1].PackingBias.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar26->PackingScaleV).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleV.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar26->PackingBias).field0_0x0 + 4) = uVar14;
  uVar14 = *(undefined8 *)(pFVar25[-1].Join + 3);
  *(undefined8 *)(pFVar26->Join + 1) = *(undefined8 *)(pFVar25[-1].Join + 1);
  *(undefined8 *)(pFVar26->Join + 3) = uVar14;
  pFVar24->FirstTri = uVar17;
  pFVar24->LastTri = uVar18;
  pFVar25[-1].MinUV.field0_0x0 = TVar3;
  pFVar25[-1].MaxUV.field0_0x0 = TVar4;
  *(undefined8 *)&pFVar25[-1].UVArea = uVar5;
  *(undefined8 *)((longlong)&pFVar25[-1].UVScale.field0_0x0 + 4) = uVar6;
  *(undefined8 *)((longlong)&pFVar25[-1].WorldScale.field0_0x0 + 4) = uVar7;
  *(undefined8 *)&pFVar25[-1].WorldLengthSum = uVar8;
  *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleU.field0_0x0 + 4) = uVar9;
  *(undefined8 *)((longlong)&pFVar25[-1].PackingScaleV.field0_0x0 + 4) = uVar10;
  *(undefined8 *)((longlong)&pFVar25[-1].PackingBias.field0_0x0 + 4) = uVar11;
  *(undefined8 *)(pFVar25[-1].Join + 1) = uVar12;
  *(undefined8 *)(pFVar25[-1].Join + 3) = uVar13;
  if ((lVar20 >> 4) - (lVar20 >> 0x3f) < ((longlong)pFVar22 - (longlong)pFVar27) / 0x60) {
    if (pFVar27 < pFVar22) {
      *ppFVar28 = pFVar27;
      ppFVar28[1] = pFVar22;
      *(int *)(ppFVar28 + 2) = (int)local_368;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar24 <= pFVar26 + 1) goto LAB_144350c71;
    pFVar22 = pFVar25 + -2;
    pFVar27 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar24) {
      *ppFVar28 = pFVar26;
      ppFVar28[1] = pFVar25 + -2;
      *(int *)(ppFVar28 + 2) = (int)local_368;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar22 <= pFVar27) goto LAB_144350c71;
  }
  iVar21 = (int)(((longlong)pFVar22 - (longlong)pFVar27) / 0x60) + 1;
  pFVar26 = pFVar27;
  if ((int)local_368 == 0) goto LAB_144350c61;
  goto LAB_144350a10;
}

// IntroSortInternal<FAllocator2D::FSegment,int,FIdentityFunctor,TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_>_> @ 144350d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAllocator2D::FSegment,int,FIdentityFunctor,TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_>_>
          (FSegment *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_> param_4)

{
  FSegment *pFVar1;
  FSegment FVar2;
  int iVar3;
  FSegment *pFVar4;
  FSegment **ppFVar5;
  FSegment *pFVar6;
  FSegment *pFVar7;
  FSegment *pFVar8;
  FSegment *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSegment *local_338;
  FSegment *local_328;
  FSegment *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_144350e30:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_144350e60:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000144350e69;
          goto LAB_144350e70;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->StartPos < pFVar1->StartPos) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_144350f2a;
      }
LAB_144350f19:
      local_338 = pFVar1;
      HeapSortInternal<FAllocator2D::FSegment,int,FIdentityFunctor,TDereferenceWrapper<FAllocator2D::FSegment,TLess<void>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_144350f2a:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000144350e69:
  if (pFVar4->StartPos <= pFVar9->StartPos) goto LAB_144350e60;
LAB_144350e70:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->StartPos <= pFVar6->StartPos);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_144350e60;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_144350f2a;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_144350f2a;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_144350f19;
  goto LAB_144350e30;
}

// RasterizeTriangle<16> @ 144350fc0

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __cdecl
RasterizeTriangle<16>(FAllocator2D *param_1,TVector2<float> *param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar31 = (param_2->field0_0x0)._s_0.X - __real_3f000000;
  fVar32 = (param_2->field0_0x0)._s_0.Y - __real_3f000000;
  fVar34 = param_2[2].field0_0x0._s_0.X - __real_3f000000;
  fVar35 = param_2[2].field0_0x0._s_0.Y - __real_3f000000;
  fVar36 = param_2[1].field0_0x0._s_0.X - __real_3f000000;
  fVar37 = param_2[1].field0_0x0._s_0.Y - __real_3f000000;
  fVar33 = fVar31;
  fVar38 = fVar32;
  if ((fVar31 - fVar36) * (fVar35 - fVar32) - (fVar32 - fVar37) * (fVar34 - fVar31) < 0.0) {
    fVar33 = fVar34;
    fVar38 = fVar35;
    fVar34 = fVar31;
    fVar35 = fVar32;
  }
  fVar31 = fVar36 * __real_41800000 + __real_3f000000;
  fVar34 = fVar34 * __real_41800000 + __real_3f000000;
  iVar25 = (int)(fVar33 * __real_41800000 + __real_3f000000);
  iVar14 = (int)fVar31;
  iVar27 = (int)fVar34;
  iVar26 = iVar14;
  if (iVar25 < iVar14) {
    iVar26 = iVar25;
  }
  fVar33 = fVar38 * __real_41800000 + __real_3f000000;
  fVar38 = fVar37 * __real_41800000 + __real_3f000000;
  iVar7 = iVar27;
  if (iVar26 < iVar27) {
    iVar7 = iVar26;
  }
  fVar35 = fVar35 * __real_41800000 + __real_3f000000;
  iVar24 = (int)fVar33;
  uVar22 = (int)((iVar7 + -1 >> 0x1f & 0xfU) + iVar7 + -1) >> 4;
  iVar26 = iVar14;
  if (iVar14 < iVar25) {
    iVar26 = iVar25;
  }
  iVar29 = (int)fVar38;
  iVar7 = iVar27;
  if (iVar27 < iVar26) {
    iVar7 = iVar26;
  }
  iVar26 = (int)fVar35;
  iVar20 = (int)((iVar7 + 0x1f >> 0x1f & 0xfU) + iVar7 + 0x1f) >> 4;
  iVar7 = iVar29;
  if (iVar24 < iVar29) {
    iVar7 = iVar24;
  }
  iVar15 = iVar26;
  if (iVar7 < iVar26) {
    iVar15 = iVar7;
  }
  uVar18 = (int)((iVar15 + -1 >> 0x1f & 0xfU) + iVar15 + -1) >> 4;
  if (iVar29 < iVar24) {
    iVar29 = iVar24;
  }
  if (iVar26 < iVar29) {
    iVar26 = iVar29;
  }
  iVar26 = (int)((iVar26 + 0x1f >> 0x1f & 0xfU) + iVar26 + 0x1f) >> 4;
  uVar13 = param_3;
  if ((int)uVar22 < param_3) {
    uVar13 = uVar22;
  }
  uVar22 = 0;
  if (0 < (int)uVar13) {
    uVar22 = uVar13;
  }
  if (iVar20 < param_3) {
    param_3 = iVar20;
  }
  iVar7 = 0;
  if (0 < param_3) {
    iVar7 = param_3;
  }
  uVar13 = param_4;
  if ((int)uVar18 < param_4) {
    uVar13 = uVar18;
  }
  uVar18 = 0;
  if (0 < (int)uVar13) {
    uVar18 = uVar13;
  }
  iVar24 = (int)fVar33;
  if (iVar26 < param_4) {
    param_4 = iVar26;
  }
  iVar29 = -1;
  iVar26 = 0;
  if (0 < param_4) {
    iVar26 = param_4;
  }
  iVar20 = iVar25 - iVar14;
  iVar14 = iVar14 - iVar27;
  iVar27 = iVar27 - iVar25;
  iVar15 = iVar24 - (int)fVar38;
  iVar19 = (int)fVar38 - (int)fVar35;
  iVar23 = (int)fVar35 - iVar24;
  if ((iVar15 < 0) || ((iVar15 == 0 && (0 < iVar20)))) {
    iVar12 = 0;
  }
  else {
    iVar12 = -1;
  }
  if ((iVar19 < 0) || ((iVar19 == 0 && (0 < iVar14)))) {
    iVar21 = 0;
  }
  else {
    iVar21 = -1;
  }
  if ((iVar23 < 0) || ((iVar23 == 0 && (0 < iVar27)))) {
    iVar29 = 0;
  }
  iVar3 = -iVar15;
  if (-iVar15 < 0) {
    iVar3 = iVar15;
  }
  iVar8 = -iVar20;
  if (-iVar20 < 0) {
    iVar8 = iVar20;
  }
  iVar4 = -iVar19;
  if (-iVar19 < 0) {
    iVar4 = iVar19;
  }
  iVar9 = -iVar14;
  if (-iVar14 < 0) {
    iVar9 = iVar14;
  }
  iVar5 = -iVar23;
  if (-iVar23 < 0) {
    iVar5 = iVar23;
  }
  iVar10 = -iVar27;
  if (-iVar27 < 0) {
    iVar10 = iVar27;
  }
  do {
    if (iVar26 <= (int)uVar18) {
      return;
    }
    if ((int)uVar22 < iVar7) {
      uVar17 = (uVar18 * iVar20 - iVar15 * uVar22) * 0x10 +
               (iVar15 * iVar25 - iVar20 * iVar24) + iVar12 + (iVar3 + iVar8) * 0x10;
      uVar16 = (uVar18 * iVar14 - iVar19 * uVar22) * 0x10 +
               (iVar19 * (int)fVar31 - iVar14 * (int)fVar38) + iVar21 + (iVar4 + iVar9) * 0x10;
      uVar28 = (uVar18 * iVar27 - iVar23 * uVar22) * 0x10 +
               (iVar23 * (int)fVar34 - iVar27 * (int)fVar35) + iVar29 + (iVar5 + iVar10) * 0x10;
      uVar13 = uVar22;
      do {
        if (-1 < (int)(uVar28 | uVar16 | uVar17)) {
          uVar30 = uVar18 * param_1->Pitch + (uVar13 >> 6);
          uVar11 = 0;
          if ((int)uVar30 < (param_1->Bits).ArrayNum) {
            uVar11 = ~uVar30 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->Bits).AllocatorInstance.Data;
          *(ulonglong *)(pFVar1 + (longlong)(int)uVar30 * 8) =
               *(ulonglong *)(pFVar1 + (longlong)(int)uVar30 * 8) | 1L << (uVar13 & 0x3f);
          if (param_1->RasterHeight <= uVar18) {
            param_1->RasterHeight = uVar18 + 1;
          }
          if (param_1->RasterWidth <= uVar13) {
            param_1->RasterWidth = uVar13 + 1;
          }
        }
        uVar13 = uVar13 + 1;
        uVar28 = uVar28 + iVar23 * -0x10;
        uVar16 = uVar16 + iVar19 * -0x10;
        uVar17 = uVar17 + iVar15 * -0x10;
      } while ((int)uVar13 < iVar7);
    }
    uVar18 = uVar18 + 1;
  } while( true );
}

// ~<lambda_1> @ 144351eb0

void __thiscall
`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>::
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
                    /* WARNING: Could not recover jumptable at 0x000144351f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 144351f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLayoutUV::FChartPacker::FindBestPacking_::__l24::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0> @ 144351f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FLayoutUV::FChartPacker::PackCharts_::__l9::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`9'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1> @ 144351f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FLayoutUV::FChartPacker::FindBestPacking_::__l24::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0> @ 144351f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FLayoutUV::FChartPacker::PackCharts_::__l11::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`11'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// `scalar_deleting_destructor' @ 1443525d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144352620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`9'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144352660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443526a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`11'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443526e0

void * __thiscall
FOverlappingCornersArrayMeshView::_scalar_deleting_destructor_
          (FOverlappingCornersArrayMeshView *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMeshView_FLayoutUV__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144352720

void * __thiscall FLayoutUV::IMeshView::_scalar_deleting_destructor_(IMeshView *this,uint param_1)

{
  *this = (IMeshView)&___7IMeshView_FLayoutUV__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_MeshUtilitiesCommon @ 14435d910

void __cdecl IMPLEMENT_MODULE_MeshUtilitiesCommon(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogLayoutUV'' @ 15036b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLayoutUV__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLayoutUV);
  return;
}


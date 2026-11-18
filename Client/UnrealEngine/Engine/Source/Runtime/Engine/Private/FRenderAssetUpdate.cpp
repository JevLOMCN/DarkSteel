// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// Abort @ 147344d10

void __thiscall FRenderAssetUpdate::Abort(FRenderAssetUpdate *this)

{
  if (this->TaskState != TS_Done) {
    this->bIsCancelled = true;
  }
  return;
}

// AddRef @ 1473456a0

FReturnedRefCountValue __thiscall FRenderAssetUpdate::AddRef(FRenderAssetUpdate *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  int *in_RDX;
  
  LOCK();
  pFVar1 = &this->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  *in_RDX = iVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// CanAbandon @ 147346e80

bool __thiscall FRenderAssetUpdate::CanAbandon(FRenderAssetUpdate *this)

{
  return false;
}

// GetRefCount @ 1473507c0

uint __thiscall FRenderAssetUpdate::GetRefCount(FRenderAssetUpdate *this)

{
  return (this->NumRefs).Counter;
}

// OnAbandoned @ 1473524b0

void __thiscall FRenderAssetUpdate::OnAbandoned(FRenderAssetUpdate *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanAbandon()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RenderAssetUpdate.h"
                       ,0x65,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->StreamableAsset = (UStreamableRenderAsset *)0x0;
  return;
}

// FRenderAssetUpdate @ 148778900

FRenderAssetUpdate * __thiscall
FRenderAssetUpdate::FRenderAssetUpdate(FRenderAssetUpdate *this,UStreamableRenderAsset *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  FRenderAssetUpdate *pFVar7;
  
  this->_padding_ = (longlong)&___7FRenderAssetUpdate__6B_;
  (this->ResourceState).field0_0x0 = (param_1->CachedSRRState).field0_0x0;
  this->CurrentFirstLODIdx =
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.MaxNumLODs -
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
  this->PendingFirstLODIdx =
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.MaxNumLODs -
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  this->StreamableAsset = param_1;
  this->ScheduledGTTasks = 0;
  this->ScheduledRenderTasks = 0;
  this->ScheduledAsyncTasks = 0;
  (this->TaskSynchronization).Counter = 0;
  this->bIsCancelled = false;
  this->bDeferExecution = false;
  this->bSuccess = false;
  this->TaskState = TS_Init;
  (this->NumRefs).Counter = 0;
  if ((*(byte *)&(this->ResourceState).field0_0x0 & 1) != 0) {
    bVar1 = (this->ResourceState).field0_0x0._s_0.NumNonOptionalLODs;
    bVar2 = (this->ResourceState).field0_0x0._s_0.NumNonStreamingLODs;
    if (((((bVar2 <= bVar1) &&
          (bVar3 = (this->ResourceState).field0_0x0._s_0.MaxNumLODs, bVar1 <= bVar3)) &&
         (bVar3 < 0x11)) &&
        ((bVar1 = (this->ResourceState).field0_0x0._s_0.NumResidentLODs, bVar2 <= bVar1 &&
         (bVar1 <= bVar3)))) &&
       ((bVar4 = (this->ResourceState).field0_0x0._s_0.NumRequestedLODs, bVar2 <= bVar4 &&
        ((bVar4 <= bVar3 && (bVar1 != bVar4)))))) {
      return this;
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8014357864225177769>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                     ,0xa9,"ResourceState.IsValidForStreamingRequest()");
  if (!bVar6) {
    this->bIsCancelled = true;
    return this;
  }
  pcVar5 = (code *)swi(3);
  pFVar7 = (FRenderAssetUpdate *)(*pcVar5)();
  return pFVar7;
}

// ~FRenderAssetUpdate @ 14877f330

void __thiscall FRenderAssetUpdate::~FRenderAssetUpdate(FRenderAssetUpdate *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FRenderAssetUpdate__6B_;
  if (((this->TaskSynchronization).Counter != 0) || (this->TaskState != TS_Done)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskSynchronization.GetValue() == 0 && TaskState == TS_Done",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0xb2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// DoLock @ 1487940d0

ETaskState __thiscall FRenderAssetUpdate::DoLock(FRenderAssetUpdate *this)

{
  ETaskState EVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  EVar1 = this->TaskState;
  this->TaskState = TS_Locked;
  return EVar1;
}

// DoUnlock @ 148794670

void __thiscall FRenderAssetUpdate::DoUnlock(FRenderAssetUpdate *this,ETaskState param_1)

{
  this->TaskState = param_1;
                    /* WARNING: Could not recover jumptable at 0x000148794677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// Release @ 1487b6e10

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FRenderAssetUpdate::Release(FRenderAssetUpdate *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  LOCK();
  pFVar1 = &this->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar5 = iVar2 - 1;
  if (uVar5 == 0) {
    if (this->TaskState == TS_Done) {
      if ((this->TaskSynchronization).Counter == 0) {
        (**(code **)this->_padding_)(this,1);
        return 0;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8014357864225177786>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                         ,0xba,"TaskState == TS_Done");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    if (1 < (byte)LogContentStreaming._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    }
  }
  return uVar5;
}

// ScheduleAsyncTask @ 1487c07b0

void __thiscall FRenderAssetUpdate::ScheduleAsyncTask(FRenderAssetUpdate *this)

{
  code *pcVar1;
  FQueuedThreadPool *pFVar2;
  bool bVar3;
  FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *this_00;
  
  if (this->TaskState != TS_Locked) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0x145,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ScheduledAsyncTasks = this->ScheduledAsyncTasks + 1;
  this_00 = ::operator_new(0x40);
  if (this_00 == (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)0x0) {
    this_00 = (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)&___7__FAutoDeleteAsyncTask_VFMipUpdateTask_FRenderAssetUpdate____6B_;
    (this_00->Task).PendingUpdate.Reference = this;
    LOCK();
    (this->NumRefs).Counter = (this->NumRefs).Counter + 1;
    UNLOCK();
  }
  pFVar2 = GThreadPool;
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_);
  if (pFVar2 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c084c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2,this_00,3);
    return;
  }
  FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::DoWork(this_00);
  return;
}

// ScheduleGTTask @ 1487c0870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FRenderAssetUpdate::ScheduleGTTask(FRenderAssetUpdate *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this_00;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  
  if (this->TaskState != TS_Locked) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0x11e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = IsInGameThread();
  if (bVar4) {
    Tick(this,TT_GameThread);
    return;
  }
  this->ScheduledGTTasks = this->ScheduledGTTasks + 1;
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFRenderAssetUpdateTickGTTask____6B_;
  }
  this_00[1]._padding_ = (longlong)this;
  LOCK();
  (this->NumRefs).Counter = (this->NumRefs).Counter + 1;
  UNLOCK();
  UE::Tasks::Private::TranslatePriority(GameThread,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res10[0],local_res8[0],None);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe0);
  }
  else {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xe0);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001487c0975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)this_00->_padding_)(this_00,1);
      return;
    }
  }
  return;
}

// ScheduleRenderTask @ 1487c0990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRenderAssetUpdate::ScheduleRenderTask(FRenderAssetUpdate *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FRenderAssetUpdate *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FRenderAssetUpdate *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->TaskState != TS_Locked) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ScheduledRenderTasks = this->ScheduledRenderTasks + 1;
  LOCK();
  (this->NumRefs).Counter = (this->NumRefs).Counter + 1;
  UNLOCK();
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderAssetUpdate::ScheduleRenderTask_::__l2::TSTR_RenderAssetUpdateCommand310>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::TSTR_RenderAssetUpdateCommand310>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// Tick @ 1487c82e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRenderAssetUpdate::Tick(FRenderAssetUpdate *this,EThreadType param_1)

{
  longlong *plVar1;
  ETaskState EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  ETaskState EVar8;
  TEventRef<unsigned_int> TVar9;
  UPackage *pUVar10;
  FWriteBuffer *pFVar11;
  undefined8 uVar12;
  undefined1 auStack_c8 [36];
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  longlong local_8c;
  undefined8 local_84;
  longlong local_7c;
  FName local_74;
  FName local_6c;
  FName local_64;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->TaskState == TS_Done) {
    return;
  }
  if ((param_1 == TT_None) || ((param_1 == TT_Render && (!GIsThreadedRendering)))) {
    iVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  }
  else {
    if (param_1 != TT_GameRunningAsync) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
      goto LAB_1487c8356;
    }
    iVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
    param_1 = TT_Async;
  }
  if (iVar7 == 0) {
    return;
  }
LAB_1487c8356:
  EVar2 = this->TaskState;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this->TaskState = TS_Locked;
  do {
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_a4 = 0;
      TVar9 = (TEventRef<unsigned_int>)&local_a4;
    }
    else {
      local_8c = this->StreamableAsset->_padding_;
      TVar9 = FStringTrace::GetNameRef(&local_74);
    }
    uVar12 = *(undefined8 *)TVar9;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_9c = 0;
      TVar9 = (TEventRef<unsigned_int>)&local_9c;
    }
    else {
      local_84 = *(undefined8 *)(this->StreamableAsset->_padding_ + 0x18);
      TVar9 = FStringTrace::GetNameRef(&local_6c);
    }
    uVar3 = *(undefined8 *)TVar9;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_94 = 0;
      TVar9 = (TEventRef<unsigned_int>)&local_94;
    }
    else {
      pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->StreamableAsset);
      local_7c = pUVar10->_padding_;
      TVar9 = FStringTrace::GetNameRef(&local_64);
    }
    uVar4 = *(undefined8 *)TVar9;
    bVar6 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
      bVar6 = true;
      *local_58 = (int)uVar12;
      local_58[1] = (int)uVar3;
      local_58[2] = (int)uVar4;
      *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
    }
    if ((EVar2 == TS_Locked) || (this->bIsCancelled != false)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    EVar8 = (**(code **)(this->_padding_ + 0x40))(this,param_1,uVar12);
    if (bVar6) {
      lVar5 = *plVar1;
      if (*(char *)(lVar5 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar11 = *(FWriteBuffer **)(lVar5 + 0x20);
      if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
        pFVar11 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar11->Cursor = '\n';
      pFVar11->Cursor = pFVar11->Cursor + 1;
      pFVar11->Committed = pFVar11->Cursor;
    }
  } while (EVar8 == TS_Locked);
  if (EVar2 != TS_Locked) {
    this->TaskState = EVar8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}


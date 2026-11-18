// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator() @ 147342dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AddPrimitivesTask_Execute_Async>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AddPrimitivesTask_Execute_Async ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AddPrimitivesTask_Execute_Async>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,"STAT_AddPrimitivesTask_Execute_Async");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Execute_Async,
                   *pFVar4,L"STAT_AddPrimitivesTask_Execute_Async","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_AddPrimitivesTask_Execute_Async;
  if (StatPtr_STAT_AddPrimitivesTask_Execute_Async ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AddPrimitivesTask_Execute_Async>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_AddPrimitivesTask_Execute_Async");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AddPrimitivesTask_Execute_Async>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Execute_Async,
                         *pFVar4,L"STAT_AddPrimitivesTask_Execute_Async","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute
              (*(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
                 **)((longlong)this + 8),*(FSceneInterface **)this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                   ,0x11e);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute
              (*(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
                 **)((longlong)this + 8),*(FSceneInterface **)this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// operator() @ 1473430f0

void __thiscall
`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelGameThread);
  plVar1 = (longlong *)**(longlong **)this;
  lVar3 = plVar1[1];
  plVar6 = (longlong *)*plVar1;
  plVar7 = plVar6 + (longlong)(int)lVar3 * 2;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (plVar6 == plVar7) goto LAB_1473431f8;
    if (param_1 < (int)plVar6[1]) break;
    param_1 = param_1 - (int)plVar6[1];
    plVar6 = plVar6 + 2;
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + (longlong)param_1 * 8));
  if ((pUVar5 != (UObject *)0x0) && ((pUVar5[3].field_0x20 & 1) != 0)) {
    if (((pUVar5[3].field_0x20 & 2) == 0) && (**(char **)((longlong)this + 0x10) != '\0')) {
      (**(code **)(*(longlong *)pUVar5 + 0x388))(pUVar5,0);
    }
    else if (*(longlong *)&pUVar5[0x21].field_0x8 == 0) {
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 8))
                ((longlong *)**(undefined8 **)((longlong)this + 8),pUVar5);
    }
  }
LAB_1473431f8:
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// Execute @ 14734cad0

void __cdecl
FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute
          (TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
           *param_1,FSceneInterface *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FSceneInterface *local_res10;
  undefined1 local_res18 [8];
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  *local_res20;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  ***local_50;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  **local_48;
  FSceneInterface **local_40;
  undefined1 *local_38;
  
  local_res10 = param_2;
  if (param_2 == (FSceneInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x13b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    local_res8[0] = 1;
  }
  else {
    local_res8[0] = 0;
  }
  iVar1 = param_1->ArrayNum;
  iVar7 = 0;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    iVar7 = iVar7 + *(int *)(pFVar5 + 8);
    pFVar5 = pFVar5 + 0x10;
  }
  local_48 = &local_res20;
  local_40 = &local_res10;
  local_68.DataPtr = (void **)0x0;
  local_38 = local_res8;
  local_68.ArrayNum = 0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute'::__l2::<lambda_2>,void,int>
             ::Call;
  local_50 = &local_48;
  local_res20 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar7,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res10._0_1_,None,&local_68);
  return;
}

// Execute @ 14734cc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Execute
          (UPrimitiveComponent *param_1,FSceneInterface *param_2,bool param_3)

{
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    if (((param_1->field_0x98 & 2) == 0) && (param_3)) {
                    /* WARNING: Could not recover jumptable at 0x00014734cca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x388))(param_1,0);
      return;
    }
    if (param_1->SceneProxy == (FPrimitiveSceneProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014734ccbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2->_padding_ + 8))(param_2,param_1);
      return;
    }
  }
  return;
}

// IsCompleted @ 1473517a0

bool __thiscall FAsyncAddPrimitiveQueue::FAddPrimitivesTask::IsCompleted(FAddPrimitivesTask *this)

{
  if ((this->Task != (TTask<void>)0x0) && (*(char *)((longlong)this->Task + 0xd0) == '\0')) {
    return false;
  }
  return true;
}

// IsValid @ 147351a10

bool __thiscall FAsyncAddPrimitiveQueue::FAddPrimitivesTask::IsValid(FAddPrimitivesTask *this)

{
  return this->Task != (TTask<void>)0x0;
}

// Launch @ 147351aa0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch
          (FAddPrimitivesTask *this,
          TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
          *param_1,FSceneInterface *param_2)

{
  TTask<void> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TTask<void> TVar5;
  code *pcVar6;
  bool bVar7;
  Type TVar8;
  void *this_00;
  TTask<void> this_01;
  undefined8 *puVar9;
  bool local_res8 [8];
  longlong local_38;
  <lambda_1> local_30;
  
  pTVar1 = &this->Task;
  if (((this->Task != (TTask<void>)0x0) && (*(char *)((longlong)this->Task + 0xd0) == '\0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                         ,0x11a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (TTask<void>)0x0;
  if (this != (FAddPrimitivesTask *)param_1) {
    DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
              ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                *)(this->Batches).AllocatorInstance.Data,(this->Batches).ArrayNum);
    pFVar4 = (this->Batches).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Batches).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Batches).ArrayNum = param_1->ArrayNum;
    (this->Batches).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  local_30.InScene = param_2;
  local_30.__this = this;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (void *)0x0) {
    this_01 = (TTask<void>)
              UE::Tasks::Private::
              TExecutableTask<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>_>
              ::
              TExecutableTask<_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch_::__l2::<lambda_1>_>
                        (this_00,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp(284)"
                         ,&local_30,Default,None,None);
  }
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar8 = UE::Tasks::Private::TranslatePriority
                      ((ETaskPriority)((ulonglong)*(undefined8 *)((longlong)this_01 + 0xb0) >> 0x3b)
                       & (Inherit|Default),*(EExtendedTaskPriority *)((longlong)this_01 + 0x44));
    TaskTrace::Launched(*(ulong64 *)((longlong)this_01 + 0x50),
                        (wchar_t *)
                        (*(ulonglong *)((longlong)this_01 + 0xb0) >> 6 & 0x1fffffffffffff),true,
                        TVar8,0x100);
  }
  local_res8[0] = true;
  UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)this_01,local_res8);
  if (pTVar1 == (TTask<void> *)&local_38) {
    if (this_01 == (TTask<void>)0x0) {
      return;
    }
    LOCK();
    piVar2 = (int *)((longlong)this_01 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    puVar9 = *(undefined8 **)this_01;
  }
  else {
    TVar5 = *pTVar1;
    *pTVar1 = this_01;
    if (TVar5 == (TTask<void>)0x0) {
      return;
    }
    LOCK();
    piVar2 = (int *)((longlong)TVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    puVar9 = *(undefined8 **)TVar5;
    this_01 = TVar5;
  }
  (*(code *)*puVar9)(this_01,1);
  return;
}

// Reset @ 147355e50

void __thiscall FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Reset(FAddPrimitivesTask *this)

{
  TTask<void> *pTVar1;
  int *piVar2;
  int iVar3;
  TTask<void> TVar4;
  TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar5;
  code *pcVar6;
  bool bVar7;
  longlong local_18 [2];
  
  pTVar1 = &this->Task;
  if ((this->Task != (TTask<void>)0x0) && (*(char *)((longlong)this->Task + 0xd0) == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x113,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar1 != (TTask<void> *)local_18) {
    TVar4 = *pTVar1;
    *pTVar1 = (TTask<void>)0x0;
    if (TVar4 != (TTask<void>)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)TVar4 + 0x30);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)TVar4)(TVar4,1);
      }
    }
  }
  piVar2 = &(this->Batches).ArrayMax;
  pTVar5 = (TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
            *)(this->Batches).AllocatorInstance.Data;
  iVar3 = (this->Batches).ArrayNum;
  if (-1 < *piVar2) {
    DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
              (pTVar5,iVar3);
    (this->Batches).ArrayNum = 0;
    return;
  }
  DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
            (pTVar5,iVar3);
  (this->Batches).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  return;
}

// Wait @ 14735eea0

void __thiscall FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Wait(FAddPrimitivesTask *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Task != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->Task);
  }
  if ((this->Task != (TTask<void>)0x0) && (*(char *)((longlong)this->Task + 0xd0) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x161,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


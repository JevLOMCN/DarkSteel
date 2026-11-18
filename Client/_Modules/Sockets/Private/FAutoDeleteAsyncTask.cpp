// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 4

// FAutoDeleteAsyncTask<FGetAddressInfoTask><ISocketSubsystem_*,wchar_t_const_*_&,wchar_t_const_*_&,enum_EAddressInfoFlags_&,FName_const_&,enum_ESocketType_&,TFunction<void___cdecl(FAddressInfoResult)>_&> @ 143109090

FAutoDeleteAsyncTask<FGetAddressInfoTask> * __thiscall
FAutoDeleteAsyncTask<FGetAddressInfoTask>::
FAutoDeleteAsyncTask<FGetAddressInfoTask><ISocketSubsystem_*,wchar_t_const_*_&,wchar_t_const_*_&,enum_EAddressInfoFlags_&,FName_const_&,enum_ESocketType_&,TFunction<void___cdecl(FAddressInfoResult)>_&>
          (FAutoDeleteAsyncTask<FGetAddressInfoTask> *this,ISocketSubsystem **param_1,
          wchar_t **param_2,wchar_t **param_3,EAddressInfoFlags *param_4,FName *param_5,
          ESocketType *param_6,TFunction<void___cdecl(FAddressInfoResult)> *param_7)

{
  FString *pFVar1;
  int *piVar2;
  EAddressInfoFlags EVar3;
  ESocketType EVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FString local_78;
  FString local_68;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAutoDeleteAsyncTask_VFGetAddressInfoTask____6B_;
  local_30 = (longlong *)0x0;
  local_58 = *(longlong *)param_7;
  if (local_58 != 0) {
    puVar6 = (undefined8 *)&param_7->field_0x10;
    if (*(undefined8 **)&param_7->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_7->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_48);
  }
  EVar4 = *param_6;
  EVar3 = *param_4;
  ::FString::FString(&local_68,*param_3);
  ::FString::FString(&local_78,*param_2);
  FVar5.Data = local_78.Data.AllocatorInstance.Data;
  pFVar1 = &(this->Task).QueryHost;
  (this->Task).SocketSubsystem = *param_1;
  piVar2 = &(this->Task).QueryHost.Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).QueryHost.Data.ArrayNum = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_78.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar5.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FVar5.Data = local_68.Data.AllocatorInstance.Data;
  pFVar1 = &(this->Task).QueryService;
  piVar2 = &(this->Task).QueryService.Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).QueryService.Data.ArrayNum = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_68.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar5.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  (this->Task).QueryFlags = EVar3;
  (this->Task).QueryProtocol = *param_5;
  (this->Task).QuerySocketType = EVar4;
  *(longlong *)&(this->Task).CallbackFunction = local_58;
  *(undefined8 *)&(this->Task).CallbackFunction.field_0x28 = 0;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)*plVar7)();
    if (local_58 != 0) {
      plVar7 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar7 = local_30;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this;
}

// Abandon @ 14310c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FGetAddressInfoTask>::Abandon(FAutoDeleteAsyncTask<FGetAddressInfoTask> *this)

{
  int *piVar1;
  ISocketSubsystem *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_118 [32];
  LARGE_INTEGER LStack_b8;
  FName FStack_b0;
  FStatMessage FStack_a0;
  undefined1 auStack_90 [72];
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FGetAddressInfoTask::GetStatId'::__l2::FStat_FGetAddressInfoTask>::
      FThreadSafeStaticStat<_FGetAddressInfoTask::GetStatId_::__l2::FStat_FGetAddressInfoTask>
                (&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FGetAddressInfoTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FGetAddressInfoTask;
  if (_StatPtr_FGetAddressInfoTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&FStack_a0,"FGetAddressInfoTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FGetAddressInfoTask,*pFVar8,L"FGetAddressInfoTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_b0.ComparisonIndex.Value = 0;
  FStack_b0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_b8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_b8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_b8.s.LowPart = FVar13.Value;
        LStack_b8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_b8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_b8.s.LowPart = FVar13.Value;
      LStack_b8.s.HighPart = uVar12;
      FStack_b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      FVar13.Value = FStack_b0.ComparisonIndex.Value;
      goto LAB_14310e9f9;
    }
  }
  bVar6 = false;
  FVar14 = FStack_b0;
  FVar13.Value = 0;
LAB_14310e9f9:
  pwVar15 = L"";
  pIVar2 = (this->Task).SocketSubsystem;
  if ((this->Task).QueryService.Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->Task).QueryService.Data.AllocatorInstance.Data;
  }
  if ((this->Task).QueryHost.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)(this->Task).QueryHost.Data.AllocatorInstance.Data;
  }
  puVar10 = (undefined8 *)(**(code **)(pIVar2->_padding_ + 0x40))(pIVar2,auStack_90,pwVar15,pwVar17)
  ;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).CallbackFunction);
  pcVar3 = *(code **)&(this->Task).CallbackFunction;
  plVar4 = *(longlong **)&(this->Task).CallbackFunction.field_0x28;
  plVar16 = (longlong *)&(this->Task).CallbackFunction.field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar11 = (**(code **)(*plVar16 + 8))(plVar16);
  (*pcVar3)(uVar11,puVar10);
  DestructItems<FAddressInfoResultData,int>
            ((FAddressInfoResultData *)puVar10[7],*(int *)(puVar10 + 8));
  if ((void *)puVar10[7] != (void *)0x0) {
    FMemory::Free((void *)puVar10[7]);
  }
  if ((void *)puVar10[4] != (void *)0x0) {
    FMemory::Free((void *)puVar10[4]);
  }
  if ((void *)puVar10[2] != (void *)0x0) {
    FMemory::Free((void *)puVar10[2]);
  }
  if ((void *)*puVar10 != (void *)0x0) {
    FMemory::Free((void *)*puVar10);
  }
  if (this != (FAutoDeleteAsyncTask<FGetAddressInfoTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_a0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_a0.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&LStack_b8);
      FStack_a0.StatData.Pad[4] = '\0';
      FStack_a0.StatData.Pad[5] = '\0';
      FStack_a0.StatData.Pad[6] = '\0';
      FStack_a0.StatData.Pad[7] = '\0';
      FStack_a0.StatData.Pad[0] = LStack_b8.s.LowPart._0_1_;
      FStack_a0.StatData.Pad[1] = LStack_b8.s.LowPart._1_1_;
      FStack_a0.StatData.Pad[2] = LStack_b8.s.LowPart._2_1_;
      FStack_a0.StatData.Pad[3] = LStack_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_a0);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 14310e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FGetAddressInfoTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FGetAddressInfoTask> *this)

{
  int *piVar1;
  ISocketSubsystem *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_118 [32];
  LARGE_INTEGER LStack_b8;
  FName FStack_b0;
  FStatMessage FStack_a0;
  undefined1 auStack_90 [72];
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FGetAddressInfoTask::GetStatId'::__l2::FStat_FGetAddressInfoTask>::
      FThreadSafeStaticStat<_FGetAddressInfoTask::GetStatId_::__l2::FStat_FGetAddressInfoTask>
                (&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FGetAddressInfoTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FGetAddressInfoTask;
  if (_StatPtr_FGetAddressInfoTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&FStack_a0,"FGetAddressInfoTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FGetAddressInfoTask,*pFVar8,L"FGetAddressInfoTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_b0.ComparisonIndex.Value = 0;
  FStack_b0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_b8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_b8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_b8.s.LowPart = FVar13.Value;
        LStack_b8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_b8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_b8.s.LowPart = FVar13.Value;
      LStack_b8.s.HighPart = uVar12;
      FStack_b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      FVar13.Value = FStack_b0.ComparisonIndex.Value;
      goto LAB_14310e9f9;
    }
  }
  bVar6 = false;
  FVar14 = FStack_b0;
  FVar13.Value = 0;
LAB_14310e9f9:
  pwVar15 = L"";
  pIVar2 = (this->Task).SocketSubsystem;
  if ((this->Task).QueryService.Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->Task).QueryService.Data.AllocatorInstance.Data;
  }
  if ((this->Task).QueryHost.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)(this->Task).QueryHost.Data.AllocatorInstance.Data;
  }
  puVar10 = (undefined8 *)(**(code **)(pIVar2->_padding_ + 0x40))(pIVar2,auStack_90,pwVar15,pwVar17)
  ;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).CallbackFunction);
  pcVar3 = *(code **)&(this->Task).CallbackFunction;
  plVar4 = *(longlong **)&(this->Task).CallbackFunction.field_0x28;
  plVar16 = (longlong *)&(this->Task).CallbackFunction.field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar11 = (**(code **)(*plVar16 + 8))(plVar16);
  (*pcVar3)(uVar11,puVar10);
  DestructItems<FAddressInfoResultData,int>
            ((FAddressInfoResultData *)puVar10[7],*(int *)(puVar10 + 8));
  if ((void *)puVar10[7] != (void *)0x0) {
    FMemory::Free((void *)puVar10[7]);
  }
  if ((void *)puVar10[4] != (void *)0x0) {
    FMemory::Free((void *)puVar10[4]);
  }
  if ((void *)puVar10[2] != (void *)0x0) {
    FMemory::Free((void *)puVar10[2]);
  }
  if ((void *)*puVar10 != (void *)0x0) {
    FMemory::Free((void *)*puVar10);
  }
  if (this != (FAutoDeleteAsyncTask<FGetAddressInfoTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_a0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_a0.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&LStack_b8);
      FStack_a0.StatData.Pad[4] = '\0';
      FStack_a0.StatData.Pad[5] = '\0';
      FStack_a0.StatData.Pad[6] = '\0';
      FStack_a0.StatData.Pad[7] = '\0';
      FStack_a0.StatData.Pad[0] = LStack_b8.s.LowPart._0_1_;
      FStack_a0.StatData.Pad[1] = LStack_b8.s.LowPart._1_1_;
      FStack_a0.StatData.Pad[2] = LStack_b8.s.LowPart._2_1_;
      FStack_a0.StatData.Pad[3] = LStack_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_a0);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 14310e860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FGetAddressInfoTask>::DoWork(FAutoDeleteAsyncTask<FGetAddressInfoTask> *this)

{
  int *piVar1;
  ISocketSubsystem *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_118 [32];
  LARGE_INTEGER local_b8;
  FName local_b0;
  FStatMessage local_a0;
  undefined1 local_90 [72];
  FInheritedContextScope local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FGetAddressInfoTask::GetStatId'::__l2::FStat_FGetAddressInfoTask>::
      FThreadSafeStaticStat<_FGetAddressInfoTask::GetStatId_::__l2::FStat_FGetAddressInfoTask>
                (&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FGetAddressInfoTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FGetAddressInfoTask;
  if (_StatPtr_FGetAddressInfoTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_a0,"FGetAddressInfoTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FGetAddressInfoTask,*pFVar8,L"FGetAddressInfoTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_b8.s,(pTVar9->StatDescriptionAnsi).Ptr)
      ;
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.s.LowPart = FVar13.Value;
        local_b8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_b8.s.LowPart = FVar13.Value;
      local_b8.s.HighPart = uVar12;
      local_b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      FVar13.Value = local_b0.ComparisonIndex.Value;
      goto LAB_14310e9f9;
    }
  }
  bVar6 = false;
  FVar14 = local_b0;
  FVar13.Value = 0;
LAB_14310e9f9:
  pwVar15 = L"";
  pIVar2 = (this->Task).SocketSubsystem;
  if ((this->Task).QueryService.Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->Task).QueryService.Data.AllocatorInstance.Data;
  }
  if ((this->Task).QueryHost.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)(this->Task).QueryHost.Data.AllocatorInstance.Data;
  }
  puVar10 = (undefined8 *)(**(code **)(pIVar2->_padding_ + 0x40))(pIVar2,local_90,pwVar15,pwVar17);
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->Task).CallbackFunction);
  pcVar3 = *(code **)&(this->Task).CallbackFunction;
  plVar4 = *(longlong **)&(this->Task).CallbackFunction.field_0x28;
  plVar16 = (longlong *)&(this->Task).CallbackFunction.field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar11 = (**(code **)(*plVar16 + 8))(plVar16);
  (*pcVar3)(uVar11,puVar10);
  DestructItems<FAddressInfoResultData,int>
            ((FAddressInfoResultData *)puVar10[7],*(int *)(puVar10 + 8));
  if ((void *)puVar10[7] != (void *)0x0) {
    FMemory::Free((void *)puVar10[7]);
  }
  if ((void *)puVar10[4] != (void *)0x0) {
    FMemory::Free((void *)puVar10[4]);
  }
  if ((void *)puVar10[2] != (void *)0x0) {
    FMemory::Free((void *)puVar10[2]);
  }
  if ((void *)*puVar10 != (void *)0x0) {
    FMemory::Free((void *)*puVar10);
  }
  if (this != (FAutoDeleteAsyncTask<FGetAddressInfoTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_a0.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_b8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_48.MetaScope);
  FMemScope::~FMemScope(&local_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_48,local_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// Abandon @ 14cc33c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_>::Abandon
          (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *this)

{
  int *piVar1;
  FAsyncTask<FConstrainedMeshDeformerTask> *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FName FStack_48;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_TDeleterTask = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&FStack_50,"TDeleterTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_TDeleterTask;
  if (_StatPtr_TDeleterTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&FStack_48,"TDeleterTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar11.Value;
        FStack_78.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar11.Value;
      LStack_80.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14cc5364c;
    }
  }
  bVar5 = false;
  FVar12 = FStack_70;
LAB_14cc5364c:
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->Task).Task,true,false);
  pFVar2 = (this->Task).Task;
  if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter == 0) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Task->IsDone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\ModelingTaskTypes.h"
                       ,0x2b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Task).Task;
  if (pFVar2 != (FAsyncTask<FConstrainedMeshDeformerTask> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  if (this != (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *)0x0
     ) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_80);
      FStack_60.StatData.Pad[4] = '\0';
      FStack_60.StatData.Pad[5] = '\0';
      FStack_60.StatData.Pad[6] = '\0';
      FStack_60.StatData.Pad[7] = '\0';
      FStack_60.StatData.Pad[0] = LStack_80.s.LowPart._0_1_;
      FStack_60.StatData.Pad[1] = LStack_80.s.LowPart._1_1_;
      FStack_60.StatData.Pad[2] = LStack_80.s.LowPart._2_1_;
      FStack_60.StatData.Pad[3] = LStack_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_60);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 14cc534b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_>::DoThreadedWork
          (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *this)

{
  int *piVar1;
  FAsyncTask<FConstrainedMeshDeformerTask> *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FName FStack_48;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_TDeleterTask = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&FStack_50,"TDeleterTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_TDeleterTask;
  if (_StatPtr_TDeleterTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&FStack_48,"TDeleterTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar11.Value;
        FStack_78.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar11.Value;
      LStack_80.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14cc5364c;
    }
  }
  bVar5 = false;
  FVar12 = FStack_70;
LAB_14cc5364c:
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->Task).Task,true,false);
  pFVar2 = (this->Task).Task;
  if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter == 0) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Task->IsDone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\ModelingTaskTypes.h"
                       ,0x2b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Task).Task;
  if (pFVar2 != (FAsyncTask<FConstrainedMeshDeformerTask> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  if (this != (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *)0x0
     ) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_80);
      FStack_60.StatData.Pad[4] = '\0';
      FStack_60.StatData.Pad[5] = '\0';
      FStack_60.StatData.Pad[6] = '\0';
      FStack_60.StatData.Pad[7] = '\0';
      FStack_60.StatData.Pad[0] = LStack_80.s.LowPart._0_1_;
      FStack_60.StatData.Pad[1] = LStack_80.s.LowPart._1_1_;
      FStack_60.StatData.Pad[2] = LStack_80.s.LowPart._2_1_;
      FStack_60.StatData.Pad[3] = LStack_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_60);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 14cc534c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_>::DoWork
          (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *this)

{
  int *piVar1;
  FAsyncTask<FConstrainedMeshDeformerTask> *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined1 auStackY_e8 [32];
  FColor_u_0 local_88 [2];
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48;
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_TDeleterTask = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_50,"TDeleterTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_TDeleterTask;
  if (_StatPtr_TDeleterTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_48,"TDeleterTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_TDeleterTask,*pFVar8,L"TDeleterTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar11.Value;
        local_78.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_80.s.LowPart = FVar11.Value;
      local_80.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14cc5364c;
    }
  }
  bVar5 = false;
  FVar12 = local_70;
LAB_14cc5364c:
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->Task).Task,true,false);
  pFVar2 = (this->Task).Task;
  if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter == 0) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Task->IsDone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\ModelingTaskTypes.h"
                       ,0x2b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Task).Task;
  if (pFVar2 != (FAsyncTask<FConstrainedMeshDeformerTask> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  if (this != (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<FConstrainedMeshDeformerTask>_> *)0x0
     ) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_40.MetaScope);
  FMemScope::~FMemScope(&local_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// Abandon @ 147344d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask>::Abandon
          (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FSkeletalMeshStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
      ::
      FThreadSafeStaticStat<_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
                (&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_SkeletalMesh;
  if (_StatPtr_FCancelIORequestsTask_SkeletalMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_SkeletalMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh,*pFVar11,
                         L"FCancelIORequestsTask_SkeletalMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14734ba4c;
    }
  }
  bVar6 = false;
  FVar15 = FStack_70;
LAB_14734ba4c:
  if ((this->Task).PendingUpdate.Reference == (FSkeletalMeshStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x19f,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BulkDataRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BulkDataRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 14734b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FSkeletalMeshStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
      ::
      FThreadSafeStaticStat<_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
                (&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_SkeletalMesh;
  if (_StatPtr_FCancelIORequestsTask_SkeletalMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_SkeletalMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh,*pFVar11,
                         L"FCancelIORequestsTask_SkeletalMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14734ba4c;
    }
  }
  bVar6 = false;
  FVar15 = FStack_70;
LAB_14734ba4c:
  if ((this->Task).PendingUpdate.Reference == (FSkeletalMeshStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x19f,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BulkDataRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BulkDataRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 14734b8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask>::DoWork
          (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FSkeletalMeshStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 local_88 [2];
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FName local_50;
  FInheritedContextScope local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
      ::
      FThreadSafeStaticStat<_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
                (&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_SkeletalMesh;
  if (_StatPtr_FCancelIORequestsTask_SkeletalMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_50,"FCancelIORequestsTask_SkeletalMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_SkeletalMesh,*pFVar11,
                         L"FCancelIORequestsTask_SkeletalMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar14.Value;
        local_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_80.s.LowPart = FVar14.Value;
      local_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14734ba4c;
    }
  }
  bVar6 = false;
  FVar15 = local_70;
LAB_14734ba4c:
  if ((this->Task).PendingUpdate.Reference == (FSkeletalMeshStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x19f,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BulkDataRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BulkDataRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_48.MetaScope);
  FMemScope::~FMemScope(&local_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_48,local_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// Abandon @ 148785fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask>::Abandon
          (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  undefined4 uVar2;
  FStaticMeshStreamIn_IO *pFVar3;
  FBulkDataBatchRequest FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_StaticMesh>
      ::
      FThreadSafeStaticStat<_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_StaticMesh>
                (&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_StaticMesh;
  if (_StatPtr_FCancelIORequestsTask_StaticMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_StaticMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh,*pFVar11,
                         L"FCancelIORequestsTask_StaticMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14879481c;
    }
  }
  bVar7 = false;
  FVar15 = FStack_70;
LAB_14879481c:
  if ((this->Task).PendingUpdate.Reference == (FStaticMeshStreamIn_IO *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,399,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  uVar2 = *(undefined4 *)&pFVar3->field_0x60;
  *(undefined4 *)&pFVar3->field_0x60 = 3;
  pFVar3 = (this->Task).PendingUpdate.Reference;
  FVar4 = pFVar3->BulkDataRequest;
  if (FVar4 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar4 + 0x20))();
    if ((iVar10 == 1) && (FVar4 = pFVar3->BulkDataRequest, FVar4 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar4 + 0x28))();
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  *(undefined4 *)&pFVar3->field_0x60 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  if (this != (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// Abandon @ 148785fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::Abandon
          (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  undefined1 auStackY_f8 [32];
  FColor_u_0 aFStack_98 [2];
  LARGE_INTEGER LStack_90;
  FName FStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  FTaskTagScope FStack_60;
  FName FStack_50;
  FName FStack_48;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FMipUpdateTask = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&FStack_50,"FMipUpdateTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_FMipUpdateTask;
  if (_StatPtr_FMipUpdateTask == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&FStack_48,"FMipUpdateTask");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar10->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_98[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_88.ComparisonIndex.Value = FVar12.Value;
        FStack_88.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_88,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_90.s.LowPart = FVar12.Value;
      LStack_90.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_148794bae;
    }
  }
  bVar5 = false;
  FVar13 = FStack_80;
LAB_148794bae:
  FTaskTagScope::FTaskTagScope(&FStack_60,EParallelGameThread);
  if (((this->Task).PendingUpdate.Reference == (FRenderAssetUpdate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingUpdate.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                         ,0x14f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = CVarStreamingStressTestExtraAsyncLatency.Ref;
  bVar8 = IsInParallelGameThread();
  if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
    lVar14 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar14);
  if (0 < iVar2) {
    FWindowsPlatformProcess::Sleep((float)iVar2 * __real_3a83126f);
  }
  FRenderAssetUpdate::Tick((this->Task).PendingUpdate.Reference,TT_Async);
  piVar1 = &((this->Task).PendingUpdate.Reference)->ScheduledAsyncTasks;
  *piVar1 = *piVar1 + -1;
  FTaskTagScope::~FTaskTagScope(&FStack_60);
  if (this != (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_90);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_70);
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

// DoThreadedWork @ 148794650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  undefined4 uVar2;
  FStaticMeshStreamIn_IO *pFVar3;
  FBulkDataBatchRequest FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_StaticMesh>
      ::
      FThreadSafeStaticStat<_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_StaticMesh>
                (&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_StaticMesh;
  if (_StatPtr_FCancelIORequestsTask_StaticMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_StaticMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh,*pFVar11,
                         L"FCancelIORequestsTask_StaticMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14879481c;
    }
  }
  bVar7 = false;
  FVar15 = FStack_70;
LAB_14879481c:
  if ((this->Task).PendingUpdate.Reference == (FStaticMeshStreamIn_IO *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,399,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  uVar2 = *(undefined4 *)&pFVar3->field_0x60;
  *(undefined4 *)&pFVar3->field_0x60 = 3;
  pFVar3 = (this->Task).PendingUpdate.Reference;
  FVar4 = pFVar3->BulkDataRequest;
  if (FVar4 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar4 + 0x20))();
    if ((iVar10 == 1) && (FVar4 = pFVar3->BulkDataRequest, FVar4 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar4 + 0x28))();
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  *(undefined4 *)&pFVar3->field_0x60 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  if (this != (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148794660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  undefined1 auStackY_f8 [32];
  FColor_u_0 aFStack_98 [2];
  LARGE_INTEGER LStack_90;
  FName FStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  FTaskTagScope FStack_60;
  FName FStack_50;
  FName FStack_48;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FMipUpdateTask = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&FStack_50,"FMipUpdateTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_FMipUpdateTask;
  if (_StatPtr_FMipUpdateTask == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&FStack_48,"FMipUpdateTask");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar10->Name;
  bVar4 = false;
  bVar6 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_98[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_88.ComparisonIndex.Value = FVar12.Value;
        FStack_88.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_88,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_90.s.LowPart = FVar12.Value;
      LStack_90.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_148794bae;
    }
  }
  bVar5 = false;
  FVar13 = FStack_80;
LAB_148794bae:
  FTaskTagScope::FTaskTagScope(&FStack_60,EParallelGameThread);
  if (((this->Task).PendingUpdate.Reference == (FRenderAssetUpdate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingUpdate.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                         ,0x14f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = CVarStreamingStressTestExtraAsyncLatency.Ref;
  bVar8 = IsInParallelGameThread();
  if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
    lVar14 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar14);
  if (0 < iVar2) {
    FWindowsPlatformProcess::Sleep((float)iVar2 * __real_3a83126f);
  }
  FRenderAssetUpdate::Tick((this->Task).PendingUpdate.Reference,TT_Async);
  piVar1 = &((this->Task).PendingUpdate.Reference)->ScheduledAsyncTasks;
  *piVar1 = *piVar1 + -1;
  FTaskTagScope::~FTaskTagScope(&FStack_60);
  if (this != (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_90);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_70);
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

// DoWork @ 148794690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask>::DoWork
          (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  undefined4 uVar2;
  FStaticMeshStreamIn_IO *pFVar3;
  FBulkDataBatchRequest FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 local_88 [2];
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FName local_50;
  FInheritedContextScope local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_StaticMesh>
      ::
      FThreadSafeStaticStat<_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_StaticMesh>
                (&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_StaticMesh;
  if (_StatPtr_FCancelIORequestsTask_StaticMesh == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_50,"FCancelIORequestsTask_StaticMesh");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_StaticMesh,*pFVar11,
                         L"FCancelIORequestsTask_StaticMesh","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar14.Value;
        local_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_80.s.LowPart = FVar14.Value;
      local_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14879481c;
    }
  }
  bVar7 = false;
  FVar15 = local_70;
LAB_14879481c:
  if ((this->Task).PendingUpdate.Reference == (FStaticMeshStreamIn_IO *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,399,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  uVar2 = *(undefined4 *)&pFVar3->field_0x60;
  *(undefined4 *)&pFVar3->field_0x60 = 3;
  pFVar3 = (this->Task).PendingUpdate.Reference;
  FVar4 = pFVar3->BulkDataRequest;
  if (FVar4 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar4 + 0x20))();
    if ((iVar10 == 1) && (FVar4 = pFVar3->BulkDataRequest, FVar4 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar4 + 0x28))();
    }
  }
  pFVar3 = (this->Task).PendingUpdate.Reference;
  *(undefined4 *)&pFVar3->field_0x60 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->field_0x18);
  if (this != (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_48.MetaScope);
  FMemScope::~FMemScope(&local_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_48,local_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148794a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::DoWork
          (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  undefined1 auStackY_f8 [32];
  FColor_u_0 local_98 [2];
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FTaskTagScope local_60;
  FName local_50;
  FName local_48;
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_40);
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FMipUpdateTask = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_50,"FMipUpdateTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_FMipUpdateTask;
  if (_StatPtr_FMipUpdateTask == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_48,"FMipUpdateTask");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FRenderAssetUpdate::FMipUpdateTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FMipUpdateTask,*pFVar9,L"FMipUpdateTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar10->Name;
  bVar4 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar12.Value;
        local_88.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_90.s.LowPart = FVar12.Value;
      local_90.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_148794bae;
    }
  }
  bVar5 = false;
  FVar13 = local_80;
LAB_148794bae:
  FTaskTagScope::FTaskTagScope(&local_60,EParallelGameThread);
  if (((this->Task).PendingUpdate.Reference == (FRenderAssetUpdate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingUpdate.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                         ,0x14f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = CVarStreamingStressTestExtraAsyncLatency.Ref;
  bVar8 = IsInParallelGameThread();
  if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
    lVar14 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar14);
  if (0 < iVar2) {
    FWindowsPlatformProcess::Sleep((float)iVar2 * __real_3a83126f);
  }
  FRenderAssetUpdate::Tick((this->Task).PendingUpdate.Reference,TT_Async);
  piVar1 = &((this->Task).PendingUpdate.Reference)->ScheduledAsyncTasks;
  *piVar1 = *piVar1 + -1;
  FTaskTagScope::~FTaskTagScope(&local_60);
  if (this != (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
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

// Abandon @ 148816360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask>::Abandon
          (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *this)

{
  int *piVar1;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar2;
  int iVar3;
  FTextureStreamIn *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ETaskState EVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar16;
  undefined1 auStackY_f8 [32];
  undefined1 auStack_98 [4];
  FColor_u_0 FStack_94;
  LARGE_INTEGER LStack_90;
  FName FStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  FName FStack_60;
  FInheritedContextScope FStack_58;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_58);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTextureStreamIn::FAbortPollMipsTask::GetStatId'::__l2::FStat_FAbortPollMipsTask>
      ::
      FThreadSafeStaticStat<_FTextureStreamIn::FAbortPollMipsTask::GetStatId_::__l2::FStat_FAbortPollMipsTask>
                (&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAbortPollMipsTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FAbortPollMipsTask;
  if (_StatPtr_FAbortPollMipsTask == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_60,"FAbortPollMipsTask");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FAbortPollMipsTask,*pFVar11,L"FAbortPollMipsTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_94.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_94._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_88.ComparisonIndex.Value = FVar14.Value;
        FStack_88.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_88,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_90.s.LowPart = FVar14.Value;
      LStack_90.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1488339e6;
    }
  }
  bVar7 = false;
  FVar15 = FStack_80;
LAB_1488339e6:
  if ((this->Task).PendingUpdate.Reference == (FTextureStreamIn *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x269,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar10 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar4 = (this->Task).PendingUpdate.Reference;
  FVar16 = (pFVar4->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar3 = (pFVar4->MipDataProviders).ArrayNum;
  if (FVar16 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&pFVar4->MipDataProviders;
  }
  FVar2 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar16 + (longlong)iVar3 * 8);
  while( true ) {
    if ((pFVar4->MipDataProviders).ArrayNum != iVar3) {
      auStack_98[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStack_98);
    }
    if (FVar16 == FVar2) break;
    if (*(longlong *)FVar16 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0x270,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->Task).bIsPollingMipData == false) {
      if ((this->Task).bIsPostprocessingGPUMipData != false) {
        (**(code **)(**(longlong **)FVar16 + 0x38))();
      }
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
    else {
      (**(code **)(**(longlong **)FVar16 + 0x30))();
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar10);
  if (this != (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_90);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_70);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_58.MetaScope);
  FMemScope::~FMemScope(&FStack_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_58,FStack_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// Abandon @ 148816370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask>::Abandon
          (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FTexture2DStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_Texture>
      ::
      FThreadSafeStaticStat<_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_Texture>
                (&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_Texture);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_Texture;
  if (_StatPtr_FCancelIORequestsTask_Texture == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_Texture");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_Texture,*pFVar11,
                         L"FCancelIORequestsTask_Texture","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_148833ddc;
    }
  }
  bVar6 = false;
  FVar15 = FStack_70;
LAB_148833ddc:
  if ((this->Task).PendingUpdate.Reference == (FTexture2DStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                       ,0xd9,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BatchRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BatchRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148833460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *this)

{
  int *piVar1;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar2;
  int iVar3;
  FTextureStreamIn *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ETaskState EVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar16;
  undefined1 auStackY_f8 [32];
  undefined1 auStack_98 [4];
  FColor_u_0 FStack_94;
  LARGE_INTEGER LStack_90;
  FName FStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  FName FStack_60;
  FInheritedContextScope FStack_58;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_58);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTextureStreamIn::FAbortPollMipsTask::GetStatId'::__l2::FStat_FAbortPollMipsTask>
      ::
      FThreadSafeStaticStat<_FTextureStreamIn::FAbortPollMipsTask::GetStatId_::__l2::FStat_FAbortPollMipsTask>
                (&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAbortPollMipsTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FAbortPollMipsTask;
  if (_StatPtr_FAbortPollMipsTask == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_60,"FAbortPollMipsTask");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FAbortPollMipsTask,*pFVar11,L"FAbortPollMipsTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_94.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_94._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_88.ComparisonIndex.Value = FVar14.Value;
        FStack_88.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_88,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_90.s.LowPart = FVar14.Value;
      LStack_90.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1488339e6;
    }
  }
  bVar7 = false;
  FVar15 = FStack_80;
LAB_1488339e6:
  if ((this->Task).PendingUpdate.Reference == (FTextureStreamIn *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x269,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar10 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar4 = (this->Task).PendingUpdate.Reference;
  FVar16 = (pFVar4->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar3 = (pFVar4->MipDataProviders).ArrayNum;
  if (FVar16 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&pFVar4->MipDataProviders;
  }
  FVar2 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar16 + (longlong)iVar3 * 8);
  while( true ) {
    if ((pFVar4->MipDataProviders).ArrayNum != iVar3) {
      auStack_98[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStack_98);
    }
    if (FVar16 == FVar2) break;
    if (*(longlong *)FVar16 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0x270,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->Task).bIsPollingMipData == false) {
      if ((this->Task).bIsPostprocessingGPUMipData != false) {
        (**(code **)(**(longlong **)FVar16 + 0x38))();
      }
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
    else {
      (**(code **)(**(longlong **)FVar16 + 0x30))();
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar10);
  if (this != (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_90);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_70);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_58.MetaScope);
  FMemScope::~FMemScope(&FStack_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_58,FStack_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148833470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FTexture2DStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 aFStack_88 [2];
  LARGE_INTEGER LStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FInheritedContextScope FStack_48;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_Texture>
      ::
      FThreadSafeStaticStat<_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_Texture>
                (&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_Texture);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_Texture;
  if (_StatPtr_FCancelIORequestsTask_Texture == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&FStack_50,"FCancelIORequestsTask_Texture");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_Texture,*pFVar11,
                         L"FCancelIORequestsTask_Texture","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_78.ComparisonIndex.Value = FVar14.Value;
        FStack_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_80.s.LowPart = FVar14.Value;
      LStack_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_148833ddc;
    }
  }
  bVar6 = false;
  FVar15 = FStack_70;
LAB_148833ddc:
  if ((this->Task).PendingUpdate.Reference == (FTexture2DStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                       ,0xd9,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BatchRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BatchRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_48.MetaScope);
  FMemScope::~FMemScope(&FStack_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_48,FStack_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148833850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask>::DoWork
          (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *this)

{
  int *piVar1;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar2;
  int iVar3;
  FTextureStreamIn *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ETaskState EVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar16;
  undefined1 auStackY_f8 [32];
  undefined1 local_98 [4];
  FColor_u_0 local_94;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FName local_60;
  FInheritedContextScope local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_58);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTextureStreamIn::FAbortPollMipsTask::GetStatId'::__l2::FStat_FAbortPollMipsTask>
      ::
      FThreadSafeStaticStat<_FTextureStreamIn::FAbortPollMipsTask::GetStatId_::__l2::FStat_FAbortPollMipsTask>
                (&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAbortPollMipsTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FAbortPollMipsTask;
  if (_StatPtr_FAbortPollMipsTask == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_60,"FAbortPollMipsTask");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTextureStreamIn::FAbortPollMipsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FAbortPollMipsTask,*pFVar11,L"FAbortPollMipsTask",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_94.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_94._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar14.Value;
        local_88.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_90.s.LowPart = FVar14.Value;
      local_90.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1488339e6;
    }
  }
  bVar7 = false;
  FVar15 = local_80;
LAB_1488339e6:
  if ((this->Task).PendingUpdate.Reference == (FTextureStreamIn *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x269,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar10 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar4 = (this->Task).PendingUpdate.Reference;
  FVar16 = (pFVar4->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar3 = (pFVar4->MipDataProviders).ArrayNum;
  if (FVar16 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&pFVar4->MipDataProviders;
  }
  FVar2 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar16 + (longlong)iVar3 * 8);
  while( true ) {
    if ((pFVar4->MipDataProviders).ArrayNum != iVar3) {
      local_98[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (FVar16 == FVar2) break;
    if (*(longlong *)FVar16 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0x270,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->Task).bIsPollingMipData == false) {
      if ((this->Task).bIsPostprocessingGPUMipData != false) {
        (**(code **)(**(longlong **)FVar16 + 0x38))();
      }
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
    else {
      (**(code **)(**(longlong **)FVar16 + 0x30))();
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar16 + 8);
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar10);
  if (this != (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_58.MetaScope);
  FMemScope::~FMemScope(&local_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_58,local_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148833c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask>::DoWork
          (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *this)

{
  int *piVar1;
  FTexture2DStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETaskState EVar9;
  int iVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_e8 [32];
  FColor_u_0 local_88 [2];
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FName local_50;
  FInheritedContextScope local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_48);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_Texture>
      ::
      FThreadSafeStaticStat<_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_Texture>
                (&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCancelIORequestsTask_Texture);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FCancelIORequestsTask_Texture;
  if (_StatPtr_FCancelIORequestsTask_Texture == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_50,"FCancelIORequestsTask_Texture");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FTexture2DStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FCancelIORequestsTask_Texture,*pFVar11,
                         L"FCancelIORequestsTask_Texture","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar14.Value;
        local_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_80.s.LowPart = FVar14.Value;
      local_80.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_148833ddc;
    }
  }
  bVar6 = false;
  FVar15 = local_70;
LAB_148833ddc:
  if ((this->Task).PendingUpdate.Reference == (FTexture2DStreamIn_IO *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                       ,0xd9,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar9 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference);
  pFVar2 = (this->Task).PendingUpdate.Reference;
  FVar3 = pFVar2->BatchRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar10 = (**(code **)(*(longlong *)FVar3 + 0x20))(FVar3);
    if ((iVar10 == 1) && (FVar3 = pFVar2->BatchRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->Task).PendingUpdate.Reference,EVar9);
  if (this != (FAutoDeleteAsyncTask<FTexture2DStreamIn_IO::FCancelIORequestsTask> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_48.MetaScope);
  FMemScope::~FMemScope(&local_48.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_48,local_48.LLMScopes.LLMScopes.ArrayNum);
  return;
}


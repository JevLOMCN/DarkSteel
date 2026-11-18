// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 9

// FHttpRequestImpl @ 14314d420

FHttpRequestImpl * __thiscall FHttpRequestImpl::FHttpRequestImpl(FHttpRequestImpl *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FHttpRequestImpl__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestCompleteDelegate,4000);
  *(undefined8 *)&(this->RequestCompleteDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->RequestCompleteDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestProgressDelegate64,4000);
  *(undefined8 *)&(this->RequestProgressDelegate64).field_0x28 = 0;
  *(undefined4 *)&(this->RequestProgressDelegate64).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StatusCodeReceivedDelegate,4000);
  *(undefined8 *)&(this->StatusCodeReceivedDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->StatusCodeReceivedDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HeaderReceivedDelegate,4000);
  *(undefined8 *)&(this->HeaderReceivedDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HeaderReceivedDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnRequestWillRetryDelegate,4000);
  *(undefined8 *)&(this->OnRequestWillRetryDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->OnRequestWillRetryDelegate).field_0x30 = 0;
  return this;
}

// ~FHttpRequestImpl @ 143150700

void __thiscall FHttpRequestImpl::~FHttpRequestImpl(FHttpRequestImpl *this)

{
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_00;
  int *piVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_01;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_02;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_03;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  lpCriticalSection_01 = &this->OnRequestWillRetryDelegate;
  if (lpCriticalSection_01 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  if ((*(int *)&(this->OnRequestWillRetryDelegate).field_0x30 != 0) &&
     (puVar3 = *(undefined8 **)&(this->OnRequestWillRetryDelegate).field_0x28,
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OnRequestWillRetryDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->OnRequestWillRetryDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_01 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  }
  pvVar4 = *(void **)&(this->OnRequestWillRetryDelegate).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  lpCriticalSection_02 = &this->HeaderReceivedDelegate;
  if (lpCriticalSection_02 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  if ((*(int *)&(this->HeaderReceivedDelegate).field_0x30 != 0) &&
     (puVar3 = *(undefined8 **)&(this->HeaderReceivedDelegate).field_0x28,
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HeaderReceivedDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HeaderReceivedDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_02 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  }
  pvVar4 = *(void **)&(this->HeaderReceivedDelegate).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  lpCriticalSection_03 = &this->StatusCodeReceivedDelegate;
  if (lpCriticalSection_03 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  if ((*(int *)&(this->StatusCodeReceivedDelegate).field_0x30 != 0) &&
     (puVar3 = *(undefined8 **)&(this->StatusCodeReceivedDelegate).field_0x28,
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->StatusCodeReceivedDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->StatusCodeReceivedDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_03 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  }
  pvVar4 = *(void **)&(this->StatusCodeReceivedDelegate).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  lpCriticalSection = &this->RequestProgressDelegate64;
  if (lpCriticalSection ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)&(this->RequestProgressDelegate64).field_0x30 != 0) &&
     (puVar3 = *(undefined8 **)&(this->RequestProgressDelegate64).field_0x28,
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->RequestProgressDelegate64).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->RequestProgressDelegate64).field_0x30 = 0;
  }
  if (lpCriticalSection !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pvVar4 = *(void **)&(this->RequestProgressDelegate64).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = &this->RequestCompleteDelegate;
  if (lpCriticalSection_00 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if ((*(int *)&(this->RequestCompleteDelegate).field_0x30 != 0) &&
     (puVar3 = *(undefined8 **)&(this->RequestCompleteDelegate).field_0x28,
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->RequestCompleteDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->RequestCompleteDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_00 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  pvVar4 = *(void **)&(this->RequestCompleteDelegate).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// BroadcastResponseHeadersReceived @ 1431560f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpRequestImpl::BroadcastResponseHeadersReceived(FHttpRequestImpl *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  LPCRITICAL_SECTION p_Var10;
  TSharedRef<IHttpRequest,1> *pTVar11;
  ulonglong uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestImpl::BroadcastResponseHeadersReceived(void)_::_15_::FStat_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived>
  FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FString *pFVar19;
  FString *this_02;
  undefined1 local_res8 [8];
  FColor_u_0 local_res10 [2];
  uint local_res18;
  FString local_108;
  FString *local_f8;
  uint local_f0;
  FName local_e8;
  uint local_e0;
  uint uStack_dc;
  FString local_d8;
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FName local_b8;
  IHttpRequest *local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  TSharedRef<IHttpRequest,1> local_88;
  FString local_78;
  IHttpRequest *local_68;
  TReferenceControllerBase<1> *local_60;
  FName local_58;
  FName local_50 [2];
  
  p_Var10 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x108))();
  if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection(p_Var10);
  if (((p_Var10[1].LockCount == 0) || (p_Var10[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) ||
     (cVar8 = (**(code **)(*(longlong *)p_Var10[1].DebugInfo + 0x38))(), cVar8 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014315662f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(p_Var10);
    return;
  }
  LeaveCriticalSection(p_Var10);
  (**(code **)(this->_padding_ + 0x120))(this,&local_c8);
  if (local_c8 != (longlong *)0x0) {
    pTVar11 = TSharedFromThis<IHttpRequest,1>::AsShared
                        ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_88);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar11->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((local_c8 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*local_c8 + 0x30))(local_c8,&local_f8);
    uVar12 = (ulonglong)(int)local_f0;
    pFVar19 = local_f8 + uVar12;
    local_res18 = local_f0;
    this_02 = local_f8;
    while( true ) {
      if (local_f0 != (uint)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_02 == pFVar19) break;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      ::FString::FString(&local_78,L":");
      bVar7 = ::FString::Split(this_02,&local_78,&local_d8,&local_108);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        ::FString::TrimStartInline(&local_108);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          if (StatPtr_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived ==
              (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestImpl::BroadcastResponseHeadersReceived(void)_::_15_::FStat_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived>
               )0x0) {
            pFVar13 = ::FName::FName(&local_58,
                                     "STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived"
                                    );
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &
                       StatPtr_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived
                       ,*pFVar13,
                       L"STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived",
                       "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS1);
        }
        FVar14 = StatPtr_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived;
        if (StatPtr_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived ==
            (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestImpl::BroadcastResponseHeadersReceived(void)_::_15_::FStat_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived>
             )0x0) {
          pFVar13 = ::FName::FName(local_50,
                                   "STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived"
                                  );
          FVar14 = (FThreadSafeStaticStat<_protected:_void___cdecl_FHttpRequestImpl::BroadcastResponseHeadersReceived(void)_::_15_::FStat_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &
                                StatPtr_STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived
                                ,*pFVar13,
                                L"STAT_FHttpRequestImpl_BroadcastResponseHeadersReceived_OnHeaderReceived"
                                ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,
                                true,false,MCR_Invalid);
        }
        FVar18 = *(FName *)FVar14;
        bVar5 = false;
        bVar7 = false;
        local_b8.ComparisonIndex.Value = 0;
        local_b8.Number = 0;
        FVar17 = FVar18.ComparisonIndex.Value;
        uVar15 = FVar18.Number;
        if ((FVar17.Value == 0) && (uVar15 == 0)) {
LAB_143156423:
          bVar6 = false;
          FVar18 = local_b8;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res10[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
            bVar5 = false;
            bVar7 = true;
            if (-1 < CpuChannel->Enabled) {
              local_e8.ComparisonIndex.Value = FVar17.Value;
              local_e8.Number = uVar15;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_e8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestImpl.cpp"
                         ,0x39);
              bVar5 = true;
              bVar7 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_143156423;
          local_e0 = FVar17.Value;
          uStack_dc = uVar15;
          local_b8 = FVar18;
          FThreadStats::AddMessage(FVar18,CycleScopeStart);
          bVar6 = true;
        }
        p_Var10 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x108))(this);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EnterCriticalSection(p_Var10);
        if ((p_Var10[1].LockCount == 0) ||
           (p_Var3 = p_Var10[1].DebugInfo, p_Var3 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
          LeaveCriticalSection(p_Var10);
          pTVar16 = pTVar2;
        }
        else {
          local_68 = local_a8;
          local_60 = pTVar2;
          (**(code **)(*(longlong *)p_Var3 + 0x68))(p_Var3,&local_68,&local_d8,&local_108);
          LeaveCriticalSection(p_Var10);
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar5) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
            local_98.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
            local_98.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_a0);
            local_98.StatData.Pad[4] = '\0';
            local_98.StatData.Pad[5] = '\0';
            local_98.StatData.Pad[6] = '\0';
            local_98.StatData.Pad[7] = '\0';
            local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
            local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
            local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
            local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_00,&local_98);
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
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)local_res18;
      this_02 = this_02 + 1;
    }
    DestructItems<FString,int>(local_f8,local_f0);
    if (local_f8 != (FString *)0x0) {
      FMemory::Free(local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  return;
}

// OnHeaderReceived @ 1431714e0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall FHttpRequestImpl::OnHeaderReceived(FHttpRequestImpl *this)

{
  return &this->HeaderReceivedDelegate;
}

// OnProcessRequestComplete @ 1431715a0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
* __thiscall FHttpRequestImpl::OnProcessRequestComplete(FHttpRequestImpl *this)

{
  return &this->RequestCompleteDelegate;
}

// OnRequestProgress64 @ 143171660

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
* __thiscall FHttpRequestImpl::OnRequestProgress64(FHttpRequestImpl *this)

{
  return &this->RequestProgressDelegate64;
}

// OnRequestWillRetry @ 143171720

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
* __thiscall FHttpRequestImpl::OnRequestWillRetry(FHttpRequestImpl *this)

{
  return &this->OnRequestWillRetryDelegate;
}

// OnStatusCodeReceived @ 1431717e0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> * __thiscall
FHttpRequestImpl::OnStatusCodeReceived(FHttpRequestImpl *this)

{
  return &this->StatusCodeReceivedDelegate;
}

// Shutdown @ 143182850

void __thiscall FHttpRequestImpl::Shutdown(FHttpRequestImpl *this)

{
  code *pcVar1;
  bool bVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0xf0))();
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var3);
  if ((p_Var3[1].LockCount != 0) && (p_Var3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var3[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(p_Var3 + 1),0,0,0x10);
    p_Var3[1].LockCount = 0;
  }
  LeaveCriticalSection(p_Var3);
  p_Var3 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0xf8))(this);
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var3);
  if ((p_Var3[1].LockCount != 0) && (p_Var3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var3[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(p_Var3 + 1),0,0,0x10);
    p_Var3[1].LockCount = 0;
  }
  LeaveCriticalSection(p_Var3);
  p_Var3 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x110))(this);
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var3);
  if ((p_Var3[1].LockCount != 0) && (p_Var3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var3[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(p_Var3 + 1),0,0,0x10);
    p_Var3[1].LockCount = 0;
  }
  LeaveCriticalSection(p_Var3);
  p_Var3 = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x108))(this);
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection(p_Var3);
  if ((p_Var3[1].LockCount != 0) && (p_Var3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var3[1].DebugInfo)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(p_Var3 + 1),0,0,0x10);
    p_Var3[1].LockCount = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143182a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(p_Var3);
  return;
}


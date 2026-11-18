// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 3

// FIcmpAsyncResult @ 144552e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIcmpAsyncResult * __thiscall
FIcmpAsyncResult::FIcmpAsyncResult
          (FIcmpAsyncResult *this,ISocketSubsystem *param_1,FString *param_2,float param_3,
          uint param_4,TFunction<void___cdecl(FIcmpEchoResult)> *param_5)

{
  TFuture<FIcmpEchoResult> *pTVar1;
  longlong lVar2;
  FTSTicker *pFVar3;
  code **ppcVar4;
  TFuture<FIcmpEchoResult> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStackY_108 [32];
  FIcmpAsyncResult *local_d8;
  FString local_d0;
  float local_c0;
  TUniqueFunction<void___cdecl(void)> local_b8;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar3);
  this->SocketSub = param_1;
  *(undefined ***)this = &___7FIcmpAsyncResult__6B_;
  lVar2 = *(longlong *)param_5;
  *(longlong *)&this->Callback = lVar2;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  pTVar1 = &this->FutureResult;
  this->bThreadCompleted = (FThreadSafeBool)0x0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->FutureResult).field_0x8 = 0;
  if (this->SocketSub == (ISocketSubsystem *)0x0) {
    LOCK();
    this->bThreadCompleted = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  else {
    local_d8 = this;
    ::FString::FString(&local_d0,param_2);
    local_88[0] = (code *)0x0;
    local_c0 = param_3;
    ppcVar4 = FMemory::Malloc(0x28,8);
    *ppcVar4 = (code *)&
                       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FIcmpAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    ppcVar4[1] = (code *)local_d8;
    local_60 = ppcVar4;
    ::FString::FString((FString *)(ppcVar4 + 2),&local_d0);
    *(float *)(ppcVar4 + 4) = local_c0;
    if (ppcVar4 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,FIcmpEchoResult>
                    ::Call;
    }
    if ((TReferenceControllerBase<1> *)local_d0.Data.AllocatorInstance.Data !=
        (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_b8._0_8_ = 0;
    local_b8._40_8_ = 0;
    pTVar5 = AsyncThread<TFunction<FIcmpEchoResult___cdecl(void)>_&>
                       ((TFuture<FIcmpEchoResult> *)&local_d8,
                        (TFunction<FIcmpEchoResult___cdecl(void)> *)local_88,param_4,TPri_Normal,
                        &local_b8);
    if (pTVar1 != pTVar5) {
      *(undefined8 *)pTVar1 = *(undefined8 *)pTVar5;
      *(undefined8 *)pTVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->FutureResult).field_0x8,
                 (FSharedReferencer<1> *)&pTVar5->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d0.Data.AllocatorInstance.Data);
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  if (*(longlong *)param_5 != 0) {
    plVar7 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// ~FIcmpAsyncResult @ 144553b30

void __thiscall FIcmpAsyncResult::~FIcmpAsyncResult(FIcmpAsyncResult *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FIcmpAsyncResult__6B_;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\Icmp.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
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
    plVar5 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// Tick @ 14455a520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FIcmpAsyncResult::Tick(FIcmpAsyncResult *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FName *pFVar6;
  TStatIdData *pTVar7;
  FIcmpEchoResult *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_a8;
  EIcmpResponseStatus local_98;
  FString local_90;
  FString local_80;
  float local_70;
  FIcmpEchoResult local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::
                           __l2::_thread_safe_static_guard_0__),
     `private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Icmp_Tick = (TStatIdData *)0x0;
    pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_Icmp_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::__l2::
                StatPtr_STAT_Icmp_Tick,*pFVar6,L"STAT_Icmp_Tick","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::__l2
                         ::_thread_safe_static_guard_0__);
  }
  pTVar7 = _StatPtr_STAT_Icmp_Tick;
  if (_StatPtr_STAT_Icmp_Tick == (TStatIdData *)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_Icmp_Tick");
    pTVar7 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_bool___cdecl_FIcmpAsyncResult::Tick(float)___ptr64'::__l2
                         ::StatPtr_STAT_Icmp_Tick,*pFVar6,L"STAT_Icmp_Tick","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar7->Name;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar7->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar7->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\Icmp.cpp"
                   ,0x6c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_14455a67f;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14455a67f:
  if (this->bThreadCompleted == (FThreadSafeBool)0x0) {
    bVar12 = true;
  }
  else {
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    local_98 = InternalError;
    local_70 = -1.0;
    iVar14 = 0;
    iVar13 = 0;
    if (*(longlong *)&this->FutureResult != 0) {
      pFVar8 = TFutureBase<FIcmpEchoResult>::Get
                         ((TFutureBase<FIcmpEchoResult> *)&this->FutureResult);
      local_98 = pFVar8->Status;
      ::FString::operator=(&local_90,&pFVar8->ResolvedAddress);
      ::FString::operator=(&local_80,&pFVar8->ReplyFrom);
      local_70 = pFVar8->Time;
      iVar14 = local_90.Data.ArrayNum;
      iVar13 = local_80.Data.ArrayNum;
    }
    FVar5.Data = local_90.Data.AllocatorInstance.Data;
    local_68.ResolvedAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Status = local_98;
    local_68.ResolvedAddress.Data.ArrayNum = iVar14;
    if (iVar14 == 0) {
      local_68.ResolvedAddress.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar14,0,(ForAnyElementType *)&local_68.ResolvedAddress,iVar14,
                 &local_68.ResolvedAddress.Data.ArrayMax);
      memcpy(local_68.ResolvedAddress.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar14 * 2);
      iVar13 = local_80.Data.ArrayNum;
    }
    FVar5.Data = local_80.Data.AllocatorInstance.Data;
    local_68.ReplyFrom.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ReplyFrom.Data.ArrayNum = iVar13;
    if (iVar13 == 0) {
      local_68.ReplyFrom.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar13,0,(ForAnyElementType *)&local_68.ReplyFrom,iVar13,
                 &local_68.ReplyFrom.Data.ArrayMax);
      memcpy(local_68.ReplyFrom.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar13 * 2);
    }
    local_68.Time = local_70;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FIcmpEchoResult)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FIcmpEchoResult)>
                  *)&this->Callback,&local_68);
    (*(code *)**(undefined8 **)this)(this,1);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    bVar12 = false;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar12;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar12;
}


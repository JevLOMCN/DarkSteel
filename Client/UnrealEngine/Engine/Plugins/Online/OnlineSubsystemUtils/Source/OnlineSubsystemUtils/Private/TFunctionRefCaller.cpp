// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// Call @ 14ec61a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ec581e2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ec581e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ec61a30

TUniquePtr<FSocket,FSocketDeleter> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpNetDriver::InitBase'::__l2::<lambda_1>,TUniquePtr<FSocket,FSocketDeleter>,TSharedRef<FInternetAddr,1>,FString_&>
::Call(TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,void *param_1,
      TSharedRef<FInternetAddr,1> *param_2,FString *param_3)

{
  TSharedRef<FInternetAddr,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `UIpNetDriver::InitBase'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// Call @ 14ec61a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>,void,IOnlineSubsystem_*>
::Call(void *param_1,IOnlineSubsystem **param_2)

{
  `FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14ec61a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec58588) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014ec5858c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> *paVar1;
  FReceiveThreadRunnable *this;
  TReferenceControllerBase<1> *pTVar2;
  FSocket *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong lStack_78;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lStack_78 = *(longlong *)((longlong)param_1 + 0x20);
  plStack_50 = *(longlong **)((longlong)param_1 + 0x48);
  this = *(FReceiveThreadRunnable **)param_1;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  uStack_58 = *(undefined8 *)((longlong)param_1 + 0x40);
  lStack_68 = *(longlong *)((longlong)param_1 + 0x30);
  uStack_60 = *(undefined8 *)((longlong)param_1 + 0x38);
  if (lStack_78 != 0) {
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  }
  UIpNetDriver::FReceiveThreadRunnable::ClearSocket(this);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  pFVar3 = *(FSocket **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->Socket).SharedReferenceCount.ReferenceController;
  (this->Socket).Object = pFVar3;
  (this->Socket).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (lStack_78 != 0) {
    lStack_48 = lStack_78;
    uStack_20 = plStack_50;
    plStack_50 = (longlong *)0x0;
    lStack_38 = lStack_68;
    uStack_30 = uStack_60;
    uStack_28 = uStack_58;
    lStack_78 = 0;
    aVar5 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
            TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
                      (&this->OwnerEventQueue);
    *(undefined8 *)((longlong)aVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)aVar5 + 0x38) = 0;
    puVar6 = FMemory::Malloc(0x40,0x10);
    *(undefined8 **)((longlong)aVar5 + 0x38) = puVar6;
    *puVar6 = &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    plVar7 = puVar6 + 2;
    *plVar7 = lStack_48;
    puVar6[7] = uStack_20;
    uStack_20 = 0;
    puVar6[4] = lStack_38;
    puVar6[5] = uStack_30;
    puVar6[6] = uStack_28;
    if (*plVar7 != 0) {
      lStack_48 = 0;
    }
    if (plVar7 != (longlong *)0x0) {
      *(code **)((longlong)aVar5 + 0x10) =
           TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,void>
           ::Call;
    }
    ((this->OwnerEventQueue).Head)->Next = aVar5;
    (this->OwnerEventQueue).Head = (FNode *)aVar5;
    LOCK();
    paVar1 = &(this->OwnerEventQueue).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (lStack_48 != 0) {
      (**(code **)(lStack_38 + 0x10))();
    }
    if (lStack_78 != 0) {
      plVar7 = &lStack_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar7 = plStack_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}

// Call @ 14ec61aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>,void,FAddressInfoResult>
::Call(void *param_1,FAddressInfoResult *param_2)

{
  FAddressInfoResult local_58;
  
  local_58.QueryHostName.Data.AllocatorInstance.Data =
       (param_2->QueryHostName).Data.AllocatorInstance.Data;
  (param_2->QueryHostName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.QueryHostName.Data.ArrayNum = (param_2->QueryHostName).Data.ArrayNum;
  local_58.QueryHostName.Data.ArrayMax = (param_2->QueryHostName).Data.ArrayMax;
  (param_2->QueryHostName).Data.ArrayNum = 0;
  (param_2->QueryHostName).Data.ArrayMax = 0;
  local_58.QueryServiceName.Data.AllocatorInstance.Data =
       (param_2->QueryServiceName).Data.AllocatorInstance.Data;
  (param_2->QueryServiceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.QueryServiceName.Data.ArrayNum = (param_2->QueryServiceName).Data.ArrayNum;
  local_58.QueryServiceName.Data.ArrayMax = (param_2->QueryServiceName).Data.ArrayMax;
  (param_2->QueryServiceName).Data.ArrayNum = 0;
  (param_2->QueryServiceName).Data.ArrayMax = 0;
  local_58.CanonicalNameResult.Data.AllocatorInstance.Data =
       (param_2->CanonicalNameResult).Data.AllocatorInstance.Data;
  (param_2->CanonicalNameResult).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CanonicalNameResult.Data.ArrayNum = (param_2->CanonicalNameResult).Data.ArrayNum;
  local_58.CanonicalNameResult.Data.ArrayMax = (param_2->CanonicalNameResult).Data.ArrayMax;
  (param_2->CanonicalNameResult).Data.ArrayNum = 0;
  (param_2->CanonicalNameResult).Data.ArrayMax = 0;
  local_58.ReturnCode = param_2->ReturnCode;
  local_58.Results.AllocatorInstance.Data = (param_2->Results).AllocatorInstance.Data;
  (param_2->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Results.ArrayNum = (param_2->Results).ArrayNum;
  local_58.Results.ArrayMax = (param_2->Results).ArrayMax;
  (param_2->Results).ArrayNum = 0;
  (param_2->Results).ArrayMax = 0;
  `UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>::operator()
            (param_1,&local_58);
  return;
}

// Call @ 14ec61b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ec61b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 14ec61b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    *(undefined8 *)param_1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// Call @ 14ec61bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpConnection::SafeDeferredSocketCleanup'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  LOCK();
  *(int *)(*(longlong *)param_1 + 0x1fe8) = *(int *)(*(longlong *)param_1 + 0x1fe8) + 1;
  UNLOCK();
  return;
}

// Call @ 14ec61bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpNetDriver::RecreateSocket'::__l11::<lambda_1>,void>::Call(void *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(param_1);
    *(undefined8 *)&pUVar2[0x44].field_0x18 = *(undefined8 *)(pUVar2 + 0x14);
    pUVar2[0x44].field_0x10 = 3;
  }
  return;
}

// Call @ 14ec61c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIpConnection::SendToRemote'::__l44::<lambda_2>,void>::Call(void *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket> FVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar17;
  FColor_u_0 aFStackX_8 [2];
  uint uStackX_10;
  uint uStackX_14;
  FName FStackX_18;
  LARGE_INTEGER LStackX_20;
  undefined8 uStack_68;
  FName FStack_60;
  FName FStack_58;
  FStatMessage FStack_48;
  
  plVar2 = *(longlong **)(*(longlong *)param_1 + 0x1fc0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uStack_68 = 0;
  FVar13 = StatPtr_STAT_IpConnection_SendToSocket;
  if (StatPtr_STAT_IpConnection_SendToSocket ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)0x0) {
    pFVar12 = ::FName::FName(&FStack_60,"STAT_IpConnection_SendToSocket");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToSocket,
                        *pFVar12,L"IpConnection Socket SendTo","STATGROUP_Net","STATCAT_Advanced",
                        L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar9 = false;
  bVar6 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar14 == 0)) {
LAB_14ec594cb:
    bVar5 = false;
    FVar16 = FStack_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_18.ComparisonIndex.Value = FVar15.Value;
        FStackX_18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpConnection.cpp"
                   ,0x214);
        bVar9 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec594cb;
    uStackX_10 = FVar15.Value;
    uStackX_14 = uVar14;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  lVar3 = *(longlong *)param_1;
  pcVar4 = *(code **)(*plVar2 + 0x58);
  if ((*(longlong *)(lVar3 + 0x168) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar8 = (*pcVar4)(plVar2,*(undefined8 *)((longlong)param_1 + 8),
                    *(undefined4 *)((longlong)param_1 + 0x10),&uStack_68,
                    *(undefined8 *)(lVar3 + 0x168));
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_20);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStackX_20.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStackX_20.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStackX_20.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStackX_20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if ((Net::Private::GNetDebugInitialConnect == 0) || (*(int *)(*(longlong *)param_1 + 0x54c) != 0))
  {
    if (cVar8 == '\0') goto LAB_14ec5963c;
  }
  else if (cVar8 == '\0') {
LAB_14ec5963c:
    if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
      uVar10 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0xb8))();
      uStack_68 = CONCAT44(uVar10,(undefined4)uStack_68);
    }
    if (cVar8 == '\0') goto LAB_14ec5966c;
  }
  else {
    piVar1 = (int *)(*(longlong *)param_1 + 0x2000);
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)((longlong)param_1 + 0x20) == '\0') {
    return;
  }
  if (uStack_68._4_4_ != 0) {
    return;
  }
LAB_14ec5966c:
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x1f80);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar3 = *(longlong *)param_1;
  pFVar17 = (ForAnyElementType *)(lVar3 + 0x1fa8);
  if (((pFVar17->Data <= (FScriptContainerElement *)&uStack_68) &&
      ((FScriptContainerElement *)&uStack_68 <
       pFVar17->Data + (longlong)*(int *)(lVar3 + 0x1fb4) * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = *(int *)(lVar3 + 0x1fb0);
  if (iVar11 == *(int *)(lVar3 + 0x1fb4)) {
    iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar17,(int *)(lVar3 + 0x1fb4));
    *(int *)(lVar3 + 0x1fb0) = iVar11 + 1;
  }
  else {
    *(int *)(lVar3 + 0x1fb0) = iVar11 + 1;
  }
  *(undefined8 *)(pFVar17->Data + (longlong)iVar11 * 8) = uStack_68;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// CheckAddressResolution @ 14ec61eb0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckAddressResolutionResult __thiscall
UE::Net::Private::FNetConnectionAddressResolution::CheckAddressResolution
          (FNetConnectionAddressResolution *this)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  TSharedPtr<FSocket,1> *pTVar2;
  int iVar3;
  FSocket *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  ECheckAddressResolutionResult EVar8;
  EAddressResolutionState EVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FInternetAddr *local_78;
  FSharedReferencer<1> local_70;
  longlong local_68;
  FSharedReferencer<1> FStack_60;
  FSocket *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  void *local_48 [2];
  
  EVar9 = this->ResolutionState;
  EVar8 = None;
  if (EVar9 != TryNextAddress) {
    if (EVar9 == Connected) {
      this->ResolutionState = Done;
      CleanupResolutionSockets(this,CleanInactive);
      return Connected;
    }
    if (EVar9 == Error) {
      if (2 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      this->ResolutionState = Done;
      EVar8 = Error;
    }
    return EVar8;
  }
  iVar3 = this->CurrentAddressIndex;
  if ((this->ResolverResults).ArrayNum <= iVar3) {
    if (2 < (byte)LogNet._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    this->ResolutionState = Error;
    return None;
  }
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  pFVar11 = (this->ResolverResults).AllocatorInstance.Data;
  local_78 = *(FInternetAddr **)(pFVar11 + (longlong)iVar3 * 0x10);
  local_70.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar11 + (longlong)iVar3 * 0x10 + 8);
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->RemoteAddr;
  if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_78) {
    pTVar1->Object = local_78;
    local_78 = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RemoteAddr).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  pTVar2 = &this->ResolutionSocket;
  local_68 = 0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FSocket,1> *)&local_68) {
    pTVar2->Object = (FSocket *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResolutionSocket).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  iVar3 = (this->BindSockets).ArrayNum;
  pFVar11 = (this->BindSockets).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->BindSockets).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSocket,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar12) goto LAB_14ec620cd;
    if ((pTVar1->Object == (FInternetAddr *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    pFVar10 = (FName *)(**(code **)((longlong)*pTVar1->Object + 0xa8))(pTVar1->Object,local_res10);
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    pFVar4 = *(FSocket **)pFVar11;
    if (pFVar4->SocketProtocol == *pFVar10) break;
    pFVar11 = pFVar11 + 0x10;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pTVar2->Object;
  pTStack_50 = (this->ResolutionSocket).SharedReferenceCount.ReferenceController;
  pTVar2->Object = pFVar4;
  (this->ResolutionSocket).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
LAB_14ec620cd:
  if (pTVar2->Object == (FSocket *)0x0) {
    if (1 < (byte)LogNet._0_1_) {
      if ((pTVar1->Object == (FInternetAddr *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      (**(code **)((longlong)*pTVar1->Object + 0x80))(pTVar1->Object,local_48,1);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    EVar8 = FindSocketError;
    EVar9 = Error;
  }
  else {
    EVar8 = (this->CurrentAddressIndex != 0) + TryFirstAddress;
    this->CurrentAddressIndex = this->CurrentAddressIndex + 1;
    EVar9 = Connecting;
  }
  this->ResolutionState = EVar9;
  return EVar8;
}

// CleanupResolutionSockets @ 14ec62470

void __thiscall
UE::Net::Private::FNetConnectionAddressResolution::CleanupResolutionSockets
          (FNetConnectionAddressResolution *this,ECleanupResolutionSocketsFlags param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FSocket,1> *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->ResolutionState != Disabled) {
    if ((param_1 & CleanAll) != 0) {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->ResolutionSocket != (TSharedPtr<FSocket,1> *)&local_18) {
        (this->ResolutionSocket).Object = (FSocket *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ResolutionSocket).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    piVar1 = &(this->BindSockets).ArrayMax;
    pTVar3 = (TSharedPtr<FSocket,1> *)(this->BindSockets).AllocatorInstance.Data;
    iVar2 = (this->BindSockets).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedPtr<FSocket,1>,int>(pTVar3,iVar2);
      (this->BindSockets).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FSocket,1>,int>(pTVar3,iVar2);
      (this->BindSockets).ArrayNum = 0;
    }
    DestructItems<TSharedRef<FInternetAddr,1>,int>
              ((TSharedRef<FInternetAddr,1> *)(this->ResolverResults).AllocatorInstance.Data,
               (this->ResolverResults).ArrayNum);
    piVar1 = &(this->ResolverResults).ArrayMax;
    (this->ResolverResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ResolverResults).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// InitLocalConnection @ 14ec805a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetConnectionAddressResolution::InitLocalConnection
          (FNetConnectionAddressResolution *this,ISocketSubsystem *param_1,FSocket *param_2,
          FURL *param_3)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  int *piVar2;
  FName FVar3;
  FInternetAddr *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_IpConnection_AddressSynthesis> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar14;
  FName FVar15;
  wchar_t *pwVar16;
  char local_res8 [8];
  ISocketSubsystem *local_res10;
  FColor_u_0 local_118 [2];
  uint local_110;
  uint uStack_10c;
  FName local_108;
  FInternetAddr *local_100;
  FSharedReferencer<1> local_f8;
  FInternetAddr *local_f0;
  FSharedReferencer<1> local_e8;
  FName local_e0;
  LARGE_INTEGER local_d0;
  FStatMessage local_c8;
  void *local_b8 [2];
  void *local_a8;
  void *local_98;
  int local_88;
  FAddressInfoResultData *local_80;
  int local_78;
  undefined1 local_68 [8];
  FName local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  if (this->ResolutionState != Disabled) {
    this->ResolutionState = WaitingForResolves;
    return true;
  }
  local_res8[0] = '\0';
  local_res10 = param_1;
  puVar11 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_58);
  local_f8.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
  local_100 = (FInternetAddr *)*puVar11;
  if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->RemoteAddr;
  if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_100) {
    pTVar1->Object = local_100;
    local_100 = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RemoteAddr).SharedReferenceCount,&local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if ((pTVar1->Object == (FInternetAddr *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if ((param_3->Host).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_3->Host).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pTVar1->Object + 0x10))(pTVar1->Object,pwVar16,local_res8);
  FVar3 = param_2->SocketProtocol;
  if (local_res8[0] != '\0') {
    if ((pTVar1->Object == (FInternetAddr *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar12 = (FName *)(**(code **)((longlong)*pTVar1->Object + 0xa8))(pTVar1->Object,local_68);
    if ((FVar3 == *pFVar12) && (local_res8[0] != '\0')) goto LAB_14ec809f0;
  }
  FVar13 = StatPtr_STAT_IpConnection_AddressSynthesis;
  if (StatPtr_STAT_IpConnection_AddressSynthesis ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_AddressSynthesis>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_IpConnection_AddressSynthesis");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_IpConnection_AddressSynthesis>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_AddressSynthesis,
                        *pFVar12,L"IpConnection Address Synthesis","STATGROUP_Net",
                        "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar8 = false;
  bVar7 = false;
  FVar15 = *(FName *)FVar13;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar10 == 0)) {
LAB_14ec8080a:
    bVar6 = false;
    FVar15 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar14.Value;
        local_108.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\NetAddressResolution.cpp"
                   ,0xca);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec8080a;
    local_110 = FVar14.Value;
    uStack_10c = uVar10;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar6 = true;
  }
  if ((param_3->Host).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_3->Host).Data.AllocatorInstance.Data;
  }
  (**(code **)(local_res10->_padding_ + 0x40))(local_res10,local_b8,pwVar16,0,0x89,FVar3,0);
  if ((local_88 == 0) && (0 < local_78)) {
    pFVar4 = (local_80->Address).Object;
    puVar11 = (undefined8 *)(**(code **)((longlong)*pFVar4 + 0xa0))(pFVar4,local_48);
    local_e8.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
    local_f0 = (FInternetAddr *)*puVar11;
    if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_f0) {
      pTVar1->Object = local_f0;
      local_f0 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RemoteAddr).SharedReferenceCount,&local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    local_res8[0] = '\x01';
  }
  else if (2 < (byte)LogNet._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  DestructItems<FAddressInfoResultData,int>(local_80,local_78);
  if (local_80 != (FAddressInfoResultData *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
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
      local_c8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14ec809f0:
  if ((pTVar1->Object == (FInternetAddr *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  (**(code **)((longlong)*pTVar1->Object + 0x28))(pTVar1->Object,param_3->Port);
  if ((local_res8[0] == '\0') && (5 < (byte)LogNet._0_1_)) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return (bool)local_res8[0];
}

// NotifyAddressResolutionConnected @ 14ec83650

void __thiscall
UE::Net::Private::FNetConnectionAddressResolution::NotifyAddressResolutionConnected
          (FNetConnectionAddressResolution *this)

{
  if (this->ResolutionState == Connecting) {
    this->ResolutionState = Connected;
  }
  return;
}

// NotifyReceiveError @ 14ec84470

EEAddressResolutionHandleResult __thiscall
UE::Net::Private::FNetConnectionAddressResolution::NotifyReceiveError
          (FNetConnectionAddressResolution *this)

{
  EAddressResolutionState EVar1;
  EEAddressResolutionHandleResult EVar2;
  
  if (((this->CurrentAddressIndex < (this->ResolverResults).ArrayNum) &&
      (this->ResolutionState != Disabled)) && (1 < (byte)(this->ResolutionState - Done))) {
    EVar2 = CallerShouldHandle;
  }
  else {
    EVar2 = HandledInternally;
  }
  EVar1 = TryNextAddress;
  if (EVar2 == HandledInternally) {
    EVar1 = Error;
  }
  this->ResolutionState = EVar1;
  return EVar2 ^ CallerShouldHandle;
}

// NotifySendError @ 14ec844c0

EEAddressResolutionHandleResult __thiscall
UE::Net::Private::FNetConnectionAddressResolution::NotifySendError
          (FNetConnectionAddressResolution *this)

{
  EAddressResolutionState EVar1;
  EEAddressResolutionHandleResult EVar2;
  
  if (((this->CurrentAddressIndex < (this->ResolverResults).ArrayNum) &&
      (this->ResolutionState != Disabled)) && (1 < (byte)(this->ResolutionState - Done))) {
    EVar2 = CallerShouldHandle;
  }
  else {
    EVar2 = HandledInternally;
  }
  EVar1 = TryNextAddress;
  if (EVar2 == HandledInternally) {
    EVar1 = Error;
  }
  this->ResolutionState = EVar1;
  return EVar2 ^ CallerShouldHandle;
}

// NotifyTimeout @ 14ec84510

EEAddressResolutionHandleResult __thiscall
UE::Net::Private::FNetConnectionAddressResolution::NotifyTimeout
          (FNetConnectionAddressResolution *this)

{
  if (((this->CurrentAddressIndex < (this->ResolverResults).ArrayNum) &&
      (this->ResolutionState != Disabled)) && (1 < (byte)(this->ResolutionState - Done))) {
    this->ResolutionState = TryNextAddress;
    return HandledInternally;
  }
  return CallerShouldHandle;
}


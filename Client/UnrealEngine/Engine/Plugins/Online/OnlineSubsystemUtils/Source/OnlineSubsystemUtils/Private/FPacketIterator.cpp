// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// FPacketIterator @ 14ec52710

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FPacketIterator * __thiscall
FPacketIterator::FPacketIterator
          (FPacketIterator *this,UIpNetDriver *param_1,FRecvMulti *param_2,double param_3,
          bool param_4)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  TUniquePtr<FPacketIterator::FCachedPacket,TDefaultDelete<FPacketIterator::FCachedPacket>_> *pTVar2
  ;
  double dVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  ISocketSubsystem *pIVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FCachedPacket *pFVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  FCachedPacket *pFVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  double dVar17;
  LARGE_INTEGER local_res8;
  longlong local_78;
  FInternetAddr *local_70;
  FSharedReferencer<1> local_68;
  FReadAccessScope local_60 [2];
  
  this->bBreak = false;
  this->DDoS = (FDDoSDetection *)&param_1->_padding_;
  this->IterationCount = 0;
  this->Driver = param_1;
  pIVar7 = (ISocketSubsystem *)(**(code **)(param_1->_padding_ + 0x408))(param_1);
  this->SocketSubsystem = pIVar7;
  this->SocketReceiveThreadRunnable = (param_1->SocketReceiveThreadRunnable).Ptr;
  memset(&this->CurrentPacket,0,0x430);
  (this->CurrentPacket).Data.ArrayMax = 0x400;
  pTVar4 = CVarNetDebugDualIPs.Ref;
  pTVar1 = &(this->CurrentPacket).Address;
  bVar5 = IsInParallelGameThread();
  lVar15 = 4;
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 4;
  }
  iVar6 = *(int *)((longlong)pTVar4->ShadowedValue + lVar8);
  pTVar2 = &this->DuplicatePacket;
  this->RMState = param_2;
  this->bDebugDualIPs = iVar6 != 0;
  pTVar2->Ptr = (FCachedPacket *)0x0;
  pTVar4 = CVarNetUseRecvMulti.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar15 = 0;
  }
  if ((*(int *)((longlong)pTVar4->ShadowedValue + lVar15) == 0) || (param_2 == (FRecvMulti *)0x0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  this->bUseRecvMulti = bVar5;
  this->StartReceiveTime = param_3;
  this->RecvMultiIdx = 0;
  this->RecvMultiPacketCount = 0;
  this->bCheckReceiveTime = param_4;
  if (param_4 == false) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1->NbPacketsBetweenReceiveTimeTest;
  }
  this->CheckReceiveTimePacketCount = iVar6;
  this->NumIterationUntilTimeTest = iVar6;
  this->BailOutTime = param_3 + param_1->MaxSecondsInReceive;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UIpNetDriver::OnNetworkProcessingCausingSlowFrame,local_60);
  iVar6 = UIpNetDriver::OnNetworkProcessingCausingSlowFrame._16_4_;
  plVar14 = (longlong *)
            ((longlong)iVar6 * 0x10 + UIpNetDriver::OnNetworkProcessingCausingSlowFrame._8_8_);
  uVar11 = UIpNetDriver::OnNetworkProcessingCausingSlowFrame._16_8_;
  plVar16 = (longlong *)UIpNetDriver::OnNetworkProcessingCausingSlowFrame._8_8_;
  while( true ) {
    if ((int)uVar11 != iVar6) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
      uVar11 = UIpNetDriver::OnNetworkProcessingCausingSlowFrame._16_8_;
    }
    if (plVar16 == plVar14) {
      bVar5 = false;
      goto LAB_14ec528c7;
    }
    if (((int)plVar16[1] != 0) && (*plVar16 != 0)) break;
    plVar16 = plVar16 + 2;
  }
  bVar5 = true;
LAB_14ec528c7:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_60);
  this->bSlowFrameChecks = bVar5;
  this->AlarmTime = (double)GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecs + param_3;
  if ((this->bUseRecvMulti == false) &&
     (pIVar7 = this->SocketSubsystem, pIVar7 != (ISocketSubsystem *)0x0)) {
    puVar9 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x90))(pIVar7,local_60);
    local_68.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    local_70 = (FInternetAddr *)*puVar9;
    if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_70) {
      pTVar1->Object = local_70;
      local_70 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentPacket).Address.SharedReferenceCount,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_60[0].DestructionSentinel.Accessor._4_4_,
                        (int)local_60[0].DestructionSentinel.Accessor));
  }
  if ((this->bDebugDualIPs != false) && (this->bUseRecvMulti == false)) {
    pFVar10 = ::operator_new(0x430);
    if (pFVar10 == (FCachedPacket *)0x0) {
      pFVar10 = (FCachedPacket *)0x0;
    }
    else {
      memset(pFVar10,0,0x430);
      (pFVar10->Data).ArrayMax = 0x400;
    }
    if (pTVar2 == (TUniquePtr<FPacketIterator::FCachedPacket,TDefaultDelete<FPacketIterator::FCachedPacket>_>
                   *)&local_78) {
      if (pFVar10 == (FCachedPacket *)0x0) goto LAB_14ec529e9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->Address).SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar13 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar10;
      if (pFVar13 == (FCachedPacket *)0x0) goto LAB_14ec529e9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->Address).SharedReferenceCount.ReferenceController);
      pFVar10 = pFVar13;
    }
    ::operator_delete(pFVar10,0x430);
  }
LAB_14ec529e9:
  dVar17 = __real_4170000000000000;
  if (this->bSlowFrameChecks != false) {
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
    if (this->AlarmTime <= dVar3 && dVar3 != this->AlarmTime) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&UIpNetDriver::OnNetworkProcessingCausingSlowFrame);
      this->AlarmTime = (double)GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecs + dVar3;
    }
  }
  if (((this->bCheckReceiveTime != false) && (0 < this->IterationCount)) &&
     (this->NumIterationUntilTimeTest = this->NumIterationUntilTimeTest + -1,
     this->NumIterationUntilTimeTest < 1)) {
    this->NumIterationUntilTimeTest = this->CheckReceiveTimePacketCount;
    QueryPerformanceCounter(&local_res8);
    dVar17 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
    if (this->BailOutTime <= dVar17 && dVar17 != this->BailOutTime) {
      this->bBreak = true;
      if ((byte)LogNet._0_1_ < 6) {
        return this;
      }
      local_res8 = (LARGE_INTEGER)this->Driver->_padding_;
      ::FName::ToString((FName *)&local_res8.s,(FString *)local_60);
      UE::Logging::Private::BasicLog<6>
                (&`private:_void___cdecl_FPacketIterator::AdvanceCurrentPacket(void)___ptr64'::__l18
                  ::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((FScriptContainerElement *)local_60[0].DestructionSentinel._0_8_ !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_60[0].DestructionSentinel._0_8_);
      }
    }
  }
  if (this->bBreak != false) {
    return this;
  }
  if ((this->bDebugDualIPs == false) ||
     (uVar12 = this->IterationCount >> 0x3f, ((uint)this->IterationCount & 1 ^ uVar12) - uVar12 != 1
     )) {
    if (this->bUseRecvMulti != false) {
      if ((this->RecvMultiPacketCount != 0) &&
         (iVar6 = this->RecvMultiIdx + 1, iVar6 < this->RecvMultiPacketCount)) {
        this->RecvMultiIdx = iVar6;
        return this;
      }
      AdvanceRecvMultiState(this);
      return this;
    }
    bVar5 = ReceiveSinglePacket(this);
    this->bBreak = !bVar5;
    if (this->bDebugDualIPs == false) {
      return this;
    }
    if (!bVar5) {
      return this;
    }
    pFVar10 = pTVar2->Ptr;
    pFVar13 = &this->CurrentPacket;
  }
  else {
    pFVar13 = pTVar2->Ptr;
    pFVar10 = &this->CurrentPacket;
  }
  FCachedPacket::operator=(pFVar10,pFVar13);
  return this;
}

// ~FPacketIterator @ 14ec562c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPacketIterator::~FPacketIterator(FPacketIterator *this)

{
  FCachedPacket *pFVar1;
  LARGE_INTEGER local_res8;
  FString local_28 [2];
  
  QueryPerformanceCounter(&local_res8);
  if ((GIpNetDriverLongFramePrintoutThresholdSecs <
       (float)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000) - this->StartReceiveTime)) && (2 < (byte)LogNet._0_1_)) {
    local_res8 = (LARGE_INTEGER)this->Driver->_padding_;
    ::FName::ToString((FName *)&local_res8.s,local_28);
    UE::Logging::Private::BasicLog<3>
              (&`private:___cdecl_FPacketIterator::~FPacketIterator(void)___ptr64'::__l6::LOG_Static
               ,(FLogCategoryBase *)&LogNet);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (this->DuplicatePacket).Ptr;
  if (pFVar1 != (FCachedPacket *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Address).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x430);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentPacket).Address.SharedReferenceCount.ReferenceController);
  return;
}

// AdvanceCurrentPacket @ 14ec5fd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPacketIterator::AdvanceCurrentPacket(FPacketIterator *this)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  LARGE_INTEGER local_res8 [4];
  FString local_28 [2];
  
  if (this->bSlowFrameChecks != false) {
    QueryPerformanceCounter(local_res8);
    dVar4 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (this->AlarmTime <= dVar4 && dVar4 != this->AlarmTime) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&UIpNetDriver::OnNetworkProcessingCausingSlowFrame);
      this->AlarmTime = (double)GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecs + dVar4;
    }
  }
  if (((this->bCheckReceiveTime != false) && (0 < this->IterationCount)) &&
     (this->NumIterationUntilTimeTest = this->NumIterationUntilTimeTest + -1,
     this->NumIterationUntilTimeTest < 1)) {
    this->NumIterationUntilTimeTest = this->CheckReceiveTimePacketCount;
    QueryPerformanceCounter(local_res8);
    dVar4 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (this->BailOutTime <= dVar4 && dVar4 != this->BailOutTime) {
      this->bBreak = true;
      if ((byte)LogNet._0_1_ < 6) {
        return;
      }
      local_res8[0] = (LARGE_INTEGER)this->Driver->_padding_;
      ::FName::ToString((FName *)&local_res8[0].s,local_28);
      UE::Logging::Private::BasicLog<6>
                (&`private:_void___cdecl_FPacketIterator::AdvanceCurrentPacket(void)___ptr64'::__l18
                  ::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
  }
  if (this->bBreak == false) {
    if ((this->bDebugDualIPs != false) &&
       (uVar3 = this->IterationCount >> 0x3f, ((uint)this->IterationCount & 1 ^ uVar3) - uVar3 == 1)
       ) {
      FCachedPacket::operator=(&this->CurrentPacket,(this->DuplicatePacket).Ptr);
      return;
    }
    if (this->bUseRecvMulti != false) {
      if ((this->RecvMultiPacketCount != 0) &&
         (iVar2 = this->RecvMultiIdx + 1, iVar2 < this->RecvMultiPacketCount)) {
        this->RecvMultiIdx = iVar2;
        return;
      }
      AdvanceRecvMultiState(this);
      return;
    }
    bVar1 = ReceiveSinglePacket(this);
    this->bBreak = !bVar1;
    if ((this->bDebugDualIPs != false) && (bVar1)) {
      FCachedPacket::operator=((this->DuplicatePacket).Ptr,&this->CurrentPacket);
      return;
    }
  }
  return;
}

// AdvanceRecvMultiState @ 14ec5ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPacketIterator::AdvanceRecvMultiState(FPacketIterator *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket> FVar10;
  longlong *plVar11;
  FThreadStats *pFVar12;
  FStatMessage *pFVar13;
  FNameEntryId FVar14;
  uint uVar15;
  FName FVar16;
  LARGE_INTEGER local_res8;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FStatMessage local_58;
  
  this->RecvMultiIdx = 0;
  this->RecvMultiPacketCount = 0;
  lVar8 = (**(code **)(this->Driver->_padding_ + 0x500))();
  this->bBreak = lVar8 == 0;
  if (lVar8 != 0) {
    do {
      FVar10 = StatPtr_STAT_IpNetDriver_RecvFromSocket;
      if (StatPtr_STAT_IpNetDriver_RecvFromSocket ==
          (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)0x0) {
        pFVar9 = ::FName::FName(&local_80,"STAT_IpNetDriver_RecvFromSocket");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_RecvFromSocket,
                            *pFVar9,L"IpNetDriver Socket RecvFrom","STATGROUP_Net",
                            "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar16 = *(FName *)FVar10;
      bVar4 = false;
      bVar3 = false;
      local_78.ComparisonIndex.Value = 0;
      local_78.Number = 0;
      FVar14 = FVar16.ComparisonIndex.Value;
      uVar15 = FVar16.Number;
      if ((FVar14.Value == 0) && (uVar15 == 0)) {
LAB_14ec6009b:
        bVar5 = false;
        FVar16 = local_78;
        FVar14.Value = 0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8.s.LowPart = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
          bVar4 = false;
          bVar3 = true;
          if (-1 < CpuChannel->Enabled) {
            local_res10.ComparisonIndex.Value = FVar14.Value;
            local_res10.Number = uVar15;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                       ,0x24c);
            bVar4 = true;
            bVar3 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec6009b;
        local_res18 = FVar14.Value;
        uStackX_1c = uVar15;
        local_78 = FVar16;
        FThreadStats::AddMessage(FVar16,CycleScopeStart);
        bVar5 = true;
        FVar14.Value = local_78.ComparisonIndex.Value;
      }
      lVar8 = (**(code **)(this->Driver->_padding_ + 0x500))();
      uVar15 = FVar16.Number;
      if (lVar8 == 0) goto LAB_14ec6027a;
      plVar11 = (longlong *)(**(code **)(this->Driver->_padding_ + 0x500))();
      cVar6 = (**(code **)(*plVar11 + 0x78))(plVar11,this->RMState);
      if (cVar6 == '\0') {
        if ((this->SocketSubsystem == (ISocketSubsystem *)0x0) ||
           ((uVar7 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))(), uVar7 < 0x1a &&
            ((0x2400081U >> (uVar7 & 0x1f) & 1) != 0)))) {
          this->bBreak = true;
          goto LAB_14ec6027a;
        }
        if (bVar3) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && ((FThreadStats::TlsSlot != 0xffffffff &&
               (pFVar12 = FThreadStats::GetThreadStats(),
               pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount)))) {
          local_68.NameAndInfo.Number = uVar15 & 0xffff6fff | 0x6000;
          local_68.NameAndInfo.Index.Value = FVar14.Value;
          QueryPerformanceCounter(&local_res20);
          local_68.StatData.Pad[4] = '\0';
          local_68.StatData.Pad[5] = '\0';
          local_68.StatData.Pad[6] = '\0';
          local_68.StatData.Pad[7] = '\0';
          local_68.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
          local_68.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
          local_68.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
          local_68.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
          pFVar13 = &local_68;
LAB_14ec60231:
          FThreadStats::AddStatMessage(pFVar12,pFVar13);
          piVar1 = &pFVar12->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
      else {
        iVar2 = this->RMState->NumPackets;
        if (this->DDoS->bHitFrameNetConnLimit == false) {
          this->RecvMultiPacketCount = iVar2;
LAB_14ec6027a:
          if (bVar3) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (!bVar5) {
            return;
          }
          if (FVar16 == (FName)0x0) {
            return;
          }
          if (FThreadStats::bPrimaryDisableForever != false) {
            return;
          }
          if (FThreadStats::TlsSlot == 0xffffffff) {
            return;
          }
          pFVar12 = FThreadStats::GetThreadStats();
          if (pFVar12->ScopeCount <= pFVar12->bWaitForExplicitFlush) {
            return;
          }
          local_58.NameAndInfo.Number = uVar15 & 0xffff6fff | 0x6000;
          local_58.NameAndInfo.Index.Value = FVar14.Value;
          QueryPerformanceCounter(&local_res8);
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
          local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
          local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
          local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar12,&local_58);
          piVar1 = &pFVar12->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar12,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive == false) {
            return;
          }
          FThreadStats::FlushRawStats(pFVar12,false,false);
          return;
        }
        piVar1 = (int *)((longlong)&this->DDoS->_padding_ + 4);
        *piVar1 = *piVar1 + iVar2;
        if (iVar2 < 0xb) {
          this->bBreak = true;
          goto LAB_14ec6027a;
        }
        if (bVar3) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && ((FThreadStats::TlsSlot != 0xffffffff &&
               (pFVar12 = FThreadStats::GetThreadStats(),
               pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount)))) {
          local_58.NameAndInfo.Number = uVar15 & 0xffff6fff | 0x6000;
          local_58.NameAndInfo.Index.Value = FVar14.Value;
          QueryPerformanceCounter(&local_88);
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_58.StatData.Pad[0] = local_88.s.LowPart._0_1_;
          local_58.StatData.Pad[1] = local_88.s.LowPart._1_1_;
          local_58.StatData.Pad[2] = local_88.s.LowPart._2_1_;
          local_58.StatData.Pad[3] = local_88.s.LowPart._3_1_;
          pFVar13 = &local_58;
          goto LAB_14ec60231;
        }
      }
    } while (this->bBreak == false);
  }
  return;
}

// GetCurrentPacket @ 14ec74b60

bool __thiscall
FPacketIterator::GetCurrentPacket(FPacketIterator *this,FReceivedPacketView *param_1)

{
  int iVar1;
  uint uVar2;
  FRecvMulti *pFVar3;
  FInternetAddr *pFVar4;
  FInternetAddr FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  short sVar9;
  ulonglong uVar10;
  FRecvData *pFVar11;
  TSharedPtr<FInternetAddr_const_,1> *pTVar12;
  FInternetAddr *local_98;
  TReferenceControllerBase<1> *local_90;
  FInternetAddr *local_88;
  FSharedReferencer<1> local_80;
  FInternetAddr *local_78;
  FSharedReferencer<1> local_70;
  FInternetAddr *local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  uchar *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  TArray<unsigned_char,TFixedAllocator<1024>_> *local_30;
  int iStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 uStack_1c;
  
  if (this->bUseRecvMulti == false) {
    local_30 = &(this->CurrentPacket).Data;
    iVar1 = (this->CurrentPacket).Data.ArrayNum;
    iStack_28 = iVar1;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_20 = iVar1 * 8;
    (param_1->DataView).Data.DataPtr = (uchar *)local_30;
    *(ulonglong *)&(param_1->DataView).Data.ArrayNum = CONCAT44(uStack_24,iStack_28);
    *(ulonglong *)&(param_1->DataView).CountBits = CONCAT44(uStack_1c,local_20);
    param_1->Error = (this->CurrentPacket).Error;
    local_70.ReferenceController =
         (this->CurrentPacket).Address.SharedReferenceCount.ReferenceController;
    local_78 = (this->CurrentPacket).Address.Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->Address != (TSharedPtr<FInternetAddr_const_,1> *)&local_78) {
      (param_1->Address).Object = local_78;
      local_78 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->Address).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    uVar8 = (this->CurrentPacket).bRecvSuccess;
  }
  else {
    iVar1 = this->RecvMultiIdx;
    pFVar3 = this->RMState;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketIdx >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\SocketTypes.h"
                         ,0xe8,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    if (pFVar3->NumPackets <= iVar1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketIdx < NumPackets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\SocketTypes.h"
                         ,0xe9,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar11 = (pFVar3->Packets).Ptr + iVar1;
    uVar2 = *pFVar11->BytesReadPtr;
    local_48 = pFVar11->Data;
    uStack_40 = uVar2;
    if ((int)uVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_38 = uVar2 * 8;
    (param_1->DataView).Data.DataPtr = local_48;
    *(ulonglong *)&(param_1->DataView).Data.ArrayNum = CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)&(param_1->DataView).CountBits = CONCAT44(uStack_34,local_38);
    local_80.ReferenceController = (pFVar11->Source).SharedReferenceCount.ReferenceController;
    local_88 = (pFVar11->Source).Object;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->Address != (TSharedPtr<FInternetAddr_const_,1> *)&local_88) {
      (param_1->Address).Object = local_88;
      local_88 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->Address).SharedReferenceCount,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    param_1->Error = SE_NO_ERROR;
    uVar8 = 1;
  }
  pTVar12 = &param_1->Address;
  if (((this->bDebugDualIPs != false) &&
      (uVar10 = this->IterationCount >> 0x3f,
      ((uint)this->IterationCount & 1 ^ uVar10) - uVar10 == 1)) &&
     (pFVar4 = pTVar12->Object, pFVar4 != (FInternetAddr *)0x0)) {
    (**(code **)((longlong)*pFVar4 + 0xa0))(pFVar4,&local_98);
    pFVar4 = local_98;
    FVar5 = *local_98;
    sVar9 = (**(code **)((longlong)FVar5 + 0x38))(local_98);
    (**(code **)((longlong)FVar5 + 0x28))(pFVar4,sVar9 + 0x2694);
    local_68 = local_98;
    local_60.ReferenceController = local_90;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 != (TSharedPtr<FInternetAddr_const_,1> *)&local_68) {
      pTVar12->Object = local_98;
      local_68 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->Address).SharedReferenceCount,&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    local_50.ReferenceController = local_90;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    GCurrentDuplicateIP.Object = local_98;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&GCurrentDuplicateIP.SharedReferenceCount,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  return (bool)uVar8;
}

// ReceiveSinglePacket @ 14ec8f2b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPacketIterator::ReceiveSinglePacket(FPacketIterator *this)

{
  int *piVar1;
  FInternetAddr *pFVar2;
  FReceiveThreadRunnable *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  ESocketErrors EVar11;
  longlong lVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket> FVar14;
  longlong *plVar15;
  FThreadStats *pFVar16;
  uint uVar17;
  int iVar18;
  FNameEntryId FVar19;
  size_t _Size;
  FName FVar20;
  TSharedPtr<FInternetAddr,1> *pTVar21;
  char cVar22;
  int local_res8 [2];
  FColor_u_0 local_res10 [4];
  FName local_res20;
  wchar_t *in_stack_fffffffffffffed0;
  FReceivedPacket local_f8;
  uint local_c8;
  uint uStack_c4;
  FInternetAddr *local_c0;
  FSharedReferencer<1> local_b8;
  FName local_b0;
  LARGE_INTEGER local_a0;
  TArray<unsigned_char,TFixedAllocator<1024>_> *local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68 [5];
  
  local_98 = &(this->CurrentPacket).Data;
  (this->CurrentPacket).bRecvSuccess = false;
  TArray<unsigned_char,TFixedAllocator<1024>_>::SetNumUninitialized(local_98,0,No);
  pFVar2 = (this->CurrentPacket).Address.Object;
  if (pFVar2 != (FInternetAddr *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x68))();
  }
  (this->CurrentPacket).PacketTimestamp = 0.0;
  (this->CurrentPacket).Error = SE_NO_ERROR;
  do {
    while( true ) {
      pTVar21 = &(this->CurrentPacket).Address;
      pFVar3 = this->SocketReceiveThreadRunnable;
      bVar8 = false;
      if (pFVar3 != (FReceiveThreadRunnable *)0x0) break;
      lVar12 = (**(code **)(this->Driver->_padding_ + 0x500))();
      if (lVar12 == 0) {
        return false;
      }
      if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
        return false;
      }
      FVar14 = StatPtr_STAT_IpNetDriver_RecvFromSocket;
      if (StatPtr_STAT_IpNetDriver_RecvFromSocket ==
          (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)0x0) {
        pFVar13 = ::FName::FName(local_68,"STAT_IpNetDriver_RecvFromSocket");
        in_stack_fffffffffffffed0 = L"Net";
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_RecvFromSocket,
                            *pFVar13,L"IpNetDriver Socket RecvFrom","STATGROUP_Net",
                            "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar20 = *(FName *)FVar14;
      bVar8 = false;
      bVar7 = false;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      FVar19 = FVar20.ComparisonIndex.Value;
      uVar17 = FVar20.Number;
      if ((FVar19.Value == 0) && (uVar17 == 0)) {
LAB_14ec8f5fd:
        bVar5 = false;
        FVar20 = local_b0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res10[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
          bVar8 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_res20.ComparisonIndex.Value = FVar19.Value;
            local_res20.Number = uVar17;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                       ,0x212);
            bVar8 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec8f5fd;
        local_c8 = FVar19.Value;
        uStack_c4 = uVar17;
        local_b0 = FVar20;
        FThreadStats::AddMessage(FVar20,CycleScopeStart);
        bVar5 = true;
      }
      local_res8[0] = 0;
      plVar15 = (longlong *)(**(code **)(this->Driver->_padding_ + 0x500))();
      pcVar4 = *(code **)(*plVar15 + 0x68);
      if ((pTVar21->Object == (FInternetAddr *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      in_stack_fffffffffffffed0 =
           (wchar_t *)((ulonglong)in_stack_fffffffffffffed0 & 0xffffffff00000000);
      bVar10 = (bool)(*pcVar4)(plVar15,&(this->CurrentPacket).Data,0x400,local_res8,pTVar21->Object,
                               in_stack_fffffffffffffed0);
      (this->CurrentPacket).bRecvSuccess = bVar10;
      cVar22 = bVar10;
      if (bVar10 == false) {
        EVar11 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
        (this->CurrentPacket).Error = EVar11;
        TArray<unsigned_char,TFixedAllocator<1024>_>::SetNumUninitialized
                  (&(this->CurrentPacket).Data,0,No);
        if ((EVar11 < SE_ECONNRESET) && ((0x2400081U >> (EVar11 & SE_ETOOMANYREFS) & 1) != 0))
        goto LAB_14ec8f892;
        cVar22 = '\x01';
      }
      else {
        TArray<unsigned_char,TFixedAllocator<1024>_>::SetNumUninitialized
                  (&(this->CurrentPacket).Data,local_res8[0],No);
      }
      if (this->DDoS->bHitFrameNetConnLimit == false) {
LAB_14ec8f892:
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar5) {
          return (bool)cVar22;
        }
        if (FVar20 == (FName)0x0) {
          return (bool)cVar22;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return (bool)cVar22;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return (bool)cVar22;
        }
        pFVar16 = FThreadStats::GetThreadStats();
        if (pFVar16->ScopeCount <= pFVar16->bWaitForExplicitFlush) {
          return (bool)cVar22;
        }
        local_78.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        local_78.NameAndInfo.Index.Value = FVar20.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_90);
        local_78.StatData.Pad[4] = '\0';
        local_78.StatData.Pad[5] = '\0';
        local_78.StatData.Pad[6] = '\0';
        local_78.StatData.Pad[7] = '\0';
        local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
        local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
        local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
        local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_78);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
          return (bool)cVar22;
        }
        if (FThreadStats::bIsRawStatsActive == false) {
          return (bool)cVar22;
        }
        FThreadStats::FlushRawStats(pFVar16,false,false);
        return (bool)cVar22;
      }
      if (bVar10 != false) {
        piVar1 = (int *)((longlong)&this->DDoS->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && ((FThreadStats::TlsSlot != 0xffffffff &&
             (pFVar16 = FThreadStats::GetThreadStats(),
             pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount)))) {
        local_88.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        local_88.NameAndInfo.Index.Value = FVar20.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_a0);
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_88.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
        local_88.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
        local_88.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
        local_88.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_88);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    if (this->DDoS->bHitFrameNetConnLimit != false) {
      iVar18 = (int)(pFVar3->ReceiveQueue).Tail - (int)(pFVar3->ReceiveQueue).Head;
      if (iVar18 < 0) {
        iVar18 = iVar18 + (pFVar3->ReceiveQueue).Buffer.Elements.ArrayNum;
      }
      LOCK();
      (this->SocketReceiveThreadRunnable->ReceiveQueue).Head =
           (this->SocketReceiveThreadRunnable->ReceiveQueue).Tail;
      UNLOCK();
      if (iVar18 == 0) {
        return false;
      }
      piVar1 = (int *)((longlong)&this->DDoS->_padding_ + 4);
      *piVar1 = *piVar1 + iVar18;
      return false;
    }
    local_f8.PlatformTimeSeconds = 0.0;
    local_f8.PacketBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.PacketBytes.ArrayNum = 0;
    local_f8.PacketBytes.ArrayMax = 0;
    local_f8.FromAddress.Object = (FInternetAddr *)0x0;
    local_f8.FromAddress.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_f8.Error = SE_NO_ERROR;
    bVar7 = TCircularQueue<UIpNetDriver::FReceivedPacket>::Dequeue(&pFVar3->ReceiveQueue,&local_f8);
    pFVar2 = local_f8.FromAddress.Object;
    if (!bVar7) goto LAB_14ec8f842;
    if (local_f8.FromAddress.Object != (FInternetAddr *)0x0) {
      if ((local_f8.FromAddress.Object == (FInternetAddr *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FVar6.ReferenceController = local_f8.FromAddress.SharedReferenceCount.ReferenceController;
      if (local_f8.FromAddress.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.FromAddress.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.FromAddress.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FInternetAddr *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      local_c0 = pFVar2;
      local_b8.ReferenceController = FVar6.ReferenceController;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar21 != (TSharedPtr<FInternetAddr,1> *)&local_c0) {
        pTVar21->Object = pFVar2;
        local_c0 = (FInternetAddr *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CurrentPacket).Address.SharedReferenceCount,&local_b8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    bVar8 = local_f8.Error == SE_NO_ERROR;
    (this->CurrentPacket).PacketTimestamp = local_f8.PlatformTimeSeconds;
    (this->CurrentPacket).bRecvSuccess = bVar8;
    (this->CurrentPacket).Error = local_f8.Error;
    if (local_f8.Error != SE_NO_ERROR) {
      if ((SE_ECONNABORTED < local_f8.Error) ||
         ((0x2400080U >> (local_f8.Error & SE_ETOOMANYREFS) & 1) == 0)) {
        bVar8 = true;
      }
      goto LAB_14ec8f842;
    }
    _Size = (size_t)local_f8.PacketBytes.ArrayNum;
    if (local_f8.PacketBytes.ArrayNum < 0x401) {
      TArray<unsigned_char,TFixedAllocator<1024>_>::SetNumUninitialized
                (local_98,local_f8.PacketBytes.ArrayNum,No);
      memcpy(local_98,local_f8.PacketBytes.AllocatorInstance.Data,_Size);
LAB_14ec8f842:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.FromAddress.SharedReferenceCount.ReferenceController);
      if (local_f8.PacketBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.PacketBytes.AllocatorInstance.Data);
      }
      return bVar8;
    }
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_bool___cdecl_FPacketIterator::ReceiveSinglePacket(void)___ptr64'::__l33
                  ::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.FromAddress.SharedReferenceCount.ReferenceController);
    if (local_f8.PacketBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.PacketBytes.AllocatorInstance.Data);
    }
  } while( true );
}


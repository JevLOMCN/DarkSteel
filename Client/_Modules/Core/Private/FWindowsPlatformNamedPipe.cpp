// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FWindowsPlatformNamedPipe @ 141a9c620

FWindowsPlatformNamedPipe * __thiscall
FWindowsPlatformNamedPipe::FWindowsPlatformNamedPipe(FWindowsPlatformNamedPipe *this)

{
  undefined1 *puVar1;
  
  FGenericPlatformNamedPipe::FGenericPlatformNamedPipe((FGenericPlatformNamedPipe *)this);
  this->_padding_ = (longlong)&___7FWindowsPlatformNamedPipe__6B_;
  this->bUseOverlapped = false;
  this->bIsServer = false;
  this->Pipe = (void *)0x0;
  this->LastWaitingTime = 0.0;
  this->State = State_Uninitialized;
  (this->Overlapped).Opaque[0] = (void *)0x0;
  (this->Overlapped).Opaque[1] = (void *)0x0;
  (this->Overlapped).Opaque[2] = (void *)0x0;
  (this->Overlapped).Opaque2[0] = 0;
  (this->Overlapped).Opaque2[1] = 0;
  return this;
}

// ~FWindowsPlatformNamedPipe @ 141a9d440

void __thiscall
FWindowsPlatformNamedPipe::~FWindowsPlatformNamedPipe(FWindowsPlatformNamedPipe *this)

{
  this->_padding_ = (longlong)&___7FWindowsPlatformNamedPipe__6B_;
  FGenericPlatformNamedPipe::~FGenericPlatformNamedPipe((FGenericPlatformNamedPipe *)this);
  return;
}

// BlockForAsyncIO @ 141aa0fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsPlatformNamedPipe::BlockForAsyncIO(FWindowsPlatformNamedPipe *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Sleep> FVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  undefined1 local_res8 [8];
  FColor_u_0 local_res10 [4];
  FScopeIdle local_res20;
  FName local_a8;
  uint local_a0;
  uint uStack_9c;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  code *local_60;
  undefined1 *local_58;
  
LAB_141aa0ff0:
  FVar9 = StatPtr_STAT_Sleep;
  if (StatPtr_STAT_Sleep == (FThreadSafeStaticStat<FStat_STAT_Sleep>)0x0) {
    pFVar8 = ::FName::FName(&local_88,"STAT_Sleep");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Sleep>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Sleep,*pFVar8,L"CPU Stall - Sleep"
                       ,"STATGROUP_CPUStalls","STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_141aa111a:
    bVar4 = false;
    FVar14 = local_80;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar13.Value;
        local_a8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                   ,0x741);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141aa111a;
    local_a0 = FVar13.Value;
    uStack_9c = uVar12;
    local_80 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar3 = false;
    bVar4 = true;
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_res20,false);
  Sleep(9);
  if (local_res20.bIgnore == false) {
    puVar10 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_58 = local_res8;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar10);
    QueryPerformanceCounter(&local_98);
    *(DWORD *)(pFVar11 + 2) = *(int *)(pFVar11 + 2) + (local_98.s.LowPart - local_res20.Start);
    if (0 < *(int *)(pFVar11 + 3)) {
      *(DWORD *)&pFVar11[2].field_0x4 =
           *(int *)&pFVar11[2].field_0x4 + (local_98.s.LowPart - local_res20.Start);
    }
    pFVar11[3].field_0x4 = 0;
  }
  if (local_res20.TraceEventScope.bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
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
  cVar5 = (**(code **)(this->_padding_ + 0x38))(this);
  if (cVar5 == '\0') {
    return false;
  }
  switch(this->State) {
  case State_Uninitialized:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0xe2,L"");
    if (!bVar6) {
      return true;
    }
    break;
  case State_Created:
  case State_ReadyForRW:
    return true;
  case State_Connecting:
  case State_WaitingForRW:
    goto switchD_141aa12b5_caseD_2;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0xf4,L"");
    if (!bVar6) {
      return true;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return (bool)uVar7;
switchD_141aa12b5_caseD_2:
  if ((!this->bUseOverlapped) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseOverlapped",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0xec,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  goto LAB_141aa0ff0;
}

// Create @ 141aa25b0

bool __thiscall
FWindowsPlatformNamedPipe::Create
          (FWindowsPlatformNamedPipe *this,FString *param_1,bool param_2,bool param_3)

{
  FString *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  HANDLE pvVar4;
  wchar_t *lpFileName;
  
  lpFileName = L"";
  if ((this->State != State_Uninitialized) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == State_Uninitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x2e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = (FString *)this->_padding_;
  ::FString::operator=(this_00,param_1);
  this->bIsServer = false;
  this->field_0x40 = this->field_0x40 | param_2 * '\x02';
  if (param_2) {
    if ((this_00->Data).ArrayNum != 0) {
      lpFileName = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
    }
    pvVar4 = CreateNamedPipeW(lpFileName,(uint)param_3 * 0x40000000 + 0x80003,0,1,0,0,0,
                              (LPSECURITY_ATTRIBUTES)0x0);
  }
  else {
    if ((this_00->Data).ArrayNum != 0) {
      lpFileName = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
    }
    pvVar4 = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                         (uint)param_3 * 0x40000000 + 0x80,(HANDLE)0x0);
  }
  this->Pipe = pvVar4;
  bVar2 = (longlong)pvVar4 - 1U < 0xfffffffffffffffe;
  if (bVar2) {
    (this->Overlapped).Opaque[0] = (void *)0x0;
    (this->Overlapped).Opaque[1] = (void *)0x0;
    (this->Overlapped).Opaque[2] = (void *)0x0;
    (this->Overlapped).Opaque2[0] = 0;
    (this->Overlapped).Opaque2[1] = 0;
    this->bUseOverlapped = false;
    this->field_0x40 = this->field_0x40 | param_3;
    this->State = (param_2 ^ 1) * 2 + State_Created;
  }
  return bVar2;
}

// Destroy @ 141aa4890

bool __thiscall FWindowsPlatformNamedPipe::Destroy(FWindowsPlatformNamedPipe *this)

{
  FString *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  
  this_00 = (FString *)this->_padding_;
  switch(this->State) {
  case State_Uninitialized:
    return true;
  case State_WaitingForRW:
    BVar4 = FlushFileBuffers(this->Pipe);
    VerifyWinResult(BVar4,L"Flushing File Buffers");
  case State_Connecting:
  case State_ReadyForRW:
    if (this->bIsServer) {
      BVar4 = DisconnectNamedPipe(this->Pipe);
      VerifyWinResult(BVar4,L"Disconnecting Named Pipe");
    }
  case State_Created:
  case State_ErrorPipeClosedUnexpectedly:
    this->bUseOverlapped = false;
    BVar4 = CloseHandle(this->Pipe);
    VerifyWinResult(BVar4,L"Closing Handle");
    this->Pipe = (void *)0x0;
    ::FString::operator=(this_00,L"");
    this->State = State_Uninitialized;
    return true;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                     ,0x81,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// HasFailed @ 141ab1ba0

bool __thiscall FWindowsPlatformNamedPipe::HasFailed(FWindowsPlatformNamedPipe *this)

{
  return this->State == State_ErrorPipeClosedUnexpectedly;
}

// IsCreated @ 141ab2a70

bool __thiscall FWindowsPlatformNamedPipe::IsCreated(FWindowsPlatformNamedPipe *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(this->State) {
  case State_Uninitialized:
  case State_ErrorPipeClosedUnexpectedly:
    goto switchD_141ab2a8e_caseD_0;
  case State_Created:
  case State_Connecting:
  case State_ReadyForRW:
  case State_WaitingForRW:
    return true;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0x203,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
switchD_141ab2a8e_caseD_0:
    return false;
  }
}

// IsReadyForRW @ 141ab30c0

bool __thiscall FWindowsPlatformNamedPipe::IsReadyForRW(FWindowsPlatformNamedPipe *this)

{
  return this->State == State_ReadyForRW;
}

// OpenConnection @ 141ab8320

bool __thiscall FWindowsPlatformNamedPipe::OpenConnection(FWindowsPlatformNamedPipe *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  
  if ((!this->bIsServer) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsServer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this->State != State_Created) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == State_Created",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  BVar4 = ConnectNamedPipe(this->Pipe,(LPOVERLAPPED)&this->Overlapped);
  if (this->bUseOverlapped) {
    if (BVar4 != 0) {
      return true;
    }
    DVar5 = GetLastError();
    if (DVar5 < 0xea) {
      if ((((DVar5 == 0xe9) || (DVar5 == 0x6d)) || (DVar5 == 0xe6)) || (DVar5 == 0xe8)) {
        this->State = State_ErrorPipeClosedUnexpectedly;
        return true;
      }
    }
    else {
      if (DVar5 == 0x217) goto LAB_141ab83a6;
      if (DVar5 == 0x3e5) {
        this->State = State_Connecting;
        return true;
      }
    }
  }
  else if ((BVar4 != 0) || (DVar5 = GetLastError(), DVar5 == 0x217)) {
LAB_141ab83a6:
    this->State = State_ReadyForRW;
    return true;
  }
  VerifyWinResult(0,L"During OpenConnection()");
  return false;
}

// ReadBytes @ 141abb670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsPlatformNamedPipe::ReadBytes(FWindowsPlatformNamedPipe *this,int param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  DWORD *lpNumberOfBytesRead;
  DWORD local_res10 [2];
  
  if ((param_1 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x1a6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  switch(this->State) {
  case State_Uninitialized:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    iVar6 = 0x1b4;
    break;
  case State_Created:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    iVar6 = 0x1ab;
    break;
  case State_Connecting:
  case State_WaitingForRW:
    iVar6 = 0x1ba;
    break;
  case State_ReadyForRW:
    goto switchD_141abb6cc_caseD_3;
  case State_ErrorPipeClosedUnexpectedly:
    goto switchD_141abb6cc_caseD_5;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0x1c2,L"");
    if (bVar2) goto code_r0x000141abb74f;
    goto switchD_141abb6cc_caseD_3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                     ,iVar6,L"");
  if (bVar2) {
code_r0x000141abb74f:
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
switchD_141abb6cc_caseD_3:
  local_res10[0] = 0;
  lpNumberOfBytesRead = local_res10;
  if (this->bUseOverlapped) {
    lpNumberOfBytesRead = (LPDWORD)0x0;
  }
  BVar4 = ReadFile(this->Pipe,param_2,param_1,lpNumberOfBytesRead,(LPOVERLAPPED)&this->Overlapped);
  if (this->bUseOverlapped) {
    if (BVar4 != 0) {
      this->State = State_ReadyForRW;
      return true;
    }
    bVar2 = UpdateAsyncStatusAfterRW(this);
    if (bVar2) {
      this->State = State_WaitingForRW;
      uVar3 = (**(code **)(this->_padding_ + 0x38))(this);
      return (bool)uVar3;
    }
  }
  else {
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      if ((DVar5 != 0x6d) && (DVar5 != 0xe9)) {
        VerifyWinResult(0,L"During ReadBytes()");
        return false;
      }
      this->State = State_ErrorPipeClosedUnexpectedly;
      return false;
    }
    if (param_1 == local_res10[0]) {
      return true;
    }
  }
switchD_141abb6cc_caseD_5:
  return false;
}

// UpdateAsyncStatus @ 141ac3a10

bool __thiscall FWindowsPlatformNamedPipe::UpdateAsyncStatus(FWindowsPlatformNamedPipe *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  DWORD local_res8 [8];
  
  switch(this->State) {
  case State_Uninitialized:
  case State_ErrorPipeClosedUnexpectedly:
    goto switchD_141ac3a37_caseD_0;
  case State_Created:
  case State_ReadyForRW:
    return true;
  case State_Connecting:
  case State_WaitingForRW:
    if ((!this->bUseOverlapped) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bUseOverlapped",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                           ,0x125,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_res8[0] = 0;
    BVar4 = GetOverlappedResult(this->Pipe,(LPOVERLAPPED)&this->Overlapped,local_res8,0);
    if (BVar4 != 0) {
      this->State = State_ReadyForRW;
      return true;
    }
    DVar5 = GetLastError();
    if (DVar5 != 0x6d) {
      if (DVar5 == 0x3e4) {
        return true;
      }
      VerifyWinResult(DVar5,L"During UpdateAsyncStatus()");
      return true;
    }
    this->State = State_ErrorPipeClosedUnexpectedly;
switchD_141ac3a37_caseD_0:
    return false;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0x14e,L"");
    if (!bVar2) {
      return true;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
}

// UpdateAsyncStatusAfterRW @ 141ac3b20

bool __thiscall FWindowsPlatformNamedPipe::UpdateAsyncStatusAfterRW(FWindowsPlatformNamedPipe *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  DWORD DVar4;
  
  if (!this->bUseOverlapped) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseOverlapped",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  DVar4 = GetLastError();
  if ((DVar4 != 0x6d) && (DVar4 != 0xe8)) {
    if (DVar4 != 0x3e5) {
      VerifyWinResult(DVar4,L"During UpdateAsyncStatusAfterRW()");
      return false;
    }
    FWindowsPlatformProcess::Sleep(__real_3c23d70a);
    return true;
  }
  this->State = State_ErrorPipeClosedUnexpectedly;
  return false;
}

// WriteBytes @ 141ac56f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsPlatformNamedPipe::WriteBytes(FWindowsPlatformNamedPipe *this,int param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  LPDWORD lpNumberOfBytesWritten;
  longlong local_res8;
  
  if ((param_1 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x157,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                         ,0x158,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  switch(this->State) {
  case State_Uninitialized:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    iVar6 = 0x167;
    break;
  case State_Created:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    iVar6 = 0x15e;
    break;
  case State_Connecting:
  case State_WaitingForRW:
    iVar6 = 0x16d;
    break;
  case State_ReadyForRW:
    goto switchD_141ac5778_caseD_3;
  case State_ErrorPipeClosedUnexpectedly:
    goto switchD_141ac5778_caseD_5;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                       ,0x175,L"");
    if (bVar2) goto code_r0x000141ac57fb;
    goto switchD_141ac5778_caseD_3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformNamedPipe.cpp"
                     ,iVar6,L"");
  if (bVar2) {
code_r0x000141ac57fb:
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
switchD_141ac5778_caseD_3:
  local_res8 = 0;
  lpNumberOfBytesWritten = (LPDWORD)&local_res8;
  if (this->bUseOverlapped) {
    lpNumberOfBytesWritten = (LPDWORD)0x0;
  }
  BVar4 = WriteFile(this->Pipe,param_2,param_1,lpNumberOfBytesWritten,
                    (LPOVERLAPPED)&this->Overlapped);
  if (this->bUseOverlapped) {
    if (BVar4 != 0) {
      this->State = State_ReadyForRW;
      return true;
    }
    bVar2 = UpdateAsyncStatusAfterRW(this);
    if (bVar2) {
      this->State = State_WaitingForRW;
      uVar3 = (**(code **)(this->_padding_ + 0x38))(this);
      return (bool)uVar3;
    }
  }
  else {
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      if ((DVar5 != 0x6d) && (DVar5 != 0xe8)) {
        VerifyWinResult(0,L"During WriteBytes()");
        return false;
      }
      this->State = State_ErrorPipeClosedUnexpectedly;
      return false;
    }
    if (local_res8 == param_1) {
      return true;
    }
  }
switchD_141ac5778_caseD_5:
  return false;
}


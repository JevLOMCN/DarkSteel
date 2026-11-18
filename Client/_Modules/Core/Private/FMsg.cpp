// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// LogV @ 1417e0860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMsg::LogV(char *param_1,int param_2,FName *param_3,Type param_4,wchar_t *param_5,char *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FMsg::LogV(char_const_*,int,FName_const_&,ELogVerbosity::Type,wchar_t_const_*,char_*)_::_2_::FStat_STAT_FMsgLogf>
  FVar7;
  FFeedbackContext *pFVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FColor_u_0 FVar10;
  int *piVar11;
  FName FVar12;
  FNameEntryId FVar13;
  void *unaff_retaddr;
  undefined1 auStackY_528 [32];
  FColor_u_0 local_4c8;
  uint uStack_4c4;
  int local_4c0;
  FLLMScope local_4bc;
  LARGE_INTEGER local_4b8;
  FName local_4b0;
  FStatMessage local_4a0;
  FName *local_490;
  FMemScope local_488 [2];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [512];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_528;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_4c0 = param_2;
  local_4b8 = (LARGE_INTEGER)param_1;
  local_490 = param_3;
  if (*piVar11 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name70,"EngineMisc/FMsgLogf");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(&local_4bc,LLMScope_Name70,false,None,Default,true);
  FMemScope::FMemScope(local_488,&LLMScope_Name70,true);
  bVar2 = false;
  bVar1 = false;
  FVar13.Value = 0;
  if (*piVar11 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      if (StatPtr_STAT_FMsgLogf ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_FMsg::LogV(char_const_*,int,FName_const_&,ELogVerbosity::Type,wchar_t_const_*,char_*)_::_2_::FStat_STAT_FMsgLogf>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_4c8._s_0,"STAT_FMsgLogf");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMsgLogf,*pFVar6,L"STAT_FMsgLogf",
                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar7 = StatPtr_STAT_FMsgLogf;
  if (StatPtr_STAT_FMsgLogf ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FMsg::LogV(char_const_*,int,FName_const_&,ELogVerbosity::Type,wchar_t_const_*,char_*)_::_2_::FStat_STAT_FMsgLogf>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_4a0,"STAT_FMsgLogf");
    FVar7 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FMsg::LogV(char_const_*,int,FName_const_&,ELogVerbosity::Type,wchar_t_const_*,char_*)_::_2_::FStat_STAT_FMsgLogf>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMsgLogf,*pFVar6,
                         L"STAT_FMsgLogf","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  local_4b0.ComparisonIndex.Value = 0;
  local_4b0.Number = 0;
  FVar10.Bits = (uint)FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar10.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4c8._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar1 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4c8.Bits = FVar10.Bits;
        uStack_4c4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_4c8._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogMacros.cpp"
                   ,0x47);
        bVar2 = true;
        bVar1 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4c8.Bits = FVar10.Bits;
      uStack_4c4 = uVar9;
      local_4b0 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = false;
      bVar3 = true;
      FVar13.Value = local_4b0.ComparisonIndex.Value;
      goto LAB_1417e0a4b;
    }
  }
  bVar3 = false;
  FVar12 = local_4b0;
LAB_1417e0a4b:
  if (param_4 == Fatal) {
    StaticFailDebugV(L"Fatal error:",(char *)local_4b8,local_4c0,unaff_retaddr,param_5,param_6);
  }
  else {
    local_478.Base = local_458;
    local_478.bIsDynamic = false;
    local_478.bIsExternal = false;
    local_478.CurPos = local_458;
    local_478.End = (wchar_t *)local_58;
    TStringBuilderBase<wchar_t>::AppendV(&local_478,param_5,param_6);
    if (local_478.End < local_478.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,1);
    }
    pwVar4 = local_478.Base;
    *local_478.CurPos = L'\0';
    pFVar8 = (FFeedbackContext *)GetGlobalLogSingleton();
    if (((((param_4 == Error) || (param_4 == Warning)) || (param_4 == Display)) ||
        (param_4 == SetColor)) && (GWarn != (FFeedbackContext *)0x0)) {
      pFVar8 = GWarn;
    }
    (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,pwVar4,param_4,local_490);
    bVar5 = FGenericPlatformMallocCrash::IsActive();
    if (!bVar5) {
      if (__CsvProfilerStat104 == false) {
        FCsvProfilerTrace::OutputInlineStat("FMsgLogfCount",_GCsvCategory_FMsgLogf.Index);
        __CsvProfilerStat104 = true;
      }
      FCsvProfiler::RecordCustomStat("FMsgLogfCount",_GCsvCategory_FMsgLogf.Index,1,Accumulate);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_4a0.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_4a0.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_4b8);
      local_4a0.StatData.Pad = (uchar  [8])(local_4b8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_4a0);
      piVar11 = &this->ScopeCount;
      *piVar11 = *piVar11 + -1;
      if (*piVar11 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FMemScope::~FMemScope(local_488);
  FLLMScope::~FLLMScope(&local_4bc);
  return;
}

// LogfImpl @ 1417e1010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMsg::LogfImpl(char *param_1,int param_2,FName *param_3,Type param_4,wchar_t *param_5)

{
  int iVar1;
  ulong64 *puVar2;
  wchar_t *_Memory;
  FOutputDeviceRedirector *this;
  longlong lVar3;
  wchar_t *pwVar4;
  FFeedbackContext *this_00;
  void *unaff_retaddr;
  undefined1 auStackY_498 [32];
  wchar_t local_458 [512];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  if (param_4 == Fatal) {
    StaticFailDebugV(L"Fatal error:",param_1,param_2,unaff_retaddr,param_5,&stack0x00000030);
    ::FDebug::AssertFailedV("",param_1,param_2,param_5,&stack0x00000030);
  }
  else {
    _Memory = (wchar_t *)0x0;
    if ((((param_4 == Error) || (param_4 == Warning)) || (param_4 == Display)) ||
       (this_00 = (FFeedbackContext *)0x0, param_4 == SetColor)) {
      this_00 = GWarn;
    }
    lVar3 = 0x200;
    puVar2 = __local_stdio_printf_options();
    pwVar4 = local_458;
    do {
      iVar1 = __stdio_common_vswprintf(*puVar2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) {
        pwVar4[iVar1] = L'\0';
        if (this_00 == (FFeedbackContext *)0x0) {
          this = GetGlobalLogSingleton();
          FOutputDeviceRedirector::RedirectLog(this,param_3,param_4,pwVar4);
        }
        else {
          FOutputDevice::Log((FOutputDevice *)this_00,param_3,param_4,pwVar4);
        }
        MemoryTrace_Free((ulong64)_Memory,0,0);
        free(_Memory);
        return;
      }
      MemoryTrace_Free((ulong64)_Memory,0,0);
      free(_Memory);
      lVar3 = (longlong)((int)lVar3 * 2);
      _Memory = malloc(lVar3 * 2);
      MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
      pwVar4 = _Memory;
    } while (_Memory != (wchar_t *)0x0);
  }
  return;
}

// LogfImplV @ 1417e1210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMsg::LogfImplV(char *param_1,int param_2,FName *param_3,Type param_4,void *param_5,wchar_t *param_6
               ,char *param_7)

{
  int iVar1;
  ulong64 *puVar2;
  wchar_t *_Memory;
  FOutputDeviceRedirector *this;
  longlong lVar3;
  wchar_t *pwVar4;
  FFeedbackContext *this_00;
  undefined1 auStackY_488 [32];
  wchar_t local_448 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  if (param_4 == Fatal) {
    StaticFailDebugV(L"Fatal error:",param_1,param_2,param_5,param_6,param_7);
    ::FDebug::AssertFailedV("",param_1,param_2,param_6,param_7);
  }
  else {
    _Memory = (wchar_t *)0x0;
    if ((((param_4 == Error) || (param_4 == Warning)) || (param_4 == Display)) ||
       (this_00 = (FFeedbackContext *)0x0, param_4 == SetColor)) {
      this_00 = GWarn;
    }
    lVar3 = 0x200;
    puVar2 = __local_stdio_printf_options();
    pwVar4 = local_448;
    do {
      iVar1 = __stdio_common_vswprintf(*puVar2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) {
        pwVar4[iVar1] = L'\0';
        if (this_00 == (FFeedbackContext *)0x0) {
          this = GetGlobalLogSingleton();
          FOutputDeviceRedirector::RedirectLog(this,param_3,param_4,pwVar4);
        }
        else {
          FOutputDevice::Log((FOutputDevice *)this_00,param_3,param_4,pwVar4);
        }
        MemoryTrace_Free((ulong64)_Memory,0,0);
        free(_Memory);
        return;
      }
      MemoryTrace_Free((ulong64)_Memory,0,0);
      free(_Memory);
      lVar3 = (longlong)((int)lVar3 * 2);
      _Memory = malloc(lVar3 * 2);
      MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
      pwVar4 = _Memory;
    } while (_Memory != (wchar_t *)0x0);
  }
  return;
}

// Logf_InternalImpl @ 1417e1410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMsg::Logf_InternalImpl(char *param_1,int param_2,FName *param_3,Type param_4,wchar_t *param_5)

{
  LogV(param_1,param_2,param_3,param_4,param_5,&stack0x00000030);
  return;
}

// SendNotificationString @ 1417f8bc0

void __cdecl FMsg::SendNotificationString(wchar_t *param_1)

{
  uint uVar1;
  size_t sVar2;
  ForAnyElementType lpOutputString;
  uint uVar3;
  uint uVar4;
  FString FStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeSRWLock((PSRWLOCK)&PrivateLock);
      ::Lock = &PrivateLock;
      _Init_thread_footer(&::_TSS0);
    }
  }
  sVar2 = wcslen(param_1);
  if ((int)sVar2 < 0x7fff) {
    AcquireSRWLockShared((PSRWLOCK)::Lock);
    OutputDebugStringW(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ab55f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)::Lock);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)::Lock);
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  do {
    uVar4 = (uint)sVar2;
    uVar1 = uVar4;
    if (0x7ffe < (int)uVar4) {
      uVar1 = 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    ::FString::AssignRange(&FStack_18,param_1,uVar3);
    lpOutputString.Data = (FScriptContainerElement *)L"";
    if (FStack_18.Data.ArrayNum != 0) {
      lpOutputString.Data = FStack_18.Data.AllocatorInstance.Data;
    }
    OutputDebugStringW((LPCWSTR)lpOutputString.Data);
    uVar1 = uVar4;
    if ((int)(uVar4 - 0x7ffe) < (int)uVar4) {
      uVar1 = uVar4 - 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    sVar2 = (size_t)uVar3;
    param_1 = param_1 + ((longlong)(int)uVar4 - (longlong)(int)uVar3);
  } while (uVar3 != 0);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)::Lock);
  return;
}

// SendNotificationStringfImpl @ 1417f8bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMsg::SendNotificationStringfImpl(wchar_t *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  wchar_t *_Memory;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_488 [32];
  wchar_t local_458 [512];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_488;
  _Memory = (wchar_t *)0x0;
  lVar3 = 0x200;
  puVar2 = __local_stdio_printf_options();
  pwVar4 = local_458;
  while( true ) {
    iVar1 = __stdio_common_vswprintf(*puVar2);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) break;
    MemoryTrace_Free((ulong64)_Memory,0,0);
    free(_Memory);
    lVar3 = (longlong)((int)lVar3 * 2);
    _Memory = malloc(lVar3 * 2);
    MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
    pwVar4 = _Memory;
    if (_Memory == (wchar_t *)0x0) {
      return;
    }
  }
  pwVar4[iVar1] = L'\0';
  FGenericPlatformMisc::LowLevelOutputDebugString(pwVar4);
  MemoryTrace_Free((ulong64)_Memory,0,0);
  free(_Memory);
  return;
}


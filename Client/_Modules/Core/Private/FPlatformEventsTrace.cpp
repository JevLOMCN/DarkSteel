// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// CanEnable @ 14198f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FPlatformEventsTrace::CanEnable(EEventType param_1,wchar_t **param_2)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  undefined **ppuVar2;
  DWORD local_res18 [2];
  int local_res20 [2];
  HANDLE local_18 [2];
  
  if (GPlatformEvents == (FPlatformEvents *)0x0) {
    return false;
  }
  local_18[0] = (HANDLE)0xffffffffffffffff;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,8,local_18);
  if (BVar1 == 0) {
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = `FPlatformEvents::CanEnable'::`2'::ErrProcAccess;
    }
    if ((byte)LogCore._0_1_ < 5) goto LAB_14198f39c;
    ppuVar2 = &PTR_u_Unable_to_enabl_1506c3d58;
  }
  else {
    local_res18[0] = 0;
    BVar1 = GetTokenInformation(local_18[0],TokenElevation,local_res20,4,local_res18);
    if (BVar1 == 0) {
      if (param_2 != (wchar_t **)0x0) {
        *param_2 = `FPlatformEvents::CanEnable'::`2'::ErrProcAccess;
      }
      if ((byte)LogCore._0_1_ < 5) goto LAB_14198f39c;
      ppuVar2 = &PTR_u_Unable_to_enabl_1506c3e48;
    }
    else {
      if (local_res20[0] != 0) {
        CloseHandle(local_18[0]);
        return true;
      }
      if (param_2 != (wchar_t **)0x0) {
        *param_2 = `FPlatformEvents::CanEnable'::`2'::ErrProcRights;
      }
      if ((byte)LogCore._0_1_ < 5) goto LAB_14198f39c;
      ppuVar2 = &PTR_u_Unable_to_enabl_1506c3e68;
    }
  }
  UE::Logging::Private::BasicLog<5>((FStaticBasicLogRecord *)ppuVar2,(FLogCategoryBase *)&LogCore);
LAB_14198f39c:
  CloseHandle(local_18[0]);
  return false;
}

// Disable @ 141991300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPlatformEventsTrace::Disable(EEventType param_1)

{
  ulong *puVar1;
  FEvent *pFVar2;
  FPlatformEvents *pFVar3;
  EEventType EVar4;
  int iVar5;
  
  pFVar3 = GPlatformEvents;
  if (GPlatformEvents != (FPlatformEvents *)0x0) {
    if (GPlatformEvents->bStarting != false) {
      pFVar2 = (GPlatformEvents->ReadyEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
    }
    if ((pFVar3->TraceHandle != 0xffffffffffffffff) && ((param_1 & pFVar3->EnabledEvents) != None))
    {
      EVar4 = ~param_1 & pFVar3->EnabledEvents;
      pFVar3->EnabledEvents = EVar4;
      if (EVar4 == None) {
                    /* WARNING: Could not recover jumptable at 0x000141991365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
        return;
      }
      if (param_1 == ContextSwitch) {
        puVar1 = &(pFVar3->Trace).Properties.EnableFlags;
        *puVar1 = *puVar1 & 0xffffffef;
      }
      else if (param_1 == StackSampling) {
        puVar1 = &(pFVar3->Trace).Properties.EnableFlags;
        *puVar1 = *puVar1 & 0xfeffffff;
      }
      pFVar2 = (pFVar3->ReadyEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
      iVar5 = ControlTraceW(0,L"NT Kernel Logger",&pFVar3->Trace,2);
      if ((iVar5 != 0) && (1 < (byte)LogPlatformEvents._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Unable_to_updat_1506c3f40,
                   (FLogCategoryBase *)&LogPlatformEvents);
      }
    }
  }
  return;
}

// Enable @ 141992ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPlatformEventsTrace::Enable(EEventType param_1)

{
  ulong *puVar1;
  FEvent *pFVar2;
  FPlatformEvents *pFVar3;
  int iVar4;
  FRunnableThread *pFVar5;
  
  pFVar3 = GPlatformEvents;
  if (GPlatformEvents != (FPlatformEvents *)0x0) {
    if (GPlatformEvents->bStarting != false) {
      pFVar2 = (GPlatformEvents->ReadyEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff);
    }
    if ((pFVar3->bError == false) && ((pFVar3->EnabledEvents & param_1) == None)) {
      if (pFVar3->TraceHandle == 0xffffffffffffffff) {
        (**(code **)(((pFVar3->ReadyEvent).Event)->_padding_ + 0x18))();
        pFVar3->bStarting = true;
        pFVar3->bError = false;
        pFVar5 = FRunnableThread::Create
                           ((FRunnable *)pFVar3,L"PlatformEvents",0,TPri_Normal,0xffffffffffffffff,
                            None);
        pFVar3->Thread = pFVar5;
        pFVar3->EnabledEvents = pFVar3->EnabledEvents | param_1;
        return;
      }
      if (param_1 == ContextSwitch) {
        puVar1 = &(pFVar3->Trace).Properties.EnableFlags;
        *puVar1 = *puVar1 | 0x10;
      }
      else if (param_1 == StackSampling) {
        puVar1 = &(pFVar3->Trace).Properties.EnableFlags;
        *puVar1 = *puVar1 | 0x1000000;
      }
      iVar4 = ControlTraceW(0,L"NT Kernel Logger",&pFVar3->Trace,2);
      if ((iVar4 != 0) && (1 < (byte)LogPlatformEvents._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Unable_to_updat_1506c3e88,
                   (FLogCategoryBase *)&LogPlatformEvents);
      }
      pFVar3->EnabledEvents = pFVar3->EnabledEvents | param_1;
    }
  }
  return;
}

// GetEvent @ 1419952b0

EEventType __cdecl FPlatformEventsTrace::GetEvent(FString *param_1)

{
  int iVar1;
  EEventType EVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"contextswitch");
  if (iVar1 == 0) {
    return ContextSwitch;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"stacksampling");
  EVar2 = None;
  if (iVar1 == 0) {
    EVar2 = StackSampling;
  }
  return EVar2;
}

// Init @ 141996360

void __cdecl FPlatformEventsTrace::Init(uint param_1)

{
  int *piVar1;
  FNextSharedBuffer *pFVar2;
  FPlatformEvents *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  FSharedBuffer *pFVar6;
  uint uVar7;
  undefined4 local_res10;
  FNextSharedBuffer local_18;
  
  if ((-1 < *(int *)&StackSamplingChannel->field_0x20) ||
     (-1 < *(int *)&ContextSwitchChannel->field_0x20)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::Uid
             = FPlatformEventSettingsFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar6 = UE::Trace::Private::GSharedBuffer;
    uVar7 = `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
            Uid >> 1;
    LOCK();
    iVar4 = UE::Trace::Private::GSharedBuffer->Cursor;
    UE::Trace::Private::GSharedBuffer->Cursor = UE::Trace::Private::GSharedBuffer->Cursor + -0x2001;
    UNLOCK();
    if (iVar4 + -0x2001 < 0) {
      pFVar2 = UE::Trace::Private::Writer_NextSharedBuffer(&local_18,pFVar6,iVar4,-0x2001);
      pFVar6 = pFVar2->Buffer;
      iVar4 = pFVar2->RegionStart;
    }
    puVar5 = (undefined4 *)((longlong)pFVar6 - ((longlong)iVar4 >> 10));
    local_res10 = CONCAT22(4,(short)uVar7);
    *puVar5 = local_res10;
    local_18.Buffer = (FSharedBuffer *)(puVar5 + 1);
    local_18.RegionStart = (int)pFVar6 - (int)local_18.Buffer;
    local_18._12_4_ = 0;
    (local_18.Buffer)->Cursor = param_1;
    LOCK();
    piVar1 = (int *)((longlong)&(local_18.Buffer)->Cursor + (longlong)local_18.RegionStart);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pFVar3 = ::operator_new(0x10d8);
  if (pFVar3 == (FPlatformEvents *)0x0) {
    GPlatformEvents = (FPlatformEvents *)0x0;
  }
  else {
    pFVar3->bStarting = false;
    pFVar3->bError = false;
    pFVar3->_padding_ = (longlong)&FPlatformEvents::_vftable_;
    FEventRef::FEventRef(&pFVar3->ReadyEvent,ManualReset);
    pFVar3->Thread = (FRunnableThread *)0x0;
    pFVar3->SamplingIntervalUsec = param_1;
    pFVar3->EnabledEvents = None;
    pFVar3->TraceHandle = 0xffffffffffffffff;
    (pFVar3->ThreadNameSet).Table.CurrentData.AllocatedCount = 0;
    (pFVar3->ThreadNameSet).Table.CurrentData.Distances = (schar *)0x0;
    (pFVar3->ThreadNameSet).Table.CurrentData.Keys = (uint *)0x0;
    (pFVar3->ThreadNameSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
    (pFVar3->ThreadNameSet).Table.NumSlotsMinusOne = 0;
    (pFVar3->ThreadNameSet).Table.MaxLookups = '\0';
    (pFVar3->ThreadNameSet).Table.NumElements = 0;
    memset(pFVar3->ContexSwitchStart,0,0x800);
    FPlatformEvents::CurrentProcessId = GetCurrentProcessId();
    (**(code **)(((pFVar3->ReadyEvent).Event)->_padding_ + 0x10))();
    GPlatformEvents = pFVar3;
  }
  return;
}

// OnTraceChannelUpdated @ 1419a4640

void __cdecl FPlatformEventsTrace::OnTraceChannelUpdated(FString *param_1,bool param_2)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  EEventType EVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pwVar5 = L"";
  EVar4 = ContextSwitch;
  pFVar2 = ::FString::Replace(param_1,&local_18,L"Channel",L"",IgnoreCase);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"contextswitch");
  if (iVar1 != 0) {
    if ((pFVar2->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,L"stacksampling");
    EVar4 = None;
    if (iVar1 == 0) {
      EVar4 = StackSampling;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (EVar4 != None) {
    if (param_2) {
      Enable(EVar4);
    }
    else {
      Disable(EVar4);
    }
  }
  return;
}

// OutputContextSwitch @ 1419a5040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPlatformEventsTrace::OutputContextSwitch
          (ulong64 param_1,ulong64 param_2,uint param_3,uchar param_4)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < *(int *)&ContextSwitchChannel->field_0x20) {
    UE::Trace::Private::FLogScope::Enter<FPlatformEventContextSwitchFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(uint *)(local_28 + 2) = param_3;
    *(uchar *)((longlong)local_28 + 0x14) = param_4;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputSettings @ 1419a5fe0

void __cdecl FPlatformEventsTrace::OutputSettings(uint param_1)

{
  int *piVar1;
  FNextSharedBuffer *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  FSharedBuffer *pFVar6;
  uint uVar7;
  undefined4 local_res10;
  FNextSharedBuffer local_18;
  
  if ((-1 < *(int *)&StackSamplingChannel->field_0x20) ||
     (-1 < *(int *)&ContextSwitchChannel->field_0x20)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::Uid
             = FPlatformEventSettingsFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar6 = UE::Trace::Private::GSharedBuffer;
    uVar7 = `public:_static_unsigned_int___cdecl_FPlatformEventSettingsFields::GetUid(void)'::__l2::
            Uid >> 1;
    LOCK();
    iVar3 = UE::Trace::Private::GSharedBuffer->Cursor;
    UE::Trace::Private::GSharedBuffer->Cursor = UE::Trace::Private::GSharedBuffer->Cursor + -0x2001;
    UNLOCK();
    if (iVar3 + -0x2001 < 0) {
      pFVar2 = UE::Trace::Private::Writer_NextSharedBuffer(&local_18,pFVar6,iVar3,-0x2001);
      pFVar6 = pFVar2->Buffer;
      iVar3 = pFVar2->RegionStart;
    }
    puVar4 = (undefined4 *)((longlong)pFVar6 - ((longlong)iVar3 >> 10));
    local_res10 = CONCAT22(4,(short)uVar7);
    *puVar4 = local_res10;
    puVar5 = puVar4 + 1;
    *puVar5 = param_1;
    LOCK();
    piVar1 = (int *)((longlong)((int)pFVar6 - (int)puVar5) + (longlong)puVar5);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

// OutputStackSample @ 1419a6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPlatformEventsTrace::OutputStackSample(ulong64 param_1,uint param_2,ulong64 *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  ulong64 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < *(int *)&StackSamplingChannel->field_0x20) {
    UE::Trace::Private::FLogScope::Enter<FPlatformEventStackSampleFields>((TLogScope<1> *)&local_38)
    ;
    *local_38 = param_1;
    *(uint *)(local_38 + 1) = param_2;
    UE::Trace::Private::Field_WriteAuxData(2,(uchar *)param_3,param_4 * 8 & 0x7fff8);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar1 != local_30) {
      *(longlong *)(lVar1 + 0x28) = lVar2;
    }
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  return;
}

// OutputThreadName @ 1419a6200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPlatformEventsTrace::OutputThreadName(uint param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  uint *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((-1 < *(int *)&StackSamplingChannel->field_0x20) ||
     (-1 < *(int *)&ContextSwitchChannel->field_0x20)) {
    UE::Trace::Private::FLogScope::Enter<FPlatformEventThreadNameFields>((TLogScope<1> *)&local_38);
    *local_38 = param_1;
    local_38[1] = param_2;
    if ((int)param_4 < 0) {
      param_4 = 0;
      wVar2 = *param_3;
      pwVar1 = param_3;
      while (wVar2 != L'\0') {
        pwVar1 = pwVar1 + 1;
        param_4 = param_4 + 1;
        wVar2 = *pwVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_3,param_4);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar4;
    if (lVar3 != local_30) {
      *(longlong *)(lVar3 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  return;
}

// PostInit @ 1419a6a20

void __cdecl FPlatformEventsTrace::PostInit(void)

{
  if (-1 < *(int *)&ContextSwitchChannel->field_0x20) {
    Enable(ContextSwitch);
  }
  if (-1 < *(int *)&StackSamplingChannel->field_0x20) {
    Enable(StackSampling);
    return;
  }
  return;
}

// Stop @ 1419ac3c0

void __cdecl FPlatformEventsTrace::Stop(void)

{
  if (GPlatformEvents != (FPlatformEvents *)0x0) {
    (**(code **)(GPlatformEvents->_padding_ + 0x28))(GPlatformEvents,1);
    GPlatformEvents = (FPlatformEvents *)0x0;
  }
  return;
}


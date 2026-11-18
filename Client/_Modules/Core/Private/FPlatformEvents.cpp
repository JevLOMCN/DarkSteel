// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Run @ 1419a8ed0

uint __thiscall _anon_4B7900F2::FPlatformEvents::Run(FPlatformEvents *this)

{
  FEvent *pFVar1;
  bool bVar2;
  
  bVar2 = StartETW(this);
  if (bVar2) {
    (**(code **)(((this->ReadyEvent).Event)->_padding_ + 0x10))();
    this->bStarting = false;
    ProcessTrace(&this->TraceHandle,1,0,0);
    return 0;
  }
  ControlTraceW(0,L"NT Kernel Logger",&this->Trace,1);
  if (this->TraceHandle != 0xffffffffffffffff) {
    CloseTrace();
    this->TraceHandle = 0xffffffffffffffff;
  }
  pFVar1 = (this->ReadyEvent).Event;
  this->bStarting = false;
  this->bError = true;
  (**(code **)(pFVar1->_padding_ + 0x10))();
  return 0;
}

// StartETW @ 1419ab9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall _anon_4B7900F2::FPlatformEvents::StartETW(FPlatformEvents *this)

{
  uint uVar1;
  FTrace *pFVar2;
  _EVENT_TRACE_PROPERTIES *p_Var3;
  _GUID _Var4;
  BOOL BVar5;
  int iVar6;
  HANDLE ProcessHandle;
  ulong64 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_278 [32];
  undefined4 local_248;
  uint uStack_244;
  _LUID local_240;
  undefined8 local_238;
  _SYSTEM_INFO local_230;
  undefined1 local_1f8 [8];
  wchar_t *local_1f0;
  undefined4 local_1dc;
  code *local_50;
  undefined1 local_38 [12];
  DWORD DStack_2c;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_278;
  GetSystemInfo(&local_230);
  (this->Trace).Properties.Wnode.BufferSize = 0;
  (this->Trace).Properties.Wnode.ProviderId = 0;
  (this->Trace).Properties.Wnode.field2_0x8.HistoricalContext = 0;
  (this->Trace).Properties.Wnode.field3_0x10.KernelHandle = (void *)0x0;
  pFVar2 = &this->Trace;
  (pFVar2->Properties).Wnode.Guid.Data1 = 0;
  (pFVar2->Properties).Wnode.Guid.Data2 = 0;
  (pFVar2->Properties).Wnode.Guid.Data3 = 0;
  p_Var3 = &(this->Trace).Properties;
  (p_Var3->Wnode).Guid.Data4[0] = '\0';
  (p_Var3->Wnode).Guid.Data4[1] = '\0';
  (p_Var3->Wnode).Guid.Data4[2] = '\0';
  (p_Var3->Wnode).Guid.Data4[3] = '\0';
  (p_Var3->Wnode).Guid.Data4[4] = '\0';
  (p_Var3->Wnode).Guid.Data4[5] = '\0';
  (p_Var3->Wnode).Guid.Data4[6] = '\0';
  (p_Var3->Wnode).Guid.Data4[7] = '\0';
  (this->Trace).Properties.Wnode.ClientContext = 0;
  (this->Trace).Properties.Wnode.Flags = 0;
  (this->Trace).Properties.BufferSize = 0;
  (this->Trace).Properties.MinimumBuffers = 0;
  (this->Trace).Properties.MaximumBuffers = 0;
  (this->Trace).Properties.MaximumFileSize = 0;
  (this->Trace).Properties.LogFileMode = 0;
  (this->Trace).Properties.FlushTimer = 0;
  (this->Trace).Properties.EnableFlags = 0;
  (this->Trace).Properties.field8_0x4c = (_EVENT_TRACE_PROPERTIES_u_76)0x0;
  (this->Trace).Properties.NumberOfBuffers = 0;
  (this->Trace).Properties.FreeBuffers = 0;
  (this->Trace).Properties.EventsLost = 0;
  (this->Trace).Properties.BuffersWritten = 0;
  (this->Trace).Properties.LogBuffersLost = 0;
  (this->Trace).Properties.RealTimeBuffersLost = 0;
  (this->Trace).Properties.LoggerThreadId = (void *)0x0;
  (this->Trace).Properties.LogFileNameOffset = 0;
  _Var4 = `FPlatformEvents::StartETW'::`2'::ETW_SystemTraceControlGuid;
  (this->Trace).Properties.LoggerNameOffset = 0;
  (this->Trace).Properties.Wnode.BufferSize = 0x878;
  (this->Trace).Properties.LogFileMode = 0x100;
  (this->Trace).Properties.Wnode.Guid = _Var4;
  (this->Trace).Properties.LoggerNameOffset = 0x78;
  ControlTraceW(0,L"NT Kernel Logger",&this->Trace,1);
  ProcessHandle = GetCurrentProcess();
  BVar5 = OpenProcessToken(ProcessHandle,0x20,(PHANDLE)&local_248);
  uVar9 = 0;
  if (BVar5 != 0) {
    BVar5 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeSystemProfilePrivilege",&local_240);
    if (BVar5 != 0) {
      local_38._4_4_ = local_240.LowPart;
      local_38._8_4_ = local_240.HighPart;
      local_38._0_4_ = 1;
      DStack_2c = 2;
      BVar5 = AdjustTokenPrivileges
                        ((HANDLE)CONCAT44(uStack_244,local_248),0,(PTOKEN_PRIVILEGES)local_38,0x10,
                         (PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      if ((BVar5 == 0) && (GetLastError(), 2 < (byte)LogPlatformEvents._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&`FPlatformEvents::StartETW'::`14'::LOG_Static,
                   (FLogCategoryBase *)&LogPlatformEvents);
      }
    }
    CloseHandle((HANDLE)CONCAT44(uStack_244,local_248));
  }
  local_248 = 0;
  uVar1 = this->SamplingIntervalUsec * 10;
  uVar8 = 10000000;
  if (uVar1 < 10000000) {
    uVar8 = uVar1;
  }
  uStack_244 = 0x4c5;
  if (0x4c5 < uVar8) {
    uStack_244 = uVar8;
  }
  iVar6 = TraceSetInformation(0,5,&local_248,8);
  if ((iVar6 != 0) && (2 < (byte)LogPlatformEvents._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`FPlatformEvents::StartETW'::`36'::LOG_Static,(FLogCategoryBase *)&LogPlatformEvents
              );
  }
  (this->Trace).Properties.Wnode.BufferSize = 0;
  (this->Trace).Properties.Wnode.ProviderId = 0;
  (this->Trace).Properties.Wnode.field2_0x8.HistoricalContext = 0;
  (this->Trace).Properties.Wnode.field3_0x10.KernelHandle = (void *)0x0;
  pFVar2 = &this->Trace;
  (pFVar2->Properties).Wnode.Guid.Data1 = 0;
  (pFVar2->Properties).Wnode.Guid.Data2 = 0;
  (pFVar2->Properties).Wnode.Guid.Data3 = 0;
  p_Var3 = &(this->Trace).Properties;
  (p_Var3->Wnode).Guid.Data4[0] = '\0';
  (p_Var3->Wnode).Guid.Data4[1] = '\0';
  (p_Var3->Wnode).Guid.Data4[2] = '\0';
  (p_Var3->Wnode).Guid.Data4[3] = '\0';
  (p_Var3->Wnode).Guid.Data4[4] = '\0';
  (p_Var3->Wnode).Guid.Data4[5] = '\0';
  (p_Var3->Wnode).Guid.Data4[6] = '\0';
  (p_Var3->Wnode).Guid.Data4[7] = '\0';
  (this->Trace).Properties.Wnode.ClientContext = 0;
  (this->Trace).Properties.Wnode.Flags = 0;
  (this->Trace).Properties.BufferSize = 0;
  (this->Trace).Properties.MinimumBuffers = 0;
  (this->Trace).Properties.MaximumBuffers = 0;
  (this->Trace).Properties.MaximumFileSize = 0;
  (this->Trace).Properties.LogFileMode = 0;
  (this->Trace).Properties.FlushTimer = 0;
  (this->Trace).Properties.EnableFlags = 0;
  (this->Trace).Properties.field8_0x4c = (_EVENT_TRACE_PROPERTIES_u_76)0x0;
  (this->Trace).Properties.NumberOfBuffers = 0;
  (this->Trace).Properties.FreeBuffers = 0;
  (this->Trace).Properties.EventsLost = 0;
  (this->Trace).Properties.BuffersWritten = 0;
  (this->Trace).Properties.LogBuffersLost = 0;
  (this->Trace).Properties.RealTimeBuffersLost = 0;
  (this->Trace).Properties.LoggerThreadId = (void *)0x0;
  (this->Trace).Properties.LogFileNameOffset = 0;
  _Var4 = `FPlatformEvents::StartETW'::`2'::ETW_SystemTraceControlGuid;
  (this->Trace).Properties.LoggerNameOffset = 0;
  (this->Trace).Properties.Wnode.BufferSize = 0x878;
  (this->Trace).Properties.Wnode.ClientContext = 1;
  (this->Trace).Properties.Wnode.Flags = 0x20000;
  (this->Trace).Properties.MinimumBuffers = local_230.dwNumberOfProcessors * 4;
  (this->Trace).Properties.MaximumBuffers = local_230.dwNumberOfProcessors * 4 + 0x14;
  (this->Trace).Properties.Wnode.Guid = _Var4;
  (this->Trace).Properties.BufferSize = 0x100;
  (this->Trace).Properties.LogFileMode = 0x2000100;
  (this->Trace).Properties.LoggerNameOffset = 0x78;
  (this->Trace).Properties.FlushTimer = 1;
  if ((this->EnabledEvents & ContextSwitch) != None) {
    (this->Trace).Properties.EnableFlags = 0x10;
    uVar9 = 0x10;
  }
  if ((this->EnabledEvents & StackSampling) != None) {
    (this->Trace).Properties.EnableFlags = uVar9 | 0x1000000;
  }
  iVar6 = StartTraceW(&local_238,L"NT Kernel Logger",&this->Trace);
  if (iVar6 == 5) {
    if (1 < (byte)LogPlatformEvents._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`FPlatformEvents::StartETW'::`64'::LOG_Static,
                 (FLogCategoryBase *)&LogPlatformEvents);
      return false;
    }
  }
  else if (iVar6 == 0) {
    local_28 = 0x2e;
    local_27 = 0;
    local_23 = 0;
    _local_38 = `FPlatformEvents::StartETW'::`2'::ETW_PerfInfoGuid;
    local_21 = 0;
    iVar6 = TraceSetInformation(local_238,3,local_38,0x18);
    if (iVar6 == 0) {
      memset(local_1f8,0,0x1c0);
      local_1f0 = L"NT Kernel Logger";
      local_50 = TraceEventCallback;
      local_1dc = 0x10001100;
      uVar7 = OpenTraceW(local_1f8);
      this->TraceHandle = uVar7;
      if (uVar7 != 0xffffffffffffffff) {
        return true;
      }
      if (1 < (byte)LogPlatformEvents._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`FPlatformEvents::StartETW'[::C]::LOG_Static,
                   (FLogCategoryBase *)&LogPlatformEvents);
      }
    }
    else if (1 < (byte)LogPlatformEvents._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`FPlatformEvents::StartETW'::`108'::LOG_Static,
                 (FLogCategoryBase *)&LogPlatformEvents);
      return false;
    }
  }
  else if (2 < (byte)LogPlatformEvents._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`FPlatformEvents::StartETW'::`86'::LOG_Static,(FLogCategoryBase *)&LogPlatformEvents
              );
    return false;
  }
  return false;
}

// Stop @ 1419ac2e0

void __thiscall _anon_4B7900F2::FPlatformEvents::Stop(FPlatformEvents *this)

{
  FEvent *pFVar1;
  schar *psVar2;
  
  pFVar1 = (this->ReadyEvent).Event;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
  if (this->Thread != (FRunnableThread *)0x0) {
    ControlTraceW(0,L"NT Kernel Logger",&this->Trace,1);
    if (this->TraceHandle != 0xffffffffffffffff) {
      CloseTrace();
      this->TraceHandle = 0xffffffffffffffff;
    }
    (**(code **)(this->Thread->_padding_ + 0x20))();
  }
  psVar2 = (this->ThreadNameSet).Table.CurrentData.Distances;
  if (psVar2 != (schar *)0x0) {
    FMemory::Free(psVar2);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Keys);
    FMemory::Free((this->ThreadNameSet).Table.CurrentData.Values);
  }
  (this->ThreadNameSet).Table.NumSlotsMinusOne = 0;
  *(undefined8 *)&(this->ThreadNameSet).Table.CurrentData = 0;
  (this->ThreadNameSet).Table.CurrentData.Distances = (schar *)0x0;
  (this->ThreadNameSet).Table.MaxLookups = '\0';
  (this->ThreadNameSet).Table.CurrentData.Keys = (uint *)0x0;
  (this->ThreadNameSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
  (this->ThreadNameSet).Table.NumElements = 0;
  return;
}

// TraceEventCallback @ 1419af420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _anon_4B7900F2::FPlatformEvents::TraceEventCallback(_EVENT_RECORD *param_1)

{
  uchar uVar1;
  byte bVar2;
  _LARGE_INTEGER _Var3;
  ulong64 uVar4;
  schar *psVar5;
  longlong lVar6;
  ulong64 *puVar7;
  WCHAR *pWVar8;
  DWORD dwProcessId;
  BOOL BVar9;
  HANDLE pvVar10;
  longlong lVar11;
  ulong64 *puVar12;
  schar sVar13;
  uint uVar14;
  DWORD DVar15;
  uint uVar16;
  undefined1 auStackY_2088 [32];
  DWORD local_2048;
  FNoopStruct local_2044;
  ulong64 *local_2040;
  longlong local_2038;
  WCHAR local_2028;
  WCHAR local_2026 [4095];
  ulonglong local_28;
  undefined8 uStack_20;
  ulonglong uVar17;
  
  uStack_20 = 0x1419af432;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2088;
  uVar1 = (param_1->EventHeader).EventDescriptor.Opcode;
  if (uVar1 == '$') {
    if ((param_1->UserData != (void *)0x0) &&
       ((param_1->UserDataLength == 0x18 || (param_1->UserDataLength == 0x1c)))) {
      bVar2 = (param_1->BufferContext).field0_0x0._s_0.ProcessorNumber;
      _Var3 = (param_1->EventHeader).TimeStamp;
      uVar4 = GPlatformEvents->ContexSwitchStart[bVar2];
      if ((uVar4 != 0) && (uVar14 = *(uint *)((longlong)param_1->UserData + 4), uVar14 != 0)) {
        if (-1 < *(int *)&ContextSwitchChannel->field_0x20) {
          UE::Trace::Private::FLogScope::Enter<FPlatformEventContextSwitchFields>
                    ((TLogScope<0> *)&local_2040);
          *local_2040 = uVar4;
          *(_LARGE_INTEGER *)(local_2040 + 1) = _Var3;
          *(uint *)(local_2040 + 2) = uVar14;
          *(byte *)((longlong)local_2040 + 0x14) = bVar2;
          *(undefined8 *)(local_2038 + 0x28) = *(undefined8 *)(local_2038 + 0x20);
        }
        sVar13 = '\0';
        psVar5 = (GPlatformEvents->ThreadNameSet).Table.CurrentData.Distances;
        uVar16 = (GPlatformEvents->ThreadNameSet).Table.NumSlotsMinusOne & uVar14;
        uVar17 = (ulonglong)uVar16;
        if ((psVar5 != (schar *)0x0) && (-1 < psVar5[uVar17])) {
          do {
            if (uVar14 == (GPlatformEvents->ThreadNameSet).Table.CurrentData.Keys[uVar17])
            goto LAB_1419af6a7;
            uVar16 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
            sVar13 = sVar13 + '\x01';
          } while (sVar13 <= psVar5[uVar17]);
        }
        Experimental::TSherwoodHashTable_Private::
        TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
        ::Add(&(GPlatformEvents->ThreadNameSet).Table,sVar13,
              (FData *)&GPlatformEvents->ThreadNameSet,uVar16,uVar14,uVar14,local_2044);
        local_2048 = 0;
        pvVar10 = OpenThread(0x800,0,uVar14);
        if (pvVar10 != (HANDLE)0x0) {
          dwProcessId = GetProcessIdOfThread(pvVar10);
          CloseHandle(pvVar10);
          if ((dwProcessId != 0) && (dwProcessId != ::FPlatformEvents::CurrentProcessId)) {
            pvVar10 = OpenProcess(0x1000,0,dwProcessId);
            if (pvVar10 != (HANDLE)0x0) {
              local_2048 = 0x1000;
              BVar9 = QueryFullProcessImageNameW(pvVar10,0,&local_2028,&local_2048);
              if (BVar9 == 0) {
                local_2048 = 0;
              }
              CloseHandle(pvVar10);
            }
            DVar15 = local_2048;
            if ((-1 < *(int *)&StackSamplingChannel->field_0x20) ||
               (-1 < *(int *)&ContextSwitchChannel->field_0x20)) {
              UE::Trace::Private::FLogScope::Enter<FPlatformEventThreadNameFields>
                        ((TLogScope<1> *)&local_2040);
              *(uint *)local_2040 = uVar14;
              *(DWORD *)((longlong)local_2040 + 4) = dwProcessId;
              if ((int)DVar15 < 0) {
                pWVar8 = &local_2028;
                DVar15 = 0;
                while (local_2028 != L'\0') {
                  pWVar8 = pWVar8 + 1;
                  DVar15 = DVar15 + 1;
                  local_2028 = *pWVar8;
                }
              }
              UE::Trace::Private::Field_WriteStringWide(2,&local_2028,DVar15);
              lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              if (*(char *)(lVar6 + 0x9d48) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar6 = *(longlong *)(lVar6 + 0x20);
              **(undefined1 **)(lVar6 + 0x20) = 6;
              lVar11 = *(longlong *)(lVar6 + 0x20) + 1;
              *(longlong *)(lVar6 + 0x20) = lVar11;
              if (lVar6 != local_2038) {
                *(longlong *)(lVar6 + 0x28) = lVar11;
              }
              *(undefined8 *)(local_2038 + 0x28) = *(undefined8 *)(local_2038 + 0x20);
            }
          }
        }
      }
LAB_1419af6a7:
      *(_LARGE_INTEGER *)(GPlatformEvents->ContexSwitchStart + bVar2) = _Var3;
    }
  }
  else if ((((uVar1 == ' ') && (puVar7 = param_1->UserData, puVar7 != (ulong64 *)0x0)) &&
           ((uint)puVar7[1] == ::FPlatformEvents::CurrentProcessId)) &&
          (0xf < param_1->UserDataLength)) {
    uVar14 = 0;
    uVar16 = (uint)((ulonglong)param_1->UserDataLength - 0x10 >> 3);
    if (uVar16 != 0) {
      puVar12 = puVar7 + 2;
      do {
        if (-1 < (longlong)*puVar12) {
          uVar14 = *(uint *)((longlong)puVar7 + 0xc);
          uVar4 = *puVar7;
          if (*(int *)&StackSamplingChannel->field_0x20 < 0) {
            return;
          }
          UE::Trace::Private::FLogScope::Enter<FPlatformEventStackSampleFields>
                    ((TLogScope<1> *)&local_2040);
          *local_2040 = uVar4;
          *(uint *)(local_2040 + 1) = uVar14;
          UE::Trace::Private::Field_WriteAuxData(2,(uchar *)(puVar7 + 2),uVar16 * 8 & 0x7fff8);
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar6 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = *(longlong *)(lVar6 + 0x20);
          **(undefined1 **)(lVar6 + 0x20) = 6;
          lVar11 = *(longlong *)(lVar6 + 0x20) + 1;
          *(longlong *)(lVar6 + 0x20) = lVar11;
          if (lVar6 != local_2038) {
            *(longlong *)(lVar6 + 0x28) = lVar11;
          }
          *(undefined8 *)(local_2038 + 0x28) = *(undefined8 *)(local_2038 + 0x20);
          return;
        }
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar14 < uVar16);
    }
  }
  return;
}


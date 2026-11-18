// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FrameSync @ 14197d200

void __thiscall FPIXExternalProfiler::FrameSync(FPIXExternalProfiler *this)

{
  return;
}

// ProfilerPauseFunction @ 14197d210

void __thiscall FPIXExternalProfiler::ProfilerPauseFunction(FPIXExternalProfiler *this)

{
  return;
}

// ProfilerResumeFunction @ 14197d220

void __thiscall FPIXExternalProfiler::ProfilerResumeFunction(FPIXExternalProfiler *this)

{
  return;
}

// GetProfilerName @ 14197d230

wchar_t * __thiscall FPIXExternalProfiler::GetProfilerName(FPIXExternalProfiler *this)

{
  return L"PIX";
}

// StartScopedEvent @ 14197d240

void __thiscall
FPIXExternalProfiler::StartScopedEvent(FPIXExternalProfiler *this,FColor *param_1,wchar_t *param_2)

{
  if (this->WinPixEventRuntimeHandle != (void *)0x0) {
    PIXEventsDetail::PIXBeginEvent<wchar_t_const_*>((ulonglong)(param_1->field0_0x0).Bits,param_2);
    return;
  }
  return;
}

// StartScopedEvent @ 14197d260

void __thiscall
FPIXExternalProfiler::StartScopedEvent(FPIXExternalProfiler *this,FColor *param_1,char *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  PIXEventsThreadInfo *pPVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *local_res8;
  LARGE_INTEGER local_res20;
  
  if (this->WinPixEventRuntimeHandle != (void *)0x0) {
    uVar5 = (param_1->field0_0x0).Bits;
    pPVar3 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
    puVar1 = pPVar3->biasedLimit;
    if (puVar1 != (ulong64 *)0x0) {
      puVar2 = pPVar3->destination;
      if (puVar2 < puVar1) {
        local_res20.QuadPart = 0;
        QueryPerformanceCounter(&local_res20);
        puVar2[1] = (ulonglong)uVar5;
        local_res8 = puVar2 + 2;
        if (param_2 == (char *)0x0) {
          *local_res8 = 0;
          local_res8 = puVar2 + 3;
        }
        else if (((ulonglong)param_2 & 7) == 0) {
          do {
            if (puVar1 + 0x3e <= local_res8) break;
            uVar4 = *(ulonglong *)param_2;
            param_2 = (char *)((longlong)param_2 + 8);
            *local_res8 = uVar4;
            local_res8 = local_res8 + 1;
          } while ((uVar4 + 0xfefefefefefefeff & ~uVar4 & 0x8080808080808080) == 0);
        }
        else {
          PIXCopyEventStringArgumentSlow(&local_res8,puVar1 + 0x3e,param_2);
        }
        *local_res8 = 0xfff80;
        uVar4 = (longlong)local_res8 - (longlong)pPVar3->destination >> 3;
        uVar5 = (uint)uVar4 & 0xff;
        if (0x7f < uVar4) {
          uVar5 = 0x7f;
        }
        *puVar2 = (ulonglong)(uVar5 & 0x7f) | local_res20.QuadPart << 0x14 | 0xf2080;
        pPVar3->destination = local_res8;
      }
      else {
        PIXEventsDetail::PIXBeginEventAllocate<char_const_*>(pPVar3,(ulonglong)uVar5,param_2);
      }
    }
  }
  return;
}

// EndScopedEvent @ 14197d3c0

void __thiscall FPIXExternalProfiler::EndScopedEvent(FPIXExternalProfiler *this)

{
  ulong64 *puVar1;
  PIXEventsThreadInfo *pPVar2;
  LARGE_INTEGER local_res8;
  
  if (this->WinPixEventRuntimeHandle != (void *)0x0) {
    pPVar2 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
    if (pPVar2->biasedLimit != (ulong64 *)0x0) {
      puVar1 = pPVar2->destination;
      if (puVar1 < pPVar2->biasedLimit) {
        local_res8.QuadPart = 0;
        QueryPerformanceCounter(&local_res8);
        *puVar1 = local_res8.QuadPart << 0x14 | 1;
        puVar1[1] = 0xfff80;
        pPVar2->destination = puVar1 + 1;
        return;
      }
      PIXEventsDetail::PIXEndEventAllocate(pPVar2);
    }
  }
  return;
}

// SetThreadName @ 14197d450

void __thiscall FPIXExternalProfiler::SetThreadName(FPIXExternalProfiler *this,wchar_t *param_1)

{
  return;
}

// FPIXExternalProfiler @ 141986b70

FPIXExternalProfiler * __thiscall
FPIXExternalProfiler::FPIXExternalProfiler(FPIXExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  void **ppvVar3;
  
  this->_padding_ = (longlong)&___7FPIXExternalProfiler__6B_;
  this->WinPixEventRuntimeHandle = (void *)0x0;
  pIVar2 = IModularFeatures::Get();
  ppvVar3 = &this->WinPixEventRuntimeHandle;
  if (this == (FPIXExternalProfiler *)0x0) {
    ppvVar3 = (void **)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,ppvVar3);
  return this;
}

// ~FPIXExternalProfiler @ 1419880b0

void __thiscall FPIXExternalProfiler::~FPIXExternalProfiler(FPIXExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FPIXExternalProfiler__6B_;
  if (this->WinPixEventRuntimeHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->WinPixEventRuntimeHandle);
    this->WinPixEventRuntimeHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->WinPixEventRuntimeHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  return;
}

// Initialize @ 14199df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPIXExternalProfiler::Initialize(FPIXExternalProfiler *this)

{
  int iVar1;
  DWORD DVar2;
  FString *pFVar3;
  size_t sVar4;
  void *pvVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_8a8 [32];
  DWORD local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  TStringView<wchar_t> local_848;
  FScriptContainerElement *local_838;
  int local_830;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  pFVar3 = FPaths::EngineDir(&local_858);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_848.DataPtr = L"";
  }
  else {
    local_848.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar7 = 0;
  local_848.Size = iVar7;
  if ((FScriptContainerElement *)local_848.DataPtr != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(local_848.DataPtr);
    local_848.Size = (int)sVar4;
  }
  local_830 = 0x32;
  local_838 = (FScriptContainerElement *)0x1506c07d0;
  FPaths::CombineInternal(&local_868,&local_848,2);
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_878,"WinPixEventRuntime.dll");
  if (4 < (byte)LogProfilingDebugging._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FPIXExternalProfiler::Initialize(void)___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
  }
  iVar1 = 0;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_878.Data.ArrayNum != 0) {
    FVar6.Data = local_878.Data.AllocatorInstance.Data;
  }
  local_848.DataPtr = L"";
  if (local_868.Data.ArrayNum != 0) {
    local_848.DataPtr = (wchar_t *)local_868.Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_848.DataPtr != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(local_848.DataPtr);
    iVar1 = (int)sVar4;
  }
  local_848.Size = iVar1;
  local_838 = FVar6.Data;
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen((wchar_t *)FVar6.Data);
    iVar7 = (int)sVar4;
  }
  local_830 = iVar7;
  FPaths::CombineInternal(&local_858,&local_848,2);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_858.Data.ArrayNum != 0) {
    FVar6.Data = local_858.Data.AllocatorInstance.Data;
  }
  pvVar5 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar6.Data);
  this->WinPixEventRuntimeHandle = pvVar5;
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  bVar8 = false;
  if (this->WinPixEventRuntimeHandle == (void *)0x0) {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar2);
    if (1 < (byte)LogProfilingDebugging._0_1_) {
      local_888 = DVar2;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPIXExternalProfiler::Initialize(void)___ptr64'::__l24::
                  LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
    }
    bVar8 = this->WinPixEventRuntimeHandle == (void *)0x0;
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  return !bVar8;
}


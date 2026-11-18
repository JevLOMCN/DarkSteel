// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FCheckedBufferState @ 1444a3100

FCheckedBufferState * __thiscall
Audio::FCheckedBufferState::FCheckedBufferState
          (FCheckedBufferState *this,int param_1,wchar_t *param_2,wchar_t *param_3,
          ECheckBufferFlags param_4,EBufferCheckBehavior param_5)

{
  this->CheckFlags = param_4;
  this->Next = (FCheckedBufferState *)0x0;
  this->FailFlags = None;
  this->Behavior = param_5;
  this->Name = param_3;
  this->Line = param_1;
  this->File = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&ListCs);
  this->Next = Head;
  Head = this;
  LeaveCriticalSection((LPCRITICAL_SECTION)&ListCs);
  return this;
}

// DoCheck @ 1444bc250

bool __thiscall
Audio::FCheckedBufferState::DoCheck(FCheckedBufferState *this,TArrayView<float_const_,int> *param_1)

{
  bool bVar1;
  TArrayView<float_const_,int> local_18;
  
  if ((this->CheckFlags != None) && (this->FailFlags == None)) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar1 = CheckBuffer(&local_18,this->CheckFlags,&this->FailFlags);
    return bVar1;
  }
  return true;
}

// FailedBufferCheckImpl @ 1444bd680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FCheckedBufferState::FailedBufferCheckImpl(FCheckedBufferState *this,wchar_t *param_1)

{
  EBufferCheckBehavior EVar1;
  int iVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 *puVar6;
  undefined1 local_res18 [16];
  undefined1 auStack_4e8 [32];
  wchar_t *local_4c8;
  undefined1 *local_4c0;
  FScriptContainerElement *local_4b8;
  undefined1 *local_4b0;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FCheckedBufferState *local_468;
  undefined1 *local_460;
  undefined8 local_458;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  puVar6 = __local_stdio_printf_options();
  local_4c8 = (wchar_t *)0x0;
  local_4c0 = local_res18;
  __stdio_common_vswprintf(*puVar6,local_448,0x200,param_1);
  EVar1 = this->Behavior;
  local_458 = 0;
  if (EVar1 == Ensure) {
    local_460 = local_448;
    local_468 = this;
    `Audio::FCheckedBufferState::FailedBufferCheckImpl'::__l6::<lambda_1>::operator()(&local_468);
  }
  else if (EVar1 == Log) {
    if (2 < (byte)LogTemp._0_1_) {
      BufferDiagnosticsPrivate::ToDelimString(&local_478,this->CheckFlags);
      iVar2 = this->Line;
      local_4b8 = (FScriptContainerElement *)L"";
      if (local_478.Data.ArrayNum != 0) {
        local_4b8 = local_478.Data.AllocatorInstance.Data;
      }
      pwVar3 = this->File;
      BufferDiagnosticsPrivate::ToDelimString(&local_488,this->FailFlags);
      local_4b0 = local_448;
      local_4c0 = (undefined1 *)CONCAT44(local_4c0._4_4_,iVar2);
      local_4c8 = pwVar3;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (EVar1 == Break) {
    if (2 < (byte)LogTemp._0_1_) {
      BufferDiagnosticsPrivate::ToDelimString(&local_498,this->CheckFlags);
      iVar2 = this->Line;
      local_4b8 = (FScriptContainerElement *)L"";
      if (local_498.Data.ArrayNum != 0) {
        local_4b8 = local_498.Data.AllocatorInstance.Data;
      }
      pwVar3 = this->File;
      BufferDiagnosticsPrivate::ToDelimString(&local_4a8,this->FailFlags);
      local_4b0 = local_448;
      local_4c0 = (undefined1 *)CONCAT44(local_4c0._4_4_,iVar2);
      local_4c8 = pwVar3;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (!bVar5) {
      FWindowsPlatformMisc::PromptForRemoteDebugging(false);
    }
    bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// ForEach @ 1444bee10

void __cdecl
Audio::FCheckedBufferState::ForEach
          (TFunctionRef<void___cdecl(Audio::FCheckedBufferState_&)> *param_1)

{
  FCheckedBufferState *pFVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ListCs);
  for (pFVar1 = Head; pFVar1 != (FCheckedBufferState *)0x0; pFVar1 = pFVar1->Next) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001444bee65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ListCs);
  return;
}

// operator() @ 1504bf1d0

bool __thiscall
`Audio::FCheckedBufferState::FailedBufferCheckImpl'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3639321013344272204>);
  if (bVar4) {
    BufferDiagnosticsPrivate::ToDelimString
              (&local_38,*(ECheckBufferFlags *)(*(longlong *)this + 0x20));
    BufferDiagnosticsPrivate::ToDelimString
              (&local_48,*(ECheckBufferFlags *)(*(longlong *)this + 0x24));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3639321013344272204>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bf2d0;
    }
  }
  bVar4 = false;
LAB_1504bf2d0:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}


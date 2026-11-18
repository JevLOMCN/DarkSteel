// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// LogRuntimeIssue @ 141955000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FRuntimeErrors::LogRuntimeIssue(Type param_1,char *param_2,int param_3,FText *param_4)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRuntimeIssueLogged,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (OnRuntimeIssueLogged._16_4_ != 0) {
    plVar1 = (longlong *)OnRuntimeIssueLogged._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// LogRuntimeIssueReturningFalse @ 141955080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FRuntimeErrors::LogRuntimeIssueReturningFalse(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  FString *pFVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 auStack_9b8 [32];
  FText *local_998;
  FText local_988;
  FString local_978;
  FReadAccessScope local_968;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_9b8;
  local_948._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_948.Ptr = (wchar_t *)0x0;
    local_948.StringLength = 0;
  }
  else {
    sVar1 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_948,param_1,(int)sVar1,Yes);
  }
  TCString<wchar_t>::SprintfImpl(local_828,L"ensureAsRuntimeWarning condition failed: %s");
  if ((void *)local_948._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_948._padding_);
  }
  pFVar2 = ::FString::FString(&local_978,local_828);
  pFVar3 = FText::AsCultureInvariant(&local_988,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRuntimeIssueLogged,
             &local_968);
  plVar4 = (longlong *)0x0;
  if (OnRuntimeIssueLogged._16_4_ != 0) {
    plVar4 = (longlong *)OnRuntimeIssueLogged._8_8_;
  }
  local_998 = pFVar3;
  (**(code **)(*plVar4 + 0x60))(plVar4,CONCAT71((int7)((ulonglong)*plVar4 >> 8),2),param_2,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_968);
  if (local_988.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_988.TextData.Reference + 0x10))();
  }
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  return false;
}


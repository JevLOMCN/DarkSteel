// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FActiveAsyncLoadContext @ 141ed1490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141ed15cb) */
/* WARNING: Removing unreachable block (ram,0x000141ed15f1) */
/* WARNING: Removing unreachable block (ram,0x000141ed1600) */
/* WARNING: Removing unreachable block (ram,0x000141ed1626) */
/* WARNING: Removing unreachable block (ram,0x000141ed1630) */
/* WARNING: Removing unreachable block (ram,0x000141ed1643) */
/* WARNING: Removing unreachable block (ram,0x000141ed15c5) */
/* WARNING: Removing unreachable block (ram,0x000141ed1650) */

FActiveAsyncLoadContext * __thiscall
FActiveAsyncLoadContext::FActiveAsyncLoadContext
          (FActiveAsyncLoadContext *this,
          TArray<FAsyncPackageDesc_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FActiveAsyncLoadContext *pFVar3;
  FTrackedActivity *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 uStack_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  this->TotalCompleted = 0;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  if ((0 < param_1->ArrayNum) &&
     (::FName::AppendString
                ((FName *)(*(longlong *)(param_1->AllocatorInstance).Data + 4),&local_268),
     *local_268.Base == L'/')) {
    uStack_270 = 0;
    local_278 = 0;
    if (((int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1) < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pos + RemoveLen <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0x119,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActiveAsyncLoadContext *)(*pcVar1)();
      return pFVar3;
    }
    local_268.CurPos = local_268.CurPos + -1;
    for (pwVar5 = local_268.Base; pwVar5 != local_268.CurPos; pwVar5 = pwVar5 + 1) {
      *pwVar5 = pwVar5[1];
    }
  }
  pFVar4 = FTrackedActivity::GetIOActivity();
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  FTrackedActivity::Push(pFVar4,local_268.Base,false,Inherit);
  pFVar4 = FTrackedActivity::GetIOActivity();
  FTrackedActivity::Push(pFVar4,L"",true,Inherit);
  ActiveAsyncLoadContext = this;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return this;
}

// Update @ 141f191a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FActiveAsyncLoadContext::Update(FActiveAsyncLoadContext *this,uint param_1)

{
  FTrackedActivity *this_00;
  TStringBuilderBase<wchar_t> *this_01;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  this_00 = FTrackedActivity::GetIOActivity();
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  this_01 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_238,L" (%u/%u)");
  if (this_01->End < this_01->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this_01,1);
  }
  *this_01->CurPos = L'\0';
  FTrackedActivity::Update(this_00,this_01->Base,0xffffffff);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// HandleError @ 141a82fc0

void __thiscall FCheckScopeOutputDeviceError::HandleError(FCheckScopeOutputDeviceError *this)

{
  if (this->DeviceError != (FOutputDeviceError *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a82fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->DeviceError->_padding_ + 0x58))();
    return;
  }
  return;
}

// Serialize @ 141a91690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCheckScopeOutputDeviceError::Serialize
          (FCheckScopeOutputDeviceError *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_168 [32];
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  _Str = this->ExpectedMsg;
  if (_Str == (char *)0x0) {
    this->Count = this->Count + 1;
  }
  else {
    local_48.Data = (FScriptContainerElement *)0x0;
    sVar3 = strlen(_Str);
    local_38 = (int)sVar3;
    uVar5 = local_38 + 1;
    FVar6.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar5) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,2);
      FVar6.Data = local_48.Data;
    }
    local_40 = local_148;
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      local_40 = FVar6.Data;
    }
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_40,uVar5,_Str,uVar5);
    if (pwVar4 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pwVar4 = wcsstr(param_1,(wchar_t *)local_40);
    if (pwVar4 != (wchar_t *)0x0) {
      this->Count = this->Count + 1;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}


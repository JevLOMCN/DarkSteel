// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator() @ 141e58440

bool __thiscall
FOptionalFStringIgnoreCaseLess::operator()
          (FOptionalFStringIgnoreCaseLess *this,TOptional<FString> *param_1,
          TOptional<FString> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  iVar5 = *(int *)((longlong)&param_2->field0_0x0 + 0xc);
  iVar1 = *(int *)((longlong)&param_1->field0_0x0 + 0xc);
  if ((iVar1 != -1) != (iVar5 != -1)) {
    return iVar1 == -1;
  }
  if (iVar1 == -1) {
    return false;
  }
  if (iVar5 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pwVar6 = L"";
  if (*(int *)((longlong)&param_2->field0_0x0 + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
  }
  if (*(int *)((longlong)&param_1->field0_0x0 + 8) != 0) {
    pwVar6 = (wchar_t *)(param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,pwVar7);
  return SUB41((uint)iVar5 >> 0x1f,0);
}


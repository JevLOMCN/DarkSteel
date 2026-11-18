// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FRigName @ 14a221360

FRigName * __thiscall FRigName::FRigName(FRigName *this,FName *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRigName *pFVar5;
  
  (this->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Name).field0_0x0.TypedValue.Number = 0;
  (this->NameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 0xc) = 0xffffffff;
  if (((FRigName *)param_1 != this) &&
     (FVar1 = *param_1, (this->Name).field0_0x0.TypedValue = FVar1,
     FVar1.ComparisonIndex.Value.Value == 0xffffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRigName *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (*(int *)((longlong)&(this->NameString).field0_0x0 + 0xc) != -1) {
    pFVar2 = (this->NameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->NameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 0xc) = 0xffffffff;
  }
  return this;
}

// GetFName @ 14a263a60

FName * __thiscall FRigName::GetFName(FRigName *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  TOptional<FName>_u_0 local_18 [2];
  
  if ((this->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
    if ((*(int *)((longlong)&(this->NameString).field0_0x0 + 0xc) == -1) ||
       (*(int *)((longlong)&(this->NameString).field0_0x0 + 8) < 2)) {
      return &EmptyName;
    }
    pFVar3 = TOptional<FString>::GetValue(&this->NameString);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_18[0].TypedValue,pwVar5);
    if ((local_18 != (TOptional<FName>_u_0 *)this) &&
       ((this->Name).field0_0x0.TypedValue = (FName)local_18[0],
       local_18[0].TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FName *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((this->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FName *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return (FName *)this;
}

// GetName @ 14a2662a0

FString * __thiscall FRigName::GetName(FRigName *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if (*(int *)((longlong)&(this->NameString).field0_0x0 + 0xc) != -1) {
    return (FString *)&this->NameString;
  }
  if ((this->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    TOptional<FString>::operator=(&this->NameString,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (*(int *)((longlong)&(this->NameString).field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((this->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    ::FName::ToString((FName *)this,(FString *)&this->NameString);
    return (FString *)&this->NameString;
  }
  return &EmptyString;
}

// FRigName @ 14a2dcc50

FRigName * __thiscall FRigName::FRigName(FRigName *this,FString *param_1)

{
  TOptional<FString> *this_00;
  code *pcVar1;
  bool bVar2;
  FRigName *pFVar3;
  
  (this->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  this_00 = &this->NameString;
  (this->Name).field0_0x0.TypedValue.Number = 0;
  (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->NameString).field0_0x0 + 0xc) = 0xffffffff;
  if (param_1 != (FString *)this_00) {
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->NameString).field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRigName *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return this;
}


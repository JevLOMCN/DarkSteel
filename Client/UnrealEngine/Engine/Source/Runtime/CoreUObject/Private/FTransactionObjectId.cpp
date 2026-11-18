// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SetObject @ 141f111f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTransactionObjectId::SetObject(FTransactionObjectId *this,UObject *param_1)

{
  undefined4 uVar1;
  UPackage *pUVar2;
  FName *pFVar3;
  FName FVar4;
  FName FVar5;
  undefined1 auStack_898 [32];
  FName local_878 [2];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  uVar1 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
  (this->ObjectPackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar2->_padding_;
  (this->ObjectPackageName).Number = uVar1;
  uVar1 = *(undefined4 *)&param_1->field_0x1c;
  (this->ObjectName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (this->ObjectName).Number = uVar1;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_868);
  pFVar3 = ::FName::FName(local_878,
                          (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1),
                          local_868.Base,FNAME_Add);
  FVar5 = *pFVar3;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  this->ObjectPathName = FVar5;
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  FVar5 = FVar4;
  if (*(UObjectBaseUtility **)&param_1->field_0x20 != (UObjectBaseUtility *)0x0) {
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)&param_1->field_0x20,(UObject *)0x0,&local_868);
    pFVar3 = ::FName::FName(local_878,
                            (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1),
                            local_868.Base,FNAME_Add);
    FVar5 = *pFVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  this->ObjectOuterPathName = FVar5;
  pUVar2 = UObjectBase::GetExternalPackage((UObjectBase *)param_1);
  if (pUVar2 != (UPackage *)0x0) {
    pUVar2 = UObjectBase::GetExternalPackage((UObjectBase *)param_1);
    FVar4 = (FName)pUVar2->_padding_;
  }
  local_868.Base = local_848;
  this->ObjectExternalPackageName = FVar4;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  UObjectBaseUtility::GetPathName
            (*(UObjectBaseUtility **)&param_1->field_0x10,(UObject *)0x0,&local_868);
  pFVar3 = ::FName::FName(local_878,
                          (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1),
                          local_868.Base,FNAME_Add);
  FVar5 = *pFVar3;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  this->ObjectClassPathName = FVar5;
  return;
}


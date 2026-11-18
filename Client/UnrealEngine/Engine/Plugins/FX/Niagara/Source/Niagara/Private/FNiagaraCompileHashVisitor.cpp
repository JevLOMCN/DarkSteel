// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// UpdateShaderFile @ 14906f860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraCompileHashVisitor::UpdateShaderFile(FNiagaraCompileHashVisitor *this,wchar_t *param_1)

{
  int iVar1;
  FSHAHash *pFVar2;
  undefined1 auStack_68 [32];
  FString local_48;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar2 = GetShaderFileHash(param_1,SP_PCD3D_SM5);
  local_28 = *(undefined8 *)pFVar2->Hash;
  uStack_20 = *(undefined8 *)(pFVar2->Hash + 8);
  local_18 = *(undefined4 *)(pFVar2->Hash + 0x10);
  ::FString::FString(&local_38,param_1);
  iVar1 = iswalpha(0x2f);
  if (iVar1 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_38,L'/',L'_');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_38,L'/',L'_');
  }
  iVar1 = iswalpha(0x2e);
  if (iVar1 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_38,L'.',L'_');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_38,L'.',L'_');
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  BytesToHex((uchar *)&local_28,0x14,&local_48);
  iVar1 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  FSHA1::Update(this->HashState,(uchar *)local_48.Data.AllocatorInstance.Data,(longlong)iVar1 * 2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// UpdateString @ 14906fa60

bool __thiscall
FNiagaraCompileHashVisitor::UpdateString
          (FNiagaraCompileHashVisitor *this,wchar_t *param_1,TStringView<wchar_t> *param_2)

{
  FSHA1::Update(this->HashState,(uchar *)param_2->DataPtr,(longlong)param_2->Size * 2);
  return true;
}

// UpdateName @ 14946de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraCompileHashVisitor::UpdateName
          (FNiagaraCompileHashVisitor *this,wchar_t *param_1,FName param_2)

{
  bool bVar1;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  local_868.DataPtr = (wchar_t *)param_2;
  ::FName::AppendString((FName *)&local_868,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar1 = UpdateString(this,param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar1;
}


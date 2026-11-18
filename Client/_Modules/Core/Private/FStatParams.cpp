// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FStatParams @ 1419cec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStatParams * __thiscall FStatParams::FStatParams(FStatParams *this,wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  double dVar7;
  undefined1 auStackY_e8 [32];
  FName local_b8 [2];
  wchar_t local_a8;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined8 local_96;
  undefined8 uStack_8e;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined8 local_76;
  undefined8 uStack_6e;
  undefined8 local_66;
  undefined8 uStack_5e;
  undefined8 local_56;
  undefined8 uStack_4e;
  undefined8 local_46;
  undefined8 uStack_3e;
  undefined8 local_36;
  undefined4 local_2e;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8[0].ComparisonIndex.Value = 0;
  local_b8[0].Number = 0;
  (this->Group).Value = (FName)0x0;
  if (param_1 == (wchar_t *)0x0) {
LAB_1419ced09:
    (this->SortBy).Value = Sum;
    if (param_1 != (wchar_t *)0x0) goto LAB_1419ced19;
LAB_1419cedc3:
    local_b8[0].ComparisonIndex.Value = 0;
    local_b8[0].Number = 0;
    (this->Root).Value = (FName)0x0;
    if (param_1 != (wchar_t *)0x0) goto LAB_1419cedd3;
LAB_1419cee4b:
    (this->BudgetSection).ComparisonIndex = 0;
    (this->BudgetSection).Number = 0;
    (this->MaxHistoryFrames).Value = 0x3c;
    if (param_1 != (wchar_t *)0x0) goto LAB_1419cee5b;
LAB_1419ceec8:
    (this->MaxHierarchyDepth).Value = 4;
    if (param_1 != (wchar_t *)0x0) goto LAB_1419ceed4;
LAB_1419cef41:
    (this->CullMs).Value = 0.2;
    pwVar6 = (wchar_t *)0x0;
    if (param_1 == (wchar_t *)0x0) goto LAB_1419cf014;
  }
  else {
    local_a8 = L'\0';
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_a6 = 0;
    uStack_9e = 0;
    local_96 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_7e = 0;
    local_76 = 0;
    uStack_6e = 0;
    local_66 = 0;
    uStack_5e = 0;
    local_56 = 0;
    uStack_4e = 0;
    local_46 = 0;
    uStack_3e = 0;
    bVar2 = FParse::Value(param_1,L"group=",&local_a8,0x40,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_1419ced09;
    pFVar4 = ::FName::FName(local_b8,&local_a8);
    (this->Group).Value = *pFVar4;
    (this->SortBy).Value = Sum;
LAB_1419ced19:
    local_a8 = L'\0';
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_a6 = 0;
    uStack_9e = 0;
    local_96 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_7e = 0;
    local_76 = 0;
    uStack_6e = 0;
    local_66 = 0;
    uStack_5e = 0;
    local_56 = 0;
    uStack_4e = 0;
    local_46 = 0;
    uStack_3e = 0;
    bVar2 = FParse::Value(param_1,L"sortby=",&local_a8,0x40,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_1419cedc3;
    (this->SortBy).Value = Sum;
    iVar3 = FGenericPlatformStricmp::Stricmp(&local_a8,L"CallCount");
    if (iVar3 == 0) {
      (this->SortBy).Value = CallCount;
      (this->Root).Value = (FName)0x0;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp(&local_a8,L"Name");
      if (iVar3 != 0) goto LAB_1419cedc3;
      (this->SortBy).Value = Name;
      (this->Root).Value = (FName)0x0;
    }
LAB_1419cedd3:
    local_b8[0].ComparisonIndex.Value = 0;
    local_b8[0].Number = 0;
    local_a8 = L'\0';
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_a6 = 0;
    uStack_9e = 0;
    local_96 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_7e = 0;
    local_76 = 0;
    uStack_6e = 0;
    local_66 = 0;
    uStack_5e = 0;
    local_56 = 0;
    uStack_4e = 0;
    local_46 = 0;
    uStack_3e = 0;
    bVar2 = FParse::Value(param_1,L"root=",&local_a8,0x40,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_1419cee4b;
    pFVar4 = ::FName::FName(local_b8,&local_a8);
    (this->Root).Value = *pFVar4;
    (this->BudgetSection).ComparisonIndex = 0;
    (this->BudgetSection).Number = 0;
    (this->MaxHistoryFrames).Value = 0x3c;
LAB_1419cee5b:
    local_a8 = L'\0';
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_a6 = 0;
    uStack_9e = 0;
    local_96 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_7e = 0;
    local_76 = 0;
    uStack_6e = 0;
    local_66 = 0;
    uStack_5e = 0;
    local_56 = 0;
    uStack_4e = 0;
    local_46 = 0;
    uStack_3e = 0;
    bVar2 = FParse::Value(param_1,L"maxhistoryframes=",&local_a8,0x40,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_1419ceec8;
    iVar3 = _wtoi(&local_a8);
    (this->MaxHistoryFrames).Value = iVar3;
    (this->MaxHierarchyDepth).Value = 4;
LAB_1419ceed4:
    local_a8 = L'\0';
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_a6 = 0;
    uStack_9e = 0;
    local_96 = 0;
    uStack_8e = 0;
    local_86 = 0;
    uStack_7e = 0;
    local_76 = 0;
    uStack_6e = 0;
    local_66 = 0;
    uStack_5e = 0;
    local_56 = 0;
    uStack_4e = 0;
    local_46 = 0;
    uStack_3e = 0;
    bVar2 = FParse::Value(param_1,L"maxdepth=",&local_a8,0x40,true,(wchar_t **)0x0);
    if (!bVar2) goto LAB_1419cef41;
    iVar3 = _wtoi(&local_a8);
    (this->MaxHierarchyDepth).Value = iVar3;
    (this->CullMs).Value = 0.2;
  }
  local_a8 = L'\0';
  local_36 = 0;
  local_2e = 0;
  local_2a = 0;
  local_a6 = 0;
  uStack_9e = 0;
  local_96 = 0;
  uStack_8e = 0;
  local_86 = 0;
  uStack_7e = 0;
  local_76 = 0;
  uStack_6e = 0;
  local_66 = 0;
  uStack_5e = 0;
  local_56 = 0;
  uStack_4e = 0;
  local_46 = 0;
  uStack_3e = 0;
  bVar2 = FParse::Value(param_1,L"ms=",&local_a8,0x40,true,(wchar_t **)0x0);
  if (bVar2) {
    dVar7 = _wtof(&local_a8);
    (this->CullMs).Value = (float)dVar7;
  }
  wVar1 = *param_1;
  while ((pwVar6 = (wchar_t *)0x0, wVar1 != L'\0' &&
         ((pwVar5 = param_1 + 1,
          (wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) != 0x2d ||
          (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar5,L"reset",5), pwVar6 = param_1,
          iVar3 != 0))))) {
    wVar1 = *pwVar5;
    param_1 = pwVar5;
  }
LAB_1419cf014:
  this->bSlowMode = false;
  this->bReset = pwVar6 != (wchar_t *)0x0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ReadToken @ 142146f00

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
FPropertyHelpers::ReadToken(wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2,bool param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  int local_res8 [2];
  ulonglong local_28 [4];
  
  wVar2 = *param_1;
  if (wVar2 == L'\"') {
    local_res8[0] = 0;
    bVar4 = FParse::QuotedString(param_1,param_2,local_res8);
    if (!bVar4) {
      if (2 < (byte)LogProperty._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      }
      return (wchar_t *)0x0;
    }
  }
  else {
    uVar10 = 1L << ((byte)wVar2 & 0x3f);
    uVar7 = 0;
    uVar3 = (ushort)wVar2 >> 6;
    if (uVar3 == 0) {
      uVar7 = 0x3ff000000000000;
    }
    if ((((uVar7 | (ulonglong)(uVar3 != 1) - 1) & uVar10 & 0x7fffffe07fffffe) == 0) &&
       (((!param_3 || (wVar2 != L'/')) && ((ushort)wVar2 < 0x100)))) {
      if (wVar2 == L'\0') {
        return param_1;
      }
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = wVar2;
      param_2->CurPos = param_2->CurPos + 1;
      return param_1;
    }
    local_28[3] = 0xf800000178000001;
    local_28[2] = 0xfc00d7ffffffffff;
    local_28[1] = 0xf800000178000001;
    local_28[0] = 0xf80017ffffffffff;
    puVar5 = local_28;
    if (!param_3) {
      puVar5 = local_28 + 2;
    }
    uVar7 = 0;
    if (uVar3 == 1) {
      uVar7 = puVar5[1];
    }
    uVar6 = 0;
    if (uVar3 == 0) {
      uVar6 = *puVar5 | 1;
    }
    pwVar9 = param_1;
    for (uVar10 = uVar10 & (uVar7 | uVar6); uVar10 == 0;
        uVar10 = ((ulonglong)(uVar3 != 1) - 1 & puVar5[1] | uVar10) >> ((ushort)*pwVar1 & 0x3f) & 1)
    {
      pwVar1 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      uVar3 = (ushort)*pwVar1 >> 6;
      uVar10 = 0;
      if (uVar3 == 0) {
        uVar10 = *puVar5 | 1;
      }
    }
    iVar8 = (int)((longlong)pwVar9 - (longlong)param_1 >> 1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,param_1,iVar8);
    local_res8[0] = iVar8;
  }
  return param_1 + local_res8[0];
}

// ReadToken @ 1421470f0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FPropertyHelpers::ReadToken(wchar_t *param_1,FString *param_2,bool param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  int local_res8 [2];
  ulonglong local_28 [4];
  
  wVar2 = *param_1;
  if (wVar2 == L'\"') {
    local_res8[0] = 0;
    bVar4 = FParse::QuotedString(param_1,param_2,local_res8);
    if (bVar4) {
      return param_1 + local_res8[0];
    }
    if (2 < (byte)LogProperty._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    }
    return (wchar_t *)0x0;
  }
  uVar10 = 1L << ((byte)wVar2 & 0x3f);
  uVar7 = 0;
  uVar3 = (ushort)wVar2 >> 6;
  if (uVar3 == 0) {
    uVar7 = 0x3ff000000000000;
  }
  if ((((uVar7 | (ulonglong)(uVar3 != 1) - 1) & uVar10 & 0x7fffffe07fffffe) == 0) &&
     (((!param_3 || (wVar2 != L'/')) && ((ushort)wVar2 < 0x100)))) {
    ::FString::AppendChar(param_2,wVar2);
    return param_1;
  }
  local_28[2] = 0xfc00d7ffffffffff;
  local_28[3] = 0xf800000178000001;
  local_28[0] = 0xf80017ffffffffff;
  local_28[1] = 0xf800000178000001;
  puVar5 = local_28;
  if (!param_3) {
    puVar5 = local_28 + 2;
  }
  uVar7 = 0;
  if (uVar3 == 1) {
    uVar7 = puVar5[1];
  }
  uVar6 = 0;
  if (uVar3 == 0) {
    uVar6 = *puVar5 | 1;
  }
  pwVar9 = param_1;
  for (uVar10 = uVar10 & (uVar7 | uVar6); uVar10 == 0;
      uVar10 = ((ulonglong)(uVar3 != 1) - 1 & puVar5[1] | uVar10) >> ((ushort)*pwVar1 & 0x3f) & 1) {
    pwVar1 = pwVar9 + 1;
    pwVar9 = pwVar9 + 1;
    uVar3 = (ushort)*pwVar1 >> 6;
    uVar10 = 0;
    if (uVar3 == 0) {
      uVar10 = *puVar5 | 1;
    }
  }
  iVar8 = (int)((longlong)pwVar9 - (longlong)param_1 >> 1);
  ::FString::AppendChars(param_2,param_1,iVar8);
  return param_1 + iVar8;
}


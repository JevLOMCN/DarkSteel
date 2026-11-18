// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 35

// EndOf @ 1418d7520

wchar_t * __cdecl FDefaultValueHelper::EndOf(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Source.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                         ,0x3d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar2)();
    return pwVar5;
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  return (wchar_t *)(FScriptContainerElement *)((longlong)pwVar5 + (longlong)iVar4 * 2);
}

// GetParameters @ 1418e0820

/* WARNING: Type propagation algorithm not settling */

bool __cdecl FDefaultValueHelper::GetParameters(FString *param_1,FString *param_2,FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int local_res20 [2];
  FString local_38;
  
  local_res20[0] = 0;
  bVar3 = Trim(local_res20,param_1);
  if (!bVar3) {
    return false;
  }
  iVar12 = (param_2->Data).ArrayNum;
  iVar5 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar5 = 0;
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar12 = -1;
  iVar5 = ::FString::Find(param_1,pwVar7,iVar5,CaseSensitive,FromStart,-1);
  if (iVar5 != local_res20[0]) {
    return false;
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  local_res20[0] = local_res20[0] + iVar5;
  bVar3 = Trim(local_res20,param_1);
  if (!bVar3) {
    return false;
  }
  lVar11 = (longlong)local_res20[0];
  piVar1 = &(param_1->Data).ArrayNum;
  iVar5 = local_res20[0] + 1;
  if (-1 < local_res20[0]) {
    iVar9 = *piVar1;
    iVar6 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar6 = 0;
    }
    bVar3 = local_res20[0] < iVar6;
    local_res20[0] = iVar5;
    if (bVar3) goto LAB_1418e0929;
  }
  local_res20[0] = iVar5;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1418e0929:
  if ((*(short *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2) == 0x28) &&
     (bVar3 = Trim(local_res20,param_1), iVar5 = local_res20[0], bVar3)) {
    iVar6 = *piVar1;
    iVar10 = 1;
    iVar9 = iVar6 + -2;
    if (iVar6 == 0) {
      iVar9 = -1;
    }
    if (local_res20[0] <= iVar9) {
      do {
        pwVar7 = ::FString::operator[](param_1,iVar9);
        if (*pwVar7 == L')') {
          iVar10 = iVar10 + -1;
          if ((iVar10 == 0) && (iVar9 == iVar5)) {
            iVar12 = iVar5;
          }
        }
        else {
          pwVar7 = ::FString::operator[](param_1,iVar9);
          bVar3 = IsWhitespace(*pwVar7);
          if (!bVar3) {
            iVar12 = iVar9 + 1;
            break;
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar5 <= iVar9);
      if ((-1 < iVar12) && (iVar10 == 0)) {
        pFVar8 = ::FString::Mid(param_1,&local_38,iVar5,iVar12 - iVar5);
        ::FString::operator=(param_3,pFVar8);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

// GetUnqualifiedEnumValue @ 1418e1d70

FString * __cdecl
FDefaultValueHelper::GetUnqualifiedEnumValue(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,"::");
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = 0;
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
  }
  iVar1 = ::FString::Find(param_1,pwVar3,iVar4,CaseSensitive,FromStart,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar1 != -1) {
    ::FString::RightChop(param_1,__return_storage_ptr__,iVar1 + 2);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// HasWhitespaces @ 1418e2390

bool __cdecl FDefaultValueHelper::HasWhitespaces(FString *param_1)

{
  ushort _C;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  lVar7 = 0;
  while( true ) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 <= iVar6) {
      return false;
    }
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    _C = *(ushort *)((param_1->Data).AllocatorInstance.Data + lVar7);
    iVar5 = iswspace(_C);
    if (((iVar5 != 0) || ((_C == 0x2028 || (_C - 10 < 4 || _C == 0x2029)) || _C == 0x85)) ||
       (_C == 0xd)) break;
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 2;
  }
  return true;
}

// Is @ 1418e2880

bool __cdecl FDefaultValueHelper::Is(FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  int local_res10 [2];
  
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 != CompareStr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_res10[0] = 0;
  bVar3 = Trim(local_res10,param_1);
  if (bVar3) {
    if (param_2 == (wchar_t *)0x0) {
      iVar5 = -1;
    }
    else {
      sVar6 = wcslen(param_2);
      iVar5 = ::FString::Find(param_1,param_2,(int)sVar6,CaseSensitive,FromStart,-1);
    }
    iVar2 = local_res10[0];
    if (iVar5 == local_res10[0]) {
      sVar6 = wcslen(param_2);
      local_res10[0] = iVar2 + (int)sVar6;
      bVar3 = Trim(local_res10,param_1);
      return !bVar3;
    }
  }
  return false;
}

// IsStringValidFloat @ 1418e3a10

bool __cdecl FDefaultValueHelper::IsStringValidFloat(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_res8;
  
  local_res8 = param_1;
  bVar1 = Trim(&local_res8,param_2);
  if (bVar1) {
    if ((*local_res8 == L'-') || (*local_res8 == L'+')) {
      local_res8 = local_res8 + 1;
    }
    bVar1 = Trim(&local_res8,param_2);
    pwVar3 = local_res8;
    if (bVar1) {
      while ((pwVar3 < param_2 && (iVar2 = iswdigit(*pwVar3), iVar2 != 0))) {
        pwVar3 = pwVar3 + 1;
      }
      local_res8 = pwVar3;
      if (*pwVar3 == L'.') {
        pwVar3 = pwVar3 + 1;
        local_res8 = pwVar3;
      }
      while ((pwVar3 < param_2 && (iVar2 = iswdigit(*pwVar3), iVar2 != 0))) {
        pwVar3 = pwVar3 + 1;
      }
      if ((*pwVar3 == L'e') || (pwVar4 = pwVar3, local_res8 = pwVar3, *pwVar3 == L'E')) {
        pwVar4 = pwVar3 + 1;
        if ((pwVar3[1] == L'-') || (local_res8 = pwVar4, pwVar3[1] == L'+')) {
          pwVar4 = pwVar3 + 2;
          local_res8 = pwVar4;
        }
      }
      while ((pwVar4 < param_2 && (iVar2 = iswdigit(*pwVar4), iVar2 != 0))) {
        pwVar4 = pwVar4 + 1;
      }
      if ((*pwVar4 == L'f') || (local_res8 = pwVar4, *pwVar4 == L'F')) {
        local_res8 = pwVar4 + 1;
      }
      bVar1 = Trim(&local_res8,param_2);
      return !bVar1;
    }
  }
  return false;
}

// IsStringValidFloat @ 1418e3b90

bool __cdecl FDefaultValueHelper::IsStringValidFloat(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (1 < iVar1) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    bVar3 = IsStringValidFloat((wchar_t *)pFVar2,(wchar_t *)(pFVar2 + (longlong)(iVar1 + -1) * 2));
    return bVar3;
  }
  return false;
}

// IsStringValidInteger @ 1418e3bc0

bool __cdecl FDefaultValueHelper::IsStringValidInteger(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int local_res18 [4];
  
  bVar1 = IsStringValidInteger(param_1,param_2,local_res18);
  return bVar1;
}

// IsStringValidInteger @ 1418e3be0

bool __cdecl
FDefaultValueHelper::IsStringValidInteger(wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  wchar_t *local_res8;
  
  bVar5 = false;
  bVar1 = false;
  local_res8 = param_1;
  bVar4 = Trim(&local_res8,param_2);
  if (!bVar4) {
    return false;
  }
  if ((*local_res8 == L'-') || (*local_res8 == L'+')) {
    local_res8 = local_res8 + 1;
  }
  bVar4 = Trim(&local_res8,param_2);
  if (!bVar4) {
    return false;
  }
  if (*local_res8 == L'0') {
    bVar1 = true;
    if ((local_res8[1] == L'x') || (local_res8[1] == L'X')) {
      local_res8 = local_res8 + 2;
      bVar5 = true;
      iVar6 = 0x10;
      bVar1 = false;
    }
    else {
      iVar6 = 8;
      local_res8 = local_res8 + 1;
    }
    *param_3 = iVar6;
    pwVar3 = local_res8;
    pwVar2 = local_res8;
    if (bVar5) {
      while ((pwVar3 = pwVar2, pwVar2 < param_2 &&
             (local_res8 = pwVar2, iVar6 = iswxdigit(*pwVar2), pwVar3 = local_res8, iVar6 != 0))) {
        bVar1 = true;
        pwVar2 = pwVar2 + 1;
      }
      goto LAB_1418e3d03;
    }
  }
  else {
    *param_3 = 10;
    pwVar3 = local_res8;
  }
  while ((pwVar3 < param_2 && (iVar6 = iswdigit(*pwVar3), iVar6 != 0))) {
    bVar1 = true;
    pwVar3 = pwVar3 + 1;
  }
LAB_1418e3d03:
  local_res8 = pwVar3;
  bVar5 = Trim(&local_res8,param_2);
  if ((!bVar5) && (bVar1)) {
    return true;
  }
  return false;
}

// IsStringValidInteger @ 1418e3d40

bool __cdecl FDefaultValueHelper::IsStringValidInteger(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  if (1 < iVar1) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    bVar3 = IsStringValidInteger
                      ((wchar_t *)pFVar2,(wchar_t *)(pFVar2 + (longlong)(iVar1 + -1) * 2),local_res8
                      );
    return bVar3;
  }
  return false;
}

// IsStringValidLinearColor @ 1418e3d80

bool __cdecl FDefaultValueHelper::IsStringValidLinearColor(FString *param_1)

{
  bool bVar1;
  FLinearColor local_18;
  
  bVar1 = ParseLinearColor(param_1,&local_18);
  return bVar1;
}

// IsStringValidRotator @ 1418e3da0

bool __cdecl FDefaultValueHelper::IsStringValidRotator(FString *param_1)

{
  bool bVar1;
  TVector<double> local_28;
  
  bVar1 = ParseVector(param_1,&local_28);
  return bVar1;
}

// IsStringValidVector @ 1418e3dc0

bool __cdecl FDefaultValueHelper::IsStringValidVector(FString *param_1)

{
  bool bVar1;
  TVector<double> local_28;
  
  bVar1 = ParseVector(param_1,&local_28);
  return bVar1;
}

// IsWhitespace @ 1418e3de0

bool __cdecl FDefaultValueHelper::IsWhitespace(wchar_t param_1)

{
  int iVar1;
  
  iVar1 = iswspace(param_1);
  if (((iVar1 == 0) &&
      ((param_1 != L'\x2028' && (3 < (ushort)param_1 - 10 && param_1 != L'\x2029')) &&
       param_1 != L'\x85')) && (param_1 != L'\r')) {
    return false;
  }
  return true;
}

// ParseBool @ 1418ea720

bool __cdecl FDefaultValueHelper::ParseBool(FString *param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *_Str;
  bool bVar8;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8[0] = 0;
  bVar2 = HasWhitespaces(param_1);
  bVar8 = !bVar2;
  if (bVar8) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_48;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    pFVar5 = RemoveWhitespaces(&local_28,param_1);
  }
  local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar8) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar8) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = &local_38;
  if (!bVar2) {
    pFVar5 = param_1;
  }
  if ((pFVar5->Data).ArrayNum < 2) {
    bVar2 = false;
    goto LAB_1418ea8bc;
  }
  ::FString::ToLower(pFVar5,&local_58);
  _Str = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"true");
  if (iVar3 == 0) {
    bVar2 = true;
    *param_2 = true;
  }
  else {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar7.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"false");
    if (iVar3 == 0) {
      *param_2 = false;
      bVar2 = true;
    }
    else {
      iVar3 = (param_1->Data).ArrayNum;
      if (1 < iVar3) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        pwVar6 = StartOf(param_1);
        bVar2 = IsStringValidInteger
                          (pwVar6,(wchar_t *)(pFVar1 + (longlong)(iVar3 + -1) * 2),local_res8);
        if (bVar2) {
          if ((pFVar5->Data).ArrayNum != 0) {
            _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          uVar4 = wcstoul(_Str,(wchar_t **)0x0,local_res8[0]);
          bVar2 = true;
          *param_2 = uVar4 != 0;
          goto LAB_1418ea8a8;
        }
      }
      bVar2 = false;
    }
  }
LAB_1418ea8a8:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_1418ea8bc:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ParseColor @ 1418eabb0

bool __cdecl FDefaultValueHelper::ParseColor(FString *param_1,FColor *param_2)

{
  FScriptContainerElement *_Str;
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FColor_u_0 local_res8 [2];
  FColor_u_0 *local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar9 = (FScriptContainerElement *)0x0;
  local_res8[0].Bits = 0;
  local_res10 = &param_2->field0_0x0;
  bVar1 = HasWhitespaces(param_1);
  bVar10 = !bVar1;
  if (bVar10) {
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    pFVar3 = &local_68;
  }
  else {
    pFVar3 = RemoveWhitespaces(&local_48,param_1);
    pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
  }
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = pFVar9;
  if (bVar10) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar10) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar3 = &local_58;
  if (!bVar1) {
    pFVar3 = param_1;
  }
  if (1 < (pFVar3->Data).ArrayNum) {
    _Str = (pFVar3->Data).AllocatorInstance.Data;
    pwVar4 = wcsstr((wchar_t *)_Str,L",");
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar5 = wcsstr(pwVar4 + 1,L",");
      if (pwVar5 != (wchar_t *)0x0) {
        pwVar6 = wcsstr(pwVar5 + 1,L",");
        pwVar7 = EndOf(pFVar3);
        if (pwVar6 != (wchar_t *)0x0) {
          bVar1 = IsStringValidInteger(pwVar6 + 1,pwVar7,(int *)&local_res8[0].Bits);
          if (!bVar1) goto LAB_1418eadc2;
        }
        bVar1 = IsStringValidInteger((wchar_t *)_Str,pwVar4,(int *)&local_res8[0].Bits);
        if (bVar1) {
          bVar1 = IsStringValidInteger(pwVar4 + 1,pwVar5,(int *)&local_res8[0].Bits);
          if (bVar1) {
            if (pwVar6 != (wchar_t *)0x0) {
              pwVar7 = pwVar6;
            }
            bVar1 = IsStringValidInteger(pwVar5 + 1,pwVar7,(int *)&local_res8[0].Bits);
            if (bVar1) {
              if (pwVar6 == (wchar_t *)0x0) {
                uVar8 = 0xff;
              }
              else {
                iVar2 = _wtoi(pwVar6 + 1);
                uVar8 = (undefined1)iVar2;
              }
              iVar2 = _wtoi(pwVar5 + 1);
              local_res8[0]._s_0.B = (char)iVar2;
              iVar2 = _wtoi(pwVar4 + 1);
              local_res8[0]._s_0.G = (char)iVar2;
              iVar2 = _wtoi((wchar_t *)_Str);
              bVar1 = true;
              local_res8[0]._s_0.R = (char)iVar2;
              local_res8[0]._s_0.A = uVar8;
              *local_res10 = local_res8[0];
              goto LAB_1418eadc4;
            }
          }
        }
        bVar1 = FColor::InitFromString((FColor *)&local_res10->_s_0,param_1);
        goto LAB_1418eadc4;
      }
    }
  }
LAB_1418eadc2:
  bVar1 = false;
LAB_1418eadc4:
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return bVar1;
}

// ParseDouble @ 1418eb100

bool __cdecl FDefaultValueHelper::ParseDouble(FString *param_1,double *param_2)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FScriptContainerElement *_Str;
  FScriptContainerElement *pFVar4;
  double dVar5;
  FString local_28 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  if ((1 < iVar1) &&
     (pFVar4 = (param_1->Data).AllocatorInstance.Data,
     bVar2 = IsStringValidFloat((wchar_t *)pFVar4,(wchar_t *)(pFVar4 + (longlong)(iVar1 + -1) * 2)),
     bVar2)) {
    bVar2 = HasWhitespaces(param_1);
    if (bVar2) {
      pFVar3 = RemoveWhitespaces(local_28,param_1);
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      _Str = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        _Str = pFVar4;
      }
    }
    else {
      pFVar4 = (FScriptContainerElement *)0x0;
      if ((param_1->Data).ArrayNum == 0) {
        _Str = (FScriptContainerElement *)L"";
      }
      else {
        _Str = (param_1->Data).AllocatorInstance.Data;
        pFVar4 = (FScriptContainerElement *)0x0;
      }
    }
    dVar5 = wcstod((wchar_t *)_Str,(wchar_t **)0x0);
    *param_2 = dVar5;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return true;
  }
  return false;
}

// ParseFloat @ 1418ec8b0

bool __cdecl FDefaultValueHelper::ParseFloat(FString *param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FScriptContainerElement *_Str;
  FScriptContainerElement *pFVar4;
  double dVar5;
  FString local_28 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  if ((1 < iVar1) &&
     (pFVar4 = (param_1->Data).AllocatorInstance.Data,
     bVar2 = IsStringValidFloat((wchar_t *)pFVar4,(wchar_t *)(pFVar4 + (longlong)(iVar1 + -1) * 2)),
     bVar2)) {
    bVar2 = HasWhitespaces(param_1);
    if (bVar2) {
      pFVar3 = RemoveWhitespaces(local_28,param_1);
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      _Str = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        _Str = pFVar4;
      }
    }
    else {
      pFVar4 = (FScriptContainerElement *)0x0;
      if ((param_1->Data).ArrayNum == 0) {
        _Str = (FScriptContainerElement *)L"";
      }
      else {
        _Str = (param_1->Data).AllocatorInstance.Data;
        pFVar4 = (FScriptContainerElement *)0x0;
      }
    }
    dVar5 = _wtof((wchar_t *)_Str);
    *param_2 = (float)dVar5;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return true;
  }
  return false;
}

// ParseInt64 @ 1418ed8d0

bool __cdecl FDefaultValueHelper::ParseInt64(FString *param_1,long64 *param_2)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  ulonglong uVar4;
  FScriptContainerElement *_Str;
  FScriptContainerElement *pFVar5;
  int local_res8 [2];
  FString local_28 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  if ((1 < iVar1) &&
     (pFVar5 = (param_1->Data).AllocatorInstance.Data,
     bVar2 = IsStringValidInteger
                       ((wchar_t *)pFVar5,(wchar_t *)(pFVar5 + (longlong)(iVar1 + -1) * 2),
                        local_res8), bVar2)) {
    bVar2 = HasWhitespaces(param_1);
    if (bVar2) {
      pFVar3 = RemoveWhitespaces(local_28,param_1);
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      _Str = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        _Str = pFVar5;
      }
    }
    else {
      pFVar5 = (FScriptContainerElement *)0x0;
      if ((param_1->Data).ArrayNum == 0) {
        _Str = (FScriptContainerElement *)L"";
      }
      else {
        _Str = (param_1->Data).AllocatorInstance.Data;
        pFVar5 = (FScriptContainerElement *)0x0;
      }
    }
    uVar4 = _wcstoui64((wchar_t *)_Str,(wchar_t **)0x0,local_res8[0]);
    *param_2 = uVar4;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    return true;
  }
  return false;
}

// ParseInt @ 1418ed9c0

bool __cdecl FDefaultValueHelper::ParseInt(FString *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  FString *pFVar4;
  FScriptContainerElement *_Str;
  FScriptContainerElement *pFVar5;
  int local_res8 [2];
  FString local_28 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  if ((1 < iVar1) &&
     (pFVar5 = (param_1->Data).AllocatorInstance.Data,
     bVar2 = IsStringValidInteger
                       ((wchar_t *)pFVar5,(wchar_t *)(pFVar5 + (longlong)(iVar1 + -1) * 2),
                        local_res8), bVar2)) {
    bVar2 = HasWhitespaces(param_1);
    if (bVar2) {
      pFVar4 = RemoveWhitespaces(local_28,param_1);
      pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar4->Data).ArrayNum;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      _Str = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        _Str = pFVar5;
      }
    }
    else {
      pFVar5 = (FScriptContainerElement *)0x0;
      if ((param_1->Data).ArrayNum == 0) {
        _Str = (FScriptContainerElement *)L"";
      }
      else {
        _Str = (param_1->Data).AllocatorInstance.Data;
        pFVar5 = (FScriptContainerElement *)0x0;
      }
    }
    uVar3 = wcstoul((wchar_t *)_Str,(wchar_t **)0x0,local_res8[0]);
    *param_2 = uVar3;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    return true;
  }
  return false;
}

// ParseLinearColor @ 1418ede20

bool __cdecl FDefaultValueHelper::ParseLinearColor(FString *param_1,FLinearColor *param_2)

{
  FScriptContainerElement *_Str;
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *_Str_00;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  FString local_88;
  FString local_78;
  FString local_68 [4];
  
  FVar7.Data = (FScriptContainerElement *)0x0;
  bVar1 = HasWhitespaces(param_1);
  bVar8 = !bVar1;
  if (bVar8) {
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    pFVar2 = &local_78;
  }
  else {
    pFVar2 = RemoveWhitespaces(local_68,param_1);
    FVar7.Data = (pFVar2->Data).AllocatorInstance.Data;
  }
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_88.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = FVar7.Data;
  if ((bVar8) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  pFVar2 = &local_88;
  if (!bVar1) {
    pFVar2 = param_1;
  }
  if (1 < (pFVar2->Data).ArrayNum) {
    _Str = (pFVar2->Data).AllocatorInstance.Data;
    pwVar3 = wcsstr((wchar_t *)_Str,L",");
    if (pwVar3 != (wchar_t *)0x0) {
      _Str_00 = pwVar3 + 1;
      pwVar4 = wcsstr(_Str_00,L",");
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar5 = wcsstr(pwVar4 + 1,L",");
        pwVar6 = EndOf(pFVar2);
        if ((pwVar5 == (wchar_t *)0x0) || (bVar1 = IsStringValidFloat(pwVar5 + 1,pwVar6), bVar1)) {
          bVar1 = IsStringValidFloat((wchar_t *)_Str,pwVar3);
          if ((bVar1) && (bVar1 = IsStringValidFloat(_Str_00,pwVar4), bVar1)) {
            if (pwVar5 != (wchar_t *)0x0) {
              pwVar6 = pwVar5;
            }
            bVar1 = IsStringValidFloat(pwVar4 + 1,pwVar6);
            if (bVar1) {
              fVar12 = __real_3f800000;
              if (pwVar5 != (wchar_t *)0x0) {
                dVar9 = _wtof(pwVar5 + 1);
                fVar12 = (float)dVar9;
              }
              dVar9 = _wtof(pwVar4 + 1);
              dVar10 = _wtof(_Str_00);
              dVar11 = _wtof((wchar_t *)_Str);
              bVar1 = true;
              (param_2->field0_0x0)._s_0.R = (float)dVar11;
              (param_2->field0_0x0)._s_0.G = (float)dVar10;
              (param_2->field0_0x0)._s_0.B = (float)dVar9;
              (param_2->field0_0x0)._s_0.A = fVar12;
              FVar7.Data = local_88.Data.AllocatorInstance.Data;
              goto LAB_1418ee05d;
            }
          }
          bVar1 = FLinearColor::InitFromString(param_2,param_1);
          goto LAB_1418ee05d;
        }
      }
    }
  }
  bVar1 = false;
LAB_1418ee05d:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return bVar1;
}

// ParseRotator @ 1418ee520

bool __cdecl FDefaultValueHelper::ParseRotator(FString *param_1,TRotator<float> *param_2)

{
  bool bVar1;
  TRotator<double> local_28;
  
  bVar1 = ParseRotator(param_1,&local_28);
  if (bVar1) {
    param_2->Pitch = (float)local_28.Pitch;
    param_2->Yaw = (float)local_28.Yaw;
    param_2->Roll = (float)local_28.Roll;
    return true;
  }
  return false;
}

// ParseRotator @ 1418ee580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl FDefaultValueHelper::ParseRotator(FString *param_1,TRotator<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  short sVar2;
  wchar_t wVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  size_t sVar9;
  short *psVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined *puVar13;
  wchar_t wVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_6a8 [32];
  TVector<double>_u_0 local_688;
  wchar_t local_668 [256];
  wchar_t local_468 [256];
  wchar_t local_268 [256];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_6a8;
  bVar5 = ParseVector(param_1,(TVector<double> *)&local_688._s_0);
  if (bVar5) {
    param_2->Pitch = local_688._s_0.X;
    param_2->Yaw = local_688._s_0.Y;
    param_2->Roll = local_688._s_0.Z;
  }
  else {
    bVar5 = UE::Math::TRotator<double>::InitFromString(param_2,param_1);
    if (!bVar5) {
      pwVar16 = L"";
      if ((param_1->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      if ((FScriptContainerElement *)pwVar11 != (FScriptContainerElement *)0x0) {
        sVar2 = *pwVar11;
        bVar4 = false;
        bVar5 = false;
        if (sVar2 != 0) {
          while( true ) {
            pFVar8 = (FScriptContainerElement *)((longlong)pwVar11 + 2);
            sVar6 = sVar2 + -0x20;
            if (0x19 < (ushort)(sVar2 - 0x61U)) {
              sVar6 = sVar2;
            }
            if ((((!bVar5) && (!bVar4)) && (sVar6 == 0x50)) &&
               (iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar8,L"itch=",5), iVar7 == 0)
               ) break;
            if (((ushort)(sVar6 - 0x41U) < 0x1a) || ((ushort)(sVar6 - 0x30U) < 10)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (sVar6 == 0x22) {
              bVar5 = !bVar5;
            }
            sVar2 = *(short *)pFVar8;
            pwVar11 = (wchar_t *)pFVar8;
            if (sVar2 == 0) {
              return false;
            }
          }
          if ((FScriptContainerElement *)pwVar11 == (FScriptContainerElement *)0x0) {
            return false;
          }
          sVar2 = *(short *)((longlong)pwVar11 + 0xc);
          pFVar8 = (FScriptContainerElement *)((longlong)pwVar11 + 0xc);
          pFVar15 = pFVar8;
          if (sVar2 == 0x22) {
            pFVar15 = (FScriptContainerElement *)((longlong)pwVar11 + 0xe);
            pFVar8 = (FScriptContainerElement *)wcsstr((wchar_t *)pFVar15,L"\"");
            if (pFVar8 == (FScriptContainerElement *)0x0) {
              sVar9 = wcslen(pwVar11);
              pFVar8 = (FScriptContainerElement *)((longlong)pwVar11 + (longlong)(int)sVar9 * 2);
            }
          }
          else {
            while (sVar2 != 0) {
              psVar10 = (short *)&u_____;
              while( true ) {
                if (*psVar10 == 0) goto LAB_1418ee794;
                if (*(short *)pFVar15 == *psVar10) break;
                psVar10 = psVar10 + 1;
              }
              sVar2 = *(short *)(pFVar15 + 2);
              pFVar15 = pFVar15 + 2;
            }
LAB_1418ee794:
            lVar12 = (longlong)(int)((longlong)pFVar15 - (longlong)pFVar8 >> 1);
            pFVar15 = pFVar8 + lVar12 * 2;
            sVar2 = *(short *)(pFVar8 + lVar12 * 2);
            pFVar8 = pFVar15;
            while (sVar2 != 0) {
              puVar13 = &u_______;
              sVar6 = 0x2c;
              do {
                if (sVar2 == sVar6) goto LAB_1418ee7e0;
                sVar6 = *(short *)(puVar13 + 2);
                puVar13 = puVar13 + 2;
              } while (sVar6 != 0);
              pFVar1 = pFVar8 + 2;
              pFVar8 = pFVar8 + 2;
              sVar2 = *(short *)pFVar1;
            }
LAB_1418ee7e0:
            pFVar8 = pFVar15 + (longlong)(int)((longlong)pFVar8 - (longlong)pFVar15 >> 1) * 2;
          }
          iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar15 >> 1);
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          memcpy(local_668,pFVar15,(longlong)iVar7 * 2);
          local_668[iVar7] = L'\0';
          dVar17 = wcstod(local_668,(wchar_t **)0x0);
          if ((param_1->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          if ((FScriptContainerElement *)pwVar11 != (FScriptContainerElement *)0x0) {
            bVar4 = false;
            bVar5 = false;
            wVar3 = *pwVar11;
            while (wVar3 != L'\0') {
              pFVar8 = (FScriptContainerElement *)((longlong)pwVar11 + 2);
              wVar14 = wVar3 + L'￠';
              if (0x19 < (ushort)(wVar3 + L'ﾟ')) {
                wVar14 = wVar3;
              }
              if (((!bVar5) && (!bVar4)) &&
                 ((wVar14 == L'Y' &&
                  (iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar8,L"aw=",3), iVar7 == 0
                  )))) {
                if ((FScriptContainerElement *)pwVar11 == (FScriptContainerElement *)0x0) {
                  return false;
                }
                wVar3 = *(wchar_t *)((longlong)pwVar11 + 8);
                pFVar8 = (FScriptContainerElement *)((longlong)pwVar11 + 8);
                pFVar15 = pFVar8;
                if (wVar3 == L'\"') {
                  pFVar15 = (FScriptContainerElement *)((longlong)pwVar11 + 10);
                  pFVar8 = (FScriptContainerElement *)wcsstr((wchar_t *)pFVar15,L"\"");
                  if (pFVar8 == (FScriptContainerElement *)0x0) {
                    sVar9 = wcslen(pwVar11);
                    pFVar8 = (FScriptContainerElement *)
                             ((longlong)pwVar11 + (longlong)(int)sVar9 * 2);
                  }
                }
                else {
                  while (wVar3 != L'\0') {
                    pwVar11 = L" \r\n\t";
                    while( true ) {
                      if (*pwVar11 == L'\0') goto LAB_1418ee944;
                      if (*(wchar_t *)pFVar15 == *pwVar11) break;
                      pwVar11 = pwVar11 + 1;
                    }
                    wVar3 = *(wchar_t *)(pFVar15 + 2);
                    pFVar15 = pFVar15 + 2;
                  }
LAB_1418ee944:
                  lVar12 = (longlong)(int)((longlong)pFVar15 - (longlong)pFVar8 >> 1);
                  pFVar15 = pFVar8 + lVar12 * 2;
                  sVar2 = *(short *)(pFVar8 + lVar12 * 2);
                  pFVar8 = pFVar15;
                  while (sVar2 != 0) {
                    puVar13 = &u_______;
                    sVar6 = 0x2c;
                    do {
                      if (sVar2 == sVar6) goto LAB_1418ee990;
                      sVar6 = *(short *)(puVar13 + 2);
                      puVar13 = puVar13 + 2;
                    } while (sVar6 != 0);
                    pFVar1 = pFVar8 + 2;
                    pFVar8 = pFVar8 + 2;
                    sVar2 = *(short *)pFVar1;
                  }
LAB_1418ee990:
                  pFVar8 = pFVar15 + (longlong)(int)((longlong)pFVar8 - (longlong)pFVar15 >> 1) * 2;
                }
                iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar15 >> 1);
                if (0xff < iVar7) {
                  iVar7 = 0xff;
                }
                memcpy(local_468,pFVar15,(longlong)iVar7 * 2);
                local_468[iVar7] = L'\0';
                dVar18 = wcstod(local_468,(wchar_t **)0x0);
                if ((param_1->Data).ArrayNum != 0) {
                  pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                }
                if ((FScriptContainerElement *)pwVar16 == (FScriptContainerElement *)0x0) {
                  return false;
                }
                wVar3 = *pwVar16;
                bVar4 = false;
                bVar5 = false;
                while( true ) {
                  if (wVar3 == L'\0') {
                    return false;
                  }
                  pFVar8 = (FScriptContainerElement *)((longlong)pwVar16 + 2);
                  wVar14 = wVar3 + L'￠';
                  if (0x19 < (ushort)(wVar3 + L'ﾟ')) {
                    wVar14 = wVar3;
                  }
                  if (((!bVar5) && (!bVar4)) &&
                     ((wVar14 == L'R' &&
                      (iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar8,L"oll=",4),
                      iVar7 == 0)))) break;
                  if (((ushort)(wVar14 + L'﾿') < 0x1a) || ((ushort)(wVar14 + L'￐') < 10)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if (wVar14 == L'\"') {
                    bVar5 = !bVar5;
                  }
                  wVar3 = *(wchar_t *)pFVar8;
                  pwVar16 = (wchar_t *)pFVar8;
                }
                if ((FScriptContainerElement *)pwVar16 == (FScriptContainerElement *)0x0) {
                  return false;
                }
                wVar3 = *(wchar_t *)((longlong)pwVar16 + 10);
                pFVar8 = (FScriptContainerElement *)((longlong)pwVar16 + 10);
                pFVar15 = pFVar8;
                if (wVar3 == L'\"') {
                  pFVar15 = (FScriptContainerElement *)((longlong)pwVar16 + 0xc);
                  pFVar8 = (FScriptContainerElement *)wcsstr((wchar_t *)pFVar15,L"\"");
                  if (pFVar8 == (FScriptContainerElement *)0x0) {
                    sVar9 = wcslen(pwVar16);
                    pFVar8 = (FScriptContainerElement *)
                             ((longlong)pwVar16 + (longlong)(int)sVar9 * 2);
                  }
                }
                else {
                  while (wVar3 != L'\0') {
                    pwVar16 = L" \r\n\t";
                    while( true ) {
                      if (*pwVar16 == L'\0') goto LAB_1418eeb04;
                      if (*(wchar_t *)pFVar15 == *pwVar16) break;
                      pwVar16 = pwVar16 + 1;
                    }
                    wVar3 = *(wchar_t *)(pFVar15 + 2);
                    pFVar15 = pFVar15 + 2;
                  }
LAB_1418eeb04:
                  lVar12 = (longlong)(int)((longlong)pFVar15 - (longlong)pFVar8 >> 1);
                  pFVar15 = pFVar8 + lVar12 * 2;
                  sVar2 = *(short *)(pFVar8 + lVar12 * 2);
                  pFVar8 = pFVar15;
                  while (sVar2 != 0) {
                    puVar13 = &u_______;
                    sVar6 = 0x2c;
                    do {
                      if (sVar2 == sVar6) goto LAB_1418eeb50;
                      sVar6 = *(short *)(puVar13 + 2);
                      puVar13 = puVar13 + 2;
                    } while (sVar6 != 0);
                    pFVar1 = pFVar8 + 2;
                    pFVar8 = pFVar8 + 2;
                    sVar2 = *(short *)pFVar1;
                  }
LAB_1418eeb50:
                  pFVar8 = pFVar15 + (longlong)(int)((longlong)pFVar8 - (longlong)pFVar15 >> 1) * 2;
                }
                iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar15 >> 1);
                if (0xff < iVar7) {
                  iVar7 = 0xff;
                }
                memcpy(local_268,pFVar15,(longlong)iVar7 * 2);
                local_268[iVar7] = L'\0';
                dVar19 = wcstod(local_268,(wchar_t **)0x0);
                *(int *)&param_2->Pitch = SUB84(dVar17,0);
                *(int *)((longlong)&param_2->Pitch + 4) = (int)((ulonglong)dVar17 >> 0x20);
                *(int *)&param_2->Yaw = SUB84(dVar18,0);
                *(int *)((longlong)&param_2->Yaw + 4) = (int)((ulonglong)dVar18 >> 0x20);
                param_2->Roll = dVar19;
                return true;
              }
              if (((ushort)(wVar14 + L'﾿') < 0x1a) || ((ushort)(wVar14 + L'￐') < 10)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (wVar14 == L'\"') {
                bVar5 = !bVar5;
              }
              pwVar11 = (wchar_t *)pFVar8;
              wVar3 = *(wchar_t *)pFVar8;
            }
          }
        }
      }
      return false;
    }
  }
  return true;
}

// ParseVector2D @ 1418ef7a0

bool __cdecl FDefaultValueHelper::ParseVector2D(FString *param_1,TVector2<float> *param_2)

{
  FScriptContainerElement *_Str;
  TVector2<float>_u_0 TVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TVector2<double>_u_0 local_68;
  FString local_58;
  FString local_48 [3];
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  bVar2 = HasWhitespaces(param_1);
  bVar8 = !bVar2;
  if (bVar8) {
    local_68._s_0.Y = 0.0;
    pTVar3 = &local_68;
  }
  else {
    pTVar3 = (TVector2<double>_u_0 *)RemoveWhitespaces(local_48,param_1);
    pFVar6 = *(FScriptContainerElement **)pTVar3;
  }
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pTVar3->_s_0).X)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)&(pTVar3->_s_0).Y;
  local_58.Data.ArrayMax = *(int *)((longlong)&(pTVar3->_s_0).Y + 4);
  (pTVar3->_s_0).Y = 0.0;
  local_58.Data.AllocatorInstance.Data = pFVar6;
  if ((bVar8) && ((void *)local_68._s_0.X != (void *)0x0)) {
    FMemory::Free((void *)local_68._s_0.X);
  }
  if ((!bVar8) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pFVar7 = &local_58;
  if (!bVar2) {
    pFVar7 = param_1;
  }
  if (1 < (pFVar7->Data).ArrayNum) {
    _Str = (pFVar7->Data).AllocatorInstance.Data;
    pwVar4 = wcsstr((wchar_t *)_Str,L",");
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar5 = EndOf(pFVar7);
      bVar2 = IsStringValidFloat((wchar_t *)_Str,pwVar4);
      if ((bVar2) && (bVar2 = IsStringValidFloat(pwVar4 + 1,pwVar5), bVar2)) {
        dVar9 = wcstod(pwVar4 + 1,(wchar_t **)0x0);
        extraout_XMM0_Db = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar10 = wcstod((wchar_t *)_Str,(wchar_t **)0x0);
        extraout_XMM0_Db_00 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uVar11 = SUB84(dVar10,0);
        uVar12 = extraout_XMM0_Db_00;
        uVar13 = SUB84(dVar9,0);
        uVar14 = extraout_XMM0_Db;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
      else {
        bVar2 = UE::Math::TVector2<double>::InitFromString
                          ((TVector2<double> *)&local_68._s_0,param_1);
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        if (!bVar2) {
          return false;
        }
        uVar13 = SUB84(local_68._s_0.Y,0);
        uVar14 = (undefined4)((ulonglong)local_68._8_8_ >> 0x20);
        uVar11 = SUB84(local_68._s_0.X,0);
        uVar12 = (undefined4)((ulonglong)local_68._0_8_ >> 0x20);
      }
      TVar1._s_0.Y = (float)(double)CONCAT44(uVar14,uVar13);
      TVar1._s_0.X = (float)(double)CONCAT44(uVar12,uVar11);
      param_2->field0_0x0 = TVar1;
      return true;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return false;
}

// ParseVector2D @ 1418ef980

bool __cdecl FDefaultValueHelper::ParseVector2D(FString *param_1,TVector2<double> *param_2)

{
  FScriptContainerElement *_Str;
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FVar5.Data = (FScriptContainerElement *)0x0;
  bVar1 = HasWhitespaces(param_1);
  bVar6 = !bVar1;
  if (bVar6) {
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar2 = &local_48;
  }
  else {
    pFVar2 = RemoveWhitespaces(local_38,param_1);
    FVar5.Data = (pFVar2->Data).AllocatorInstance.Data;
  }
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_58.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = FVar5.Data;
  if (bVar6) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar6) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pFVar2 = &local_58;
  if (!bVar1) {
    pFVar2 = param_1;
  }
  if (1 < (pFVar2->Data).ArrayNum) {
    _Str = (pFVar2->Data).AllocatorInstance.Data;
    pwVar3 = wcsstr((wchar_t *)_Str,L",");
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar4 = EndOf(pFVar2);
      bVar1 = IsStringValidFloat((wchar_t *)_Str,pwVar3);
      if (bVar1) {
        bVar1 = IsStringValidFloat(pwVar3 + 1,pwVar4);
        if (bVar1) {
          dVar7 = wcstod(pwVar3 + 1,(wchar_t **)0x0);
          dVar8 = wcstod((wchar_t *)_Str,(wchar_t **)0x0);
          (param_2->field0_0x0)._s_0.X = dVar8;
          bVar1 = true;
          (param_2->field0_0x0)._s_0.Y = dVar7;
          FVar5.Data = local_58.Data.AllocatorInstance.Data;
          goto LAB_1418efacd;
        }
      }
      bVar1 = UE::Math::TVector2<double>::InitFromString(param_2,param_1);
      goto LAB_1418efacd;
    }
  }
  bVar1 = false;
LAB_1418efacd:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return bVar1;
}

// ParseVector4 @ 1418efb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FDefaultValueHelper::ParseVector4(FString *param_1,TVector4<float> *param_2)

{
  bool bVar1;
  TVector4<double>_u_0 local_28;
  
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  bVar1 = ParseVector4(param_1,(TVector4<double> *)&local_28._s_0);
  if (bVar1) {
    (param_2->field0_0x0)._s_0.X = (float)local_28._s_0.X;
    (param_2->field0_0x0)._s_0.Y = (float)local_28._s_0.Y;
    (param_2->field0_0x0)._s_0.Z = (float)local_28._s_0.Z;
    (param_2->field0_0x0)._s_0.W = (float)local_28._s_0.W;
    return true;
  }
  return false;
}

// ParseVector4 @ 1418efba0

bool __cdecl FDefaultValueHelper::ParseVector4(FString *param_1,TVector4<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  double local_res18;
  double local_res20;
  double local_28;
  double local_20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar4 = ::FString::ParseIntoArray(param_1,&local_18,L",",true);
  if (iVar4 == 4) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = ParseDouble((FString *)local_18.AllocatorInstance.Data,&local_20);
    if (bVar2) {
      if (local_18.ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = ParseDouble((FString *)(local_18.AllocatorInstance.Data + 0x10),&local_res18);
      if (bVar2) {
        if (local_18.ArrayNum < 3) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        bVar2 = ParseDouble((FString *)(local_18.AllocatorInstance.Data + 0x20),&local_res20);
        if (bVar2) {
          if (local_18.ArrayNum < 4) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          bVar2 = ParseDouble((FString *)(local_18.AllocatorInstance.Data + 0x30),&local_28);
          if (bVar2) {
            (param_2->field0_0x0)._s_0.X = local_20;
            (param_2->field0_0x0)._s_0.Y = local_res18;
            (param_2->field0_0x0)._s_0.Z = local_res20;
            (param_2->field0_0x0)._s_0.W = local_28;
            bVar2 = true;
            goto LAB_1418efd72;
          }
        }
      }
    }
  }
  bVar2 = UE::Math::TVector4<double>::InitFromString(param_2,param_1);
LAB_1418efd72:
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// ParseVector @ 1418efdb0

bool __cdecl FDefaultValueHelper::ParseVector(FString *param_1,TVector<float> *param_2)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  bVar1 = ParseVector(param_1,(TVector<double> *)&local_28._s_0);
  if (bVar1) {
    (param_2->field0_0x0)._s_0.X = (float)local_28._s_0.X;
    (param_2->field0_0x0)._s_0.Y = (float)local_28._s_0.Y;
    (param_2->field0_0x0)._s_0.Z = (float)local_28._s_0.Z;
    return true;
  }
  return false;
}

// ParseVector @ 1418efe10

bool __cdecl FDefaultValueHelper::ParseVector(FString *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *_Str;
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  bVar1 = HasWhitespaces(param_1);
  bVar7 = !bVar1;
  if (bVar7) {
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    pFVar2 = &local_78;
  }
  else {
    pFVar2 = RemoveWhitespaces(local_68,param_1);
    FVar6.Data = (pFVar2->Data).AllocatorInstance.Data;
  }
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_88.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = FVar6.Data;
  if (bVar7) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar7) && (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  pFVar2 = &local_88;
  if (!bVar1) {
    pFVar2 = param_1;
  }
  if (1 < (pFVar2->Data).ArrayNum) {
    _Str = (pFVar2->Data).AllocatorInstance.Data;
    pwVar3 = wcsstr((wchar_t *)_Str,L",");
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar4 = wcsstr(pwVar3 + 1,L",");
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar5 = wcsstr(pwVar4 + 1,L",");
        if (pwVar5 == (wchar_t *)0x0) {
          pwVar5 = EndOf(pFVar2);
          bVar1 = IsStringValidFloat((wchar_t *)_Str,pwVar3);
          if (bVar1) {
            bVar1 = IsStringValidFloat(pwVar3 + 1,pwVar4);
            if (bVar1) {
              bVar1 = IsStringValidFloat(pwVar4 + 1,pwVar5);
              if (bVar1) {
                dVar8 = wcstod(pwVar4 + 1,(wchar_t **)0x0);
                dVar9 = wcstod(pwVar3 + 1,(wchar_t **)0x0);
                dVar10 = wcstod((wchar_t *)_Str,(wchar_t **)0x0);
                bVar1 = true;
                (param_2->field0_0x0)._s_0.X = dVar10;
                (param_2->field0_0x0)._s_0.Y = dVar9;
                (param_2->field0_0x0)._s_0.Z = dVar8;
                FVar6.Data = local_88.Data.AllocatorInstance.Data;
                goto LAB_1418effe4;
              }
            }
          }
          bVar1 = UE::Math::TVector<double>::InitFromString(param_2,param_1);
          goto LAB_1418effe4;
        }
      }
    }
  }
  bVar1 = false;
LAB_1418effe4:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return bVar1;
}

// RemoveWhitespaces @ 1418f2e20

FString * __cdecl
FDefaultValueHelper::RemoveWhitespaces(FString *__return_storage_ptr__,FString *param_1)

{
  ushort _C;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_1->Data).ArrayNum;
  if (1 < iVar4) {
    ::FString::Reserve(__return_storage_ptr__,iVar4 + -1);
    uVar8 = uVar7;
    while( true ) {
      iVar4 = (param_1->Data).ArrayNum;
      iVar3 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      iVar6 = (int)uVar7;
      if (iVar3 <= iVar6) break;
      if ((((iVar6 < 0) || (iVar4 == 0)) || (iVar4 + -1 <= iVar6)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      _C = *(ushort *)((param_1->Data).AllocatorInstance.Data + uVar8);
      iVar4 = iswspace(_C);
      if (((iVar4 == 0) && ((_C != 0x2028 && (3 < _C - 10 && _C != 0x2029)) && _C != 0x85)) &&
         (_C != 0xd)) {
        if (iVar6 < 0) {
code_r0x0001418f2f5b:
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FString *)(*pcVar1)();
            return pFVar5;
          }
        }
        else {
          iVar4 = (param_1->Data).ArrayNum;
          iVar3 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if (iVar3 <= iVar6) goto code_r0x0001418f2f5b;
        }
        ::FString::AppendChar
                  (__return_storage_ptr__,
                   *(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar8));
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar8 = uVar8 + 2;
    }
  }
  return __return_storage_ptr__;
}

// StartOf @ 1418f96c0

wchar_t * __cdecl FDefaultValueHelper::StartOf(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Source.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  if ((param_1->Data).ArrayNum != 0) {
    return (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  return L"";
}

// StringFromCppString @ 1418f9a90

bool __cdecl
FDefaultValueHelper::StringFromCppString(FString *param_1,FString *param_2,FString *param_3)

{
  ushort _C;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_res20 [2];
  FString local_40;
  
  local_res20[0] = 0;
  iVar12 = 0;
  bVar3 = Trim(local_res20,param_1);
  if (!bVar3) {
    return false;
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar5 = ::FString::Find(param_1,pwVar7,iVar5,CaseSensitive,FromStart,-1);
  if (iVar5 == local_res20[0]) {
    iVar5 = (param_2->Data).ArrayNum;
    iVar12 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar12 = 0;
    }
    local_res20[0] = local_res20[0] + iVar12;
    bVar3 = Trim(local_res20,param_1);
    iVar12 = local_res20[0];
    if (!bVar3) {
      return false;
    }
    local_res20[0] = local_res20[0] + 1;
    pwVar7 = ::FString::operator[](param_1,iVar12);
    if (*pwVar7 != L'(') {
      return false;
    }
    iVar12 = 1;
    bVar3 = Trim(local_res20,param_1);
    if (!bVar3) {
      return false;
    }
  }
  iVar5 = local_res20[0];
  iVar6 = ::FString::Find(param_1,L"TEXT",4,CaseSensitive,FromStart,-1);
  local_res20[0] = iVar5;
  if (iVar6 == iVar5) {
    local_res20[0] = iVar5 + 4;
    bVar3 = Trim(local_res20,param_1);
    iVar5 = local_res20[0];
    if (!bVar3) {
      return false;
    }
    local_res20[0] = local_res20[0] + 1;
    pwVar7 = ::FString::operator[](param_1,iVar5);
    if (*pwVar7 != L'(') {
      return false;
    }
    iVar12 = iVar12 + 1;
    bVar3 = Trim(local_res20,param_1);
    if (!bVar3) {
      return false;
    }
  }
  iVar5 = local_res20[0] + 1;
  iVar6 = local_res20[0];
  local_res20[0] = iVar5;
  pwVar7 = ::FString::operator[](param_1,iVar6);
  iVar6 = iVar5;
  if (*pwVar7 != L'\"') {
    return false;
  }
  while( true ) {
    iVar10 = (param_1->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar6;
    iVar11 = -1;
    if (iVar9 <= iVar6) goto LAB_1418f9cc0;
    pwVar7 = ::FString::operator[](param_1,iVar6);
    if ((*pwVar7 == L'\"') && (pwVar7 = ::FString::operator[](param_1,iVar6 + -1), *pwVar7 != L'\\')
       ) break;
    local_res20[0] = iVar6 + 1;
    iVar6 = local_res20[0];
  }
  local_res20[0] = iVar6 + 1;
  iVar10 = local_res20[0];
  iVar11 = iVar6;
LAB_1418f9cc0:
  do {
    while( true ) {
      iVar6 = (param_1->Data).ArrayNum;
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (iVar9 <= iVar10) {
        if (iVar11 < 0) {
          return false;
        }
        if (iVar12 != 0) {
          return false;
        }
        pFVar8 = ::FString::Mid(param_1,&local_40,iVar5,iVar11 - iVar5);
        if (param_3 != pFVar8) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_3->Data).ArrayNum = (pFVar8->Data).ArrayNum;
          (param_3->Data).ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (((iVar10 < 0) || (iVar9 <= iVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar10 * 2) != 0x29) break;
      local_res20[0] = iVar10 + 1;
      iVar12 = iVar12 + -1;
      iVar10 = local_res20[0];
    }
    if (iVar10 < 0) {
code_r0x0001418f9d6f:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar6 = (param_1->Data).ArrayNum;
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (iVar9 <= iVar10) goto code_r0x0001418f9d6f;
    }
    _C = *(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar10 * 2);
    iVar6 = iswspace(_C);
    if (((iVar6 == 0) && ((_C != 0x2028 && (3 < _C - 10 && _C != 0x2029)) && _C != 0x85)) &&
       (_C != 0xd)) {
      return false;
    }
    local_res20[0] = iVar10 + 1;
    iVar10 = local_res20[0];
  } while( true );
}

// TS @ 1418f9f20

wchar_t __cdecl FDefaultValueHelper::TS(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 != Sign",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      wVar3 = (*pcVar1)();
      return wVar3;
    }
  }
  if (*param_1 == L'\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 != Sign[0]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      wVar3 = (*pcVar1)();
      return wVar3;
    }
  }
  return *param_1;
}

// Trim @ 1418fcb10

bool __cdecl FDefaultValueHelper::Trim(int *param_1,FString *param_2)

{
  ushort _C;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_1;
  while( true ) {
    iVar6 = (param_2->Data).ArrayNum;
    iVar4 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar5) break;
    if ((((iVar6 == 0) || (iVar5 < 0)) || (iVar6 + -1 <= iVar5)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _C = *(ushort *)((param_2->Data).AllocatorInstance.Data + (longlong)iVar5 * 2);
    iVar5 = iswspace(_C);
    if (((iVar5 == 0) && ((_C != 0x2028 && (3 < _C - 10 && _C != 0x2029)) && _C != 0x85)) &&
       (_C != 0xd)) break;
    *param_1 = *param_1 + 1;
    iVar5 = *param_1;
  }
  iVar5 = (param_2->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  return *param_1 < iVar6;
}

// Trim @ 1418fcc30

bool __cdecl FDefaultValueHelper::Trim(wchar_t **param_1,wchar_t *param_2)

{
  wchar_t _C;
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if ((*param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 != Start",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                         ,0x62,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 != End",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\DefaultValueHelper.cpp"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pwVar1 = *param_1;
  while (pwVar1 < param_2) {
    _C = *pwVar1;
    iVar5 = iswspace(_C);
    if (((iVar5 == 0) &&
        ((_C != L'\x2028' && (3 < (ushort)_C - 10 && _C != L'\x2029')) && _C != L'\x85')) &&
       (_C != L'\r')) break;
    *param_1 = *param_1 + 1;
    pwVar1 = *param_1;
  }
  return *param_1 < param_2;
}


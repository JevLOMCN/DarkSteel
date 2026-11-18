// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// TestInner<1> @ 141a67530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNameAutoTestTruncateHelper::TestInner<1>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ushort uVar6;
  wchar_t wVar7;
  undefined1 auStack_78 [32];
  short local_58;
  FWideStringViewWithWidth local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  short local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar6 = 0;
  local_58 = -0x5556;
  local_18 = 0xaaaaaaaa;
  local_14 = -0x5556;
  local_48.Str = L"ABC_2147483646";
  wVar7 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = uVar6 | wVar7;
    wVar7 = *pwVar5;
  } while (wVar7 != L'\0');
  local_48.bIsWide = (uVar6 & 0xff80) != 0;
  local_48.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_30 = CONCAT44(local_48._12_4_,local_48.Len);
  local_38 = L"ABC_2147483646";
  if (local_48.Len == 0) {
    local_48.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_30);
    local_28 = local_38;
    uStack_20 = uStack_30;
    FNameHelper::MakeWithNumber(&local_48,(EFindName)&local_28,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_48,(wchar_t *)&local_18,2);
  if (uVar3 == 1) {
LAB_141a676e3:
    if (((wchar_t)local_18 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        if ((local_18._2_2_ == 0) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfdb,L""), !bVar2)) goto LAB_141a6769e;
        goto code_r0x000141a6769d;
      }
      goto LAB_141a6766c;
    }
    if (local_18._2_2_ == 0x42) goto LAB_141a6769e;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.Data[Index] == TestStr[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd7,L"");
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a676e3;
    if (((wchar_t)local_18 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a6766c:
    if (local_18._2_2_ == local_58) goto LAB_141a6769e;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.Data[Index] == CanaryValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfdf,L"");
  }
  if (bVar2) {
code_r0x000141a6769d:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a6769e:
  if ((local_14 != local_58) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<2> @ 141a67790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNameAutoTestTruncateHelper::TestInner<2>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  short local_58;
  FWideStringViewWithWidth local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t *local_28;
  undefined8 uStack_20;
  wchar_t local_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar7 = 0;
  local_58 = -0x5556;
  _local_18 = 0xaaaaaaaaaaaaaaaa;
  local_48.Str = L"ABC_2147483646";
  wVar8 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_48.bIsWide = (uVar7 & 0xff80) != 0;
  local_48.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_30 = CONCAT44(local_48._12_4_,local_48.Len);
  local_38 = L"ABC_2147483646";
  if (local_48.Len == 0) {
    local_48.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_30);
    local_28 = local_38;
    uStack_20 = uStack_30;
    FNameHelper::MakeWithNumber(&local_48,(EFindName)&local_28,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_48,&local_18,3);
  if (uVar3 == 2) {
LAB_141a67969:
    if ((local_18 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < uVar3) {
      if ((sStack_16 != 0x42) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (2 < uVar3) {
        if ((sStack_14 == 0x43) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a6791f;
        goto code_r0x000141a6791e;
      }
      if ((sStack_14 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a6791e;
      goto LAB_141a6791f;
    }
    if (uVar3 != 1) goto LAB_141a678bf;
    if (sStack_16 != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a678d6;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a67969;
    if ((local_18 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a678bf:
    if (sStack_16 != local_58) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a678d6:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((sStack_14 != local_58) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a6791e:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a6791f:
  if ((sStack_12 != local_58) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<3> @ 141a67a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNameAutoTestTruncateHelper::TestInner<3>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  short local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t local_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar7 = 0;
  local_68 = -0x5556;
  _local_28 = 0xaaaaaaaaaaaaaaaa;
  local_20 = -0x5556;
  local_58.Str = L"ABC_2147483646";
  wVar8 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_58.bIsWide = (uVar7 & 0xff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_58,&local_28,4);
  if (uVar3 == 3) {
LAB_141a67c7c:
    if ((local_28 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 != 1) goto LAB_141a67b9f;
      if (sStack_26 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a67bb6;
      }
      goto LAB_141a67bcf;
    }
    if ((sStack_26 != 0x42) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < uVar3) {
      if ((sStack_24 != 0x43) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (3 < uVar3) {
        if ((sStack_22 == 0x5f) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a67c2f;
        goto code_r0x000141a67c2e;
      }
      if ((sStack_22 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a67c2e;
      goto LAB_141a67c2f;
    }
    if (sStack_24 != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a67be6;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a67c7c;
    if ((local_28 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a67b9f:
    if (sStack_26 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a67bb6:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a67bcf:
    if (sStack_24 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a67be6:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((sStack_22 != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a67c2e:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a67c2f:
  if ((local_20 != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<4> @ 141a67dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNameAutoTestTruncateHelper::TestInner<4>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  short local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t local_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar7 = 0;
  local_68 = -0x5556;
  _local_28 = 0xaaaaaaaaaaaaaaaa;
  local_20 = 0xaaaaaaaa;
  local_58.Str = L"ABC_2147483646";
  wVar8 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_58.bIsWide = (uVar7 & 0xff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_58,&local_28,5);
  if (uVar3 == 4) {
LAB_141a6800c:
    if ((local_28 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 != 1) goto LAB_141a67eff;
      if (sStack_26 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a67f16;
      }
      goto LAB_141a67f2f;
    }
    if ((sStack_26 != 0x42) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 3) {
      if (sStack_24 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a67f46;
      }
      goto LAB_141a67f5f;
    }
    if ((sStack_24 != 0x43) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (3 < uVar3) {
      if ((sStack_22 != 0x5f) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (4 < uVar3) {
        if (((short)local_20 == 0x32) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a67fbf;
        goto code_r0x000141a67fbe;
      }
      if (((short)local_20 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a67fbe;
      goto LAB_141a67fbf;
    }
    if (sStack_22 != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a67f76;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a6800c;
    if ((local_28 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a67eff:
    if (sStack_26 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a67f16:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a67f2f:
    if (sStack_24 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a67f46:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a67f5f:
    if (sStack_22 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a67f76:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (((short)local_20 != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a67fbe:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a67fbf:
  if ((local_20._2_2_ != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<5> @ 141a681c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNameAutoTestTruncateHelper::TestInner<5>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  short local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t local_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  undefined4 local_20;
  short local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar7 = 0;
  local_68 = -0x5556;
  _local_28 = 0xaaaaaaaaaaaaaaaa;
  local_20 = 0xaaaaaaaa;
  local_1c = -0x5556;
  wVar8 = L'\0';
  local_58.Str = L"ABC_2147483646";
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_58.bIsWide = (uVar7 & 0xff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_58,&local_28,6);
  if (uVar3 == 5) {
LAB_141a6842d:
    if ((local_28 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 != 1) goto LAB_141a682f0;
      if (sStack_26 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68307;
      }
      goto LAB_141a68320;
    }
    if ((sStack_26 != 0x42) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 3) {
      if (sStack_24 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68337;
      }
      goto LAB_141a68350;
    }
    if ((sStack_24 != 0x43) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 4) {
      if (sStack_22 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68367;
      }
      goto LAB_141a68380;
    }
    if ((sStack_22 != 0x5f) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < uVar3) {
      if (((short)local_20 != 0x32) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (5 < uVar3) {
        if ((local_20._2_2_ == 0x31) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a683e0;
        goto code_r0x000141a683df;
      }
      if ((local_20._2_2_ != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a683df;
      goto LAB_141a683e0;
    }
    if ((short)local_20 != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a68397;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a6842d;
    if ((local_28 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a682f0:
    if (sStack_26 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68307:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68320:
    if (sStack_24 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68337:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68350:
    if (sStack_22 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68367:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68380:
    if ((short)local_20 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68397:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((local_20._2_2_ != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a683df:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a683e0:
  if ((local_1c != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<6> @ 141a68630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<6>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  short local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Str = L"ABC_2147483646";
  uVar7 = 0;
  local_68 = -0x5556;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_20 = _UNK_1506e9cf8;
  wVar8 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_58.bIsWide = (uVar7 & 0xff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_58,(wchar_t *)&local_28,7);
  if (uVar3 == 6) {
LAB_141a688ce:
    if (((wchar_t)local_28 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 != 1) goto LAB_141a68761;
      if (local_28._2_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68778;
      }
      goto LAB_141a68791;
    }
    if ((local_28._2_2_ != 0x42) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 3) {
      if (local_28._4_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a687a8;
      }
      goto LAB_141a687c1;
    }
    if ((local_28._4_2_ != 0x43) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 4) {
      if (local_28._6_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a687d8;
      }
      goto LAB_141a687f1;
    }
    if ((local_28._6_2_ != 0x5f) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 5) {
      if ((short)uStack_20 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68808;
      }
      goto LAB_141a68821;
    }
    if (((short)uStack_20 != 0x32) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (5 < uVar3) {
      if ((uStack_20._2_2_ != 0x31) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (6 < uVar3) {
        if ((uStack_20._4_2_ == 0x34) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a68881;
        goto code_r0x000141a68880;
      }
      if ((uStack_20._4_2_ != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a68880;
      goto LAB_141a68881;
    }
    if (uStack_20._2_2_ != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a68838;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a688ce;
    if (((wchar_t)local_28 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a68761:
    if (local_28._2_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68778:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68791:
    if (local_28._4_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a687a8:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a687c1:
    if (local_28._6_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a687d8:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a687f1:
    if ((short)uStack_20 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68808:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68821:
    if (uStack_20._2_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68838:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((uStack_20._4_2_ != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a68880:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a68881:
  if ((uStack_20._6_2_ != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<7> @ 141a68b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<7>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  ushort uVar7;
  wchar_t wVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  short local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  short local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Str = L"ABC_2147483646";
  uVar7 = 0;
  local_68 = -0x5556;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_20 = _UNK_1506e9cf8;
  local_18 = -0x5556;
  wVar8 = L'\0';
  pwVar5 = L"ABC_2147483646";
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar7 = uVar7 | wVar8;
    wVar8 = *pwVar5;
  } while (wVar8 != L'\0');
  local_58.bIsWide = (uVar7 & 0xff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar3 = ::FName::ToStringInternal((FName *)&local_58,(wchar_t *)&local_28,8);
  if (uVar3 == 7) {
LAB_141a68dfc:
    if (((wchar_t)local_28 != L'A') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 2) {
      if (uVar3 != 1) goto LAB_141a68c5f;
      if (local_28._2_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68c76;
      }
      goto LAB_141a68c8f;
    }
    if ((local_28._2_2_ != 0x42) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 3) {
      if (local_28._4_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68ca6;
      }
      goto LAB_141a68cbf;
    }
    if ((local_28._4_2_ != 0x43) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 4) {
      if (local_28._6_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68cd6;
      }
      goto LAB_141a68cef;
    }
    if ((local_28._6_2_ != 0x5f) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 5) {
      if ((short)uStack_20 != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68d06;
      }
      goto LAB_141a68d1f;
    }
    if (((short)uStack_20 != 0x32) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 6) {
      if (uStack_20._2_2_ != 0) {
        iVar9 = 0xfdb;
        pcVar6 = "Buffer.Data[Index] == 0";
        goto LAB_141a68d36;
      }
      goto LAB_141a68d4f;
    }
    if ((uStack_20._2_2_ != 0x31) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == TestStr[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfd7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (6 < uVar3) {
      if ((uStack_20._4_2_ != 0x34) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (7 < uVar3) {
        if ((uStack_20._6_2_ == 0x37) ||
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Data[Index] == TestStr[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0xfd7,L""), !bVar2)) goto LAB_141a68daf;
        goto code_r0x000141a68dae;
      }
      if ((uStack_20._6_2_ != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar2)) goto code_r0x000141a68dae;
      goto LAB_141a68daf;
    }
    if (uStack_20._4_2_ != 0) {
      iVar9 = 0xfdb;
      pcVar6 = "Buffer.Data[Index] == 0";
      goto LAB_141a68d66;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 != 0) goto LAB_141a68dfc;
    if (((wchar_t)local_28 != L'\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.Data[Index] == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0xfdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_141a68c5f:
    if (local_28._2_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68c76:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68c8f:
    if (local_28._4_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68ca6:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68cbf:
    if (local_28._6_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68cd6:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68cef:
    if ((short)uStack_20 != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68d06:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68d1f:
    if (uStack_20._2_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68d36:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_141a68d4f:
    if (uStack_20._4_2_ != local_68) {
      iVar9 = 0xfdf;
      pcVar6 = "Buffer.Data[Index] == CanaryValue";
LAB_141a68d66:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,iVar9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((uStack_20._6_2_ != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Data[Index] == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfdf,L""), bVar2)) {
code_r0x000141a68dae:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a68daf:
  if ((local_18 != local_68) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<8> @ 141a690a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<8>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_18 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uVar8 = 0;
  local_68 = 0xaaaa;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_24 = _UNK_1506e9cf4;
  uStack_20 = _UNK_1506e9cf8;
  uStack_1c = _UNK_1506e9cfc;
  local_58.Str = L"ABC_2147483646";
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_58.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_58,(wchar_t *)&local_28,9);
  uVar7 = uVar8;
  if ((uVar9 != 8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_28 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a69266;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_28 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a69266:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_28 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a69266;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (8 < uVar6 + 1) {
      if ((local_18._2_2_ != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<9> @ 141a692e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<9>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t local_28 [4];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  wchar_t local_18;
  undefined2 uStack_16;
  wchar_t local_14;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Str = L"ABC_2147483646";
  local_18 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_16 = _UNK_1506e9cf2;
  uVar8 = 0;
  local_14 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_68 = 0xaaaa;
  local_28[0] = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_28[1] = _UNK_1506e9cf2;
  local_28[2] = _UNK_1506e9cf4;
  local_28[3] = _UNK_1506e9cf6;
  uStack_20 = _UNK_1506e9cf8;
  uStack_1e = _UNK_1506e9cfa;
  uStack_1c = _UNK_1506e9cfc;
  uStack_1a = _UNK_1506e9cfe;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_58.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_58,local_28,10);
  uVar7 = uVar8;
  if ((uVar9 != 9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)local_28 + uVar7) != *(short *)((longlong)L"ABC_2147483646" + uVar7)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Buffer.Data[Index] == TestStr[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                   ,0xfd7,L""), bVar3)) goto code_r0x000141a694a6;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)local_28 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a694a6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)local_28 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a694a6;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (9 < uVar6 + 1) {
      if ((local_14 != L'ꪪ') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<10> @ 141a69520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<10>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  FWideStringViewWithWidth local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_18 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uVar8 = 0;
  local_68 = 0xaaaa;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_20 = _UNK_1506e9cf8;
  local_58.Str = L"ABC_2147483646";
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_58.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_58.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_40 = CONCAT44(local_58._12_4_,local_58.Len);
  local_48 = L"ABC_2147483646";
  if (local_58.Len == 0) {
    local_58.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_40);
    local_38 = local_48;
    uStack_30 = uStack_40;
    FNameHelper::MakeWithNumber(&local_58,(EFindName)&local_38,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_58,(wchar_t *)&local_28,0xb);
  uVar7 = uVar8;
  if ((uVar9 != 10) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_28 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a696e6;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_28 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a696e6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_28 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a696e6;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (10 < uVar6 + 1) {
      if ((local_18._6_2_ != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<0> @ 141a69760

void __cdecl FNameAutoTestTruncateHelper::TestInner<0>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char *pcVar7;
  ushort uVar8;
  wchar_t wVar9;
  undefined4 local_res10;
  FName local_res18;
  undefined8 uStack_20;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  uVar8 = 0;
  local_res10 = 0xaaaaaaaa;
  wVar9 = L'\0';
  pwVar6 = L"ABC_2147483646";
  do {
    pwVar5 = pwVar6;
    pwVar6 = pwVar5 + 1;
    uVar8 = uVar8 | wVar9;
    wVar9 = *pwVar6;
  } while (wVar9 != L'\0');
  iVar4 = (int)((longlong)(pwVar5 + -0xa8372b53) >> 1);
  uStack_20 = CONCAT44(CONCAT31(uStack_20._5_3_,(uVar8 & 0xff80) != 0),iVar4);
  if (iVar4 == 0) {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_20);
    local_18 = L"ABC_2147483646";
    uStack_10 = uStack_20;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)&local_res18,(EFindName)&local_18,1);
  }
  uVar3 = ::FName::ToStringInternal(&local_res18,(wchar_t *)&local_res10,1);
  if (uVar3 == 0) {
    if ((wchar_t)local_res10 == L'\0') goto LAB_141a698d2;
    iVar4 = 0xfdb;
    pcVar7 = "Buffer.Data[Index] == 0";
LAB_141a698b4:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      (pcVar7,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,iVar4,L"");
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len == RequiredLen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 == 0) {
      if ((wchar_t)local_res10 == L'ꪪ') goto LAB_141a698d2;
      iVar4 = 0xfdf;
      pcVar7 = "Buffer.Data[Index] == CanaryValue";
      goto LAB_141a698b4;
    }
    if ((wchar_t)local_res10 == L'A') goto LAB_141a698d2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.Data[Index] == TestStr[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfd7,L"");
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a698d2:
  if ((local_res10._2_2_ != -0x5556) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer.Canary == CanaryValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfe3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// TestInner<16> @ 141a69910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<16>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  uVar8 = 0;
  local_78 = 0xaaaa;
  local_38 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_34 = _UNK_1506e9cf4;
  uStack_30 = _UNK_1506e9cf8;
  uStack_2c = _UNK_1506e9cfc;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_24 = _UNK_1506e9cf4;
  uStack_20 = _UNK_1506e9cf8;
  uStack_1c = _UNK_1506e9cfc;
  uVar9 = 0;
  local_18 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,(wchar_t *)&local_38,0x11);
  uVar7 = uVar8;
  if ((uVar9 != 0xe) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == TestStrLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfcb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a69ad6;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a69ad6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a69ad6;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0x10 < uVar6 + 1) {
      if ((local_18._2_2_ != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<17> @ 141a69b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<17>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t local_38 [4];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  wchar_t local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  wchar_t local_18;
  undefined2 uStack_16;
  wchar_t local_14;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  local_38[0] = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_38[1] = _UNK_1506e9cf2;
  local_38[2] = _UNK_1506e9cf4;
  local_38[3] = _UNK_1506e9cf6;
  uStack_30 = _UNK_1506e9cf8;
  uStack_2e = _UNK_1506e9cfa;
  uStack_2c = _UNK_1506e9cfc;
  uStack_2a = _UNK_1506e9cfe;
  uVar8 = 0;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_26 = _UNK_1506e9cf2;
  uStack_24 = _UNK_1506e9cf4;
  uStack_22 = _UNK_1506e9cf6;
  uStack_20 = _UNK_1506e9cf8;
  uStack_1e = _UNK_1506e9cfa;
  uStack_1c = _UNK_1506e9cfc;
  uStack_1a = _UNK_1506e9cfe;
  local_18 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_16 = _UNK_1506e9cf2;
  local_14 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_78 = 0xaaaa;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,local_38,0x12);
  uVar7 = uVar8;
  if ((uVar9 != 0xe) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == TestStrLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfcb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != *(short *)((longlong)L"ABC_2147483646" + uVar7)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Buffer.Data[Index] == TestStr[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                   ,0xfd7,L""), bVar3)) goto code_r0x000141a69d26;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a69d26:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a69d26;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0x11 < uVar6 + 1) {
      if ((local_14 != L'ꪪ') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<11> @ 141a69da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<11>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t local_38 [4];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  wchar_t local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  wchar_t local_20;
  ulonglong local_18;
  ulonglong uVar7;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_26 = _UNK_1506e9cf2;
  uStack_24 = _UNK_1506e9cf4;
  uStack_22 = _UNK_1506e9cf6;
  uVar8 = 0;
  local_20 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_78 = 0xaaaa;
  local_38[0] = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_38[1] = _UNK_1506e9cf2;
  local_38[2] = _UNK_1506e9cf4;
  local_38[3] = _UNK_1506e9cf6;
  uStack_30 = _UNK_1506e9cf8;
  uStack_2e = _UNK_1506e9cfa;
  uStack_2c = _UNK_1506e9cfc;
  uStack_2a = _UNK_1506e9cfe;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,local_38,0xc);
  uVar7 = uVar8;
  if ((uVar9 != 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != *(short *)((longlong)L"ABC_2147483646" + uVar7)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Buffer.Data[Index] == TestStr[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                   ,0xfd7,L""), bVar3)) goto code_r0x000141a69f66;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a69f66:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a69f66;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0xb < uVar6 + 1) {
      if ((local_20 != L'ꪪ') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<12> @ 141a69fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<12>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  ulonglong local_18;
  ulonglong uVar7;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_24 = _UNK_1506e9cf4;
  uVar8 = 0;
  local_78 = 0xaaaa;
  local_38 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_34 = _UNK_1506e9cf4;
  uStack_30 = _UNK_1506e9cf8;
  uStack_2c = _UNK_1506e9cfc;
  local_68.Str = L"ABC_2147483646";
  local_20 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,(wchar_t *)&local_38,0xd);
  uVar7 = uVar8;
  if ((uVar9 != 0xc) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a6a1a6;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a6a1a6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a6a1a6;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0xc < uVar6 + 1) {
      if ((local_20._2_2_ != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<13> @ 141a6a220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<13>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t local_38 [4];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  wchar_t local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  wchar_t local_20;
  undefined2 uStack_1e;
  wchar_t local_1c;
  ulonglong local_18;
  ulonglong uVar7;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_26 = _UNK_1506e9cf2;
  uStack_24 = _UNK_1506e9cf4;
  uStack_22 = _UNK_1506e9cf6;
  uVar8 = 0;
  local_20 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_1e = _UNK_1506e9cf2;
  local_1c = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_78 = 0xaaaa;
  local_38[0] = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  local_38[1] = _UNK_1506e9cf2;
  local_38[2] = _UNK_1506e9cf4;
  local_38[3] = _UNK_1506e9cf6;
  uStack_30 = _UNK_1506e9cf8;
  uStack_2e = _UNK_1506e9cfa;
  uStack_2c = _UNK_1506e9cfc;
  uStack_2a = _UNK_1506e9cfe;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,local_38,0xe);
  uVar7 = uVar8;
  if ((uVar9 != 0xd) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == RequiredLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != *(short *)((longlong)L"ABC_2147483646" + uVar7)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Buffer.Data[Index] == TestStr[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                   ,0xfd7,L""), bVar3)) goto code_r0x000141a6a3f6;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a6a3f6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a6a3f6;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0xd < uVar6 + 1) {
      if ((local_1c != L'ꪪ') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<14> @ 141a6a470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<14>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong uVar7;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  uVar8 = 0;
  local_78 = 0xaaaa;
  local_38 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_30 = _UNK_1506e9cf8;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_20 = _UNK_1506e9cf8;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,(wchar_t *)&local_38,0xf);
  uVar7 = uVar8;
  if ((uVar9 != 0xe) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == TestStrLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfcb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a6a636;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a6a636:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a6a636;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0xe < uVar6 + 1) {
      if ((uStack_20._6_2_ != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// TestInner<15> @ 141a6a6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNameAutoTestTruncateHelper::TestInner<15>(void)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  FWideStringViewWithWidth local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  short local_18;
  ulonglong local_10;
  ulonglong uVar7;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.Str = L"ABC_2147483646";
  uVar8 = 0;
  local_78 = 0xaaaa;
  local_38 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_30 = _UNK_1506e9cf8;
  local_28 = ___xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
  uStack_20 = _UNK_1506e9cf8;
  local_18 = -0x5556;
  uVar9 = 0;
  pwVar5 = L"ABC_2147483646";
  uVar7 = uVar8;
  do {
    pwVar4 = pwVar5;
    pwVar5 = pwVar4 + 1;
    uVar6 = (uint)uVar7 | uVar9;
    uVar7 = (ulonglong)uVar6;
    wVar1 = *pwVar5;
    uVar9 = (uint)(ushort)wVar1;
  } while (wVar1 != L'\0');
  local_68.bIsWide = (uVar6 & 0xffffff80) != 0;
  local_68.Len = (int)((longlong)(pwVar4 + -0xa8372b53) >> 1);
  uStack_50 = CONCAT44(local_68._12_4_,local_68.Len);
  local_58 = L"ABC_2147483646";
  if (local_68.Len == 0) {
    local_68.Str = (wchar_t *)0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(L"ABC_2147483646",(int *)&uStack_50);
    local_48 = local_58;
    uStack_40 = uStack_50;
    FNameHelper::MakeWithNumber(&local_68,(EFindName)&local_48,1);
  }
  uVar9 = ::FName::ToStringInternal((FName *)&local_68,(wchar_t *)&local_38,0x10);
  uVar7 = uVar8;
  if ((uVar9 != 0xe) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Len == TestStrLen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfcb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) !=
           *(short *)((longlong)L"ABC_2147483646" + uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == TestStr[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfd7,L""), bVar3)) goto code_r0x000141a6a876;
    }
    else if (uVar6 == uVar9) {
      if ((*(short *)((longlong)&local_38 + uVar7) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Data[Index] == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfdb,L""), bVar3)) {
code_r0x000141a6a876:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((*(short *)((longlong)&local_38 + uVar7) != -0x5556) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Buffer.Data[Index] == CanaryValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                                ,0xfdf,L""), bVar3)) goto code_r0x000141a6a876;
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 2;
    if (0xf < uVar6 + 1) {
      if ((local_18 != -0x5556) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.Canary == CanaryValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0xfe3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}


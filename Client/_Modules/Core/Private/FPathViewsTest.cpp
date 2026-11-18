// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// operator() @ 141cf2750

void __thiscall
`FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,int param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  int iVar8;
  bool local_res20;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  iVar8 = 0;
  local_48.Size = iVar8;
  local_48.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    local_48.Size = (int)sVar6;
  }
  local_58.Size = iVar8;
  local_58.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_58.Size = (int)sVar6;
  }
  bVar3 = FPathViews::Equals(&local_58,&local_48);
  iVar5 = iVar8;
  local_48.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    iVar5 = (int)sVar6;
  }
  local_48.Size = iVar5;
  if (param_1 == (wchar_t *)0x0) {
    local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    local_58.DataPtr = param_1;
    local_res20 = FPathViews::Less(&local_58,&local_48);
    local_48.DataPtr = param_1;
  }
  else {
    local_58.DataPtr = param_1;
    sVar6 = wcslen(param_1);
    local_58.Size = (int)sVar6;
    local_res20 = FPathViews::Less(&local_58,&local_48);
    local_48.DataPtr = param_1;
    sVar6 = wcslen(param_1);
    iVar8 = (int)sVar6;
  }
  local_48.Size = iVar8;
  iVar8 = 0;
  local_58.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    iVar8 = (int)sVar6;
  }
  local_58.Size = iVar8;
  bVar4 = FPathViews::Less(&local_58,&local_48);
  if (bVar3 != (param_3 == 0)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  if (local_res20 != SUB41((uint)param_3 >> 0x1f,0)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  if (bVar4 != 0 < param_3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  return;
}

// operator() @ 141cf5bd0

void __thiscall
`FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,bool param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FAutomationTestFramework *pFVar9;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  local_68.DataPtr = (wchar_t *)0x0;
  iVar7 = 0;
  local_68.Size = 0;
  local_48.Size = iVar7;
  local_48.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_2);
    local_48.Size = (int)sVar8;
  }
  local_58.DataPtr = param_1;
  if (param_1 == (wchar_t *)0x0) {
    local_58._8_8_ = (ulonglong)(uint)local_58._12_4_ << 0x20;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_58,&local_48,&local_68);
    iVar6 = 0;
    local_48.DataPtr = param_1;
  }
  else {
    sVar8 = wcslen(param_1);
    local_58.Size = (int)sVar8;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_58,&local_48,&local_68);
    local_48.DataPtr = param_1;
    sVar8 = wcslen(param_1);
    iVar6 = (int)sVar8;
  }
  local_48.Size = iVar6;
  local_58.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_2);
    iVar7 = (int)sVar8;
  }
  local_58.Size = iVar7;
  bVar5 = FPathViews::IsParentPathOf(&local_58,&local_48);
  if (param_3 == bVar4) {
    if (local_68.Size == 0) {
      wVar1 = *param_4;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Strnicmp(local_68.DataPtr,param_4,(longlong)local_68.Size);
      if (iVar7 != 0) goto LAB_141cf5d08;
      wVar1 = param_4[local_68.Size];
    }
    if (wVar1 == L'\0') goto LAB_141cf5d86;
  }
LAB_141cf5d08:
  pFVar9 = FAutomationTestFramework::Get();
  pFVar2 = pFVar9->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_48,
             L"TryMakeChildPathRelativeTo(\"%s\", \"%s\") returned (%s, \"%.*s\"), expected (%s, \"%s\")."
            );
  (*pcVar3)(pFVar2,&local_48,0);
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
LAB_141cf5d86:
  if (bVar5 != param_3) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_48,L"IsParentPathOf(\"%s\", \"%s\") returned %s, expected %s.");
    (*pcVar3)(pFVar2,&local_48,0);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  return;
}

// EqualsAndLessTest @ 141cfc020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141cfd2ba) */
/* WARNING: Removing unreachable block (ram,0x000141cfced1) */
/* WARNING: Removing unreachable block (ram,0x000141cfcafa) */
/* WARNING: Removing unreachable block (ram,0x000141cfc482) */
/* WARNING: Removing unreachable block (ram,0x000141cfc6e7) */
/* WARNING: Removing unreachable block (ram,0x000141cfcce4) */
/* WARNING: Removing unreachable block (ram,0x000141cfd0cb) */
/* WARNING: Removing unreachable block (ram,0x000141cfd4a5) */
/* WARNING: Removing unreachable block (ram,0x000141cfc8d8) */

bool __thiscall FPathViewsTest::EqualsAndLessTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  size_t sVar12;
  FAutomationTestFramework *pFVar13;
  char cVar14;
  int iVar15;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  wchar_t *local_210;
  TStringView<wchar_t> local_208;
  FString local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  wchar_t *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FString local_168;
  FString local_158;
  FString local_148;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FString local_48;
  wchar_t local_38;
  short sStack_36;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_238;
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"B",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"b",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"a",L"B",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"A",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"a/",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"a\\",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"A",L"abby",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"a",L"Abby",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"\\A/B",L"/A\\B/",0)
  ;
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"/",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"//",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"C:/",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"C:\\",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"c:/",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"c:\\",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"/",L"A",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"//",L"//",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"//",L"C:/",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"//",L"A",-1);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"C:/",L"C:/",0);
  `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()(&local_1d8,L"C:/",L"C",1);
  _local_38 = 0x31005f0030;
  iVar15 = 1;
  do {
    cVar14 = (char)iVar15;
    if ((cVar14 != '/') && (cVar14 != '\\')) {
      _local_38 = CONCAT22((short)cVar14,local_38);
      local_1c8 = &local_38;
      sVar12 = wcslen(&local_38);
      iStack_1c0 = (int)sVar12;
      local_1d8._12_4_ = uStack_1bc;
      local_1d8.Size = iStack_1c0;
      local_1b8 = L"0/1";
      uStack_1b0 = 3;
      local_1e8._12_4_ = uStack_1ac;
      local_1e8.Size = 3;
      local_1d8.DataPtr = local_1c8;
      local_1e8.DataPtr = L"0/1";
      bVar9 = FPathViews::Equals(&local_1e8,&local_1d8);
      local_1a8 = &local_38;
      sVar12 = wcslen(&local_38);
      iStack_1a0 = (int)sVar12;
      local_1e8._12_4_ = uStack_19c;
      local_1e8.Size = iStack_1a0;
      local_198 = L"0/1";
      uStack_190 = 3;
      local_1d8._12_4_ = uStack_18c;
      local_1d8.Size = 3;
      local_1e8.DataPtr = local_1a8;
      local_1d8.DataPtr = L"0/1";
      bVar10 = FPathViews::Less(&local_1d8,&local_1e8);
      local_188 = L"0/1";
      local_178 = &local_38;
      iStack_180 = 3;
      sVar12 = wcslen(&local_38);
      local_1e8._12_4_ = uStack_17c;
      local_1e8.Size = iStack_180;
      iStack_170 = (int)sVar12;
      local_1d8._12_4_ = uStack_16c;
      local_1d8.Size = iStack_170;
      local_1d8.DataPtr = local_178;
      local_1e8.DataPtr = local_188;
      bVar11 = FPathViews::Less(&local_1d8,&local_1e8);
      if (bVar9) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_168,L"Equals(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      if (!bVar10) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        local_218 = L"false";
        ::FString::PrintfImpl(&local_158,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_158,0);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
      if (bVar11) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_148,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_148,0);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      local_128 = &local_38;
      local_138 = L"0/1";
      iStack_130 = 3;
      sVar12 = wcslen(&local_38);
      local_1e8._12_4_ = uStack_12c;
      local_1e8.Size = iStack_130;
      iStack_120 = (int)sVar12;
      local_1d8._12_4_ = uStack_11c;
      local_1d8.Size = iStack_120;
      local_1d8.DataPtr = local_128;
      local_1e8.DataPtr = local_138;
      bVar9 = FPathViews::Equals(&local_1d8,&local_1e8);
      local_118 = L"0/1";
      local_108 = &local_38;
      iStack_110 = 3;
      sVar12 = wcslen(&local_38);
      local_1e8._12_4_ = uStack_10c;
      local_1e8.Size = iStack_110;
      iStack_100 = (int)sVar12;
      local_1d8._12_4_ = uStack_fc;
      local_1d8.Size = iStack_100;
      local_1d8.DataPtr = local_108;
      local_1e8.DataPtr = local_118;
      bVar10 = FPathViews::Less(&local_1d8,&local_1e8);
      local_f8 = &local_38;
      sVar12 = wcslen(&local_38);
      iStack_f0 = (int)sVar12;
      local_1e8._12_4_ = uStack_ec;
      local_1e8.Size = iStack_f0;
      local_e8 = L"0/1";
      uStack_e0 = 3;
      local_1d8._12_4_ = uStack_dc;
      local_1d8.Size = 3;
      local_1e8.DataPtr = local_f8;
      local_1d8.DataPtr = L"0/1";
      bVar11 = FPathViews::Less(&local_1d8,&local_1e8);
      if (bVar9) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_d8,L"Equals(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (bVar10) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_c8,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      if (!bVar11) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        local_218 = L"false";
        ::FString::PrintfImpl(&local_b8,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_b8,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      local_a8 = &local_38;
      sVar12 = wcslen(&local_38);
      iStack_a0 = (int)sVar12;
      local_1e8._12_4_ = uStack_9c;
      local_1e8.Size = iStack_a0;
      local_98 = L"0\\1";
      uStack_90 = 3;
      local_1d8._12_4_ = uStack_8c;
      local_1d8.Size = 3;
      local_1d8.DataPtr = L"0\\1";
      local_1e8.DataPtr = local_a8;
      bVar9 = FPathViews::Equals(&local_1d8,&local_1e8);
      local_88 = &local_38;
      sVar12 = wcslen(&local_38);
      iStack_80 = (int)sVar12;
      local_1e8._12_4_ = uStack_7c;
      local_1e8.Size = iStack_80;
      local_78 = L"0\\1";
      uStack_70 = 3;
      local_1d8._12_4_ = uStack_6c;
      local_1d8.Size = 3;
      local_1e8.DataPtr = local_88;
      local_1d8.DataPtr = L"0\\1";
      bVar10 = FPathViews::Less(&local_1d8,&local_1e8);
      local_68 = L"0\\1";
      local_58 = &local_38;
      iStack_60 = 3;
      sVar12 = wcslen(&local_38);
      local_1e8._12_4_ = uStack_5c;
      local_1e8.Size = iStack_60;
      iStack_50 = (int)sVar12;
      local_1d8._12_4_ = uStack_4c;
      local_1d8.Size = iStack_50;
      local_1d8.DataPtr = local_58;
      local_1e8.DataPtr = local_68;
      bVar11 = FPathViews::Less(&local_1d8,&local_1e8);
      if (bVar9) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_48,L"Equals(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (!bVar10) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        local_218 = L"false";
        ::FString::PrintfImpl(&local_1f8,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_1f8,0);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
      if (bVar11) {
        pFVar13 = FAutomationTestFramework::Get();
        local_210 = L"false";
        local_218 = L"true";
        pFVar1 = pFVar13->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
        (*pcVar2)(pFVar1,&local_208,0);
        if (local_208.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_208.DataPtr);
        }
      }
      `FPathViewsTest::EqualsAndLessTest'::__l2::<lambda_1>::operator()
                (&local_1d8,&local_38,L"0\\1",1);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x80);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a5c8;
  local_1f8.Data.ArrayNum = 8;
  local_208.Size = 8;
  local_1e8.DataPtr = L"Foo-Bar/Leaf";
  local_1e8.Size = 0xc;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo/Leaf";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a5c8;
  local_1f8.Data.ArrayNum = 8;
  local_208.Size = 8;
  local_1e8.DataPtr = L"Foo-Bar/Leaf";
  local_1e8.Size = 0xc;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo/Leaf";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a5a8;
  local_1f8.Data.ArrayNum = 0xc;
  uVar3._4_4_ = local_1f8.Data.ArrayMax;
  uVar3._0_4_ = 0xc;
  local_1e8.DataPtr = L"Foo/Leaf";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar/Leaf";
  local_208._8_8_ = uVar3;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a600;
  local_1f8.Data.ArrayNum = 8;
  local_208.Size = 8;
  local_1e8.DataPtr = L"Foo-Bar\\Leaf";
  local_1e8.Size = 0xc;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo\\Leaf";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a600;
  local_1f8.Data.ArrayNum = 8;
  local_208.Size = 8;
  local_1e8.DataPtr = L"Foo-Bar\\Leaf";
  local_1e8.Size = 0xc;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo\\Leaf";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a5e0;
  local_1f8.Data.ArrayNum = 0xc;
  uVar4._4_4_ = local_1f8.Data.ArrayMax;
  uVar4._0_4_ = 0xc;
  local_1e8.DataPtr = L"Foo\\Leaf";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar\\Leaf";
  local_208._8_8_ = uVar4;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a630;
  local_1f8.Data.ArrayNum = 4;
  local_208.Size = 4;
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo/";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a630;
  local_1f8.Data.ArrayNum = 4;
  local_208.Size = 4;
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo/";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a618;
  local_1f8.Data.ArrayNum = 8;
  uVar5._4_4_ = local_1f8.Data.ArrayMax;
  uVar5._0_4_ = 8;
  local_1e8.DataPtr = L"Foo/";
  local_1e8.Size = 4;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar/";
  local_208._8_8_ = uVar5;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1f8.Data.ArrayNum = 3;
  local_208.Size = 3;
  local_1e8.DataPtr = L"Foo-Bar";
  local_1e8.Size = 7;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1f8.Data.ArrayNum = 3;
  local_208.Size = 3;
  local_1e8.DataPtr = L"Foo-Bar";
  local_1e8.Size = 7;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a640;
  local_1f8.Data.ArrayNum = 7;
  uVar6._4_4_ = local_1f8.Data.ArrayMax;
  uVar6._0_4_ = 7;
  local_1e8.DataPtr = L"Foo";
  local_1e8.Size = 3;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar";
  local_208._8_8_ = uVar6;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1f8.Data.ArrayNum = 3;
  local_208.Size = 3;
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a650;
  local_1f8.Data.ArrayNum = 3;
  local_208.Size = 3;
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a618;
  local_1f8.Data.ArrayNum = 8;
  uVar7._4_4_ = local_1f8.Data.ArrayMax;
  uVar7._0_4_ = 8;
  local_1e8.DataPtr = L"Foo";
  local_1e8.Size = 3;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar/";
  local_208._8_8_ = uVar7;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a630;
  local_1f8.Data.ArrayNum = 4;
  local_208.Size = 4;
  local_208.DataPtr = L"Foo/";
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar9 = FPathViews::Equals(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a630;
  local_1f8.Data.ArrayNum = 4;
  local_208.Size = 4;
  local_1e8.DataPtr = L"Foo-Bar/";
  local_1e8.Size = 8;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo/";
  local_208._12_4_ = local_1f8.Data.ArrayMax;
  bVar10 = FPathViews::Less(&local_208,&local_1e8);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15077a618;
  local_1f8.Data.ArrayNum = 8;
  uVar8._4_4_ = local_1f8.Data.ArrayMax;
  uVar8._0_4_ = 8;
  local_1e8.DataPtr = L"Foo/";
  local_1e8.Size = 4;
  local_1e8._12_4_ = local_208._12_4_;
  local_208.DataPtr = L"Foo-Bar/";
  local_208._8_8_ = uVar8;
  bVar11 = FPathViews::Less(&local_208,&local_1e8);
  if (bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Equals(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (!bVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_218 = L"false";
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  if (bVar11) {
    pFVar13 = FAutomationTestFramework::Get();
    local_210 = L"false";
    local_218 = L"true";
    pFVar1 = pFVar13->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_208,L"Less(%s,%s) == %s, expected %s");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_208.DataPtr);
    }
  }
  return true;
}

// GetBaseFilenameTest @ 141cfdf30

bool __thiscall FPathViewsTest::GetBaseFilenameTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_48.Size = 0;
  local_48.DataPtr = L"";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  local_48.Size = 4;
  local_48.DataPtr = L".txt";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  local_48.Size = 7;
  local_48.DataPtr = L".tar.gz";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfe238:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar",uVar5);
    if ((iVar3 != 0) || (L".tar"[uVar5] != L'\0')) goto LAB_141cfe238;
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfe2d3:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar",uVar5);
    if ((iVar3 != 0) || (L".tar"[uVar5] != L'\0')) goto LAB_141cfe2d3;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz/";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfe41b:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz/",uVar5);
    if ((iVar3 != 0) || (L".tar.gz/"[uVar5] != L'\0')) goto LAB_141cfe41b;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz\\";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfe563:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz\\",uVar5);
    if ((iVar3 != 0) || (L".tar.gz\\"[uVar5] != L'\0')) goto LAB_141cfe563;
  }
  local_48.Size = 4;
  local_48.DataPtr = L"File";
  FPathViews::GetBaseFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfe610:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File",uVar5);
    if ((iVar3 != 0) || (L"File"[uVar5] != L'\0')) goto LAB_141cfe610;
  }
  FPathViews::GetBaseFilenameWithPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File",(longlong)local_38.Size);
    if ((iVar3 == 0) && (L"File"[local_38.Size] == L'\0')) goto LAB_141cfe705;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar2)(pFVar1,&local_28,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_141cfe705:
  local_38.Size = 8;
  local_38.DataPtr = L"File.txt";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"File");
  local_38.Size = 0xb;
  local_38.DataPtr = L"File.tar.gz";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File.tar");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"File.tar");
  local_38.Size = 0xc;
  local_38.DataPtr = L"File.tar.gz/";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"File.tar.gz/");
  local_38.Size = 0xc;
  local_38.DataPtr = L"File.tar.gz\\";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"File.tar.gz\\");
  local_38.Size = 10;
  local_38.DataPtr = L"C:/Folder/";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:/Folder/");
  local_38.Size = 0xe;
  local_38.DataPtr = L"C:/Folder/File";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:/Folder/File");
  local_38.Size = 0x15;
  local_38.DataPtr = L"C:/Folder/File.tar.gz";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File.tar");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:/Folder/File.tar");
  local_38.Size = 0x19;
  local_38.DataPtr = L"C:/Folder/First.Last/File";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:/Folder/First.Last/File")
  ;
  local_38.Size = 0x1d;
  local_38.DataPtr = L"C:/Folder/First.Last/File.txt";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:/Folder/First.Last/File")
  ;
  local_38.Size = 0x20;
  local_38.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File.tar");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,
                    L"C:/Folder/First.Last/File.tar");
  local_38.Size = 10;
  local_38.DataPtr = L"C:\\Folder\\";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:\\Folder\\");
  local_38.Size = 0xe;
  local_38.DataPtr = L"C:\\Folder\\File";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:\\Folder\\File");
  local_38.Size = 0x15;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,L"C:\\Folder\\First.Last\\");
  local_38.Size = 0x19;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,
                    L"C:\\Folder\\First.Last\\File");
  local_38.Size = 0x1d;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File.txt";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,
                    L"C:\\Folder\\First.Last\\File");
  local_38.Size = 0x20;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  TestViewTransform(this,FPathViews::GetBaseFilename,&local_38,L"File.tar");
  TestViewTransform(this,FPathViews::GetBaseFilenameWithPath,&local_38,
                    L"C:\\Folder\\First.Last\\File.tar");
  return true;
}

// GetCleanFilenameTest @ 141cfeb90

bool __thiscall FPathViewsTest::GetCleanFilenameTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_48.Size = 0;
  local_48.DataPtr = L"";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 4;
  local_48.DataPtr = L".txt";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfecb3:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".txt",uVar5);
    if ((iVar3 != 0) || (L".txt"[uVar5] != L'\0')) goto LAB_141cfecb3;
  }
  local_48.Size = 7;
  local_48.DataPtr = L".tar.gz";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfed60:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141cfed60;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz/";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz\\";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 4;
  local_48.DataPtr = L"File";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cfef67:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File",uVar5);
    if ((iVar3 != 0) || (L"File"[uVar5] != L'\0')) goto LAB_141cfef67;
  }
  local_48.Size = 0xb;
  local_48.DataPtr = L"File.tar.gz";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141cff014:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141cff014;
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz/";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz\\";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 10;
  local_48.DataPtr = L"C:/Folder/";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 0xe;
  local_48.DataPtr = L"C:/Folder/File";
  FPathViews::GetCleanFilename(&local_38,&local_48);
  if (local_38.Size != 0) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File",(longlong)local_38.Size);
    if ((iVar3 == 0) && (L"File"[local_38.Size] == L'\0')) goto LAB_141cff322;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar2)(pFVar1,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
LAB_141cff322:
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:/Folder/File.tar.gz";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File.tar.gz");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:/Folder/First.Last/File";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File.tar.gz");
  local_28.Size = 10;
  local_28.DataPtr = L"C:\\Folder\\";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"");
  local_28.Size = 0xe;
  local_28.DataPtr = L"C:\\Folder\\File";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File");
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  TestViewTransform(this,FPathViews::GetCleanFilename,&local_28,L"File.tar.gz");
  return true;
}

// GetExtensionTest @ 141cff490

bool __thiscall FPathViewsTest::GetExtensionTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  local_58.Size = 0;
  local_58.DataPtr = L"";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetExtension(&local_48,&local_58,true);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  local_58.Size = 4;
  local_58.DataPtr = L".txt";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size == 0) {
LAB_141cff65d:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"txt",uVar5);
    if ((iVar3 != 0) || (*(short *)(&u_txt + uVar5 * 2) != 0)) goto LAB_141cff65d;
  }
  FPathViews::GetExtension(&local_48,&local_58,true);
  if (local_48.Size == 0) {
LAB_141cff6fb:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L".txt",uVar5);
    if ((iVar3 != 0) || (L".txt"[uVar5] != L'\0')) goto LAB_141cff6fb;
  }
  local_58.Size = 7;
  local_58.DataPtr = L".tar.gz";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size == 0) {
LAB_141cff7b3:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"gz",uVar5);
    if ((iVar3 != 0) || (L"gz"[uVar5] != L'\0')) goto LAB_141cff7b3;
  }
  FPathViews::GetExtension(&local_48,&local_58,true);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L".gz",uVar5);
    if ((iVar3 == 0) && (L".gz"[uVar5] == L'\0')) goto LAB_141cff8b2;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar2)(pFVar1,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_141cff8b2:
  local_58.Size = 8;
  local_58.DataPtr = L".tar.gz/";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetExtension(&local_48,&local_58,true);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  local_58.Size = 8;
  local_58.DataPtr = L".tar.gz\\";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  FPathViews::GetExtension(&local_48,&local_58,true);
  if (local_48.Size != 0) {
    uVar5 = (ulong64)local_48.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  local_58.Size = 4;
  local_58.DataPtr = L"File";
  FPathViews::GetExtension(&local_48,&local_58,false);
  if (local_48.Size != 0) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,L"",(longlong)local_48.Size);
    if ((iVar3 != 0) || (L""[local_48.Size] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_38,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_58,L"");
  local_48.Size = 8;
  local_48.DataPtr = L"File.txt";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"txt");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".txt");
  local_48.Size = 0xb;
  local_48.DataPtr = L"File.tar.gz";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"gz");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".gz");
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz/";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz\\";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0xe;
  local_48.DataPtr = L"C:/Folder/File";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0xe;
  local_48.DataPtr = L"C:\\Folder\\File";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0x12;
  local_48.DataPtr = L"C:/Folder/File.txt";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"txt");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".txt");
  local_48.Size = 0x12;
  local_48.DataPtr = L"C:\\Folder\\File.txt";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"txt");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".txt");
  local_48.Size = 0x15;
  local_48.DataPtr = L"C:/Folder/File.tar.gz";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"gz");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".gz");
  local_48.Size = 0x15;
  local_48.DataPtr = L"C:\\Folder\\File.tar.gz";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"gz");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".gz");
  local_48.Size = 0x19;
  local_48.DataPtr = L"C:/Folder/First.Last/File";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0x19;
  local_48.DataPtr = L"C:\\Folder\\First.Last\\File";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L"");
  local_48.Size = 0x1d;
  local_48.DataPtr = L"C:/Folder/First.Last/File.txt";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"txt");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".txt");
  local_48.Size = 0x1d;
  local_48.DataPtr = L"C:\\Folder\\First.Last\\File.txt";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"txt");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".txt");
  local_48.Size = 0x20;
  local_48.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"gz");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".gz");
  local_48.Size = 0x20;
  local_48.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_1>::<lambda_invoker_cdecl>,&local_48,L"gz");
  TestViewTransform(this,``FPathViewsTest::GetExtensionTest'::__l2::<lambda_1>::operator()'::__l2::
                         <lambda_2>::<lambda_invoker_cdecl>,&local_48,L".gz");
  return true;
}

// GetPathLeafTest @ 141d00a40

bool __thiscall FPathViewsTest::GetPathLeafTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_48.Size = 0;
  local_48.DataPtr = L"";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 4;
  local_48.DataPtr = L".txt";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00b63:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".txt",uVar5);
    if ((iVar3 != 0) || (L".txt"[uVar5] != L'\0')) goto LAB_141d00b63;
  }
  local_48.Size = 7;
  local_48.DataPtr = L".tar.gz";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00c10:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141d00c10;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz/";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00cbd:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141d00cbd;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz\\";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00d6a:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141d00d6a;
  }
  local_48.Size = 4;
  local_48.DataPtr = L"File";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00e17:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File",uVar5);
    if ((iVar3 != 0) || (L"File"[uVar5] != L'\0')) goto LAB_141d00e17;
  }
  local_48.Size = 8;
  local_48.DataPtr = L"File.txt";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00ec4:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.txt",uVar5);
    if ((iVar3 != 0) || (L"File.txt"[uVar5] != L'\0')) goto LAB_141d00ec4;
  }
  local_48.Size = 0xb;
  local_48.DataPtr = L"File.tar.gz";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d00f71:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141d00f71;
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz/";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d0101e:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141d0101e;
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz\\";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d010cb:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141d010cb;
  }
  local_48.Size = 10;
  local_48.DataPtr = L"C:/Folder/";
  FPathViews::GetPathLeaf(&local_38,&local_48);
  if (local_38.Size != 0) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"Folder",(longlong)local_38.Size);
    if ((iVar3 == 0) && (L"Folder"[local_38.Size] == L'\0')) goto LAB_141d011d9;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar2)(pFVar1,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
LAB_141d011d9:
  local_28.Size = 0xe;
  local_28.DataPtr = L"C:/Folder/File";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File");
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:/Folder/File.tar.gz";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File.tar.gz");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:/Folder/First.Last/File";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File.tar.gz");
  local_28.Size = 10;
  local_28.DataPtr = L"C:\\Folder\\";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"Folder");
  local_28.Size = 0xe;
  local_28.DataPtr = L"C:\\Folder\\File";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File");
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"First.Last");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  TestViewTransform(this,FPathViews::GetPathLeaf,&local_28,L"File.tar.gz");
  return true;
}

// GetPathTest @ 141d01370

bool __thiscall FPathViewsTest::GetPathTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_48.Size = 0;
  local_48.DataPtr = L"";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 4;
  local_48.DataPtr = L".txt";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 7;
  local_48.DataPtr = L".tar.gz";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz/";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d015ea:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141d015ea;
  }
  local_48.Size = 8;
  local_48.DataPtr = L".tar.gz\\";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d01697:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L".tar.gz",uVar5);
    if ((iVar3 != 0) || (L".tar.gz"[uVar5] != L'\0')) goto LAB_141d01697;
  }
  local_48.Size = 4;
  local_48.DataPtr = L"File";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 8;
  local_48.DataPtr = L"File.txt";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 0xb;
  local_48.DataPtr = L"File.tar.gz";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"",uVar5);
    if ((iVar3 != 0) || (L""[uVar5] != L'\0')) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
      (*pcVar2)(pFVar1,&local_28,0);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz/";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d0194b:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141d0194b;
  }
  local_48.Size = 0xc;
  local_48.DataPtr = L"File.tar.gz\\";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size == 0) {
LAB_141d019f8:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  else {
    uVar5 = (ulong64)local_38.Size;
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"File.tar.gz",uVar5);
    if ((iVar3 != 0) || (L"File.tar.gz"[uVar5] != L'\0')) goto LAB_141d019f8;
  }
  local_48.Size = 10;
  local_48.DataPtr = L"C:/Folder/";
  FPathViews::GetPath(&local_38,&local_48);
  if (local_38.Size != 0) {
    iVar3 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,L"C:/Folder",(longlong)local_38.Size)
    ;
    if ((iVar3 == 0) && (L"C:/Folder"[local_38.Size] == L'\0')) goto LAB_141d01b0e;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_28,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar2)(pFVar1,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
LAB_141d01b0e:
  local_28.Size = 0xe;
  local_28.DataPtr = L"C:/Folder/File";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:/Folder");
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:/Folder/File.tar.gz";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:/Folder");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:/Folder/First.Last/File";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:/Folder/First.Last");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:/Folder/First.Last");
  local_28.Size = 10;
  local_28.DataPtr = L"C:\\Folder\\";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:\\Folder");
  local_28.Size = 0xe;
  local_28.DataPtr = L"C:\\Folder\\File";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:\\Folder");
  local_28.Size = 0x15;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:\\Folder\\First.Last");
  local_28.Size = 0x19;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:\\Folder\\First.Last");
  local_28.Size = 0x20;
  local_28.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  TestViewTransform(this,FPathViews::GetPath,&local_28,L"C:\\Folder\\First.Last");
  return true;
}

// IsPathLeafTest @ 141d01f30

/* WARNING: Removing unreachable block (ram,0x000141d0264c) */
/* WARNING: Removing unreachable block (ram,0x000141d02558) */
/* WARNING: Removing unreachable block (ram,0x000141d02464) */
/* WARNING: Removing unreachable block (ram,0x000141d02370) */
/* WARNING: Removing unreachable block (ram,0x000141d0227c) */
/* WARNING: Removing unreachable block (ram,0x000141d02188) */
/* WARNING: Removing unreachable block (ram,0x000141d02094) */
/* WARNING: Removing unreachable block (ram,0x000141d01fa0) */
/* WARNING: Removing unreachable block (ram,0x000141d0201a) */
/* WARNING: Removing unreachable block (ram,0x000141d0210e) */
/* WARNING: Removing unreachable block (ram,0x000141d02202) */
/* WARNING: Removing unreachable block (ram,0x000141d022f6) */
/* WARNING: Removing unreachable block (ram,0x000141d023ea) */
/* WARNING: Removing unreachable block (ram,0x000141d024de) */
/* WARNING: Removing unreachable block (ram,0x000141d025d2) */
/* WARNING: Removing unreachable block (ram,0x000141d026c6) */

bool __thiscall FPathViewsTest::IsPathLeafTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  TStringView<wchar_t> local_28;
  
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_28.DataPtr = L"";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 4;
  local_28.DataPtr = L".txt";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 7;
  local_28.DataPtr = L".tar.gz";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 8;
  local_28.DataPtr = L".tar.gz/";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 8;
  local_28.DataPtr = L".tar.gz\\";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 4;
  local_28.DataPtr = L"File";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 8;
  local_28.DataPtr = L"File.txt";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 0xb;
  local_28.DataPtr = L"File.tar.gz";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 0xc;
  local_28.DataPtr = L"File.tar.gz/";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 0xc;
  local_28.DataPtr = L"File.tar.gz\\";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 2;
  local_28.DataPtr = L"//";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 2;
  local_28.DataPtr = L"\\\\";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 1;
  local_28.DataPtr = L"/";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 1;
  local_28.DataPtr = L"\\";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"C:/";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"C:\\";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 8;
  local_28.DataPtr = L"//Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 8;
  local_28.DataPtr = L"\\\\Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 7;
  local_28.DataPtr = L"/Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 7;
  local_28.DataPtr = L"\\Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 9;
  local_28.DataPtr = L"C:/Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 9;
  local_28.DataPtr = L"C:\\Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 9;
  local_28.DataPtr = L"C:/Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 9;
  local_28.DataPtr = L"C:\\Folder";
  bVar3 = FPathViews::IsPathLeaf(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"GetPathLeaf(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  return true;
}

// IsRelativePathTest @ 141d02aa0

/* WARNING: Removing unreachable block (ram,0x000141d02c04) */
/* WARNING: Removing unreachable block (ram,0x000141d02b10) */
/* WARNING: Removing unreachable block (ram,0x000141d02b8a) */
/* WARNING: Removing unreachable block (ram,0x000141d02c7e) */

bool __thiscall FPathViewsTest::IsRelativePathTest(FPathViewsTest *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  TStringView<wchar_t> local_28;
  
  local_28.Size = 1;
  local_28.DataPtr = L"A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 2;
  local_28.DataPtr = L"A/";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"A/B";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"A\\B";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 2;
  local_28.DataPtr = L"/A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 2;
  local_28.DataPtr = L"\\A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 4;
  local_28.DataPtr = L"/A/B";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"//A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 3;
  local_28.DataPtr = L"\\\\A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 5;
  local_28.DataPtr = L"//A/B";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 4;
  local_28.DataPtr = L"C:/A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 4;
  local_28.DataPtr = L"C:\\A";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  local_28.Size = 6;
  local_28.DataPtr = L"C:/A/B";
  bVar3 = FPathViews::IsRelativePath(&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_28,L"IsRelativePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  return true;
}

// TestViewTransform @ 141d553a0

void __thiscall
FPathViewsTest::TestViewTransform
          (FPathViewsTest *this,_func___cdecl_TStringView<wchar_t>_TStringView<wchar_t>_ptr *param_1
          ,TStringView<wchar_t> *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  (*param_1)(&local_28,param_2);
  if (local_28.Size == 0) {
    wVar1 = *param_3;
  }
  else {
    iVar4 = FGenericPlatformStricmp::Strnicmp(local_28.DataPtr,param_3,(longlong)local_28.Size);
    if (iVar4 != 0) goto LAB_141d553fc;
    wVar1 = param_3[local_28.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d553fc:
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Failed on path \'%.*s\' (got \'%.*s\', expected \'%s\').");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TryMakeChildPathRelativeToTest @ 141d558e0

bool __thiscall FPathViewsTest::TryMakeChildPathRelativeToTest(FPathViewsTest *this)

{
  undefined1 local_res8 [8];
  
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A/B",L"A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A\\B",L"A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A/B",L"A/",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A\\B",L"A/",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A/B",L"A\\",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A\\B",L"A\\",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A",L"A",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A/",L"A",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A\\",L"A",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A",L"A/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A",L"A\\",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"../A",L"..",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/A/B",L"/A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"../A/B",L"../A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"../",L"..",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/",L"C:/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A",L"C:/",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A",L"//A",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/",L"//A",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A",L"//A/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/",L"//A/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/B",L"//A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/B/",L"//A",true,L"B/");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/B",L"//A/",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/B/",L"//A/",true,L"B/");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/BFoo",L"//A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/C",L"//A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/C",L"C:/A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//A/C",L"/A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A/BFoo",L"C:/A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A/C",L"C:/A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A/C",L"//A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A/C",L"/A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/A/BFoo",L"/A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/A/C",L"/A/B",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/A/C",L"C:/A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/A/C",L"//A",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/",L"/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/",L"//",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/",L"C",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"/",L"C:/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//",L"/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//",L"//",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//",L"C",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"//",L"C:/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C",L"/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C",L"//",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C",L"C",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C",L"C:/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/",L"/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/",L"//",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/",L"C",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/",L"C:/",true,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A/B/C",L"C:/A",true,L"B/C");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C:/A",L"C:/A/B/C",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"///A",L"///",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"////////////A",L"///",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"///A",L"//",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"////////////A",L"/",false,L"");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C://A",L"C://",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C://////////A",L"C://",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C://A",L"C:/",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"C://////////A",L"C:/",true,L"A");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A//B",L"A//",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A///////////B",L"A//",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A//B",L"A/",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A///////////B",L"A/",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A//B",L"A",true,L"B");
  `FPathViewsTest::TryMakeChildPathRelativeToTest'::__l2::<lambda_1>::operator()
            (local_res8,L"A///////////B",L"A",true,L"B");
  return true;
}


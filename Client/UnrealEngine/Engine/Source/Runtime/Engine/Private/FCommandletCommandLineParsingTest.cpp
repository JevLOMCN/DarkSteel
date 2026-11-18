// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14773ae90

EAutomationTestFlags __thiscall
FCommandletCommandLineParsingTest::GetTestFlags(FCommandletCommandLineParsingTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14773aea0

bool __thiscall
FCommandletCommandLineParsingTest::IsStressTest(FCommandletCommandLineParsingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14773aeb0

uint __thiscall
FCommandletCommandLineParsingTest::GetRequiredDeviceNum(FCommandletCommandLineParsingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14773aec0

FString * __thiscall
FCommandletCommandLineParsingTest::GetTestSourceFileName
          (FCommandletCommandLineParsingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Commandlets\\Commandlet.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14773aef0

int __thiscall
FCommandletCommandLineParsingTest::GetTestSourceFileLine(FCommandletCommandLineParsingTest *this)

{
  return 0x5a;
}

// GetTests @ 14773af00

/* WARNING: Removing unreachable block (ram,0x00014773afed) */
/* WARNING: Removing unreachable block (ram,0x00014773b0b8) */

void __thiscall
FCommandletCommandLineParsingTest::GetTests
          (FCommandletCommandLineParsingTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Commandlet.ParseCommandLine");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14773b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCommandletCommandLineParsingTest::RunTest(FCommandletCommandLineParsingTest *this,FString *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 auStackY_108 [32];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 local_40 [8];
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_4c = 0x80;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  UCommandlet::ParseCommandLine
            (L"token1 token2 -switch1 -switch2 -NakedValue=Value -QuotedValue=\"Value\" -EmptyValue= -ValueWithAssignment=Foo=Bar"
             ,&local_88,&local_98,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_78);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ExpectedTokenCount",local_88.ArrayNum,2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ExpectedSwitchCount",local_98.ArrayNum,2);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ExpectedParamCount",local_78._8_4_ - local_44,4);
  pFVar12 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
  for (FVar9.Data = local_88.AllocatorInstance.Data; FVar9.Data != pFVar12;
      FVar9.Data = FVar9.Data + 0x10) {
    if (*(int *)(FVar9.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar9.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"token1");
    if (iVar3 == 0) {
      bVar13 = true;
      goto LAB_14773b1fa;
    }
  }
  bVar13 = false;
LAB_14773b1fa:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"tonen1 found",bVar13);
  pFVar12 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
  for (FVar9.Data = local_88.AllocatorInstance.Data; FVar9.Data != pFVar12;
      FVar9.Data = FVar9.Data + 0x10) {
    if (*(int *)(FVar9.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar9.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"token2");
    if (iVar3 == 0) {
      bVar13 = true;
      goto LAB_14773b24f;
    }
  }
  bVar13 = false;
LAB_14773b24f:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"token2 found",bVar13);
  pFVar12 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10;
  for (FVar9.Data = local_98.AllocatorInstance.Data; FVar9.Data != pFVar12;
      FVar9.Data = FVar9.Data + 0x10) {
    if (*(int *)(FVar9.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar9.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"switch1");
    if (iVar3 == 0) {
      bVar13 = true;
      goto LAB_14773b2a1;
    }
  }
  bVar13 = false;
LAB_14773b2a1:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"switch1 set",bVar13);
  pFVar12 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10;
  for (FVar9.Data = local_98.AllocatorInstance.Data; FVar9.Data != pFVar12;
      FVar9.Data = FVar9.Data + 0x10) {
    if (*(int *)(FVar9.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar9.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"switch2");
    if (iVar3 == 0) {
      bVar13 = true;
      goto LAB_14773b2f7;
    }
  }
  bVar13 = false;
LAB_14773b2f7:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"switch1 set",bVar13);
  ::FString::FString(&local_c8,L"NakedValue");
  iVar3 = local_c8.Data.ArrayNum + -1;
  FVar9.Data = local_c8.Data.AllocatorInstance.Data;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar3 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar5 = local_c8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar3 != -1) {
      lVar10 = (longlong)iVar3 * 0x28;
      iVar6 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar6 == iVar5) {
        if (iVar6 < 2) goto LAB_14773b3cc;
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar12 + lVar10),
                           (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar13 = iVar5 == 0;
        pFVar12 = (FScriptContainerElement *)local_78._0_8_;
        iVar5 = local_c8.Data.ArrayNum;
      }
      else {
        bVar13 = iVar6 + iVar5 == 1;
      }
      if (bVar13) goto LAB_14773b3cc;
      iVar3 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  iVar3 = -1;
LAB_14773b3cc:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"NakedValue parsed",iVar3 != -1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"QuotedValue");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar9.Data = local_c8.Data.AllocatorInstance.Data;
  }
  iVar5 = 0;
  iVar3 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = iVar5;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar3 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_c8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar3 != -1) {
      lVar10 = (longlong)iVar3 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_14773b4a4;
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar12 + lVar10),
                           (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar13 = iVar6 == 0;
        pFVar12 = (FScriptContainerElement *)local_78._0_8_;
        iVar6 = local_c8.Data.ArrayNum;
      }
      else {
        bVar13 = iVar1 + iVar6 == 1;
      }
      if (bVar13) goto LAB_14773b4a4;
      iVar3 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  iVar3 = -1;
LAB_14773b4a4:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"QuotedValue parsed",iVar3 != -1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"EmptyValue");
  iVar3 = local_c8.Data.ArrayNum + -1;
  FVar9.Data = local_c8.Data.AllocatorInstance.Data;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = iVar5;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar3 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_c8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar3 != -1) {
      lVar10 = (longlong)iVar3 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_14773b584;
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar12 + lVar10),
                           (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar13 = iVar6 == 0;
        pFVar12 = (FScriptContainerElement *)local_78._0_8_;
        iVar6 = local_c8.Data.ArrayNum;
      }
      else {
        bVar13 = iVar1 + iVar6 == 1;
      }
      if (bVar13) goto LAB_14773b584;
      iVar3 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  iVar3 = -1;
LAB_14773b584:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"EmptyValue parsed",iVar3 != -1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"ValueWithAssignment");
  iVar3 = local_c8.Data.ArrayNum + -1;
  FVar9.Data = local_c8.Data.AllocatorInstance.Data;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = iVar5;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar3 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_c8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar3 != -1) {
      lVar10 = (longlong)iVar3 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_14773b664;
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar12 + lVar10),
                           (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar13 = iVar6 == 0;
        pFVar12 = (FScriptContainerElement *)local_78._0_8_;
        iVar6 = local_c8.Data.ArrayNum;
      }
      else {
        bVar13 = iVar1 + iVar6 == 1;
      }
      if (bVar13) goto LAB_14773b664;
      iVar3 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  iVar3 = -1;
LAB_14773b664:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"ValueWithAssignment parsed",iVar3 != -1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"Value");
  ::FString::FString(&local_b8,L"NakedValue");
  iVar3 = local_b8.Data.ArrayNum + -1;
  FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    iVar3 = iVar5;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar9.Data);
  iVar3 = 0;
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar5 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_b8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar5 != -1) {
      lVar10 = (longlong)iVar5 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (1 < iVar1) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar12 + lVar10),
                             (wchar_t *)local_b8.Data.AllocatorInstance.Data);
          bVar13 = iVar6 == 0;
          pFVar12 = (FScriptContainerElement *)local_78._0_8_;
          iVar6 = local_b8.Data.ArrayNum;
          goto LAB_14773b743;
        }
LAB_14773b85b:
        if ((iVar5 != -1) && (pFVar12 = pFVar12 + lVar10, pFVar12 != (FScriptContainerElement *)0x0)
           ) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = *(int *)(pFVar12 + 0x18);
          lVar10 = (longlong)local_c8.Data.ArrayNum;
          pvVar2 = *(void **)(pFVar12 + 0x10);
          if (local_c8.Data.ArrayNum == 0) goto LAB_14773b764;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                     local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,pvVar2,lVar10 * 2);
          goto LAB_14773b768;
        }
        break;
      }
      bVar13 = iVar1 + iVar6 == 1;
LAB_14773b743:
      if (bVar13) goto LAB_14773b85b;
      iVar5 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  local_c8.Data.ArrayNum = 0;
LAB_14773b764:
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayMax = 0;
LAB_14773b768:
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"NakedValue Correct",(wchar_t *)FVar11.Data,
             (wchar_t *)FVar9.Data);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"Value");
  ::FString::FString(&local_b8,L"QuotedValue");
  iVar5 = local_b8.Data.ArrayNum + -1;
  FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    iVar5 = iVar3;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar5 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_b8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar5 != -1) {
      lVar10 = (longlong)iVar5 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (1 < iVar1) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar12 + lVar10),
                             (wchar_t *)local_b8.Data.AllocatorInstance.Data);
          bVar13 = iVar6 == 0;
          pFVar12 = (FScriptContainerElement *)local_78._0_8_;
          iVar6 = local_b8.Data.ArrayNum;
          goto LAB_14773b8f0;
        }
LAB_14773ba0b:
        if ((iVar5 != -1) && (pFVar12 = pFVar12 + lVar10, pFVar12 != (FScriptContainerElement *)0x0)
           ) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = *(int *)(pFVar12 + 0x18);
          lVar10 = (longlong)local_c8.Data.ArrayNum;
          pvVar2 = *(void **)(pFVar12 + 0x10);
          if (local_c8.Data.ArrayNum == 0) goto LAB_14773b915;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                     local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,pvVar2,lVar10 * 2);
          goto LAB_14773b919;
        }
        break;
      }
      bVar13 = iVar1 + iVar6 == 1;
LAB_14773b8f0:
      if (bVar13) goto LAB_14773ba0b;
      iVar5 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  local_c8.Data.ArrayNum = 0;
LAB_14773b915:
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayMax = 0;
LAB_14773b919:
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"QuotedValue Correct",(wchar_t *)FVar11.Data,
             (wchar_t *)FVar9.Data);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"");
  ::FString::FString(&local_b8,L"EmptyValue");
  iVar5 = local_b8.Data.ArrayNum + -1;
  FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    iVar5 = iVar3;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar9.Data);
  if (local_78._8_4_ != local_44) {
    FVar8 = (ForElementType<FSetElementId>)local_40;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_38;
    }
    iVar5 = *(int *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & uVar4) * 4);
    iVar6 = local_b8.Data.ArrayNum;
    pFVar12 = (FScriptContainerElement *)local_78._0_8_;
    while (iVar5 != -1) {
      lVar10 = (longlong)iVar5 * 0x28;
      iVar1 = *(int *)(pFVar12 + lVar10 + 8);
      if (iVar1 == iVar6) {
        if (1 < iVar1) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar12 + lVar10),
                             (wchar_t *)local_b8.Data.AllocatorInstance.Data);
          bVar13 = iVar6 == 0;
          pFVar12 = (FScriptContainerElement *)local_78._0_8_;
          iVar6 = local_b8.Data.ArrayNum;
          goto LAB_14773baa0;
        }
LAB_14773bb99:
        if ((iVar5 != -1) && (pFVar12 = pFVar12 + lVar10, pFVar12 != (FScriptContainerElement *)0x0)
           ) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = *(int *)(pFVar12 + 0x18);
          lVar10 = (longlong)local_c8.Data.ArrayNum;
          pvVar2 = *(void **)(pFVar12 + 0x10);
          if (local_c8.Data.ArrayNum == 0) goto LAB_14773bac5;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                     local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,pvVar2,lVar10 * 2);
          goto LAB_14773bac9;
        }
        break;
      }
      bVar13 = iVar1 + iVar6 == 1;
LAB_14773baa0:
      if (bVar13) goto LAB_14773bb99;
      iVar5 = *(int *)(pFVar12 + lVar10 + 0x20);
    }
  }
  local_c8.Data.ArrayNum = 0;
LAB_14773bac5:
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayMax = 0;
LAB_14773bac9:
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"EmptyValue Correct",(wchar_t *)FVar11.Data,
             (wchar_t *)FVar9.Data);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"Foo=Bar");
  ::FString::FString(&local_c8,L"ValueWithAssignment");
  iVar5 = local_c8.Data.ArrayNum + -1;
  FVar9.Data = local_c8.Data.AllocatorInstance.Data;
  if (local_c8.Data.ArrayNum == 0) {
    iVar5 = iVar3;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar9.Data);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_78,uVar4,&local_c8);
  if ((iVar3 == -1) ||
     ((FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar3 * 0x28) ==
      (FScriptContainerElement *)0x0)) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
  }
  else {
    ::FString::FString(&local_b8,
                       (FString *)
                       ((FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar3 * 0x28) + 0x10)
                      );
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"ValueWithAssignment Correct",(wchar_t *)FVar11.Data,
             (wchar_t *)FVar9.Data);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  bVar13 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar3 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return !bVar13;
}

// GetBeautifiedTestName @ 14773bd80

FString * __thiscall
FCommandletCommandLineParsingTest::GetBeautifiedTestName
          (FCommandletCommandLineParsingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Commandlet.ParseCommandLine");
  return __return_storage_ptr__;
}


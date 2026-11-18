// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a6a70

EAutomationTestFlags __thiscall
FParseExpressionSimpleTest::GetTestFlags(FParseExpressionSimpleTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a6a80

bool __thiscall FParseExpressionSimpleTest::IsStressTest(FParseExpressionSimpleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a6a90

uint __thiscall FParseExpressionSimpleTest::GetRequiredDeviceNum(FParseExpressionSimpleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a6aa0

FString * __thiscall
FParseExpressionSimpleTest::GetTestSourceFileName
          (FParseExpressionSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Parse.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a6ad0

int __thiscall FParseExpressionSimpleTest::GetTestSourceFileLine(FParseExpressionSimpleTest *this)

{
  return 0x602;
}

// GetTests @ 1418a6ae0

/* WARNING: Removing unreachable block (ram,0x0001418a6bcd) */
/* WARNING: Removing unreachable block (ram,0x0001418a6c98) */

void __thiscall
FParseExpressionSimpleTest::GetTests
          (FParseExpressionSimpleTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.ParseExpressionSimple");
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

// RunTest @ 1418a6cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FParseExpressionSimpleTest::RunTest(FParseExpressionSimpleTest *this,FString *param_1)

{
  ulonglong *puVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  wchar_t **ppwVar15;
  undefined1 auStackY_2f8 [32];
  FString local_2b8;
  uint local_2a8;
  wchar_t *local_2a0;
  FString local_298;
  FString local_288;
  undefined *local_278;
  wchar_t *pwStack_270;
  wchar_t *local_268;
  wchar_t *pwStack_260;
  wchar_t *local_258;
  wchar_t *pwStack_250;
  wchar_t *local_248;
  wchar_t *pwStack_240;
  undefined *local_238;
  wchar_t *pwStack_230;
  undefined *local_228;
  wchar_t *pwStack_220;
  wchar_t *local_218;
  wchar_t *pwStack_210;
  wchar_t *local_208 [4];
  wchar_t *local_1e8;
  wchar_t *local_1e0;
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  wchar_t *local_1a8;
  undefined1 local_178;
  undefined2 local_176;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  undefined1 local_160;
  undefined2 local_15e;
  ForAnyElementType local_158;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148;
  undefined2 local_146;
  ForAnyElementType local_140;
  undefined4 local_138;
  int local_134;
  undefined1 local_130;
  undefined2 local_12e;
  ForAnyElementType local_128;
  undefined4 local_120;
  int local_11c;
  undefined1 local_118;
  undefined2 local_116;
  ForAnyElementType local_110;
  undefined4 local_108;
  int local_104;
  undefined1 local_100;
  undefined2 local_fe;
  ForAnyElementType local_f8;
  undefined4 local_f0;
  int local_ec;
  undefined1 local_e8;
  undefined2 local_e6;
  ForAnyElementType local_e0;
  undefined4 local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined2 local_ce;
  ForAnyElementType local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined1 local_b8;
  undefined2 local_b6;
  ForAnyElementType local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0;
  undefined2 local_9e;
  ForAnyElementType local_98;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88;
  undefined2 local_86;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined2 local_6e;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_56;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_178 = 1;
  local_208[2] = L"\"Test string\"";
  local_208[0] = L"Test string";
  local_208[3] = L"\"Test \\\"string\\\"\"";
  local_208[1] = L"{Test string}";
  local_1e8 = L"a=\"Test\",b=\"Test\"";
  local_278 = &u_Test;
  local_1e0 = L"a=\"Test\\\\\",b=\"{Test}\"";
  local_168 = 2;
  local_1d8 = L"a=\"Test\\\\\\\" String\",b=\"{Test}\"";
  local_1d0 = L"Test=(Inner=\"{content}\")";
  local_176 = 0x20;
  local_1c8 = L"Test=(Inner=\"{content}\",Inner2=[\"{{{{\"])";
  local_170.Data = (FScriptContainerElement *)0x0;
  local_1c0 = L"B=(C,D))";
  local_1b8 = L"(Inner=\"{content}\",Inner2=[\"{{{{\"]";
  local_1b0 = L")Inner(";
  local_1a8 = L"([MismatchedBrackets)]";
  pwStack_270 = L"string";
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_170,2,&local_164);
  *(undefined **)local_170.Data = local_278;
  *(wchar_t **)(local_170.Data + 8) = pwStack_270;
  local_160 = 1;
  local_15e = 0x20;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_158,1,&local_14c);
  *(wchar_t **)local_158.Data = L"{Test string}";
  local_148 = 1;
  local_146 = 0x20;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_140,1,&local_134);
  *(wchar_t **)local_140.Data = L"Test string";
  local_130 = 1;
  local_12e = 0x20;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_128,1,&local_11c);
  *(wchar_t **)local_128.Data = L"Test \"string\"";
  local_268 = L"a=\"Test\"";
  pwStack_260 = L"b=\"Test\"";
  local_118 = 1;
  local_116 = 0x2c;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_110,2,&local_104);
  pwStack_250 = L"b=\"{Test}\"";
  *(wchar_t **)local_110.Data = local_268;
  *(wchar_t **)(local_110.Data + 8) = pwStack_260;
  local_100 = 1;
  local_258 = L"a=\"Test\\\\\"";
  local_fe = 0x2c;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_f8,2,&local_ec);
  pwStack_240 = L"b=\"{Test}\"";
  *(wchar_t **)local_f8.Data = local_258;
  *(wchar_t **)(local_f8.Data + 8) = pwStack_250;
  local_e8 = 1;
  local_248 = L"a=\"Test\\\\\\\" String\"";
  local_e6 = 0x2c;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_e0,2,&local_d4);
  *(wchar_t **)local_e0.Data = local_248;
  *(wchar_t **)(local_e0.Data + 8) = pwStack_240;
  local_d0 = 1;
  pwStack_230 = L"(Inner=\"{content}\")";
  local_238 = &u_Test;
  local_ce = 0x3d;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_c8,2,&local_bc);
  local_228 = &u_Test;
  *(undefined **)local_c8.Data = local_238;
  *(wchar_t **)(local_c8.Data + 8) = pwStack_230;
  local_b8 = 1;
  pwStack_220 = L"(Inner=\"{content}\",Inner2=[\"{{{{\"])";
  local_b6 = 0x3d;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_b0,2,&local_a4);
  *(undefined **)local_b0.Data = local_228;
  *(wchar_t **)(local_b0.Data + 8) = pwStack_220;
  local_a0 = 1;
  local_218 = L"B";
  pwStack_210 = L"(C,D)";
  local_9e = 0x3d;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_98,2,&local_8c);
  ppwVar15 = local_208;
  local_2a8 = 0;
  *(wchar_t **)local_98.Data = local_218;
  *(wchar_t **)(local_98.Data + 8) = pwStack_210;
  local_86 = 0x3d;
  piVar9 = &local_168;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6e = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_50 = 0;
  local_48 = 0;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  do {
    uVar11 = 0;
    local_2a0 = *ppwVar15;
    if ((char)piVar9[-4] == '\0') {
      ::FString::Reset(&local_2b8,0);
      bVar4 = FParse::Expression(&local_2a0,&local_2b8,true,*(wchar_t *)((longlong)piVar9 + -0xe));
      ::FString::PrintfImpl
                (&local_288,L"Expecting parsed expression [%s] to fail. Result was [%s].");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_288.Data.ArrayNum != 0) {
        FVar8.Data = local_288.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar4);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar13 = uVar11;
      if (0 < *piVar9) {
        do {
          ::FString::Reset(&local_2b8,0);
          uVar12 = (uint)uVar13;
          uVar6 = 0;
          if ((int)uVar12 < *piVar9) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pwVar2 = *(wchar_t **)(uVar11 + *(longlong *)(piVar9 + -2));
          bVar4 = FParse::Expression(&local_2a0,&local_2b8,true,
                                     *(wchar_t *)((longlong)piVar9 + -0xe));
          if (bVar4) {
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_2b8.Data.ArrayNum != 0) {
              FVar8.Data = local_2b8.Data.AllocatorInstance.Data;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar2);
            if (iVar7 != 0) goto LAB_1418a731d;
            bVar4 = true;
          }
          else {
LAB_1418a731d:
            bVar4 = false;
          }
          ::FString::PrintfImpl
                    (&local_298,
                     L"Expecting parsed expression [%s] %d/%d to be [%s]. Result was [%s].");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_298.Data.ArrayNum != 0) {
            FVar8.Data = local_298.Data.AllocatorInstance.Data;
          }
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar4);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          uVar11 = uVar11 + 8;
          uVar13 = (ulonglong)(uVar12 + 1);
        } while ((int)(uVar12 + 1) < *piVar9);
      }
    }
    piVar9 = piVar9 + 6;
    local_2a8 = local_2a8 + 1;
    ppwVar15 = ppwVar15 + 1;
    if (0xc < local_2a8) {
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      lVar10 = 0xd;
      puVar14 = local_38;
      do {
        puVar1 = puVar14 + -3;
        puVar14 = puVar14 + -3;
        lVar10 = lVar10 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar10 != 0);
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1418a74b0

FString * __thiscall
FParseExpressionSimpleTest::GetBeautifiedTestName
          (FParseExpressionSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.ParseExpressionSimple");
  return __return_storage_ptr__;
}


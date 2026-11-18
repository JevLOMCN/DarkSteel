// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a6400

EAutomationTestFlags __thiscall FParseLineExtendedTest::GetTestFlags(FParseLineExtendedTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a6410

bool __thiscall FParseLineExtendedTest::IsStressTest(FParseLineExtendedTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a6420

uint __thiscall FParseLineExtendedTest::GetRequiredDeviceNum(FParseLineExtendedTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a6430

FString * __thiscall
FParseLineExtendedTest::GetTestSourceFileName
          (FParseLineExtendedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Parse.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a6460

int __thiscall FParseLineExtendedTest::GetTestSourceFileLine(FParseLineExtendedTest *this)

{
  return 0x5d9;
}

// GetTests @ 1418a6470

/* WARNING: Removing unreachable block (ram,0x0001418a655d) */
/* WARNING: Removing unreachable block (ram,0x0001418a6628) */

void __thiscall
FParseLineExtendedTest::GetTests
          (FParseLineExtendedTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.ParseLineExtended");
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

// RunTest @ 1418a6650

bool __thiscall FParseLineExtendedTest::RunTest(FParseLineExtendedTest *this,FString *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t wVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint local_res18;
  longlong local_res20;
  FString local_e8;
  wchar_t *local_d8;
  FString local_d0;
  wchar_t *local_b8 [4];
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78 [4];
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0] = L"Test string";
  local_78[1] = L"{Test string}";
  local_b8[0] = L"Test string";
  local_40 = L"Test=(Inner=\"{content}\")";
  local_80 = L"Test=(Inner=\"{content}\")";
  local_78[2] = L"\"Test string\"";
  local_78[3] = L"\"Test \\\"string\\\"\"";
  local_58 = L"a=\"Test\", b=\"Test\"";
  local_50 = L"a=\"Test\\\\\", b=\"{Test}\"";
  local_48 = L"a=\"Test\\\\\\\" String\", b=\"{Test}\"";
  local_b8[1] = L"Test string";
  local_b8[2] = L"\"Test string\"";
  local_b8[3] = L"\"Test \\\"string\\\"\"";
  local_98 = L"a=\"Test\", b=\"Test\"";
  local_90 = L"a=\"Test\\\\\", b=\"{Test}\"";
  local_88 = L"a=\"Test\\\\\\\" String\", b=\"{Test}\"";
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_res18 = 0;
  local_res20 = 0;
  do {
    ::FString::Reset(&local_e8,0);
    pwVar9 = *(wchar_t **)((longlong)local_78 + local_res20);
    bVar2 = false;
    bVar8 = false;
    bVar3 = false;
    iVar5 = 0;
    local_d8 = pwVar9;
    ::FString::Reset(&local_e8,0);
    bVar4 = false;
    if (*pwVar9 != L'\0') {
      do {
        bVar2 = bVar4;
        wVar6 = *pwVar9;
        if ((wVar6 == L'\n') || (wVar6 == L'\r')) {
LAB_1418a676a:
          if (iVar5 < 1) break;
          if (!bVar8) {
LAB_1418a6778:
            if ((wVar6 == L'/') && (pwVar9[1] == L'/')) {
              bVar3 = true;
            }
          }
        }
        else if (!bVar8) {
          if (wVar6 == L'|') goto LAB_1418a676a;
          goto LAB_1418a6778;
        }
        bVar2 = true;
        if ((iVar5 < 1) || ((wVar6 != L'\n' && (wVar6 != L'\r')))) {
          if ((wVar6 == L'\\') && ((wVar1 = pwVar9[1], wVar1 == L'\n' || (wVar1 == L'\r')))) {
            lVar10 = 1;
            if ((wVar1 != L'|') &&
               (((wVar6 = pwVar9[2], wVar6 == L'\n' || (wVar6 == L'\r')) &&
                (lVar10 = 1, wVar1 != wVar6)))) {
              lVar10 = 2;
            }
            goto LAB_1418a6822;
          }
          if (bVar8) {
            if (((bVar3) || (wVar6 != L'\\')) || ((pwVar9[1] != L'\"' && (pwVar9[1] != L'\\')))) {
LAB_1418a689a:
              pwVar9 = pwVar9 + 1;
              bVar8 = (bool)(bVar8 ^ wVar6 == L'\"');
              if (!bVar3) {
                ::FString::AppendChar(&local_e8,wVar6);
              }
            }
            else {
              ::FString::AppendChars(&local_e8,pwVar9,2);
              pwVar9 = pwVar9 + 2;
            }
          }
          else if (wVar6 == L'{') {
            iVar5 = iVar5 + 1;
            pwVar9 = pwVar9 + 1;
          }
          else {
            if ((wVar6 != L'}') || (iVar5 < 1)) goto LAB_1418a689a;
            iVar5 = iVar5 + -1;
            pwVar9 = pwVar9 + 1;
          }
        }
        else {
          lVar10 = 1;
          if ((wVar6 != L'|') &&
             (((wVar1 = pwVar9[1], wVar1 == L'\n' || (wVar1 == L'\r')) &&
              (lVar10 = 1, wVar6 != wVar1)))) {
            lVar10 = 2;
          }
LAB_1418a6822:
          ::FString::AppendChar(&local_e8,L' ');
          if (*pwVar9 == L'\\') {
            pwVar9 = pwVar9 + 1;
          }
          pwVar9 = pwVar9 + lVar10;
        }
        wVar6 = L'\0';
        bVar4 = bVar2;
      } while (*pwVar9 != L'\0');
      if (wVar6 != L'\0') {
        for (; ((wVar6 = *pwVar9, wVar6 == L'\n' || (wVar6 == L'\r')) || (wVar6 == L'|'));
            pwVar9 = pwVar9 + lVar10) {
          lVar10 = 1;
          if (((wVar6 != L'|') && ((wVar1 = pwVar9[1], wVar1 == L'\n' || (wVar1 == L'\r')))) &&
             (lVar10 = 1, wVar6 != wVar1)) {
            lVar10 = 2;
          }
        }
      }
    }
    if ((*pwVar9 != L'\0') || (bVar2)) {
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar7.Data = local_e8.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FVar7.Data,*(wchar_t **)((longlong)local_b8 + local_res20));
      if (iVar5 != 0) goto LAB_1418a6950;
      bVar8 = true;
    }
    else {
LAB_1418a6950:
      bVar8 = false;
    }
    ::FString::PrintfImpl(&local_d0,L"Expecting parsed line [%s] to be [%s]. Result was [%s].");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar7.Data = local_d0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar8);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_res18 = local_res18 + 1;
    local_res20 = local_res20 + 8;
    if (7 < local_res18) {
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1418a6a00

FString * __thiscall
FParseLineExtendedTest::GetBeautifiedTestName
          (FParseLineExtendedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.ParseLineExtended");
  return __return_storage_ptr__;
}


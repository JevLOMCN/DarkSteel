// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414e0fd0

EAutomationTestFlags __thiscall
FStringFindAndContainsTest::GetTestFlags(FStringFindAndContainsTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414e0fe0

bool __thiscall FStringFindAndContainsTest::IsStressTest(FStringFindAndContainsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414e0ff0

uint __thiscall FStringFindAndContainsTest::GetRequiredDeviceNum(FStringFindAndContainsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414e1000

FString * __thiscall
FStringFindAndContainsTest::GetTestSourceFileName
          (FStringFindAndContainsTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x57,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StringTest.cpp"
             ,0x57);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414e10a0

int __thiscall FStringFindAndContainsTest::GetTestSourceFileLine(FStringFindAndContainsTest *this)

{
  return 0x290;
}

// GetTests @ 1414e10b0

/* WARNING: Removing unreachable block (ram,0x0001414e11f9) */
/* WARNING: Removing unreachable block (ram,0x0001414e12c4) */

void __thiscall
FStringFindAndContainsTest::GetTests
          (FStringFindAndContainsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x23,"System.Core.String.FindAndContains",0x23);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414e12f0

bool __thiscall
FStringFindAndContainsTest::RunTest(FStringFindAndContainsTest *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FStringFindAndContainsTest *local_res8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  pFVar12 = (FScriptContainerElement *)0x0;
  uVar5 = local_98._12_4_;
  local_98.Size = 1;
  local_e8.DataPtr = L"B";
  local_a8.DataPtr = L"CAD";
  iVar13 = 0;
  uVar4 = local_d8._12_4_;
  local_d8.Size = 8;
  uVar3 = local_d8._8_8_;
  local_b8.DataPtr = L"a";
  local_e8.Size = 1;
  local_a8.Size = 3;
  local_b8.Size = 1;
  local_c8.DataPtr = (wchar_t *)0x0;
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  local_98.DataPtr = L"A";
  local_d8.DataPtr = L"ABACADAB";
  local_res8 = this;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_98,CaseSensitive,FromStart,0,0);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_d8._12_4_ = uVar5;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  local_98._12_4_ = uVar4;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromStart,1,2);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromStart,7,-1);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromStart,8,-1);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromStart,0x50,-1);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,0x50,6);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,8,6);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,7,6);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,6,4);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,1,0);
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_98.DataPtr = L"ABACADAB";
  local_98.Size = 8;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_98,&local_d8,CaseSensitive,FromEnd,0,-1);
  uVar2 = local_e8._8_8_;
  pwVar11 = local_e8.DataPtr;
  local_d8.DataPtr = L"ABACADAB";
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromStart,0,1);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromStart,1,1);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromStart,2,7);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromStart,7,7);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromStart,8,7);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromEnd,0x50,7);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromEnd,8,7);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromEnd,7,1);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromEnd,1,-1);
  local_d8.DataPtr = L"ABACADAB";
  local_e8.DataPtr = pwVar11;
  local_e8._8_8_ = uVar2;
  local_d8._8_8_ = uVar3;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_d8,&local_e8,CaseSensitive,FromEnd,0,-1);
  uVar2 = local_b8._8_8_;
  pwVar11 = local_b8.DataPtr;
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_e8._12_4_ = uVar4;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromStart,0,0);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromStart,1,2);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromStart,7,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromEnd,8,6);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromEnd,1,0);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,IgnoreCase,FromEnd,0,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromStart,0,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromStart,1,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromStart,7,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromEnd,8,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromEnd,1,-1);
  local_e8.DataPtr = L"ABACADAB";
  local_e8.Size = 8;
  local_b8.DataPtr = pwVar11;
  local_b8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_e8,&local_b8,CaseSensitive,FromEnd,0,-1);
  uVar2 = local_a8._8_8_;
  pwVar11 = local_a8.DataPtr;
  local_b8.DataPtr = L"ABACADAB";
  local_b8.Size = 8;
  local_b8._12_4_ = uVar4;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_b8,&local_a8,CaseSensitive,FromStart,0,3);
  local_b8.DataPtr = L"ABACADAB";
  local_b8.Size = 8;
  local_a8.DataPtr = pwVar11;
  local_a8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_b8,&local_a8,CaseSensitive,FromStart,3,3);
  local_b8.DataPtr = L"ABACADAB";
  local_b8.Size = 8;
  local_a8.DataPtr = pwVar11;
  local_a8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_b8,&local_a8,CaseSensitive,FromStart,4,-1);
  uVar2 = local_c8._8_8_;
  pwVar11 = local_c8.DataPtr;
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_a8._12_4_ = uVar4;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,CaseSensitive,FromStart,0,0);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,CaseSensitive,FromStart,4,4);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,CaseSensitive,FromEnd,8,7);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,CaseSensitive,FromEnd,2,1);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,CaseSensitive,FromEnd,0,-1);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,IgnoreCase,FromStart,0,0);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,IgnoreCase,FromStart,4,4);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,IgnoreCase,FromEnd,8,7);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,IgnoreCase,FromEnd,2,1);
  local_a8.DataPtr = L"ABACADAB";
  local_a8.Size = 8;
  local_c8.DataPtr = pwVar11;
  local_c8._8_8_ = uVar2;
  `FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_a8,&local_c8,IgnoreCase,FromEnd,0,-1);
  pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_c8,L"ABACADAB",8);
  pFVar9 = pFVar12;
  if (&local_88 != pFVar6) {
    pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_c8,L"ABACADAB",8);
  pFVar9 = pFVar12;
  if (&local_78 != pFVar6) {
    pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_c8,L"ABACADAB",8);
  pFVar9 = pFVar12;
  if (&local_68 != pFVar6) {
    pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  iVar8 = 0;
  if (iVar13 == 0) {
    pwVar11 = L"";
    pFVar7 = (FScriptContainerElement *)L"";
  }
  else {
    pwVar11 = (wchar_t *)pFVar9;
    if (0 < iVar13 + -1) {
      iVar10 = iVar13 + -2;
      if (0 < iVar13 + -2) {
        iVar10 = iVar8;
      }
      iVar13 = iVar8;
      if (0 < iVar10) {
        iVar13 = iVar10;
      }
      pwVar11 = (wchar_t *)(pFVar9 + (longlong)iVar13 * 2);
    }
    pFVar7 = pFVar9;
    if ((FScriptContainerElement *)pwVar11 == (FScriptContainerElement *)0x0) {
      iVar13 = -1;
      goto LAB_1414e1dd5;
    }
  }
  iVar13 = (int)((longlong)pwVar11 - (longlong)pFVar7 >> 1);
LAB_1414e1dd5:
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (iVar13 != 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_c8,
               L"FString(\"ABACADAB\").Find(nullptr, 0, %d, %d, %d) returned Actual %d not equal to Expected 0"
              );
    (*pcVar1)(this,&local_c8,0);
    if (local_c8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
  }
  pFVar6 = ::FString::ConstructFromPtrSize((FString *)&local_c8,L"ABACADAB",8);
  iVar13 = iVar8;
  if (local_58 != pFVar6) {
    pFVar12 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_c8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_c8.DataPtr);
  }
  if (((iVar13 == 0) || (iVar10 = 8, iVar13 + -1 < 9)) && (iVar10 = iVar13 + -1, iVar13 == 0)) {
    iVar10 = iVar8;
  }
  iVar10 = iVar10 + -1;
  if (iVar10 < 0) {
    iVar10 = -1;
  }
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  if (iVar10 != 7) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_c8,
               L"FString(\"ABACADAB\").Find(nullptr, 0, %d, %d, %d) returned Actual %d not equal to Expected 7"
              );
    (*pcVar1)(this,&local_c8,0);
    if (local_c8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1414e1f10

FString * __thiscall
FStringFindAndContainsTest::GetBeautifiedTestName
          (FStringFindAndContainsTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x23,
             "System.Core.String.FindAndContains",0x23);
  return __return_storage_ptr__;
}

// operator() @ 141593a80

void __thiscall
`FStringFindAndContainsTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,Type param_3,
          Type param_4,int param_5,int param_6)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  size_t sVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FScriptContainerElement *local_98;
  ForAnyElementType local_90;
  int local_88 [4];
  code *local_78;
  code *local_70;
  wchar_t *local_68;
  FString local_60 [2];
  
  pwVar16 = (wchar_t *)0x0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  iVar6 = iVar5;
  if (&local_b8 != pFVar7) {
    local_b8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar7->Data).ArrayNum;
    local_b8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    local_b8.Data.ArrayNum = iVar6;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pwVar15 = param_2->DataPtr;
  local_98 = (FScriptContainerElement *)0x0;
  local_68 = pwVar15;
  pFVar7 = ::FString::ConstructFromPtrSize(&local_a8,pwVar15,(int)*(undefined8 *)&param_2->Size);
  iVar13 = iVar5;
  if (local_60 != pFVar7) {
    pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    local_98 = (FScriptContainerElement *)pwVar16;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (param_4 == FromStart) {
    if (param_5 != 0) goto LAB_141593b77;
LAB_141593b6e:
    bVar3 = true;
  }
  else {
    if (param_4 == FromEnd) {
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = iVar5;
      }
      if (iVar4 <= param_5) goto LAB_141593b6e;
    }
LAB_141593b77:
    bVar3 = false;
  }
  iVar6 = param_2->Size;
  iVar5 = ::FString::Find(&local_b8,pwVar15,iVar6,param_3,param_4,param_5);
  if (iVar5 != param_6) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl
              (&local_c8,
               L"FString(\"%s\").Find(\"%s\", %d, %d, %d, %d) returned Actual %d not equal to Expected %d"
              );
    (*pcVar2)(plVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  local_88[2] = -1;
  if ((bVar3) &&
     (iVar6 = ::FString::Find(&local_b8,local_68,iVar6,param_3,param_4,-1),
     (iVar6 != -1) != (param_6 != -1))) {
    pwVar15 = L"true";
    local_70 = *(code **)this;
    local_78 = *(code **)(*(longlong *)local_70 + 0x28);
    if (param_6 == -1) {
      pwVar15 = L"false";
    }
    FVar8.Data = (FScriptContainerElement *)0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    if (*pwVar15 == L'\0') {
LAB_141593d33:
      local_90.Data = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      sVar9 = wcslen(pwVar15);
      uVar12 = (int)sVar9 + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,&local_90,0,local_88 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar12,&local_90,local_88,local_88 + 1);
      FVar8.Data = local_90.Data;
      FGenericPlatformString::Memcpy(local_90.Data,pwVar15,(longlong)(int)uVar12 * 2);
      local_90.Data = FVar8.Data;
      if (local_88[0] == 0) goto LAB_141593d33;
    }
    pwVar15 = L"true";
    if (iVar6 == -1) {
      pwVar15 = L"false";
    }
    FVar10.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (*pwVar15 != L'\0') {
      sVar9 = wcslen(pwVar15);
      uVar12 = (int)sVar9 + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,(ForAnyElementType *)&local_c8,0,&local_c8.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar12,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                 &local_c8.Data.ArrayMax);
      FVar10.Data = local_c8.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_c8.Data.AllocatorInstance.Data,pwVar15,(longlong)(int)uVar12 * 2);
    }
    ::FString::PrintfImpl
              (&local_a8,
               L"FString(\"%s\").Contains(\"%s\", %d, %d, %d) returned Actual %s not equal to Expected %s"
              );
    (*local_78)(local_70,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  iVar6 = ::FString::Find(&local_b8,local_68,(int)*(undefined8 *)&param_2->Size,param_3,param_4,
                          param_5);
  if (iVar6 != param_6) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl
              (&local_a8,
               L"FString(\"%s\").Find(FStringView(\"%s\", %d), %d, %d, %d) returned Actual %d not equal to Expected %d"
              );
    (*pcVar2)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (iVar13 == 0) {
    pwVar15 = L"";
LAB_141593f3b:
    sVar9 = wcslen(pwVar15);
    iVar6 = ::FString::Find(&local_b8,pwVar15,(int)sVar9,param_3,param_4,param_5);
  }
  else {
    pwVar15 = pwVar16;
    if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) goto LAB_141593f3b;
    iVar6 = -1;
  }
  if (iVar6 != param_6) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl
              (&local_a8,
               L"FString(\"%s\").Find(TEXT(\"%s\"), %d, %d, %d) returned Actual %d not equal to Expected %d"
              );
    (*pcVar2)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (iVar13 == 0) {
      pwVar16 = L"";
LAB_141594004:
      sVar9 = wcslen(pwVar16);
      iVar6 = ::FString::Find(&local_b8,pwVar16,(int)sVar9,param_3,param_4,-1);
    }
    else {
      if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) goto LAB_141594004;
      iVar6 = -1;
    }
    if ((iVar6 != -1) != (param_6 != -1)) {
      pwVar16 = L"true";
      local_78 = *(code **)this;
      local_70 = *(code **)(*(longlong *)local_78 + 0x28);
      if (param_6 == -1) {
        pwVar16 = L"false";
      }
      FVar8.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      if (*pwVar16 != L'\0') {
        sVar9 = wcslen(pwVar16);
        uVar12 = (int)sVar9 + 1;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar12,(ForAnyElementType *)&local_c8,0,&local_c8.Data.ArrayMax);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                   &local_c8.Data.ArrayMax);
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
        FGenericPlatformString::Memcpy
                  (local_c8.Data.AllocatorInstance.Data,pwVar16,(longlong)(int)uVar12 * 2);
      }
      pwVar16 = L"true";
      if (iVar6 == -1) {
        pwVar16 = L"false";
      }
      FVar10.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (*pwVar16 != L'\0') {
        sVar9 = wcslen(pwVar16);
        uVar12 = (int)sVar9 + 1;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar12,(ForAnyElementType *)&local_c8,0,&local_c8.Data.ArrayMax);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                   &local_c8.Data.ArrayMax);
        FVar10.Data = local_c8.Data.AllocatorInstance.Data;
        FGenericPlatformString::Memcpy
                  (local_c8.Data.AllocatorInstance.Data,pwVar16,(longlong)(int)uVar12 * 2);
      }
      ::FString::PrintfImpl
                (&local_a8,
                 L"FString(\"%s\").Contains(TEXT(\"%s\"), %d, %d) returned Actual %s not equal to Expected %s"
                );
      (*local_70)(local_78,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
  }
  pwVar16 = (wchar_t *)local_98;
  iVar6 = iVar13 + -1;
  pFVar14 = local_98;
  if (iVar13 == 0) {
    iVar13 = 0;
    iVar6 = 0;
    pFVar14 = (FScriptContainerElement *)L"";
  }
  iVar6 = ::FString::Find(&local_b8,(wchar_t *)pFVar14,iVar6,param_3,param_4,param_5);
  FVar8.Data = local_b8.Data.AllocatorInstance.Data;
  if (iVar6 != param_6) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl
              (&local_a8,
               L"FString(\"%s\").Find(FString(%d, \"%s\"), %d, %d, %d) returned Actual %d not equal to Expected %d"
              );
    (*pcVar2)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = local_98;
  if (!bVar3) goto LAB_14159455f;
  if (iVar13 == 0) {
    pwVar16 = L"";
LAB_141594324:
    sVar9 = wcslen(pwVar16);
    iVar6 = ::FString::Find(&local_b8,pwVar16,(int)sVar9,param_3,param_4,-1);
    FVar8.Data = local_b8.Data.AllocatorInstance.Data;
    local_88[2] = iVar6;
  }
  else {
    if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) goto LAB_141594324;
    iVar6 = -1;
  }
  pFVar14 = local_98;
  if ((iVar6 != -1) != (param_6 != -1)) {
    pwVar16 = L"true";
    plVar1 = *(longlong **)this;
    local_78 = *(code **)(*plVar1 + 0x28);
    if (param_6 == -1) {
      pwVar16 = L"false";
    }
    FVar10.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    if (*pwVar16 != L'\0') {
      sVar9 = wcslen(pwVar16);
      uVar12 = (int)sVar9 + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,(ForAnyElementType *)&local_c8,0,&local_c8.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar12,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                 &local_c8.Data.ArrayMax);
      FVar10.Data = local_c8.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_c8.Data.AllocatorInstance.Data,pwVar16,(longlong)(int)uVar12 * 2);
    }
    pwVar16 = L"true";
    if (local_88[2] == -1) {
      pwVar16 = L"false";
    }
    FVar11.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    if (*pwVar16 != L'\0') {
      sVar9 = wcslen(pwVar16);
      uVar12 = (int)sVar9 + 1;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,(ForAnyElementType *)&local_c8,0,&local_c8.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar12,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                 &local_c8.Data.ArrayMax);
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_c8.Data.AllocatorInstance.Data,pwVar16,(longlong)(int)uVar12 * 2);
    }
    pFVar14 = local_98;
    ::FString::PrintfImpl
              (&local_a8,
               L"FString(\"%s\").Contains(FString(%d, \"%s\"), %d, %d) returned Actual %s not equal to Expected %s"
              );
    (*local_78)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
LAB_14159455f:
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}


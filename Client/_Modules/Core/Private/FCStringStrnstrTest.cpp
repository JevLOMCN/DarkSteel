// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 14189d490

EAutomationTestFlags __thiscall FCStringStrnstrTest::GetTestFlags(FCStringStrnstrTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14189d4a0

bool __thiscall FCStringStrnstrTest::IsStressTest(FCStringStrnstrTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189d4b0

uint __thiscall FCStringStrnstrTest::GetRequiredDeviceNum(FCStringStrnstrTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189d4c0

FString * __thiscall
FCStringStrnstrTest::GetTestSourceFileName
          (FCStringStrnstrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189d4f0

int __thiscall FCStringStrnstrTest::GetTestSourceFileLine(FCStringStrnstrTest *this)

{
  return 0x91;
}

// GetTests @ 14189d500

/* WARNING: Removing unreachable block (ram,0x00014189d5ed) */
/* WARNING: Removing unreachable block (ram,0x00014189d6b8) */

void __thiscall
FCStringStrnstrTest::GetTests
          (FCStringStrnstrTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CString.Strnstr");
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

// RunTest @ 14189d6e0

bool __thiscall FCStringStrnstrTest::RunTest(FCStringStrnstrTest *this,FString *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FCStringStrnstrTest *local_res8;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  uVar2 = local_28[0]._12_4_;
  local_28[0].Size = 8;
  iVar1 = local_28[0].Size;
  local_38.Size = 1;
  local_38.DataPtr = L"A";
  local_28[0].DataPtr = L"ABACADAB";
  local_res8 = this;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,local_28,&local_38,0,0);
  local_28[0].Size = 1;
  local_28[0].DataPtr = L"a";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,0);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"BAC";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,1,1);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"BaC";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,1);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"BAC";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,1,1);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"BaC";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,1);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"DAB";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,5,5);
  local_28[0].Size = 3;
  local_28[0].DataPtr = L"dab";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,5);
  local_28[0].DataPtr = L"ABACADAB";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  local_28[0].Size = iVar1;
  local_28[0]._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,0,0);
  local_28[0].Size = 8;
  local_28[0].DataPtr = L"abacadab";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,0);
  local_28[0].Size = 1;
  local_28[0].DataPtr = L"F";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,-1)
  ;
  local_28[0].Size = 4;
  local_28[0].DataPtr = L"DABZ";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,-1)
  ;
  local_28[0].Size = 9;
  local_28[0].DataPtr = L"ABACADABA";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,-1)
  ;
  local_28[0].Size = 0x13;
  local_28[0].DataPtr = L"NoMatchLongerString";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,-1)
  ;
  local_28[0].Size = 8;
  local_38.Size = 0;
  local_28[0].DataPtr = L"FindText";
  local_38.DataPtr = L"";
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,-1,-1)
  ;
  local_28[0].Size = 0;
  local_38._8_8_ = (ulonglong)(uint)local_38._12_4_ << 0x20;
  local_28[0].DataPtr = L"";
  local_38.DataPtr = L"";
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,0,0);
  local_28[0]._8_8_ = (ulonglong)(uint)local_28[0]._12_4_ << 0x20;
  local_28[0].DataPtr = L"";
  local_38.DataPtr = L"ABACADAB";
  local_38.Size = 8;
  local_38._12_4_ = uVar2;
  `FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_38,local_28,0,0);
  return true;
}

// GetBeautifiedTestName @ 14189db30

FString * __thiscall
FCStringStrnstrTest::GetBeautifiedTestName
          (FCStringStrnstrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CString.Strnstr");
  return __return_storage_ptr__;
}

// operator() @ 1418c15d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCStringStrnstrTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,int param_3,
          int param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  code *pcVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined1 auStack_328 [32];
  int local_308;
  int local_300;
  wchar_t *local_2f8;
  int local_2f0;
  int local_2e8;
  FString local_2d8;
  int local_2c8;
  int local_2c4;
  undefined8 *local_2c0;
  FString local_2b8;
  FString local_2a8;
  TStringBuilderBase<wchar_t> local_298;
  TStringBuilderBase<wchar_t> local_278 [8];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2d8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_2d8.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_2d8.Data.ArrayNum = param_1->Size;
  local_2d8.Data.ArrayMax = *(int *)&param_1->field_0xc;
  local_298.Base = (wchar_t *)local_278;
  local_298.End = (wchar_t *)&local_178;
  iVar9 = (int)*(undefined8 *)&param_1->Size;
  uVar8 = (ulong64)iVar9;
  local_178.Base = local_158;
  local_298.CurPos = (wchar_t *)local_278;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)local_58;
  local_2c4 = param_4;
  local_298.bIsDynamic = false;
  local_298.bIsExternal = false;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_2c8 = param_3;
  local_2c0 = this;
  if (&local_178 < (TStringBuilderBase<wchar_t> *)((longlong)&local_278[0].Base + uVar8 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_298,uVar8);
  }
  if (iVar9 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy
                       (local_298.CurPos,
                        (void *)CONCAT44(local_2d8.Data.AllocatorInstance.Data._4_4_,
                                         local_2d8.Data.AllocatorInstance.Data._0_4_),uVar8 * 2);
    local_298.CurPos = (wchar_t *)((longlong)pvVar5 + uVar8 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_298,L"SearchTrailing",0xe);
  local_2d8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_2d8.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  local_2d8.Data.ArrayNum = param_2->Size;
  local_2d8.Data.ArrayMax = *(int *)&param_2->field_0xc;
  iVar9 = (int)*(undefined8 *)&param_2->Size;
  uVar8 = (ulong64)iVar9;
  if (local_178.End < local_178.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_178,uVar8);
  }
  if (iVar9 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy
                       (local_178.CurPos,
                        (void *)CONCAT44(local_2d8.Data.AllocatorInstance.Data._4_4_,
                                         local_2d8.Data.AllocatorInstance.Data._0_4_),uVar8 * 2);
    local_178.CurPos = (wchar_t *)((longlong)pvVar5 + uVar8 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_178,L"FindTrailing",0xc);
  pwVar10 = (wchar_t *)0x0;
  if (param_3 == -1) {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)(param_1->DataPtr + param_3);
  }
  if (param_4 == -1) {
    local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)(param_1->DataPtr + param_4);
  }
  if (param_3 == -1) {
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_2a8.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)((longlong)(wchar_t **)local_298.Base + (longlong)param_3 * 2);
  }
  if (param_4 != -1) {
    pwVar10 = (wchar_t *)((longlong)(wchar_t **)local_298.Base + (longlong)param_4 * 2);
  }
  iVar9 = param_2->Size;
  iVar1 = param_1->Size;
  pwVar2 = param_2->DataPtr;
  pwVar7 = param_1->DataPtr;
  pFVar6 = (FScriptContainerElement *)TCString<wchar_t>::Strnstr(pwVar7,iVar1,pwVar2,iVar9);
  if (pFVar6 != local_2b8.Data.AllocatorInstance.Data) {
    plVar3 = (longlong *)*local_2c0;
    pcVar4 = *(code **)(*plVar3 + 0x28);
    local_2e8 = local_2c8;
    local_308 = iVar1;
    local_300 = iVar9;
    local_2f8 = pwVar2;
    local_2f0 = iVar9;
    ::FString::PrintfImpl
              (&local_2b8,L"Strnstr(\"%.*s\", %d, \"%.*s\", %d)\" did not equal index \"%d\".");
    (*pcVar4)(plVar3,&local_2b8,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (FScriptContainerElement *)
           TCString<wchar_t>::Strnstr(local_298.Base,iVar1,local_178.Base,iVar9);
  if (pFVar6 != local_2a8.Data.AllocatorInstance.Data) {
    plVar3 = (longlong *)*local_2c0;
    pcVar4 = *(code **)(*plVar3 + 0x28);
    local_2e8 = local_2c8;
    local_308 = iVar1;
    local_300 = iVar9;
    local_2f8 = pwVar2;
    local_2f0 = iVar9;
    ::FString::PrintfImpl
              (&local_2a8,
               L"Strnstr(\"%.*s\", %d, \"%.*s\", %d)\" did not equal index \"%d\", when embedded in a string without a nullterminator."
              );
    (*pcVar4)(plVar3,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (FScriptContainerElement *)TCString<wchar_t>::Strnistr(pwVar7,iVar1,pwVar2,iVar9);
  if (pFVar6 != local_2d8.Data.AllocatorInstance.Data) {
    plVar3 = (longlong *)*local_2c0;
    pcVar4 = *(code **)(*plVar3 + 0x28);
    local_2e8 = local_2c4;
    local_308 = iVar1;
    local_300 = iVar9;
    local_2f8 = pwVar2;
    local_2f0 = iVar9;
    ::FString::PrintfImpl
              (&local_2d8,L"Strnistr(\"%.*s\", %d, \"%.*s\", %d)\" did not equal index \"%d\".");
    (*pcVar4)(plVar3,&local_2d8,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  pwVar7 = TCString<wchar_t>::Strnistr(local_298.Base,iVar1,local_178.Base,iVar9);
  if (pwVar7 != pwVar10) {
    plVar3 = (longlong *)*local_2c0;
    pcVar4 = *(code **)(*plVar3 + 0x28);
    local_2e8 = local_2c4;
    local_308 = iVar1;
    local_300 = iVar9;
    local_2f8 = pwVar2;
    local_2f0 = iVar9;
    ::FString::PrintfImpl
              (&local_2d8,
               L"Strnistr(\"%.*s\", %d, \"%.*s\", %d)\" did not equal index \"%d\", when embedded in a string without a nullterminator."
              );
    (*pcVar4)(plVar3,&local_2d8,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_298);
  return;
}


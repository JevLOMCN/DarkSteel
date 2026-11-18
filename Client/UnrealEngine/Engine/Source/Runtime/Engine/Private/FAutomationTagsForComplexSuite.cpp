// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d5e50

EAutomationTestFlags __thiscall
FAutomationTagsForComplexSuite::GetTestFlags(FAutomationTagsForComplexSuite *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1487d5e60

bool __thiscall FAutomationTagsForComplexSuite::IsStressTest(FAutomationTagsForComplexSuite *this)

{
  return true;
}

// GetRequiredDeviceNum @ 1487d5e70

uint __thiscall
FAutomationTagsForComplexSuite::GetRequiredDeviceNum(FAutomationTagsForComplexSuite *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d5e80

FString * __thiscall
FAutomationTagsForComplexSuite::GetTestSourceFileName
          (FAutomationTagsForComplexSuite *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d5eb0

int __thiscall
FAutomationTagsForComplexSuite::GetTestSourceFileLine(FAutomationTagsForComplexSuite *this)

{
  return 0x916;
}

// GetTests @ 1487d5ec0

/* WARNING: Removing unreachable block (ram,0x0001487d5fc0) */
/* WARNING: Removing unreachable block (ram,0x0001487d60f4) */

void __thiscall
FAutomationTagsForComplexSuite::GetTests
          (FAutomationTagsForComplexSuite *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *this_00;
  FScriptContainerElement *pFVar5;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_88,"First");
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_88.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_58,"[TestExampleTagComplex][FirstExample]");
  ::FString::FString(&local_68,"First");
  FAutomationTestFramework::RegisterComplexAutomationTestTags
            (this_00,(FAutomationTestBase *)this,&local_68,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,"Second");
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_78.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_78.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,"[TestExampleTagComplex][SecondExample]");
  ::FString::FString(&local_48,"Second");
  FAutomationTestFramework::RegisterComplexAutomationTestTags
            (this_00,(FAutomationTestBase *)this,&local_48,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (param_2 != param_1) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    iVar4 = param_1->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar5 = (param_1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,*piVar1,&param_2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((param_2->AllocatorInstance).Data,(FString *)pFVar5,iVar4);
  }
  return;
}

// RunTest @ 1487d61e0

bool __thiscall
FAutomationTagsForComplexSuite::RunTest(FAutomationTagsForComplexSuite *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  FAutomationTestFramework *this_00;
  FString *pFVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (**(code **)(*(longlong *)this + 0x18))(this,&local_38);
  iVar2 = (param_1->Data).ArrayNum;
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar9 = iVar2 + -1;
  }
  bVar1 = ::FString::EndsWith(&local_38,pwVar4,iVar9,IgnoreCase);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Complex tests construct names as expected",bVar1);
  this_00 = FAutomationTestFramework::Get();
  FAutomationTestFramework::GetTagsForAutomationTest(this_00,&local_48,&local_38);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Tag is found",local_48.Data.ArrayNum < 2);
  iVar9 = 0;
  ::FString::FString(&local_58,"First");
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == local_58.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar1 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                     (wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = iVar2 + local_58.Data.ArrayNum == 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pcVar5 = "[TestExampleTagComplex][FirstExample]";
  if (!bVar1) {
    pcVar5 = "[TestExampleTagComplex][SecondExample]";
  }
  pFVar3 = ::FString::FString(&local_58,pcVar5);
  if (&local_28 != pFVar3) {
    pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FScriptContainerElement *)L"";
  if (iVar9 != 0) {
    pFVar8 = pFVar6;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Tags dynamically registered for intended complex test",
             (wchar_t *)FVar7.Data,(wchar_t *)pFVar8);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487d63a0

FString * __thiscall
FAutomationTagsForComplexSuite::GetBeautifiedTestName
          (FAutomationTagsForComplexSuite *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Tags.Complex");
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d4280

EAutomationTestFlags __thiscall FAutomationTagsFilter::GetTestFlags(FAutomationTagsFilter *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1487d4290

bool __thiscall FAutomationTagsFilter::IsStressTest(FAutomationTagsFilter *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d42a0

uint __thiscall FAutomationTagsFilter::GetRequiredDeviceNum(FAutomationTagsFilter *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d42b0

FString * __thiscall
FAutomationTagsFilter::GetTestSourceFileName
          (FAutomationTagsFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d42e0

int __thiscall FAutomationTagsFilter::GetTestSourceFileLine(FAutomationTagsFilter *this)

{
  return 0x8d8;
}

// GetTests @ 1487d42f0

/* WARNING: Removing unreachable block (ram,0x0001487d43dd) */
/* WARNING: Removing unreachable block (ram,0x0001487d44a8) */

void __thiscall
FAutomationTagsFilter::GetTests
          (FAutomationTagsFilter *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Tags.TagsCanFilter");
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

// RunTest @ 1487d44d0

bool __thiscall FAutomationTagsFilter::RunTest(FAutomationTagsFilter *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAutomationTestFramework *this_00;
  FString *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pFVar7 = (FScriptContainerElement *)0x0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  ::FString::FString(&local_68,"[TestExampleTag] AND NOT [DoNotWant]");
  this_00 = FAutomationTestFramework::Get();
  FAutomationTestFramework::GetTestFullNamesMatchingTagPattern(this_00,&local_b8,&local_68);
  iVar6 = local_b8.ArrayNum;
  ::FString::FString(&local_a8,"One element");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar5.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,iVar6,1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.ArrayNum < 1) {
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
  local_78 = *(wchar_t **)local_b8.AllocatorInstance.Data;
  iStack_70 = *(int *)(local_b8.AllocatorInstance.Data + 8) + -1;
  if (*(int *)(local_b8.AllocatorInstance.Data + 8) == 0) {
    iStack_70 = 0;
  }
  ::FString::FString(&local_98,"Current test is not selected");
  pFVar4 = ::FString::ConstructFromPtrSize(&local_58,(uchar *)"TestFramework.Tags.TagsExist",0x1c);
  iVar6 = 0;
  if (&local_28 != pFVar4) {
    pFVar7 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar4->Data).ArrayNum;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38._12_4_ = uStack_6c;
  local_38.Size = iStack_70;
  local_38.DataPtr = local_78;
  iStack_80 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_80 = 0;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar5.Data = local_98.Data.AllocatorInstance.Data;
  }
  local_48._12_4_ = uStack_7c;
  local_48.Size = iStack_80;
  local_88 = pFVar7;
  local_48.DataPtr = (wchar_t *)pFVar7;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_38,&local_48);
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487d46c0

FString * __thiscall
FAutomationTagsFilter::GetBeautifiedTestName
          (FAutomationTagsFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Tags.TagsCanFilter");
  return __return_storage_ptr__;
}


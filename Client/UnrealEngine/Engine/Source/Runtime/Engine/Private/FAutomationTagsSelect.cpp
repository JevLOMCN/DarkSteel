// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487f0580

EAutomationTestFlags __thiscall FAutomationTagsSelect::GetTestFlags(FAutomationTagsSelect *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1487f0590

bool __thiscall FAutomationTagsSelect::IsStressTest(FAutomationTagsSelect *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487f05a0

uint __thiscall FAutomationTagsSelect::GetRequiredDeviceNum(FAutomationTagsSelect *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487f05b0

FString * __thiscall
FAutomationTagsSelect::GetTestSourceFileName
          (FAutomationTagsSelect *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487f05e0

int __thiscall FAutomationTagsSelect::GetTestSourceFileLine(FAutomationTagsSelect *this)

{
  return 0x88b;
}

// GetTests @ 1487f05f0

/* WARNING: Removing unreachable block (ram,0x0001487f06dd) */
/* WARNING: Removing unreachable block (ram,0x0001487f07a8) */

void __thiscall
FAutomationTagsSelect::GetTests
          (FAutomationTagsSelect *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Tags.TagsAreSelectable");
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

// RunTest @ 1487f07d0

bool __thiscall FAutomationTagsSelect::RunTest(FAutomationTagsSelect *this,FString *param_1)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FAutomationTestFramework *this_00;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_res18 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ::FString::FString(&local_48,"[TestExampleTag]");
  this_00 = FAutomationTestFramework::Get();
  FAutomationTestFramework::GetTestFullNamesMatchingTagPattern(this_00,&local_78,&local_48);
  iVar1 = local_78.ArrayNum;
  ::FString::FString(&local_68,"Tags get selected");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,iVar1,1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar1 = local_78.ArrayNum;
  uVar4 = (ulonglong)local_78.ArrayNum;
  bVar9 = false;
  pFVar8 = local_78.AllocatorInstance.Data + uVar4 * 0x10;
  FVar5.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar5.Data == pFVar8) break;
    local_68.Data.ArrayNum = *(int *)(FVar5.Data + 8);
    lVar6 = (longlong)local_68.Data.ArrayNum;
    _Src = *(void **)FVar5.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
    }
    ::FString::FString(&local_58,"TestFramework.Tags.TagsAreSelectable");
    FVar2.Data = local_58.Data.AllocatorInstance.Data;
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == local_58.Data.ArrayNum) {
      if (local_68.Data.ArrayNum < 2) {
        bVar10 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar10 = iVar3 == 0;
      }
    }
    else {
      bVar10 = local_68.Data.ArrayNum + local_58.Data.ArrayNum == 1;
    }
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    if (bVar10) {
      bVar9 = true;
    }
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    uVar4 = local_78._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0x10;
  }
  ::FString::FString(&local_68,"Current test was selected");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar9);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487f0a00

FString * __thiscall
FAutomationTagsSelect::GetBeautifiedTestName
          (FAutomationTagsSelect *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Tags.TagsAreSelectable");
  return __return_storage_ptr__;
}


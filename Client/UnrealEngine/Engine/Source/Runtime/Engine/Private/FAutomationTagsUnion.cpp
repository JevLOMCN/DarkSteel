// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487f0af0

EAutomationTestFlags __thiscall FAutomationTagsUnion::GetTestFlags(FAutomationTagsUnion *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1487f0b00

bool __thiscall FAutomationTagsUnion::IsStressTest(FAutomationTagsUnion *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487f0b10

uint __thiscall FAutomationTagsUnion::GetRequiredDeviceNum(FAutomationTagsUnion *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487f0b20

FString * __thiscall
FAutomationTagsUnion::GetTestSourceFileName
          (FAutomationTagsUnion *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487f0b50

int __thiscall FAutomationTagsUnion::GetTestSourceFileLine(FAutomationTagsUnion *this)

{
  return 0x8a2;
}

// GetTests @ 1487f0b60

/* WARNING: Removing unreachable block (ram,0x0001487f0c4d) */
/* WARNING: Removing unreachable block (ram,0x0001487f0d18) */

void __thiscall
FAutomationTagsUnion::GetTests
          (FAutomationTagsUnion *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Tags.UnionSelection");
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

// RunTest @ 1487f0d40

bool __thiscall FAutomationTagsUnion::RunTest(FAutomationTagsUnion *this,FString *param_1)

{
  void *_Src;
  ForAnyElementType FVar1;
  int iVar2;
  FAutomationTestFramework *this_00;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ::FString::FString(&local_48,"[TestExampleTag] OR [SomeOtherTag]");
  this_00 = FAutomationTestFramework::Get();
  FAutomationTestFramework::GetTestFullNamesMatchingTagPattern(this_00,&local_78,&local_48);
  iVar2 = local_78.ArrayNum;
  ::FString::FString(&local_88,"Tags get selected");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestGreaterEqual((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar2,1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar3 = (ulonglong)local_78.ArrayNum;
  bVar8 = false;
  bVar10 = false;
  bVar11 = false;
  pFVar7 = local_78.AllocatorInstance.Data + uVar3 * 0x10;
  local_res20 = local_78.ArrayNum;
  uVar4 = uVar3;
  FVar9.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != (int)uVar4) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar9.Data == pFVar7) break;
    local_88.Data.ArrayNum = *(int *)(FVar9.Data + 8);
    lVar5 = (longlong)local_88.Data.ArrayNum;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = *(void **)FVar9.Data;
    if (local_88.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(&local_68,"TestFramework.Tags.TagsExist");
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == local_68.Data.ArrayNum) {
      if (local_88.Data.ArrayNum < 2) {
        bVar12 = true;
      }
      else {
        iVar2 = wcscmp((wchar_t *)local_88.Data.AllocatorInstance.Data,
                       (wchar_t *)local_68.Data.AllocatorInstance.Data);
        bVar12 = iVar2 == 0;
      }
    }
    else {
      bVar12 = local_88.Data.ArrayNum + local_68.Data.ArrayNum == 1;
    }
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
    }
    if (bVar12) {
      bVar8 = true;
    }
    else {
      ::FString::FString(&local_58,"TestFramework.Tags.TagsAreSelectable");
      FVar1.Data = local_58.Data.AllocatorInstance.Data;
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
      if (local_88.Data.ArrayNum == local_58.Data.ArrayNum) {
        if (local_88.Data.ArrayNum < 2) {
          bVar12 = true;
        }
        else {
          iVar2 = wcscmp((wchar_t *)local_88.Data.AllocatorInstance.Data,
                         (wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar12 = iVar2 == 0;
        }
      }
      else {
        bVar12 = local_88.Data.ArrayNum + local_58.Data.ArrayNum == 1;
      }
      if (FVar1.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar1.Data);
        FVar6.Data = local_88.Data.AllocatorInstance.Data;
      }
      bVar11 = bVar10;
      if (bVar12) {
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    uVar3 = local_78._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
    uVar4 = (ulonglong)local_res20;
  }
  ::FString::FString(&local_88,"First test was selected");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,bVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,"Second test was selected");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,bVar11);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
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

// GetBeautifiedTestName @ 1487f1010

FString * __thiscall
FAutomationTagsUnion::GetBeautifiedTestName
          (FAutomationTagsUnion *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Tags.UnionSelection");
  return __return_storage_ptr__;
}


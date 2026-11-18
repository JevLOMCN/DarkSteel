// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// GetTestFlags @ 1468d8300

EAutomationTestFlags __thiscall FHasFlagTest::GetTestFlags(FHasFlagTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1468d8310

bool __thiscall FHasFlagTest::IsStressTest(FHasFlagTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468d8320

uint __thiscall FHasFlagTest::GetRequiredDeviceNum(FHasFlagTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468d8330

FString * __thiscall
FHasFlagTest::GetTestSourceFileName(FHasFlagTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Binding\\States\\Tests\\WidgetStateBitfieldTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468d8360

int __thiscall FHasFlagTest::GetTestSourceFileLine(FHasFlagTest *this)

{
  return 0x97;
}

// GetTests @ 1468d8370

/* WARNING: Removing unreachable block (ram,0x0001468d845d) */
/* WARNING: Removing unreachable block (ram,0x0001468d8528) */

void __thiscall
FHasFlagTest::GetTests
          (FHasFlagTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.WidgetState.HasFlagTest");
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

// RunTest @ 1468d8550

bool __thiscall FHasFlagTest::RunTest(FHasFlagTest *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  UObject *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  FName local_res18;
  FString local_38;
  
  pFVar4 = ::FName::FName(&local_res18,"Pressed");
  FVar1 = *pFVar4;
  pUVar5 = UWidgetStateSettings::StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pbVar6 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,FVar1);
  uVar7 = 1L << ((ulonglong)*pbVar6 & 0x3f);
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  bVar9 = bVar9 & bVar10;
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  bVar9 = bVar9 & bVar10;
  pFVar4 = ::FName::FName(&local_res18,"Pressed");
  FVar1 = *pFVar4;
  pUVar5 = UWidgetStateSettings::StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pbVar6 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,FVar1);
  uVar7 = uVar7 & ~(1L << ((ulonglong)*pbVar6 & 0x3f));
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  bVar9 = bVar9 & bVar10;
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  bVar9 = bVar9 & bVar10;
  uVar7 = uVar7 | UWidgetPressedStateRegistration::Bit.BinaryStates;
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  bVar10 = bVar10 & bVar9;
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar9 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  bVar9 = bVar9 & bVar10;
  uVar7 = uVar7 & ~UWidgetPressedStateRegistration::Bit.BinaryStates;
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  bVar10 = bVar10 & bVar9;
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  bVar9 = bVar9 & bVar10;
  pUVar5 = UWidgetStateSettings::StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar3 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar4 = ::FName::FName(&local_res18,"Pressed");
  pbVar6 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&pUVar3[1].field_0x10,*pFVar4);
  uVar8 = (ulonglong)*pbVar6;
  uVar7 = uVar7 & ~(1L << (uVar8 & 0x3f)) | 1L << (uVar8 & 0x3f);
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  bVar10 = bVar10 & bVar9;
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar9 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  bVar9 = bVar9 & bVar10;
  uVar7 = uVar7 & ~(1L << (uVar8 & 0x3f));
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  bVar10 = bVar10 & bVar9;
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar7) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  bVar9 = bVar9 & bVar10;
  uVar7 = UWidgetPressedStateRegistration::Bit.BinaryStates |
          UWidgetHoveredStateRegistration::Bit.BinaryStates;
  if (UWidgetPressedStateRegistration::Bit.BinaryStates == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((uVar7 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar10 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  bVar10 = bVar10 & bVar9;
  if ((UWidgetHoveredStateRegistration::Bit.BinaryStates & uVar7) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((uVar7 & UWidgetHoveredStateRegistration::Bit.BinaryStates) ==
      UWidgetHoveredStateRegistration::Bit.BinaryStates) {
    bVar9 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  bVar10 = bVar10 & bVar9;
  if (uVar7 == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  uVar8 = uVar7 & ~UWidgetHoveredStateRegistration::Bit.BinaryStates;
  if ((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar8) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((uVar8 & UWidgetPressedStateRegistration::Bit.BinaryStates) ==
      UWidgetPressedStateRegistration::Bit.BinaryStates) {
    bVar9 = 1;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  bVar10 = bVar10 & bVar9;
  if ((UWidgetHoveredStateRegistration::Bit.BinaryStates & uVar8) != 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((uVar8 & UWidgetHoveredStateRegistration::Bit.BinaryStates) ==
      UWidgetHoveredStateRegistration::Bit.BinaryStates) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  bVar10 = bVar10 & bVar9;
  if ((uVar7 & uVar8) == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar10 = 0;
  }
  if ((uVar7 & uVar8) == uVar7) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  return (bool)(bVar9 & bVar10);
}

// GetBeautifiedTestName @ 1468d9130

FString * __thiscall
FHasFlagTest::GetBeautifiedTestName(FHasFlagTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.WidgetState.HasFlagTest");
  return __return_storage_ptr__;
}


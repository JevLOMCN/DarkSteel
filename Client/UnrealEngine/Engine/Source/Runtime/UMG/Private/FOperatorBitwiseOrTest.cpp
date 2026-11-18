// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// GetTestFlags @ 1468d7480

EAutomationTestFlags __thiscall FOperatorBitwiseOrTest::GetTestFlags(FOperatorBitwiseOrTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1468d7490

bool __thiscall FOperatorBitwiseOrTest::IsStressTest(FOperatorBitwiseOrTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468d74a0

uint __thiscall FOperatorBitwiseOrTest::GetRequiredDeviceNum(FOperatorBitwiseOrTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468d74b0

FString * __thiscall
FOperatorBitwiseOrTest::GetTestSourceFileName
          (FOperatorBitwiseOrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Binding\\States\\Tests\\WidgetStateBitfieldTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468d74e0

int __thiscall FOperatorBitwiseOrTest::GetTestSourceFileLine(FOperatorBitwiseOrTest *this)

{
  return 0x60;
}

// GetTests @ 1468d7530

/* WARNING: Removing unreachable block (ram,0x0001468d761d) */
/* WARNING: Removing unreachable block (ram,0x0001468d76e8) */

void __thiscall
FOperatorBitwiseOrTest::GetTests
          (FOperatorBitwiseOrTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.WidgetState.OperatorBitwiseOrTest");
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

// RunTest @ 1468d7710

/* WARNING: Removing unreachable block (ram,0x0001468d7757) */
/* WARNING: Removing unreachable block (ram,0x0001468d778b) */
/* WARNING: Removing unreachable block (ram,0x0001468d7790) */
/* WARNING: Removing unreachable block (ram,0x0001468d77a3) */
/* WARNING: Removing unreachable block (ram,0x0001468d77d7) */
/* WARNING: Removing unreachable block (ram,0x0001468d77dc) */

bool __thiscall FOperatorBitwiseOrTest::RunTest(FOperatorBitwiseOrTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FWidgetStateBitfield FVar6;
  FWidgetStateBitfield FVar7;
  byte bVar8;
  byte bVar9;
  FString local_48;
  
  FVar7.BinaryStates = UWidgetPressedStateRegistration::Bit.BinaryStates;
  FVar6.BinaryStates = UWidgetHoveredStateRegistration::Bit.BinaryStates;
  bVar4 = UWidgetHoveredStateRegistration::Bit.BinaryStates != 0;
  bVar5 = UWidgetPressedStateRegistration::Bit.BinaryStates != 0;
  bVar9 = 1;
  bVar2 = UWidgetHoveredStateRegistration::Bit.BinaryStates != 0 ||
          UWidgetPressedStateRegistration::Bit.BinaryStates != 0;
  bVar3 = UWidgetPressedStateRegistration::Bit.BinaryStates != 0;
  if (bVar3 || bVar2 == bVar4) {
LAB_1468d7873:
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
    if (bVar3 || bVar2 == bVar4) goto LAB_1468d7873;
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  bVar9 = bVar9 & bVar8;
  bVar2 = FVar6.BinaryStates != 0 || FVar7.BinaryStates != 0;
  if (FVar6.BinaryStates == 0 && bVar2 != bVar5) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
    if (FVar6.BinaryStates == 0 && bVar2 != bVar5) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      bVar8 = 0;
      goto LAB_1468d7902;
    }
  }
  bVar8 = 1;
LAB_1468d7902:
  bVar9 = bVar9 & bVar8;
  if ((UWidgetHoveredStateRegistration::Bit.BinaryStates != 0 ||
      UWidgetPressedStateRegistration::Bit.BinaryStates != 0) != (bVar4 || bVar5)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar9 = 0;
  }
  if ((UWidgetHoveredStateRegistration::Bit.BinaryStates != 0 ||
      UWidgetPressedStateRegistration::Bit.BinaryStates != 0) == (bVar4 || bVar5)) {
    bVar8 = 1;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar8 = 0;
  }
  return (bool)(bVar8 & bVar9);
}

// GetBeautifiedTestName @ 1468d79d0

FString * __thiscall
FOperatorBitwiseOrTest::GetBeautifiedTestName
          (FOperatorBitwiseOrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.WidgetState.OperatorBitwiseOrTest");
  return __return_storage_ptr__;
}


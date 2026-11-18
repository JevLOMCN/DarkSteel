// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// GetTestFlags @ 1468d6e50

EAutomationTestFlags __thiscall FOperatorBitwiseAndTest::GetTestFlags(FOperatorBitwiseAndTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1468d6e60

bool __thiscall FOperatorBitwiseAndTest::IsStressTest(FOperatorBitwiseAndTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468d6e70

uint __thiscall FOperatorBitwiseAndTest::GetRequiredDeviceNum(FOperatorBitwiseAndTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468d6e80

FString * __thiscall
FOperatorBitwiseAndTest::GetTestSourceFileName
          (FOperatorBitwiseAndTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Binding\\States\\Tests\\WidgetStateBitfieldTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468d6eb0

int __thiscall FOperatorBitwiseAndTest::GetTestSourceFileLine(FOperatorBitwiseAndTest *this)

{
  return 0x38;
}

// GetTests @ 1468d6ec0

/* WARNING: Removing unreachable block (ram,0x0001468d6fad) */
/* WARNING: Removing unreachable block (ram,0x0001468d7078) */

void __thiscall
FOperatorBitwiseAndTest::GetTests
          (FOperatorBitwiseAndTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.WidgetState.OperatorBitwiseAndTest");
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

// RunTest @ 1468d70a0

bool __thiscall FOperatorBitwiseAndTest::RunTest(FOperatorBitwiseAndTest *this,FString *param_1)

{
  FWidgetStateBitfield FVar1;
  FWidgetStateBitfield FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  bool bVar17;
  
  FVar2.BinaryStates = UWidgetPressedStateRegistration::Bit.BinaryStates;
  FVar1.BinaryStates = UWidgetHoveredStateRegistration::Bit.BinaryStates;
  uVar16 = UWidgetHoveredStateRegistration::Bit.BinaryStates |
           UWidgetPressedStateRegistration::Bit.BinaryStates;
  bVar17 = (UWidgetPressedStateRegistration::Bit.BinaryStates &
           UWidgetHoveredStateRegistration::Bit.BinaryStates) != 0;
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Pressed & Hovered is false",(uint)bVar17,0);
  bVar17 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Hovered & Pressed is false",(uint)bVar17,0);
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"PressedHovered & Pressed is true",
                     (uint)(FVar2.BinaryStates != 0),1);
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Pressed & PressedHovered is true",
                     (uint)(FVar2.BinaryStates != 0),1);
  bVar6 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"PressedHovered & Hovered is true",
                     (uint)(FVar1.BinaryStates != 0),1);
  bVar7 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"Hovered & PressedHovered is true",
                     (uint)(FVar1.BinaryStates != 0),1);
  bVar8 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"PressedHovered & PressedHovered is true",
                     (uint)(uVar16 != 0),1);
  bVar9 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"PressedHovered & PressedHovered is true",
                     (uint)(uVar16 != 0),1);
  bVar10 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: Pressed & Hovered is false",
                      (uint)((UWidgetPressedStateRegistration::Bit.BinaryStates &
                             UWidgetHoveredStateRegistration::Bit.BinaryStates) != 0),0);
  bVar11 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: Hovered & Pressed is false",
                      (uint)((UWidgetPressedStateRegistration::Bit.BinaryStates &
                             UWidgetHoveredStateRegistration::Bit.BinaryStates) != 0),0);
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: PressedHovered & Pressed is true",
                      (uint)((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar16) != 0),1);
  bVar13 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: Pressed & PressedHovered is true",
                      (uint)((UWidgetPressedStateRegistration::Bit.BinaryStates & uVar16) != 0),1);
  bVar14 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: PressedHovered & Hovered is true",
                      (uint)((UWidgetHoveredStateRegistration::Bit.BinaryStates & uVar16) != 0),1);
  bVar15 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"Bit: Hovered & PressedHovered is true",
                      (uint)((UWidgetHoveredStateRegistration::Bit.BinaryStates & uVar16) != 0),1);
  return bVar15 && (bVar14 &&
                   (bVar13 &&
                   (bVar12 &&
                   (bVar11 &&
                   (bVar10 &&
                   (bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar4 && (bVar17 && bVar3)))))
                             )))))));
}

// GetBeautifiedTestName @ 1468d7310

FString * __thiscall
FOperatorBitwiseAndTest::GetBeautifiedTestName
          (FOperatorBitwiseAndTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.WidgetState.OperatorBitwiseAndTest");
  return __return_storage_ptr__;
}


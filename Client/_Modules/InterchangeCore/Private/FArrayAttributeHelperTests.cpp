// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 8

// GetTestFlags @ 14e304730

EAutomationTestFlags __thiscall
FArrayAttributeHelperTests::GetTestFlags(FArrayAttributeHelperTests *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14e304740

bool __thiscall FArrayAttributeHelperTests::IsStressTest(FArrayAttributeHelperTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e304750

uint __thiscall FArrayAttributeHelperTests::GetRequiredDeviceNum(FArrayAttributeHelperTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e304760

FString * __thiscall
FArrayAttributeHelperTests::GetTestSourceFileName
          (FArrayAttributeHelperTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Tests\\ArrayAttributeHelperTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e304790

int __thiscall FArrayAttributeHelperTests::GetTestSourceFileLine(FArrayAttributeHelperTests *this)

{
  return 0x12;
}

// GetTests @ 14e3047a0

/* WARNING: Removing unreachable block (ram,0x00014e30488d) */
/* WARNING: Removing unreachable block (ram,0x00014e304958) */

void __thiscall
FArrayAttributeHelperTests::GetTests
          (FArrayAttributeHelperTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Runtime.Interchange.ArrayAttributeHelperTests");
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

// RunTest @ 14e304980

bool __thiscall
FArrayAttributeHelperTests::RunTest(FArrayAttributeHelperTests *this,FString *param_1)

{
  UE::ArrayAttributeHelperTests::Private::RunTestInternal<FString>(this);
  UE::ArrayAttributeHelperTests::Private::RunTestInternal<int>(this);
  UE::ArrayAttributeHelperTests::Private::RunTestInternal<double>(this);
  UE::ArrayAttributeHelperTests::Private::RunTestInternal<float>(this);
  return true;
}

// GetBeautifiedTestName @ 14e3049c0

FString * __thiscall
FArrayAttributeHelperTests::GetBeautifiedTestName
          (FArrayAttributeHelperTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Runtime.Interchange.ArrayAttributeHelperTests");
  return __return_storage_ptr__;
}


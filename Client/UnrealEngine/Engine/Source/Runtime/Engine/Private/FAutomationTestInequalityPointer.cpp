// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e13f0

EAutomationTestFlags __thiscall
FAutomationTestInequalityPointer::GetTestFlags(FAutomationTestInequalityPointer *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e1440

bool __thiscall
FAutomationTestInequalityPointer::IsStressTest(FAutomationTestInequalityPointer *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e1450

uint __thiscall
FAutomationTestInequalityPointer::GetRequiredDeviceNum(FAutomationTestInequalityPointer *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e1460

FString * __thiscall
FAutomationTestInequalityPointer::GetTestSourceFileName
          (FAutomationTestInequalityPointer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e1490

int __thiscall
FAutomationTestInequalityPointer::GetTestSourceFileLine(FAutomationTestInequalityPointer *this)

{
  return 0x3cf;
}

// GetTests @ 1487e14a0

/* WARNING: Removing unreachable block (ram,0x0001487e158d) */
/* WARNING: Removing unreachable block (ram,0x0001487e1658) */

void __thiscall
FAutomationTestInequalityPointer::GetTests
          (FAutomationTestInequalityPointer *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.TestInequalityPointer");
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

// RunTest @ 1487e1680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAutomationTestInequalityPointer::RunTest(FAutomationTestInequalityPointer *this,FString *param_1)

{
  code *pcVar1;
  UWorld *this_00;
  UWorld *this_01;
  ForAnyElementType FVar2;
  int local_res18 [4];
  FString local_48;
  FString local_38;
  
  local_res18[0] = 0;
  local_res18[1] = 0;
  this_00 = UWorld::CreateWorld(Game,false,(FName)0x0,(UPackage *)0x0,true,Num,
                                (FWorldInitializationValues *)0x0,false);
  local_res18[0] = 0;
  local_res18[1] = 0;
  this_01 = UWorld::CreateWorld(Game,false,(FName)0x0,(UPackage *)0x0,true,Num,
                                (FWorldInitializationValues *)0x0,false);
  ::FString::FString(&local_48,"Identity stack primitive");
  FAutomationTestBase::TestSamePtr<int>
            ((FAutomationTestBase *)this,&local_48,local_res18,local_res18);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Identity world object");
  FAutomationTestBase::TestSamePtr<UWorld>((FAutomationTestBase *)this,&local_48,this_00,this_00);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Same stack primitive");
  FAutomationTestBase::TestSamePtr<int>
            ((FAutomationTestBase *)this,&local_48,local_res18,local_res18);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Same world object");
  FAutomationTestBase::TestSamePtr<UWorld>((FAutomationTestBase *)this,&local_48,this_00,this_00);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,"Other stack primitive");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Other world object");
  if (this_01 == (UWorld *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x48);
    ::FString::PrintfImpl(&local_38,L"%s: Actual value is nullptr.");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_00 == (UWorld *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x48);
    ::FString::PrintfImpl
              (&local_38,
               L"%s: Expected value is nullptr, which may be unintended. If intentional consider instead using TestNotNull()."
              );
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01 == this_00) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two pointers are the same.");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,"Stack primitive not null");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Constructed World object not null");
  if (this_00 == (UWorld *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"Nullptr");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestNull((FAutomationTestBase *)this,(wchar_t *)FVar2.Data,(void *)0x0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UWorld::DestroyWorld(this_00,false,(UWorld *)0x0);
  UWorld::DestroyWorld(this_01,false,(UWorld *)0x0);
  return true;
}

// GetBeautifiedTestName @ 1487e19b0

FString * __thiscall
FAutomationTestInequalityPointer::GetBeautifiedTestName
          (FAutomationTestInequalityPointer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.TestInequalityPointer");
  return __return_storage_ptr__;
}


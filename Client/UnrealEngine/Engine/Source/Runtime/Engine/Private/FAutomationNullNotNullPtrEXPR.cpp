// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487ed560

EAutomationTestFlags __thiscall
FAutomationNullNotNullPtrEXPR::GetTestFlags(FAutomationNullNotNullPtrEXPR *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487ed570

bool __thiscall FAutomationNullNotNullPtrEXPR::IsStressTest(FAutomationNullNotNullPtrEXPR *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ed580

uint __thiscall
FAutomationNullNotNullPtrEXPR::GetRequiredDeviceNum(FAutomationNullNotNullPtrEXPR *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ed590

FString * __thiscall
FAutomationNullNotNullPtrEXPR::GetTestSourceFileName
          (FAutomationNullNotNullPtrEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ed5c0

int __thiscall
FAutomationNullNotNullPtrEXPR::GetTestSourceFileLine(FAutomationNullNotNullPtrEXPR *this)

{
  return 0x5d6;
}

// GetTests @ 1487ed5d0

/* WARNING: Removing unreachable block (ram,0x0001487ed6bd) */
/* WARNING: Removing unreachable block (ram,0x0001487ed788) */

void __thiscall
FAutomationNullNotNullPtrEXPR::GetTests
          (FAutomationNullNotNullPtrEXPR *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.UTestNullNotNull");
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

// RunTest @ 1487ed7b0

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
FAutomationNullNotNullPtrEXPR::RunTest(FAutomationNullNotNullPtrEXPR *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  wchar_t *pwVar3;
  FString local_18;
  
  this_00 = UWorld::CreateWorld(Game,false,(FName)0x0,(UPackage *)0x0,true,Num,
                                (FWorldInitializationValues *)0x0,false);
  bVar2 = FAutomationTestBase::TestNull((FAutomationTestBase *)this,L"nullptr",(void *)0x0);
  if (bVar2) {
    pwVar3 = L"";
    if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance
      ;
    }
    bVar2 = FAutomationTestBase::TestNull((FAutomationTestBase *)this,pwVar3,(void *)0x0);
    if (bVar2) {
      if (this_00 != (UWorld *)0x0) {
        UWorld::DestroyWorld(this_00,false,(UWorld *)0x0);
        return true;
      }
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// GetBeautifiedTestName @ 1487ed8a0

FString * __thiscall
FAutomationNullNotNullPtrEXPR::GetBeautifiedTestName
          (FAutomationNullNotNullPtrEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.UTestNullNotNull");
  return __return_storage_ptr__;
}


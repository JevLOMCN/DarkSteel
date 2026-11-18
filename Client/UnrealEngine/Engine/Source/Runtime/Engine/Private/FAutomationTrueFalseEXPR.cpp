// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487ec140

EAutomationTestFlags __thiscall
FAutomationTrueFalseEXPR::GetTestFlags(FAutomationTrueFalseEXPR *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487ec150

bool __thiscall FAutomationTrueFalseEXPR::IsStressTest(FAutomationTrueFalseEXPR *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ec160

uint __thiscall FAutomationTrueFalseEXPR::GetRequiredDeviceNum(FAutomationTrueFalseEXPR *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ec170

FString * __thiscall
FAutomationTrueFalseEXPR::GetTestSourceFileName
          (FAutomationTrueFalseEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ec1a0

int __thiscall FAutomationTrueFalseEXPR::GetTestSourceFileLine(FAutomationTrueFalseEXPR *this)

{
  return 0x5a7;
}

// GetTests @ 1487ec1b0

/* WARNING: Removing unreachable block (ram,0x0001487ec29d) */
/* WARNING: Removing unreachable block (ram,0x0001487ec368) */

void __thiscall
FAutomationTrueFalseEXPR::GetTests
          (FAutomationTrueFalseEXPR *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.UTestTrueFalse");
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

// RunTest @ 1487ec390

bool __thiscall FAutomationTrueFalseEXPR::RunTest(FAutomationTrueFalseEXPR *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  bVar1 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"ActualFloatValue == ExpectedFloatValue",true);
  if (bVar1) {
    pwVar3 = L"";
    pwVar2 = L"";
    if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
      pwVar2 = (wchar_t *)FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance
      ;
    }
    bVar1 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar2,true);
    if (bVar1) {
      bVar1 = FAutomationTestBase::TestFalse
                        ((FAutomationTestBase *)this,L"ActualFloatValue > ExpectedFloatValue",false)
      ;
      if (bVar1) {
        if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
          pwVar3 = (wchar_t *)
                   FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance;
        }
        bVar1 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar3,false);
        return bVar1;
      }
    }
  }
  return false;
}

// GetBeautifiedTestName @ 1487ec430

FString * __thiscall
FAutomationTrueFalseEXPR::GetBeautifiedTestName
          (FAutomationTrueFalseEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.UTestTrueFalse");
  return __return_storage_ptr__;
}


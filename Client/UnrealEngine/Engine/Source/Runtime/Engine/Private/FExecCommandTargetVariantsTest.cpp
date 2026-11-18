// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148872be0

EAutomationTestFlags __thiscall
FExecCommandTargetVariantsTest::GetTestFlags(FExecCommandTargetVariantsTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148872bf0

bool __thiscall FExecCommandTargetVariantsTest::IsStressTest(FExecCommandTargetVariantsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148872c00

uint __thiscall
FExecCommandTargetVariantsTest::GetRequiredDeviceNum(FExecCommandTargetVariantsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148872c10

FString * __thiscall
FExecCommandTargetVariantsTest::GetTestSourceFileName
          (FExecCommandTargetVariantsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExecCommandsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148872c40

int __thiscall
FExecCommandTargetVariantsTest::GetTestSourceFileLine(FExecCommandTargetVariantsTest *this)

{
  return 0x8f;
}

// GetTests @ 148872c50

/* WARNING: Removing unreachable block (ram,0x000148872d3d) */
/* WARNING: Removing unreachable block (ram,0x000148872e08) */

void __thiscall
FExecCommandTargetVariantsTest::GetTests
          (FExecCommandTargetVariantsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.ExecCommands.Target Variants");
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

// RunTest @ 148872e30

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
FExecCommandTargetVariantsTest::RunTest(FExecCommandTargetVariantsTest *this,FString *param_1)

{
  code *pcVar1;
  UEngine *pUVar2;
  FOutputDeviceRedirector *pFVar3;
  FSelfRegisteringExec local_18;
  undefined2 local_10;
  bool local_e;
  
  if (GEngine == (UEngine *)0x0) {
    return false;
  }
  FSelfRegisteringExec::FSelfRegisteringExec(&local_18);
  pUVar2 = GEngine;
  local_18 = (FSelfRegisteringExec)
             &`FExecCommandTargetVariantsTest::RunTest'::`2'::FExecCommandHandler::_vftable_;
  local_10 = 0;
  local_e = false;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar3 = GetGlobalLogSingleton();
  (*pcVar1)(&pUVar2->_padding_,0,L"Test_EditorCommand",pFVar3);
  pUVar2 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar3 = GetGlobalLogSingleton();
  (*pcVar1)(&pUVar2->_padding_,0,L"Test_DevCommand",pFVar3);
  pUVar2 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar3 = GetGlobalLogSingleton();
  (*pcVar1)(&pUVar2->_padding_,0,L"Test_RuntimeCommand",pFVar3);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Editor Exec Command executed in an invalid context.",
             local_10._0_1_);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Dev Exec Command failed to execute.",local_10._1_1_);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Runtime Exec Command failed to execute.",local_e);
  FSelfRegisteringExec::~FSelfRegisteringExec(&local_18);
  return true;
}

// GetBeautifiedTestName @ 148872f50

FString * __thiscall
FExecCommandTargetVariantsTest::GetBeautifiedTestName
          (FExecCommandTargetVariantsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.ExecCommands.Target Variants");
  return __return_storage_ptr__;
}


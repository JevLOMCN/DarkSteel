// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148870f30

EAutomationTestFlags __thiscall
FDeferredExecCommandTest::GetTestFlags(FDeferredExecCommandTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148870f40

bool __thiscall FDeferredExecCommandTest::IsStressTest(FDeferredExecCommandTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148870f60

uint __thiscall FDeferredExecCommandTest::GetRequiredDeviceNum(FDeferredExecCommandTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148870f80

FString * __thiscall
FDeferredExecCommandTest::GetTestSourceFileName
          (FDeferredExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExecCommandsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148870fc0

int __thiscall FDeferredExecCommandTest::GetTestSourceFileLine(FDeferredExecCommandTest *this)

{
  return 0x15;
}

// GetTests @ 148871010

/* WARNING: Removing unreachable block (ram,0x0001488710fd) */
/* WARNING: Removing unreachable block (ram,0x0001488711c8) */

void __thiscall
FDeferredExecCommandTest::GetTests
          (FDeferredExecCommandTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.ExecCommands.Deferred Command");
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

// RunTest @ 1488713d0

/* WARNING: Removing unreachable block (ram,0x0001488714fe) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FDeferredExecCommandTest::RunTest(FDeferredExecCommandTest *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FOutputDeviceRedirector *pFVar7;
  FScriptContainerElement *pFVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FString local_28;
  FSelfRegisteringExec local_18;
  bool local_10;
  
  if (GEngine == (UEngine *)0x0) {
    return false;
  }
  FSelfRegisteringExec::FSelfRegisteringExec(&local_18);
  pUVar3 = GEngine;
  local_18 = (FSelfRegisteringExec)
             &`FDeferredExecCommandTest::RunTest'::`2'::FExecCommandHandler::_vftable_;
  local_10 = false;
  pTVar9 = &GEngine->DeferredCommands;
  ::FString::FString(&local_28,L"Test_DeferredCommand");
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar8 + (longlong)(pUVar3->DeferredCommands).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = (pUVar3->DeferredCommands).ArrayNum;
  piVar1 = &(pUVar3->DeferredCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
  }
  (pUVar3->DeferredCommands).ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UEngine::TickDeferredCommands(GEngine);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Deferred Exec Command failed to execute.",local_10);
  pUVar3 = GEngine;
  local_10 = false;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar7 = GetGlobalLogSingleton();
  (*pcVar2)(&pUVar3->_padding_,0,L"DEFER Test_DeferredCommand",pFVar7);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Deferred Exec Command executed without deferring.",
             local_10);
  UEngine::TickDeferredCommands(GEngine);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Deferred Exec Command failed to execute.",local_10);
  FSelfRegisteringExec::~FSelfRegisteringExec(&local_18);
  return true;
}

// GetBeautifiedTestName @ 1488715b0

FString * __thiscall
FDeferredExecCommandTest::GetBeautifiedTestName
          (FDeferredExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.ExecCommands.Deferred Command");
  return __return_storage_ptr__;
}


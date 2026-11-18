// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148871d60

EAutomationTestFlags __thiscall
FSelfRegisteringExecCommandTest::GetTestFlags(FSelfRegisteringExecCommandTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148871d70

bool __thiscall FSelfRegisteringExecCommandTest::IsStressTest(FSelfRegisteringExecCommandTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148871d80

uint __thiscall
FSelfRegisteringExecCommandTest::GetRequiredDeviceNum(FSelfRegisteringExecCommandTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148871d90

FString * __thiscall
FSelfRegisteringExecCommandTest::GetTestSourceFileName
          (FSelfRegisteringExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExecCommandsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148871dc0

int __thiscall
FSelfRegisteringExecCommandTest::GetTestSourceFileLine(FSelfRegisteringExecCommandTest *this)

{
  return 0x48;
}

// GetTests @ 148871dd0

/* WARNING: Removing unreachable block (ram,0x000148871ebd) */
/* WARNING: Removing unreachable block (ram,0x000148871f88) */

void __thiscall
FSelfRegisteringExecCommandTest::GetTests
          (FSelfRegisteringExecCommandTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.ExecCommands.Self Registering");
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

// RunTest @ 148871fb0

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
FSelfRegisteringExecCommandTest::RunTest(FSelfRegisteringExecCommandTest *this,FString *param_1)

{
  code *pcVar1;
  UEngine *pUVar2;
  FOutputDeviceRedirector *pFVar3;
  FSelfRegisteringExec local_18;
  bool local_10;
  
  if (GEngine == (UEngine *)0x0) {
    return false;
  }
  FSelfRegisteringExec::FSelfRegisteringExec(&local_18);
  pUVar2 = GEngine;
  local_18 = (FSelfRegisteringExec)
             &`FSelfRegisteringExecCommandTest::RunTest'::`2'::FExecCommandHandler::_vftable_;
  local_10 = false;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar3 = GetGlobalLogSingleton();
  (*pcVar1)(&pUVar2->_padding_,0,L"Test_Command",pFVar3);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Exec Command failed to execute.",local_10);
  FSelfRegisteringExec::~FSelfRegisteringExec(&local_18);
  return true;
}

// GetBeautifiedTestName @ 148872050

FString * __thiscall
FSelfRegisteringExecCommandTest::GetBeautifiedTestName
          (FSelfRegisteringExecCommandTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.ExecCommands.Self Registering");
  return __return_storage_ptr__;
}


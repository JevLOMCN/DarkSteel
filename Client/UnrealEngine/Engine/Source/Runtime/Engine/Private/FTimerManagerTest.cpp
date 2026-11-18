// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488a2e80

EAutomationTestFlags __thiscall FTimerManagerTest::GetTestFlags(FTimerManagerTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1488a2e90

bool __thiscall FTimerManagerTest::IsStressTest(FTimerManagerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488a2ea0

uint __thiscall FTimerManagerTest::GetRequiredDeviceNum(FTimerManagerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488a2eb0

FString * __thiscall
FTimerManagerTest::GetTestSourceFileName(FTimerManagerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488a2ee0

int __thiscall FTimerManagerTest::GetTestSourceFileLine(FTimerManagerTest *this)

{
  return 9;
}

// GetTests @ 1488a2ef0

/* WARNING: Removing unreachable block (ram,0x0001488a2fdd) */
/* WARNING: Removing unreachable block (ram,0x0001488a30a8) */

void __thiscall
FTimerManagerTest::GetTests
          (FTimerManagerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.TimerManager");
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

// RunTest @ 1488a30d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTimerManagerTest::RunTest(FTimerManagerTest *this,FString *param_1)

{
  UWorld *pUVar1;
  bool bVar2;
  FTestWorldWrapper local_38;
  
  local_38._padding_ = (longlong)&___7FTestWorldWrapper__6B_;
  local_38.TestWorld = (UWorld *)0x0;
  local_38.CachedFrameCounter = 0;
  local_38.FailureErrors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.FailureErrors.ArrayNum = 0;
  local_38.FailureErrors.ArrayMax = 0;
  FTestWorldWrapper::CreateTestWorld(&local_38,Game);
  pUVar1 = local_38.TestWorld;
  bVar2 = false;
  if (local_38.TestWorld != (UWorld *)0x0) {
    FTestWorldWrapper::BeginPlayInTestWorld(&local_38);
    TimerManagerTest_InvalidTimers(pUVar1,(FAutomationTestBase *)this);
    TimerManagerTest_MissingTimers(pUVar1,(FAutomationTestBase *)this);
    TimerManagerTest_ValidTimer_HandleWithDelegate(pUVar1,(FAutomationTestBase *)this);
    TimerManagerTest_ValidTimer_HandleLoopingSetDuringExecute(pUVar1,(FAutomationTestBase *)this);
    TimerManagerTest_LoopingTimers_DifferentHandles(pUVar1,(FAutomationTestBase *)this);
    FTestWorldWrapper::ForwardErrorMessages(&local_38,(FAutomationTestBase *)this);
    bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
    bVar2 = !bVar2;
  }
  FTestWorldWrapper::~FTestWorldWrapper(&local_38);
  return bVar2;
}

// GetBeautifiedTestName @ 1488a3190

FString * __thiscall
FTimerManagerTest::GetBeautifiedTestName(FTimerManagerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.TimerManager");
  return __return_storage_ptr__;
}


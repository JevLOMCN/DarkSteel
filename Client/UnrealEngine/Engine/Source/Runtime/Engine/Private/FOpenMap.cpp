// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FOpenMap @ 14887eb50

void __thiscall `FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap::~FOpenMap(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationNetworkCommand__6B_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014887eb7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetRoleIndex @ 148890710

uint __thiscall `FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap::GetRoleIndex(void *this)

{
  return *(uint *)((longlong)this + 0x18);
}

// Run @ 148897d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap::Run(void *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  UEngine *pUVar3;
  bool bVar4;
  FOutputDeviceRedirector *pFVar5;
  FAutomationTestFramework *this_00;
  FEngineWaitLatentCommand *pFVar6;
  FEngineWaitLatentCommand *pFVar7;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar8;
  ForAnyElementType FVar9;
  TRawPtrProxy<FEngineWaitLatentCommand> local_res10;
  FString local_48;
  FString local_38;
  TSharedPtr<IAutomationLatentCommand,1> local_28;
  
  ::FString::FString(&local_38,L"AutomationTest");
  pUVar2 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar5 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_48,L"Open %s");
  pUVar3 = GEngine;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar7 = (FEngineWaitLatentCommand *)0x0;
  if (((GEngine->WorldList).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(&pUVar2->_padding_,
            *(undefined8 *)(*(longlong *)(pUVar3->WorldList).Array.AllocatorInstance.Data + 0x2c0),
            FVar9.Data,pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_00 = FAutomationTestFramework::Get();
  pFVar6 = ::operator_new(0x28);
  if (pFVar6 != (FEngineWaitLatentCommand *)0x0) {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->Duration = 2.0;
    pFVar7 = pFVar6;
  }
  local_res10.Object = pFVar7;
  pTVar8 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_28,&local_res10);
  FAutomationTestFramework::EnqueueLatentCommand(this_00,pTVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}


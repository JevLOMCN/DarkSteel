// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FLoadGameMapCommand @ 14880c380

void __thiscall FLoadGameMapCommand::~FLoadGameMapCommand(FLoadGameMapCommand *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FLoadGameMapCommand__6B_;
  pFVar3 = (this->MapName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014880c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Update @ 14885f3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FLoadGameMapCommand::Update(FLoadGameMapCommand *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  FOutputDeviceRedirector *pFVar6;
  ForAnyElementType FVar7;
  FString local_18;
  
  if (((GEngine->WorldList).Array.ArrayNum != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GetWorldContexts().Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x33b,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  pUVar2 = GEngine;
  if (((GEngine->WorldList).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((**(char **)(pUVar2->WorldList).Array.AllocatorInstance.Data != '\x01') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GetWorldContexts()[0].WorldType == EWorldType::Game",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x33c,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (4 < (byte)LogEngineAutomationTests._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
  }
  pUVar2 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar6 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_18,L"Open %s");
  pUVar3 = GEngine;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (((GEngine->WorldList).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (*pcVar1)(&pUVar2->_padding_,
            *(undefined8 *)(*(longlong *)(pUVar3->WorldList).Array.AllocatorInstance.Data + 0x2c0),
            FVar7.Data,pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}


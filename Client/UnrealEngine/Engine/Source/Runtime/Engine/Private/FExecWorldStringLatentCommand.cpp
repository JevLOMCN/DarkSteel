// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885f1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FExecWorldStringLatentCommand::Update(FExecWorldStringLatentCommand *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  FOutputDeviceRedirector *pFVar6;
  wchar_t *pwVar7;
  
  pwVar7 = L"";
  if (((GEngine->WorldList).Array.ArrayNum != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GetWorldContexts().Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x496,L""), bVar4)) {
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
                         ,0x497,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
  }
  pUVar2 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar6 = GetGlobalLogSingleton();
  pUVar3 = GEngine;
  if ((this->ExecCommand).Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)(this->ExecCommand).Data.AllocatorInstance.Data;
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
            pwVar7,pFVar6);
  return true;
}


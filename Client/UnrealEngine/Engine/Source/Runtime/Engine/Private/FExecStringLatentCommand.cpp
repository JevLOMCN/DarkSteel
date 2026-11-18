// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FExecStringLatentCommand @ 14880c210

void __thiscall FExecStringLatentCommand::~FExecStringLatentCommand(FExecStringLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
  pFVar3 = (this->ExecCommand).Data.AllocatorInstance.Data;
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
                    /* WARNING: Could not recover jumptable at 0x00014880c260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Update @ 14885f120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FExecStringLatentCommand::Update(FExecStringLatentCommand *this)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  FOutputDeviceRedirector *pFVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
  }
  pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  plVar4 = &pUVar1->_padding_;
  if (pUVar1 == (UGameViewportClient *)0x0) {
    plVar4 = &GEngine->_padding_;
  }
  pcVar2 = *(code **)(*plVar4 + 8);
  pFVar3 = GetGlobalLogSingleton();
  if ((this->ExecCommand).Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)(this->ExecCommand).Data.AllocatorInstance.Data;
  }
  (*pcVar2)(plVar4,0,pwVar5,pFVar3);
  return true;
}


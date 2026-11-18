// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 2

// StartupModule @ 14d702ae0

void __thiscall FStateTreeDeveloperModule::StartupModule(FStateTreeDeveloperModule *this)

{
  FStateTreeStyle *pFVar1;
  FRewindDebuggerRecordingExtension *pFVar2;
  FRewindDebuggerRecordingExtension *pFVar3;
  IModularFeatures *pIVar4;
  TUniquePtr<UE::StateTreeDebugger::FRewindDebuggerRecordingExtension,TDefaultDelete<UE::StateTreeDebugger::FRewindDebuggerRecordingExtension>_>
  *pTVar5;
  longlong local_18 [2];
  
  pFVar1 = FStateTreeStyle::Get();
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)pFVar1);
  pFVar2 = ::operator_new(8);
  pFVar3 = (FRewindDebuggerRecordingExtension *)0x0;
  if (pFVar2 != (FRewindDebuggerRecordingExtension *)0x0) {
    *pFVar2 = (FRewindDebuggerRecordingExtension)
              &___7FRewindDebuggerRecordingExtension_StateTreeDebugger_UE__6B_;
    pFVar3 = pFVar2;
  }
  pTVar5 = &this->RewindDebuggerRecordingExtension;
  if (pTVar5 == (TUniquePtr<UE::StateTreeDebugger::FRewindDebuggerRecordingExtension,TDefaultDelete<UE::StateTreeDebugger::FRewindDebuggerRecordingExtension>_>
                 *)local_18) {
    if (pFVar3 == (FRewindDebuggerRecordingExtension *)0x0) goto LAB_14d702b5b;
    *pFVar3 = (FRewindDebuggerRecordingExtension)&___7IRewindDebuggerRuntimeExtension__6B_;
  }
  else {
    pFVar2 = pTVar5->Ptr;
    pTVar5->Ptr = pFVar3;
    if (pFVar2 == (FRewindDebuggerRecordingExtension *)0x0) goto LAB_14d702b5b;
    *pFVar2 = (FRewindDebuggerRecordingExtension)&___7IRewindDebuggerRuntimeExtension__6B_;
    pFVar3 = pFVar2;
  }
  ::operator_delete(pFVar3,8);
LAB_14d702b5b:
  pIVar4 = IModularFeatures::Get();
  pFVar3 = pTVar5->Ptr + 1;
  if (pTVar5->Ptr == (FRewindDebuggerRecordingExtension *)0x0) {
    pFVar3 = (FRewindDebuggerRecordingExtension *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d702b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar4 + 0x28))
            (pIVar4,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar3,
             *(code **)((longlong)*pIVar4 + 0x28));
  return;
}

// ShutdownModule @ 14d702ba0

void __thiscall FStateTreeDeveloperModule::ShutdownModule(FStateTreeDeveloperModule *this)

{
  FRewindDebuggerRecordingExtension *pFVar1;
  FStateTreeStyle *pFVar2;
  IModularFeatures *pIVar3;
  FRewindDebuggerRecordingExtension *pFVar4;
  
  pFVar2 = FStateTreeStyle::Get();
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)pFVar2);
  pIVar3 = IModularFeatures::Get();
  pFVar1 = (this->RewindDebuggerRecordingExtension).Ptr;
  pFVar4 = pFVar1 + 1;
  if (pFVar1 == (FRewindDebuggerRecordingExtension *)0x0) {
    pFVar4 = (FRewindDebuggerRecordingExtension *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d702be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x30))
            (pIVar3,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar4,
             *(code **)((longlong)*pIVar3 + 0x30));
  return;
}


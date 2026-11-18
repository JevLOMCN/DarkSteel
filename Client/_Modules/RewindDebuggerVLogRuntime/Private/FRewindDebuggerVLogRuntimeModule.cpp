// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerVLogRuntime
// Functions: 2

// StartupModule @ 14cd8d050

void __thiscall
FRewindDebuggerVLogRuntimeModule::StartupModule(FRewindDebuggerVLogRuntimeModule *this)

{
  IModularFeatures *pIVar1;
  FRewindDebuggerVLogRuntimeModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = this + 1;
  if (this == (FRewindDebuggerVLogRuntimeModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FRewindDebuggerVLogRuntimeModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd8d082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x28))
            (pIVar1,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x28));
  return;
}

// ShutdownModule @ 14cd8d090

void __thiscall
FRewindDebuggerVLogRuntimeModule::ShutdownModule(FRewindDebuggerVLogRuntimeModule *this)

{
  IModularFeatures *pIVar1;
  FRewindDebuggerVLogRuntimeModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = this + 1;
  if (this == (FRewindDebuggerVLogRuntimeModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FRewindDebuggerVLogRuntimeModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd8d0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x30));
  return;
}


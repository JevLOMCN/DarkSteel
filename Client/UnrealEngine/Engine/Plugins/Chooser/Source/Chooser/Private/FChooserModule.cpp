// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StartupModule @ 14a874a20

void __thiscall FChooserModule::StartupModule(FChooserModule *this)

{
  IModularFeatures *pIVar1;
  FChooserModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = this + 1;
  if (this == (FChooserModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FChooserModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a874a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x28))
            (pIVar1,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x28));
  return;
}

// ShutdownModule @ 14a874a60

void __thiscall FChooserModule::ShutdownModule(FChooserModule *this)

{
  IModularFeatures *pIVar1;
  FChooserModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = this + 1;
  if (this == (FChooserModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FChooserModule *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a874a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x30));
  return;
}


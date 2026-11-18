// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Execute @ 1416390c0

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
FConsoleCommandExec::Execute
          (FConsoleCommandExec *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2,FOutputDevice *param_3)

{
  return false;
}

// Release @ 141656750

void __thiscall FConsoleCommandExec::Release(FConsoleCommandExec *this)

{
  if (this != (FConsoleCommandExec *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165675d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,1);
    return;
  }
  return;
}


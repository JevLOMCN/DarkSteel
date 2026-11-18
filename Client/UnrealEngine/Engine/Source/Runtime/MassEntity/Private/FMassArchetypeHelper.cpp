// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// DoesArchetypeMatchRequirements @ 1472146e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassArchetypeHelper::DoesArchetypeMatchRequirements
          (FMassArchetypeCompositionDescriptor *param_1,FMassFragmentRequirements *param_2)

{
  bool bVar1;
  
  bVar1 = FMassFragmentRequirements::DoesArchetypeMatchRequirements(param_2,param_1);
  return bVar1;
}

// DoesArchetypeMatchRequirements @ 147214700

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassArchetypeHelper::DoesArchetypeMatchRequirements
          (FMassArchetypeData *param_1,FMassFragmentRequirements *param_2)

{
  bool bVar1;
  
  bVar1 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                    (param_2,&param_1->CompositionDescriptor);
  return bVar1;
}

// DoesArchetypeMatchRequirements @ 147214720

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassArchetypeHelper::DoesArchetypeMatchRequirements
          (FMassArchetypeData *param_1,FMassFragmentRequirements *param_2,bool param_3,
          FOutputDevice *param_4)

{
  bool bVar1;
  FString local_18;
  
  bVar1 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                    (param_2,&param_1->CompositionDescriptor);
  if (bVar1) {
    return true;
  }
  if (param_4 != (FOutputDevice *)0x0) {
    FMassDebugger::GetArchetypeRequirementCompatibilityDescription
              (&local_18,param_2,&param_1->CompositionDescriptor);
    FOutputDevice::LogfImpl(param_4,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}


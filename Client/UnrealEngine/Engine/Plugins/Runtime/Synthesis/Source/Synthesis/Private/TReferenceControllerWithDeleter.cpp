// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// DestroyObject @ 14f0d5470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FPatch,SharedPointerInternals::DefaultDeleter<Audio::FPatch>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FPatch,SharedPointerInternals::DefaultDeleter<Audio::FPatch>,1>
                *this)

{
  FPatch *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPatch *)0x0) {
    pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<Audio::FPatchDestination,int>
              ((FPatchDestination *)(pFVar1->Destinations).AllocatorInstance.Data,
               (pFVar1->Destinations).ArrayNum);
    pFVar2 = (pFVar1->Destinations).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Source).Name.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
    return;
  }
  return;
}

// DestroyObject @ 14f0d54e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSourceEffectEnvFollowerNotifier,SharedPointerInternals::DefaultDeleter<FSourceEffectEnvFollowerNotifier>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSourceEffectEnvFollowerNotifier,SharedPointerInternals::DefaultDeleter<FSourceEffectEnvFollowerNotifier>,1>
                *this)

{
  FSourceEffectEnvFollowerNotifier *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSourceEffectEnvFollowerNotifier *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0d54f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14f0d5500

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToneGenerator,SharedPointerInternals::DefaultDeleter<FToneGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FToneGenerator,SharedPointerInternals::DefaultDeleter<FToneGenerator>,1>
                *this)

{
  FToneGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FToneGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0d5511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}


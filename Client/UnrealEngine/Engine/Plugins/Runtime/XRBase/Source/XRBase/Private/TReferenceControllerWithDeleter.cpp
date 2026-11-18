// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 2

// DestroyObject @ 14cf87500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultStereoLayers,SharedPointerInternals::DefaultDeleter<FDefaultStereoLayers>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultStereoLayers,SharedPointerInternals::DefaultDeleter<FDefaultStereoLayers>,1>
                *this)

{
  FDefaultStereoLayers *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultStereoLayers *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf87511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cf87520

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultXRCamera,SharedPointerInternals::DefaultDeleter<FDefaultXRCamera>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultXRCamera,SharedPointerInternals::DefaultDeleter<FDefaultXRCamera>,1>
                *this)

{
  FDefaultXRCamera *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultXRCamera *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf87536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&pFVar1->field_0x8 + 0xb8))(&pFVar1->field_0x8,1);
    return;
  }
  return;
}


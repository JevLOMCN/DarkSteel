// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 1

// DestroyObject @ 14de76e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStreamlineViewExtension,SharedPointerInternals::DefaultDeleter<FStreamlineViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStreamlineViewExtension,SharedPointerInternals::DefaultDeleter<FStreamlineViewExtension>,1>
                *this)

{
  FStreamlineViewExtension *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FStreamlineViewExtension *)0x0) {
    FStreamlineViewExtension::~FStreamlineViewExtension(this_00);
    ::operator_delete(this_00,0x7b0);
    return;
  }
  return;
}


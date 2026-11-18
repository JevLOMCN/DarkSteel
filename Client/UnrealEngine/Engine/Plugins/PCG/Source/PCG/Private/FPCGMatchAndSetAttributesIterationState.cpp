// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FPCGMatchAndSetAttributesIterationState @ 149be95c0

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
FPCGMatchAndSetAttributesIterationState::~FPCGMatchAndSetAttributesIterationState
          (FPCGMatchAndSetAttributesIterationState *this)

{
  if ((this->bIsPartitionOwner != false) && (this->Partition != (FPCGMatchAndSetPartition *)0x0)) {
    FPCGMatchAndSetPartition::_scalar_deleting_destructor_(this->Partition,1);
    return;
  }
  return;
}


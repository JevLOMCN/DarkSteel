// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 3

// SetDebugDrawColor @ 146d32320

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USkinnedMeshComponent::SetDebugDrawColor(USkinnedMeshComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  if ((TOptional<FLinearColor> *)param_1 != &this->DebugDrawColor) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->DebugDrawColor).TypedValue.field0_0x0 =
         *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->DebugDrawColor).TypedValue.field0_0x0 + 8) = uVar1;
    (this->DebugDrawColor).bIsSet = true;
  }
  return;
}

// SetDrawDebugSkeleton @ 146d32340

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USkinnedMeshComponent::SetDrawDebugSkeleton(USkinnedMeshComponent *this,bool param_1)

{
  this->bDrawDebugSkeleton = '\0';
  this->field_0x80b = this->field_0x80b | param_1 << 5;
  return;
}

// ShouldDrawDebugSkeleton @ 146d330b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall USkinnedMeshComponent::ShouldDrawDebugSkeleton(USkinnedMeshComponent *this)

{
  return this->bDrawDebugSkeleton;
}


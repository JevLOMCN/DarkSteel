// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 1

// TInlineComponentArray<USkeletalMeshComponent_*,5> @ 14df8c410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<USkeletalMeshComponent_*,5> * __thiscall
TInlineComponentArray<USkeletalMeshComponent_*,5>::TInlineComponentArray<USkeletalMeshComponent_*,5>
          (TInlineComponentArray<USkeletalMeshComponent_*,5> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x34 = 5;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}


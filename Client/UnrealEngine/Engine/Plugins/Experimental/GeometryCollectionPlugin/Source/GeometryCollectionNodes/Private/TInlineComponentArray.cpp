// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// TInlineComponentArray<UStaticMeshComponent_*,24> @ 14e90fa00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UStaticMeshComponent_*,24> * __thiscall
TInlineComponentArray<UStaticMeshComponent_*,24>::TInlineComponentArray<UStaticMeshComponent_*,24>
          (TInlineComponentArray<UStaticMeshComponent_*,24> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<UStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UStaticMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}


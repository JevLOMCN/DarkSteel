// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// TInlineComponentArray<UActorComponent_*,24> @ 1473781a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UActorComponent_*,24> * __thiscall
TInlineComponentArray<UActorComponent_*,24>::TInlineComponentArray<UActorComponent_*,24>
          (TInlineComponentArray<UActorComponent_*,24> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}

// TInlineComponentArray<UChildActorComponent_*,24> @ 1473781f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UChildActorComponent_*,24> * __thiscall
TInlineComponentArray<UChildActorComponent_*,24>::TInlineComponentArray<UChildActorComponent_*,24>
          (TInlineComponentArray<UChildActorComponent_*,24> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<UChildActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UChildActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}

// TInlineComponentArray<UPrimitiveComponent_*,16> @ 1478a5780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UPrimitiveComponent_*,16> * __thiscall
TInlineComponentArray<UPrimitiveComponent_*,16>::TInlineComponentArray<UPrimitiveComponent_*,16>
          (TInlineComponentArray<UPrimitiveComponent_*,16> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x8c = 0x10;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UPrimitiveComponent_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}

// TInlineComponentArray<UPrimitiveComponent_*,24> @ 147928140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UPrimitiveComponent_*,24> * __thiscall
TInlineComponentArray<UPrimitiveComponent_*,24>::TInlineComponentArray<UPrimitiveComponent_*,24>
          (TInlineComponentArray<UPrimitiveComponent_*,24> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}

// TInlineComponentArray<UMeshComponent_*,24> @ 147ab9cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UMeshComponent_*,24> * __thiscall
TInlineComponentArray<UMeshComponent_*,24>::TInlineComponentArray<UMeshComponent_*,24>
          (TInlineComponentArray<UMeshComponent_*,24> *this,AActor *param_1,bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::GetComponents<UMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}

// TInlineComponentArray<UClusterUnionReplicatedProxyComponent_*,24> @ 14824da00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineComponentArray<UClusterUnionReplicatedProxyComponent_*,24> * __thiscall
TInlineComponentArray<UClusterUnionReplicatedProxyComponent_*,24>::
TInlineComponentArray<UClusterUnionReplicatedProxyComponent_*,24>
          (TInlineComponentArray<UClusterUnionReplicatedProxyComponent_*,24> *this,AActor *param_1,
          bool param_2)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0x18;
  if (param_1 != (AActor *)0x0) {
    AActor::
    GetComponents<UClusterUnionReplicatedProxyComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<UClusterUnionReplicatedProxyComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)this,param_2);
  }
  return this;
}


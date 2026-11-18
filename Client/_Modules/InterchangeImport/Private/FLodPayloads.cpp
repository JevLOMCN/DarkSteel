// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FLodPayloads @ 14e7080c0

FLodPayloads * __thiscall
UInterchangeStaticMeshFactory::FLodPayloads::FLodPayloads(FLodPayloads *this,FLodPayloads *param_1)

{
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
                      *)param_1);
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&this->CollisionBoxPayloadPerKey,
             (TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&param_1->CollisionBoxPayloadPerKey);
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&this->CollisionCapsulePayloadPerKey,
             (TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&param_1->CollisionCapsulePayloadPerKey);
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&this->CollisionSpherePayloadPerKey,
             (TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&param_1->CollisionSpherePayloadPerKey);
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&this->CollisionConvexPayloadPerKey,
             (TSet<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>,TDefaultMapHashableKeyFuncs<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload,0>,FDefaultSetAllocator>
              *)&param_1->CollisionConvexPayloadPerKey);
  return this;
}

// ~FLodPayloads @ 14e709670

void __thiscall UInterchangeStaticMeshFactory::FLodPayloads::~FLodPayloads(FLodPayloads *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CollisionConvexPayloadPerKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionConvexPayloadPerKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionConvexPayloadPerKey);
  *(undefined4 *)&(this->CollisionSpherePayloadPerKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionSpherePayloadPerKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionSpherePayloadPerKey);
  *(undefined4 *)&(this->CollisionCapsulePayloadPerKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionCapsulePayloadPerKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionCapsulePayloadPerKey);
  *(undefined4 *)&(this->CollisionBoxPayloadPerKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionBoxPayloadPerKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionBoxPayloadPerKey);
  *(undefined4 *)&(this->MeshPayloadPerKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MeshPayloadPerKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInterchangeMeshPayLoadKey,UE::Interchange::FMeshPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}


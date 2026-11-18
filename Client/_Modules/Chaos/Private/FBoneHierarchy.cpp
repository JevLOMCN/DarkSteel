// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FBoneHierarchy @ 1440ca970

FBoneHierarchy * __thiscall FBoneHierarchy::FBoneHierarchy(FBoneHierarchy *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->ImplicitGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImplicitGroups).ArrayNum = 0;
  (this->ImplicitGroups).ArrayMax = 0;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  (this->SocketIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketIndices).ArrayNum = 0;
  (this->SocketIndices).ArrayMax = 0;
  *(undefined8 *)&this->BoneToShapeGroup = 0;
  *(undefined8 *)&(this->BoneToShapeGroup).field_0x8 = 0;
  *(undefined8 *)&(this->BoneToShapeGroup).field_0x20 = 0;
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x28 = 0;
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x34 = 0;
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneToShapeGroup).field_0x40 = 0;
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x48 = 0;
  (this->Roots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Roots).ArrayNum = 0;
  (this->Roots).ArrayMax = 0;
  *(undefined8 *)&this->BoneToTransformIndex = 0;
  *(undefined8 *)&(this->BoneToTransformIndex).field_0x8 = 0;
  *(undefined8 *)&(this->BoneToTransformIndex).field_0x20 = 0;
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x28 = 0;
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x34 = 0;
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneToTransformIndex).field_0x40 = 0;
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x48 = 0;
  *(undefined8 *)&this->TransformToBoneIndex = 0;
  *(undefined8 *)&(this->TransformToBoneIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TransformToBoneIndex).field_0x20 = 0;
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x28 = 0;
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x34 = 0;
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransformToBoneIndex).field_0x40 = 0;
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x48 = 0;
  (this->LocalSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalSpaceTransforms).ArrayNum = 0;
  (this->LocalSpaceTransforms).ArrayMax = 0;
  (this->WorldSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldSpaceTransforms).ArrayNum = 0;
  (this->WorldSpaceTransforms).ArrayMax = 0;
  (this->PrevWorldSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevWorldSpaceTransforms).ArrayNum = 0;
  (this->PrevWorldSpaceTransforms).ArrayMax = 0;
  (this->AnimDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimDirty).ArrayNum = 0;
  (this->AnimDirty).ArrayMax = 0;
  (this->ParentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentIndices).ArrayNum = 0;
  (this->ParentIndices).ArrayMax = 0;
  (this->ChildIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildIndices).ArrayNum = 0;
  (this->ChildIndices).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ActorLocalToWorld).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ActorLocalToWorld).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorLocalToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ActorLocalToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ActorLocalToWorld).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorLocalToWorld).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorLocalToWorld).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ActorLocalToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ActorLocalToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ActorLocalToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->ActorLocalToWorldDirty = false;
  (this->TempTargetIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempTargetIndices).ArrayNum = 0;
  (this->TempTargetIndices).ArrayMax = 0;
  return this;
}

// ~FBoneHierarchy @ 1440cd510

void __thiscall FBoneHierarchy::~FBoneHierarchy(FBoneHierarchy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TempTargetIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->ChildIndices).AllocatorInstance.Data,
             (this->ChildIndices).ArrayNum);
  pFVar1 = (this->ChildIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimDirty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevWorldSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TransformToBoneIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TransformToBoneIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransformToBoneIndex);
  *(undefined4 *)&(this->BoneToTransformIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoneToTransformIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneToTransformIndex);
  pFVar1 = (this->Roots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BoneToShapeGroup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoneToShapeGroup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FAnalyticImplicitGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FAnalyticImplicitGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FAnalyticImplicitGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneToShapeGroup);
  pFVar1 = (this->SocketIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int>
            ((TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> *)
             (this->ImplicitGroups).AllocatorInstance.Data,(this->ImplicitGroups).ArrayNum);
  pFVar1 = (this->ImplicitGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}


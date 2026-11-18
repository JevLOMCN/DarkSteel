// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRayTracingInstance @ 1479a3bb0

FRayTracingInstance * __thiscall
FRayTracingInstance::FRayTracingInstance(FRayTracingInstance *this,FRayTracingInstance *param_1)

{
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FMeshBatch *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  
  pTVar1 = &this->Materials;
  this->Geometry = param_1->Geometry;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Materials).ArrayMax;
  iVar5 = (param_1->Materials).ArrayNum;
  pFVar6 = (FMeshBatch *)(param_1->Materials).AllocatorInstance.Data;
  (this->Materials).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FMeshBatch,FMeshBatch,int>((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
  }
  iVar5 = (param_1->MaterialsView).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->MaterialsView).field_0xc;
  pTVar3 = &this->PrimitiveInstanceIndices;
  (this->MaterialsView).DataPtr = (param_1->MaterialsView).DataPtr;
  (this->MaterialsView).ArrayNum = iVar5;
  *(undefined4 *)&(this->MaterialsView).field_0xc = uVar8;
  this->bApplyLocalBoundsTransform = param_1->bApplyLocalBoundsTransform;
  this->bThinGeometry = param_1->bThinGeometry;
  this->InstanceLayer = param_1->InstanceLayer;
  this->bInstanceMaskAndFlagsDirty = param_1->bInstanceMaskAndFlagsDirty;
  this->NumTransforms = param_1->NumTransforms;
  piVar2 = &(this->PrimitiveInstanceIndices).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PrimitiveInstanceIndices).ArrayNum;
  pFVar7 = (param_1->PrimitiveInstanceIndices).AllocatorInstance.Data;
  (this->PrimitiveInstanceIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
  }
  iVar5 = (param_1->PrimitiveInstanceIndicesView).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->PrimitiveInstanceIndicesView).field_0xc;
  pTVar4 = &this->InstanceTransforms;
  piVar2 = &(this->InstanceTransforms).ArrayMax;
  (this->PrimitiveInstanceIndicesView).DataPtr = (param_1->PrimitiveInstanceIndicesView).DataPtr;
  (this->PrimitiveInstanceIndicesView).ArrayNum = iVar5;
  *(undefined4 *)&(this->PrimitiveInstanceIndicesView).field_0xc = uVar8;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->InstanceTransforms).ArrayNum;
  pFVar7 = (param_1->InstanceTransforms).AllocatorInstance.Data;
  (this->InstanceTransforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 7);
  }
  iVar5 = (param_1->InstanceTransformsView).ArrayNum;
  uVar8 = *(undefined4 *)&(param_1->InstanceTransformsView).field_0xc;
  (this->InstanceTransformsView).DataPtr = (param_1->InstanceTransformsView).DataPtr;
  (this->InstanceTransformsView).ArrayNum = iVar5;
  *(undefined4 *)&(this->InstanceTransformsView).field_0xc = uVar8;
  return this;
}


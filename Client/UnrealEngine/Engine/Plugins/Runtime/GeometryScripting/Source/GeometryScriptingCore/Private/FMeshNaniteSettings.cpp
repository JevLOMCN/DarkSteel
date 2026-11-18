// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FMeshNaniteSettings @ 14cda58d0

FMeshNaniteSettings * __thiscall
FMeshNaniteSettings::FMeshNaniteSettings(FMeshNaniteSettings *this,FMeshNaniteSettings *param_1)

{
  TArray<FMeshDisplacementMap,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNaniteAssemblyData *pFVar3;
  int iVar4;
  FMeshDisplacementMap *pFVar5;
  FNaniteAssemblyPart *pFVar6;
  FNaniteAssemblyNode *pFVar7;
  TArray<FNaniteAssemblyNode,TSizedDefaultAllocator<32>_> *pTVar8;
  byte bVar9;
  
  pTVar1 = &this->DisplacementMaps;
  bVar9 = (this->bEnabled ^ param_1->bEnabled) & 1 ^ *(byte *)this;
  *(byte *)this = bVar9;
  bVar9 = (bVar9 ^ *(byte *)param_1) & 2 ^ bVar9;
  *(byte *)this = bVar9;
  bVar9 = (bVar9 ^ *(byte *)param_1) & 4 ^ bVar9;
  *(byte *)this = bVar9;
  bVar9 = (bVar9 ^ *(byte *)param_1) & 8 ^ bVar9;
  *(byte *)this = bVar9;
  bVar9 = (bVar9 ^ *(byte *)param_1) & 0x10 ^ bVar9;
  *(byte *)this = bVar9;
  *(byte *)this = (bVar9 ^ *(byte *)param_1) & 0x20 ^ bVar9;
  this->ShapePreservation = param_1->ShapePreservation;
  this->PositionPrecision = param_1->PositionPrecision;
  this->NormalPrecision = param_1->NormalPrecision;
  this->TangentPrecision = param_1->TangentPrecision;
  this->BoneWeightPrecision = param_1->BoneWeightPrecision;
  this->TargetMinimumResidencyInKB = param_1->TargetMinimumResidencyInKB;
  this->KeepPercentTriangles = param_1->KeepPercentTriangles;
  this->TrimRelativeError = param_1->TrimRelativeError;
  this->GenerateFallback = param_1->GenerateFallback;
  this->FallbackTarget = param_1->FallbackTarget;
  this->FallbackPercentTriangles = param_1->FallbackPercentTriangles;
  this->FallbackRelativeError = param_1->FallbackRelativeError;
  this->MaxEdgeLengthFactor = param_1->MaxEdgeLengthFactor;
  this->NumRays = param_1->NumRays;
  this->VoxelLevel = param_1->VoxelLevel;
  this->RayBackUp = param_1->RayBackUp;
  this->DisplacementUVChannel = param_1->DisplacementUVChannel;
  piVar2 = &(this->DisplacementMaps).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->DisplacementMaps).ArrayNum;
  pFVar5 = (FMeshDisplacementMap *)(param_1->DisplacementMaps).AllocatorInstance.Data;
  (this->DisplacementMaps).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FMeshDisplacementMap,FMeshDisplacementMap,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pFVar3 = &this->NaniteAssemblyData;
  (pFVar3->Parts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NaniteAssemblyData).Parts.ArrayMax;
  iVar4 = (param_1->NaniteAssemblyData).Parts.ArrayNum;
  pFVar6 = (FNaniteAssemblyPart *)(param_1->NaniteAssemblyData).Parts.AllocatorInstance.Data;
  (this->NaniteAssemblyData).Parts.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,(ForAnyElementType *)pFVar3,iVar4,piVar2);
    ConstructItems<FNaniteAssemblyPart,FNaniteAssemblyPart,int>
              ((pFVar3->Parts).AllocatorInstance.Data,pFVar6,iVar4);
  }
  pTVar8 = &(this->NaniteAssemblyData).Nodes;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NaniteAssemblyData).Nodes.ArrayMax;
  iVar4 = (param_1->NaniteAssemblyData).Nodes.ArrayNum;
  pFVar7 = (FNaniteAssemblyNode *)(param_1->NaniteAssemblyData).Nodes.AllocatorInstance.Data;
  (this->NaniteAssemblyData).Nodes.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar4,0,&pTVar8->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNaniteAssemblyNode,FNaniteAssemblyNode,int>
              ((pTVar8->AllocatorInstance).Data,pFVar7,iVar4);
  }
  return this;
}


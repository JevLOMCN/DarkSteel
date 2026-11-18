// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147ba2b00

UScriptStruct * __cdecl FMeshNaniteSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshNaniteSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshNaniteSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshNaniteSettings,(UObject *)pUVar1,
                         L"MeshNaniteSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshNaniteSettings.OuterSingleton;
}

// operator= @ 147cca370

FMeshNaniteSettings * __thiscall
FMeshNaniteSettings::operator=(FMeshNaniteSettings *this,FMeshNaniteSettings *param_1)

{
  TArray<FMeshDisplacementMap,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNaniteAssemblyData *pFVar3;
  int iVar4;
  int iVar5;
  FMeshDisplacementMap *pFVar6;
  FNaniteAssemblyPart *pFVar7;
  FNaniteAssemblyNode *pFVar8;
  TArray<FNaniteAssemblyNode,TSizedDefaultAllocator<32>_> *pTVar9;
  byte bVar10;
  TArray<FNaniteAssemblyNode,TSizedDefaultAllocator<32>_> *pTVar11;
  
  bVar10 = (this->bEnabled ^ param_1->bEnabled) & 1 ^ *(byte *)this;
  *(byte *)this = bVar10;
  pTVar1 = &this->DisplacementMaps;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 2 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 4 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 8 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x10 ^ bVar10;
  *(byte *)this = bVar10;
  *(byte *)this = (bVar10 ^ *(byte *)param_1) & 0x20 ^ bVar10;
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
  if (pTVar1 != &param_1->DisplacementMaps) {
    iVar4 = (param_1->DisplacementMaps).ArrayNum;
    piVar2 = &(this->DisplacementMaps).ArrayMax;
    pFVar6 = (FMeshDisplacementMap *)(param_1->DisplacementMaps).AllocatorInstance.Data;
    (this->DisplacementMaps).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FMeshDisplacementMap,FMeshDisplacementMap,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  pFVar3 = &this->NaniteAssemblyData;
  if (pFVar3 != &param_1->NaniteAssemblyData) {
    DestructItems<FNaniteAssemblyPart,int>
              ((FNaniteAssemblyPart *)(pFVar3->Parts).AllocatorInstance.Data,
               (this->NaniteAssemblyData).Parts.ArrayNum);
    iVar4 = (param_1->NaniteAssemblyData).Parts.ArrayNum;
    piVar2 = &(this->NaniteAssemblyData).Parts.ArrayMax;
    pFVar7 = (FNaniteAssemblyPart *)(param_1->NaniteAssemblyData).Parts.AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->NaniteAssemblyData).Parts.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,piVar2);
      ConstructItems<FNaniteAssemblyPart,FNaniteAssemblyPart,int>
                ((pFVar3->Parts).AllocatorInstance.Data,pFVar7,iVar4);
    }
  }
  pTVar11 = &(param_1->NaniteAssemblyData).Nodes;
  pTVar9 = &(this->NaniteAssemblyData).Nodes;
  if (pTVar9 != pTVar11) {
    DestructItems<FNaniteAssemblyNode,int>
              ((FNaniteAssemblyNode *)(pTVar9->AllocatorInstance).Data,
               (this->NaniteAssemblyData).Nodes.ArrayNum);
    iVar4 = (param_1->NaniteAssemblyData).Nodes.ArrayNum;
    piVar2 = &(this->NaniteAssemblyData).Nodes.ArrayMax;
    pFVar8 = (FNaniteAssemblyNode *)(pTVar11->AllocatorInstance).Data;
    iVar5 = *piVar2;
    (this->NaniteAssemblyData).Nodes.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar4,iVar5,&pTVar9->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FNaniteAssemblyNode,FNaniteAssemblyNode,int>
                ((pTVar9->AllocatorInstance).Data,pFVar8,iVar4);
    }
  }
  return this;
}

// operator== @ 147fabdd0

bool __thiscall
FMeshNaniteSettings::operator==(FMeshNaniteSettings *this,FMeshNaniteSettings *param_1)

{
  undefined1 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar2 = (this->DisplacementMaps).ArrayNum;
  if (iVar2 == (param_1->DisplacementMaps).ArrayNum) {
    uVar9 = 0;
    if (0 < iVar2) {
      lVar10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar9 < (this->DisplacementMaps).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar3 = (this->DisplacementMaps).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar9 < (param_1->DisplacementMaps).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar4 = (param_1->DisplacementMaps).AllocatorInstance.Data;
        if (*(longlong *)(pFVar3 + lVar10) != *(longlong *)(pFVar4 + lVar10)) {
          return false;
        }
        if (*(float *)(pFVar4 + lVar10 + 8) != *(float *)(pFVar3 + lVar10 + 8)) {
          return false;
        }
        if (*(float *)(pFVar4 + lVar10 + 0xc) != *(float *)(pFVar3 + lVar10 + 0xc)) {
          return false;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->DisplacementMaps).ArrayNum);
    }
    uVar7 = *(undefined1 *)this;
    uVar1 = *(undefined1 *)param_1;
    if (((((((((((undefined1 *)this)->bEnabled ^ ((undefined1 *)param_1)->bEnabled) & 1) == 0) &&
            (((uVar1 ^ uVar7) & 2) == 0)) && (((uVar1 ^ uVar7) & 4) == 0)) &&
          ((this->ShapePreservation == param_1->ShapePreservation &&
           (this->PositionPrecision == param_1->PositionPrecision)))) &&
         (this->NormalPrecision == param_1->NormalPrecision)) &&
        (((((this->TangentPrecision == param_1->TangentPrecision &&
            (this->BoneWeightPrecision == param_1->BoneWeightPrecision)) &&
           ((this->TargetMinimumResidencyInKB == param_1->TargetMinimumResidencyInKB &&
            (((param_1->KeepPercentTriangles == this->KeepPercentTriangles &&
              (param_1->TrimRelativeError == this->TrimRelativeError)) &&
             (this->GenerateFallback == param_1->GenerateFallback)))))) &&
          (((this->FallbackTarget == param_1->FallbackTarget &&
            (param_1->FallbackPercentTriangles == this->FallbackPercentTriangles)) &&
           ((param_1->FallbackRelativeError == this->FallbackRelativeError &&
            ((((param_1->MaxEdgeLengthFactor == this->MaxEdgeLengthFactor &&
               (this->DisplacementUVChannel == param_1->DisplacementUVChannel)) &&
              ((this->NumRays == param_1->NumRays &&
               (((this->VoxelLevel == param_1->VoxelLevel && (param_1->RayBackUp == this->RayBackUp)
                 ) && (((uVar1 ^ uVar7) & 8) == 0)))))) &&
             ((((uVar1 ^ uVar7) & 0x10) == 0 && (((uVar1 ^ uVar7) & 0x20) == 0)))))))))) &&
         (iVar2 = (this->NaniteAssemblyData).Parts.ArrayNum,
         iVar2 == (param_1->NaniteAssemblyData).Parts.ArrayNum)))) &&
       (((bVar6 = CompareItems<FNaniteAssemblyPart,int>
                            ((FNaniteAssemblyPart *)
                             (this->NaniteAssemblyData).Parts.AllocatorInstance.Data,
                             (FNaniteAssemblyPart *)
                             (param_1->NaniteAssemblyData).Parts.AllocatorInstance.Data,iVar2),
         bVar6 && (iVar2 = (this->NaniteAssemblyData).Nodes.ArrayNum,
                  iVar2 == (param_1->NaniteAssemblyData).Nodes.ArrayNum)) &&
        (bVar6 = CompareItems<FNaniteAssemblyNode,int>
                           ((FNaniteAssemblyNode *)
                            (this->NaniteAssemblyData).Nodes.AllocatorInstance.Data,
                            (FNaniteAssemblyNode *)
                            (param_1->NaniteAssemblyData).Nodes.AllocatorInstance.Data,iVar2), bVar6
        )))) {
      return true;
    }
  }
  return false;
}


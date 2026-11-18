// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 3

// StaticStruct @ 14cd92e40

UScriptStruct * __cdecl FGeometryScriptCopyMeshToAssetOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions,
                         (UObject *)pUVar1,L"GeometryScriptCopyMeshToAssetOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions.OuterSingleton;
}

// FGeometryScriptCopyMeshToAssetOptions @ 14cda5310

FGeometryScriptCopyMeshToAssetOptions * __thiscall
FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions
          (FGeometryScriptCopyMeshToAssetOptions *this)

{
  FMeshNaniteSettings *pFVar1;
  FMeshNaniteSettings *pFVar2;
  byte bVar3;
  
  this->bEnableRecomputeNormals = false;
  this->bEnableRecomputeTangents = false;
  this->bEnableRemoveDegenerates = false;
  this->BoneHierarchyMismatchHandling = DoNothing;
  (this->NewMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMaterials).ArrayNum = 0;
  (this->NewMaterials).ArrayMax = 0;
  (this->NewMaterialSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewMaterialSlotNames).ArrayNum = 0;
  (this->NewMaterialSlotNames).ArrayMax = 0;
  this->bApplyNaniteSettings = false;
  this->bRemapBoneIndicesToMatchAsset = false;
  this->bUseOriginalVertexOrder = false;
  this->bUseBuildScale = true;
  this->bReplaceMaterials = false;
  this->GenerateLightmapUVs = MatchTargetLODSetting;
  (this->NaniteSettings).bEnabled = false;
  *(undefined3 *)&(this->NaniteSettings).field_0x1 = 0;
  (this->NaniteSettings).FallbackPercentTriangles = 0.0;
  (this->NaniteSettings).FallbackPercentTriangles = 100.0;
  (this->NaniteSettings).FallbackRelativeError = 0.0;
  (this->NaniteSettings).bEnabled = true;
  pFVar2 = &this->NewNaniteSettings;
  pFVar2->bEnabled = '\0';
  pFVar2->bVoxelOpacity = '\0';
  pFVar2->bVoxelNDF = '\x01';
  pFVar2->bSeparable = '\0';
  pFVar2->bLerpUVs = '\x01';
  pFVar2->bExplicitTangents = '\0';
  (this->NaniteSettings).FallbackRelativeError = 0.0;
  (this->NewNaniteSettings).ShapePreservation = None;
  (this->NewNaniteSettings).PositionPrecision = -0x80000000;
  (this->NewNaniteSettings).NormalPrecision = -1;
  (this->NewNaniteSettings).TangentPrecision = -1;
  (this->NewNaniteSettings).BoneWeightPrecision = -1;
  (this->NewNaniteSettings).TargetMinimumResidencyInKB = 0;
  (this->NewNaniteSettings).KeepPercentTriangles = 1.0;
  (this->NewNaniteSettings).TrimRelativeError = 0.0;
  (this->NewNaniteSettings).GenerateFallback = PlatformDefault;
  (this->NewNaniteSettings).FallbackTarget = Auto;
  (this->NewNaniteSettings).FallbackPercentTriangles = 1.0;
  (this->NewNaniteSettings).FallbackRelativeError = 1.0;
  (this->NewNaniteSettings).MaxEdgeLengthFactor = 0.0;
  (this->NewNaniteSettings).NumRays = 0x40;
  (this->NewNaniteSettings).VoxelLevel = 0;
  (this->NewNaniteSettings).RayBackUp = 0.0;
  (this->NewNaniteSettings).DisplacementUVChannel = 0;
  (this->NewNaniteSettings).DisplacementMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NewNaniteSettings).DisplacementMaps.ArrayNum = 0;
  (this->NewNaniteSettings).DisplacementMaps.ArrayMax = 0;
  (this->NewNaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NewNaniteSettings).NaniteAssemblyData.Parts.ArrayNum = 0;
  (this->NewNaniteSettings).NaniteAssemblyData.Parts.ArrayMax = 0;
  (this->NewNaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NewNaniteSettings).NaniteAssemblyData.Nodes.ArrayNum = 0;
  (this->NewNaniteSettings).NaniteAssemblyData.Nodes.ArrayMax = 0;
  this->bEmitTransaction = true;
  this->bDeferMeshPostEditChange = false;
  return this;
}

// ~FGeometryScriptCopyMeshToAssetOptions @ 14cda6640

void __thiscall
FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions
          (FGeometryScriptCopyMeshToAssetOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNaniteAssemblyNode,int>
            ((FNaniteAssemblyNode *)
             (this->NewNaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data,
             (this->NewNaniteSettings).NaniteAssemblyData.Nodes.ArrayNum);
  pFVar1 = (this->NewNaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNaniteAssemblyPart,int>
            ((FNaniteAssemblyPart *)
             (this->NewNaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data,
             (this->NewNaniteSettings).NaniteAssemblyData.Parts.ArrayNum);
  pFVar1 = (this->NewNaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewNaniteSettings).DisplacementMaps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewMaterialSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FMeshMergingSettings @ 147cc8bb0

void __thiscall FMeshMergingSettings::~FMeshMergingSettings(FMeshMergingSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNaniteAssemblyNode,int>
            ((FNaniteAssemblyNode *)
             (this->NaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data,
             (this->NaniteSettings).NaniteAssemblyData.Nodes.ArrayNum);
  pFVar1 = (this->NaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNaniteAssemblyPart,int>
            ((FNaniteAssemblyPart *)
             (this->NaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data,
             (this->NaniteSettings).NaniteAssemblyData.Parts.ArrayNum);
  pFVar1 = (this->NaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NaniteSettings).DisplacementMaps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 147f914d0

UScriptStruct * __cdecl FMeshMergingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshMergingSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshMergingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshMergingSettings,(UObject *)pUVar1,
                         L"MeshMergingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshMergingSettings.OuterSingleton;
}

// FMeshMergingSettings @ 147fa4690

FMeshMergingSettings * __thiscall
FMeshMergingSettings::FMeshMergingSettings(FMeshMergingSettings *this)

{
  EUVOutput *_Dst;
  undefined1 *puVar1;
  undefined1 *puVar2;
  FMeshNaniteSettings *pFVar3;
  FMeshNaniteSettings *pFVar4;
  byte bVar5;
  size_t _Size;
  
  this->TargetLightMapResolution = 0x100;
  FMaterialProxySettings::FMaterialProxySettings(&this->MaterialSettings);
  _Dst = this->OutputUVs;
  this->GutterSize = 2;
  this->LODSelectionType = CalculateLOD;
  this->SpecificLOD = 0;
  puVar2 = &this->field_0xbd;
  this->bUseTextureBinning = '\0';
  this->bAllowDistanceField = '\0';
  this->bSupportRayTracing = '\x01';
  this->bIncludeImposters = '\x01';
  this->bUseLandscapeCulling = '\0';
  this->bMergeEquivalentMaterials = '\x01';
  this->bReuseMeshLightmapUVs = '\x01';
  puVar1 = &this->field_0xbc;
  this->bGenerateLightMapUV = '\x01';
  this->bUseVertexDataForBakingMaterial = '\x01';
  this->bBakeVertexDataToMesh = '\0';
  this->bMergeMaterials = '\0';
  this->bMergeMeshSockets = '\0';
  this->bMergePhysicsData = '\0';
  this->bPivotPointAtZero = '\0';
  this->bComputedLightMapResolution = '\0';
  (this->NaniteSettings).ShapePreservation = None;
  pFVar4 = &this->NaniteSettings;
  pFVar4->bEnabled = '\0';
  pFVar4->bVoxelOpacity = '\0';
  pFVar4->bVoxelNDF = '\x01';
  pFVar4->bSeparable = '\0';
  pFVar4->bLerpUVs = '\x01';
  pFVar4->bExplicitTangents = '\0';
  (this->NaniteSettings).PositionPrecision = -0x80000000;
  (this->NaniteSettings).NormalPrecision = -1;
  (this->NaniteSettings).TangentPrecision = -1;
  (this->NaniteSettings).BoneWeightPrecision = -1;
  _Size = 8;
  if (&this->field_0xc < _Dst) {
    _Size = 0;
  }
  (this->NaniteSettings).TargetMinimumResidencyInKB = 0;
  (this->NaniteSettings).KeepPercentTriangles = 1.0;
  (this->NaniteSettings).TrimRelativeError = 0.0;
  (this->NaniteSettings).GenerateFallback = PlatformDefault;
  (this->NaniteSettings).FallbackTarget = Auto;
  (this->NaniteSettings).FallbackPercentTriangles = 1.0;
  (this->NaniteSettings).FallbackRelativeError = 1.0;
  (this->NaniteSettings).MaxEdgeLengthFactor = 0.0;
  (this->NaniteSettings).NumRays = 0x40;
  (this->NaniteSettings).VoxelLevel = 0;
  (this->NaniteSettings).RayBackUp = 0.0;
  (this->NaniteSettings).DisplacementUVChannel = 0;
  (this->NaniteSettings).DisplacementMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteSettings).DisplacementMaps.ArrayNum = 0;
  (this->NaniteSettings).DisplacementMaps.ArrayMax = 0;
  (this->NaniteSettings).NaniteAssemblyData.Parts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteSettings).NaniteAssemblyData.Parts.ArrayNum = 0;
  (this->NaniteSettings).NaniteAssemblyData.Parts.ArrayMax = 0;
  (this->NaniteSettings).NaniteAssemblyData.Nodes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteSettings).NaniteAssemblyData.Nodes.ArrayNum = 0;
  (this->NaniteSettings).NaniteAssemblyData.Nodes.ArrayMax = 0;
  this->MergeType = MeshMergeType_Default;
  if (_Dst <= &this->field_0xc) {
    memset(_Dst,1,_Size);
  }
  return this;
}


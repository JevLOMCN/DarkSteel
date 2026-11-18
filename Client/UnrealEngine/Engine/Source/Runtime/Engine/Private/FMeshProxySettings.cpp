// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FMeshProxySettings @ 147cc8c30

void __thiscall FMeshProxySettings::~FMeshProxySettings(FMeshProxySettings *this)

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

// StaticStruct @ 147f91780

UScriptStruct * __cdecl FMeshProxySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshProxySettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshProxySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshProxySettings,(UObject *)pUVar1,
                         L"MeshProxySettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshProxySettings.OuterSingleton;
}

// FMeshProxySettings @ 147fa47b0

FMeshProxySettings * __thiscall FMeshProxySettings::FMeshProxySettings(FMeshProxySettings *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FMeshNaniteSettings *pFVar3;
  FMeshNaniteSettings *pFVar4;
  byte bVar5;
  
  this->ScreenSize = 300;
  this->VoxelSize = 3.0;
  FMaterialProxySettings::FMaterialProxySettings(&this->MaterialSettings);
  this->MergeDistance = 0.0;
  (this->UnresolvedGeometryColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  this->NormalCalculationMethod = '\0';
  this->LandscapeCullingPrecision = '\x01';
  (this->NaniteSettings).ShapePreservation = None;
  puVar2 = &this->field_0xbf;
  this->bAllowDistanceField = '\0';
  this->bGenerateLightmapUVs = '\0';
  this->bAllowVertexColors = '\0';
  this->bCreateCollision = '\x01';
  this->bGroupIdenticalMeshesForBaking = '\0';
  this->bReuseMeshLightmapUVs = '\x01';
  (this->NaniteSettings).PositionPrecision = -0x80000000;
  (this->NaniteSettings).NormalPrecision = -1;
  (this->NaniteSettings).TangentPrecision = -1;
  (this->NaniteSettings).BoneWeightPrecision = -1;
  pFVar4 = &this->NaniteSettings;
  pFVar4->bEnabled = '\0';
  pFVar4->bVoxelOpacity = '\0';
  pFVar4->bVoxelNDF = '\x01';
  pFVar4->bSeparable = '\0';
  pFVar4->bLerpUVs = '\x01';
  pFVar4->bExplicitTangents = '\0';
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
  (this->MaterialSettings).MaterialMergeType.Value = '\x01';
  this->MaxRayCastDist = 20.0;
  this->HardAngleThreshold = 130.0;
  this->LightMapResolution = 0x100;
  puVar1 = &this->field_0xbe;
  this->bCalculateCorrectLODModel = '\0';
  this->bSupportRayTracing = '\x01';
  this->bUseLandscapeCulling = '\0';
  this->bRecalculateNormals = '\x01';
  this->bComputeLightMapResolution = '\0';
  this->bUseHardAngleThreshold = '\0';
  this->bOverrideTransferDistance = '\0';
  this->bOverrideVoxelSize = '\0';
  return this;
}

// operator== @ 147fac060

bool __thiscall FMeshProxySettings::operator==(FMeshProxySettings *this,FMeshProxySettings *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  
  if ((this->ScreenSize == param_1->ScreenSize) && (param_1->VoxelSize == this->VoxelSize)) {
    bVar3 = FMaterialProxySettings::operator==(&this->MaterialSettings,&param_1->MaterialSettings);
    if (((bVar3) &&
        ((((param_1->MergeDistance == this->MergeDistance &&
           ((this->UnresolvedGeometryColor).field0_0x0.Bits ==
            (param_1->UnresolvedGeometryColor).field0_0x0.Bits)) &&
          (param_1->MaxRayCastDist == this->MaxRayCastDist)) &&
         ((param_1->HardAngleThreshold == this->HardAngleThreshold &&
          (this->LightMapResolution == param_1->LightMapResolution)))))) &&
       (((this->NormalCalculationMethod).Value == (param_1->NormalCalculationMethod).Value &&
        ((this->LandscapeCullingPrecision).Value == (param_1->LandscapeCullingPrecision).Value)))) {
      uVar1 = this->field_0xbe;
      uVar2 = param_1->field_0xbe;
      if ((((((this->bCalculateCorrectLODModel ^ param_1->bCalculateCorrectLODModel) & 1) == 0) &&
           (((uVar2 ^ uVar1) & 2) == 0)) &&
          ((((uVar2 ^ uVar1) & 4) == 0 &&
           (((((uVar2 ^ uVar1) & 8) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)) &&
            (((uVar2 ^ uVar1) & 0x20) == 0)))))) &&
         ((((uVar2 ^ uVar1) & 0x40) == 0 && (-1 < (char)(uVar2 ^ uVar1))))) {
        uVar1 = this->field_0xbf;
        uVar2 = param_1->field_0xbf;
        if ((((this->bAllowDistanceField ^ param_1->bAllowDistanceField) & 1) == 0) &&
           (((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)) &&
            ((((uVar2 ^ uVar1) & 8) == 0 &&
             ((((uVar2 ^ uVar1) & 0x10) == 0 && (((uVar2 ^ uVar1) & 0x20) == 0)))))))) {
          bVar3 = FMeshNaniteSettings::operator==(&this->NaniteSettings,&param_1->NaniteSettings);
          if (bVar3) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// operator!= @ 147fad0f0

bool __thiscall FMeshProxySettings::operator!=(FMeshProxySettings *this,FMeshProxySettings *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}


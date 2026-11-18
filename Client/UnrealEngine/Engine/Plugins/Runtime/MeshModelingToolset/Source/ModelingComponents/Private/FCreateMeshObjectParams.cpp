// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticStruct @ 14caae610

UScriptStruct * __cdecl FCreateMeshObjectParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateMeshObjectParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UScriptStruct_FCreateMeshObjectParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateMeshObjectParams,(UObject *)pUVar1,
                         L"CreateMeshObjectParams");
  }
  return Z_Registration_Info_UScriptStruct_FCreateMeshObjectParams.OuterSingleton;
}

// FCreateMeshObjectParams @ 14cac91c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCreateMeshObjectParams * __thiscall
FCreateMeshObjectParams::FCreateMeshObjectParams(FCreateMeshObjectParams *this,bool param_1)

{
  FMeshNaniteSettings *pFVar1;
  FMeshNaniteSettings *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  FCreateMeshObjectParams *pFVar10;
  UClass *this_00;
  
  (this->SourceComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->TypeHintClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TargetWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  this->TypeHint = Undefined;
  this->TypeHintExtended = 0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar6;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar5;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  (this->BaseName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseName).Data.ArrayNum = 0;
  (this->BaseName).Data.ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->AssetMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetMaterials).ArrayNum = 0;
  (this->AssetMaterials).ArrayMax = 0;
  this->bEnableCollision = true;
  this->CollisionMode = '\x03';
  (this->CollisionShapeSet).bIsSet = false;
  this->bEnableRaytracingSupport = true;
  this->bGenerateLightmapUVs = false;
  this->bEnableRecomputeNormals = false;
  this->bEnableRecomputeTangents = false;
  this->bEnableNanite = false;
  this->NaniteProxyTrianglePercent_DEPRECATED = 100.0;
  pFVar2 = &this->NaniteSettings;
  pFVar2->bEnabled = '\0';
  pFVar2->bVoxelOpacity = '\0';
  pFVar2->bVoxelNDF = '\x01';
  pFVar2->bSeparable = '\0';
  pFVar2->bLerpUVs = '\x01';
  pFVar2->bExplicitTangents = '\0';
  (this->NaniteSettings).ShapePreservation = None;
  (this->NaniteSettings).PositionPrecision = -0x80000000;
  (this->NaniteSettings).NormalPrecision = -1;
  (this->NaniteSettings).TangentPrecision = -1;
  (this->NaniteSettings).BoneWeightPrecision = -1;
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
  this->MeshType = MeshDescription;
  (this->MeshDescription).bIsSet = false;
  (this->DynamicMesh).bIsSet = false;
  pTVar8 = CVarConstructMeshObjectsWithoutModelingComponentSettings.Ref;
  if (!param_1) {
    return this;
  }
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FCreateMeshObjectParams *)(*pcVar4)();
        return pFVar10;
      }
    }
  }
  if (pTVar8->ShadowedValue[0] == false) {
    this_00 = UModelingComponentsSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 != (UObject *)0x0) {
      this->bEnableCollision = (bool)pUVar3[1].field_0x13;
      (this->CollisionMode).Value = pUVar3[1].field_0x14;
      this->bGenerateLightmapUVs = (bool)pUVar3[1].field_0x12;
      this->bEnableRaytracingSupport = (bool)pUVar3[1].field_0x11;
    }
  }
  return this;
}

// ~FCreateMeshObjectParams @ 14cad1770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FCreateMeshObjectParams::~FCreateMeshObjectParams(FCreateMeshObjectParams *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->DynamicMesh).bIsSet != false) {
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&(this->DynamicMesh).TypedValue);
  }
  if ((this->MeshDescription).bIsSet != false) {
    FMeshDescription::~FMeshDescription(&(this->MeshDescription).TypedValue);
  }
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
  }
  if ((this->CollisionShapeSet).bIsSet != false) {
    UE::Geometry::FSimpleShapeSet3d::~FSimpleShapeSet3d(&(this->CollisionShapeSet).TypedValue);
  }
  pFVar1 = (this->AssetMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SetMesh @ 14cb36f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCreateMeshObjectParams::SetMesh(FCreateMeshObjectParams *this,FMeshDescription *param_1)

{
  TOptional<FMeshDescription> *this_00;
  
  this_00 = &this->MeshDescription;
  if ((TOptional<FMeshDescription> *)param_1 != this_00) {
    if ((this->MeshDescription).bIsSet != false) {
      FMeshDescription::~FMeshDescription(&this_00->TypedValue);
    }
    FMeshDescription::FMeshDescription(&this_00->TypedValue,param_1);
    (this->MeshDescription).bIsSet = true;
    this->MeshType = MeshDescription;
    return;
  }
  this->MeshType = MeshDescription;
  return;
}

// SetMesh @ 14cb37000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCreateMeshObjectParams::SetMesh(FCreateMeshObjectParams *this,FDynamicMesh3 *param_1)

{
  TOptional<UE::Geometry::FDynamicMesh3> *this_00;
  bool bVar1;
  
  this_00 = &this->DynamicMesh;
  if ((TOptional<UE::Geometry::FDynamicMesh3> *)param_1 != this_00) {
    if ((this->DynamicMesh).bIsSet != false) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this_00->TypedValue);
    }
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this_00->TypedValue,param_1);
    (this->DynamicMesh).bIsSet = true;
  }
  bVar1 = (this->DynamicMesh).bIsSet;
  this->MeshType = DynamicMesh;
  if (bVar1 != false) {
    UE::Geometry::FNonManifoldMappingSupport::RemoveNonManifoldVertexMappingData
              (&this_00->TypedValue);
  }
  return;
}

// SetMesh @ 14cb37080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCreateMeshObjectParams::SetMesh(FCreateMeshObjectParams *this,FDynamicMesh3 *param_1)

{
  TOptional<UE::Geometry::FDynamicMesh3> *this_00;
  bool bVar1;
  
  this_00 = &this->DynamicMesh;
  if ((TOptional<UE::Geometry::FDynamicMesh3> *)param_1 != this_00) {
    if ((this->DynamicMesh).bIsSet != false) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this_00->TypedValue);
    }
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this_00->TypedValue,param_1);
    (this->DynamicMesh).bIsSet = true;
  }
  bVar1 = (this->DynamicMesh).bIsSet;
  this->MeshType = DynamicMesh;
  if (bVar1 != false) {
    UE::Geometry::FNonManifoldMappingSupport::RemoveNonManifoldVertexMappingData
              (&this_00->TypedValue);
  }
  return;
}


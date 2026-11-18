// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Defaults @ 147b4fa10

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::Defaults(FPrimitiveUniformShaderParametersBuilder *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->bHoldout = 0;
  this->bIsFirstPerson = 0;
  this->bHasPerClusterDisplacementFallbackRaster = 0;
  this->bRayTracingHasGroupId = 0;
  this->bRayTracingFarField = 0;
  this->bHasPixelAnimation = 0;
  this->bAllowInstanceCullingOcclusionQueries = 0;
  this->bSkinnedMesh = 0;
  this->bSplineMesh = 0;
  this->bDisableMaterialInvalidations = 0;
  this->ObjectRadius = 0.0;
  (this->Parameters).MaxWPOExtent = 0.0;
  (this->Parameters).MinMaterialDisplacement = 0.0;
  (this->Parameters).MaxMaterialDisplacement = 0.0;
  (this->Parameters).LightmapDataIndex = 0;
  (this->Parameters).LightmapUVIndex = 0xffffffff;
  (this->Parameters).SingleCaptureIndex = -1;
  (this->Parameters).PersistentPrimitiveIndex = -1;
  (this->Parameters).PrimitiveComponentId = 0xffffffff;
  (this->Parameters).NaniteResourceID = 0xffffffff;
  (this->Parameters).NaniteHierarchyOffset = 0xffffffff;
  (this->Parameters).NaniteAssemblyTransformOffset = 0xffffffff;
  (this->Parameters).PackedNaniteFlags = 0xffffff;
  (this->Parameters).NaniteRayTracingDataOffset = 0xffffffff;
  (this->Parameters).InstanceSceneDataOffset = 0xffffffff;
  (this->Parameters).NumInstanceSceneDataEntries = 0;
  (this->Parameters).InstancePayloadDataOffset = 0xffffffff;
  (this->Parameters).InstancePayloadDataStride = 0;
  (this->Parameters).InstancePayloadExtensionSize = 0;
  (this->Parameters).MeshPaintTextureDescriptor.field0_0x0 = (TIntVector2<unsigned_int>_u_0)0x0;
  (this->Parameters).MaterialCacheDescriptor = 0;
  (this->Parameters).WireframeAndPrimitiveColor.field0_0x0 = (TVector2<float>_u_0)0xffffff00ffffff00
  ;
  puVar2 = &this->field_0x454;
  this->LightingChannels = 1;
  this->bReverseCulling = 0;
  this->bHasAlwaysEvaluateWPOMaterials = 0;
  this->bHasWPODisableDistance = 0;
  this->bHasInstanceDrawDistanceCull = 0;
  this->bHasNaniteImposter = 0;
  this->bForceHidden = 0;
  this->bHiddenInSceneCapture = 0;
  this->bVisibleInSceneCaptureOnly = 0;
  this->bVisibleInLumenScene = 1;
  this->bVisibleInRayTracing = 1;
  this->bVisibleInRealTimeSkyCaptures = 1;
  this->bVisibleInReflectionCaptures = 1;
  this->bVisibleInMainPass = 1;
  this->bVisibleInEditor = 1;
  this->bVisibleInGame = 1;
  this->bHasPreviousLocalToWorld = 0;
  this->bHasInstanceLocalBounds = 0;
  this->bHasPreSkinnedLocalBounds = 0;
  this->bHasCapsuleRepresentation = 0;
  this->bHasRayTracingRepresentation = 0;
  this->bCastHiddenShadow = 0;
  this->bCastContactShadow = 1;
  this->bCastShadow = 1;
  this->bEvaluateWorldPositionOffset = 1;
  this->bOutputVelocity = 0;
  this->bUseVolumetricLightmap = 0;
  this->bUseSingleSampleShadowFromStationaryLights = 0;
  this->bReceivesDecals = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[1].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[2].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[2].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[3].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[3].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[4].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[4].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[5].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[5].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[6].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[6].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[7].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[7].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[8].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[8].field0_0x0 + 8) = 0;
  this->bHasCustomData = 0;
  return this;
}

// CustomPrimitiveData @ 148106910

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::CustomPrimitiveData
          (FPrimitiveUniformShaderParametersBuilder *this,FCustomPrimitiveData *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (FCustomPrimitiveData *)0x0) && (iVar1 = (param_1->Data).ArrayNum, iVar1 != 0)) {
    iVar2 = 0x24;
    if (iVar1 < 0x24) {
      iVar2 = iVar1;
    }
    memcpy(&(this->Parameters).CustomPrimitiveData,(param_1->Data).AllocatorInstance.Data,
           (ulonglong)(uint)(iVar2 << 2));
    this->bHasCustomData = 1;
    return this;
  }
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[1].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[2].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[2].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[3].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[3].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[4].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[4].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[5].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[5].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[6].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[6].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[7].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[7].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Parameters).CustomPrimitiveData.Elements[8].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Parameters).CustomPrimitiveData.Elements[8].field0_0x0 + 8) = 0;
  this->bHasCustomData = 0;
  return this;
}

// InstanceDrawDistance @ 14840f140

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::InstanceDrawDistance
          (FPrimitiveUniformShaderParametersBuilder *this,TVector2<float> param_1)

{
  TVector2<float>_u_0 TVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  float local_res10;
  float fStackX_14;
  
  pFVar2 = GetCachedScalabilityCVars();
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  local_res10 = local_res10 * pFVar2->ViewDistanceScale;
  fStackX_14 = fStackX_14 * pFVar2->ViewDistanceScale;
  this->bHasInstanceDrawDistanceCull = 1;
  TVar1._s_0.Y = fStackX_14 * fStackX_14;
  TVar1._s_0.X = local_res10 * local_res10;
  (this->Parameters).InstanceDrawDistanceMinMaxSquared.field0_0x0 = TVar1;
  return this;
}

// InstanceWorldPositionOffsetDisableDistance @ 14840f1d0

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::InstanceWorldPositionOffsetDisableDistance
          (FPrimitiveUniformShaderParametersBuilder *this,float param_1)

{
  FCachedSystemScalabilityCVars *pFVar1;
  float fVar2;
  
  pFVar1 = GetCachedScalabilityCVars();
  fVar2 = param_1 * pFVar1->ViewDistanceScale;
  this->bHasWPODisableDistance = 1;
  (this->Parameters).InstanceWPODisableDistanceSquared = fVar2 * fVar2;
  return this;
}

// NaniteAssemblyInfo @ 148412e60

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::NaniteAssemblyInfo
          (FPrimitiveUniformShaderParametersBuilder *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveUniformShaderParametersBuilder *pFVar3;
  
  if (0xfffe < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TransformCount < ((1 << 16) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveUniformShaderParameters.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPrimitiveUniformShaderParametersBuilder *)(*pcVar1)();
      return pFVar3;
    }
  }
  (this->Parameters).NaniteAssemblyTransformOffset = param_1;
  (this->Parameters).NaniteAssemblyTransformCount = param_2;
  return this;
}

// PixelProgrammableDistance @ 148418750

FPrimitiveUniformShaderParametersBuilder * __thiscall
FPrimitiveUniformShaderParametersBuilder::PixelProgrammableDistance
          (FPrimitiveUniformShaderParametersBuilder *this,float param_1)

{
  FCachedSystemScalabilityCVars *pFVar1;
  float fVar2;
  
  pFVar1 = GetCachedScalabilityCVars();
  fVar2 = param_1 * pFVar1->ViewDistanceScale;
  (this->Parameters).PixelProgrammableDistanceSquared = fVar2 * fVar2;
  return this;
}


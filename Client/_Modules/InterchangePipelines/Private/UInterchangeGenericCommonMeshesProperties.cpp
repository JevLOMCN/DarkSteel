// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 6

// StaticClass @ 14e72d270

UClass * __cdecl UInterchangeGenericCommonMeshesProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericCommonMeshesProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericCommonMeshesProperties,0x140,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonMeshesProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonMeshesProperties>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton;
}

// UInterchangeGenericCommonMeshesProperties @ 14e7671e0

UInterchangeGenericCommonMeshesProperties * __thiscall
UInterchangeGenericCommonMeshesProperties::UInterchangeGenericCommonMeshesProperties
          (UInterchangeGenericCommonMeshesProperties *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->ForceAllMeshAsType = IFMT_None;
  this->bSingleBoneSkeleton = false;
  this->bAutoDetectMeshType = true;
  this->bImportLods = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
  this->bBakeMeshes = true;
  this->bBakePivotMeshes = false;
  this->bKeepSectionsSeparate = false;
  this->VertexColorImportOption = IVCIO_Replace;
  this->bImportSockets = true;
  this->bRecomputeNormals = true;
  this->bRecomputeTangents = true;
  this->bUseMikkTSpace = true;
  this->bComputeWeightedNormals = false;
  this->bUseHighPrecisionTangentBasis = false;
  this->bUseFullPrecisionUVs = false;
  this->bUseBackwardsCompatibleF16TruncUVs = false;
  this->bRemoveDegenerates = false;
  return this;
}

// UInterchangeGenericCommonMeshesProperties @ 14e767230

UInterchangeGenericCommonMeshesProperties * __thiscall
UInterchangeGenericCommonMeshesProperties::UInterchangeGenericCommonMeshesProperties
          (UInterchangeGenericCommonMeshesProperties *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->ForceAllMeshAsType = IFMT_None;
  this->bSingleBoneSkeleton = false;
  this->bAutoDetectMeshType = true;
  this->bImportLods = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
  this->bBakeMeshes = true;
  this->bBakePivotMeshes = false;
  this->bKeepSectionsSeparate = false;
  this->VertexColorImportOption = IVCIO_Replace;
  this->bImportSockets = true;
  this->bRecomputeNormals = true;
  this->bRecomputeTangents = true;
  this->bUseMikkTSpace = true;
  this->bComputeWeightedNormals = false;
  this->bUseHighPrecisionTangentBasis = false;
  this->bUseFullPrecisionUVs = false;
  this->bUseBackwardsCompatibleF16TruncUVs = false;
  this->bRemoveDegenerates = false;
  return this;
}

// ~UInterchangeGenericCommonMeshesProperties @ 14e76c040

void __thiscall
UInterchangeGenericCommonMeshesProperties::~UInterchangeGenericCommonMeshesProperties
          (UInterchangeGenericCommonMeshesProperties *this)

{
  this->_padding_ = (longlong)&___7UInterchangeGenericCommonMeshesProperties__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e7b9740

UClass * __cdecl UInterchangeGenericCommonMeshesProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericCommonMeshesProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericCommonMeshesProperties,0x140,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonMeshesProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonMeshesProperties>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.InnerSingleton;
}

// StaticRegisterNativesUInterchangeGenericCommonMeshesProperties @ 14e7e4610

void __cdecl
UInterchangeGenericCommonMeshesProperties::
StaticRegisterNativesUInterchangeGenericCommonMeshesProperties(void)

{
  return;
}


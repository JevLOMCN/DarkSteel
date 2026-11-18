// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// StaticClass @ 14c940290

UClass * __cdecl URecomputeUVsToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"RecomputeUVsToolProperties",
               &Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton,
               StaticRegisterNativesURecomputeUVsToolProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URecomputeUVsToolProperties>,
               InternalVTableHelperCtorCaller<URecomputeUVsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton;
}

// URecomputeUVsToolProperties @ 14c948490

URecomputeUVsToolProperties * __thiscall
URecomputeUVsToolProperties::URecomputeUVsToolProperties
          (URecomputeUVsToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnablePolygroupSupport = true;
  this->_padding_ = (longlong)&___7URecomputeUVsToolProperties__6B_;
  this->IslandGeneration = ExistingUVs;
  this->UnwrapType = SpectralConformal;
  this->AutoRotation = MinBounds;
  this->bPreserveIrregularity = true;
  this->SmoothingSteps = 5;
  this->SmoothingAlpha = 0.25;
  this->MergingDistortionThreshold = 1.5;
  this->MergingAngleThreshold = 45.0;
  this->LayoutType = Repack;
  this->TextureResolution = 0x400;
  this->NormalizeScale = 1.0;
  this->bEnableUDIMLayout = false;
  this->bUDIMCVAREnabled = false;
  return this;
}

// URecomputeUVsToolProperties @ 14c948540

URecomputeUVsToolProperties * __thiscall
URecomputeUVsToolProperties::URecomputeUVsToolProperties
          (URecomputeUVsToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnablePolygroupSupport = true;
  this->_padding_ = (longlong)&___7URecomputeUVsToolProperties__6B_;
  this->IslandGeneration = ExistingUVs;
  this->UnwrapType = SpectralConformal;
  this->AutoRotation = MinBounds;
  this->bPreserveIrregularity = true;
  this->SmoothingSteps = 5;
  this->SmoothingAlpha = 0.25;
  this->MergingDistortionThreshold = 1.5;
  this->MergingAngleThreshold = 45.0;
  this->LayoutType = Repack;
  this->TextureResolution = 0x400;
  this->NormalizeScale = 1.0;
  this->bEnableUDIMLayout = false;
  this->bUDIMCVAREnabled = false;
  return this;
}

// ~URecomputeUVsToolProperties @ 14c949b60

void __thiscall
URecomputeUVsToolProperties::~URecomputeUVsToolProperties(URecomputeUVsToolProperties *this)

{
  this->_padding_ = (longlong)&___7URecomputeUVsToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14c97ff10

UClass * __cdecl URecomputeUVsToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"RecomputeUVsToolProperties",
               &Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton,
               StaticRegisterNativesURecomputeUVsToolProperties,0xe8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URecomputeUVsToolProperties>,
               InternalVTableHelperCtorCaller<URecomputeUVsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsToolProperties.InnerSingleton;
}

// StaticRegisterNativesURecomputeUVsToolProperties @ 14c986b90

void __cdecl URecomputeUVsToolProperties::StaticRegisterNativesURecomputeUVsToolProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfdef0

UClass * __cdecl UDisplaceMeshTextureMapProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshTextureMapProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshTextureMapProperties,0xf8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshTextureMapProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshTextureMapProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton;
}

// UDisplaceMeshTextureMapProperties @ 14cc1d180

UDisplaceMeshTextureMapProperties * __thiscall
UDisplaceMeshTextureMapProperties::UDisplaceMeshTextureMapProperties
          (UDisplaceMeshTextureMapProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DisplacementMapBaseValue = 0.5019608;
  this->Channel = Red;
  this->_padding_ = (longlong)&___7UDisplaceMeshTextureMapProperties__6B_;
  (this->UVScale).field0_0x0._s_0.X = 1.0;
  (this->UVScale).field0_0x0._s_0.Y = 1.0;
  (this->DisplacementMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->UVOffset).field0_0x0._s_0.X = 0.0;
  (this->UVOffset).field0_0x0._s_0.Y = 0.0;
  this->bApplyAdjustmentCurve = false;
  (this->AdjustmentCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bRecalcNormals = true;
  return this;
}

// UDisplaceMeshTextureMapProperties @ 14cc1d200

UDisplaceMeshTextureMapProperties * __thiscall
UDisplaceMeshTextureMapProperties::UDisplaceMeshTextureMapProperties
          (UDisplaceMeshTextureMapProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DisplacementMapBaseValue = 0.5019608;
  this->Channel = Red;
  this->_padding_ = (longlong)&___7UDisplaceMeshTextureMapProperties__6B_;
  (this->UVScale).field0_0x0._s_0.X = 1.0;
  (this->UVScale).field0_0x0._s_0.Y = 1.0;
  (this->DisplacementMap).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->UVOffset).field0_0x0._s_0.X = 0.0;
  (this->UVOffset).field0_0x0._s_0.Y = 0.0;
  this->bApplyAdjustmentCurve = false;
  (this->AdjustmentCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->bRecalcNormals = true;
  return this;
}

// ~UDisplaceMeshTextureMapProperties @ 14cc228a0

void __thiscall
UDisplaceMeshTextureMapProperties::~UDisplaceMeshTextureMapProperties
          (UDisplaceMeshTextureMapProperties *this)

{
  this->_padding_ = (longlong)&___7UDisplaceMeshTextureMapProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c2f0

UClass * __cdecl UDisplaceMeshTextureMapProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshTextureMapProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshTextureMapProperties,0xf8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshTextureMapProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshTextureMapProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.InnerSingleton;
}

// StaticRegisterNativesUDisplaceMeshTextureMapProperties @ 14cc82390

void __cdecl
UDisplaceMeshTextureMapProperties::StaticRegisterNativesUDisplaceMeshTextureMapProperties(void)

{
  return;
}


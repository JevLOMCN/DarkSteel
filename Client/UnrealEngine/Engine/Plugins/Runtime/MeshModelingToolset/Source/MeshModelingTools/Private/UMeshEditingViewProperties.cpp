// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc94cb0

UClass * __cdecl UMeshEditingViewProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshEditingViewProperties",
               &Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton,
               StaticRegisterNativesUMeshEditingViewProperties,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshEditingViewProperties>,
               InternalVTableHelperCtorCaller<UMeshEditingViewProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton;
}

// UMeshEditingViewProperties @ 14ccbc020

UMeshEditingViewProperties * __thiscall
UMeshEditingViewProperties::UMeshEditingViewProperties
          (UMeshEditingViewProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowWireframe = false;
  this->_padding_ = (longlong)&___7UMeshEditingViewProperties__6B_;
  this->MaterialMode = Diffuse;
  this->Opacity = 0.65;
  this->bFlatShading = true;
  (this->Color).field0_0x0._s_0.R = 0.4;
  (this->Color).field0_0x0._s_0.G = 0.4;
  (this->Color).field0_0x0._s_0.B = 0.4;
  (this->Color).field0_0x0._s_0.A = 1.0;
  (this->Image).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->TransparentMaterialColor).field0_0x0._s_0.R = 0.0606;
  (this->TransparentMaterialColor).field0_0x0._s_0.G = 0.309;
  (this->TransparentMaterialColor).field0_0x0._s_0.B = 0.842;
  (this->TransparentMaterialColor).field0_0x0._s_0.A = 1.0;
  this->bTwoSided = true;
  (this->CustomMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshEditingViewProperties @ 14ccbc0e0

UMeshEditingViewProperties * __thiscall
UMeshEditingViewProperties::UMeshEditingViewProperties
          (UMeshEditingViewProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowWireframe = false;
  this->_padding_ = (longlong)&___7UMeshEditingViewProperties__6B_;
  this->MaterialMode = Diffuse;
  this->Opacity = 0.65;
  this->bFlatShading = true;
  (this->Color).field0_0x0._s_0.R = 0.4;
  (this->Color).field0_0x0._s_0.G = 0.4;
  (this->Color).field0_0x0._s_0.B = 0.4;
  (this->Color).field0_0x0._s_0.A = 1.0;
  (this->Image).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->TransparentMaterialColor).field0_0x0._s_0.R = 0.0606;
  (this->TransparentMaterialColor).field0_0x0._s_0.G = 0.309;
  (this->TransparentMaterialColor).field0_0x0._s_0.B = 0.842;
  (this->TransparentMaterialColor).field0_0x0._s_0.A = 1.0;
  this->bTwoSided = true;
  (this->CustomMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshEditingViewProperties @ 14ccc3b00

void __thiscall
UMeshEditingViewProperties::~UMeshEditingViewProperties(UMeshEditingViewProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshEditingViewProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccffd80

UClass * __cdecl UMeshEditingViewProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshEditingViewProperties",
               &Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton,
               StaticRegisterNativesUMeshEditingViewProperties,0x100,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshEditingViewProperties>,
               InternalVTableHelperCtorCaller<UMeshEditingViewProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshEditingViewProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshEditingViewProperties @ 14cd2efb0

void __cdecl UMeshEditingViewProperties::StaticRegisterNativesUMeshEditingViewProperties(void)

{
  return;
}


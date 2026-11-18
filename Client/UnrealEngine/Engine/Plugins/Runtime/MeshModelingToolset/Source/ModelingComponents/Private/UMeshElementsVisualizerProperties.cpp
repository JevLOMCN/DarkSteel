// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// StaticClass @ 14ca40190

UClass * __cdecl UMeshElementsVisualizerProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshElementsVisualizerProperties",
               &Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton,
               StaticRegisterNativesUMeshElementsVisualizerProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshElementsVisualizerProperties>,
               InternalVTableHelperCtorCaller<UMeshElementsVisualizerProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton;
}

// UMeshElementsVisualizerProperties @ 14ca67e90

UMeshElementsVisualizerProperties * __thiscall
UMeshElementsVisualizerProperties::UMeshElementsVisualizerProperties
          (UMeshElementsVisualizerProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bVisible = true;
  this->bShowWireframe = false;
  this->bShowBorders = true;
  this->bShowUVSeams = true;
  this->_padding_ = (longlong)&___7UMeshElementsVisualizerProperties__6B_;
  (this->WireframeColor).field0_0x0.Bits = 0xff808080;
  (this->BoundaryEdgeColor).field0_0x0.Bits = 0xfff50f0f;
  (this->UVSeamColor).field0_0x0.Bits = 0xfff0a00f;
  (this->NormalSeamColor).field0_0x0.Bits = 0xff8080f0;
  (this->TangentSeamColor).field0_0x0.Bits = 0xff40f0f0;
  (this->ColorSeamColor).field0_0x0.Bits = 0xff2ecc71;
  this->bShowNormalSeams = true;
  this->bShowTangentSeams = true;
  this->bShowColorSeams = true;
  this->ThicknessScale = 1.0;
  this->DepthBias = 0.2;
  this->bAdjustDepthBiasUsingMeshSize = false;
  return this;
}

// UMeshElementsVisualizerProperties @ 14ca67f30

UMeshElementsVisualizerProperties * __thiscall
UMeshElementsVisualizerProperties::UMeshElementsVisualizerProperties
          (UMeshElementsVisualizerProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bVisible = true;
  this->bShowWireframe = false;
  this->bShowBorders = true;
  this->bShowUVSeams = true;
  this->_padding_ = (longlong)&___7UMeshElementsVisualizerProperties__6B_;
  (this->WireframeColor).field0_0x0.Bits = 0xff808080;
  (this->BoundaryEdgeColor).field0_0x0.Bits = 0xfff50f0f;
  (this->UVSeamColor).field0_0x0.Bits = 0xfff0a00f;
  (this->NormalSeamColor).field0_0x0.Bits = 0xff8080f0;
  (this->TangentSeamColor).field0_0x0.Bits = 0xff40f0f0;
  (this->ColorSeamColor).field0_0x0.Bits = 0xff2ecc71;
  this->bShowNormalSeams = true;
  this->bShowTangentSeams = true;
  this->bShowColorSeams = true;
  this->ThicknessScale = 1.0;
  this->DepthBias = 0.2;
  this->bAdjustDepthBiasUsingMeshSize = false;
  return this;
}

// ~UMeshElementsVisualizerProperties @ 14ca6b750

void __thiscall
UMeshElementsVisualizerProperties::~UMeshElementsVisualizerProperties
          (UMeshElementsVisualizerProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshElementsVisualizerProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91730

UClass * __cdecl UMeshElementsVisualizerProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshElementsVisualizerProperties",
               &Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton,
               StaticRegisterNativesUMeshElementsVisualizerProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshElementsVisualizerProperties>,
               InternalVTableHelperCtorCaller<UMeshElementsVisualizerProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.InnerSingleton;
}

// ShowAllElements @ 14caa6350

void __thiscall
UMeshElementsVisualizerProperties::ShowAllElements
          (UMeshElementsVisualizerProperties *this,bool param_1)

{
  this->bShowWireframe = param_1;
  this->bShowBorders = param_1;
  this->bShowUVSeams = param_1;
  this->bShowNormalSeams = param_1;
  this->bShowTangentSeams = param_1;
  this->bShowColorSeams = param_1;
  return;
}

// StaticRegisterNativesUMeshElementsVisualizerProperties @ 14caa71b0

void __cdecl
UMeshElementsVisualizerProperties::StaticRegisterNativesUMeshElementsVisualizerProperties(void)

{
  return;
}


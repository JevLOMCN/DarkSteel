// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc8e840

UClass * __cdecl UMeshSpaceDeformerToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerToolProperties",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerToolProperties>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton;
}

// UMeshSpaceDeformerToolProperties @ 14ccbd920

UMeshSpaceDeformerToolProperties * __thiscall
UMeshSpaceDeformerToolProperties::UMeshSpaceDeformerToolProperties
          (UMeshSpaceDeformerToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SelectedOperationType = Bend;
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolProperties__6B_;
  this->UpperBoundsInterval = 100.0;
  this->LowerBoundsInterval = -100.0;
  this->BendDegrees = 90.0;
  this->TwistDegrees = 180.0;
  this->FlareProfileType = SinMode;
  this->FlarePercentY = 100.0;
  this->bLockXAndYFlaring = true;
  this->FlarePercentX = 100.0;
  this->bLockBottom = false;
  this->bShowOriginalMesh = true;
  this->bDrawVisualization = true;
  this->bAlignToNormalOnCtrlClick = false;
  return this;
}

// UMeshSpaceDeformerToolProperties @ 14ccbd9b0

UMeshSpaceDeformerToolProperties * __thiscall
UMeshSpaceDeformerToolProperties::UMeshSpaceDeformerToolProperties
          (UMeshSpaceDeformerToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SelectedOperationType = Bend;
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolProperties__6B_;
  this->UpperBoundsInterval = 100.0;
  this->LowerBoundsInterval = -100.0;
  this->BendDegrees = 90.0;
  this->TwistDegrees = 180.0;
  this->FlareProfileType = SinMode;
  this->FlarePercentY = 100.0;
  this->bLockXAndYFlaring = true;
  this->FlarePercentX = 100.0;
  this->bLockBottom = false;
  this->bShowOriginalMesh = true;
  this->bDrawVisualization = true;
  this->bAlignToNormalOnCtrlClick = false;
  return this;
}

// ~UMeshSpaceDeformerToolProperties @ 14ccc41a0

void __thiscall
UMeshSpaceDeformerToolProperties::~UMeshSpaceDeformerToolProperties
          (UMeshSpaceDeformerToolProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd004f0

UClass * __cdecl UMeshSpaceDeformerToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerToolProperties",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerToolProperties>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshSpaceDeformerToolProperties @ 14cd2f0e0

void __cdecl
UMeshSpaceDeformerToolProperties::StaticRegisterNativesUMeshSpaceDeformerToolProperties(void)

{
  return;
}


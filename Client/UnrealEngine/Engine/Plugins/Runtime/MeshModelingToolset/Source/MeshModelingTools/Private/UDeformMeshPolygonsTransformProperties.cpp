// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc04fb0

UClass * __cdecl UDeformMeshPolygonsTransformProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsTransformProperties",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsTransformProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsTransformProperties>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsTransformProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton;
}

// UDeformMeshPolygonsTransformProperties @ 14cc1cc90

UDeformMeshPolygonsTransformProperties * __thiscall
UDeformMeshPolygonsTransformProperties::UDeformMeshPolygonsTransformProperties
          (UDeformMeshPolygonsTransformProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SelectedWeightScheme = IDTCotangent;
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTransformProperties__6B_;
  this->HandleWeight = 1000.0;
  this->bPostFixHandles = false;
  return this;
}

// UDeformMeshPolygonsTransformProperties @ 14cc1cce0

UDeformMeshPolygonsTransformProperties * __thiscall
UDeformMeshPolygonsTransformProperties::UDeformMeshPolygonsTransformProperties
          (UDeformMeshPolygonsTransformProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar1);
  this->SelectedWeightScheme = IDTCotangent;
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTransformProperties__6B_;
  this->HandleWeight = 1000.0;
  this->bPostFixHandles = false;
  this->DeformationStrategy = Laplacian;
  this->TransformMode = AxisTranslation;
  this->bSelectEdges = true;
  this->bSelectVertices = true;
  this->bSelectFaces = true;
  this->bShowWireframe = false;
  return this;
}

// ~UDeformMeshPolygonsTransformProperties @ 14cc227b0

void __thiscall
UDeformMeshPolygonsTransformProperties::~UDeformMeshPolygonsTransformProperties
          (UDeformMeshPolygonsTransformProperties *this)

{
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTransformProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5bf30

UClass * __cdecl UDeformMeshPolygonsTransformProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsTransformProperties",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsTransformProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsTransformProperties>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsTransformProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.InnerSingleton;
}

// StaticRegisterNativesUDeformMeshPolygonsTransformProperties @ 14cc82310

void __cdecl
UDeformMeshPolygonsTransformProperties::StaticRegisterNativesUDeformMeshPolygonsTransformProperties
          (void)

{
  return;
}


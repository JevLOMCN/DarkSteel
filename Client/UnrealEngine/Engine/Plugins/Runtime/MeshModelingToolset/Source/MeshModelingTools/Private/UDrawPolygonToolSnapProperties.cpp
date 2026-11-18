// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc04190

UClass * __cdecl UDrawPolygonToolSnapProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolSnapProperties",
               &Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolSnapProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawPolygonToolSnapProperties>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolSnapProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton;
}

// UDrawPolygonToolSnapProperties @ 14cc1dc00

UDrawPolygonToolSnapProperties * __thiscall
UDrawPolygonToolSnapProperties::UDrawPolygonToolSnapProperties
          (UDrawPolygonToolSnapProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableSnapping = true;
  this->bSnapToWorldGrid = false;
  this->bSnapToVertices = true;
  this->bSnapToEdges = false;
  this->_padding_ = (longlong)&___7UDrawPolygonToolSnapProperties__6B_;
  this->bSnapToAxes = true;
  this->bSnapToLengths = true;
  this->bSnapToSurfaces = false;
  this->SnapToSurfacesOffset = 0.0;
  return this;
}

// UDrawPolygonToolSnapProperties @ 14cc1dc50

UDrawPolygonToolSnapProperties * __thiscall
UDrawPolygonToolSnapProperties::UDrawPolygonToolSnapProperties
          (UDrawPolygonToolSnapProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableSnapping = true;
  this->bSnapToWorldGrid = false;
  this->bSnapToVertices = true;
  this->bSnapToEdges = false;
  this->_padding_ = (longlong)&___7UDrawPolygonToolSnapProperties__6B_;
  this->bSnapToAxes = true;
  this->bSnapToLengths = true;
  this->bSnapToSurfaces = false;
  this->SnapToSurfacesOffset = 0.0;
  return this;
}

// ~UDrawPolygonToolSnapProperties @ 14cc22ab0

void __thiscall
UDrawPolygonToolSnapProperties::~UDrawPolygonToolSnapProperties
          (UDrawPolygonToolSnapProperties *this)

{
  this->_padding_ = (longlong)&___7UDrawPolygonToolSnapProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c830

UClass * __cdecl UDrawPolygonToolSnapProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolSnapProperties",
               &Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolSnapProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawPolygonToolSnapProperties>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolSnapProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.InnerSingleton;
}

// StaticRegisterNativesUDrawPolygonToolSnapProperties @ 14cc82400

void __cdecl
UDrawPolygonToolSnapProperties::StaticRegisterNativesUDrawPolygonToolSnapProperties(void)

{
  return;
}


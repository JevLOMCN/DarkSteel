// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc03e70

UClass * __cdecl UDrawPolygonToolStandardProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolStandardProperties",
               &Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolStandardProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawPolygonToolStandardProperties>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolStandardProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton;
}

// UDrawPolygonToolStandardProperties @ 14cc1dca0

UDrawPolygonToolStandardProperties * __thiscall
UDrawPolygonToolStandardProperties::UDrawPolygonToolStandardProperties
          (UDrawPolygonToolStandardProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PolygonDrawMode = Freehand;
  this->bAllowSelfIntersections = false;
  this->_padding_ = (longlong)&___7UDrawPolygonToolStandardProperties__6B_;
  this->FeatureSizeRatio = 0.25;
  this->RadialSlices = 0x10;
  this->Distance = 0.0;
  this->bShowGridGizmo = true;
  this->ExtrudeMode = Interactive;
  this->ExtrudeHeight = 100.0;
  return this;
}

// UDrawPolygonToolStandardProperties @ 14cc1dd00

UDrawPolygonToolStandardProperties * __thiscall
UDrawPolygonToolStandardProperties::UDrawPolygonToolStandardProperties
          (UDrawPolygonToolStandardProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar1);
  this->PolygonDrawMode = Freehand;
  this->bAllowSelfIntersections = false;
  this->_padding_ = (longlong)&___7UDrawPolygonToolStandardProperties__6B_;
  this->FeatureSizeRatio = 0.25;
  this->RadialSlices = 0x10;
  this->Distance = 0.0;
  this->bShowGridGizmo = true;
  this->ExtrudeMode = Interactive;
  this->ExtrudeHeight = 100.0;
  return this;
}

// ~UDrawPolygonToolStandardProperties @ 14cc22ad0

void __thiscall
UDrawPolygonToolStandardProperties::~UDrawPolygonToolStandardProperties
          (UDrawPolygonToolStandardProperties *this)

{
  this->_padding_ = (longlong)&___7UDrawPolygonToolStandardProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c8f0

UClass * __cdecl UDrawPolygonToolStandardProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonToolStandardProperties",
               &Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton,
               StaticRegisterNativesUDrawPolygonToolStandardProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDrawPolygonToolStandardProperties>,
               InternalVTableHelperCtorCaller<UDrawPolygonToolStandardProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.InnerSingleton;
}

// StaticRegisterNativesUDrawPolygonToolStandardProperties @ 14cc82410

void __cdecl
UDrawPolygonToolStandardProperties::StaticRegisterNativesUDrawPolygonToolStandardProperties(void)

{
  return;
}


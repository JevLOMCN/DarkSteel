// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1bb0

UClass * __cdecl UProceduralShapeToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralShapeToolProperties",
               &Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralShapeToolProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralShapeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralShapeToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton;
}

// UProceduralShapeToolProperties @ 14cbde760

UProceduralShapeToolProperties * __thiscall
UProceduralShapeToolProperties::UProceduralShapeToolProperties
          (UProceduralShapeToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PolygroupMode = PerFace;
  this->TargetSurface = OnScene;
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  this->PivotLocation = Base;
  this->Rotation = 0.0;
  this->bAlignToNormal = true;
  this->bShowGizmo = true;
  this->bShowGizmoOptions = false;
  return this;
}

// UProceduralShapeToolProperties @ 14cbde7c0

UProceduralShapeToolProperties * __thiscall
UProceduralShapeToolProperties::UProceduralShapeToolProperties
          (UProceduralShapeToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PolygroupMode = PerFace;
  this->TargetSurface = OnScene;
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  this->PivotLocation = Base;
  this->Rotation = 0.0;
  this->bAlignToNormal = true;
  this->bShowGizmo = true;
  this->bShowGizmoOptions = false;
  return this;
}

// ~UProceduralShapeToolProperties @ 14cbe0730

void __thiscall
UProceduralShapeToolProperties::~UProceduralShapeToolProperties
          (UProceduralShapeToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0c20

UClass * __cdecl UProceduralShapeToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralShapeToolProperties",
               &Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralShapeToolProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralShapeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralShapeToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralShapeToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralShapeToolProperties @ 14cbf6d20

void __cdecl
UProceduralShapeToolProperties::StaticRegisterNativesUProceduralShapeToolProperties(void)

{
  return;
}


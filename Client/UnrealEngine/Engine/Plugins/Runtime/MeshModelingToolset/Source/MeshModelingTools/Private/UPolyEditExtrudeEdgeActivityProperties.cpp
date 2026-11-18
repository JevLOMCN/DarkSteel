// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd42930

UClass * __cdecl UPolyEditExtrudeEdgeActivityProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivityProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivityProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivityProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton;
}

// UPolyEditExtrudeEdgeActivityProperties @ 14cd50380

UPolyEditExtrudeEdgeActivityProperties * __thiscall
UPolyEditExtrudeEdgeActivityProperties::UPolyEditExtrudeEdgeActivityProperties
          (UPolyEditExtrudeEdgeActivityProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = LocalExtrudeFrames;
  this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
  this->Distance = 20.0;
  this->DistanceMode = Gizmo;
  this->bUseUnselectedForFrames = false;
  this->bAdjustToExtrudeEvenly = false;
  return this;
}

// UPolyEditExtrudeEdgeActivityProperties @ 14cd503e0

UPolyEditExtrudeEdgeActivityProperties * __thiscall
UPolyEditExtrudeEdgeActivityProperties::UPolyEditExtrudeEdgeActivityProperties
          (UPolyEditExtrudeEdgeActivityProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = LocalExtrudeFrames;
  this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
  this->Distance = 20.0;
  this->DistanceMode = Gizmo;
  this->bUseUnselectedForFrames = false;
  this->bAdjustToExtrudeEvenly = false;
  return this;
}

// ~UPolyEditExtrudeEdgeActivityProperties @ 14cd53540

void __thiscall
UPolyEditExtrudeEdgeActivityProperties::~UPolyEditExtrudeEdgeActivityProperties
          (UPolyEditExtrudeEdgeActivityProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditExtrudeEdgeActivityProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6dda0

UClass * __cdecl UPolyEditExtrudeEdgeActivityProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivityProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivityProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivityProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties @ 14cd81430

void __cdecl
UPolyEditExtrudeEdgeActivityProperties::StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties
          (void)

{
  return;
}


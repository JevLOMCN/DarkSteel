// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd422f0

UClass * __cdecl UPolyEditPushPullProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPushPullProperties",
               &Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditPushPullProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPushPullProperties>,
               InternalVTableHelperCtorCaller<UPolyEditPushPullProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton;
}

// UPolyEditPushPullProperties @ 14cd51160

UPolyEditPushPullProperties * __thiscall
UPolyEditPushPullProperties::UPolyEditPushPullProperties
          (UPolyEditPushPullProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShellsToSolids = true;
  this->DistanceMode = ClickInViewport;
  this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->DirectionMode = SelectedTriangleNormals;
  this->SingleDirection = SelectionNormal;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// UPolyEditPushPullProperties @ 14cd511d0

UPolyEditPushPullProperties * __thiscall
UPolyEditPushPullProperties::UPolyEditPushPullProperties
          (UPolyEditPushPullProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShellsToSolids = true;
  this->DistanceMode = ClickInViewport;
  this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->DirectionMode = SelectedTriangleNormals;
  this->SingleDirection = SelectionNormal;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// ~UPolyEditPushPullProperties @ 14cd53810

void __thiscall
UPolyEditPushPullProperties::~UPolyEditPushPullProperties(UPolyEditPushPullProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditPushPullProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e3a0

UClass * __cdecl UPolyEditPushPullProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPushPullProperties",
               &Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditPushPullProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPushPullProperties>,
               InternalVTableHelperCtorCaller<UPolyEditPushPullProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPushPullProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditPushPullProperties @ 14cd814b0

void __cdecl UPolyEditPushPullProperties::StaticRegisterNativesUPolyEditPushPullProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd42170

UClass * __cdecl UPolyEditOffsetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditOffsetProperties",
               &Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditOffsetProperties,0xe0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditOffsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton;
}

// UPolyEditOffsetProperties @ 14cd50ea0

UPolyEditOffsetProperties * __thiscall
UPolyEditOffsetProperties::UPolyEditOffsetProperties
          (UPolyEditOffsetProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = VertexNormals;
  this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
  this->DistanceMode = ClickInViewport;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->bShellsToSolids = true;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// UPolyEditOffsetProperties @ 14cd50f10

UPolyEditOffsetProperties * __thiscall
UPolyEditOffsetProperties::UPolyEditOffsetProperties
          (UPolyEditOffsetProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = VertexNormals;
  this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
  this->DistanceMode = ClickInViewport;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->bShellsToSolids = true;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// ~UPolyEditOffsetProperties @ 14cd537c0

void __thiscall
UPolyEditOffsetProperties::~UPolyEditOffsetProperties(UPolyEditOffsetProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditOffsetProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e220

UClass * __cdecl UPolyEditOffsetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditOffsetProperties",
               &Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditOffsetProperties,0xe0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditOffsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditOffsetProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditOffsetProperties @ 14cd81490

void __cdecl UPolyEditOffsetProperties::StaticRegisterNativesUPolyEditOffsetProperties(void)

{
  return;
}


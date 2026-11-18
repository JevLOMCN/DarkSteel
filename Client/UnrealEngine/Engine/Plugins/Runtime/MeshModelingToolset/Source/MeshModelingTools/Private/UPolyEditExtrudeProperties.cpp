// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd41ff0

UClass * __cdecl UPolyEditExtrudeProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton;
}

// UPolyEditExtrudeProperties @ 14cd50440

UPolyEditExtrudeProperties * __thiscall
UPolyEditExtrudeProperties::UPolyEditExtrudeProperties
          (UPolyEditExtrudeProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = SingleDirection;
  this->Direction = SelectionNormal;
  this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
  this->DistanceMode = ClickInViewport;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->bShellsToSolids = true;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// UPolyEditExtrudeProperties @ 14cd504b0

UPolyEditExtrudeProperties * __thiscall
UPolyEditExtrudeProperties::UPolyEditExtrudeProperties
          (UPolyEditExtrudeProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->DirectionMode = SingleDirection;
  this->Direction = SelectionNormal;
  this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
  this->DistanceMode = ClickInViewport;
  this->Distance = 100.0;
  this->MaxDistanceScaleFactor = 4.0;
  this->bShellsToSolids = true;
  this->MeasureDirection = SelectionNormal;
  this->bUseColinearityForSettingBorderGroups = true;
  return this;
}

// ~UPolyEditExtrudeProperties @ 14cd53560

void __thiscall
UPolyEditExtrudeProperties::~UPolyEditExtrudeProperties(UPolyEditExtrudeProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditExtrudeProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6de60

UClass * __cdecl UPolyEditExtrudeProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeProperties",
               &Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeProperties>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditExtrudeProperties @ 14cd81440

void __cdecl UPolyEditExtrudeProperties::StaticRegisterNativesUPolyEditExtrudeProperties(void)

{
  return;
}


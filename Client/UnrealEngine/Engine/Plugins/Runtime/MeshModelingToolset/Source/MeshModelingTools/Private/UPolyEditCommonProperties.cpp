// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc03240

UClass * __cdecl UPolyEditCommonProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCommonProperties",
               &Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditCommonProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditCommonProperties>,
               InternalVTableHelperCtorCaller<UPolyEditCommonProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton;
}

// UPolyEditCommonProperties @ 14cc1ffe0

UPolyEditCommonProperties * __thiscall
UPolyEditCommonProperties::UPolyEditCommonProperties
          (UPolyEditCommonProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowWireframe = false;
  this->bShowSelectableCorners = true;
  this->_padding_ = (longlong)&___7UPolyEditCommonProperties__6B_;
  this->bGizmoVisible = true;
  this->LocalFrameMode = FromGeometry;
  this->bLockRotation = false;
  this->bLocalCoordSystem = true;
  return this;
}

// UPolyEditCommonProperties @ 14cc20030

UPolyEditCommonProperties * __thiscall
UPolyEditCommonProperties::UPolyEditCommonProperties
          (UPolyEditCommonProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowWireframe = false;
  this->bShowSelectableCorners = true;
  this->_padding_ = (longlong)&___7UPolyEditCommonProperties__6B_;
  this->bGizmoVisible = true;
  this->LocalFrameMode = FromGeometry;
  this->bLockRotation = false;
  this->bLocalCoordSystem = true;
  return this;
}

// ~UPolyEditCommonProperties @ 14cc233b0

void __thiscall
UPolyEditCommonProperties::~UPolyEditCommonProperties(UPolyEditCommonProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditCommonProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d670

UClass * __cdecl UPolyEditCommonProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditCommonProperties",
               &Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditCommonProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditCommonProperties>,
               InternalVTableHelperCtorCaller<UPolyEditCommonProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditCommonProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditCommonProperties @ 14cc82650

void __cdecl UPolyEditCommonProperties::StaticRegisterNativesUPolyEditCommonProperties(void)

{
  return;
}


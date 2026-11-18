// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// StaticClass @ 14c940b10

UClass * __cdecl UUVLayoutProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVLayoutProperties",
               &Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton,
               StaticRegisterNativesUUVLayoutProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutProperties>,
               InternalVTableHelperCtorCaller<UUVLayoutProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton;
}

// UUVLayoutProperties @ 14c948970

UUVLayoutProperties * __thiscall
UUVLayoutProperties::UUVLayoutProperties(UUVLayoutProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->LayoutType = Repack;
  this->_padding_ = (longlong)&___7UUVLayoutProperties__6B_;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  this->bPreserveScale = false;
  this->bPreserveRotation = false;
  this->bAllowFlips = false;
  this->bEnableUDIMLayout = false;
  this->bUDIMCVAREnabled = false;
  this->TextureResolution = 0x400;
  this->Scale = 1.0;
  return this;
}

// UUVLayoutProperties @ 14c9489e0

UUVLayoutProperties * __thiscall
UUVLayoutProperties::UUVLayoutProperties(UUVLayoutProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->LayoutType = Repack;
  this->_padding_ = (longlong)&___7UUVLayoutProperties__6B_;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  this->bPreserveScale = false;
  this->bPreserveRotation = false;
  this->bAllowFlips = false;
  this->bEnableUDIMLayout = false;
  this->bUDIMCVAREnabled = false;
  this->TextureResolution = 0x400;
  this->Scale = 1.0;
  return this;
}

// ~UUVLayoutProperties @ 14c949c70

void __thiscall UUVLayoutProperties::~UUVLayoutProperties(UUVLayoutProperties *this)

{
  this->_padding_ = (longlong)&___7UUVLayoutProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14c980140

UClass * __cdecl UUVLayoutProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVLayoutProperties",
               &Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton,
               StaticRegisterNativesUUVLayoutProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutProperties>,
               InternalVTableHelperCtorCaller<UUVLayoutProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutProperties.InnerSingleton;
}

// StaticRegisterNativesUUVLayoutProperties @ 14c986bf0

void __cdecl UUVLayoutProperties::StaticRegisterNativesUUVLayoutProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca41bc0

UClass * __cdecl UBaseCreateFromSelectedCollisionProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedCollisionProperties",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton
               ,StaticRegisterNativesUBaseCreateFromSelectedCollisionProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedCollisionProperties>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedCollisionProperties>,local_res8
               ,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton;
}

// UBaseCreateFromSelectedCollisionProperties @ 14ca67300

UBaseCreateFromSelectedCollisionProperties * __thiscall
UBaseCreateFromSelectedCollisionProperties::UBaseCreateFromSelectedCollisionProperties
          (UBaseCreateFromSelectedCollisionProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bTransferCollision = true;
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedCollisionProperties__6B_;
  return this;
}

// UBaseCreateFromSelectedCollisionProperties @ 14ca67330

UBaseCreateFromSelectedCollisionProperties * __thiscall
UBaseCreateFromSelectedCollisionProperties::UBaseCreateFromSelectedCollisionProperties
          (UBaseCreateFromSelectedCollisionProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bTransferCollision = true;
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedCollisionProperties__6B_;
  return this;
}

// ~UBaseCreateFromSelectedCollisionProperties @ 14ca6b2c0

void __thiscall
UBaseCreateFromSelectedCollisionProperties::~UBaseCreateFromSelectedCollisionProperties
          (UBaseCreateFromSelectedCollisionProperties *this)

{
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedCollisionProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ca90b40

UClass * __cdecl UBaseCreateFromSelectedCollisionProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedCollisionProperties",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton
               ,StaticRegisterNativesUBaseCreateFromSelectedCollisionProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedCollisionProperties>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedCollisionProperties>,local_res8
               ,UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedCollisionProperties.InnerSingleton;
}

// StaticRegisterNativesUBaseCreateFromSelectedCollisionProperties @ 14caa7080

void __cdecl
UBaseCreateFromSelectedCollisionProperties::
StaticRegisterNativesUBaseCreateFromSelectedCollisionProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca41c80

UClass * __cdecl UTransformInputsToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"TransformInputsToolProperties",
               &Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton,
               StaticRegisterNativesUTransformInputsToolProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformInputsToolProperties>,
               InternalVTableHelperCtorCaller<UTransformInputsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton;
}

// UTransformInputsToolProperties @ 14ca69140

UTransformInputsToolProperties * __thiscall
UTransformInputsToolProperties::UTransformInputsToolProperties
          (UTransformInputsToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowTransformGizmo = true;
  this->_padding_ = (longlong)&___7UTransformInputsToolProperties__6B_;
  return this;
}

// UTransformInputsToolProperties @ 14ca69170

UTransformInputsToolProperties * __thiscall
UTransformInputsToolProperties::UTransformInputsToolProperties
          (UTransformInputsToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowTransformGizmo = true;
  this->_padding_ = (longlong)&___7UTransformInputsToolProperties__6B_;
  return this;
}

// ~UTransformInputsToolProperties @ 14ca6bc70

void __thiscall
UTransformInputsToolProperties::~UTransformInputsToolProperties
          (UTransformInputsToolProperties *this)

{
  this->_padding_ = (longlong)&___7UTransformInputsToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ca923f0

UClass * __cdecl UTransformInputsToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"TransformInputsToolProperties",
               &Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton,
               StaticRegisterNativesUTransformInputsToolProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformInputsToolProperties>,
               InternalVTableHelperCtorCaller<UTransformInputsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformInputsToolProperties.InnerSingleton;
}

// StaticRegisterNativesUTransformInputsToolProperties @ 14caa7320

void __cdecl
UTransformInputsToolProperties::StaticRegisterNativesUTransformInputsToolProperties(void)

{
  return;
}


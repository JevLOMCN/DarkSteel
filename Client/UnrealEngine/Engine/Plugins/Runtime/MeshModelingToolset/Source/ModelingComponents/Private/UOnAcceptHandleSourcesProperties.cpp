// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// GetHandleInputs @ 14ca8feb0

EHandleSourcesMethod __thiscall
UOnAcceptHandleSourcesProperties::GetHandleInputs(UOnAcceptHandleSourcesProperties *this)

{
  return this->HandleInputs;
}

// StaticClass @ 14caa6ef0

UClass * __cdecl UOnAcceptHandleSourcesProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesProperties",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesProperties>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesProperties>,aFStackX_8,
               UOnAcceptHandleSourcesPropertiesBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton;
}

// UOnAcceptHandleSourcesProperties @ 14cace250

UOnAcceptHandleSourcesProperties * __thiscall
UOnAcceptHandleSourcesProperties::UOnAcceptHandleSourcesProperties
          (UOnAcceptHandleSourcesProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesProperties__6B_;
  return this;
}

// UOnAcceptHandleSourcesProperties @ 14cace280

UOnAcceptHandleSourcesProperties * __thiscall
UOnAcceptHandleSourcesProperties::UOnAcceptHandleSourcesProperties
          (UOnAcceptHandleSourcesProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesProperties__6B_;
  return this;
}

// ~UOnAcceptHandleSourcesProperties @ 14cad25d0

void __thiscall
UOnAcceptHandleSourcesProperties::~UOnAcceptHandleSourcesProperties
          (UOnAcceptHandleSourcesProperties *this)

{
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesPropertiesBase__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb12820

UClass * __cdecl UOnAcceptHandleSourcesProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesProperties",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesProperties,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesProperties>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesProperties>,local_res8,
               UOnAcceptHandleSourcesPropertiesBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.InnerSingleton;
}

// StaticRegisterNativesUOnAcceptHandleSourcesProperties @ 14cb3eb90

void __cdecl
UOnAcceptHandleSourcesProperties::StaticRegisterNativesUOnAcceptHandleSourcesProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd43b50

UClass * __cdecl UImplicitSmoothProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ImplicitSmoothProperties",
               &Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton,
               StaticRegisterNativesUImplicitSmoothProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UImplicitSmoothProperties>,
               InternalVTableHelperCtorCaller<UImplicitSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton;
}

// UImplicitSmoothProperties @ 14cd4f920

UImplicitSmoothProperties * __thiscall
UImplicitSmoothProperties::UImplicitSmoothProperties
          (UImplicitSmoothProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothSpeed = 0.1;
  this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
  this->Smoothness = 0.2;
  this->bPreserveUVs = true;
  this->VolumeCorrection = 0.0;
  return this;
}

// UImplicitSmoothProperties @ 14cd4f970

UImplicitSmoothProperties * __thiscall
UImplicitSmoothProperties::UImplicitSmoothProperties
          (UImplicitSmoothProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothSpeed = 0.1;
  this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
  this->Smoothness = 0.2;
  this->bPreserveUVs = true;
  this->VolumeCorrection = 0.0;
  return this;
}

// ~UImplicitSmoothProperties @ 14cd53300

void __thiscall
UImplicitSmoothProperties::~UImplicitSmoothProperties(UImplicitSmoothProperties *this)

{
  this->_padding_ = (longlong)&___7UImplicitSmoothProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d7a0

UClass * __cdecl UImplicitSmoothProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ImplicitSmoothProperties",
               &Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton,
               StaticRegisterNativesUImplicitSmoothProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UImplicitSmoothProperties>,
               InternalVTableHelperCtorCaller<UImplicitSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImplicitSmoothProperties.InnerSingleton;
}

// StaticRegisterNativesUImplicitSmoothProperties @ 14cd813b0

void __cdecl UImplicitSmoothProperties::StaticRegisterNativesUImplicitSmoothProperties(void)

{
  return;
}


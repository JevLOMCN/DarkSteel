// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc95f90

UClass * __cdecl UImplicitOffsetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ImplicitOffsetProperties",
               &Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton,
               StaticRegisterNativesUImplicitOffsetProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UImplicitOffsetProperties>,
               InternalVTableHelperCtorCaller<UImplicitOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton;
}

// UImplicitOffsetProperties @ 14ccbb200

UImplicitOffsetProperties * __thiscall
UImplicitOffsetProperties::UImplicitOffsetProperties
          (UImplicitOffsetProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Smoothness = 0.2;
  this->_padding_ = (longlong)&___7UImplicitOffsetProperties__6B_;
  this->bPreserveUVs = true;
  return this;
}

// UImplicitOffsetProperties @ 14ccbb240

UImplicitOffsetProperties * __thiscall
UImplicitOffsetProperties::UImplicitOffsetProperties
          (UImplicitOffsetProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Smoothness = 0.2;
  this->_padding_ = (longlong)&___7UImplicitOffsetProperties__6B_;
  this->bPreserveUVs = true;
  return this;
}

// ~UImplicitOffsetProperties @ 14ccc3630

void __thiscall
UImplicitOffsetProperties::~UImplicitOffsetProperties(UImplicitOffsetProperties *this)

{
  this->_padding_ = (longlong)&___7UImplicitOffsetProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff3d0

UClass * __cdecl UImplicitOffsetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ImplicitOffsetProperties",
               &Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton,
               StaticRegisterNativesUImplicitOffsetProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UImplicitOffsetProperties>,
               InternalVTableHelperCtorCaller<UImplicitOffsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImplicitOffsetProperties.InnerSingleton;
}

// StaticRegisterNativesUImplicitOffsetProperties @ 14cd2ee80

void __cdecl UImplicitOffsetProperties::StaticRegisterNativesUImplicitOffsetProperties(void)

{
  return;
}


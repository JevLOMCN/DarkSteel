// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbfdfb0

UClass * __cdecl UDisplaceMeshDirectionalFilterProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshDirectionalFilterProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshDirectionalFilterProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshDirectionalFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton;
}

// UDisplaceMeshDirectionalFilterProperties @ 14cc1ce60

UDisplaceMeshDirectionalFilterProperties * __thiscall
UDisplaceMeshDirectionalFilterProperties::UDisplaceMeshDirectionalFilterProperties
          (UDisplaceMeshDirectionalFilterProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableFilter = false;
  this->_padding_ = (longlong)&___7UDisplaceMeshDirectionalFilterProperties__6B_;
  (this->FilterDirection).field0_0x0._s_0.X = 0.0;
  (this->FilterDirection).field0_0x0._s_0.Y = 0.0;
  (this->FilterDirection).field0_0x0._s_0.Z = 1.0;
  this->FilterWidth = 0.25;
  return this;
}

// UDisplaceMeshDirectionalFilterProperties @ 14cc1cec0

UDisplaceMeshDirectionalFilterProperties * __thiscall
UDisplaceMeshDirectionalFilterProperties::UDisplaceMeshDirectionalFilterProperties
          (UDisplaceMeshDirectionalFilterProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableFilter = false;
  this->_padding_ = (longlong)&___7UDisplaceMeshDirectionalFilterProperties__6B_;
  (this->FilterDirection).field0_0x0._s_0.X = 0.0;
  (this->FilterDirection).field0_0x0._s_0.Y = 0.0;
  (this->FilterDirection).field0_0x0._s_0.Z = 1.0;
  this->FilterWidth = 0.25;
  return this;
}

// ~UDisplaceMeshDirectionalFilterProperties @ 14cc22820

void __thiscall
UDisplaceMeshDirectionalFilterProperties::~UDisplaceMeshDirectionalFilterProperties
          (UDisplaceMeshDirectionalFilterProperties *this)

{
  this->_padding_ = (longlong)&___7UDisplaceMeshDirectionalFilterProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5c0b0

UClass * __cdecl UDisplaceMeshDirectionalFilterProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshDirectionalFilterProperties",
               &Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDisplaceMeshDirectionalFilterProperties>,
               InternalVTableHelperCtorCaller<UDisplaceMeshDirectionalFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.InnerSingleton;
}

// StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties @ 14cc82360

void __cdecl
UDisplaceMeshDirectionalFilterProperties::
StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties(void)

{
  return;
}


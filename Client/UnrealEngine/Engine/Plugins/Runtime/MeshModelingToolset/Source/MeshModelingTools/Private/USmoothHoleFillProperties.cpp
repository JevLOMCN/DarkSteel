// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// StaticClass @ 14cc91230

UClass * __cdecl USmoothHoleFillProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothHoleFillProperties",
               &Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton,
               StaticRegisterNativesUSmoothHoleFillProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USmoothHoleFillProperties>,
               InternalVTableHelperCtorCaller<USmoothHoleFillProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton;
}

// USmoothHoleFillProperties @ 14ccc01c0

USmoothHoleFillProperties * __thiscall
USmoothHoleFillProperties::USmoothHoleFillProperties
          (USmoothHoleFillProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bProjectDuringRemesh = false;
  this->_padding_ = (longlong)&___7USmoothHoleFillProperties__6B_;
  this->FillDensityScalar = 1.0;
  return this;
}

// ~USmoothHoleFillProperties @ 14ccc4ee0

void __thiscall
USmoothHoleFillProperties::~USmoothHoleFillProperties(USmoothHoleFillProperties *this)

{
  this->_padding_ = (longlong)&___7USmoothHoleFillProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01ce0

UClass * __cdecl USmoothHoleFillProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothHoleFillProperties",
               &Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton,
               StaticRegisterNativesUSmoothHoleFillProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<USmoothHoleFillProperties>,
               InternalVTableHelperCtorCaller<USmoothHoleFillProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothHoleFillProperties.InnerSingleton;
}

// StaticRegisterNativesUSmoothHoleFillProperties @ 14cd2f370

void __cdecl USmoothHoleFillProperties::StaticRegisterNativesUSmoothHoleFillProperties(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd43c50

UClass * __cdecl USmoothWeightMapSetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothWeightMapSetProperties",
               &Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUSmoothWeightMapSetProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<USmoothWeightMapSetProperties>,local_res8,
               UWeightMapSetProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton;
}

// USmoothWeightMapSetProperties @ 14cd515f0

USmoothWeightMapSetProperties * __thiscall
USmoothWeightMapSetProperties::USmoothWeightMapSetProperties
          (USmoothWeightMapSetProperties *this,FVTableHelper *param_1)

{
  UWeightMapSetProperties::UWeightMapSetProperties((UWeightMapSetProperties *)this,param_1);
  this->MinSmoothMultiplier = 0.0;
  this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
  return this;
}

// USmoothWeightMapSetProperties @ 14cd51630

USmoothWeightMapSetProperties * __thiscall
USmoothWeightMapSetProperties::USmoothWeightMapSetProperties
          (USmoothWeightMapSetProperties *this,FObjectInitializer *param_1)

{
  UWeightMapSetProperties::UWeightMapSetProperties((UWeightMapSetProperties *)this,param_1);
  this->MinSmoothMultiplier = 0.0;
  this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
  return this;
}

// ~USmoothWeightMapSetProperties @ 14cd538e0

void __thiscall
USmoothWeightMapSetProperties::~USmoothWeightMapSetProperties(USmoothWeightMapSetProperties *this)

{
  this->_padding_ = (longlong)&___7USmoothWeightMapSetProperties__6B_;
  UWeightMapSetProperties::~UWeightMapSetProperties((UWeightMapSetProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e760

UClass * __cdecl USmoothWeightMapSetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothWeightMapSetProperties",
               &Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUSmoothWeightMapSetProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USmoothWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<USmoothWeightMapSetProperties>,local_res8,
               UWeightMapSetProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothWeightMapSetProperties.InnerSingleton;
}

// StaticRegisterNativesUSmoothWeightMapSetProperties @ 14cd81500

void __cdecl USmoothWeightMapSetProperties::StaticRegisterNativesUSmoothWeightMapSetProperties(void)

{
  return;
}


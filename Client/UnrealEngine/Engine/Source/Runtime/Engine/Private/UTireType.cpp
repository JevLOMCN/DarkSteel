// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14899bfd0

UClass * __cdecl UTireType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTireType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TireType",&Z_Registration_Info_UClass_UTireType.InnerSingleton,
               StaticRegisterNativesUTireType,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTireType>,InternalVTableHelperCtorCaller<UTireType>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTireType.InnerSingleton;
}

// UTireType @ 1489b6db0

UTireType * __thiscall UTireType::UTireType(UTireType *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UTireType__6B_;
  return this;
}

// UTireType @ 1489b6de0

UTireType * __thiscall UTireType::UTireType(UTireType *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->FrictionScale = 1.0;
  this->_padding_ = (longlong)&___7UTireType__6B_;
  return this;
}

// ~UTireType @ 1489ba8a0

void __thiscall UTireType::~UTireType(UTireType *this)

{
  this->_padding_ = (longlong)&___7UTireType__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 1489ebb90

UClass * __cdecl UTireType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTireType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TireType",&Z_Registration_Info_UClass_UTireType.InnerSingleton,
               StaticRegisterNativesUTireType,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTireType>,InternalVTableHelperCtorCaller<UTireType>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTireType.InnerSingleton;
}

// StaticRegisterNativesUTireType @ 148a187e0

void __cdecl UTireType::StaticRegisterNativesUTireType(void)

{
  return;
}


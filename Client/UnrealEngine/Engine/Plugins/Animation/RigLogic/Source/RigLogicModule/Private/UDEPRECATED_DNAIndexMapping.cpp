// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 6

// StaticClass @ 14a65afc0

UClass * __cdecl UDEPRECATED_DNAIndexMapping::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAIndexMapping",
               &Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_DNAIndexMapping,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_DNAIndexMapping>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DNAIndexMapping>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton;
}

// UDEPRECATED_DNAIndexMapping @ 14a660b70

UDEPRECATED_DNAIndexMapping * __thiscall
UDEPRECATED_DNAIndexMapping::UDEPRECATED_DNAIndexMapping
          (UDEPRECATED_DNAIndexMapping *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_DNAIndexMapping__6B_;
  return this;
}

// UDEPRECATED_DNAIndexMapping @ 14a660ba0

UDEPRECATED_DNAIndexMapping * __thiscall
UDEPRECATED_DNAIndexMapping::UDEPRECATED_DNAIndexMapping
          (UDEPRECATED_DNAIndexMapping *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_DNAIndexMapping__6B_;
  return this;
}

// ~UDEPRECATED_DNAIndexMapping @ 14a6614b0

void __thiscall
UDEPRECATED_DNAIndexMapping::~UDEPRECATED_DNAIndexMapping(UDEPRECATED_DNAIndexMapping *this)

{
  *(undefined ***)this = &___7UDEPRECATED_DNAIndexMapping__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14a6765a0

UClass * __cdecl UDEPRECATED_DNAIndexMapping::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"DNAIndexMapping",
               &Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_DNAIndexMapping,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_DNAIndexMapping>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DNAIndexMapping>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_DNAIndexMapping @ 14a683030

void __cdecl UDEPRECATED_DNAIndexMapping::StaticRegisterNativesUDEPRECATED_DNAIndexMapping(void)

{
  return;
}


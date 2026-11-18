// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 6

// StaticClass @ 144646490

UClass * __cdecl UDEPRECATED_ClothSharedSimConfigBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothSharedSimConfigBase",
               &Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ClothSharedSimConfigBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ClothSharedSimConfigBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton;
}

// UDEPRECATED_ClothSharedSimConfigBase @ 144648a80

UDEPRECATED_ClothSharedSimConfigBase * __thiscall
UDEPRECATED_ClothSharedSimConfigBase::UDEPRECATED_ClothSharedSimConfigBase
          (UDEPRECATED_ClothSharedSimConfigBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_ClothSharedSimConfigBase__6B_;
  return this;
}

// ~UDEPRECATED_ClothSharedSimConfigBase @ 144648e30

void __thiscall
UDEPRECATED_ClothSharedSimConfigBase::~UDEPRECATED_ClothSharedSimConfigBase
          (UDEPRECATED_ClothSharedSimConfigBase *this)

{
  *(undefined ***)this = &___7UDEPRECATED_ClothSharedSimConfigBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14464bd00

UClass * __cdecl UDEPRECATED_ClothSharedSimConfigBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothSharedSimConfigBase",
               &Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_ClothSharedSimConfigBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_ClothSharedSimConfigBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.InnerSingleton;
}

// Migrate @ 14464beb0

UClothConfigBase * __thiscall
UDEPRECATED_ClothSharedSimConfigBase::Migrate(UDEPRECATED_ClothSharedSimConfigBase *this)

{
  return (UClothConfigBase *)0x0;
}

// StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase @ 14464c830

void __cdecl
UDEPRECATED_ClothSharedSimConfigBase::StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase
          (void)

{
  return;
}


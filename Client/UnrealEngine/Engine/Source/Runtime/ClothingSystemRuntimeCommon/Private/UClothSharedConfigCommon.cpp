// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 6

// StaticClass @ 148c0a870

UClass * __cdecl UClothSharedConfigCommon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothSharedConfigCommon",
               &Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton,
               StaticRegisterNativesUClothSharedConfigCommon,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothSharedConfigCommon>,
               InternalVTableHelperCtorCaller<UClothSharedConfigCommon>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton;
}

// UClothSharedConfigCommon @ 148c1a230

UClothSharedConfigCommon * __thiscall
UClothSharedConfigCommon::UClothSharedConfigCommon
          (UClothSharedConfigCommon *this,FVTableHelper *param_1)

{
  UClothConfigBase::UClothConfigBase((UClothConfigBase *)this,param_1);
  *(undefined ***)this = &___7UClothSharedConfigCommon__6B_;
  return this;
}

// UClothSharedConfigCommon @ 148c1a260

UClothSharedConfigCommon * __thiscall
UClothSharedConfigCommon::UClothSharedConfigCommon(UClothSharedConfigCommon *this)

{
  UClothConfigBase::UClothConfigBase((UClothConfigBase *)this);
  *(undefined ***)this = &___7UClothSharedConfigCommon__6B_;
  return this;
}

// ~UClothSharedConfigCommon @ 148c1abd0

void __thiscall UClothSharedConfigCommon::~UClothSharedConfigCommon(UClothSharedConfigCommon *this)

{
  *(undefined ***)this = &___7UClothConfigCommon__6B_;
  UClothConfigBase::~UClothConfigBase((UClothConfigBase *)this);
  return;
}

// GetPrivateStaticClass @ 148c2d770

UClass * __cdecl UClothSharedConfigCommon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothSharedConfigCommon",
               &Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton,
               StaticRegisterNativesUClothSharedConfigCommon,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothSharedConfigCommon>,
               InternalVTableHelperCtorCaller<UClothSharedConfigCommon>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothSharedConfigCommon.InnerSingleton;
}

// StaticRegisterNativesUClothSharedConfigCommon @ 148c34510

void __cdecl UClothSharedConfigCommon::StaticRegisterNativesUClothSharedConfigCommon(void)

{
  return;
}


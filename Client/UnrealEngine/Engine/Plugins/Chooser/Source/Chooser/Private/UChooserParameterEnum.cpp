// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a86b640

UClass * __cdecl UChooserParameterEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterEnum",
               &Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton,
               StaticRegisterNativesUChooserParameterEnum,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterEnum>,
               InternalVTableHelperCtorCaller<UChooserParameterEnum>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton;
}

// UChooserParameterEnum @ 14a87d9c0

UChooserParameterEnum * __thiscall
UChooserParameterEnum::UChooserParameterEnum(UChooserParameterEnum *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterEnum__6B_;
  return this;
}

// UChooserParameterEnum @ 14a87d9f0

UChooserParameterEnum * __thiscall
UChooserParameterEnum::UChooserParameterEnum
          (UChooserParameterEnum *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterEnum__6B_;
  return this;
}

// ~UChooserParameterEnum @ 14a87e6d0

void __thiscall UChooserParameterEnum::~UChooserParameterEnum(UChooserParameterEnum *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88a970

UClass * __cdecl UChooserParameterEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterEnum",
               &Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton,
               StaticRegisterNativesUChooserParameterEnum,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterEnum>,
               InternalVTableHelperCtorCaller<UChooserParameterEnum>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterEnum.InnerSingleton;
}

// StaticRegisterNativesUChooserParameterEnum @ 14a88fdf0

void __cdecl UChooserParameterEnum::StaticRegisterNativesUChooserParameterEnum(void)

{
  return;
}


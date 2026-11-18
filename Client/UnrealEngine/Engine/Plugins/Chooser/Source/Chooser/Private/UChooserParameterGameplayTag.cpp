// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a86c8a0

UClass * __cdecl UChooserParameterGameplayTag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterGameplayTag",
               &Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton,
               StaticRegisterNativesUChooserParameterGameplayTag,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterGameplayTag>,
               InternalVTableHelperCtorCaller<UChooserParameterGameplayTag>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton;
}

// UChooserParameterGameplayTag @ 14a87da80

UChooserParameterGameplayTag * __thiscall
UChooserParameterGameplayTag::UChooserParameterGameplayTag
          (UChooserParameterGameplayTag *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterGameplayTag__6B_;
  return this;
}

// UChooserParameterGameplayTag @ 14a87dab0

UChooserParameterGameplayTag * __thiscall
UChooserParameterGameplayTag::UChooserParameterGameplayTag
          (UChooserParameterGameplayTag *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterGameplayTag__6B_;
  return this;
}

// ~UChooserParameterGameplayTag @ 14a87e6f0

void __thiscall
UChooserParameterGameplayTag::~UChooserParameterGameplayTag(UChooserParameterGameplayTag *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88aaf0

UClass * __cdecl UChooserParameterGameplayTag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterGameplayTag",
               &Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton,
               StaticRegisterNativesUChooserParameterGameplayTag,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterGameplayTag>,
               InternalVTableHelperCtorCaller<UChooserParameterGameplayTag>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterGameplayTag.InnerSingleton;
}

// StaticRegisterNativesUChooserParameterGameplayTag @ 14a88fe10

void __cdecl UChooserParameterGameplayTag::StaticRegisterNativesUChooserParameterGameplayTag(void)

{
  return;
}


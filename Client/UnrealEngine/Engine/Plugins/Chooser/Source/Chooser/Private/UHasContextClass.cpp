// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a874870

UClass * __cdecl UHasContextClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UHasContextClass.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"HasContextClass",
               &Z_Registration_Info_UClass_UHasContextClass.InnerSingleton,
               StaticRegisterNativesUHasContextClass,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHasContextClass>,
               InternalVTableHelperCtorCaller<UHasContextClass>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHasContextClass.InnerSingleton;
}

// UHasContextClass @ 14a87e160

UHasContextClass * __thiscall
UHasContextClass::UHasContextClass(UHasContextClass *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UHasContextClass__6B_;
  return this;
}

// UHasContextClass @ 14a87e190

UHasContextClass * __thiscall
UHasContextClass::UHasContextClass(UHasContextClass *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UHasContextClass__6B_;
  return this;
}

// ~UHasContextClass @ 14a87eb00

void __thiscall UHasContextClass::~UHasContextClass(UHasContextClass *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88b4b0

UClass * __cdecl UHasContextClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHasContextClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"HasContextClass",
               &Z_Registration_Info_UClass_UHasContextClass.InnerSingleton,
               StaticRegisterNativesUHasContextClass,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHasContextClass>,
               InternalVTableHelperCtorCaller<UHasContextClass>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHasContextClass.InnerSingleton;
}

// StaticRegisterNativesUHasContextClass @ 14a88ff20

void __cdecl UHasContextClass::StaticRegisterNativesUHasContextClass(void)

{
  return;
}


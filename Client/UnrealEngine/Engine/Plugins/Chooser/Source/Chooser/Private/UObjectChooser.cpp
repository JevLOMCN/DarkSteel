// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a870b30

UClass * __cdecl UObjectChooser::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UObjectChooser.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser",
               &Z_Registration_Info_UClass_UObjectChooser.InnerSingleton,
               StaticRegisterNativesUObjectChooser,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectChooser>,InternalVTableHelperCtorCaller<UObjectChooser>,
               aFStackX_8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectChooser.InnerSingleton;
}

// UObjectChooser @ 14a87e1c0

UObjectChooser * __thiscall
UObjectChooser::UObjectChooser(UObjectChooser *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectChooser__6B_;
  return this;
}

// UObjectChooser @ 14a87e1f0

UObjectChooser * __thiscall
UObjectChooser::UObjectChooser(UObjectChooser *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectChooser__6B_;
  return this;
}

// ~UObjectChooser @ 14a87eb10

void __thiscall UObjectChooser::~UObjectChooser(UObjectChooser *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88b570

UClass * __cdecl UObjectChooser::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectChooser.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ObjectChooser",
               &Z_Registration_Info_UClass_UObjectChooser.InnerSingleton,
               StaticRegisterNativesUObjectChooser,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectChooser>,InternalVTableHelperCtorCaller<UObjectChooser>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectChooser.InnerSingleton;
}

// StaticRegisterNativesUObjectChooser @ 14a88ff30

void __cdecl UObjectChooser::StaticRegisterNativesUObjectChooser(void)

{
  return;
}


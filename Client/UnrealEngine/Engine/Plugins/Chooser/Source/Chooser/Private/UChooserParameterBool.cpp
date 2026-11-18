// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a876430

UClass * __cdecl UChooserParameterBool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterBool",
               &Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton,
               StaticRegisterNativesUChooserParameterBool,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterBool>,
               InternalVTableHelperCtorCaller<UChooserParameterBool>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton;
}

// UChooserParameterBool @ 14a87d960

UChooserParameterBool * __thiscall
UChooserParameterBool::UChooserParameterBool(UChooserParameterBool *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterBool__6B_;
  return this;
}

// UChooserParameterBool @ 14a87d990

UChooserParameterBool * __thiscall
UChooserParameterBool::UChooserParameterBool
          (UChooserParameterBool *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterBool__6B_;
  return this;
}

// ~UChooserParameterBool @ 14a87e6c0

void __thiscall UChooserParameterBool::~UChooserParameterBool(UChooserParameterBool *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88a8b0

UClass * __cdecl UChooserParameterBool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterBool",
               &Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton,
               StaticRegisterNativesUChooserParameterBool,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterBool>,
               InternalVTableHelperCtorCaller<UChooserParameterBool>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterBool.InnerSingleton;
}

// StaticRegisterNativesUChooserParameterBool @ 14a88fde0

void __cdecl UChooserParameterBool::StaticRegisterNativesUChooserParameterBool(void)

{
  return;
}


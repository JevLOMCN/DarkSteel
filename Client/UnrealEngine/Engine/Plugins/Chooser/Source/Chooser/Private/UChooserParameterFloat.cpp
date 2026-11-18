// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a86bf10

UClass * __cdecl UChooserParameterFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterFloat",
               &Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton,
               StaticRegisterNativesUChooserParameterFloat,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterFloat>,
               InternalVTableHelperCtorCaller<UChooserParameterFloat>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton;
}

// UChooserParameterFloat @ 14a87da20

UChooserParameterFloat * __thiscall
UChooserParameterFloat::UChooserParameterFloat(UChooserParameterFloat *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterFloat__6B_;
  return this;
}

// UChooserParameterFloat @ 14a87da50

UChooserParameterFloat * __thiscall
UChooserParameterFloat::UChooserParameterFloat
          (UChooserParameterFloat *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterFloat__6B_;
  return this;
}

// ~UChooserParameterFloat @ 14a87e6e0

void __thiscall UChooserParameterFloat::~UChooserParameterFloat(UChooserParameterFloat *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88aa30

UClass * __cdecl UChooserParameterFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserParameterFloat",
               &Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton,
               StaticRegisterNativesUChooserParameterFloat,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterFloat>,
               InternalVTableHelperCtorCaller<UChooserParameterFloat>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterFloat.InnerSingleton;
}

// StaticRegisterNativesUChooserParameterFloat @ 14a88fe00

void __cdecl UChooserParameterFloat::StaticRegisterNativesUChooserParameterFloat(void)

{
  return;
}


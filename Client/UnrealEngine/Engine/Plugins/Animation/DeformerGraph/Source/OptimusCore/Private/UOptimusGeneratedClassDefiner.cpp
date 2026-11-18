// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e11d100

UClass * __cdecl UOptimusGeneratedClassDefiner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGeneratedClassDefiner",
               &Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton,
               StaticRegisterNativesUOptimusGeneratedClassDefiner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusGeneratedClassDefiner>,
               InternalVTableHelperCtorCaller<UOptimusGeneratedClassDefiner>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton;
}

// UOptimusGeneratedClassDefiner @ 14e15a010

UOptimusGeneratedClassDefiner * __thiscall
UOptimusGeneratedClassDefiner::UOptimusGeneratedClassDefiner
          (UOptimusGeneratedClassDefiner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGeneratedClassDefiner__6B_;
  return this;
}

// UOptimusGeneratedClassDefiner @ 14e15a040

UOptimusGeneratedClassDefiner * __thiscall
UOptimusGeneratedClassDefiner::UOptimusGeneratedClassDefiner
          (UOptimusGeneratedClassDefiner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGeneratedClassDefiner__6B_;
  return this;
}

// ~UOptimusGeneratedClassDefiner @ 14e162bb0

void __thiscall
UOptimusGeneratedClassDefiner::~UOptimusGeneratedClassDefiner(UOptimusGeneratedClassDefiner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5fb0

UClass * __cdecl UOptimusGeneratedClassDefiner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGeneratedClassDefiner",
               &Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton,
               StaticRegisterNativesUOptimusGeneratedClassDefiner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusGeneratedClassDefiner>,
               InternalVTableHelperCtorCaller<UOptimusGeneratedClassDefiner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.InnerSingleton;
}

// StaticRegisterNativesUOptimusGeneratedClassDefiner @ 14e225a30

void __cdecl UOptimusGeneratedClassDefiner::StaticRegisterNativesUOptimusGeneratedClassDefiner(void)

{
  return;
}


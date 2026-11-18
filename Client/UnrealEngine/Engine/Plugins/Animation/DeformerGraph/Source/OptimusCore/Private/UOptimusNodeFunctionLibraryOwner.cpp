// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e1173a0

UClass * __cdecl UOptimusNodeFunctionLibraryOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeFunctionLibraryOwner",
               &Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton,
               StaticRegisterNativesUOptimusNodeFunctionLibraryOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeFunctionLibraryOwner>,
               InternalVTableHelperCtorCaller<UOptimusNodeFunctionLibraryOwner>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton;
}

// UOptimusNodeFunctionLibraryOwner @ 14e15a8b0

UOptimusNodeFunctionLibraryOwner * __thiscall
UOptimusNodeFunctionLibraryOwner::UOptimusNodeFunctionLibraryOwner
          (UOptimusNodeFunctionLibraryOwner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeFunctionLibraryOwner__6B_;
  return this;
}

// UOptimusNodeFunctionLibraryOwner @ 14e15a8e0

UOptimusNodeFunctionLibraryOwner * __thiscall
UOptimusNodeFunctionLibraryOwner::UOptimusNodeFunctionLibraryOwner
          (UOptimusNodeFunctionLibraryOwner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeFunctionLibraryOwner__6B_;
  return this;
}

// ~UOptimusNodeFunctionLibraryOwner @ 14e162f10

void __thiscall
UOptimusNodeFunctionLibraryOwner::~UOptimusNodeFunctionLibraryOwner
          (UOptimusNodeFunctionLibraryOwner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6a20

UClass * __cdecl UOptimusNodeFunctionLibraryOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeFunctionLibraryOwner",
               &Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton,
               StaticRegisterNativesUOptimusNodeFunctionLibraryOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeFunctionLibraryOwner>,
               InternalVTableHelperCtorCaller<UOptimusNodeFunctionLibraryOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeFunctionLibraryOwner @ 14e225b40

void __cdecl
UOptimusNodeFunctionLibraryOwner::StaticRegisterNativesUOptimusNodeFunctionLibraryOwner(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e105700

UClass * __cdecl UOptimusPathResolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPathResolver",
               &Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton,
               StaticRegisterNativesUOptimusPathResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPathResolver>,
               InternalVTableHelperCtorCaller<UOptimusPathResolver>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton;
}

// UOptimusPathResolver @ 14e15c430

UOptimusPathResolver * __thiscall
UOptimusPathResolver::UOptimusPathResolver(UOptimusPathResolver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPathResolver__6B_;
  return this;
}

// UOptimusPathResolver @ 14e15c460

UOptimusPathResolver * __thiscall
UOptimusPathResolver::UOptimusPathResolver(UOptimusPathResolver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPathResolver__6B_;
  return this;
}

// ~UOptimusPathResolver @ 14e163bf0

void __thiscall UOptimusPathResolver::~UOptimusPathResolver(UOptimusPathResolver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8360

UClass * __cdecl UOptimusPathResolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPathResolver",
               &Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton,
               StaticRegisterNativesUOptimusPathResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPathResolver>,
               InternalVTableHelperCtorCaller<UOptimusPathResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPathResolver.InnerSingleton;
}

// StaticRegisterNativesUOptimusPathResolver @ 14e225d90

void __cdecl UOptimusPathResolver::StaticRegisterNativesUOptimusPathResolver(void)

{
  return;
}


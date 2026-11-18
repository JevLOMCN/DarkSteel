// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d63e90

UClass * __cdecl UNavigationPathGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPathGenerator",
               &Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton,
               StaticRegisterNativesUNavigationPathGenerator,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationPathGenerator>,
               InternalVTableHelperCtorCaller<UNavigationPathGenerator>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton;
}

// UNavigationPathGenerator @ 146d76970

UNavigationPathGenerator * __thiscall
UNavigationPathGenerator::UNavigationPathGenerator
          (UNavigationPathGenerator *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationPathGenerator__6B_;
  return this;
}

// ~UNavigationPathGenerator @ 146d78f20

void __thiscall UNavigationPathGenerator::~UNavigationPathGenerator(UNavigationPathGenerator *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0c60

UClass * __cdecl UNavigationPathGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPathGenerator",
               &Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton,
               StaticRegisterNativesUNavigationPathGenerator,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationPathGenerator>,
               InternalVTableHelperCtorCaller<UNavigationPathGenerator>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton;
}

// StaticRegisterNativesUNavigationPathGenerator @ 146dbaa40

void __cdecl UNavigationPathGenerator::StaticRegisterNativesUNavigationPathGenerator(void)

{
  return;
}

// UNavigationPathGenerator @ 146dd8bd0

UNavigationPathGenerator * __thiscall
UNavigationPathGenerator::UNavigationPathGenerator
          (UNavigationPathGenerator *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationPathGenerator__6B_;
  return this;
}


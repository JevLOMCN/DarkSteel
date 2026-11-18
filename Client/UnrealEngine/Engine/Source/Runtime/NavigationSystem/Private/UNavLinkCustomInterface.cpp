// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d602b0

UClass * __cdecl UNavLinkCustomInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomInterface",
               &Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton,
               StaticRegisterNativesUNavLinkCustomInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkCustomInterface>,
               InternalVTableHelperCtorCaller<UNavLinkCustomInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton;
}

// UNavLinkCustomInterface @ 146d761a0

UNavLinkCustomInterface * __thiscall
UNavLinkCustomInterface::UNavLinkCustomInterface
          (UNavLinkCustomInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavLinkCustomInterface__6B_;
  return this;
}

// ~UNavLinkCustomInterface @ 146d78cf0

void __thiscall UNavLinkCustomInterface::~UNavLinkCustomInterface(UNavLinkCustomInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0670

UClass * __cdecl UNavLinkCustomInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomInterface",
               &Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton,
               StaticRegisterNativesUNavLinkCustomInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkCustomInterface>,
               InternalVTableHelperCtorCaller<UNavLinkCustomInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton;
}

// StaticRegisterNativesUNavLinkCustomInterface @ 146dba990

void __cdecl UNavLinkCustomInterface::StaticRegisterNativesUNavLinkCustomInterface(void)

{
  return;
}

// UNavLinkCustomInterface @ 146dd8630

UNavLinkCustomInterface * __thiscall
UNavLinkCustomInterface::UNavLinkCustomInterface
          (UNavLinkCustomInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavLinkCustomInterface__6B_;
  return this;
}


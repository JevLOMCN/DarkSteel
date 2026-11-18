// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d605e0

UClass * __cdecl UNavLinkHostInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkHostInterface",
               &Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton,
               StaticRegisterNativesUNavLinkHostInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkHostInterface>,
               InternalVTableHelperCtorCaller<UNavLinkHostInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton;
}

// UNavLinkHostInterface @ 146d761d0

UNavLinkHostInterface * __thiscall
UNavLinkHostInterface::UNavLinkHostInterface(UNavLinkHostInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavLinkHostInterface__6B_;
  return this;
}

// ~UNavLinkHostInterface @ 146d78d00

void __thiscall UNavLinkHostInterface::~UNavLinkHostInterface(UNavLinkHostInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da0730

UClass * __cdecl UNavLinkHostInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkHostInterface",
               &Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton,
               StaticRegisterNativesUNavLinkHostInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkHostInterface>,
               InternalVTableHelperCtorCaller<UNavLinkHostInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton;
}

// StaticRegisterNativesUNavLinkHostInterface @ 146dba9a0

void __cdecl UNavLinkHostInterface::StaticRegisterNativesUNavLinkHostInterface(void)

{
  return;
}

// UNavLinkHostInterface @ 146dd8660

UNavLinkHostInterface * __thiscall
UNavLinkHostInterface::UNavLinkHostInterface
          (UNavLinkHostInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavLinkHostInterface__6B_;
  return this;
}


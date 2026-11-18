// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d60c20

UClass * __cdecl UNavNodeInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavNodeInterface",
               &Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton,
               StaticRegisterNativesUNavNodeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavNodeInterface>,
               InternalVTableHelperCtorCaller<UNavNodeInterface>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton;
}

// UNavNodeInterface @ 146d76230

UNavNodeInterface * __thiscall
UNavNodeInterface::UNavNodeInterface(UNavNodeInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavNodeInterface__6B_;
  return this;
}

// UNavNodeInterface @ 146d76260

UNavNodeInterface * __thiscall
UNavNodeInterface::UNavNodeInterface(UNavNodeInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavNodeInterface__6B_;
  return this;
}

// ~UNavNodeInterface @ 146d78d30

void __thiscall UNavNodeInterface::~UNavNodeInterface(UNavNodeInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146da08b0

UClass * __cdecl UNavNodeInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavNodeInterface",
               &Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton,
               StaticRegisterNativesUNavNodeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavNodeInterface>,
               InternalVTableHelperCtorCaller<UNavNodeInterface>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton;
}

// StaticRegisterNativesUNavNodeInterface @ 146dba9c0

void __cdecl UNavNodeInterface::StaticRegisterNativesUNavNodeInterface(void)

{
  return;
}


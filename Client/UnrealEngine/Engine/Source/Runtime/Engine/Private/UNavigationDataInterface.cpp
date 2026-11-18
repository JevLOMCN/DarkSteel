// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472eda10

UClass * __cdecl UNavigationDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataInterface",
               &Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton,
               StaticRegisterNativesUNavigationDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationDataInterface>,
               InternalVTableHelperCtorCaller<UNavigationDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton;
}

// UNavigationDataInterface @ 1472f1fb0

UNavigationDataInterface * __thiscall
UNavigationDataInterface::UNavigationDataInterface
          (UNavigationDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationDataInterface__6B_;
  return this;
}

// ~UNavigationDataInterface @ 1472f2470

void __thiscall UNavigationDataInterface::~UNavigationDataInterface(UNavigationDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f4160

UClass * __cdecl UNavigationDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataInterface",
               &Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton,
               StaticRegisterNativesUNavigationDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationDataInterface>,
               InternalVTableHelperCtorCaller<UNavigationDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationDataInterface.InnerSingleton;
}

// StaticRegisterNativesUNavigationDataInterface @ 1472f44e0

void __cdecl UNavigationDataInterface::StaticRegisterNativesUNavigationDataInterface(void)

{
  return;
}

// UNavigationDataInterface @ 14737cc90

UNavigationDataInterface * __thiscall
UNavigationDataInterface::UNavigationDataInterface
          (UNavigationDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationDataInterface__6B_;
  return this;
}


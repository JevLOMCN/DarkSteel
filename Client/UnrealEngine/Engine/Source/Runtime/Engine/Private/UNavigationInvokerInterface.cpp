// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ee0d0

UClass * __cdecl UNavigationInvokerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationInvokerInterface",
               &Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton,
               StaticRegisterNativesUNavigationInvokerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationInvokerInterface>,
               InternalVTableHelperCtorCaller<UNavigationInvokerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton;
}

// UNavigationInvokerInterface @ 1472f1fe0

UNavigationInvokerInterface * __thiscall
UNavigationInvokerInterface::UNavigationInvokerInterface
          (UNavigationInvokerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationInvokerInterface__6B_;
  return this;
}

// ~UNavigationInvokerInterface @ 1472f2480

void __thiscall
UNavigationInvokerInterface::~UNavigationInvokerInterface(UNavigationInvokerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f4220

UClass * __cdecl UNavigationInvokerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationInvokerInterface",
               &Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton,
               StaticRegisterNativesUNavigationInvokerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationInvokerInterface>,
               InternalVTableHelperCtorCaller<UNavigationInvokerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerInterface.InnerSingleton;
}

// StaticRegisterNativesUNavigationInvokerInterface @ 1472f44f0

void __cdecl UNavigationInvokerInterface::StaticRegisterNativesUNavigationInvokerInterface(void)

{
  return;
}

// UNavigationInvokerInterface @ 14737ccc0

UNavigationInvokerInterface * __thiscall
UNavigationInvokerInterface::UNavigationInvokerInterface
          (UNavigationInvokerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavigationInvokerInterface__6B_;
  return this;
}


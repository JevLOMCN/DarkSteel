// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ecf50

UClass * __cdecl UNavEdgeProviderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavEdgeProviderInterface",
               &Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton,
               StaticRegisterNativesUNavEdgeProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavEdgeProviderInterface>,
               InternalVTableHelperCtorCaller<UNavEdgeProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton;
}

// UNavEdgeProviderInterface @ 1472f1ee0

UNavEdgeProviderInterface * __thiscall
UNavEdgeProviderInterface::UNavEdgeProviderInterface
          (UNavEdgeProviderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavEdgeProviderInterface__6B_;
  return this;
}

// ~UNavEdgeProviderInterface @ 1472f23f0

void __thiscall
UNavEdgeProviderInterface::~UNavEdgeProviderInterface(UNavEdgeProviderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3e70

UClass * __cdecl UNavEdgeProviderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavEdgeProviderInterface",
               &Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton,
               StaticRegisterNativesUNavEdgeProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavEdgeProviderInterface>,
               InternalVTableHelperCtorCaller<UNavEdgeProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavEdgeProviderInterface.InnerSingleton;
}

// StaticRegisterNativesUNavEdgeProviderInterface @ 1472f44a0

void __cdecl UNavEdgeProviderInterface::StaticRegisterNativesUNavEdgeProviderInterface(void)

{
  return;
}

// UNavEdgeProviderInterface @ 14737cb60

UNavEdgeProviderInterface * __thiscall
UNavEdgeProviderInterface::UNavEdgeProviderInterface
          (UNavEdgeProviderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavEdgeProviderInterface__6B_;
  return this;
}


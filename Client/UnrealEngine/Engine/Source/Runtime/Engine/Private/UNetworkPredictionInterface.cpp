// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ea530

UClass * __cdecl UNetworkPredictionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPredictionInterface",
               &Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton,
               StaticRegisterNativesUNetworkPredictionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPredictionInterface>,
               InternalVTableHelperCtorCaller<UNetworkPredictionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton;
}

// UNetworkPredictionInterface @ 1472f2010

UNetworkPredictionInterface * __thiscall
UNetworkPredictionInterface::UNetworkPredictionInterface
          (UNetworkPredictionInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNetworkPredictionInterface__6B_;
  return this;
}

// ~UNetworkPredictionInterface @ 1472f2490

void __thiscall
UNetworkPredictionInterface::~UNetworkPredictionInterface(UNetworkPredictionInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f42e0

UClass * __cdecl UNetworkPredictionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPredictionInterface",
               &Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton,
               StaticRegisterNativesUNetworkPredictionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPredictionInterface>,
               InternalVTableHelperCtorCaller<UNetworkPredictionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPredictionInterface.InnerSingleton;
}

// StaticRegisterNativesUNetworkPredictionInterface @ 1472f4500

void __cdecl UNetworkPredictionInterface::StaticRegisterNativesUNetworkPredictionInterface(void)

{
  return;
}

// UNetworkPredictionInterface @ 148016ce0

UNetworkPredictionInterface * __thiscall
UNetworkPredictionInterface::UNetworkPredictionInterface
          (UNetworkPredictionInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNetworkPredictionInterface__6B_;
  return this;
}


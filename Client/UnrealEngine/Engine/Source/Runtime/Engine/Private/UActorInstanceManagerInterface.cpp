// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472567f0

UClass * __cdecl UActorInstanceManagerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorInstanceManagerInterface",
               &Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton,
               StaticRegisterNativesUActorInstanceManagerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorInstanceManagerInterface>,
               InternalVTableHelperCtorCaller<UActorInstanceManagerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton;
}

// UActorInstanceManagerInterface @ 14725cad0

UActorInstanceManagerInterface * __thiscall
UActorInstanceManagerInterface::UActorInstanceManagerInterface
          (UActorInstanceManagerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActorInstanceManagerInterface__6B_;
  return this;
}

// UActorInstanceManagerInterface @ 14725cb00

UActorInstanceManagerInterface * __thiscall
UActorInstanceManagerInterface::UActorInstanceManagerInterface
          (UActorInstanceManagerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UActorInstanceManagerInterface__6B_;
  return this;
}

// ~UActorInstanceManagerInterface @ 14725dac0

void __thiscall
UActorInstanceManagerInterface::~UActorInstanceManagerInterface
          (UActorInstanceManagerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14725fd40

UClass * __cdecl UActorInstanceManagerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorInstanceManagerInterface",
               &Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton,
               StaticRegisterNativesUActorInstanceManagerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorInstanceManagerInterface>,
               InternalVTableHelperCtorCaller<UActorInstanceManagerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorInstanceManagerInterface.InnerSingleton;
}

// StaticRegisterNativesUActorInstanceManagerInterface @ 147260e00

void __cdecl
UActorInstanceManagerInterface::StaticRegisterNativesUActorInstanceManagerInterface(void)

{
  return;
}


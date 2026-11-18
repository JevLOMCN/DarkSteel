// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 6

// StaticClass @ 146300db0

UClass * __cdecl UChaosNotifyHandlerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosNotifyHandlerInterface",
               &Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton,
               StaticRegisterNativesUChaosNotifyHandlerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosNotifyHandlerInterface>,
               InternalVTableHelperCtorCaller<UChaosNotifyHandlerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton;
}

// UChaosNotifyHandlerInterface @ 14630a450

UChaosNotifyHandlerInterface * __thiscall
UChaosNotifyHandlerInterface::UChaosNotifyHandlerInterface
          (UChaosNotifyHandlerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChaosNotifyHandlerInterface__6B_;
  return this;
}

// UChaosNotifyHandlerInterface @ 14630a480

UChaosNotifyHandlerInterface * __thiscall
UChaosNotifyHandlerInterface::UChaosNotifyHandlerInterface
          (UChaosNotifyHandlerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChaosNotifyHandlerInterface__6B_;
  return this;
}

// ~UChaosNotifyHandlerInterface @ 14630b460

void __thiscall
UChaosNotifyHandlerInterface::~UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146313870

UClass * __cdecl UChaosNotifyHandlerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosNotifyHandlerInterface",
               &Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton,
               StaticRegisterNativesUChaosNotifyHandlerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosNotifyHandlerInterface>,
               InternalVTableHelperCtorCaller<UChaosNotifyHandlerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.InnerSingleton;
}

// StaticRegisterNativesUChaosNotifyHandlerInterface @ 146320310

void __cdecl UChaosNotifyHandlerInterface::StaticRegisterNativesUChaosNotifyHandlerInterface(void)

{
  return;
}


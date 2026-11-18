// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462ecc20

UClass * __cdecl UDataflowSimulationInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationInterface",
               &Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowSimulationInterface>,
               InternalVTableHelperCtorCaller<UDataflowSimulationInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton;
}

// UDataflowSimulationInterface @ 1462f2670

UDataflowSimulationInterface * __thiscall
UDataflowSimulationInterface::UDataflowSimulationInterface
          (UDataflowSimulationInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowSimulationInterface__6B_;
  return this;
}

// UDataflowSimulationInterface @ 1462f26a0

UDataflowSimulationInterface * __thiscall
UDataflowSimulationInterface::UDataflowSimulationInterface
          (UDataflowSimulationInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowSimulationInterface__6B_;
  return this;
}

// ~UDataflowSimulationInterface @ 1462f2fb0

void __thiscall
UDataflowSimulationInterface::~UDataflowSimulationInterface(UDataflowSimulationInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6c90

UClass * __cdecl UDataflowSimulationInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationInterface",
               &Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowSimulationInterface>,
               InternalVTableHelperCtorCaller<UDataflowSimulationInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowSimulationInterface @ 1462fdf20

void __cdecl UDataflowSimulationInterface::StaticRegisterNativesUDataflowSimulationInterface(void)

{
  return;
}


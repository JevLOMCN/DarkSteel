// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462eb450

UClass * __cdecl UDataflowPhysicsSolverInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowPhysicsSolverInterface",
               &Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton,
               StaticRegisterNativesUDataflowPhysicsSolverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowPhysicsSolverInterface>,
               InternalVTableHelperCtorCaller<UDataflowPhysicsSolverInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton;
}

// UDataflowPhysicsSolverInterface @ 1462f25b0

UDataflowPhysicsSolverInterface * __thiscall
UDataflowPhysicsSolverInterface::UDataflowPhysicsSolverInterface
          (UDataflowPhysicsSolverInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowPhysicsSolverInterface__6B_;
  return this;
}

// UDataflowPhysicsSolverInterface @ 1462f25e0

UDataflowPhysicsSolverInterface * __thiscall
UDataflowPhysicsSolverInterface::UDataflowPhysicsSolverInterface
          (UDataflowPhysicsSolverInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowPhysicsSolverInterface__6B_;
  return this;
}

// ~UDataflowPhysicsSolverInterface @ 1462f2f90

void __thiscall
UDataflowPhysicsSolverInterface::~UDataflowPhysicsSolverInterface
          (UDataflowPhysicsSolverInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6b10

UClass * __cdecl UDataflowPhysicsSolverInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowPhysicsSolverInterface",
               &Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton,
               StaticRegisterNativesUDataflowPhysicsSolverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowPhysicsSolverInterface>,
               InternalVTableHelperCtorCaller<UDataflowPhysicsSolverInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowPhysicsSolverInterface @ 1462fded0

void __cdecl
UDataflowPhysicsSolverInterface::StaticRegisterNativesUDataflowPhysicsSolverInterface(void)

{
  return;
}


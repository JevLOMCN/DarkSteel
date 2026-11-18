// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462ed990

UClass * __cdecl UDataflowPhysicsObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowPhysicsObjectInterface",
               &Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowPhysicsObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowPhysicsObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowPhysicsObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton;
}

// UDataflowPhysicsObjectInterface @ 1462f2550

UDataflowPhysicsObjectInterface * __thiscall
UDataflowPhysicsObjectInterface::UDataflowPhysicsObjectInterface
          (UDataflowPhysicsObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowPhysicsObjectInterface__6B_;
  return this;
}

// UDataflowPhysicsObjectInterface @ 1462f2580

UDataflowPhysicsObjectInterface * __thiscall
UDataflowPhysicsObjectInterface::UDataflowPhysicsObjectInterface
          (UDataflowPhysicsObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowPhysicsObjectInterface__6B_;
  return this;
}

// ~UDataflowPhysicsObjectInterface @ 1462f2f80

void __thiscall
UDataflowPhysicsObjectInterface::~UDataflowPhysicsObjectInterface
          (UDataflowPhysicsObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6a50

UClass * __cdecl UDataflowPhysicsObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowPhysicsObjectInterface",
               &Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowPhysicsObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowPhysicsObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowPhysicsObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowPhysicsObjectInterface @ 1462fdec0

void __cdecl
UDataflowPhysicsObjectInterface::StaticRegisterNativesUDataflowPhysicsObjectInterface(void)

{
  return;
}


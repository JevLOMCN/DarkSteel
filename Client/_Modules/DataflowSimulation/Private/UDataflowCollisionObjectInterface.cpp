// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462ed510

UClass * __cdecl UDataflowCollisionObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowCollisionObjectInterface",
               &Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowCollisionObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowCollisionObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowCollisionObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton;
}

// UDataflowCollisionObjectInterface @ 1462f2430

UDataflowCollisionObjectInterface * __thiscall
UDataflowCollisionObjectInterface::UDataflowCollisionObjectInterface
          (UDataflowCollisionObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowCollisionObjectInterface__6B_;
  return this;
}

// UDataflowCollisionObjectInterface @ 1462f2460

UDataflowCollisionObjectInterface * __thiscall
UDataflowCollisionObjectInterface::UDataflowCollisionObjectInterface
          (UDataflowCollisionObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowCollisionObjectInterface__6B_;
  return this;
}

// ~UDataflowCollisionObjectInterface @ 1462f2f50

void __thiscall
UDataflowCollisionObjectInterface::~UDataflowCollisionObjectInterface
          (UDataflowCollisionObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6810

UClass * __cdecl UDataflowCollisionObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowCollisionObjectInterface",
               &Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowCollisionObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowCollisionObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowCollisionObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowCollisionObjectInterface @ 1462fde90

void __cdecl
UDataflowCollisionObjectInterface::StaticRegisterNativesUDataflowCollisionObjectInterface(void)

{
  return;
}


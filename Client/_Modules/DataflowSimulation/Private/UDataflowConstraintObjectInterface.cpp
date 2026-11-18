// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462ed690

UClass * __cdecl UDataflowConstraintObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowConstraintObjectInterface",
               &Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowConstraintObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowConstraintObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowConstraintObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton;
}

// UDataflowConstraintObjectInterface @ 1462f2490

UDataflowConstraintObjectInterface * __thiscall
UDataflowConstraintObjectInterface::UDataflowConstraintObjectInterface
          (UDataflowConstraintObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowConstraintObjectInterface__6B_;
  return this;
}

// UDataflowConstraintObjectInterface @ 1462f24c0

UDataflowConstraintObjectInterface * __thiscall
UDataflowConstraintObjectInterface::UDataflowConstraintObjectInterface
          (UDataflowConstraintObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowConstraintObjectInterface__6B_;
  return this;
}

// ~UDataflowConstraintObjectInterface @ 1462f2f60

void __thiscall
UDataflowConstraintObjectInterface::~UDataflowConstraintObjectInterface
          (UDataflowConstraintObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f68d0

UClass * __cdecl UDataflowConstraintObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowConstraintObjectInterface",
               &Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton,
               StaticRegisterNativesUDataflowConstraintObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowConstraintObjectInterface>,
               InternalVTableHelperCtorCaller<UDataflowConstraintObjectInterface>,local_res8,
               UDataflowSimulationInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUDataflowConstraintObjectInterface @ 1462fdea0

void __cdecl
UDataflowConstraintObjectInterface::StaticRegisterNativesUDataflowConstraintObjectInterface(void)

{
  return;
}


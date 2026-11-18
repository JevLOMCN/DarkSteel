// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462eaa10

UClass * __cdecl UDataflowSimulationActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationActor",
               &Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationActor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowSimulationActor>,
               InternalVTableHelperCtorCaller<UDataflowSimulationActor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton;
}

// UDataflowSimulationActor @ 1462f2610

UDataflowSimulationActor * __thiscall
UDataflowSimulationActor::UDataflowSimulationActor
          (UDataflowSimulationActor *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowSimulationActor__6B_;
  return this;
}

// UDataflowSimulationActor @ 1462f2640

UDataflowSimulationActor * __thiscall
UDataflowSimulationActor::UDataflowSimulationActor
          (UDataflowSimulationActor *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowSimulationActor__6B_;
  return this;
}

// ~UDataflowSimulationActor @ 1462f2fa0

void __thiscall UDataflowSimulationActor::~UDataflowSimulationActor(UDataflowSimulationActor *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6bd0

UClass * __cdecl UDataflowSimulationActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowSimulationActor",
               &Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton,
               StaticRegisterNativesUDataflowSimulationActor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowSimulationActor>,
               InternalVTableHelperCtorCaller<UDataflowSimulationActor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSimulationActor.InnerSingleton;
}

// StaticRegisterNativesUDataflowSimulationActor @ 1462fdee0

void __cdecl UDataflowSimulationActor::StaticRegisterNativesUDataflowSimulationActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDataflowSimulationActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}


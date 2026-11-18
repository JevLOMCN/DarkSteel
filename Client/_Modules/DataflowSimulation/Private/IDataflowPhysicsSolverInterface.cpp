// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 4

// IDataflowPhysicsSolverInterface @ 1462f2410

IDataflowPhysicsSolverInterface * __thiscall
IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
          (IDataflowPhysicsSolverInterface *this)

{
  *this = (IDataflowPhysicsSolverInterface)&___7IDataflowPhysicsSolverInterface__6B_;
  return this;
}

// ~IDataflowPhysicsSolverInterface @ 1462f2f10

void __thiscall
IDataflowPhysicsSolverInterface::~IDataflowPhysicsSolverInterface
          (IDataflowPhysicsSolverInterface *this)

{
  *this = (IDataflowPhysicsSolverInterface)&___7IDataflowSimulationInterface__6B_;
  return;
}

// GetSimulationType @ 1462f7920

FString * __thiscall
IDataflowPhysicsSolverInterface::GetSimulationType
          (IDataflowPhysicsSolverInterface *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName local_res10 [3];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy,(UObject *)pUVar1,
                         L"DataflowPhysicsSolverProxy");
  }
  local_res10[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 1462ffd30

UObject * __thiscall
IDataflowPhysicsSolverInterface::_getUObject(IDataflowPhysicsSolverInterface *this)

{
  return (UObject *)0x0;
}


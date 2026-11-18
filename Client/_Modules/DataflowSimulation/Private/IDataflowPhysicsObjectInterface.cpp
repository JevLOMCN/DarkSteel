// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 4

// IDataflowPhysicsObjectInterface @ 1462f23f0

IDataflowPhysicsObjectInterface * __thiscall
IDataflowPhysicsObjectInterface::IDataflowPhysicsObjectInterface
          (IDataflowPhysicsObjectInterface *this)

{
  *this = (IDataflowPhysicsObjectInterface)&___7IDataflowPhysicsObjectInterface__6B_;
  return this;
}

// ~IDataflowPhysicsObjectInterface @ 1462f2ef0

void __thiscall
IDataflowPhysicsObjectInterface::~IDataflowPhysicsObjectInterface
          (IDataflowPhysicsObjectInterface *this)

{
  *this = (IDataflowPhysicsObjectInterface)&___7IDataflowSimulationInterface__6B_;
  return;
}

// GetSimulationType @ 1462f78c0

FString * __thiscall
IDataflowPhysicsObjectInterface::GetSimulationType
          (IDataflowPhysicsObjectInterface *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName local_res10 [3];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsObjectProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowPhysicsObjectProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy,(UObject *)pUVar1,
                         L"DataflowPhysicsObjectProxy");
  }
  local_res10[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FDataflowPhysicsObjectProxy.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 1462ffd20

UObject * __thiscall
IDataflowPhysicsObjectInterface::_getUObject(IDataflowPhysicsObjectInterface *this)

{
  return (UObject *)0x0;
}


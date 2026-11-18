// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 4

// IDataflowCollisionObjectInterface @ 1462f23b0

IDataflowCollisionObjectInterface * __thiscall
IDataflowCollisionObjectInterface::IDataflowCollisionObjectInterface
          (IDataflowCollisionObjectInterface *this)

{
  *this = (IDataflowCollisionObjectInterface)&___7IDataflowCollisionObjectInterface__6B_;
  return this;
}

// ~IDataflowCollisionObjectInterface @ 1462f2eb0

void __thiscall
IDataflowCollisionObjectInterface::~IDataflowCollisionObjectInterface
          (IDataflowCollisionObjectInterface *this)

{
  *this = (IDataflowCollisionObjectInterface)&___7IDataflowSimulationInterface__6B_;
  return;
}

// GetSimulationType @ 1462f7800

FString * __thiscall
IDataflowCollisionObjectInterface::GetSimulationType
          (IDataflowCollisionObjectInterface *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName local_res10 [3];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy,(UObject *)pUVar1,
                         L"DataflowCollisionObjectProxy");
  }
  local_res10[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 1462ffd00

UObject * __thiscall
IDataflowCollisionObjectInterface::_getUObject(IDataflowCollisionObjectInterface *this)

{
  return (UObject *)0x0;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 4

// IDataflowConstraintObjectInterface @ 1462f23d0

IDataflowConstraintObjectInterface * __thiscall
IDataflowConstraintObjectInterface::IDataflowConstraintObjectInterface
          (IDataflowConstraintObjectInterface *this)

{
  *this = (IDataflowConstraintObjectInterface)&___7IDataflowConstraintObjectInterface__6B_;
  return this;
}

// ~IDataflowConstraintObjectInterface @ 1462f2ed0

void __thiscall
IDataflowConstraintObjectInterface::~IDataflowConstraintObjectInterface
          (IDataflowConstraintObjectInterface *this)

{
  *this = (IDataflowConstraintObjectInterface)&___7IDataflowSimulationInterface__6B_;
  return;
}

// GetSimulationType @ 1462f7860

FString * __thiscall
IDataflowConstraintObjectInterface::GetSimulationType
          (IDataflowConstraintObjectInterface *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName local_res10 [3];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConstraintObjectProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowConstraintObjectProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy,(UObject *)pUVar1,
                         L"DataflowConstraintObjectProxy");
  }
  local_res10[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FDataflowConstraintObjectProxy.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 1462ffd10

UObject * __thiscall
IDataflowConstraintObjectInterface::_getUObject(IDataflowConstraintObjectInterface *this)

{
  return (UObject *)0x0;
}


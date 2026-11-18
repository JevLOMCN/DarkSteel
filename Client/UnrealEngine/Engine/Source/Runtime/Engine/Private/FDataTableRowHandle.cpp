// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147aa4500

UScriptStruct * __cdecl FDataTableRowHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataTableRowHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDataTableRowHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle,(UObject *)pUVar1,
                         L"DataTableRowHandle");
  }
  return Z_Registration_Info_UScriptStruct_FDataTableRowHandle.OuterSingleton;
}

// operator== @ 147ac0910

bool __thiscall
FDataTableRowHandle::operator==(FDataTableRowHandle *this,FDataTableRowHandle *param_1)

{
  if (((this->DataTable).field0_0x0.DebugPtr == (param_1->DataTable).field0_0x0.DebugPtr) &&
     (this->RowName == param_1->RowName)) {
    return true;
  }
  return false;
}

// operator!= @ 147ac0a00

bool __thiscall
FDataTableRowHandle::operator!=(FDataTableRowHandle *this,FDataTableRowHandle *param_1)

{
  if (((this->DataTable).field0_0x0.DebugPtr == (param_1->DataTable).field0_0x0.DebugPtr) &&
     (this->RowName == param_1->RowName)) {
    return false;
  }
  return true;
}

// PostSerialize @ 147afec80

void __thiscall FDataTableRowHandle::PostSerialize(FDataTableRowHandle *this,FArchive *param_1)

{
  code *pcVar1;
  TObjectPtr<UDataTable_const_>_u_0 local_res10;
  
  if ((param_1->field_0x28 & 4) != 0) {
    local_res10 = (TObjectPtr<UDataTable_const_>_u_0)(this->DataTable).field0_0x0.DebugPtr;
    if (local_res10.DebugPtr != (UDataTable *)0x0) {
      pcVar1 = *(code **)(*(longlong *)param_1 + 0x228);
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      (*pcVar1)(param_1,&local_res10,&this->RowName);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// GetRow<FCommonInputActionDataBase> @ 14a79b2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FCommonInputActionDataBase * __thiscall
FDataTableRowHandle::GetRow<FCommonInputActionDataBase>(FDataTableRowHandle *this,wchar_t *param_1)

{
  UDataTable *this_00;
  FName FVar1;
  UPackage *pUVar2;
  FCommonInputActionDataBase *pFVar3;
  FString local_18;
  
  this_00 = (this->DataTable).field0_0x0.DebugPtr;
  FVar1 = this->RowName;
  if (this_00 == (UDataTable *)0x0) {
    if ((FVar1 != (FName)0x0) && (2 < (byte)LogDataTable._0_1_)) {
      ::FName::ToString(&this->RowName,&local_18);
      UE::Logging::Private::BasicLog<3>
                (&`public:_struct_FCommonInputActionDataBase*___ptr64___cdecl_FDataTableRowHandle::GetRow<FCommonInputActionDataBase>(wchar_t_const*___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogDataTable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (FCommonInputActionDataBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionDataBase,(UObject *)pUVar2,
                         L"CommonInputActionDataBase");
  }
  pFVar3 = (FCommonInputActionDataBase *)
           UDataTable::FindRowInternal
                     (this_00,Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.
                              OuterSingleton,FVar1,param_1,true);
  return pFVar3;
}

// FDataTableRowHandle @ 14a7aa600

FDataTableRowHandle * __thiscall
FDataTableRowHandle::FDataTableRowHandle(FDataTableRowHandle *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  
  pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr;
  (this->DataTable).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->RowName = param_1->RowName;
  return this;
}

// operator= @ 14a7b4830

FDataTableRowHandle * __thiscall
FDataTableRowHandle::operator=(FDataTableRowHandle *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DataTable).field0_0x0 = (param_1->DataTable).field0_0x0;
  this->RowName = param_1->RowName;
  return this;
}


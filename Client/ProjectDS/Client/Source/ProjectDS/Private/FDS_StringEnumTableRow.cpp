// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// StaticStruct @ 14b59fd30

UScriptStruct * __cdecl FDS_StringEnumTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringEnumTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StringEnumTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StringEnumTableRow,(UObject *)pUVar1,
                         L"DS_StringEnumTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StringEnumTableRow.OuterSingleton;
}

// Get @ 14b982b90

FDS_StringEnumTableRow * __cdecl FDS_StringEnumTableRow::Get(FName *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StringEnumTableRow *pFVar4;
  UDataTable *this_00;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  FString local_18;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6911726436629872625>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StringEnumTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StringEnumTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StringEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_18);
      FVar1 = *param_1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      pUVar5 = StaticStruct();
      pFVar4 = (FDS_StringEnumTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar5,FVar1,(wchar_t *)FVar6.Data,param_2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return pFVar4;
    }
  }
  return (FDS_StringEnumTableRow *)0x0;
}

// GetAll @ 14b985a30

TArray<FDS_StringEnumTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_StringEnumTableRow::GetAll
          (TArray<FDS_StringEnumTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_StringEnumTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UDataTable *this_00;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6911726436629872600>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StringEnumTableRow.cpp"
                       ,0x28,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_StringEnumTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StringEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_StringEnumTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b988150

FDS_StringEnumTableRow * __cdecl FDS_StringEnumTableRow::GetRef(FName *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_StringEnumTableRow *pFVar4;
  UDataTable *this_00;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  FString local_18;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6911726436629872625>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_StringEnumTableRow.cpp"
                       ,0xf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_StringEnumTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,StringEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_18);
      FVar1 = *param_1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      pUVar5 = StaticStruct();
      pFVar4 = (FDS_StringEnumTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar5,FVar1,(wchar_t *)FVar6.Data,param_2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pFVar4 == (FDS_StringEnumTableRow *)0x0) {
        pFVar4 = &DefaultObject;
      }
      return pFVar4;
    }
  }
  return &DefaultObject;
}

// IsValid @ 14b98c830

bool __thiscall FDS_StringEnumTableRow::IsValid(FDS_StringEnumTableRow *this)

{
  return this != &DefaultObject;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticStruct @ 14b4aadc0

UScriptStruct * __cdecl FDS_IconEnumTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_IconEnumTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_IconEnumTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_IconEnumTableRow,(UObject *)pUVar1,
                         L"DS_IconEnumTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_IconEnumTableRow.OuterSingleton;
}

// Get @ 14b92b9b0

FDS_IconEnumTableRow * __cdecl FDS_IconEnumTableRow::Get(FName *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_IconEnumTableRow *pFVar4;
  UDataTable *this_00;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  FString local_18;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717163622230392816>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_IconEnumTableRow.cpp"
                       ,0x10,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_IconEnumTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,IconEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_18);
      FVar1 = *param_1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      pUVar5 = StaticStruct();
      pFVar4 = (FDS_IconEnumTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar5,FVar1,(wchar_t *)FVar6.Data,param_2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return pFVar4;
    }
  }
  return (FDS_IconEnumTableRow *)0x0;
}

// GetAll @ 14b92e200

TArray<FDS_IconEnumTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_IconEnumTableRow::GetAll
          (TArray<FDS_IconEnumTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_IconEnumTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_8717163622230392791>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_IconEnumTableRow.cpp"
                       ,0x29,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_IconEnumTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,IconEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_IconEnumTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b932c20

FDS_IconEnumTableRow * __cdecl FDS_IconEnumTableRow::GetRef(FName *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_IconEnumTableRow *pFVar4;
  UDataTable *this_00;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  FString local_18;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717163622230392816>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_IconEnumTableRow.cpp"
                       ,0x10,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_IconEnumTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,IconEnum);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_18);
      FVar1 = *param_1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      pUVar5 = StaticStruct();
      pFVar4 = (FDS_IconEnumTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar5,FVar1,(wchar_t *)FVar6.Data,param_2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pFVar4 == (FDS_IconEnumTableRow *)0x0) {
        pFVar4 = &DefaultObject;
      }
      return pFVar4;
    }
  }
  return &DefaultObject;
}

// ID_ResourceidTable @ 14b935d70

FDS_ResourceIconTableRow * __thiscall
FDS_IconEnumTableRow::ID_ResourceidTable(FDS_IconEnumTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Resourceid,true);
  return pFVar1;
}

// IsValid @ 14b936650

bool __thiscall FDS_IconEnumTableRow::IsValid(FDS_IconEnumTableRow *this)

{
  return this != &DefaultObject;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticStruct @ 14b5ae720

UScriptStruct * __cdecl FDS_SummonBossTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SummonBossTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SummonBossTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SummonBossTableRow,(UObject *)pUVar1,
                         L"DS_SummonBossTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SummonBossTableRow.OuterSingleton;
}

// Get @ 14b983fc0

FDS_SummonBossTableRow * __cdecl FDS_SummonBossTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SummonBossTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  this = UDS_TableManager::GetInst();
  if (this == (UDS_TableManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8199828867192455148>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SummonBossTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SummonBossTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SummonBoss);
    if (this_00 != (UDataTable *)0x0) {
      local_res18 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      pFVar5 = DS_Util::FromInt64(&local_28,param_1);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res20,pwVar8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      FVar1 = *pFVar6;
      pUVar7 = StaticStruct();
      pFVar4 = (FDS_SummonBossTableRow *)
               UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return pFVar4;
    }
  }
  return (FDS_SummonBossTableRow *)0x0;
}

// GetAll @ 14b9868d0

TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SummonBossTableRow::GetAll
          (TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_8199828867192455119>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SummonBossTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SummonBossTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SummonBoss);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SummonBossTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b989690

FDS_SummonBossTableRow * __cdecl FDS_SummonBossTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SummonBossTableRow *pFVar4;
  UDataTable *this_00;
  FString *pFVar5;
  FName *pFVar6;
  UScriptStruct *pUVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_1 != 0) {
    this = UDS_TableManager::GetInst();
    if (this == (UDS_TableManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8199828867192455148>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SummonBossTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SummonBossTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SummonBoss);
      if (this_00 != (UDataTable *)0x0) {
        local_res8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        pFVar5 = DS_Util::FromInt64(&local_28,param_1);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar6 = ::FName::FName(local_res18,pwVar8);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        FVar1 = *pFVar6;
        pUVar7 = StaticStruct();
        pFVar4 = (FDS_SummonBossTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SummonBossTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ImageTable @ 14b98b030

FDS_ResourceIconTableRow * __thiscall
FDS_SummonBossTableRow::ID_ImageTable(FDS_SummonBossTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Image,true);
  return pFVar1;
}

// ID_InstanceQuestTable @ 14b98b050

FDS_QuestInstanceTableRow * __thiscall
FDS_SummonBossTableRow::ID_InstanceQuestTable(FDS_SummonBossTableRow *this)

{
  FDS_QuestInstanceTableRow *pFVar1;
  
  pFVar1 = FDS_QuestInstanceTableRow::GetRef((longlong)this->ID_InstanceQuest,true);
  return pFVar1;
}

// ID_RewardDropTable @ 14b98b920

FDS_DropBaseTableRow * __thiscall
FDS_SummonBossTableRow::ID_RewardDropTable(FDS_SummonBossTableRow *this)

{
  FDS_DropBaseTableRow *pFVar1;
  
  pFVar1 = FDS_DropBaseTableRow::GetRef((longlong)this->ID_RewardDrop,true);
  return pFVar1;
}

// ID_SummonBossTable @ 14b98c110

FDS_NpcBaseTableRow * __thiscall
FDS_SummonBossTableRow::ID_SummonBossTable(FDS_SummonBossTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_SummonBoss,true);
  return pFVar1;
}

// ID_SummonItemTable @ 14b98c130

FDS_ItemBaseTableRow * __thiscall
FDS_SummonBossTableRow::ID_SummonItemTable(FDS_SummonBossTableRow *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::GetRef((longlong)this->ID_SummonItem,true);
  return pFVar1;
}

// IsValid @ 14b98ca70

bool __thiscall FDS_SummonBossTableRow::IsValid(FDS_SummonBossTableRow *this)

{
  return this != &DefaultObject;
}


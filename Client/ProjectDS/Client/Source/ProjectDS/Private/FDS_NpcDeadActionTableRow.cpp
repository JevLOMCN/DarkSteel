// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticStruct @ 14b53e120

UScriptStruct * __cdecl FDS_NpcDeadActionTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcDeadActionTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcDeadActionTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcDeadActionTableRow,(UObject *)pUVar1,
                         L"DS_NpcDeadActionTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcDeadActionTableRow.OuterSingleton;
}

// Get @ 14b94e570

FDS_NpcDeadActionTableRow * __cdecl FDS_NpcDeadActionTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcDeadActionTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_2541508423090962413>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcDeadActionTableRow.cpp"
                       ,0x13,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcDeadActionTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcDeadAction);
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
      pFVar4 = (FDS_NpcDeadActionTableRow *)
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
  return (FDS_NpcDeadActionTableRow *)0x0;
}

// GetAll @ 14b951160

TArray<FDS_NpcDeadActionTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcDeadActionTableRow::GetAll
          (TArray<FDS_NpcDeadActionTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcDeadActionTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_2541508423090962384>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcDeadActionTableRow.cpp"
                       ,0x30,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcDeadActionTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcDeadAction);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcDeadActionTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b953550

FDS_NpcDeadActionTableRow * __cdecl FDS_NpcDeadActionTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcDeadActionTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_2541508423090962413>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcDeadActionTableRow.cpp"
                         ,0x13,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcDeadActionTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcDeadAction);
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
        pFVar4 = (FDS_NpcDeadActionTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcDeadActionTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_KilledMeAbnormalActionTable @ 14b9566b0

FDS_SkillAbnormalActionTableRow * __thiscall
FDS_NpcDeadActionTableRow::ID_KilledMeAbnormalActionTable(FDS_NpcDeadActionTableRow *this)

{
  FDS_SkillAbnormalActionTableRow *pFVar1;
  
  pFVar1 = FDS_SkillAbnormalActionTableRow::GetRef((longlong)this->ID_KilledMeAbnormalAction,true);
  return pFVar1;
}

// ID_KilledMeBuffTable @ 14b9566d0

FDS_BuffBaseTableRow * __thiscall
FDS_NpcDeadActionTableRow::ID_KilledMeBuffTable(FDS_NpcDeadActionTableRow *this)

{
  FDS_BuffBaseTableRow *pFVar1;
  
  pFVar1 = FDS_BuffBaseTableRow::GetRef((longlong)this->ID_KilledMeBuff,true);
  return pFVar1;
}

// ID_NpcGenTable @ 14b957110

FDS_SkillNpcGenTableRow * __thiscall
FDS_NpcDeadActionTableRow::ID_NpcGenTable(FDS_NpcDeadActionTableRow *this)

{
  FDS_SkillNpcGenTableRow *pFVar1;
  
  pFVar1 = FDS_SkillNpcGenTableRow::GetRef((longlong)this->ID_NpcGen,true);
  return pFVar1;
}

// ID_SkillTotemTable @ 14b958290

FDS_SkillTotemTableRow * __thiscall
FDS_NpcDeadActionTableRow::ID_SkillTotemTable(FDS_NpcDeadActionTableRow *this)

{
  FDS_SkillTotemTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTotemTableRow::GetRef((longlong)this->ID_SkillTotem,true);
  return pFVar1;
}

// IsValid @ 14b958860

bool __thiscall FDS_NpcDeadActionTableRow::IsValid(FDS_NpcDeadActionTableRow *this)

{
  return this != &DefaultObject;
}


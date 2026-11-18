// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticStruct @ 14b573c20

UScriptStruct * __cdecl FDS_QuestLocalTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_QuestLocalTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_QuestLocalTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_QuestLocalTableRow,(UObject *)pUVar1,
                         L"DS_QuestLocalTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_QuestLocalTableRow.OuterSingleton;
}

// FDS_QuestLocalTableRow @ 14b574e50

FDS_QuestLocalTableRow * __thiscall
FDS_QuestLocalTableRow::FDS_QuestLocalTableRow(FDS_QuestLocalTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_QuestLocalTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->LocalQuestType = None;
  (this->ConditionText)._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  (this->ConditionText).ID = 0;
  this->LockInvisible = false;
  this->QuestCompleteHide = false;
  this->ID_AcceptNpc = 0;
  this->ID_AcceptSequence = 0;
  this->ID_AcceptZone = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AcceptCoordinate).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AcceptCoordinate).field0_0x0._s_0.Y = (double)uVar1;
  (this->AcceptCoordinate).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ID_CompleteNpc = 0;
  this->ID_CompleteSequence = 0;
  this->ID_CompleteZone = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CompleteCoordinate).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CompleteCoordinate).field0_0x0._s_0.Y = (double)uVar1;
  (this->CompleteCoordinate).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CompleteType = Manual;
  this->ID_AutoAcceptQuestId = 0;
  this->ID_QuestCategory = 0;
  return this;
}

// ConditionTextTable @ 14b95fdf0

FDS_StringUiTableRow * __thiscall
FDS_QuestLocalTableRow::ConditionTextTable(FDS_QuestLocalTableRow *this)

{
  FDS_StringUiTableRow *pFVar1;
  
  pFVar1 = FDS_StringUiTableRow::GetRef((this->ConditionText).ID,true);
  return pFVar1;
}

// Get @ 14b961910

FDS_QuestLocalTableRow * __cdecl FDS_QuestLocalTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestLocalTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_5034863313536679915>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestLocalTableRow.cpp"
                       ,0x15,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_QuestLocalTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestLocal);
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
      pFVar4 = (FDS_QuestLocalTableRow *)
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
  return (FDS_QuestLocalTableRow *)0x0;
}

// GetAll @ 14b9641f0

TArray<FDS_QuestLocalTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_QuestLocalTableRow::GetAll
          (TArray<FDS_QuestLocalTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_QuestLocalTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_5034863313536679886>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestLocalTableRow.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_QuestLocalTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestLocal);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_QuestLocalTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b966fd0

FDS_QuestLocalTableRow * __cdecl FDS_QuestLocalTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestLocalTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_5034863313536679915>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestLocalTableRow.cpp"
                         ,0x15,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_QuestLocalTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,QuestLocal);
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
        pFVar4 = (FDS_QuestLocalTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_QuestLocalTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AcceptNpcTable @ 14b9687e0

FDS_NpcBaseTableRow * __thiscall
FDS_QuestLocalTableRow::ID_AcceptNpcTable(FDS_QuestLocalTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_AcceptNpc,true);
  return pFVar1;
}

// ID_AcceptSequenceTable @ 14b968820

FDS_ResourceSequenceTableRow * __thiscall
FDS_QuestLocalTableRow::ID_AcceptSequenceTable(FDS_QuestLocalTableRow *this)

{
  FDS_ResourceSequenceTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceSequenceTableRow::GetRef((longlong)this->ID_AcceptSequence,true);
  return pFVar1;
}

// ID_AcceptZoneTable @ 14b968840

FDS_ZoneBaseTableRow * __thiscall
FDS_QuestLocalTableRow::ID_AcceptZoneTable(FDS_QuestLocalTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_AcceptZone,true);
  return pFVar1;
}

// ID_AutoAcceptQuestIdTable @ 14b968980

FDS_QuestBaseTableRow * __thiscall
FDS_QuestLocalTableRow::ID_AutoAcceptQuestIdTable(FDS_QuestLocalTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_AutoAcceptQuestId,true);
  return pFVar1;
}

// ID_CompleteNpcTable @ 14b968e20

FDS_NpcBaseTableRow * __thiscall
FDS_QuestLocalTableRow::ID_CompleteNpcTable(FDS_QuestLocalTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_CompleteNpc,true);
  return pFVar1;
}

// ID_CompleteSequenceTable @ 14b968e80

FDS_ResourceSequenceTableRow * __thiscall
FDS_QuestLocalTableRow::ID_CompleteSequenceTable(FDS_QuestLocalTableRow *this)

{
  FDS_ResourceSequenceTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceSequenceTableRow::GetRef((longlong)this->ID_CompleteSequence,true);
  return pFVar1;
}

// ID_CompleteZoneTable @ 14b968ea0

FDS_ZoneBaseTableRow * __thiscall
FDS_QuestLocalTableRow::ID_CompleteZoneTable(FDS_QuestLocalTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_CompleteZone,true);
  return pFVar1;
}

// ID_QuestCategoryTable @ 14b9698a0

FDS_QuestCategoryTableRow * __thiscall
FDS_QuestLocalTableRow::ID_QuestCategoryTable(FDS_QuestLocalTableRow *this)

{
  FDS_QuestCategoryTableRow *pFVar1;
  
  pFVar1 = FDS_QuestCategoryTableRow::GetRef((longlong)this->ID_QuestCategory,true);
  return pFVar1;
}

// IsValid @ 14b96aa50

bool __thiscall FDS_QuestLocalTableRow::IsValid(FDS_QuestLocalTableRow *this)

{
  return this != &DefaultObject;
}


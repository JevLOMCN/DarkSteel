// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticStruct @ 14b571720

UScriptStruct * __cdecl FDS_QuestMainTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_QuestMainTableRow.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_QuestMainTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_QuestMainTableRow,(UObject *)pUVar1,
                         L"DS_QuestMainTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_QuestMainTableRow.OuterSingleton;
}

// FDS_QuestMainTableRow @ 14b574f80

FDS_QuestMainTableRow * __thiscall
FDS_QuestMainTableRow::FDS_QuestMainTableRow(FDS_QuestMainTableRow *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FDS_QuestMainTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->ID_QuestMainInfoId = 0;
  this->ChapterIndex = 0;
  this->ID_AutoAcceptQuestId = 0;
  this->CompleteType = Manual;
  this->ID_CompleteNpc = 0;
  this->ID_ResourceSequence = 0;
  this->ID_CompleteZone = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CompleteCoordinate).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CompleteCoordinate).field0_0x0._s_0.Y = (double)uVar1;
  (this->CompleteCoordinate).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ID_CompleteQuestFunction = 0;
  (this->ID_SectionTitle)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ID_SectionTitle).ID = 0;
  (this->ID_SectionStory)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ID_SectionStory).ID = 0;
  return this;
}

// ChapterIndexTable @ 14b95fc70

FDS_QuestMainChapterInfoTableRow * __thiscall
FDS_QuestMainTableRow::ChapterIndexTable(FDS_QuestMainTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_QuestMainChapterInfoTableRow *pFVar5;
  UDataTable *this_01;
  FString *pFVar6;
  FName *pFVar7;
  UScriptStruct *pUVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  iVar1 = this->ChapterIndex;
  if ((longlong)iVar1 == 0) {
    return &FDS_QuestMainChapterInfoTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1126379796423507952>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainChapterInfoTableRow.cpp"
                       ,0x10,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_QuestMainChapterInfoTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,QuestMainChapterInfo);
    if (this_01 != (UDataTable *)0x0) {
      local_res8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      pFVar6 = DS_Util::FromInt64(&local_18,(longlong)iVar1);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_res10,pwVar9);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      FVar2 = *pFVar7;
      pUVar8 = FDS_QuestMainChapterInfoTableRow::StaticStruct();
      pFVar5 = (FDS_QuestMainChapterInfoTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_QuestMainChapterInfoTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_QuestMainChapterInfoTableRow::DefaultObject;
}

// Get @ 14b961d90

FDS_QuestMainTableRow * __cdecl FDS_QuestMainTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestMainTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_7688534515504906220>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainTableRow.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_QuestMainTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestMain);
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
      pFVar4 = (FDS_QuestMainTableRow *)
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
  return (FDS_QuestMainTableRow *)0x0;
}

// GetAll @ 14b964530

TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_QuestMainTableRow::GetAll
          (TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_7688534515504906191>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainTableRow.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestMain);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_QuestMainTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b967490

FDS_QuestMainTableRow * __cdecl FDS_QuestMainTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestMainTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_7688534515504906220>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainTableRow.cpp"
                         ,0x14,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_QuestMainTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,QuestMain);
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
        pFVar4 = (FDS_QuestMainTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_QuestMainTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AutoAcceptQuestIdTable @ 14b9689a0

FDS_QuestBaseTableRow * __thiscall
FDS_QuestMainTableRow::ID_AutoAcceptQuestIdTable(FDS_QuestMainTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_AutoAcceptQuestId,true);
  return pFVar1;
}

// ID_CompleteNpcTable @ 14b968e40

FDS_NpcBaseTableRow * __thiscall
FDS_QuestMainTableRow::ID_CompleteNpcTable(FDS_QuestMainTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_CompleteNpc,true);
  return pFVar1;
}

// ID_CompleteZoneTable @ 14b968ec0

FDS_ZoneBaseTableRow * __thiscall
FDS_QuestMainTableRow::ID_CompleteZoneTable(FDS_QuestMainTableRow *this)

{
  FDS_ZoneBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ZoneBaseTableRow::GetRef((longlong)this->ID_CompleteZone,true);
  return pFVar1;
}

// ID_SectionStoryTable @ 14b96a460

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainTableRow::ID_SectionStoryTable(FDS_QuestMainTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ID_SectionStory).ID,true);
  return pFVar1;
}

// ID_SectionTitleTable @ 14b96a4a0

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainTableRow::ID_SectionTitleTable(FDS_QuestMainTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ID_SectionTitle).ID,true);
  return pFVar1;
}

// IsValid @ 14b96aad0

bool __thiscall FDS_QuestMainTableRow::IsValid(FDS_QuestMainTableRow *this)

{
  return this != &DefaultObject;
}


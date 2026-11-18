// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b5714c0

UScriptStruct * __cdecl FDS_QuestMainInfoTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_QuestMainInfoTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_QuestMainInfoTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_QuestMainInfoTableRow,(UObject *)pUVar1,
                         L"DS_QuestMainInfoTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_QuestMainInfoTableRow.OuterSingleton;
}

// FDS_QuestMainInfoTableRow @ 14b574f00

FDS_QuestMainInfoTableRow * __thiscall
FDS_QuestMainInfoTableRow::FDS_QuestMainInfoTableRow(FDS_QuestMainInfoTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_QuestMainInfoTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->ID_QuestBase = 0;
  this->ChapterIndex = 0;
  this->ChapterStep = 0;
  (this->ChapterTitle)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ChapterTitle).ID = 0;
  (this->ID_ChapterTitle)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ID_ChapterTitle).ID = 0;
  this->ChapterSubtitleStep = 0;
  (this->ID_SectionTitle)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ID_SectionTitle).ID = 0;
  (this->ID_SectionStory)._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
  (this->ID_SectionStory).ID = 0;
  return this;
}

// ChapterTitleTable @ 14b95fdb0

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainInfoTableRow::ChapterTitleTable(FDS_QuestMainInfoTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ChapterTitle).ID,true);
  return pFVar1;
}

// Get @ 14b961c70

FDS_QuestMainInfoTableRow * __cdecl FDS_QuestMainInfoTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestMainInfoTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<2606085841956634641>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainInfoTableRow.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_QuestMainInfoTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestMainInfo);
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
      pFVar4 = (FDS_QuestMainInfoTableRow *)
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
  return (FDS_QuestMainInfoTableRow *)0x0;
}

// GetAll @ 14b964460

TArray<FDS_QuestMainInfoTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_QuestMainInfoTableRow::GetAll
          (TArray<FDS_QuestMainInfoTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_QuestMainInfoTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<2606085841956634670>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainInfoTableRow.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_QuestMainInfoTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,QuestMainInfo);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_QuestMainInfoTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b967360

FDS_QuestMainInfoTableRow * __cdecl FDS_QuestMainInfoTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_QuestMainInfoTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<2606085841956634641>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_QuestMainInfoTableRow.cpp"
                         ,0x11,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_QuestMainInfoTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,QuestMainInfo);
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
        pFVar4 = (FDS_QuestMainInfoTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_QuestMainInfoTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_ChapterTitleTable @ 14b968b80

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainInfoTableRow::ID_ChapterTitleTable(FDS_QuestMainInfoTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ID_ChapterTitle).ID,true);
  return pFVar1;
}

// ID_QuestBaseTable @ 14b969880

FDS_QuestBaseTableRow * __thiscall
FDS_QuestMainInfoTableRow::ID_QuestBaseTable(FDS_QuestMainInfoTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_QuestBase,true);
  return pFVar1;
}

// ID_SectionStoryTable @ 14b96a440

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainInfoTableRow::ID_SectionStoryTable(FDS_QuestMainInfoTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ID_SectionStory).ID,true);
  return pFVar1;
}

// ID_SectionTitleTable @ 14b96a480

FDS_StringQuestTableRow * __thiscall
FDS_QuestMainInfoTableRow::ID_SectionTitleTable(FDS_QuestMainInfoTableRow *this)

{
  FDS_StringQuestTableRow *pFVar1;
  
  pFVar1 = FDS_StringQuestTableRow::GetRef((this->ID_SectionTitle).ID,true);
  return pFVar1;
}

// IsValid @ 14b96aab0

bool __thiscall FDS_QuestMainInfoTableRow::IsValid(FDS_QuestMainInfoTableRow *this)

{
  return this != &DefaultObject;
}


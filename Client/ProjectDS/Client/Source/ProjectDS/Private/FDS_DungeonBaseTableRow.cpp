// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticStruct @ 14b4885f0

UScriptStruct * __cdecl FDS_DungeonBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_DungeonBaseTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_DungeonBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_DungeonBaseTableRow,(UObject *)pUVar1,
                         L"DS_DungeonBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_DungeonBaseTableRow.OuterSingleton;
}

// FDS_DungeonBaseTableRow @ 14b48a8a0

FDS_DungeonBaseTableRow * __thiscall
FDS_DungeonBaseTableRow::FDS_DungeonBaseTableRow(FDS_DungeonBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_DungeonBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  (this->ID_FirstRewardItemList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_FirstRewardItemList).ArrayNum = 0;
  (this->ID_FirstRewardItemList).ArrayMax = 0;
  (this->FirstRewardItemValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstRewardItemValue).ArrayNum = 0;
  (this->FirstRewardItemValue).ArrayMax = 0;
  this->DungeonType = None;
  this->LevelGroup = 0;
  this->ID_ClearRewardItemDPList = 0;
  (this->ID_Name)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Name).ID = 0;
  (this->ID_Explanation)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_Explanation).ID = 0;
  this->ID_BackGroundNpc = 0;
  this->OpenPlayerLevel = 0;
  this->ID_RequestQuest = 0;
  this->IsUseDungeonManager = false;
  this->ID_DungeonReward = 0;
  this->ID_ZoneBase = 0;
  this->ID_WarpLocation = 0;
  (this->ID_DungeonBuff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_DungeonBuff).ArrayNum = 0;
  (this->ID_DungeonBuff).ArrayMax = 0;
  ::FString::FString(&this->DungeonScript,L"");
  (this->DungeonScriptPart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonScriptPart).ArrayNum = 0;
  (this->DungeonScriptPart).ArrayMax = 0;
  this->IsLearningBattleAi = false;
  this->ID_ResurrectionWaiting = 0;
  (this->BlockingVolume).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockingVolume).ArrayNum = 0;
  (this->BlockingVolume).ArrayMax = 0;
  return this;
}

// ~FDS_DungeonBaseTableRow @ 14b48b7a0

void __thiscall FDS_DungeonBaseTableRow::~FDS_DungeonBaseTableRow(FDS_DungeonBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BlockingVolume).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DungeonScriptPart).AllocatorInstance.Data,
             (this->DungeonScriptPart).ArrayNum);
  pFVar1 = (this->DungeonScriptPart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonScript).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_DungeonBuff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FirstRewardItemValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_FirstRewardItemList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Version).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// Get @ 14b915ee0

FDS_DungeonBaseTableRow * __cdecl FDS_DungeonBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_DungeonBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_3323121835930812393>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_DungeonBaseTableRow.cpp"
                       ,0x17,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_DungeonBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,DungeonBase);
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
      pFVar4 = (FDS_DungeonBaseTableRow *)
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
  return (FDS_DungeonBaseTableRow *)0x0;
}

// GetAll @ 14b917b90

TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_DungeonBaseTableRow::GetAll
          (TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_3323121835930812364>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_DungeonBaseTableRow.cpp"
                       ,0x34,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,DungeonBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_DungeonBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b91a120

FDS_DungeonBaseTableRow * __cdecl FDS_DungeonBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_DungeonBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_3323121835930812393>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_DungeonBaseTableRow.cpp"
                         ,0x17,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_DungeonBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,DungeonBase);
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
        pFVar4 = (FDS_DungeonBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_DungeonBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_BackGroundNpcTable @ 14b91b000

FDS_NpcBaseTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_BackGroundNpcTable(FDS_DungeonBaseTableRow *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  pFVar1 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_BackGroundNpc,true);
  return pFVar1;
}

// ID_ClearRewardItemDPListTable @ 14b91b060

FDS_ItemDisplayTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_ClearRewardItemDPListTable(FDS_DungeonBaseTableRow *this)

{
  FDS_ItemDisplayTableRow *pFVar1;
  
  pFVar1 = FDS_ItemDisplayTableRow::GetRef((longlong)this->ID_ClearRewardItemDPList,true);
  return pFVar1;
}

// ID_DungeonBuffTables @ 14b91bc10

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DungeonBaseTableRow::ID_DungeonBuffTables
          (FDS_DungeonBaseTableRow *this,
          TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_BuffBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_BuffBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_DungeonBuff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_DungeonBuff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b91bccf:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b91bccf;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_DungeonRewardTable @ 14b91bd20

FDS_DungeonRewardTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_DungeonRewardTable(FDS_DungeonBaseTableRow *this)

{
  FDS_DungeonRewardTableRow *pFVar1;
  
  pFVar1 = FDS_DungeonRewardTableRow::GetRef((longlong)this->ID_DungeonReward,true);
  return pFVar1;
}

// ID_ExplanationTable @ 14b91bd60

FDS_StringBaseTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_ExplanationTable(FDS_DungeonBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Explanation).ID,true);
  return pFVar1;
}

// ID_FirstRewardItemListTables @ 14b91bd80

TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DungeonBaseTableRow::ID_FirstRewardItemListTables
          (FDS_DungeonBaseTableRow *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_ItemBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_FirstRewardItemList).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_FirstRewardItemList).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b91be3c:
      FVar7.Data = FVar7.Data + 8;
    }
    do {
      if (*(int *)pFVar6 == *(int *)(lVar3 + 8)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             lVar3;
        goto LAB_14b91be3c;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NameTable @ 14b91c140

FDS_StringBaseTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_NameTable(FDS_DungeonBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_Name).ID,true);
  return pFVar1;
}

// ID_RequestQuestTable @ 14b91c1e0

FDS_QuestBaseTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_RequestQuestTable(FDS_DungeonBaseTableRow *this)

{
  FDS_QuestBaseTableRow *pFVar1;
  
  pFVar1 = FDS_QuestBaseTableRow::GetRef((longlong)this->ID_RequestQuest,true);
  return pFVar1;
}

// ID_ResurrectionWaitingTable @ 14b91c260

FDS_ResurrectionWaitingTableRow * __thiscall
FDS_DungeonBaseTableRow::ID_ResurrectionWaitingTable(FDS_DungeonBaseTableRow *this)

{
  FDS_ResurrectionWaitingTableRow *pFVar1;
  
  pFVar1 = FDS_ResurrectionWaitingTableRow::GetRef((longlong)this->ID_ResurrectionWaiting,true);
  return pFVar1;
}

// IsValid @ 14b91dbb0

bool __thiscall FDS_DungeonBaseTableRow::IsValid(FDS_DungeonBaseTableRow *this)

{
  return this != &DefaultObject;
}


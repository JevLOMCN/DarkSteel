// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticStruct @ 14b52cd40

UScriptStruct * __cdecl FDS_NpcBaseTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcBaseTableRow.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcBaseTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcBaseTableRow,(UObject *)pUVar1,
                         L"DS_NpcBaseTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcBaseTableRow.OuterSingleton;
}

// FDS_NpcBaseTableRow @ 14b52ee10

FDS_NpcBaseTableRow * __thiscall FDS_NpcBaseTableRow::FDS_NpcBaseTableRow(FDS_NpcBaseTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_NpcBaseTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  (this->ID_NameSid).ID = 0;
  (this->ID_NameSid)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  (this->ID_NameTitleSid)._padding_ = (longlong)&___7FDS_StringWorldID__6B_;
  (this->ID_NameTitleSid).ID = 0;
  this->ID_NpcColor = 0;
  this->NpcBattleGrade = None;
  this->ID_ResourcePreset = 0;
  this->ID_BpLink = 0;
  this->NpcScale = 0.0;
  this->IsNameTag = false;
  this->WalkSpeed = 0.0;
  this->RunSpeed = 0.0;
  this->InitTime = 0.0;
  this->InitSeal = 0;
  this->AwakeTime = 0.0;
  this->ID_NpcSealState = 0;
  this->BodyClearTime = 0.0;
  this->ID_NpcBattle = 0;
  this->IsNpcRareAction = false;
  this->IsNpcFunction = false;
  this->NpcGimmickType = None;
  (this->ID_NpcGimmickEvent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NpcGimmickEvent).ArrayNum = 0;
  (this->ID_NpcGimmickEvent).ArrayMax = 0;
  this->ID_Portrait = 0;
  this->ID_Collide = 0;
  this->IsCapsuleNoCollision = false;
  (this->NpcQuestGroup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcQuestGroup).ArrayNum = 0;
  (this->NpcQuestGroup).ArrayMax = 0;
  this->BubbleTalkDistance = 0;
  this->BubbleTalkOutputProbability = 0;
  this->BubbleTalkConditionGroupID = 0;
  this->IsNpcLookAt = false;
  this->LookAtChance = 0;
  this->IsRotationPlace = false;
  this->RotationPlaceMinAngle = 0;
  (this->RotationPlaceAngle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationPlaceAngle).ArrayNum = 0;
  (this->RotationPlaceAngle).ArrayMax = 0;
  (this->NonBattleRotationPlaceTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonBattleRotationPlaceTime).ArrayNum = 0;
  (this->NonBattleRotationPlaceTime).ArrayMax = 0;
  (this->BattleRotationPlaceTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BattleRotationPlaceTime).ArrayNum = 0;
  (this->BattleRotationPlaceTime).ArrayMax = 0;
  (this->NonBattleRotationPlaceEndTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonBattleRotationPlaceEndTime).ArrayNum = 0;
  (this->NonBattleRotationPlaceEndTime).ArrayMax = 0;
  (this->BattleRotationPlaceEndTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BattleRotationPlaceEndTime).ArrayNum = 0;
  (this->BattleRotationPlaceEndTime).ArrayMax = 0;
  this->DefaultHeightConditionType = Ground;
  this->DefaultHeightDistance = 0.0;
  this->MaxHeightDistance = 0;
  this->EntitySpawnRange = None;
  this->MapIndex = None;
  (this->PlayerSkillType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillType).ArrayNum = 0;
  (this->PlayerSkillType).ArrayMax = 0;
  (this->PlayerSkillLevel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillLevel).ArrayNum = 0;
  (this->PlayerSkillLevel).ArrayMax = 0;
  (this->PlayerSkillGrade).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerSkillGrade).ArrayNum = 0;
  (this->PlayerSkillGrade).ArrayMax = 0;
  this->ID_ActionHandling = 0;
  this->DisappearClearTime = 0.0;
  this->ID_NpcTamingFoodBase = 0;
  this->ID_MountBase = 0;
  this->RoleType = None;
  (this->ID_Trigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Trigger).ArrayNum = 0;
  (this->ID_Trigger).ArrayMax = 0;
  (this->ID_SelectPromptName)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ID_SelectPromptName).ID = 0;
  (this->ID_Interaction).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Interaction).ArrayNum = 0;
  (this->ID_Interaction).ArrayMax = 0;
  return this;
}

// ~FDS_NpcBaseTableRow @ 14b5305d0

void __thiscall FDS_NpcBaseTableRow::~FDS_NpcBaseTableRow(FDS_NpcBaseTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ID_Interaction).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Trigger).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillGrade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillLevel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerSkillType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BattleRotationPlaceEndTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NonBattleRotationPlaceEndTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BattleRotationPlaceTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NonBattleRotationPlaceTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationPlaceAngle).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcQuestGroup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_NpcGimmickEvent).AllocatorInstance.Data;
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

// Get @ 14b94dd90

FDS_NpcBaseTableRow * __cdecl FDS_NpcBaseTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcBaseTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<5245171004275163166>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBaseTableRow.cpp"
                       ,0x1e,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcBaseTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcBase);
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
      pFVar4 = (FDS_NpcBaseTableRow *)
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
  return (FDS_NpcBaseTableRow *)0x0;
}

// GetAll @ 14b950bb0

TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcBaseTableRow::GetAll
          (TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<5245171004275163195>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBaseTableRow.cpp"
                       ,0x3b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcBase);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcBaseTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b952d00

FDS_NpcBaseTableRow * __cdecl FDS_NpcBaseTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcBaseTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<5245171004275163166>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBaseTableRow.cpp"
                         ,0x1e,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcBaseTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcBase);
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
        pFVar4 = (FDS_NpcBaseTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcBaseTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_BpLinkTable @ 14b955dd0

FDS_ResourceEtcTableRow * __thiscall FDS_NpcBaseTableRow::ID_BpLinkTable(FDS_NpcBaseTableRow *this)

{
  FDS_ResourceEtcTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEtcTableRow::GetRef((longlong)this->ID_BpLink,true);
  return pFVar1;
}

// ID_CollideTable @ 14b955e10

FDS_CollideTableRow * __thiscall FDS_NpcBaseTableRow::ID_CollideTable(FDS_NpcBaseTableRow *this)

{
  FDS_CollideTableRow *pFVar1;
  
  pFVar1 = FDS_CollideTableRow::GetRef((longlong)this->ID_Collide,true);
  return pFVar1;
}

// ID_InteractionTables @ 14b956460

TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBaseTableRow::ID_InteractionTables
          (FDS_NpcBaseTableRow *this,
          TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_InteractionTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_InteractionTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_InteractionTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_Interaction).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Interaction).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95651f:
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
        goto LAB_14b95651f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_MountBaseTable @ 14b9566f0

FDS_MountBaseTableRow * __thiscall FDS_NpcBaseTableRow::ID_MountBaseTable(FDS_NpcBaseTableRow *this)

{
  FDS_MountBaseTableRow *pFVar1;
  
  pFVar1 = FDS_MountBaseTableRow::GetRef((longlong)this->ID_MountBase,true);
  return pFVar1;
}

// ID_NameSidTable @ 14b956710

FDS_StringWorldTableRow * __thiscall FDS_NpcBaseTableRow::ID_NameSidTable(FDS_NpcBaseTableRow *this)

{
  FDS_StringWorldTableRow *pFVar1;
  
  pFVar1 = FDS_StringWorldTableRow::GetRef((this->ID_NameSid).ID,true);
  return pFVar1;
}

// ID_NameTitleSidTable @ 14b956730

FDS_StringWorldTableRow * __thiscall
FDS_NpcBaseTableRow::ID_NameTitleSidTable(FDS_NpcBaseTableRow *this)

{
  FDS_StringWorldTableRow *pFVar1;
  
  pFVar1 = FDS_StringWorldTableRow::GetRef((this->ID_NameTitleSid).ID,true);
  return pFVar1;
}

// ID_NpcBattleTable @ 14b956be0

FDS_NpcBattleTableRow * __thiscall FDS_NpcBaseTableRow::ID_NpcBattleTable(FDS_NpcBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcBattleTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcBattle;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcBattleTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5975108757883977702>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleTableRow.cpp"
                       ,0x1a,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcBattleTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcBattle);
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
      pUVar8 = FDS_NpcBattleTableRow::StaticStruct();
      pFVar5 = (FDS_NpcBattleTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcBattleTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcBattleTableRow::DefaultObject;
}

// ID_NpcGimmickEventTables @ 14b957130

TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBaseTableRow::ID_NpcGimmickEventTables
          (FDS_NpcBaseTableRow *this,
          TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_TableManager *this_00;
  TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4819498779843493843>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcGimmickEventTableRow.cpp"
                       ,0x2d,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_NpcGimmickEventTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcGimmickEvent);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcGimmickEventTableRow_const_>
                (this_01,(wchar_t *)FVar10.Data,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar5 = local_48.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar10.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_NpcGimmickEventTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_NpcGimmickEvent).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_NpcGimmickEvent).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b95727c:
      FVar10.Data = FVar10.Data + 8;
    }
    do {
      if (*(int *)pFVar9 == *(int *)(lVar3 + 8)) {
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             lVar3;
        goto LAB_14b95727c;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// ID_NpcSealStateTable @ 14b9577f0

FDS_NpcSealStateTableRow * __thiscall
FDS_NpcBaseTableRow::ID_NpcSealStateTable(FDS_NpcBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcSealStateTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcSealState;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcSealStateTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2544824507210661903>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcSealStateTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcSealStateTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcSealState);
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
      pUVar8 = FDS_NpcSealStateTableRow::StaticStruct();
      pFVar5 = (FDS_NpcSealStateTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcSealStateTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcSealStateTableRow::DefaultObject;
}

// ID_NpcTamingFoodBaseTable @ 14b957b70

FDS_NpcTamingFoodBaseTableRow * __thiscall
FDS_NpcBaseTableRow::ID_NpcTamingFoodBaseTable(FDS_NpcBaseTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcTamingFoodBaseTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcTamingFoodBase;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcTamingFoodBaseTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2161140840842395663>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcTamingFoodBaseTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcTamingFoodBaseTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcTamingFoodBase);
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
      pUVar8 = FDS_NpcTamingFoodBaseTableRow::StaticStruct();
      pFVar5 = (FDS_NpcTamingFoodBaseTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcTamingFoodBaseTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcTamingFoodBaseTableRow::DefaultObject;
}

// ID_PortraitTable @ 14b957dc0

FDS_ResourceIconTableRow * __thiscall
FDS_NpcBaseTableRow::ID_PortraitTable(FDS_NpcBaseTableRow *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceIconTableRow::GetRef((longlong)this->ID_Portrait,true);
  return pFVar1;
}

// ID_ResourcePresetTable @ 14b957ef0

FDS_ResourcePresetTableRow * __thiscall
FDS_NpcBaseTableRow::ID_ResourcePresetTable(FDS_NpcBaseTableRow *this)

{
  FDS_ResourcePresetTableRow *pFVar1;
  
  pFVar1 = FDS_ResourcePresetTableRow::GetRef((longlong)this->ID_ResourcePreset,true);
  return pFVar1;
}

// ID_SelectPromptNameTable @ 14b957f50

FDS_StringBaseTableRow * __thiscall
FDS_NpcBaseTableRow::ID_SelectPromptNameTable(FDS_NpcBaseTableRow *this)

{
  FDS_StringBaseTableRow *pFVar1;
  
  pFVar1 = FDS_StringBaseTableRow::GetRef((this->ID_SelectPromptName).ID,true);
  return pFVar1;
}

// ID_TriggerTables @ 14b958550

TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBaseTableRow::ID_TriggerTables
          (FDS_NpcBaseTableRow *this,
          TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_TriggerBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_TriggerBaseTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_TriggerBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_Trigger).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Trigger).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95860f:
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
        goto LAB_14b95860f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b958780

bool __thiscall FDS_NpcBaseTableRow::IsValid(FDS_NpcBaseTableRow *this)

{
  return this != &DefaultObject;
}

// MapIndexTable @ 14b958ca0

FDS_MapIndexBaseTableRow * __thiscall FDS_NpcBaseTableRow::MapIndexTable(FDS_NpcBaseTableRow *this)

{
  FDS_MapIndexBaseTableRow *pFVar1;
  
  pFVar1 = FDS_MapIndexBaseTableRow::GetRef((ulonglong)this->MapIndex,true);
  return pFVar1;
}

// RoleTypeTable @ 14b958fb0

FDS_NpcRoleTypeTableRow * __thiscall FDS_NpcBaseTableRow::RoleTypeTable(FDS_NpcBaseTableRow *this)

{
  FDS_NpcRoleTypeTableRow *pFVar1;
  
  pFVar1 = FDS_NpcRoleTypeTableRow::GetRef((ulonglong)this->RoleType,true);
  return pFVar1;
}

// GetRefWithEntityID @ 14b9b3110

FDS_NpcBaseTableRow * __cdecl FDS_NpcBaseTableRow::GetRefWithEntityID(ulong64 param_1)

{
  bool bVar1;
  int iVar2;
  UDS_DataSetBase *this;
  FDS_NpcBaseTableRow *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return &DefaultObject;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(local_res10);
  iVar2 = UDS_DataSetBase::GetEntityTableID(this);
  pFVar3 = GetRef((longlong)iVar2,true);
  return pFVar3;
}

// HasPlayerSkill @ 14b9b4810

bool __thiscall FDS_NpcBaseTableRow::HasPlayerSkill(FDS_NpcBaseTableRow *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)(this->PlayerSkillType).ArrayNum;
  uVar7 = 0;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PlayerSkillType).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((uint)(byte)(this->PlayerSkillType).AllocatorInstance.Data[lVar5] == param_1) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  return false;
}


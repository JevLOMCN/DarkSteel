// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticStruct @ 14b5356e0

UScriptStruct * __cdecl FDS_NpcBattleTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NpcBattleTableRow.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NpcBattleTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NpcBattleTableRow,(UObject *)pUVar1,
                         L"DS_NpcBattleTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NpcBattleTableRow.OuterSingleton;
}

// FDS_NpcBattleTableRow @ 14b537eb0

FDS_NpcBattleTableRow * __thiscall
FDS_NpcBattleTableRow::FDS_NpcBattleTableRow(FDS_NpcBattleTableRow *this)

{
  this->_padding_ = (longlong)&___7FDS_NpcBattleTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  ::FString::FString(&this->Version,L"");
  this->NpcLevel = 0;
  this->ID_NpcStatusGrade = 0;
  this->BattleAiParentType = None;
  this->ElementType = NormalType;
  this->ID_NpcBattleShapeType = 0;
  this->NpcBattleType = None;
  this->FactionType = None;
  this->BattleSightRange = 0.0;
  this->RecognizeRadius = 0.0;
  this->SpecialRecognizeRange = 0.0;
  this->SpecialRecognizeAngle = 0;
  this->RecognizeHeight = 0.0;
  this->BattleActivityRange = 0.0;
  this->IsSearchingType = false;
  this->IsNpcSearching = false;
  this->AggroListCheckRange = 0.0;
  this->AggroListCheckHeight = 0.0;
  this->BattleTargetingType = AggroTarget;
  this->TargetTraceType = None;
  this->AttackRangeMin = 0.0;
  this->AttackRangeMax = 0.0;
  this->AttackRangeGround = 0.0;
  this->AttackRangeAir = 0.0;
  this->AttackRangeUnderGround = 0.0;
  this->AttackDelayMin = 0.0;
  this->AttackDelayMax = 0.0;
  this->SkillConditionGroupId = 0;
  this->NpcEvolveLevel = 0;
  (this->ID_NormalAttack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NormalAttack).ArrayNum = 0;
  (this->ID_NormalAttack).ArrayMax = 0;
  (this->NormalAttackRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalAttackRate).ArrayNum = 0;
  (this->NormalAttackRate).ArrayMax = 0;
  (this->ID_SkillAttack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SkillAttack).ArrayNum = 0;
  (this->ID_SkillAttack).ArrayMax = 0;
  (this->SkillAttackRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAttackRate).ArrayNum = 0;
  (this->SkillAttackRate).ArrayMax = 0;
  this->SkillAttackConditionType = None;
  this->SkillAttackConditionValue = 0;
  this->RangedDistance = 0.0;
  this->RangedAttackRate = 0;
  (this->ID_RangedSkillAttack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_RangedSkillAttack).ArrayNum = 0;
  (this->ID_RangedSkillAttack).ArrayMax = 0;
  (this->RangedSkillAttackRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangedSkillAttackRate).ArrayNum = 0;
  (this->RangedSkillAttackRate).ArrayMax = 0;
  (this->ID_EventActionSkill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_EventActionSkill).ArrayNum = 0;
  (this->ID_EventActionSkill).ArrayMax = 0;
  (this->PhaseHpRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhaseHpRate).ArrayNum = 0;
  (this->PhaseHpRate).ArrayMax = 0;
  (this->PhaseChange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhaseChange).ArrayNum = 0;
  (this->PhaseChange).ArrayMax = 0;
  this->NpcBattleAiGroupId = 0;
  (this->ID_NpcBatterTrigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_NpcBatterTrigger).ArrayNum = 0;
  (this->ID_NpcBatterTrigger).ArrayMax = 0;
  (this->BattleTriggerVariableMaxStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BattleTriggerVariableMaxStack).ArrayNum = 0;
  (this->BattleTriggerVariableMaxStack).ArrayMax = 0;
  this->IsBlockingCheck = false;
  this->StateConGrade = 0;
  this->MoveConGrade = 0;
  this->IsImmuneAbnormal = false;
  this->AbnormalImmuneDefPoint = 0;
  this->IsObserve = false;
  this->ObserveDistance = 0.0;
  (this->ObserveType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObserveType).ArrayNum = 0;
  (this->ObserveType).ArrayMax = 0;
  (this->ObserveMoveSpeed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObserveMoveSpeed).ArrayNum = 0;
  (this->ObserveMoveSpeed).ArrayMax = 0;
  (this->ObserveRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObserveRate).ArrayNum = 0;
  (this->ObserveRate).ArrayMax = 0;
  (this->ObserveTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObserveTime).ArrayNum = 0;
  (this->ObserveTime).ArrayMax = 0;
  this->ObserveCoolTimeRate = 0;
  this->ObserveCoolTime = 0.0;
  this->IsReSearchingBfrComeBack = false;
  this->ComeBackPosType = None;
  this->DieEventRate = 0;
  this->ID_DieSummonNpc = 0;
  this->PlayerExp = 0;
  this->CharExp = 0;
  this->ID_DropGroup = 0;
  this->ID_FixedDropGroup = 0;
  this->ID_DropStuffSpawn = 0;
  this->TargetPlayerGrade = 0;
  this->IsMultiHitCollision = false;
  this->MultiHitCollisionGid = 0;
  this->ConversionHeightTime = 0.0;
  this->ID_NpcGroggy = 0;
  this->GroggyAddPoint = 0;
  this->ID_NpcDeadAction = 0;
  this->IsDeadTargetView = false;
  this->TargetViewDeadAnimationType = None;
  this->NotTargetViewDeadAnimationType = None;
  this->IsDamageContributionAlbe = false;
  return this;
}

// ~FDS_NpcBattleTableRow @ 14b538c90

void __thiscall FDS_NpcBattleTableRow::~FDS_NpcBattleTableRow(FDS_NpcBattleTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ObserveTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObserveRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObserveMoveSpeed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObserveType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BattleTriggerVariableMaxStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_NpcBatterTrigger).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhaseChange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhaseHpRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_EventActionSkill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RangedSkillAttackRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_RangedSkillAttack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillAttackRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillAttack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalAttackRate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_NormalAttack).AllocatorInstance.Data;
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

// operator= @ 14b539080

FDS_NpcBattleTableRow * __thiscall
FDS_NpcBattleTableRow::operator=(FDS_NpcBattleTableRow *this,FDS_NpcBattleTableRow *param_1)

{
  int *piVar1;
  TArray<EDS_ObserveType,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->ID = param_1->ID;
  this->DataStage = param_1->DataStage;
  ::FString::operator=(&this->Version,&param_1->Version);
  this->NpcLevel = param_1->NpcLevel;
  this->ID_NpcStatusGrade = param_1->ID_NpcStatusGrade;
  this->BattleAiParentType = param_1->BattleAiParentType;
  this->ElementType = param_1->ElementType;
  this->ID_NpcBattleShapeType = param_1->ID_NpcBattleShapeType;
  this->NpcBattleType = param_1->NpcBattleType;
  this->FactionType = param_1->FactionType;
  this->BattleSightRange = param_1->BattleSightRange;
  this->RecognizeRadius = param_1->RecognizeRadius;
  this->SpecialRecognizeRange = param_1->SpecialRecognizeRange;
  this->SpecialRecognizeAngle = param_1->SpecialRecognizeAngle;
  this->RecognizeHeight = param_1->RecognizeHeight;
  this->BattleActivityRange = param_1->BattleActivityRange;
  this->IsSearchingType = param_1->IsSearchingType;
  this->IsNpcSearching = param_1->IsNpcSearching;
  this->AggroListCheckRange = param_1->AggroListCheckRange;
  this->AggroListCheckHeight = param_1->AggroListCheckHeight;
  this->BattleTargetingType = param_1->BattleTargetingType;
  this->TargetTraceType = param_1->TargetTraceType;
  this->AttackRangeMin = param_1->AttackRangeMin;
  this->AttackRangeMax = param_1->AttackRangeMax;
  this->AttackRangeGround = param_1->AttackRangeGround;
  this->AttackRangeAir = param_1->AttackRangeAir;
  this->AttackRangeUnderGround = param_1->AttackRangeUnderGround;
  this->AttackDelayMin = param_1->AttackDelayMin;
  this->AttackDelayMax = param_1->AttackDelayMax;
  this->SkillConditionGroupId = param_1->SkillConditionGroupId;
  this->NpcEvolveLevel = param_1->NpcEvolveLevel;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_NormalAttack,&param_1->ID_NormalAttack);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->NormalAttackRate,&param_1->NormalAttackRate);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ID_SkillAttack,&param_1->ID_SkillAttack)
  ;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkillAttackRate,&param_1->SkillAttackRate);
  this->SkillAttackConditionType = param_1->SkillAttackConditionType;
  this->SkillAttackConditionValue = param_1->SkillAttackConditionValue;
  this->RangedDistance = param_1->RangedDistance;
  this->RangedAttackRate = param_1->RangedAttackRate;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_RangedSkillAttack,&param_1->ID_RangedSkillAttack);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->RangedSkillAttackRate,&param_1->RangedSkillAttackRate);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_EventActionSkill,&param_1->ID_EventActionSkill);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->PhaseHpRate,&param_1->PhaseHpRate);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->PhaseChange,&param_1->PhaseChange);
  this->NpcBattleAiGroupId = param_1->NpcBattleAiGroupId;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_NpcBatterTrigger,&param_1->ID_NpcBatterTrigger);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->BattleTriggerVariableMaxStack,&param_1->BattleTriggerVariableMaxStack);
  this->IsBlockingCheck = param_1->IsBlockingCheck;
  pTVar2 = &this->ObserveType;
  this->StateConGrade = param_1->StateConGrade;
  this->MoveConGrade = param_1->MoveConGrade;
  this->IsImmuneAbnormal = param_1->IsImmuneAbnormal;
  this->AbnormalImmuneDefPoint = param_1->AbnormalImmuneDefPoint;
  this->IsObserve = param_1->IsObserve;
  this->ObserveDistance = param_1->ObserveDistance;
  if (pTVar2 != &param_1->ObserveType) {
    iVar4 = (param_1->ObserveType).ArrayNum;
    piVar1 = &(this->ObserveType).ArrayMax;
    pFVar5 = (param_1->ObserveType).AllocatorInstance.Data;
    (this->ObserveType).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ObserveMoveSpeed,&param_1->ObserveMoveSpeed);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ObserveRate,&param_1->ObserveRate);
  pTVar3 = &this->ObserveTime;
  if (pTVar3 != &param_1->ObserveTime) {
    iVar4 = (param_1->ObserveTime).ArrayNum;
    piVar1 = &(this->ObserveTime).ArrayMax;
    pFVar5 = (param_1->ObserveTime).AllocatorInstance.Data;
    (this->ObserveTime).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  this->ObserveCoolTimeRate = param_1->ObserveCoolTimeRate;
  this->ObserveCoolTime = param_1->ObserveCoolTime;
  this->IsReSearchingBfrComeBack = param_1->IsReSearchingBfrComeBack;
  this->ComeBackPosType = param_1->ComeBackPosType;
  this->DieEventRate = param_1->DieEventRate;
  this->ID_DieSummonNpc = param_1->ID_DieSummonNpc;
  this->PlayerExp = param_1->PlayerExp;
  this->CharExp = param_1->CharExp;
  this->ID_DropGroup = param_1->ID_DropGroup;
  this->ID_FixedDropGroup = param_1->ID_FixedDropGroup;
  this->ID_DropStuffSpawn = param_1->ID_DropStuffSpawn;
  this->TargetPlayerGrade = param_1->TargetPlayerGrade;
  this->IsMultiHitCollision = param_1->IsMultiHitCollision;
  this->MultiHitCollisionGid = param_1->MultiHitCollisionGid;
  this->ConversionHeightTime = param_1->ConversionHeightTime;
  this->ID_NpcGroggy = param_1->ID_NpcGroggy;
  this->GroggyAddPoint = param_1->GroggyAddPoint;
  this->ID_NpcDeadAction = param_1->ID_NpcDeadAction;
  this->IsDeadTargetView = param_1->IsDeadTargetView;
  this->TargetViewDeadAnimationType = param_1->TargetViewDeadAnimationType;
  this->NotTargetViewDeadAnimationType = param_1->NotTargetViewDeadAnimationType;
  this->IsDamageContributionAlbe = param_1->IsDamageContributionAlbe;
  return this;
}

// Get @ 14b94e210

FDS_NpcBattleTableRow * __cdecl FDS_NpcBattleTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcBattleTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_5975108757883977702>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleTableRow.cpp"
                       ,0x1a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_NpcBattleTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcBattle);
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
      pFVar4 = (FDS_NpcBattleTableRow *)
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
  return (FDS_NpcBattleTableRow *)0x0;
}

// GetAll @ 14b950ef0

TArray<FDS_NpcBattleTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_NpcBattleTableRow::GetAll
          (TArray<FDS_NpcBattleTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_NpcBattleTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_5975108757883977673>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleTableRow.cpp"
                       ,0x37,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_NpcBattleTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,NpcBattle);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcBattleTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b9531c0

FDS_NpcBattleTableRow * __cdecl FDS_NpcBattleTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_NpcBattleTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_5975108757883977702>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleTableRow.cpp"
                         ,0x1a,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_NpcBattleTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,NpcBattle);
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
        pFVar4 = (FDS_NpcBattleTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_NpcBattleTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_DieSummonNpcTable @ 14b9560d0

FDS_SummonNpcTableRow * __thiscall
FDS_NpcBattleTableRow::ID_DieSummonNpcTable(FDS_NpcBattleTableRow *this)

{
  FDS_SummonNpcTableRow *pFVar1;
  
  pFVar1 = FDS_SummonNpcTableRow::GetRef((longlong)this->ID_DieSummonNpc,true);
  return pFVar1;
}

// ID_DropGroupTables @ 14b9560f0

TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_DropGroupTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_DropBaseTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_DropBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (this->ID_DropGroup == *(int *)(lVar2 + 0x10)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = lVar2;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ID_DropStuffSpawnTable @ 14b9561d0

FDS_DropStuffSpawnTableRow * __thiscall
FDS_NpcBattleTableRow::ID_DropStuffSpawnTable(FDS_NpcBattleTableRow *this)

{
  FDS_DropStuffSpawnTableRow *pFVar1;
  
  pFVar1 = FDS_DropStuffSpawnTableRow::GetRef((longlong)this->ID_DropStuffSpawn,true);
  return pFVar1;
}

// ID_EventActionSkillTables @ 14b9561f0

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_EventActionSkillTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_EventActionSkill).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_EventActionSkill).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b9562af:
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
        goto LAB_14b9562af;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_FixedDropGroupTables @ 14b956320

TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_FixedDropGroupTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_DropBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_DropBaseTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_DropBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (this->ID_FixedDropGroup == *(int *)(lVar2 + 0x10)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = lVar2;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ID_NormalAttackTables @ 14b956750

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_NormalAttackTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_NormalAttack).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_NormalAttack).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95680f:
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
        goto LAB_14b95680f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_NpcBattleShapeTypeTable @ 14b956aa0

FDS_NpcBattleShapeDefenceTableRow * __thiscall
FDS_NpcBattleTableRow::ID_NpcBattleShapeTypeTable(FDS_NpcBattleTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcBattleShapeDefenceTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcBattleShapeType;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcBattleShapeDefenceTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7821757876971503631>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleShapeDefenceTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcBattleShapeDefenceTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcBattleShapeDefence);
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
      pUVar8 = FDS_NpcBattleShapeDefenceTableRow::StaticStruct();
      pFVar5 = (FDS_NpcBattleShapeDefenceTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcBattleShapeDefenceTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcBattleShapeDefenceTableRow::DefaultObject;
}

// ID_NpcDeadActionTable @ 14b956e30

FDS_NpcDeadActionTableRow * __thiscall
FDS_NpcBattleTableRow::ID_NpcDeadActionTable(FDS_NpcBattleTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcDeadActionTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcDeadAction;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcDeadActionTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2541508423090962413>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcDeadActionTableRow.cpp"
                       ,0x13,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcDeadActionTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcDeadAction);
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
      pUVar8 = FDS_NpcDeadActionTableRow::StaticStruct();
      pFVar5 = (FDS_NpcDeadActionTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcDeadActionTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcDeadActionTableRow::DefaultObject;
}

// ID_NpcGroggyTable @ 14b9572c0

FDS_NpcGroggyTableRow * __thiscall
FDS_NpcBattleTableRow::ID_NpcGroggyTable(FDS_NpcBattleTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcGroggyTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcGroggy;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcGroggyTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7531108532289011694>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcGroggyTableRow.cpp"
                       ,0x12,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcGroggyTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcGroggy);
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
      pUVar8 = FDS_NpcGroggyTableRow::StaticStruct();
      pFVar5 = (FDS_NpcGroggyTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcGroggyTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcGroggyTableRow::DefaultObject;
}

// ID_NpcStatusGradeTable @ 14b957930

FDS_NpcStatusGradeTableRow * __thiscall
FDS_NpcBattleTableRow::ID_NpcStatusGradeTable(FDS_NpcBattleTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_NpcStatusGradeTableRow *pFVar5;
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
  
  iVar1 = this->ID_NpcStatusGrade;
  if ((longlong)iVar1 == 0) {
    return &FDS_NpcStatusGradeTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2005936880431923185>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcStatusGradeTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_NpcStatusGradeTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcStatusGrade);
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
      pUVar8 = FDS_NpcStatusGradeTableRow::StaticStruct();
      pFVar5 = (FDS_NpcStatusGradeTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_NpcStatusGradeTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_NpcStatusGradeTableRow::DefaultObject;
}

// ID_RangedSkillAttackTables @ 14b957de0

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_RangedSkillAttackTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_RangedSkillAttack).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_RangedSkillAttack).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b957e9f:
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
        goto LAB_14b957e9f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_SkillAttackTables @ 14b958070

TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::ID_SkillAttackTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillTableRow::GetAll(&local_38);
  iVar4 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_SkillTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar6 = (this->ID_SkillAttack).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_SkillAttack).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b95812f:
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
        goto LAB_14b95812f;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// IsValid @ 14b958800

bool __thiscall FDS_NpcBattleTableRow::IsValid(FDS_NpcBattleTableRow *this)

{
  return this != &DefaultObject;
}

// NpcBattleAiGroupIdTables @ 14b958cc0

TArray<FDS_NpcBattleAiTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::NpcBattleAiGroupIdTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_NpcBattleAiTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_TableManager *this_00;
  TArray<FDS_NpcBattleAiTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UDataTable *this_01;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_NpcBattleAiTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_699362753306951634>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattleAiTableRow.cpp"
                       ,0x2e,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FDS_NpcBattleAiTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcBattleAi);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcBattleAiTableRow_const_>
                (this_01,(wchar_t *)FVar8.Data,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar4 = local_48.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_NpcBattleAiTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar8.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar8.Data;
    if (this->NpcBattleAiGroupId == *(int *)(lVar2 + 0x10)) {
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = lVar2;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PhaseChangeTables @ 14b958e20

TArray<FDS_NpcBattlePhaseSkillSetTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::PhaseChangeTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_NpcBattlePhaseSkillSetTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_NpcBattlePhaseSkillSetTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_NpcBattlePhaseSkillSetTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6725466912026787796>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_NpcBattlePhaseSkillSetTableRow.cpp"
                       ,0x2c,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_NpcBattlePhaseSkillSetTableRow_const_*,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,NpcBattlePhaseSkillSet);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_NpcBattlePhaseSkillSetTableRow_const_>
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
        `TCheckedPointerIterator<FDS_NpcBattlePhaseSkillSetTableRow_const_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->PhaseChange).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->PhaseChange).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b958f6c:
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
        goto LAB_14b958f6c;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// SkillConditionGroupIdTables @ 14b958ff0

TArray<FDS_SkillConditionCheckTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_NpcBattleTableRow::SkillConditionGroupIdTables
          (FDS_NpcBattleTableRow *this,
          TArray<FDS_SkillConditionCheckTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_SkillConditionCheckTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_SkillConditionCheckTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_SkillConditionCheckTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (this->SkillConditionGroupId == *(int *)(lVar2 + 0x20)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = lVar2;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticStruct @ 14b58c570

UScriptStruct * __cdecl FDS_SkillAttackTableRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SkillAttackTableRow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SkillAttackTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SkillAttackTableRow,(UObject *)pUVar1,
                         L"DS_SkillAttackTableRow");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SkillAttackTableRow.OuterSingleton;
}

// FDS_SkillAttackTableRow @ 14b58da80

FDS_SkillAttackTableRow * __thiscall
FDS_SkillAttackTableRow::FDS_SkillAttackTableRow(FDS_SkillAttackTableRow *this)

{
  undefined8 uVar1;
  
  (this->ImpactTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpactTime).ArrayNum = 0;
  (this->ImpactTime).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FDS_SkillAttackTableRow__6B_;
  this->ID = 0;
  this->DataStage = 0;
  this->ID_Skill = 0;
  this->IsMainAttack = false;
  this->ID_NextAttack = 0;
  this->SkillMoveType = None;
  this->MoveRange = 0.0;
  this->EmptyTargetMoveRange = 0.0;
  this->DelayMove = 0.0;
  this->MoveTime = 0.0;
  this->MoveAngleMin = 0;
  this->MoveAngleMax = 0;
  this->ViewTarget = TargetView;
  this->ViewRotation = 0;
  this->DelayViewRotation = 0.0;
  this->ViewRotationTime = 0.0;
  this->TargetDistanceMax = 0.0;
  this->TargetType = None;
  this->TargetSubType = None;
  this->TargetSubTypeValue = 0;
  this->TargetValue = 0;
  this->ImpactType = Target;
  this->ImpactPeriod = 0.0;
  this->AttackAngle = 0;
  this->AttackDistanceMin = 0.0;
  this->AttackDistanceMax = 0.0;
  this->AttackWidth = 0.0;
  this->AttackHeight = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  (this->MulDamage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MulDamage).ArrayNum = 0;
  (this->MulDamage).ArrayMax = 0;
  (this->LevelUpMulDamage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelUpMulDamage).ArrayNum = 0;
  (this->LevelUpMulDamage).ArrayMax = 0;
  (this->ID_SkillAttackPassive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SkillAttackPassive).ArrayNum = 0;
  (this->ID_SkillAttackPassive).ArrayMax = 0;
  (this->ID_Buff).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_Buff).ArrayNum = 0;
  (this->ID_Buff).ArrayMax = 0;
  (this->ID_SkillNpcGen).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ID_SkillNpcGen).ArrayNum = 0;
  (this->ID_SkillNpcGen).ArrayMax = 0;
  this->RotationOffset = 0.0;
  this->ID_SkillTotem = 0;
  this->ProjectileType = None;
  this->TargetCheckTime = 0.0;
  this->ProjectileCount = 0;
  this->ID_SkillProjectileLink = 0;
  this->SkillDamageType = None;
  this->ID_SkillPositionDamage = 0;
  this->ElementType = NormalType;
  this->HitAttackType = None;
  this->DeadAnimationType = None;
  this->ID_HitEffect = 0;
  this->HitEffectScale = 0.0;
  this->ID_CriticalHitEffect = 0;
  this->CriticalHitEffectScale = 0.0;
  this->HitEffectRotation = 0.0;
  this->HitEffectZOffset = 0.0;
  this->HitEffectXOffset = 0.0;
  this->ID_HitEffectSound = 0;
  this->ID_SkillGuide = 0;
  this->SkillGuideApplyType = Myself;
  this->GuideEffectScalingTime = 0.0;
  this->GuideEffectAliveTime = 0.0;
  this->CameraShake = 0;
  this->IsHitAction = false;
  this->HitActionTime = 0.0;
  this->AttackDirectionType = None;
  this->ImpactAccuracyApplyType = All;
  this->ID_AbnormalAction = 0;
  this->IsAbnormalExistCheck = false;
  this->IsAttachHoldingTargetCheck = false;
  this->CheckTargetAbnormalAction = 0;
  this->ChainSkillEffect = 0;
  ::FString::FString(&this->StartChainSocket,L"");
  this->ChainSkillEffectTime = 0.0;
  this->AttackVigorPoint = 0;
  this->HitVigorPoint = 0;
  ::FString::FString(&this->AtkAttachSocket,L"");
  ::FString::FString(&this->DefAttachSocket,L"");
  this->AttachHoldingTime = 0.0;
  this->MultiCollisionCheckType = None;
  this->IsExpectedAttackLine = false;
  this->IsContinuous = false;
  ::FString::FString(&this->ChainContinuousSocket,L"");
  this->IsSetLocationPoint = false;
  return this;
}

// ~FDS_SkillAttackTableRow @ 14b58e270

void __thiscall FDS_SkillAttackTableRow::~FDS_SkillAttackTableRow(FDS_SkillAttackTableRow *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainContinuousSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefAttachSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtkAttachSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StartChainSocket).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillNpcGen).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_Buff).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID_SkillAttackPassive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelUpMulDamage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MulDamage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImpactTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// operator= @ 14b58e6c0

FDS_SkillAttackTableRow * __thiscall
FDS_SkillAttackTableRow::operator=(FDS_SkillAttackTableRow *this,FDS_SkillAttackTableRow *param_1)

{
  double dVar1;
  
  this->ID = param_1->ID;
  this->DataStage = param_1->DataStage;
  this->ID_Skill = param_1->ID_Skill;
  this->IsMainAttack = param_1->IsMainAttack;
  this->ID_NextAttack = param_1->ID_NextAttack;
  this->SkillMoveType = param_1->SkillMoveType;
  this->MoveRange = param_1->MoveRange;
  this->EmptyTargetMoveRange = param_1->EmptyTargetMoveRange;
  this->DelayMove = param_1->DelayMove;
  this->MoveTime = param_1->MoveTime;
  this->MoveAngleMin = param_1->MoveAngleMin;
  this->MoveAngleMax = param_1->MoveAngleMax;
  this->ViewTarget = param_1->ViewTarget;
  this->ViewRotation = param_1->ViewRotation;
  this->DelayViewRotation = param_1->DelayViewRotation;
  this->ViewRotationTime = param_1->ViewRotationTime;
  this->TargetDistanceMax = param_1->TargetDistanceMax;
  this->TargetType = param_1->TargetType;
  this->TargetSubType = param_1->TargetSubType;
  this->TargetSubTypeValue = param_1->TargetSubTypeValue;
  this->TargetValue = param_1->TargetValue;
  this->ImpactType = param_1->ImpactType;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->ImpactTime,&param_1->ImpactTime);
  this->ImpactPeriod = param_1->ImpactPeriod;
  this->AttackAngle = param_1->AttackAngle;
  this->AttackDistanceMin = param_1->AttackDistanceMin;
  this->AttackDistanceMax = param_1->AttackDistanceMax;
  this->AttackWidth = param_1->AttackWidth;
  this->AttackHeight = param_1->AttackHeight;
  dVar1 = (param_1->LocationOffset).field0_0x0._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = (param_1->LocationOffset).field0_0x0._s_0.X;
  (this->LocationOffset).field0_0x0._s_0.Y = dVar1;
  (this->LocationOffset).field0_0x0._s_0.Z = (param_1->LocationOffset).field0_0x0._s_0.Z;
  this->RotationOffset = param_1->RotationOffset;
  this->ID_SkillTotem = param_1->ID_SkillTotem;
  this->ProjectileType = param_1->ProjectileType;
  this->TargetCheckTime = param_1->TargetCheckTime;
  this->ProjectileCount = param_1->ProjectileCount;
  this->ID_SkillProjectileLink = param_1->ID_SkillProjectileLink;
  this->SkillDamageType = param_1->SkillDamageType;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->MulDamage,&param_1->MulDamage);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->LevelUpMulDamage,&param_1->LevelUpMulDamage);
  this->ID_SkillPositionDamage = param_1->ID_SkillPositionDamage;
  this->ElementType = param_1->ElementType;
  this->HitAttackType = param_1->HitAttackType;
  this->DeadAnimationType = param_1->DeadAnimationType;
  this->ID_HitEffect = param_1->ID_HitEffect;
  this->HitEffectScale = param_1->HitEffectScale;
  this->ID_CriticalHitEffect = param_1->ID_CriticalHitEffect;
  this->CriticalHitEffectScale = param_1->CriticalHitEffectScale;
  this->HitEffectRotation = param_1->HitEffectRotation;
  this->HitEffectZOffset = param_1->HitEffectZOffset;
  this->HitEffectXOffset = param_1->HitEffectXOffset;
  this->ID_HitEffectSound = param_1->ID_HitEffectSound;
  this->ID_SkillGuide = param_1->ID_SkillGuide;
  this->SkillGuideApplyType = param_1->SkillGuideApplyType;
  this->GuideEffectScalingTime = param_1->GuideEffectScalingTime;
  this->GuideEffectAliveTime = param_1->GuideEffectAliveTime;
  this->CameraShake = param_1->CameraShake;
  this->IsHitAction = param_1->IsHitAction;
  this->HitActionTime = param_1->HitActionTime;
  this->AttackDirectionType = param_1->AttackDirectionType;
  this->ImpactAccuracyApplyType = param_1->ImpactAccuracyApplyType;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ID_SkillAttackPassive,&param_1->ID_SkillAttackPassive);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ID_Buff,&param_1->ID_Buff);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ID_SkillNpcGen,&param_1->ID_SkillNpcGen)
  ;
  this->ID_AbnormalAction = param_1->ID_AbnormalAction;
  this->IsAbnormalExistCheck = param_1->IsAbnormalExistCheck;
  this->IsAttachHoldingTargetCheck = param_1->IsAttachHoldingTargetCheck;
  this->CheckTargetAbnormalAction = param_1->CheckTargetAbnormalAction;
  this->ChainSkillEffect = param_1->ChainSkillEffect;
  ::FString::operator=(&this->StartChainSocket,&param_1->StartChainSocket);
  this->ChainSkillEffectTime = param_1->ChainSkillEffectTime;
  this->AttackVigorPoint = param_1->AttackVigorPoint;
  this->HitVigorPoint = param_1->HitVigorPoint;
  ::FString::operator=(&this->AtkAttachSocket,&param_1->AtkAttachSocket);
  ::FString::operator=(&this->DefAttachSocket,&param_1->DefAttachSocket);
  this->AttachHoldingTime = param_1->AttachHoldingTime;
  this->MultiCollisionCheckType = param_1->MultiCollisionCheckType;
  this->IsExpectedAttackLine = param_1->IsExpectedAttackLine;
  this->IsContinuous = param_1->IsContinuous;
  ::FString::operator=(&this->ChainContinuousSocket,&param_1->ChainContinuousSocket);
  this->IsSetLocationPoint = param_1->IsSetLocationPoint;
  return this;
}

// CheckTargetAbnormalActionTable @ 14b9710d0

FDS_SkillAbnormalActionTableRow * __thiscall
FDS_SkillAttackTableRow::CheckTargetAbnormalActionTable(FDS_SkillAttackTableRow *this)

{
  FDS_SkillAbnormalActionTableRow *pFVar1;
  
  pFVar1 = FDS_SkillAbnormalActionTableRow::GetRef((longlong)this->CheckTargetAbnormalAction,true);
  return pFVar1;
}

// Get @ 14b972650

FDS_SkillAttackTableRow * __cdecl FDS_SkillAttackTableRow::Get(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillAttackTableRow *pFVar4;
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
                      (&bGEnsureHasExecuted<_8971091877000380395>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAttackTableRow.cpp"
                       ,0x15,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_SkillAttackTableRow *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillAttack);
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
      pFVar4 = (FDS_SkillAttackTableRow *)
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
  return (FDS_SkillAttackTableRow *)0x0;
}

// GetAll @ 14b974b20

TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDS_SkillAttackTableRow::GetAll
          (TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
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
                      (&bGEnsureHasExecuted<_8971091877000380366>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAttackTableRow.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FDS_SkillAttackTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    this_00 = UDS_TableManager::GetDataTable(this,SkillAttack);
    if (this_00 != (UDataTable *)0x0) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillAttackTableRow_const_>
                (this_00,(wchar_t *)FVar4.Data,__return_storage_ptr__);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRef @ 14b977120

FDS_SkillAttackTableRow * __cdecl FDS_SkillAttackTableRow::GetRef(long64 param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_TableManager *this;
  FDS_SkillAttackTableRow *pFVar4;
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
                        (&bGEnsureHasExecuted<_8971091877000380395>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillAttackTableRow.cpp"
                         ,0x15,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDS_SkillAttackTableRow *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      this_00 = UDS_TableManager::GetDataTable(this,SkillAttack);
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
        pFVar4 = (FDS_SkillAttackTableRow *)
                 UDataTable::FindRowInternal(this_00,pUVar7,FVar1,(wchar_t *)FVar9.Data,param_2);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (pFVar4 == (FDS_SkillAttackTableRow *)0x0) {
          pFVar4 = &DefaultObject;
        }
        return pFVar4;
      }
    }
  }
  return &DefaultObject;
}

// ID_AbnormalActionTable @ 14b9787b0

FDS_SkillAbnormalActionTableRow * __thiscall
FDS_SkillAttackTableRow::ID_AbnormalActionTable(FDS_SkillAttackTableRow *this)

{
  FDS_SkillAbnormalActionTableRow *pFVar1;
  
  pFVar1 = FDS_SkillAbnormalActionTableRow::GetRef((longlong)this->ID_AbnormalAction,true);
  return pFVar1;
}

// ID_BuffTables @ 14b978d40

TArray<FDS_BuffBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillAttackTableRow::ID_BuffTables
          (FDS_SkillAttackTableRow *this,
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
      pFVar6 = (this->ID_Buff).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar7.Data;
      pFVar2 = pFVar6 + (longlong)(this->ID_Buff).ArrayNum * 4;
      if (pFVar6 != pFVar2) break;
LAB_14b978dff:
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
        goto LAB_14b978dff;
      }
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar2);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// ID_CriticalHitEffectTable @ 14b9791a0

FDS_ResourceEffectTableRow * __thiscall
FDS_SkillAttackTableRow::ID_CriticalHitEffectTable(FDS_SkillAttackTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_CriticalHitEffect,true);
  return pFVar1;
}

// ID_HitEffectTable @ 14b9793d0

FDS_ResourceEffectTableRow * __thiscall
FDS_SkillAttackTableRow::ID_HitEffectTable(FDS_SkillAttackTableRow *this)

{
  FDS_ResourceEffectTableRow *pFVar1;
  
  pFVar1 = FDS_ResourceEffectTableRow::GetRef((longlong)this->ID_HitEffect,true);
  return pFVar1;
}

// ID_SkillNpcGenTables @ 14b97a440

TArray<FDS_SkillNpcGenTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillAttackTableRow::ID_SkillNpcGenTables
          (FDS_SkillAttackTableRow *this,
          TArray<FDS_SkillNpcGenTableRow_const_*,TSizedDefaultAllocator<32>_>
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
  TArray<FDS_SkillNpcGenTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UDataTable *this_01;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  TArray<FDS_SkillNpcGenTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5696316147163463725>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillNpcGenTableRow.cpp"
                       ,0x2d,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FDS_SkillNpcGenTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillNpcGen);
    if (this_01 != (UDataTable *)0x0) {
      local_res18 = (FName)this_01->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      UDataTable::GetAllRows<FDS_SkillNpcGenTableRow_const_>
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
        `TCheckedPointerIterator<FDS_SkillNpcGenTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar10.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pFVar9 = (this->ID_SkillNpcGen).AllocatorInstance.Data;
      lVar3 = *(longlong *)FVar10.Data;
      pFVar2 = pFVar9 + (longlong)(this->ID_SkillNpcGen).ArrayNum * 4;
      if (pFVar9 != pFVar2) break;
LAB_14b97a58c:
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
        goto LAB_14b97a58c;
      }
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 != pFVar2);
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// ID_SkillPositionDamageTable @ 14b97a5d0

FDS_SkillPositionDamageTableRow * __thiscall
FDS_SkillAttackTableRow::ID_SkillPositionDamageTable(FDS_SkillAttackTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_SkillPositionDamageTableRow *pFVar5;
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
  
  iVar1 = this->ID_SkillPositionDamage;
  if ((longlong)iVar1 == 0) {
    return &FDS_SkillPositionDamageTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2327161491704250353>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillPositionDamageTableRow.cpp"
                       ,0xf,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_SkillPositionDamageTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillPositionDamage);
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
      pUVar8 = FDS_SkillPositionDamageTableRow::StaticStruct();
      pFVar5 = (FDS_SkillPositionDamageTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_SkillPositionDamageTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_SkillPositionDamageTableRow::DefaultObject;
}

// ID_SkillTotemTable @ 14b97a720

FDS_SkillTotemTableRow * __thiscall
FDS_SkillAttackTableRow::ID_SkillTotemTable(FDS_SkillAttackTableRow *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TableManager *this_00;
  FDS_SkillTotemTableRow *pFVar5;
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
  
  iVar1 = this->ID_SkillTotem;
  if ((longlong)iVar1 == 0) {
    return &FDS_SkillTotemTableRow::DefaultObject;
  }
  this_00 = UDS_TableManager::GetInst();
  if (this_00 == (UDS_TableManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<709182014913249298>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataTable\\Private\\DS_SkillTotemTableRow.cpp"
                       ,0x12,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDS_SkillTotemTableRow *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    this_01 = UDS_TableManager::GetDataTable(this_00,SkillTotem);
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
      pUVar8 = FDS_SkillTotemTableRow::StaticStruct();
      pFVar5 = (FDS_SkillTotemTableRow *)
               UDataTable::FindRowInternal(this_01,pUVar8,FVar2,(wchar_t *)FVar10.Data,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pFVar5 != (FDS_SkillTotemTableRow *)0x0) {
        return pFVar5;
      }
    }
  }
  return &FDS_SkillTotemTableRow::DefaultObject;
}

// IsValid @ 14b97b0b0

bool __thiscall FDS_SkillAttackTableRow::IsValid(FDS_SkillAttackTableRow *this)

{
  return this != &DefaultObject;
}


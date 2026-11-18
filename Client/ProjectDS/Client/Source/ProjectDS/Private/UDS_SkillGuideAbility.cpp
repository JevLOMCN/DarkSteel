// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5908d0

UClass * __cdecl UDS_SkillGuideAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillGuideAbility",
               &Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillGuideAbility,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillGuideAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillGuideAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton;
}

// UDS_SkillGuideAbility @ 14b5946a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_SkillGuideAbility * __thiscall
UDS_SkillGuideAbility::UDS_SkillGuideAbility(UDS_SkillGuideAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  pTVar3 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->ElapsedTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pTVar2 = ::operator_new(0x48);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).ID_SkillGuide = 0;
    (pTVar2->Item).ImpactType = Target;
    *(undefined3 *)&(pTVar2->Item).field_0x5 = 0;
    (pTVar2->Item).StartTime = 0.0;
    (pTVar2->Item).AttackAngle = 0;
    (pTVar2->Item).AttackDistanceMax = 0.0;
    (pTVar2->Item).AttackWidth = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.X = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Y = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Z = 0.0;
    (pTVar2->Item).RotationOffset = 0.0;
    (pTVar2->Item).GuideEffectScalingTime = 0.0;
    *(undefined8 *)&(pTVar2->Item).GuideEffectAliveTime = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).ID_SkillGuide = 0;
    (pTVar2->Item).ImpactType = Target;
    (pTVar2->Item).StartTime = 0.0;
    (pTVar2->Item).AttackAngle = 0;
    (pTVar2->Item).AttackDistanceMax = 0.0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pTVar2->Item).AttackWidth = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Y = (double)uVar1;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (pTVar2->Item).RotationOffset = 0.0;
    (pTVar2->Item).GuideEffectScalingTime = 0.0;
    (pTVar2->Item).GuideEffectAliveTime = 0.0;
    pTVar3 = pTVar2;
  }
  (this->QueueSkillGuide).Tail = pTVar3;
  (this->QueueSkillGuide).Head = pTVar3;
  (this->LastSkillGuideInfo).ID_SkillGuide = 0;
  (this->LastSkillGuideInfo).ImpactType = Target;
  (this->LastSkillGuideInfo).StartTime = 0.0;
  (this->LastSkillGuideInfo).AttackAngle = 0;
  (this->LastSkillGuideInfo).AttackDistanceMax = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastSkillGuideInfo).AttackWidth = 0.0;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastSkillGuideInfo).RotationOffset = 0.0;
  (this->LastSkillGuideInfo).GuideEffectScalingTime = 0.0;
  (this->LastSkillGuideInfo).GuideEffectAliveTime = 0.0;
  return this;
}

// ~UDS_SkillGuideAbility @ 14b595380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_SkillGuideAbility::~UDS_SkillGuideAbility(UDS_SkillGuideAbility *this)

{
  TNode *pTVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pTVar1 = (this->QueueSkillGuide).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->QueueSkillGuide).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x48);
    pTVar1 = (this->QueueSkillGuide).Tail;
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b596d30

UClass * __cdecl UDS_SkillGuideAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillGuideAbility",
               &Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillGuideAbility,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillGuideAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillGuideAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillGuideAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b5977e0

bool __thiscall UDS_SkillGuideAbility::ShouldTickComponent(UDS_SkillGuideAbility *this)

{
  return false;
}

// StaticRegisterNativesUDS_SkillGuideAbility @ 14b597870

void __cdecl UDS_SkillGuideAbility::StaticRegisterNativesUDS_SkillGuideAbility(void)

{
  return;
}

// UDS_SkillGuideAbility @ 14b823320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_SkillGuideAbility * __thiscall
UDS_SkillGuideAbility::UDS_SkillGuideAbility
          (UDS_SkillGuideAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  pTVar3 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->ElapsedTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pTVar2 = ::operator_new(0x48);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).ID_SkillGuide = 0;
    (pTVar2->Item).ImpactType = Target;
    *(undefined3 *)&(pTVar2->Item).field_0x5 = 0;
    (pTVar2->Item).StartTime = 0.0;
    (pTVar2->Item).AttackAngle = 0;
    (pTVar2->Item).AttackDistanceMax = 0.0;
    (pTVar2->Item).AttackWidth = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.X = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Y = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Z = 0.0;
    (pTVar2->Item).RotationOffset = 0.0;
    (pTVar2->Item).GuideEffectScalingTime = 0.0;
    *(undefined8 *)&(pTVar2->Item).GuideEffectAliveTime = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).ID_SkillGuide = 0;
    (pTVar2->Item).ImpactType = Target;
    (pTVar2->Item).StartTime = 0.0;
    (pTVar2->Item).AttackAngle = 0;
    (pTVar2->Item).AttackDistanceMax = 0.0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pTVar2->Item).AttackWidth = 0.0;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Y = (double)uVar1;
    (pTVar2->Item).LocationOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (pTVar2->Item).RotationOffset = 0.0;
    (pTVar2->Item).GuideEffectScalingTime = 0.0;
    (pTVar2->Item).GuideEffectAliveTime = 0.0;
    pTVar3 = pTVar2;
  }
  (this->QueueSkillGuide).Tail = pTVar3;
  (this->QueueSkillGuide).Head = pTVar3;
  (this->LastSkillGuideInfo).ID_SkillGuide = 0;
  (this->LastSkillGuideInfo).ImpactType = Target;
  (this->LastSkillGuideInfo).StartTime = 0.0;
  (this->LastSkillGuideInfo).AttackAngle = 0;
  (this->LastSkillGuideInfo).AttackDistanceMax = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastSkillGuideInfo).AttackWidth = 0.0;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastSkillGuideInfo).RotationOffset = 0.0;
  (this->LastSkillGuideInfo).GuideEffectScalingTime = 0.0;
  (this->LastSkillGuideInfo).GuideEffectAliveTime = 0.0;
  return this;
}

// ClearVariables @ 14b827d90

void __thiscall UDS_SkillGuideAbility::ClearVariables(UDS_SkillGuideAbility *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  while (pTVar1 = ((this->QueueSkillGuide).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->QueueSkillGuide).Tail;
    (this->QueueSkillGuide).Tail = pTVar1;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pTVar1->Item).ID_SkillGuide = 0;
    (pTVar1->Item).ImpactType = Target;
    *(undefined3 *)&(pTVar1->Item).field_0x5 = 0;
    (pTVar1->Item).StartTime = 0.0;
    (pTVar1->Item).AttackAngle = 0;
    uStack_28 = (undefined4)uVar4;
    uStack_24 = (undefined4)((ulonglong)uVar4 >> 0x20);
    (pTVar1->Item).AttackDistanceMax = 0.0;
    (pTVar1->Item).AttackWidth = 0.0;
    (pTVar1->Item).LocationOffset.field0_0x0._s_0.X = (double)uVar3;
    *(undefined4 *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 8) = uStack_28;
    *(undefined4 *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0xc) = uStack_24;
    *(int *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0x10) = (int)uVar5;
    *(int *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0x14) =
         (int)((ulonglong)uVar5 >> 0x20);
    (pTVar1->Item).RotationOffset = 0.0;
    (pTVar1->Item).GuideEffectScalingTime = 0.0;
    *(undefined8 *)&(pTVar1->Item).GuideEffectAliveTime = 0;
    ::operator_delete(pTVar2,0x48);
  }
  this->ElapsedTime = 0.0;
  return;
}

// OnCanActivate @ 14b83a4f0

bool __thiscall UDS_SkillGuideAbility::OnCanActivate(UDS_SkillGuideAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83f900

void __thiscall
UDS_SkillGuideAbility::OnDeactivateAbility(UDS_SkillGuideAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b8457e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_SkillGuideAbility::OnPostActivateAbility(UDS_SkillGuideAbility *this)

{
  int iVar1;
  TNode *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  TNode *pTVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  this->ElapsedTime = 0.0;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    UDS_SkillData::GetData
              ((ulong64)&local_res18,this->_padding_,SUB41(*(undefined4 *)(pUVar7 + 1),0));
    bVar6 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      iVar1 = *(int *)&pUVar7[10].field_0x8;
      puVar9 = *(undefined8 **)(pUVar7 + 10);
      puVar10 = puVar9 + (longlong)iVar1 * 8;
      while( true ) {
        if (*(int *)&pUVar7[10].field_0x8 != iVar1) {
          `TCheckedPointerIterator<FDS_SkillGuideInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar9 == puVar10) break;
        pTVar8 = ::operator_new(0x48);
        if (pTVar8 != (TNode *)0x0) {
          pTVar8->NextNode = (TNode *)0x0;
          uVar3 = *puVar9;
          uVar4 = puVar9[1];
          (pTVar8->Item).ID_SkillGuide = (int)uVar3;
          (pTVar8->Item).ImpactType = (char)((ulonglong)uVar3 >> 0x20);
          *(int3 *)&(pTVar8->Item).field_0x5 = (int3)((ulonglong)uVar3 >> 0x28);
          (pTVar8->Item).StartTime = (float)(int)uVar4;
          (pTVar8->Item).AttackAngle = (int)((ulonglong)uVar4 >> 0x20);
          uVar3 = puVar9[2];
          dVar5 = (double)puVar9[3];
          (pTVar8->Item).AttackDistanceMax = (float)(int)uVar3;
          (pTVar8->Item).AttackWidth = (float)(int)((ulonglong)uVar3 >> 0x20);
          (pTVar8->Item).LocationOffset.field0_0x0._s_0.X = dVar5;
          dVar5 = (double)puVar9[5];
          (pTVar8->Item).LocationOffset.field0_0x0._s_0.Y = (double)puVar9[4];
          (pTVar8->Item).LocationOffset.field0_0x0._s_0.Z = dVar5;
          uVar3 = puVar9[6];
          uVar4 = puVar9[7];
          (pTVar8->Item).RotationOffset = (float)(int)uVar3;
          (pTVar8->Item).GuideEffectScalingTime = (float)(int)((ulonglong)uVar3 >> 0x20);
          *(undefined8 *)&(pTVar8->Item).GuideEffectAliveTime = uVar4;
          pTVar2 = (this->QueueSkillGuide).Head;
          (this->QueueSkillGuide).Head = pTVar8;
          pTVar2->NextNode = pTVar8;
        }
        puVar9 = puVar9 + 8;
      }
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b8499c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_SkillGuideAbility::OnTickComponent(UDS_SkillGuideAbility *this,float param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  double dVar3;
  EDS_ImpactType EVar4;
  undefined3 uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FDS_SkillGuideInfo *pFVar12;
  undefined4 uVar13;
  EDS_AbilityDeactivateType local_res10 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  FDS_SkillGuideInfo local_58;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  pTVar1 = (this->QueueSkillGuide).Tail;
  this->ElapsedTime = param_1 + this->ElapsedTime;
  if (pTVar1->NextNode == (TNode *)0x0) {
    local_res10[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    return;
  }
  pFVar12 = (FDS_SkillGuideInfo *)0x0;
  if (((this->QueueSkillGuide).Tail)->NextNode != (TNode *)0x0) {
    pFVar12 = &((this->QueueSkillGuide).Tail)->NextNode->Item;
  }
  local_58.ID_SkillGuide = pFVar12->ID_SkillGuide;
  local_58.ImpactType = pFVar12->ImpactType;
  local_58._5_3_ = *(undefined3 *)&pFVar12->field_0x5;
  local_58.StartTime = pFVar12->StartTime;
  local_58.AttackAngle = pFVar12->AttackAngle;
  local_58.AttackDistanceMax = pFVar12->AttackDistanceMax;
  local_58.AttackWidth = pFVar12->AttackWidth;
  local_58.LocationOffset.field0_0x0._s_0.X = (pFVar12->LocationOffset).field0_0x0._s_0.X;
  local_58.LocationOffset.field0_0x0._s_0.Y = (pFVar12->LocationOffset).field0_0x0._s_0.Y;
  local_58.LocationOffset.field0_0x0._s_0.Z = (pFVar12->LocationOffset).field0_0x0._s_0.Z;
  local_58.RotationOffset = pFVar12->RotationOffset;
  local_58.GuideEffectScalingTime = pFVar12->GuideEffectScalingTime;
  local_58.GuideEffectAliveTime = pFVar12->GuideEffectAliveTime;
  local_58._60_4_ = *(undefined4 *)&pFVar12->field_0x3c;
  if (local_58.StartTime < this->ElapsedTime) {
    PlaySkillGuide(this,&local_58);
    pTVar1 = ((this->QueueSkillGuide).Tail)->NextNode;
    if (pTVar1 != (TNode *)0x0) {
      EVar4 = (pTVar1->Item).ImpactType;
      uVar5 = *(undefined3 *)&(pTVar1->Item).field_0x5;
      fVar6 = (pTVar1->Item).StartTime;
      iVar7 = (pTVar1->Item).AttackAngle;
      (this->LastSkillGuideInfo).ID_SkillGuide = (pTVar1->Item).ID_SkillGuide;
      (this->LastSkillGuideInfo).ImpactType = EVar4;
      *(undefined3 *)&(this->LastSkillGuideInfo).field_0x5 = uVar5;
      (this->LastSkillGuideInfo).StartTime = fVar6;
      (this->LastSkillGuideInfo).AttackAngle = iVar7;
      fVar6 = (pTVar1->Item).AttackWidth;
      dVar3 = (pTVar1->Item).LocationOffset.field0_0x0._s_0.X;
      (this->LastSkillGuideInfo).AttackDistanceMax = (pTVar1->Item).AttackDistanceMax;
      (this->LastSkillGuideInfo).AttackWidth = fVar6;
      (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.X = dVar3;
      dVar3 = (pTVar1->Item).LocationOffset.field0_0x0._s_0.Z;
      (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Y =
           (pTVar1->Item).LocationOffset.field0_0x0._s_0.Y;
      (this->LastSkillGuideInfo).LocationOffset.field0_0x0._s_0.Z = dVar3;
      fVar6 = (pTVar1->Item).GuideEffectScalingTime;
      fVar8 = (pTVar1->Item).GuideEffectAliveTime;
      uVar13 = *(undefined4 *)&(pTVar1->Item).field_0x3c;
      (this->LastSkillGuideInfo).RotationOffset = (pTVar1->Item).RotationOffset;
      (this->LastSkillGuideInfo).GuideEffectScalingTime = fVar6;
      (this->LastSkillGuideInfo).GuideEffectAliveTime = fVar8;
      *(undefined4 *)&(this->LastSkillGuideInfo).field_0x3c = uVar13;
      pTVar2 = (this->QueueSkillGuide).Tail;
      (this->QueueSkillGuide).Tail = pTVar1;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar9 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20;
      (pTVar1->Item).ID_SkillGuide = 0;
      (pTVar1->Item).ImpactType = Target;
      *(undefined3 *)&(pTVar1->Item).field_0x5 = 0;
      (pTVar1->Item).StartTime = 0.0;
      (pTVar1->Item).AttackAngle = 0;
      uStack_78 = (undefined4)uVar11;
      uStack_74 = (undefined4)((ulonglong)uVar11 >> 0x20);
      (pTVar1->Item).AttackDistanceMax = 0.0;
      (pTVar1->Item).AttackWidth = 0.0;
      (pTVar1->Item).LocationOffset.field0_0x0._s_0.X = (double)uVar10;
      *(undefined4 *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 8) = uStack_78;
      *(undefined4 *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0xc) = uStack_74;
      *(undefined4 *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0x10) = uVar13;
      *(int *)((longlong)&(pTVar1->Item).LocationOffset.field0_0x0 + 0x14) = (int)uVar9;
      (pTVar1->Item).RotationOffset = 0.0;
      (pTVar1->Item).GuideEffectScalingTime = 0.0;
      *(undefined8 *)&(pTVar1->Item).GuideEffectAliveTime = 0;
      ::operator_delete(pTVar2,0x48);
    }
  }
  return;
}

// PlaySkillGuide @ 14b84b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_SkillGuideAbility::PlaySkillGuide(UDS_SkillGuideAbility *this,FDS_SkillGuideInfo *param_1)

{
  undefined8 uVar1;
  double dVar2;
  EDS_ImpactType EVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar7;
  FDS_GetTargetLocationResult *pFVar8;
  UObject *pUVar9;
  UWorld *this_01;
  UClass *pUVar10;
  ADS_SkillGuideActor *this_02;
  FWeakObjectPtr FVar11;
  FDS_EntityBase *pFVar12;
  FWeakObjectPtr *this_03;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_198 [32];
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158 [2];
  undefined1 local_148 [12];
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  FDS_GetTargetLocationResult local_118;
  undefined1 local_e8 [112];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1->ID_SkillGuide == 0) {
    return;
  }
  if (param_1->GuideEffectAliveTime <= 0.0) {
    return;
  }
  EVar3 = param_1->ImpactType;
  uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar24 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  if ((EVar3 == Target) || (EVar3 == TargetCircle)) {
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_160,(EDS_AbilityTagType *)&this->_padding_);
    bVar14 = FWeakObjectPtr::IsValid(&local_160);
    if (!bVar14) {
      return;
    }
    pFVar8 = UDS_FindTargetAbility::GetTargetLocation
                       (&local_118,
                        (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_160,true);
    local_148._0_8_ = *(undefined8 *)pFVar8;
    unique0x10000624 = *(undefined8 *)&(pFVar8->TargetLocation).field0_0x0;
    _local_138 = *(double *)((longlong)&(pFVar8->TargetLocation).field0_0x0 + 8);
    uStack_130 = *(double *)((longlong)&(pFVar8->TargetLocation).field0_0x0 + 0x10);
    local_128._0_4_ = pFVar8->TargetRadius;
    local_128._4_4_ = *(undefined4 *)&pFVar8->field_0x24;
    bVar14 = FDS_GetTargetLocationResult::IsValidData((FDS_GetTargetLocationResult *)local_148);
    if (!bVar14) {
      return;
    }
    uVar19 = local_148._8_4_;
    uVar20 = uStack_13c;
    uVar21 = local_138;
    uVar22 = uStack_134;
    uVar23 = (undefined4)uStack_130;
    uVar24 = (undefined4)((ulonglong)uStack_130 >> 0x20);
    pUVar9 = FWeakObjectPtr::Get(&local_160);
    pFVar12 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar9[2].field_0x10);
    if (pFVar12 == (FDS_EntityBase *)0x0) {
      return;
    }
    (**(code **)(pFVar12->_padding_ + 0x78))(pFVar12,local_158);
    bVar14 = FWeakObjectPtr::IsValid(local_158);
    if (!bVar14) {
      return;
    }
    this_03 = local_158;
LAB_14b84b1a3:
    pUVar9 = FWeakObjectPtr::Get(this_03);
    dVar2 = *(double *)&pUVar9[10].field_0x20;
    uVar15._0_1_ = (bool)pUVar9[10].field_0x10;
    uVar15._1_3_ = *(undefined3 *)&pUVar9[10].field_0x11;
    uVar16 = *(undefined4 *)&pUVar9[10].field_0x14;
    uVar17 = *(undefined4 *)&pUVar9[10].field_0x18;
    uVar18 = *(undefined4 *)&pUVar9[10].field_0x1c;
  }
  else if (((EVar3 == SelfCircle) || (EVar3 == SelfDirect)) ||
          (uVar15 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_,
          uVar16 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
          uVar17 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_,
          uVar18 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
          dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll, EVar3 == SelfCross)) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar7 = UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)local_148);
    this_03 = (FWeakObjectPtr *)&this->_padding_;
    uVar19 = *(undefined4 *)&pTVar7->field0_0x0;
    uVar20 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
    uVar21 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
    uVar22 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
    uVar1 = *(undefined8 *)((longlong)&pTVar7->field0_0x0 + 0x10);
    uVar23 = (undefined4)uVar1;
    uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
    goto LAB_14b84b1a3;
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pUVar10 = Z_Construct_UClass_ADS_SkillGuideActor_NoRegister();
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_e8);
  local_e8[0x32] = local_e8[0x32] | 4;
  local_e8._16_8_ = (AActor *)0x0;
  local_e8._24_8_ = (APawn *)0x0;
  local_e8[0x30] = AlwaysSpawn;
  local_e8[0x31] = MultiplyWithRoot;
  if ((pUVar10 == (UClass *)0x0) ||
     (this_02 = (ADS_SkillGuideActor *)
                UWorld::SpawnActor(this_01,pUVar10,&UE::Math::TTransform<double>::Identity,
                                   (FActorSpawnParameters *)local_e8),
     this_02 == (ADS_SkillGuideActor *)0x0)) {
LAB_14b84b237:
    this_02 = (ADS_SkillGuideActor *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_ADS_SkillGuideActor_NoRegister();
    iVar5 = (int)pUVar10->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar10->_padding_)) goto LAB_14b84b237;
  }
  if (local_e8._64_8_ != 0) {
    plVar13 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_02 == (ADS_SkillGuideActor *)0x0) {
      return;
    }
  }
  else {
    if (this_02 == (ADS_SkillGuideActor *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  UGameplayStatics::FinishSpawningActor
            ((AActor *)this_02,&UE::Math::TTransform<double>::Identity,MultiplyWithRoot);
  cVar4 = (char)this->_padding_;
  bVar14 = false;
  if (cVar4 == '\x02') goto LAB_14b84b36d;
  if (cVar4 != '\a') {
    bVar14 = true;
    goto LAB_14b84b36d;
  }
  FVar11 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (FVar11 == (FWeakObjectPtr)0x0) {
LAB_14b84b2e6:
    FVar11.ObjectIndex = 0;
    FVar11.ObjectSerialNumber = 0;
  }
  else {
    pUVar10 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
    iVar5 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) goto LAB_14b84b2e6;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar11);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_158[0] = FVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar11);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)local_158);
  bVar6 = TWeakObjectPtr<ADS_TotemActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_TotemActor,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (!bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&local_160);
    pFVar12 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar9[0x2d].field_0x20);
    if (pFVar12 != (FDS_EntityBase *)0x0) {
      bVar14 = pFVar12->EntityType != MainCharacter;
    }
  }
LAB_14b84b36d:
  local_148._4_4_ = uVar20;
  local_148._0_4_ = uVar19;
  uStack_13c = uVar22;
  local_148._8_4_ = uVar21;
  _local_138 = CONCAT44(uVar24,uVar23);
  local_118._0_4_ = uVar15;
  local_118._4_4_ = uVar16;
  local_118.TargetLocation.field0_0x0._0_4_ = uVar17;
  local_118.TargetLocation.field0_0x0._4_4_ = uVar18;
  local_118.TargetLocation.field0_0x0._s_0.Y = dVar2;
  ADS_SkillGuideActor::PlaySkillGuide
            (this_02,param_1,(TVector<double> *)local_148,(TRotator<double> *)&local_118,bVar14);
  return;
}


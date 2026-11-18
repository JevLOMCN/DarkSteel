// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b534880

UClass * __cdecl ADS_NPCBoss::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBoss",
               &Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton,
               StaticRegisterNativesADS_NPCBoss,0x860,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_NPCBoss>,
               InternalVTableHelperCtorCaller<ADS_NPCBoss>,local_res8,ADS_NPC::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton;
}

// ADS_NPCBoss @ 14b537e20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_NPCBoss * __thiscall ADS_NPCBoss::ADS_NPCBoss(ADS_NPCBoss *this,FVTableHelper *param_1)

{
  ADS_NPC::ADS_NPC((ADS_NPC *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->CameraWidget).field0_0x0.DebugPtr = (UDS_HUD_NpcViewTargetCamera *)0x0;
  (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcCameraTargetConditionDatas).ArrayNum = 0;
  (this->NpcCameraTargetConditionDatas).ArrayMax = 0;
  (this->TargetSocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSocketName).Data.ArrayNum = 0;
  (this->TargetSocketName).Data.ArrayMax = 0;
  this->TargetZoomFOV = 0.0;
  this->TargetZoomStartDistance = 0.0;
  this->TargetZoomEndDistance = 0.0;
  this->TargetZoomMoveTime = 0.0;
  this->TargetZoomLifeTime = 0.0;
  this->TargetZoomCoolTime = 0.0;
  this->ElapsedTime = 0.0;
  this->bShowingZoomCamera = false;
  this->bActivatedCoolTime = false;
  this->CurrentCoolTime = 0.0;
  this->bUseTargetZoomCamera = false;
  return this;
}

// ~ADS_NPCBoss @ 14b538bb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCBoss::~ADS_NPCBoss(ADS_NPCBoss *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->TargetSocketName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ADS_NPC::~ADS_NPC((ADS_NPC *)this);
  return;
}

// GetPrivateStaticClass @ 14b539e50

UClass * __cdecl ADS_NPCBoss::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBoss",
               &Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton,
               StaticRegisterNativesADS_NPCBoss,0x860,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_NPCBoss>,
               InternalVTableHelperCtorCaller<ADS_NPCBoss>,local_res8,ADS_NPC::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPCBoss.InnerSingleton;
}

// StaticRegisterNativesADS_NPCBoss @ 14b53a910

void __cdecl ADS_NPCBoss::StaticRegisterNativesADS_NPCBoss(void)

{
  return;
}

// ADS_NPCBoss @ 14bc81b80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_NPCBoss * __thiscall ADS_NPCBoss::ADS_NPCBoss(ADS_NPCBoss *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDS_SpringArmComponent *this_00;
  UDS_NpcBossCameraComponent *this_01;
  FName local_res8;
  
  ADS_NPC::ADS_NPC((ADS_NPC *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->CameraWidget).field0_0x0.DebugPtr = (UDS_HUD_NpcViewTargetCamera *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcCameraTargetConditionDatas).ArrayNum = 0;
  (this->NpcCameraTargetConditionDatas).ArrayMax = 0;
  (this->TargetSocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSocketName).Data.ArrayNum = 0;
  (this->TargetSocketName).Data.ArrayMax = 0;
  this->TargetZoomFOV = 0.0;
  this->TargetZoomStartDistance = 0.0;
  this->TargetZoomEndDistance = 0.0;
  this->TargetZoomMoveTime = 0.0;
  this->TargetZoomLifeTime = 0.0;
  this->TargetZoomCoolTime = 0.0;
  this->ElapsedTime = 0.0;
  this->bShowingZoomCamera = false;
  this->bActivatedCoolTime = false;
  this->CurrentCoolTime = 0.0;
  this->bUseTargetZoomCamera = false;
  pFVar3 = ::FName::FName(&local_res8,L"SpringArm");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_SpringArmComponent_NoRegister();
  this_00 = (UDS_SpringArmComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  this->SpringArm = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  *(undefined4 *)&this->SpringArm->field_0x250 = 0;
  puVar1 = &this->SpringArm->field_0x290;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffd;
  pFVar3 = ::FName::FName(&local_res8,L"NpcBossCameraComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_NpcBossCameraComponent_NoRegister();
  this_01 = (UDS_NpcBossCameraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  this->NpcBossCameraComponent = this_01;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,(USceneComponent *)this->SpringArm,
             USpringArmComponent::SocketName);
  puVar1 = &this->NpcBossCameraComponent->field_0x292;
  *puVar1 = *puVar1 & 0xfd;
  return this;
}

// BeginPlay @ 14bc88dd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCBoss::BeginPlay(ADS_NPCBoss *this)

{
  FScriptContainerElement *pFVar1;
  EDS_AccountAuthority EVar2;
  FDS_AuthData *this_00;
  UDS_ZoneManager *pUVar3;
  UDS_EntityManager *this_01;
  int iVar4;
  ForAnyElementType FVar5;
  longlong local_res8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_38;
  code *local_28;
  ulonglong uStack_20;
  
  ADS_NPC::BeginPlay((ADS_NPC *)this);
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  EVar2 = FDS_AuthData::GetAccountAuthority(this_00);
  if (EVar2 == GmInvisible) {
    pUVar3 = UDS_ZoneManager::GetInst();
    if ((pUVar3 != (UDS_ZoneManager *)0x0) && (pUVar3->IslandID == 6)) {
      this->bUseTargetZoomCamera = true;
    }
  }
  if (this->bUseTargetZoomCamera == true) {
    this->CurrentCoolTime = this->TargetZoomCoolTime;
    this_01 = UDS_EntityManager::GetInst();
    if (this_01 != (UDS_EntityManager *)0x0) {
      UDS_EntityManager::GetEntityIDArray(this_01,&local_38,NetCharacter);
      iVar4 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar4 * 8;
      FVar5.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar4) {
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar5.Data == pFVar1) break;
        local_res8 = *(longlong *)FVar5.Data;
        BindTargetData(this,(ulong64 *)&local_res8);
        FVar5.Data = FVar5.Data + 8;
      }
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = OnSpawnEntity;
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_NPCBoss>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *)&this_01->OnSpawnEntityEvent,(ADS_NPCBoss *)&local_res8,(pmf_c40c95a9 *)this);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = OnGroupDamageEvent;
    TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_NPCBoss>
              ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
                *)&FDS_BattleService::OnGroupDamageEventDelegate,(ADS_NPCBoss *)&local_res8,
               (pmf_3adef806 *)this);
  }
  return;
}

// BindTargetData @ 14bc8b700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ADS_NPCBoss::BindTargetData(ADS_NPCBoss *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_SkillDataSet *this_00;
  UObject *pUVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 auStack_1a8 [32];
  ulong64 *local_188;
  undefined1 local_178;
  undefined1 local_177 [15];
  code *local_168;
  ulonglong uStack_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  longlong *local_138;
  int iStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  int local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (this->bUseTargetZoomCamera == true) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_158);
    bVar4 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar4) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_158);
      UDS_SkillDataSet::GetAllSkillData
                (this_00,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                          *)local_98);
      uVar10 = local_70;
      iStack_130 = 0;
      uStack_12c = 1;
      local_118 = 0;
      uStack_11c = 0;
      if (local_70 != 0) {
        puVar11 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar11 = local_78;
        }
        uVar9 = *puVar11;
        local_118 = 0;
        while (uVar9 == 0) {
          lVar7 = (longlong)iStack_130;
          local_118 = local_118 + 0x20;
          iStack_130 = iStack_130 + 1;
          uStack_11c = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_130)
          goto LAB_14bc8b810;
          uVar9 = puVar11[lVar7 + 1];
        }
        uStack_12c = -uVar9 & uVar9;
        uVar1 = (ulonglong)uStack_12c * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_108 = (int)lVar7;
        uStack_11c = local_118 + -1 + local_108;
        if ((int)local_70 < (int)uStack_11c) {
          uStack_11c = local_70;
        }
      }
LAB_14bc8b810:
      local_138 = (longlong *)local_98;
      local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar9 = local_70 & 0xffffffe0;
      iStack_110 = local_98._8_4_ - local_64;
      uStack_120 = 0xffffffff;
      TStack_f8.CurrentBitIndex = uStack_11c;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      TStack_f8._padding_ = CONCAT44(uStack_12c,iStack_130);
      iVar8 = (int)local_70 >> 5;
      TStack_f8._28_4_ = uStack_11c;
      TStack_f8.BaseBitIndex = local_118;
      uStack_d8 = CONCAT44(uStack_10c,iStack_110);
      bVar6 = (byte)local_70;
      uStack_114 = uStack_11c;
      local_100 = local_138;
      TStack_f8.Array = local_128;
      if (((int)local_70 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar10 != local_70) {
        puVar11 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar11 = local_78;
        }
        uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar8];
        while (uVar10 == 0) {
          lVar7 = (longlong)iVar8;
          uVar9 = uVar9 + 0x20;
          iVar8 = iVar8 + 1;
          uVar10 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14bc8b90c;
          uVar10 = puVar11[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar10 = (int)lVar7 + -1 + uVar9;
        if ((int)local_70 < (int)uVar10) {
          uVar10 = local_70;
        }
      }
LAB_14bc8b90c:
      while( true ) {
        plVar3 = local_100;
        if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
          `TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_177);
        }
        if (((TStack_f8.CurrentBitIndex == uVar10) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar3 == (longlong *)local_98)) break;
        local_150 = *(FWeakObjectPtr *)(*plVar3 + 4 + (longlong)TStack_f8.CurrentBitIndex * 0x14);
        bVar4 = FWeakObjectPtr::IsValid(&local_150);
        if (bVar4) {
          local_168 = OnActivateSkill;
          uStack_160 = uStack_160 & 0xffffffff00000000;
          local_c0._8_8_ = OnActivateSkill;
          local_c0._16_8_ = uStack_160;
          pUVar5 = FWeakObjectPtr::Get(&local_150);
          local_188 = param_1;
          TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
          ::AddUObject<ADS_NPCBoss,unsigned___int64_const_&>
                    ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                      *)&pUVar5[10].field_0x10,(ADS_NPCBoss *)local_d0,(pmf_769b9d3f *)this,
                     (ulong64 *)(local_c0 + 8));
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    local_178 = 0x30;
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_148,(EDS_AbilityTagType *)param_1);
    bVar4 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar4) {
      uStack_160 = uStack_160 & 0xffffffff00000000;
      local_168 = OnChangedAbnormalInfo;
      pUVar5 = FWeakObjectPtr::Get(&local_148);
      local_188 = param_1;
      TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_NPCBoss,unsigned___int64_const_&>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
                  *)&pUVar5[6].field_0x10,(ADS_NPCBoss *)(local_d0 + 8),(pmf_1a881e49 *)this,
                 (ulong64 *)&local_168);
    }
    UDS_CharBuffData::GetData((ulong64)&local_140);
    bVar4 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar4) {
      uStack_160 = uStack_160 & 0xffffffff00000000;
      local_168 = OnChangedBuffList;
      local_c0._24_8_ = OnChangedBuffList;
      local_c0._32_8_ = uStack_160;
      pUVar5 = FWeakObjectPtr::Get(&local_140);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_NPCBoss>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar5[6].field_0x8,(ADS_NPCBoss *)local_c0,(pmf_4f747701 *)this);
    }
  }
  return;
}

// CreateTargetCamera @ 14bc961b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPCBoss::CreateTargetCamera(ADS_NPCBoss *this)

{
  undefined1 *puVar1;
  int iVar2;
  ADS_NPCBoss *pAVar3;
  UWorld *pUVar4;
  FActorSpawnParameters *pFVar5;
  UClass *pUVar6;
  ADS_CameraActor_BossTarget *pAVar7;
  FString *pFVar8;
  UTextureRenderTarget2D *pUVar9;
  USceneCaptureComponent2D *pUVar10;
  UObject *pUVar11;
  UDS_HUD_NpcViewTargetCamera *pUVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  ADS_CameraActor_BossTarget *pAVar16;
  undefined1 auStackY_138 [32];
  TStringView<wchar_t> local_f8;
  TVector<double>_u_0 local_e8;
  FSoftObjectPath local_c8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pAVar16 = (ADS_CameraActor_BossTarget *)0x0;
  if (this->TargetCameraActor == (ADS_CameraActor_BossTarget *)0x0) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    pFVar5 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    pUVar6 = Z_Construct_UClass_ADS_CameraActor_BossTarget_NoRegister();
    pAVar7 = (ADS_CameraActor_BossTarget *)
             UWorld::SpawnActor(pUVar4,pUVar6,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar5)
    ;
    if (pAVar7 != (ADS_CameraActor_BossTarget *)0x0) {
      pUVar6 = Z_Construct_UClass_ADS_CameraActor_BossTarget_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar2) ||
         (pAVar16 = pAVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar6->_padding_)) {
        pFVar8 = GetTypeName<ADS_CameraActor_BossTarget>((FString *)&local_f8);
        pwVar14 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<AActor>((FString *)&local_e8._s_0,(AActor *)pAVar7);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar14,pwVar15);
      }
    }
    this->TargetCameraActor = pAVar16;
    if (local_a8._64_8_ != 0) {
      plVar13 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    local_e8._s_0.X = 0.0;
    AActor::AttachToActor
              ((AActor *)this->TargetCameraActor,(AActor *)this,
               &FAttachmentTransformRules::KeepRelativeTransform,(FName)0x0);
    pAVar16 = this->TargetCameraActor;
    pFVar8 = ::FString::FString((FString *)&local_f8,&this->TargetSocketName);
    local_e8._s_0.X = (this->TargetSocketOffset).field0_0x0._s_0.X;
    local_e8._s_0.Y = (this->TargetSocketOffset).field0_0x0._s_0.Y;
    local_e8._s_0.Z = (this->TargetSocketOffset).field0_0x0._s_0.Z;
    ADS_CameraActor_BossTarget::InitData
              (pAVar16,this->TargetZoomFOV,this->TargetZoomStartDistance,this->TargetZoomEndDistance
               ,this->TargetZoomMoveTime,(TVector<double> *)&local_e8._s_0,pFVar8);
  }
  if (this->BossRenderTarget == (UTextureRenderTarget2D *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = this;
    pUVar9 = (UTextureRenderTarget2D *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar13 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    this->BossRenderTarget = pUVar9;
    UTextureRenderTarget2D::InitAutoFormat(pUVar9,0xf00,0x870);
    UTextureRenderTarget2D::UpdateResourceImmediate(this->BossRenderTarget,true);
  }
  if (this->SceneCaptureComponent == (USceneCaptureComponent2D *)0x0) {
    pAVar3 = (ADS_NPCBoss *)this->TargetCameraActor;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = pAVar3;
    pUVar10 = (USceneCaptureComponent2D *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar13 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    this->SceneCaptureComponent = pUVar10;
    UActorComponent::RegisterComponent((UActorComponent *)pUVar10);
    local_e8._s_0.X = 0.0;
    (**(code **)(*(longlong *)this->SceneCaptureComponent + 0x508))
              (this->SceneCaptureComponent,this->TargetCameraActor->_padding_,
               &FAttachmentTransformRules::KeepRelativeTransform,0);
    pUVar10 = this->SceneCaptureComponent;
    pUVar9 = this->BossRenderTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (pUVar10->TextureTarget).field0_0x0.DebugPtr = pUVar9;
    this->SceneCaptureComponent->field_0x251 = 2;
    puVar1 = &this->SceneCaptureComponent->field_0x252;
    *puVar1 = *puVar1 | 1;
  }
  if ((this->CameraWidget).field0_0x0.DebugPtr == (UDS_HUD_NpcViewTargetCamera *)0x0) {
    local_f8.Size = 0x61;
    local_f8.DataPtr =
         L"/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Boss_Ai/HUD_Boss_Ai_TargetCamera.HUD_Boss_Ai_TargetCamera_C"
    ;
    local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_c8.AssetPath.PackageName.Number = 0;
    local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_c8.AssetPath.AssetName.Number = 0;
    local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.SubPathString.Data.ArrayNum = 0;
    local_c8.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_c8,&local_f8);
    if ((local_c8.AssetPath.PackageName != (FName)0x0) &&
       (pUVar11 = FSoftObjectPath::TryLoad(&local_c8,(FUObjectSerializeContext *)0x0),
       pUVar11 != (UObject *)0x0)) {
      pUVar6 = Z_Construct_UClass_UClass_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        local_e8._s_0.X = 0.0;
        local_f8.DataPtr = (wchar_t *)pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        pUVar4 = AActor::GetWorld((AActor *)this);
        pUVar12 = CreateWidget<UDS_HUD_NpcViewTargetCamera,UWorld_*>
                            (pUVar4,(TSubclassOf<UUserWidget>)&local_f8,(FName)local_e8._s_0.X);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_HUD_NpcViewTargetCamera *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->CameraWidget).field0_0x0.DebugPtr = pUVar12;
        UUserWidget::AddToViewport((UUserWidget *)pUVar12,0);
        UDS_HUD_NpcViewTargetCamera::SetRenderTarget
                  ((this->CameraWidget).field0_0x0.DebugPtr,this->BossRenderTarget);
        pUVar12 = (this->CameraWidget).field0_0x0.DebugPtr;
        (**(code **)(pUVar12->_padding_ + 0x2c0))(pUVar12,1);
      }
    }
    if (local_c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndPlay @ 14bc96b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_NPCBoss::EndPlay(ADS_NPCBoss *this,Type param_1)

{
  UDS_EntityManager *pUVar1;
  
  UDS_PartsSystemControl::Deinit((UDS_PartsSystemControl *)this->_padding_);
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  if (this->TargetCameraActor != (ADS_CameraActor_BossTarget *)0x0) {
    AActor::Destroy((AActor *)this->TargetCameraActor,false,true);
    this->TargetCameraActor = (ADS_CameraActor_BossTarget *)0x0;
  }
  if (this->bUseTargetZoomCamera == true) {
    pUVar1 = UDS_EntityManager::GetInst();
    if (pUVar1 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
                 this);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FDS_BattleService::OnGroupDamageEventDelegate,this);
  }
  return;
}

// GetCameraBoom @ 14bc9f3a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> __thiscall
ADS_NPCBoss::GetCameraBoom(ADS_NPCBoss *this)

{
  UDS_SpringArmComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_SpringArmComponent *local_res8;
  
  pUVar1 = this->SpringArm;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UDS_SpringArmComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_SpringArmComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>)in_RDX;
}

// GetFollowCamera @ 14bc9fb00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr> __thiscall
ADS_NPCBoss::GetFollowCamera(ADS_NPCBoss *this)

{
  UDS_NpcBossCameraComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_NpcBossCameraComponent *local_res8;
  
  pUVar1 = this->NpcBossCameraComponent;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UDS_NpcBossCameraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_NpcBossCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr>)in_RDX;
}

// OnActivateSkill @ 14bcaf1a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ADS_NPCBoss::OnActivateSkill
          (ADS_NPCBoss *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,bool param_2,
          ulong64 param_3)

{
  FDS_NpcCameraTargetConditionData *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_NpcCameraTargetConditionData *pFVar5;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  
  if (((this->bActivatedCoolTime != true) && (param_2)) &&
     (local_res10 = param_1.WeakPtr, bVar3 = FWeakObjectPtr::IsValid(&local_res10), bVar3)) {
    pFVar5 = (FDS_NpcCameraTargetConditionData *)
             (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data;
    iVar2 = (this->NpcCameraTargetConditionDatas).ArrayNum;
    pFVar1 = pFVar5 + iVar2;
    while( true ) {
      if ((this->NpcCameraTargetConditionDatas).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_NpcCameraTargetConditionData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) {
        return;
      }
      if ((pFVar5->ConditionType == UseSkill) &&
         (pUVar4 = FWeakObjectPtr::Get(&local_res10),
         pFVar5->ConditionValue == *(int *)&pUVar4[2].field_0x1c)) break;
      pFVar5 = pFVar5 + 1;
    }
    ShowZoomCamera(this,param_3,pFVar5);
  }
  return;
}

// OnChangedAbnormalInfo @ 14bcb06a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ADS_NPCBoss::OnChangedAbnormalInfo
          (ADS_NPCBoss *this,FDS_AbnormalInfo *param_1,bool param_2,ulong64 param_3)

{
  FDS_NpcCameraTargetConditionData *pFVar1;
  int iVar2;
  FDS_NpcCameraTargetConditionData *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->bActivatedCoolTime != true) && (param_2)) {
    pFVar3 = (FDS_NpcCameraTargetConditionData *)
             (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data;
    iVar2 = (this->NpcCameraTargetConditionDatas).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->NpcCameraTargetConditionDatas).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_NpcCameraTargetConditionData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return;
      }
      if ((pFVar3->ConditionType == Abnormal) &&
         (pFVar3->ConditionValue == (uint)param_1->AbnormalType)) break;
      pFVar3 = pFVar3 + 1;
    }
    ShowZoomCamera(this,param_3,pFVar3);
  }
  return;
}

// OnChangedBuffList @ 14bcb07a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ADS_NPCBoss::OnChangedBuffList(ADS_NPCBoss *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  FDS_NpcCameraTargetConditionData *pFVar1;
  int iVar2;
  FDS_NpcCameraTargetConditionData *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->bActivatedCoolTime != true) && (*param_3 != false)) {
    pFVar3 = (FDS_NpcCameraTargetConditionData *)
             (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data;
    iVar2 = (this->NpcCameraTargetConditionDatas).ArrayNum;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->NpcCameraTargetConditionDatas).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_NpcCameraTargetConditionData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return;
      }
      if ((pFVar3->ConditionType == Buff) && (pFVar3->ConditionValue == *param_2)) break;
      pFVar3 = pFVar3 + 1;
    }
    ShowZoomCamera(this,*param_1,pFVar3);
  }
  return;
}

// OnGroupDamageEvent @ 14bcb5ea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPCBoss::OnGroupDamageEvent(ADS_NPCBoss *this,GroupDamageEventResponse *param_1)

{
  FDS_NpcCameraTargetConditionData *pFVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  RepeatedPtrField<server_msg::DamageEvent> *pRVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  Impl_ *pIVar9;
  FDS_NpcCameraTargetConditionData *pFVar10;
  ulong64 local_res8;
  ulong64 local_res18 [2];
  
  if (this->bActivatedCoolTime != true) {
    uVar4 = *(ulonglong *)&(param_1->_impl_).damage_events_;
    if ((uVar4 & 1) == 0) {
      pIVar9 = &param_1->_impl_;
    }
    else {
      pIVar9 = (Impl_ *)(uVar4 + 7);
    }
    iVar2 = *(int *)&(param_1->_impl_).damage_events_.field_0x8;
    pRVar6 = &pIVar9->damage_events_;
    for (; pIVar9 != (Impl_ *)(&pRVar6->field_0x0 + (longlong)iVar2 * 8);
        pIVar9 = (Impl_ *)&(pIVar9->damage_events_).field_0x8) {
      iVar3 = (this->NpcCameraTargetConditionDatas).ArrayNum;
      pFVar10 = (FDS_NpcCameraTargetConditionData *)
                (this->NpcCameraTargetConditionDatas).AllocatorInstance.Data;
      lVar5 = *(longlong *)&pIVar9->damage_events_;
      pFVar1 = pFVar10 + iVar3;
      while( true ) {
        if ((this->NpcCameraTargetConditionDatas).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FDS_NpcCameraTargetConditionData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar10 == pFVar1) break;
        if (pFVar10->ConditionType == NpcAttack) {
          local_res8 = *(ulong64 *)(lVar5 + 0x30);
          pFVar7 = FDS_EntityBase::GetEntityBase(&local_res8);
          if ((pFVar7 != (FDS_EntityBase *)0x0) && (pFVar7->EntityType == NPC)) {
            local_res18[0] = *(ulong64 *)(lVar5 + 0x28);
            pFVar8 = FDS_EntityBase::GetEntityBase(local_res18);
            if ((pFVar8 != (FDS_EntityBase *)0x0) &&
               ((pFVar8->EntityType == NetCharacter &&
                ((longlong)pFVar10->ConditionValue == pFVar7->TableID)))) {
              ShowZoomCamera(this,local_res18[0],pFVar10);
              return;
            }
          }
        }
        pFVar10 = pFVar10 + 1;
      }
    }
  }
  return;
}

// OnPartsSystemComplete @ 14bcb8fe0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCBoss::OnPartsSystemComplete(ADS_NPCBoss *this)

{
  UDS_NpcBossCameraComponent *this_00;
  
  ADS_NPC::OnPartsSystemComplete((ADS_NPC *)this);
  this_00 = (UDS_NpcBossCameraComponent *)this->_padding_;
  if (this_00 != (UDS_NpcBossCameraComponent *)0x0) {
    UDS_NpcBossCameraComponent::SetMeshOpacity(this_00,this_00->MeshOpacity);
  }
  if ((char)this->_padding_ == '\x01') {
    CreateTargetCamera((ADS_NPCBoss *)&this[-1]._padding_);
  }
  return;
}

// OnSpawnEntity @ 14bcbb2d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPCBoss::OnSpawnEntity(ADS_NPCBoss *this,ulong64 *param_1)

{
  FDS_EntityBase *pFVar1;
  
  pFVar1 = FDS_EntityBase::GetEntityBase(param_1);
  if ((pFVar1 != (FDS_EntityBase *)0x0) && (pFVar1->EntityType == NetCharacter)) {
    BindTargetData(this,param_1);
  }
  return;
}

// ShowZoomCamera @ 14bcc9ec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ADS_NPCBoss::ShowZoomCamera
          (ADS_NPCBoss *this,ulong64 param_1,FDS_NpcCameraTargetConditionData *param_2)

{
  UDS_HUD_NpcViewTargetCamera *pUVar1;
  FDS_StringBaseTableRow *pFVar2;
  FString *pFVar3;
  double dVar4;
  float fVar5;
  FString local_18;
  
  if ((this->bUseTargetZoomCamera != false) && (this->bShowingZoomCamera != true)) {
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    if ((param_2->CameraEndTime == 0.0) ||
       ((double)param_2->CoolTime + param_2->CameraEndTime <= dVar4)) {
      this->bShowingZoomCamera = true;
      fVar5 = param_2->CoolTime;
      param_2->CameraEndTime =
           (double)this->TargetZoomMoveTime + dVar4 + (double)this->TargetZoomLifeTime;
      if (fVar5 <= 0.0) {
        fVar5 = this->TargetZoomCoolTime;
      }
      this->CurrentCoolTime = fVar5;
      if (this->TargetCameraActor != (ADS_CameraActor_BossTarget *)0x0) {
        ADS_CameraActor_BossTarget::SetTarget(this->TargetCameraActor,param_1);
      }
      pUVar1 = (this->CameraWidget).field0_0x0.DebugPtr;
      if (pUVar1 != (UDS_HUD_NpcViewTargetCamera *)0x0) {
        (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,4);
        pFVar2 = FDS_StringBaseTableRow::GetRef((longlong)param_2->ConditionTitle,true);
        pUVar1 = (this->CameraWidget).field0_0x0.DebugPtr;
        pFVar3 = ::FString::FString(&local_18,&pFVar2->Text);
        UDS_HUD_NpcViewTargetCamera::SetData(pUVar1,param_1,pFVar3);
      }
    }
  }
  return;
}

// Tick @ 14bccca80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCBoss::Tick(ADS_NPCBoss *this,float param_1)

{
  UDS_HUD_NpcViewTargetCamera *pUVar1;
  double dVar2;
  
  ADS_NPC::Tick((ADS_NPC *)this,param_1);
  if (this->bUseTargetZoomCamera != false) {
    if (this->bActivatedCoolTime == true) {
      dVar2 = (double)param_1 + this->ElapsedTime;
      this->ElapsedTime = dVar2;
      if ((double)this->TargetZoomCoolTime <= dVar2) {
        this->ElapsedTime = 0.0;
        this->bActivatedCoolTime = false;
        return;
      }
    }
    else if (this->bShowingZoomCamera != false) {
      dVar2 = (double)param_1 + this->ElapsedTime;
      this->ElapsedTime = dVar2;
      if ((double)(this->TargetZoomLifeTime + this->TargetZoomMoveTime) <= dVar2) {
        pUVar1 = (this->CameraWidget).field0_0x0.DebugPtr;
        this->ElapsedTime = 0.0;
        this->bShowingZoomCamera = false;
        this->bActivatedCoolTime = true;
        if (pUVar1 != (UDS_HUD_NpcViewTargetCamera *)0x0) {
          (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,1);
        }
      }
    }
  }
  return;
}

// UnbindTargetData @ 14bccdb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ADS_NPCBoss::UnbindTargetData(ADS_NPCBoss *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_SkillDataSet *this_00;
  UObject *pUVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->bUseTargetZoomCamera == true) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_120);
    bVar4 = FWeakObjectPtr::IsValid(&local_120);
    if (bVar4) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_120);
      UDS_SkillDataSet::GetAllSkillData
                (this_00,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                          *)local_98);
      uVar9 = local_70;
      iStack_f8 = 0;
      local_e0 = 0;
      uStack_f4 = 1;
      uStack_e4 = 0;
      if (local_70 != 0) {
        puVar10 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar10 = local_78;
        }
        uVar11 = *puVar10;
        while (uVar11 == 0) {
          lVar7 = (longlong)iStack_f8;
          local_e0 = local_e0 + 0x20;
          iStack_f8 = iStack_f8 + 1;
          uStack_e4 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
          goto LAB_14bccdc81;
          uVar11 = puVar10[lVar7 + 1];
        }
        uStack_f4 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_f4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_d0 = (int)lVar7;
        uStack_e4 = local_e0 + -1 + local_d0;
        if ((int)local_70 < (int)uStack_e4) {
          uStack_e4 = local_70;
        }
      }
LAB_14bccdc81:
      local_100 = (longlong *)local_98;
      local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar11 = local_70 & 0xffffffe0;
      iStack_d8 = local_98._8_4_ - local_64;
      uStack_e8 = 0xffffffff;
      TStack_c0.CurrentBitIndex = uStack_e4;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      TStack_c0._padding_ = CONCAT44(uStack_f4,iStack_f8);
      iVar8 = (int)local_70 >> 5;
      TStack_c0._28_4_ = uStack_e4;
      TStack_c0.BaseBitIndex = local_e0;
      uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
      bVar6 = (byte)local_70;
      uStack_dc = uStack_e4;
      local_c8 = local_100;
      TStack_c0.Array = local_f0;
      if (((int)local_70 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != local_70) {
        puVar10 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar10 = local_78;
        }
        uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
        while (uVar9 == 0) {
          lVar7 = (longlong)iVar8;
          uVar11 = uVar11 + 0x20;
          iVar8 = iVar8 + 1;
          uVar9 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14bccdd8c;
          uVar9 = puVar10[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar9 = (int)lVar7 + -1 + uVar11;
        if ((int)local_70 < (int)uVar9) {
          uVar9 = local_70;
        }
      }
LAB_14bccdd8c:
      while( true ) {
        plVar3 = local_c8;
        if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
          `TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_127);
        }
        if (((TStack_c0.CurrentBitIndex == uVar9) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar3 == (longlong *)local_98)) break;
        local_118 = *(FWeakObjectPtr *)(*plVar3 + 4 + (longlong)TStack_c0.CurrentBitIndex * 0x14);
        bVar4 = FWeakObjectPtr::IsValid(&local_118);
        if (bVar4) {
          pUVar5 = FWeakObjectPtr::Get(&local_118);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[10].field_0x10,
                     this);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    local_128 = 0x30;
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_110,(EDS_AbilityTagType *)param_1);
    bVar4 = FWeakObjectPtr::IsValid(&local_110);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_110);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[6].field_0x10,this);
    }
    UDS_CharBuffData::GetData((ulong64)&local_108);
    bVar4 = FWeakObjectPtr::IsValid(&local_108);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_108);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[6].field_0x8,this);
    }
  }
  return;
}


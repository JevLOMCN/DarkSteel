// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b480740

UClass * __cdecl UDS_DeathAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbility",
               &Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbility>,
               InternalVTableHelperCtorCaller<UDS_DeathAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton;
}

// UDS_DeathAbility @ 14b483670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_DeathAbility * __thiscall
UDS_DeathAbility::UDS_DeathAbility(UDS_DeathAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->DeathAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DeathAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->DeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  this->ElapsedTime = 0.0;
  this->bIsLoadCompleteDeathEffect = false;
  this->bIsPlayDestructionEffect = false;
  return this;
}

// UDS_DeathAbility @ 14b4836e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_DeathAbility * __thiscall
UDS_DeathAbility::UDS_DeathAbility(UDS_DeathAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->DeathAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DeathAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->DeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  this->ElapsedTime = 0.0;
  this->bIsLoadCompleteDeathEffect = false;
  this->bIsPlayDestructionEffect = false;
  return this;
}

// ~UDS_DeathAbility @ 14b483f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::~UDS_DeathAbility(UDS_DeathAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b484de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

EDS_AbilityInputPolicy __thiscall UDS_DeathAbility::GetDefaultInputPolicy(UDS_DeathAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b485020

UClass * __cdecl UDS_DeathAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbility",
               &Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbility>,
               InternalVTableHelperCtorCaller<UDS_DeathAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b485560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UDS_DeathAbility::ShouldTickComponent(UDS_DeathAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_DeathAbility @ 14b485600

void __cdecl UDS_DeathAbility::StaticRegisterNativesUDS_DeathAbility(void)

{
  return;
}

// ClearMemberVariables @ 14b79fb80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_DeathAbility::ClearMemberVariables(UDS_DeathAbility *this)

{
  this->ElapsedTime = 0.0;
  this->bIsLoadCompleteDeathEffect = false;
  this->bIsPlayDestructionEffect = false;
  return;
}

// CloseDeathWidget @ 14b7a01d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::CloseDeathWidget(UDS_DeathAbility *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DeathAbility::CloseDeathWidget",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x21f,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,HUDDeath,local_144,&local_148);
  }
  return;
}

// DeathRotateToTarget @ 14b7a4010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_DeathAbility::DeathRotateToTarget(ulong64 *param_1,float *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MovementCore *this;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TRotator<double> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_MovementCore::GetMovementCore((ulong64)&local_158);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DeathAbility::DeathRotateToTarget",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x14b,L"sourceMovementCore is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_158);
    UDS_MovementCore::GetActorRotation(this,&local_150);
    local_150.Yaw = (double)*param_2;
    pUVar3 = FWeakObjectPtr::Get(&local_158);
    (**(code **)(*(longlong *)pUVar3 + 0x370))(pUVar3,&local_150);
    bVar1 = true;
  }
  return bVar1;
}

// EndDeathEffect @ 14b7a6170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_DeathAbility::EndDeathEffect(UDS_DeathAbility *this)

{
  UNiagaraComponent *pUVar1;
  
  pUVar1 = (this->DeathEffectComp).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
    (this->DeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  }
  return;
}

// InitDeathAbilityData @ 14b7ae7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __cdecl
UDS_DeathAbility::InitDeathAbilityData
          (ulong64 *param_1,TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  FDS_NpcBaseTableRow *pFVar6;
  FDS_NpcBattleTableRow *pFVar7;
  FDS_SkillAttackTableRow *pFVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  undefined1 auStackY_218 [32];
  uint uVar12;
  wchar_t *pwVar13;
  TVector<double>_u_0 local_1d8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0 [2];
  TRotator<double> local_1a0;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar2 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals(param_2,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
    pwVar13 = L"OutDeathAbilityData is nullptr.";
    uVar12 = 0xc9;
LAB_14b7ae831:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar12,pwVar13);
  }
  else {
    pFVar4 = FDS_EntityBase::GetEntityBase(param_1);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
      pwVar13 = L"sourceEntity is nullptr. (%llu)";
      uVar12 = 0xd0;
    }
    else {
      UDS_DeathData::GetData((ulong64)&local_1c0,*param_1,false);
      bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
      if (bVar2) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
        pwVar13 = L"deathData is nullptr.";
        uVar12 = 0xd7;
        goto LAB_14b7ae831;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_1c0);
      iVar1 = *(int *)&pUVar5[3].field_0x14;
      pUVar5 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      *(int *)&pUVar5[2].field_0x8 = iVar1;
      if (iVar1 == -2) {
        return true;
      }
      if (iVar1 == 2) {
        if (pFVar4->EntityType != NPC) {
          return true;
        }
        pFVar6 = FDS_NpcBaseTableRow::Get(pFVar4->TableID,true);
        if (pFVar6 != (FDS_NpcBaseTableRow *)0x0) {
          pUVar5 = FWeakObjectPtr::Get(&param_2->WeakPtr);
          *(float *)&pUVar5[3].field_0x18 = pFVar6->DisappearClearTime;
          return true;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
        pwVar13 = L"npcBaseTable is nullptr. (%d)";
        uVar12 = 0x13b;
      }
      else {
        if (pFVar4->EntityType != NPC) {
          return true;
        }
        pFVar6 = FDS_NpcBaseTableRow::Get(pFVar4->TableID,true);
        if (pFVar6 == (FDS_NpcBaseTableRow *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = (longlong)pFVar6;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
          pwVar13 = L"npcBaseTable is nullptr. (%d)";
          uVar12 = 0xed;
        }
        else {
          pFVar7 = FDS_NpcBattleTableRow::Get((longlong)pFVar6->ID_NpcBattle,true);
          if (pFVar7 == (FDS_NpcBattleTableRow *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar3 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
            pwVar13 = L"npcBattleTable is nullptr. (%d)";
            uVar12 = 0xf4;
          }
          else {
            iVar1 = (pFVar4->LastStruckInfo).SkillAttackID;
            if (iVar1 < 1) {
              return true;
            }
            pFVar8 = FDS_SkillAttackTableRow::Get((longlong)iVar1,true);
            if (pFVar8 != (FDS_SkillAttackTableRow *)0x0) {
              if ((pFVar7->TargetViewDeadAnimationType == None) ||
                 (pFVar7->TargetViewDeadAnimationType != pFVar8->DeadAnimationType)) {
                if ((pFVar7->NotTargetViewDeadAnimationType == None) ||
                   (pFVar7->NotTargetViewDeadAnimationType != pFVar8->DeadAnimationType)) {
                  bVar2 = pFVar7->IsDeadTargetView == true;
                }
                else {
                  bVar2 = false;
                }
              }
              else {
                bVar2 = true;
              }
              pUVar5 = FWeakObjectPtr::Get(&param_2->WeakPtr);
              pUVar5[3].field_0x10 = bVar2;
              if (bVar2 != true) {
                return true;
              }
              UDS_MovementCore::GetMovementCore((ulong64)local_1b0);
              UDS_MovementCore::GetMovementCore((ulong64)&local_1b8);
              bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_1b0,
                                 (void *)0x0);
              if ((!bVar2) &&
                 (bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1b8,
                                     (void *)0x0), !bVar2)) {
                pUVar5 = FWeakObjectPtr::Get(&local_1b8);
                pdVar9 = (double *)(**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,local_188);
                pUVar5 = FWeakObjectPtr::Get(local_1b0);
                pdVar10 = (double *)(**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,local_170);
                local_1d8._s_0.X = *pdVar9 - *pdVar10;
                local_1d8._s_0.Y = pdVar9[1] - pdVar10[1];
                local_1d8._s_0.Z = pdVar9[2] - pdVar10[2];
                dVar11 = local_1d8._s_0.Y * local_1d8._s_0.Y + local_1d8._s_0.X * local_1d8._s_0.X;
                if (dVar11 == __real_3ff0000000000000) {
                  if (local_1d8._s_0.Z == 0.0) goto LAB_14b7aec51;
                }
                else {
                  if (dVar11 < __real_3e45798ee0000000) {
                    local_1d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_1d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_1d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    goto LAB_14b7aec51;
                  }
                  local_1d8._s_0.Y = (__real_3ff0000000000000 / SQRT(dVar11)) * local_1d8._s_0.Y;
                  local_1d8._s_0.X = (__real_3ff0000000000000 / SQRT(dVar11)) * local_1d8._s_0.X;
                }
                local_1d8._s_0.Z = 0.0;
LAB_14b7aec51:
                UE::Math::TVector<double>::ToOrientationRotator
                          ((TVector<double> *)&local_1d8._s_0,&local_1a0);
                pUVar5 = FWeakObjectPtr::Get(&param_2->WeakPtr);
                *(float *)&pUVar5[3].field_0x14 = (float)local_1a0.Yaw;
                return true;
              }
              pUVar3 = UDS_LogManager::GetInst();
              if (pUVar3 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar3 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
              pwVar13 = L"MovementCore is nullptr.";
              uVar12 = 0x125;
              goto LAB_14b7ae831;
            }
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar3 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_DeathAbility::InitDeathAbilityData",0x26,Yes);
            pwVar13 = L"skillAttackTable is nullptr. (%d)";
            uVar12 = 0x102;
          }
        }
      }
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar12,pwVar13);
  }
  if ((FDS_NpcBaseTableRow *)local_158._padding_ != (FDS_NpcBaseTableRow *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OnCanActivate @ 14b7b6320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UDS_DeathAbility::OnCanActivate(UDS_DeathAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->DeathAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_DeathAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->DeathAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->DeathAbilityData,(void *)0x0);
    if (!bVar1) {
      bVar1 = InitDeathAbilityData((ulong64 *)&this->_padding_,&this->DeathAbilityData);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DeathAbility::OnCanActivate",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2d,L"DeathAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b86e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::OnDeactivateAbility(UDS_DeathAbility *this,bool *param_1)

{
  UNiagaraComponent *pUVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *this_01;
  undefined1 auStackY_178 [32];
  EDS_StateTagType local_148 [4];
  float local_144;
  uint local_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = Death;
  this->ElapsedTime = 0.0;
  this->bIsLoadCompleteDeathEffect = false;
  this->bIsPlayDestructionEffect = false;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_148);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_DeathAbility::CloseDeathWidget",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x21f,L"windowMng is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      local_144 = 0.0;
      local_140[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,HUDDeath,local_140,&local_144);
    }
  }
  pUVar1 = (this->DeathEffectComp).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4a0))();
    (this->DeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  }
  this_01 = &this->DeathAbilityData;
  bVar2 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar4[3].field_0x20);
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
  }
  return;
}

// OnLoadCompleteDeathEffect @ 14b7b92c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DeathAbility::OnLoadCompleteDeathEffect
          (UDS_DeathAbility *this,FDS_EffectSpawnCompleteInfo param_1)

{
  TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  UNiagaraComponent *pUVar5;
  double dVar6;
  double dVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UObject *pUVar12;
  FName *pFVar13;
  longlong lVar14;
  undefined1 auStackY_1e8 [32];
  uint uVar15;
  wchar_t *pwVar16;
  EDS_AbilityDeactivateType local_1b8 [8];
  FName local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  TVector<double>_u_0 local_188;
  undefined8 uStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = &this->DeathAbilityData;
  bVar9 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar9) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14b7b9383;
    pUVar11 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_DeathAbility::OnLoadCompleteDeathEffect",0x2b,Yes);
    pwVar16 = L"DeathAbilityData is nullptr.";
    uVar15 = 0x176;
  }
  else {
    if (param_1.NiagaraComponent != (UNiagaraComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
      }
      (this->DeathEffectComp).field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)param_1.NiagaraComponent;
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar2 = *(float *)&pUVar12[2].field_0xc;
      pFVar13 = ::FName::FName(&local_1b0,L"KillTimeLength");
      UNiagaraComponent::SetVariableFloat(param_1.NiagaraComponent,*pFVar13,fVar2);
      pUVar5 = (this->DeathEffectComp).field0_0x0.DebugPtr;
      pFVar13 = ::FName::FName(&local_1b0,L"KillTimeline");
      UNiagaraComponent::SetVariableFloat(pUVar5,*pFVar13,0.0);
      pUVar5 = (this->DeathEffectComp).field0_0x0.DebugPtr;
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      dVar6 = *(double *)&pUVar12[2].field_0x10;
      dVar7 = *(double *)&pUVar12[2].field_0x18;
      dVar4 = *(double *)&pUVar12[2].field_0x20;
      pFVar13 = ::FName::FName(&local_1b0,L"BodyColor");
      local_188._s_0.X = dVar6;
      local_188._s_0.Y = dVar7;
      local_188._s_0.Z = dVar4;
      UNiagaraComponent::SetVariableVec3(pUVar5,*pFVar13,(TVector<double> *)&local_188._s_0);
      pUVar5 = (this->DeathEffectComp).field0_0x0.DebugPtr;
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar2 = *(float *)(pUVar12 + 3);
      pFVar13 = ::FName::FName(&local_1b0,L"propigate");
      UNiagaraComponent::SetVariableFloat(pUVar5,*pFVar13,fVar2);
      pUVar5 = (this->DeathEffectComp).field0_0x0.DebugPtr;
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar2 = *(float *)&pUVar12[3].field_0x4;
      pFVar13 = ::FName::FName(&local_1b0,L"SpawnRate");
      UNiagaraComponent::SetVariableFloat(pUVar5,*pFVar13,fVar2);
      pUVar5 = (this->DeathEffectComp).field0_0x0.DebugPtr;
      (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5,1);
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = 0;
      ::FName::FName(&local_1b0,L"KillPropigation");
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FVar8 = local_1b0;
      uVar3 = *(undefined4 *)&pUVar12[3].field_0x8;
      iVar10 = (int)local_1a0;
      if ((int)local_1a0 == local_1a0._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_1a8,(int *)((longlong)&local_1a0 + 4));
      }
      lVar14 = (longlong)iVar10;
      *(uint *)(local_1a8.Data + lVar14 * 0xc) = FVar8.ComparisonIndex.Value.Value;
      *(uint *)(local_1a8.Data + lVar14 * 0xc + 4) = FVar8.Number;
      *(undefined4 *)(local_1a8.Data + lVar14 * 0xc + 8) = uVar3;
      local_1a0._0_4_ = iVar10 + 1;
      ::FName::FName(&local_1b0,L"SpawnAge");
      FVar8 = local_1b0;
      if ((int)local_1a0 == local_1a0._4_4_) {
        local_1a0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_1a8,(int *)((longlong)&local_1a0 + 4));
      }
      lVar14 = (longlong)(int)local_1a0;
      *(uint *)(local_1a8.Data + lVar14 * 0xc) = FVar8.ComparisonIndex.Value.Value;
      *(uint *)(local_1a8.Data + lVar14 * 0xc + 4) = FVar8.Number;
      *(undefined4 *)(local_1a8.Data + lVar14 * 0xc + 8) = 0x3f800000;
      local_1a0._0_4_ = (int)local_1a0 + 1;
      ::FName::FName(&local_1b0,L"SpawnPropigation");
      FVar8 = local_1b0;
      if ((int)local_1a0 == local_1a0._4_4_) {
        local_1a0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_1a8,(int *)((longlong)&local_1a0 + 4));
      }
      lVar14 = (longlong)(int)local_1a0;
      local_1a0 = CONCAT44(local_1a0._4_4_,(int)local_1a0 + 1);
      *(uint *)(local_1a8.Data + lVar14 * 0xc) = FVar8.ComparisonIndex.Value.Value;
      *(uint *)(local_1a8.Data + lVar14 * 0xc + 4) = FVar8.Number;
      *(undefined4 *)(local_1a8.Data + lVar14 * 0xc + 8) = 0;
      (**(code **)(*(longlong *)this->_padding_ + 0x108))((longlong *)this->_padding_,&local_1a8);
      local_198.Data = (FScriptContainerElement *)0x0;
      local_190 = 0;
      ::FName::FName(&local_1b0,L"KillEdgeColor");
      local_188._0_4_ = local_1b0.ComparisonIndex.Value;
      local_188._4_4_ = local_1b0.Number;
      pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_188._s_0.Y = (double)*(undefined8 *)&pUVar12[2].field_0x10;
      local_188._s_0.Z = (double)*(undefined8 *)&pUVar12[2].field_0x18;
      uStack_170 = *(undefined8 *)&pUVar12[2].field_0x20;
      iVar10 = (int)local_190;
      if ((int)local_190 == local_190._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_198,(int *)((longlong)&local_190 + 4));
      }
      local_190 = CONCAT44(local_190._4_4_,iVar10 + 1);
      pFVar1 = local_198.Data + (longlong)iVar10 * 0x20;
      *(undefined4 *)pFVar1 = local_188._0_4_;
      *(undefined4 *)(pFVar1 + 4) = local_188._4_4_;
      *(undefined4 *)(pFVar1 + 8) = local_188._8_4_;
      *(undefined4 *)(pFVar1 + 0xc) = local_188._12_4_;
      pFVar1 = local_198.Data + (longlong)iVar10 * 0x20 + 0x10;
      *(undefined4 *)pFVar1 = local_188._16_4_;
      *(undefined4 *)(pFVar1 + 4) = local_188._20_4_;
      *(undefined4 *)(pFVar1 + 8) = (undefined4)uStack_170;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_170._4_4_;
      (**(code **)(*(longlong *)this->_padding_ + 0x118))((longlong *)this->_padding_,&local_198);
      this->bIsLoadCompleteDeathEffect = true;
      if (local_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data);
      }
      if (local_1a8.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_1a8.Data);
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14b7b9383;
    pUVar11 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_DeathAbility::OnLoadCompleteDeathEffect",0x2b,Yes);
    pwVar16 = L"InSpawnCompleteInfo.NiagaraComponent is nullptr.";
    uVar15 = 0x17d;
  }
  UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,uVar15,pwVar16);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
LAB_14b7b9383:
  local_1b8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1b8);
  return;
}

// OnOpenDeathWidget @ 14b7b9af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_DeathAbility::OnOpenDeathWidget(UDS_DeathAbility *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FWeakObjectPtr local_158;
  UDS_UserWidget *local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DeathAbility::OnOpenDeathWidget",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x210,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x20);
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = (FDS_ViewModelContext *)local_168.SharedReferenceCount.ReferenceController;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar4->field_0x1c = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->ViewModelTemplateKey = None;
      pFVar6 = pFVar4;
    }
    local_168.Object = pFVar6;
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    }
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = local_168.Object;
    pUVar5 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_168);
    }
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_168.Object)->ViewModelTemplateKey = HUD_Death;
    local_148.Object = local_168.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_168.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_158,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPostActivateAbility @ 14b7bc000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::OnPostActivateAbility(UDS_DeathAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FGameplayTag *pFVar3;
  UDS_AbnormalAbilityData *this_00;
  UObject *pUVar4;
  UDS_MovementCore *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_1f8 [32];
  EDS_AbilityDeactivateType local_1c8 [8];
  FWeakObjectPtr local_1c0;
  FGameplayTagContainer local_1b8;
  FWeakObjectPtr local_198 [2];
  TRotator<double> local_188;
  FDestructionSentinel local_168;
  UObject *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this->ElapsedTime = 0.0;
  this->bIsLoadCompleteDeathEffect = false;
  this->bIsPlayDestructionEffect = false;
  bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->DeathAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DeathAbility::OnPostActivateAbility",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x42,L"DeathAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1c8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
    return;
  }
  local_1b8.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.GameplayTags.ArrayNum = 0;
  local_1b8.GameplayTags.ArrayMax = 0;
  local_1b8.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ParentTags.ArrayNum = 0;
  local_1b8.ParentTags.ArrayMax = 0;
  local_1c8[0] = 0x27;
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
  FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
  local_1c8[0] = 0x6b;
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
  FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
  local_1c8[0] = 0x26;
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
  FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
  local_1c8[0] = 0x30;
  UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
            ((ulong64 *)local_198,(EDS_AbilityTagType *)&this->_padding_);
  bVar1 = FWeakObjectPtr::IsValid(local_198);
  if (bVar1) {
    this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(local_198);
    bVar1 = UDS_AbnormalAbilityData::UsableDeadAbnormalState(this_00);
    if (bVar1) {
      local_1c8[0] = 0x30;
      pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
      FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
      local_1c8[0] = 0x31;
      pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
      FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
      local_1c8[0] = 0x32;
      pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
      FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
    }
  }
  local_1c8[0] = 0x28;
  pFVar3 = FDS_GameplayTags::GetAbilityTag(local_1c8);
  FGameplayTagContainer::AddTag(&local_1b8,pFVar3);
  local_1c8[0] = DeathCancel;
  UDS_GameplayAbility::DeactivateAllAbility((UDS_GameplayAbility *)this,&local_1b8,local_1c8);
  if ((*(char *)((longlong)&this->_padding_ + 1) != '\x01') ||
     (bVar1 = OpenDeathWidget(this), bVar1)) {
    pUVar4 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
    if (pUVar4[3].field_0x10 == '\x01') {
      pUVar4 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
      UDS_MovementCore::GetMovementCore((ulong64)&local_1c0);
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
      if (bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_DeathAbility::DeathRotateToTarget",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x14b,L"sourceMovementCore is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_DeathAbility::OnPostActivateAbility",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x6c,L"Failed to DeathRotateToTarget().");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        local_1c8[0] = Cancel;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
        goto LAB_14b7bc581;
      }
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1c0);
      UDS_MovementCore::GetActorRotation(this_01,&local_188);
      local_188.Yaw = (double)*(float *)&pUVar4[3].field_0x14;
      pUVar4 = FWeakObjectPtr::Get(&local_1c0);
      (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_188);
    }
    bVar1 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x38))();
    this->bIsPlayDestructionEffect = bVar1;
    if (bVar1 == false) {
      pUVar4 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
      if (*(int *)&pUVar4[2].field_0x8 == 2) {
        local_1c0.ObjectIndex = 0x3f800000;
        FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,(float *)&local_1c0);
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
        local_188.Pitch = (double)StartDeathEffect;
        local_188.Yaw = (double)((ulonglong)local_188.Yaw & 0xffffffff00000000);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4[3].field_0x20,
                   (FWriteAccessScope *)&local_168);
        local_150 = pUVar4 + 4;
        puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_150);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DeathAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar5[3] = 0;
          local_1c0 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_1c0);
          puVar5[4] = local_188.Pitch;
          puVar5[5] = local_188.Yaw;
        }
        if (local_168.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
        }
      }
    }
    local_1c8[0] = 0x7b;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_1c8);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DeathAbility::OnPostActivateAbility",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x61,L"Failed to OpenDeathWidget().");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1c8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
  }
LAB_14b7bc581:
  if (local_1b8.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.ParentTags.AllocatorInstance.Data);
  }
  if (local_1b8.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// OnTickComponent @ 14b7be9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::OnTickComponent(UDS_DeathAbility *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  float fVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  EDS_AbilityDeactivateType local_158 [4];
  float local_154 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (this->bIsPlayDestructionEffect == true) {
    return;
  }
  bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->DeathAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7beb05;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_DeathAbility::OnTickComponent",0x21,Yes);
    uVar5 = 0xad;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
    if (*(int *)&pUVar3[2].field_0x8 != 2) {
      if (this->bIsLoadCompleteDeathEffect != true) {
        return;
      }
      this->ElapsedTime = param_1 + this->ElapsedTime;
      UpdateDeathEffect(this);
      return;
    }
    this->ElapsedTime = param_1 + this->ElapsedTime;
    bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->DeathAbilityData,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
      fVar4 = *(float *)&pUVar3[3].field_0x18;
      if (*(float *)&pUVar3[3].field_0x18 <= __real_3f800000) {
        fVar4 = __real_3f800000;
      }
      local_154[0] = __real_3f800000 - this->ElapsedTime / fVar4;
      if (__real_3f800000 <= local_154[0]) {
        local_154[0] = __real_3f800000;
      }
      if (local_154[0] <= 0.0) {
        local_154[0] = 0.0;
      }
      FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_154);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7beb05;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_DeathAbility::UpdateDisappearProcess",0x28,Yes);
    uVar5 = 0x1ec;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar5,L"DeathAbilityData is nullptr.");
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b7beb05:
  local_158[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
  return;
}

// OpenDeathWidget @ 14b7bed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_DeathAbility::OpenDeathWidget(UDS_DeathAbility *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_DeathAbility *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DeathAbility::OpenDeathWidget",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x202,L"windowMng is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    uStack_190 = 0;
    local_198 = OnOpenDeathWidget;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_1b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DeathAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DeathAbility *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DeathAbility *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_178);
      puVar3[4] = local_198;
      puVar3[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_198,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,HUDDeath,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_198);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_188 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                 (FDestructionSentinel *)&local_198);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
    bVar1 = true;
  }
  return bVar1;
}

// StartDeathEffect @ 14b7c4c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::StartDeathEffect(UDS_DeathAbility *this)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_2d8 [32];
  EDS_AbilityDeactivateType local_298 [8];
  undefined1 local_290 [16];
  int local_280;
  code *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  bool local_268;
  FWeakObjectPtr local_258;
  UDS_DeathAbility *local_250;
  FDestructionSentinel local_248;
  undefined1 *local_230;
  undefined1 local_228 [200];
  ForAnyElementType local_160;
  int local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_258,(void *)0x0
                    );
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DeathAbility::StartDeathEffect",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x163,L"sourceSKM is nullptr. (%llu)")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_298[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_298);
    return;
  }
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_228);
  local_228._40_8_ = this->_padding_;
  local_228._52_4_ = local_258.ObjectIndex;
  local_228._56_4_ = local_258.ObjectSerialNumber;
  local_278 = OnLoadCompleteDeathEffect;
  local_228._0_4_ = 0xc353;
  uStack_270 = 0;
  local_290._0_8_ = (atomic<unsigned___int64>)0x0;
  local_290._8_8_ = (FScriptContainerElement *)0x0;
  local_280 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)&local_248);
  local_230 = local_290 + 8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_290 + 8));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DeathAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_250 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_250);
    puVar5[4] = local_278;
    puVar5[5] = CONCAT44(uStack_26c,uStack_270);
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)&local_278);
  iVar2 = local_280;
  uVar1 = local_290._8_8_;
  local_290._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_280 = 0;
  if (local_268 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_26c,uStack_270),
               (FDestructionSentinel *)&local_278);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_228 + 0xc0),
             (FWriteAccessScope *)&local_278);
  if (local_158 != 0) {
    if (local_160.Data == (FScriptContainerElement *)0x0) goto LAB_14b7c4e82;
    (*(code *)**(undefined8 **)local_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_160,0,0,0x10);
    local_158 = 0;
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
LAB_14b7c4e82:
  local_160.Data = (FScriptContainerElement *)uVar1;
  local_158 = iVar2;
  if (local_268 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_26c,uStack_270),
               (FDestructionSentinel *)&local_278);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)&local_278);
  if ((local_280 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_290._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_290._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_290 + 8),0,0,0x10);
    local_280 = 0;
  }
  if (local_268 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_26c,uStack_270),
               (FDestructionSentinel *)&local_278);
  }
  if ((FMRSWRecursiveAccessDetector *)local_290._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_290._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_290);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_228);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_228 + 0xc0),
             (FWriteAccessScope *)local_290);
  if ((local_158 != 0) && (local_160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_160,0,0,0x10);
    local_158 = 0;
  }
  if (local_280._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_290._8_8_,(FDestructionSentinel *)local_290);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_228 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_228._184_8_);
  if ((FScriptContainerElement *)local_228._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._24_8_);
  }
  return;
}

// StartDisappearProcess @ 14b7c4fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::StartDisappearProcess(UDS_DeathAbility *this)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8);
  return;
}

// UpdateDeathEffect @ 14b7c8eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::UpdateDeathEffect(UDS_DeathAbility *this)

{
  float fVar1;
  UNiagaraComponent *pUVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FName *pFVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [8];
  ForAnyElementType local_170;
  undefined8 local_168;
  FName local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->DeathAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_DeathAbility::UpdateDeathEffect",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x1b3,L"DeathAbilityData is nullptr.")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    local_178[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  }
  else {
    pUVar2 = (this->DeathEffectComp).field0_0x0.DebugPtr;
    if ((pUVar2 != (UNiagaraComponent *)0x0) && ((pUVar2->_padding_ & 0x100000) != 0)) {
      pUVar6 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
      fVar1 = this->ElapsedTime;
      fVar9 = *(float *)&pUVar6[2].field_0xc;
      if (*(float *)&pUVar6[2].field_0xc <= __real_3f800000) {
        fVar9 = __real_3f800000;
      }
      if (fVar9 < fVar1) {
        pUVar2 = (this->DeathEffectComp).field0_0x0.DebugPtr;
        if (pUVar2 != (UNiagaraComponent *)0x0) {
          (**(code **)(pUVar2->_padding_ + 0x4a0))(pUVar2,0);
          (this->DeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
        }
      }
      else {
        pUVar2 = (this->DeathEffectComp).field0_0x0.DebugPtr;
        pFVar7 = ::FName::FName(&local_160,L"KillTimeline");
        UNiagaraComponent::SetVariableFloat(pUVar2,*pFVar7,fVar1 / fVar9);
      }
    }
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    pUVar6 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
    fVar1 = this->ElapsedTime;
    fVar9 = *(float *)&pUVar6[3].field_0xc;
    ::FName::FName(&local_160,L"KillAge");
    iVar4 = (int)local_168;
    if ((int)local_168 == local_168._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_170,(int *)((longlong)&local_168 + 4));
    }
    lVar8 = (longlong)iVar4;
    local_168 = CONCAT44(local_168._4_4_,iVar4 + 1);
    *(uint *)(local_170.Data + lVar8 * 0xc) = local_160.ComparisonIndex.Value.Value;
    *(uint *)(local_170.Data + lVar8 * 0xc + 4) = local_160.Number;
    *(float *)(local_170.Data + lVar8 * 0xc + 8) = fVar1 * fVar9;
    (**(code **)(*(longlong *)this->_padding_ + 0x108))((longlong *)this->_padding_,&local_170);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
  }
  return;
}

// UpdateDisappearProcess @ 14b7c9210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DeathAbility::UpdateDisappearProcess(UDS_DeathAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  float fVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [4];
  float local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->DeathAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DeathAbility::UpdateDisappearProcess",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1ec,L"DeathAbilityData is nullptr.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathAbilityData).WeakPtr);
    fVar4 = *(float *)&pUVar3[3].field_0x18;
    if (*(float *)&pUVar3[3].field_0x18 <= __real_3f800000) {
      fVar4 = __real_3f800000;
    }
    local_144[0] = __real_3f800000 - this->ElapsedTime / fVar4;
    if (__real_3f800000 <= local_144[0]) {
      local_144[0] = __real_3f800000;
    }
    if (local_144[0] <= 0.0) {
      local_144[0] = 0.0;
    }
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_144);
  }
  return;
}


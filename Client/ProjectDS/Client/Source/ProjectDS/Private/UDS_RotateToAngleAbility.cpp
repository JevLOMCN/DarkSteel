// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b583680

UClass * __cdecl UDS_RotateToAngleAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToAngleAbility",
               &Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton,
               StaticRegisterNativesUDS_RotateToAngleAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RotateToAngleAbility>,
               InternalVTableHelperCtorCaller<UDS_RotateToAngleAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton;
}

// UDS_RotateToAngleAbility @ 14b587260

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

UDS_RotateToAngleAbility * __thiscall
UDS_RotateToAngleAbility::UDS_RotateToAngleAbility
          (UDS_RotateToAngleAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->RotateToAngleAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->RotateToAngleAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_RotateToAngleAbility @ 14b5872b0

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

UDS_RotateToAngleAbility * __thiscall
UDS_RotateToAngleAbility::UDS_RotateToAngleAbility
          (UDS_RotateToAngleAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->RotateToAngleAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->RotateToAngleAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_RotateToAngleAbility @ 14b587b60

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

void __thiscall UDS_RotateToAngleAbility::~UDS_RotateToAngleAbility(UDS_RotateToAngleAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5892b0

UClass * __cdecl UDS_RotateToAngleAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToAngleAbility",
               &Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton,
               StaticRegisterNativesUDS_RotateToAngleAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RotateToAngleAbility>,
               InternalVTableHelperCtorCaller<UDS_RotateToAngleAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToAngleAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b589b30

bool __thiscall UDS_RotateToAngleAbility::ShouldTickComponent(UDS_RotateToAngleAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_RotateToAngleAbility @ 14b589bd0

void __cdecl UDS_RotateToAngleAbility::StaticRegisterNativesUDS_RotateToAngleAbility(void)

{
  return;
}

// OnCanActivate @ 14b839fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_RotateToAngleAbility::OnCanActivate(UDS_RotateToAngleAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->RotateToAngleAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_RotateToAngleAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->RotateToAngleAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->RotateToAngleAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_RotateToAngleAbility::OnCanActivate",0x27,Yes);
      pwVar6 = L"RotateToAngleAbilityData is nullptr.";
      uVar5 = 0x1e;
    }
    else {
      pUVar4 = FWeakObjectPtr::Get(&(this->RotateToAngleAbilityData).WeakPtr);
      if (__real_322bcc77 <
          (float)(*(uint *)&pUVar4[2].field_0x20 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_RotateToAngleAbility::OnCanActivate",0x27,Yes);
      pwVar6 = L"rotateSpeed is 0.";
      uVar5 = 0x26;
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f830

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

void __thiscall
UDS_RotateToAngleAbility::OnDeactivateAbility(UDS_RotateToAngleAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = Trace;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->RotateToAngleAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->RotateToAngleAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83f878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b845370

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

void __thiscall UDS_RotateToAngleAbility::OnPostActivateAbility(UDS_RotateToAngleAbility *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = Trace;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnTickComponent @ 14b849530

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

void __thiscall
UDS_RotateToAngleAbility::OnTickComponent(UDS_RotateToAngleAbility *this,float param_1)

{
  bool bVar1;
  EDS_RotateToAngleProcessResult EVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->RotateToAngleAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_RotateToAngleAbility::OnTickComponent",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x49,L"RotateToAngleAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_158[0] = Cancel;
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->RotateToAngleAbilityData).WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&(this->RotateToAngleAbilityData).WeakPtr);
    EVar2 = Process_SetActorRotation
                      (param_1,(ulong64 *)&this->_padding_,(TRotator<double> *)&pUVar5[2].field_0x8,
                       (float *)&pUVar4[2].field_0x20);
    if (EVar2 == Success) {
      local_158[0] = Success;
    }
    else {
      if (EVar2 != Failure) {
        return;
      }
      local_158[0] = Cancel;
    }
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_158);
  return;
}

// Process_SetActorRotation @ 14b84ce10

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

EDS_RotateToAngleProcessResult __cdecl
UDS_RotateToAngleAbility::Process_SetActorRotation
          (float param_1,ulong64 *param_2,TRotator<double> *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  UDS_LogManager *pUVar6;
  UDS_MovementCore *this;
  UDS_CharStateData *this_00;
  UObject *pUVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auStackY_238 [32];
  uint uVar27;
  wchar_t *pwVar28;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  TRotator<double> local_1f8;
  EDS_CharState local_1e0;
  TRotator<double> local_1d8;
  ulonglong local_1b0;
  TRotator<double> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar5 = FDS_EntityBase::GetEntityBase(param_2);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return Failure;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_RotateToAngleAbility::Process_SetActorRotation",0x32,Yes);
    pwVar28 = L"sourceEntity is nullptr.";
    uVar27 = 0x93;
  }
  else {
    UDS_MovementCore::GetMovementCore((ulong64)&local_208);
    bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_208,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return Failure;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_RotateToAngleAbility::Process_SetActorRotation",0x32,Yes);
      pwVar28 = L"sourceMovementCore is nullptr.";
      uVar27 = 0x9a;
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_200);
      bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_200,(void *)0x0)
      ;
      if (!bVar4) {
        local_1f8.Pitch = param_3->Pitch;
        local_1f8.Yaw = param_3->Yaw;
        local_1f8.Roll = param_3->Roll;
        this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_208);
        UDS_MovementCore::GetActorRotation(this,&local_1d8);
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_200);
        local_1e0 = Swim;
        bVar4 = UDS_CharStateData::HasCharState(this_00,&local_1e0);
        if (!bVar4) {
          local_1f8.Pitch = local_1d8.Pitch;
          local_1f8.Roll = local_1d8.Roll;
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_1f8.Roll;
        local_1d8.Yaw = local_1d8.Yaw - local_1f8.Yaw;
        auVar11._8_4_ = SUB84(local_1d8.Yaw,0);
        auVar11._0_8_ = local_1d8.Pitch - local_1f8.Pitch;
        auVar11._12_4_ = (int)((ulonglong)local_1d8.Yaw >> 0x20);
        auVar11 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar17 = roundpd(auVar16,auVar11,3);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_1d8.Roll - local_1f8.Roll;
        auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar1 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar18._0_8_ = auVar17._0_8_ * dVar1;
        dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar18._8_8_ = auVar17._8_8_ * dVar2;
        dVar23 = (local_1d8.Pitch - local_1f8.Pitch) - auVar18._0_8_;
        local_1d8.Yaw = local_1d8.Yaw - auVar18._8_8_;
        auVar11 = roundpd(auVar18,auVar11,3);
        dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar17._8_4_ = SUB84(local_1d8.Yaw,0);
        auVar17._0_8_ = dVar23;
        auVar17._12_4_ = (int)((ulonglong)local_1d8.Yaw >> 0x20);
        dVar15 = auVar17._8_8_ + dVar2;
        dVar25 = (local_1d8.Roll - local_1f8.Roll) - auVar11._0_8_ * dVar3;
        dVar26 = 0.0 - auVar11._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar8 = -(ulonglong)(0.0 <= dVar23);
        uVar9 = -(ulonglong)(0.0 <= local_1d8.Yaw);
        auVar19._0_8_ = uVar8 & (ulonglong)dVar23;
        auVar19._8_4_ = (undefined4)(uVar9 & (ulonglong)local_1d8.Yaw);
        auVar19._12_4_ = (undefined4)((uVar9 & (ulonglong)local_1d8.Yaw) >> 0x20);
        auVar22._0_4_ = ~(uint)uVar8 & SUB84(dVar23 + dVar1,0);
        auVar22._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar23 + dVar1) >> 0x20);
        auVar22._8_4_ = ~(uint)uVar9 & SUB84(dVar15,0);
        auVar22._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
        auVar13._8_4_ = SUB84(dVar26,0);
        auVar13._0_8_ = dVar25;
        auVar13._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        dVar15 = auVar13._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar22 = auVar22 | auVar19;
        uVar8 = -(ulonglong)(0.0 <= dVar25);
        uVar9 = -(ulonglong)(0.0 <= dVar26);
        auVar20._0_8_ = uVar8 & (ulonglong)dVar25;
        auVar20._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar26);
        auVar20._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar26) >> 0x20);
        auVar24._0_4_ = ~(uint)uVar8 & SUB84(dVar25 + dVar3,0);
        auVar24._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar3) >> 0x20);
        auVar24._8_4_ = ~(uint)uVar9 & SUB84(dVar15,0);
        auVar24._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
        uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar22._0_8_);
        uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar22._8_8_);
        auVar24 = auVar24 | auVar20;
        auVar21._0_8_ = uVar9 & (ulonglong)(auVar22._0_8_ - dVar1);
        uVar8 = uVar10 & (ulonglong)(auVar22._8_8_ - dVar2);
        auVar21._8_4_ = (undefined4)uVar8;
        auVar21._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar14._0_4_ = ~(uint)uVar9 & auVar22._0_4_;
        auVar14._4_4_ = ~(uint)(uVar9 >> 0x20) & auVar22._4_4_;
        auVar14._8_4_ = ~(uint)uVar10 & auVar22._8_4_;
        auVar14._12_4_ = ~(uint)(uVar10 >> 0x20) & auVar22._12_4_;
        auVar21 = auVar21 | auVar14;
        uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar24._0_8_);
        local_1b0 = (ulonglong)(auVar24._0_8_ - dVar3) & uVar8 |
                    CONCAT44(~(uint)(uVar8 >> 0x20) & auVar24._4_4_,~(uint)uVar8 & auVar24._0_4_);
        if ((((double)CONCAT44(auVar21._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               auVar21._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
              __real_4000000000000000) &&
            ((double)CONCAT44(auVar21._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar21._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
             __real_4000000000000000)) &&
           ((double)CONCAT44((uint)(local_1b0 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)local_1b0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_4000000000000000)) {
          return Success;
        }
        FMath::RInterpTo(&local_1a8,&local_1d8,&local_1f8,param_1,*param_4);
        pUVar7 = FWeakObjectPtr::Get(&local_208);
        (**(code **)(*(longlong *)pUVar7 + 0x370))(pUVar7,&local_1a8);
        return Processing;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return Failure;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_RotateToAngleAbility::Process_SetActorRotation",0x32,Yes);
      pwVar28 = L"charStateData is nullptr.";
      uVar27 = 0xa1;
    }
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_188.Ptr,uVar27,pwVar28);
  if ((void *)local_188._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_188._padding_);
  }
  return Failure;
}

// TryActivate @ 14b853850

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
UDS_RotateToAngleAbility::TryActivate(ulong64 *param_1,TRotator<double> *param_2,float *param_3)

{
  double dVar1;
  bool bVar2;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) ||
     ((float)((uint)*param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_RotateToAngleAbility::TryActivate",0x25,Yes);
    pwVar6 = L"Invalid parameter.";
    uVar5 = 0x75;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_RotateToAngleAbility::TryActivate",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x7c,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b853a63;
    }
    local_158[0] = RotateToAngle;
    UDS_AbilityDataSet::GetAbilityData<UDS_RotateToAngleAbilityData>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar2 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_150);
      dVar1 = param_2->Yaw;
      *(double *)&pUVar4[2].field_0x8 = param_2->Pitch;
      *(double *)&pUVar4[2].field_0x10 = dVar1;
      *(double *)&pUVar4[2].field_0x18 = param_2->Roll;
      pUVar4 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = RotateToAngle;
      *(float *)&pUVar4[2].field_0x20 = *param_3;
      bVar2 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_RotateToAngleAbility::TryActivate",0x25,Yes);
    pwVar6 = L"abilityData is nullptr.";
    uVar5 = 0x83;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
LAB_14b853a63:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}


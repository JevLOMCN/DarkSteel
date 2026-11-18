// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b58feb0

UClass * __cdecl UDS_SkillRotateAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillRotateAbility",
               &Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillRotateAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillRotateAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillRotateAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton;
}

// UDS_SkillRotateAbility @ 14b594a70

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

UDS_SkillRotateAbility * __thiscall
UDS_SkillRotateAbility::UDS_SkillRotateAbility(UDS_SkillRotateAbility *this,FVTableHelper *param_1)

{
  double dVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillRotateAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkillRotateAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// UDS_SkillRotateAbility @ 14b594b20

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

UDS_SkillRotateAbility * __thiscall
UDS_SkillRotateAbility::UDS_SkillRotateAbility
          (UDS_SkillRotateAbility *this,FObjectInitializer *param_1)

{
  double dVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillRotateAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkillRotateAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// ~UDS_SkillRotateAbility @ 14b595570

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

void __thiscall UDS_SkillRotateAbility::~UDS_SkillRotateAbility(UDS_SkillRotateAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b597270

UClass * __cdecl UDS_SkillRotateAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillRotateAbility",
               &Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillRotateAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillRotateAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillRotateAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillRotateAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b597800

bool __thiscall UDS_SkillRotateAbility::ShouldTickComponent(UDS_SkillRotateAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SkillRotateAbility @ 14b5978e0

void __cdecl UDS_SkillRotateAbility::StaticRegisterNativesUDS_SkillRotateAbility(void)

{
  return;
}

// ClearMemberVariables @ 14b827ae0

void __thiscall UDS_SkillRotateAbility::ClearMemberVariables(UDS_SkillRotateAbility *this)

{
  double dVar1;
  
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// InitMemberVariables @ 14b833f30

bool __thiscall UDS_SkillRotateAbility::InitMemberVariables(UDS_SkillRotateAbility *this)

{
  double dVar1;
  UObject *pUVar2;
  
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this->bHasInput = (bool)pUVar2[6].field_0x11;
  return true;
}

// OnCanActivate @ 14b83a910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SkillRotateAbility::OnCanActivate(UDS_SkillRotateAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillRotateAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillRotateAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->SkillRotateAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillRotateAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillRotateAbility::OnCanActivate",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x18,L"SkillRotateAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f960

void __thiscall
UDS_SkillRotateAbility::OnDeactivateAbility(UDS_SkillRotateAbility *this,bool *param_1)

{
  double dVar1;
  
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// OnPostActivateAbility @ 14b845f50

void __thiscall UDS_SkillRotateAbility::OnPostActivateAbility(UDS_SkillRotateAbility *this)

{
  double dVar1;
  UObject *pUVar2;
  
  this->ElapsedTime = 0.0;
  this->bHasInput = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->InputRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->InputRotator).Yaw = dVar1;
  (this->InputRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bHasTarget = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotator).Yaw = dVar1;
  (this->TargetRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this->bHasInput = (bool)pUVar2[6].field_0x11;
  return;
}

// OnTickComponent @ 14b849c10

void __thiscall UDS_SkillRotateAbility::OnTickComponent(UDS_SkillRotateAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FWeakObjectPtr FStackX_8;
  
  lVar6 = (longlong)(int)this->_padding_;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      if ((int)uVar5 < 0) {
        return;
      }
      if ((int)this->_padding_ <= (int)uVar5) {
        return;
      }
      uVar3 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(this->_padding_ + lVar7 * 8);
      bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStackX_8,
                         (void *)0x0);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar4 + 0x368))(pUVar4,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  return;
}


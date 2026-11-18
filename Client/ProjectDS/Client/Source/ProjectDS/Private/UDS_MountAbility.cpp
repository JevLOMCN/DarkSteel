// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b4f4ac0

UClass * __cdecl UDS_MountAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility",
               &Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility,0x210,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility>,
               InternalVTableHelperCtorCaller<UDS_MountAbility>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton;
}

// UDS_MountAbility @ 14b4f7620

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

UDS_MountAbility * __thiscall
UDS_MountAbility::UDS_MountAbility(UDS_MountAbility *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->field_0x160 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsMountReadyStart = false;
  this->MountActionTime = 0.0;
  this->MountEndTime = 0.0;
  (this->MountingLocation).field0_0x0._s_0.X = 0.0;
  (this->MountingLocation).field0_0x0._s_0.Y = 0.0;
  (this->MountingLocation).field0_0x0._s_0.Z = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->IsReadyMoveState = false;
  this->MountingUpDistance = 0.0;
  return this;
}

// UDS_MountAbility @ 14b4f76f0

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

UDS_MountAbility * __thiscall
UDS_MountAbility::UDS_MountAbility(UDS_MountAbility *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->field_0x160 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsMountReadyStart = false;
  this->MountActionTime = 0.0;
  this->MountEndTime = 0.0;
  (this->MountingLocation).field0_0x0._s_0.X = 0.0;
  (this->MountingLocation).field0_0x0._s_0.Y = 0.0;
  (this->MountingLocation).field0_0x0._s_0.Z = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->IsReadyMoveState = false;
  this->MountingUpDistance = 0.0;
  return this;
}

// ~UDS_MountAbility @ 14b4f8510

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

void __thiscall UDS_MountAbility::~UDS_MountAbility(UDS_MountAbility *this)

{
  *(undefined ***)this = &UDS_MountBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9b30

UClass * __cdecl UDS_MountAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility",
               &Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility,0x210,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility>,
               InternalVTableHelperCtorCaller<UDS_MountAbility>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa690

bool __thiscall UDS_MountAbility::ShouldNotifyChangedCharState(UDS_MountAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b4fa6f0

bool __thiscall UDS_MountAbility::ShouldTickComponent(UDS_MountAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility @ 14b4fa7f0

void __cdecl UDS_MountAbility::StaticRegisterNativesUDS_MountAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_MountAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedDistrict @ 14b4fc0d0

void __cdecl UDS_MountAbility::execOnChangedDistrict(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedDistrict((UDS_MountAbility *)param_1,puVar2);
  return;
}

// ApplyMountEquipmentAppearance @ 14b8250b0

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

void __thiscall UDS_MountAbility::ApplyMountEquipmentAppearance(UDS_MountAbility *this)

{
  FDS_EquipmentAppearanceData local_18 [2];
  
  local_18[0].AppearanceStateTag = Mount;
  local_18[0].TransitionTime = 0.0;
  local_18[0].bIsVisible = false;
  FDS_EntityBase::SetDesiredEquipmentAppearanceData(*(FDS_EntityBase **)&this->field_0xc8,local_18);
  return;
}

// BindMountConditionEvent @ 14b825130

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_MountAbility::BindMountConditionEvent(UDS_MountAbility *this)

{
  FDS_EventDelegate<unsigned___int64_const_&> *this_00;
  FDS_ModelPropertyDelegate_uint32 *this_01;
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_ZoneManager *pUVar5;
  char *pcVar6;
  UFunction *pUVar7;
  UDS_InteractionEvent *pUVar8;
  FDS_EntityBase *this_02;
  UDS_NPCMountAbilityContext *pUVar9;
  FName *pFVar10;
  char *pcVar11;
  undefined1 auStackY_4e8 [32];
  EDS_AbilityDeactivateType local_4b8;
  EDS_AbilityTagType local_4b7;
  EDS_StateTagType local_4b6;
  EDS_AbilityTagType local_4b5;
  <lambda_1> local_4b4 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4b0;
  FWeakObjectPtr local_4a8;
  FName local_4a0;
  FWeakObjectPtr local_498 [2];
  code *local_488;
  ulonglong uStack_480;
  FName local_478;
  FDS_EquipmentAppearanceData local_470;
  FName local_460;
  UDS_MountAbility *local_458;
  FName *local_450;
  ulong64 local_448;
  UDS_NPCMountAbilityContext *local_440;
  code *local_438;
  undefined4 uStack_430;
  uint uStack_42c;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_428;
  FDestructionSentinel local_418;
  undefined1 local_400 [24];
  code *local_3e8;
  longlong lStack_3e0;
  code *local_3d8;
  ulonglong uStack_3d0;
  FReadAccessScope local_3c8;
  FReadAccessScope local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_470.AppearanceStateTag = Mount;
  local_470.TransitionTime = 0.0;
  local_470.bIsVisible = false;
  FDS_EntityBase::SetDesiredEquipmentAppearanceData
            (*(FDS_EntityBase **)&this->field_0xc8,&local_470);
  bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_398._padding_._0_4_ = 0;
    local_398._padding_._4_4_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_MountAbility::BindMountConditionEvent",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_398.Ptr,0x260,L"MountAbilityData is nullptr.");
    if ((FWeakObjectPtr)local_398._padding_ == (FWeakObjectPtr)0x0) {
      return;
    }
    FMemory::Free((void *)local_398._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[2].field_0x8,this);
  local_438 = OnAnimNotifyEvent;
  uStack_430 = 0;
  lStack_3e0 = (ulonglong)uStack_42c << 0x20;
  local_3e8 = OnAnimNotifyEvent;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_MountAnimState_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_MountAbility>
            (&pUVar4[2].field_0x8,(UDS_MountAbility *)local_400,(pmf_ab4ac9bb *)this);
  if (this->field_0xe9 != '\x01') goto LAB_14b82569e;
  pUVar5 = UDS_ZoneManager::GetInst();
  if (pUVar5 == (UDS_ZoneManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3407491361744618092>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                       ,0x26c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_MountAbility::BindMountConditionEvent",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x26d,L"zoneManager is nullptr.");
    if ((void *)local_278._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_278._padding_);
    return;
  }
  this_01 = &pUVar5->DistrictIdChangeDelegate;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_01,(UObject *)this);
  pcVar6 = strstr("&UDS_MountAbility::OnChangedDistrict","::");
  if (pcVar6 == (char *)0x0) {
LAB_14b8253ab:
    pcVar11 = &DAT_00000002;
LAB_14b8253b0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar11 = pcVar6;
      pcVar6 = strstr(pcVar11 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar11 == (char *)0x0) goto LAB_14b8253ab;
    pcVar11 = pcVar11 + 2;
    if (*pcVar11 == '0') goto LAB_14b8253b0;
  }
  ::FName::FName(&local_460,pcVar11);
  local_458 = this;
  if (this == (UDS_MountAbility *)0x0) {
    local_458 = (UDS_MountAbility *)0x0;
  }
  local_4b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4a8.ObjectIndex = 0;
  local_4a8.ObjectSerialNumber = 0;
  local_4a0.ComparisonIndex.Value = 0;
  local_4a0.Number = 0;
  local_478 = local_460;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_458 != (UDS_MountAbility *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_458);
  }
  FWeakObjectPtr::operator=(&local_4a8,(FObjectPtr)&local_458);
  local_4a0 = local_478;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4b0,&local_3c8);
  if ((local_4a0 == (FName)0x0) ||
     (pUVar4 = FWeakObjectPtr::Get(&local_4a8), pUVar4 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
LAB_14b825498:
    local_450 = &local_478;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
    __Internal_BindDynamic<UDS_MountAbility>'::__l2::<lambda_1>::operator()(&local_450);
  }
  else {
    pUVar7 = UObject::FindFunction(pUVar4,local_4a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
    if (pUVar7 == (UFunction *)0x0) goto LAB_14b825498;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4b0,&local_3b0);
  local_428.Object = local_4a8;
  local_428.FunctionName = local_4a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FWriteAccessScope *)&local_418);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->DistrictIdChangeDelegate).field_0x8,local_4b4,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_01,&local_428);
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4b0.AccessDetector);
  pUVar8 = UDS_InteractionEvent::GetEvent();
  if (pUVar8 != (UDS_InteractionEvent *)0x0) {
    this_00 = &pUVar8->OnInteractionProcess;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    uStack_480 = uStack_480 & 0xffffffff00000000;
    local_488 = OnInteractionProcessed;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MountAbility>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)this_00,(UDS_MountAbility *)(local_400 + 8),(pmf_e8148bf4 *)this);
  }
  UDS_CharBuffData::GetData((ulong64)local_498);
  bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_498,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3407491361744618110>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                       ,0x27e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountAbility::BindMountConditionEvent",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x27f,L"charBuffData is nullptr.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(local_498);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 7),this);
  uStack_480 = uStack_480 & 0xffffffff00000000;
  local_488 = _vcall__936__flat______;
  local_3d8 = _vcall__936__flat______;
  uStack_3d0 = uStack_480;
  pUVar4 = FWeakObjectPtr::Get(local_498);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_MountAbility>(pUVar4 + 7,(UDS_MountAbility *)&local_438,(pmf_318df73c *)this);
LAB_14b82569e:
  local_448 = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0);
  if ((local_448 != 0) &&
     (this_02 = FDS_EntityBase::GetEntityBase(&local_448), this_02 != (FDS_EntityBase *)0x0)) {
    local_4b8 = Success;
    local_4b7 = NPCMount;
    FDS_EntityBase::DeactivateAbility(this_02,&local_4b7,&local_4b8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_NPCMountAbilityContext>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_NPCMountAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_4b6 = Mount;
    pFVar10 = &FDS_GameplayTags::GetStateTag(&local_4b6)->TagName;
    (pUVar9->AbilityTag).TagName = *pFVar10;
    pUVar9->IsAdd = true;
    pUVar9->OwnerEntityID = *(ulong64 *)&this->field_0xe0;
    local_440 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_4b5 = NPCMount;
    FDS_EntityBase::TryActivateAbility
              (this_02,&local_4b5,(TObjectPtr<UWN_AbilityContext>)&local_440);
  }
  return;
}

// HiddenMountActor @ 14b833530

/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UDS_MountAbility::HiddenMountActor(UDS_MountAbility *this)

{
  FDS_EntityBase *pFVar1;
  ulong64 local_res8 [4];
  
  local_res8[0] = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0);
  if (local_res8[0] != 0) {
    pFVar1 = FDS_EntityBase::GetEntityBase(local_res8);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      local_res8[1] = 0x400;
      (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,local_res8 + 1,0);
    }
  }
  return;
}

// IsCanActiveMount @ 14b835b50

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

bool __thiscall UDS_MountAbility::IsCanActiveMount(UDS_MountAbility *this)

{
  bool bVar1;
  
  bVar1 = FDS_EntityBase::IsDead(*(FDS_EntityBase **)&this->field_0xc8);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                       (void *)0x0);
    if (!bVar1) {
      if (this->field_0xe9 == '\x01') {
        bVar1 = UDS_MountManager::IsMountAble();
        return bVar1;
      }
      return true;
    }
  }
  return false;
}

// OnAbilityRetryActivate @ 14b8376d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UDS_MountAbility::OnAbilityRetryActivate(UDS_MountAbility *this)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_MountAbilityData *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_58;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_38;
  
  FVar2.ObjectIndex = *(int *)&this->field_0x40;
  FVar2.ObjectSerialNumber = *(int *)&this->field_0x44;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (FVar2 != (FWeakObjectPtr)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  bVar3 = TWeakObjectPtr<UWN_AbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_AbilityContext,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar3) goto LAB_14b83780a;
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar4 == (UObject *)0x0) {
LAB_14b83778c:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_MountAbilityContext_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14b83778c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar4[1].field_0x1 == '\x01') {
      OnMountingMotionEnd(this);
      return;
    }
  }
LAB_14b83780a:
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (!bVar3) {
    bVar3 = FDS_EntityBase::IsDead(*(FDS_EntityBase **)&this->field_0xc8);
    if (!bVar3) {
      local_58._padding_ = (longlong)OnMountCompleteEvent;
      local_38._padding_ = 0;
      local_38.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_38.InvocationList.ArrayMax = _UNK_150631d44;
      local_38.CompactionThreshold = _UNK_150631d48;
      local_38.InvocationListLockCount = _UNK_150631d4c;
      local_38.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.InvocationList.AllocatorInstance.Data =
           (FScriptContainerElement *)
           ((ulonglong)local_58.InvocationList.AllocatorInstance.Data._4_4_ << 0x20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_38,this);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_MountAbility>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_38,(UDS_MountAbility *)&local_res10,(pmf_51d8a570 *)this);
      this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
      local_58._padding_ = 0;
      local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_58.InvocationList.ArrayMax = _UNK_150631d44;
      local_58.CompactionThreshold = _UNK_150631d48;
      local_58.InvocationListLockCount = _UNK_150631d4c;
      local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_58,&local_38);
      UDS_MountAbilityData::Mount(this_00,(FDS_EventDelegate<> *)&local_58);
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_38.InvocationList.AllocatorInstance.Data,local_38.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_38.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_38.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_38);
      return;
    }
  }
  FDS_MountService::RequestDisMount();
  return;
}

// OnAnimNotifyEvent @ 14b837ed0

void __thiscall
UDS_MountAbility::OnAnimNotifyEvent(UDS_MountAbility *this,EDS_MountAnimState *param_1)

{
  return;
}

// OnCanActivate @ 14b837ee0

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

bool __thiscall UDS_MountAbility::OnCanActivate(UDS_MountAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (bVar1) {
    TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>(local_148,&this->field_0xe0);
                    /* WARNING: Load size is inaccurate */
    (this->AirWalkAbilityData).WeakPtr = *TVar2.WeakPtr;
    bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->AirWalkAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MountAbility::OnCanActivate",0x1f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x41,L"AirWalkAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_CharData::GetData((ulong64)&local_150);
      bVar1 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals(&local_150,(void *)0x0);
      if (((!bVar1) &&
          (bVar1 = FDS_EntityBase::IsDead(*(FDS_EntityBase **)&this->field_0xc8), !bVar1)) &&
         (bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)
                             &this->field_0x160,(void *)0x0), !bVar1)) {
        if (this->field_0xe9 == '\x01') {
          bVar1 = UDS_MountManager::IsMountAble();
          return bVar1;
        }
        return true;
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b83ba80

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
UDS_MountAbility::OnChangedCharState
          (UDS_MountAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_1c8 [32];
  EDS_AbilityDeactivateType local_188 [8];
  undefined8 local_180;
  FDS_ChangedCharStateInfo local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178.StateTag.TagName = (param_2->StateTag).TagName;
  local_178.bIsStateTagOn = param_2->bIsStateTagOn;
  local_178._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_178.AddedCharState = param_2->AddedCharState;
  local_178.RemovedCharState = param_2->RemovedCharState;
  local_178.AddedCharDetailState = param_2->AddedCharDetailState;
  local_178.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10[0] = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_178);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountAbility::OnChangedCharState",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xa8,L"InCharStateData is nullptr. (%llu)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_188[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
    return;
  }
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_180._0_4_ = 0x44f021;
  local_180._4_4_ = (SkillMode|ItemUse) >> 0x20;
  bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_180);
  if (!bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_180._0_4_ = 0x8000;
    local_180._4_4_ = None >> 0x20;
    bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_180);
    if (bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_180._0_4_ = PlayerSkill_Detection;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_180);
      if (!bVar1) goto LAB_14b83bcee;
    }
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_180._0_4_ = FallingHigher;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_180);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_180._0_4_ = Warp_Request;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_180);
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_180._0_4_ = Warp_Action;
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_180);
        if (!bVar1) {
          pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
          local_180._0_4_ = Falling;
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_180);
          if (bVar1) {
            OnFlyStartByFalling(this);
          }
          bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                            (&this->AirWalkAbilityData,(void *)0x0);
          if ((!bVar1) &&
             (pUVar4 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr),
             pUVar4[4].field_0x20 != '\x02')) {
            return;
          }
        }
      }
    }
  }
LAB_14b83bcee:
  FDS_MountService::RequestDisMount();
  return;
}

// OnChangedDistrict @ 14b83c8a0

void __thiscall UDS_MountAbility::OnChangedDistrict(UDS_MountAbility *this,uint *param_1)

{
  bool bVar1;
  
  bVar1 = UDS_MountManager::IsRideAbleZone();
  if (!bVar1) {
    FDS_MountService::RequestDisMount();
    return;
  }
  return;
}

// OnChangedMountEquipSlot @ 14b83c940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MountAbility::OnChangedMountEquipSlot(UDS_MountAbility *this,long64 param_1)

{
  Message *pMVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_NetworkManager *this_00;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr FStack_170;
  ClientMessages CStack_168;
  ulong64 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  auStack_148[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
            ((ulong64 *)&FStack_170,(EDS_AbilityTagType *)auStack_148);
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&FStack_170,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_MountService::RequestDisMount",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x65,L"abilityData is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    client_msg::ClientMessages::ClientMessages(&CStack_168,(Arena *)0x0);
    CStack_168._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (CStack_168._impl_._oneof_case_[0] != 0x1eb) {
      client_msg::ClientMessages::clear_ClientMessage(&CStack_168);
      CStack_168._impl_._oneof_case_[0] = 0x1eb;
      if (((byte)CStack_168._padding_ & 1) == 0) {
        CStack_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                       ((Arena *)(CONCAT71(CStack_168._padding_._1_7_,(byte)CStack_168._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        CStack_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                       (*(Arena **)
                         (CONCAT71(CStack_168._padding_._1_7_,(byte)CStack_168._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar2 = CStack_168._impl_.ClientMessage_;
    if (CStack_168._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      pUVar5 = FWeakObjectPtr::Get(&FStack_170);
      CVar2.joincontinentreq_[1].field_0x8 = pUVar5[3].field_0x3;
      pMVar1 = CVar2.joincontinentreq_ + 1;
      *(uint *)pMVar1 = *(uint *)pMVar1 | 1;
      this_00 = UDS_NetworkManager::GetInst();
      UDS_NetworkManager::SendPacket(this_00,&CStack_168);
    }
    client_msg::ClientMessages::~ClientMessages(&CStack_168);
  }
  return;
}

// OnChangedSpecialBuff @ 14b83d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MountAbility::OnChangedSpecialBuff
          (UDS_MountAbility *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_MountBaseTableRow *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  FWeakObjectPtr local_150;
  UDS_MountManager *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if ((!bVar2) && (*param_3 != false)) {
    local_148[0] = UDS_MountManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_148[0] != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_148[0] != (UDS_MountManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    FWeakObjectPtr::operator=(&local_150,(FObjectPtr)local_148);
    bVar2 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_150,(void *)0x0);
    if (!bVar2) {
      FWeakObjectPtr::Get(&local_150);
      iVar3 = UDS_MountManager::GetMountIdByMainPlayer();
      if (iVar3 == 0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_MountAbility::OnChangedSpecialBuff",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x2e4,L"Invalid mountTID. (0)");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pFVar5 = FDS_MountBaseTableRow::GetRef((longlong)iVar3,true);
        if (*param_2 == ForbidMountGround) {
          pFVar6 = (pFVar5->MountActionType).AllocatorInstance.Data;
          iVar3 = (pFVar5->MountActionType).ArrayNum;
          pFVar1 = pFVar6 + iVar3;
          while( true ) {
            if ((pFVar5->MountActionType).ArrayNum != iVar3) {
              `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_158);
            }
            if (pFVar6 == pFVar1) {
              return;
            }
            if (*pFVar6 == (FScriptContainerElement)0x0) break;
            pFVar6 = pFVar6 + 1;
          }
        }
        else {
          if (*param_2 != ForbidMountAir) {
            return;
          }
          pFVar6 = (pFVar5->MountActionType).AllocatorInstance.Data;
          iVar3 = (pFVar5->MountActionType).ArrayNum;
          pFVar1 = pFVar6 + iVar3;
          while( true ) {
            if ((pFVar5->MountActionType).ArrayNum != iVar3) {
              `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_158);
            }
            if (pFVar6 == pFVar1) {
              return;
            }
            if (*pFVar6 == (FScriptContainerElement)0x1) break;
            pFVar6 = pFVar6 + 1;
          }
        }
        FDS_MountService::RequestDisMount();
      }
    }
  }
  return;
}

// OnDeactivateAbility @ 14b83db30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MountAbility::OnDeactivateAbility(UDS_MountAbility *this,bool *param_1)

{
  bool bVar1;
  longlong lVar2;
  UCapsuleComponent *pUVar3;
  USceneComponent *pUVar4;
  UObject *pUVar5;
  FGameplayTag *pFVar6;
  UDS_MountAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  TVector<double>_u_0 local_38;
  
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (!bVar1) {
    (**(code **)(**(longlong **)&this->field_0xc8 + 0x80))
              (*(longlong **)&this->field_0xc8,&local_48);
    (**(code **)(**(longlong **)&this->field_0xc8 + 0x160))();
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_48,
                       (void *)0x0);
    if (!bVar1) {
      bVar1 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_res20,
                         (void *)0x0);
      if (!bVar1) {
        lVar2 = (**(code **)(**(longlong **)&this->field_0xc8 + 0x28))();
        pUVar3 = (UCapsuleComponent *)FWeakObjectPtr::Get(&local_res20);
        UCapsuleComponent::SetCapsuleSize
                  (pUVar3,*(float *)(lVar2 + 0x54),pUVar3->CapsuleHalfHeight,true);
        pUVar3 = (UCapsuleComponent *)FWeakObjectPtr::Get(&local_res20);
        UCapsuleComponent::SetCapsuleSize
                  (pUVar3,pUVar3->CapsuleRadius,*(float *)(lVar2 + 0x50),true);
        pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(&local_48);
        local_38._s_0.X = 0.0;
        local_38._s_0.Y = 0.0;
        local_38._s_0.Z =
             (double)(float)(*(uint *)(lVar2 + 0x50) ^ __xmm_80000000800000008000000080000000);
        USceneComponent::SetRelativeLocation
                  (pUVar4,(TVector<double> *)&local_38._s_0,true,(FHitResult *)0x0,None);
        pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(&local_48);
        local_38._s_0.X = ___xmm_c0568000000000000000000000000000;
        local_38._s_0.Y = _UNK_152242e68;
        local_38._s_0.Z = 0.0;
        USceneComponent::SetRelativeRotation
                  (pUVar4,(TRotator<double> *)&local_38._s_0,true,(FHitResult *)0x0,None);
      }
    }
    if (this->field_0xe9 == '\x01') {
      local_res8[0] = 0x6e;
      bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
      if (bVar1) {
        OnMountingMotionEnd(this);
      }
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar5 + 0x4b8))(pUVar5);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar5 + 0x4d0))(pUVar5);
    local_res8[0] = Success;
    local_res18.ObjectIndex._0_1_ = 0x4b;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
    local_res8[0] = Success;
    local_res18.ObjectIndex._0_1_ = 0x4c;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
    local_res8[0] = Success;
    local_res18.ObjectIndex._0_1_ = 0x4d;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
    local_res8[0] = Success;
    local_res18.ObjectIndex._0_1_ = 0x4e;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
    local_res8[0] = Success;
    local_res18.ObjectIndex._0_1_ = 0x4f;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x70;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x71;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x6f;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x73;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x74;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x75;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
    local_res8[0] = 0x6d;
    pFVar6 = FDS_GameplayTags::GetStateTag(local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    UnbindMountConditionEvent(this);
    if (this->field_0x138 == '\x03') {
      bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                         (void *)0x0);
      if (!bVar1) {
        this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
        UDS_MountAbilityData::Unmount(this_00);
      }
    }
  }
  return;
}

// OnFlyStartByFalling @ 14b8405e0

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

void __thiscall UDS_MountAbility::OnFlyStartByFalling(UDS_MountAbility *this)

{
  bool bVar1;
  EDS_AbilityTagType local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res10[0] = EventAnim|MoveToPoint;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
  if (bVar1) {
    local_res10[0] = Patrol|Skill_CastingSkill;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
    if (!bVar1) {
      local_res10[0] = Patrol|SkillMode_Aim;
      bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
      if (!bVar1) {
        local_res10[0] = Patrol|Skill_StackSkill;
        bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
        if (!bVar1) {
          local_res10[0] = Patrol|ToggleSkill_Process;
          bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
          if ((!bVar1) && (this->field_0xe9 != '\0')) {
            local_res10[0] = AirWalk_Dash;
            bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
            if (bVar1) {
              local_res18[0] = 0;
              local_res10[0] = Mount_Flying;
              FDS_EntityBase::TryActivateAbility
                        (*(FDS_EntityBase **)&this->field_0xc8,local_res10,
                         (TObjectPtr<UWN_AbilityContext>)local_res18);
            }
          }
        }
      }
    }
  }
  return;
}

// OnInteractionProcessed @ 14b8409b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MountAbility::OnInteractionProcessed(UDS_MountAbility *this,ulong64 *param_1)

{
  Message *pMVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_NetworkManager *this_00;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr FStack_170;
  ClientMessages CStack_168;
  ulong64 auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (*param_1 != 0) {
    uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    auStack_148[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
              ((ulong64 *)&FStack_170,(EDS_AbilityTagType *)auStack_148);
    bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&FStack_170,
                       (void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"FDS_MountService::RequestDisMount",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x65,L"abilityData is nullptr.");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      client_msg::ClientMessages::ClientMessages(&CStack_168,(Arena *)0x0);
      CStack_168._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
      if (CStack_168._impl_._oneof_case_[0] != 0x1eb) {
        client_msg::ClientMessages::clear_ClientMessage(&CStack_168);
        CStack_168._impl_._oneof_case_[0] = 0x1eb;
        if (((byte)CStack_168._padding_ & 1) == 0) {
          CStack_168._impl_.ClientMessage_.joincontinentreq_ =
               google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                         ((Arena *)(CONCAT71(CStack_168._padding_._1_7_,(byte)CStack_168._padding_)
                                   & 0xfffffffffffffffe));
        }
        else {
          CStack_168._impl_.ClientMessage_.joincontinentreq_ =
               google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                         (*(Arena **)
                           (CONCAT71(CStack_168._padding_._1_7_,(byte)CStack_168._padding_) &
                           0xfffffffffffffffe));
        }
      }
      CVar2 = CStack_168._impl_.ClientMessage_;
      if (CStack_168._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
        pUVar5 = FWeakObjectPtr::Get(&FStack_170);
        CVar2.joincontinentreq_[1].field_0x8 = pUVar5[3].field_0x3;
        pMVar1 = CVar2.joincontinentreq_ + 1;
        *(uint *)pMVar1 = *(uint *)pMVar1 | 1;
        this_00 = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendPacket(this_00,&CStack_168);
      }
      client_msg::ClientMessages::~ClientMessages(&CStack_168);
    }
    return;
  }
  return;
}

// OnMountCompleteEvent @ 14b840c90

void __thiscall UDS_MountAbility::OnMountCompleteEvent(UDS_MountAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_res8 [4];
  
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (!bVar1) {
    (**(code **)(**(longlong **)&this->field_0xc8 + 0x80))();
    TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals(local_res8,(void *)0x0);
  }
  return;
}

// OnMountingMotionEnd @ 14b840ce0

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

void __thiscall UDS_MountAbility::OnMountingMotionEnd(UDS_MountAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  
  this->IsMountReadyStart = false;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  local_res8[0] = Mount_Ready;
  pFVar1 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar1);
  return;
}

// OnPostActivateAbility @ 14b8413b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UDS_MountAbility::OnPostActivateAbility(UDS_MountAbility *this)

{
  bool bVar1;
  UDS_MountAbilityData *pUVar2;
  FGameplayTag *pFVar3;
  bool local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_58;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_38;
  
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
    local_res8[0] = false;
    UDS_MountAbilityData::SetIsMoved(pUVar2,local_res8);
    bVar1 = FDS_EntityBase::IsDead(*(FDS_EntityBase **)&this->field_0xc8);
    if (!bVar1) {
      local_res8[0] = true;
      bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
      if (!bVar1) {
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res18 = 0;
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
        local_res8[0] = true;
        pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
      }
      BindMountConditionEvent(this);
      local_58._padding_ = (longlong)OnMountCompleteEvent;
      local_38._padding_ = 0;
      local_38.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_38.InvocationList.ArrayMax = _UNK_150631d44;
      local_38.CompactionThreshold = _UNK_150631d48;
      local_38.InvocationListLockCount = _UNK_150631d4c;
      local_38.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.InvocationList.AllocatorInstance.Data =
           (FScriptContainerElement *)
           ((ulonglong)local_58.InvocationList.AllocatorInstance.Data._4_4_ << 0x20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(&local_38,this);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_MountAbility>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &local_38,(UDS_MountAbility *)local_res8,(pmf_51d8a570 *)this);
      pUVar2 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
      local_58._padding_ = 0;
      local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_58.InvocationList.ArrayMax = _UNK_150631d44;
      local_58.CompactionThreshold = _UNK_150631d48;
      local_58.InvocationListLockCount = _UNK_150631d4c;
      local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                (&local_58,&local_38);
      UDS_MountAbilityData::Mount(pUVar2,(FDS_EventDelegate<> *)&local_58);
      if (this->field_0xe9 == '\x01') {
        UDS_TimeCoolDownManager::StartCoolDown(ActionMount,0,0.0);
        if (this->field_0xe9 == '\x01') {
          local_res8[0] = true;
          bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
          if (!bVar1) {
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_res18 = 0;
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
            local_res8[0] = true;
            pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
            UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
            this->IsReadyMoveState = false;
          }
          local_res8[0] = true;
          bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
          if (bVar1) {
            OnFlyStartByFalling(this);
          }
        }
      }
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_38.InvocationList.AllocatorInstance.Data,local_38.InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_38.InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_38.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_38);
      return;
    }
  }
  FDS_MountService::RequestDisMount();
  return;
}

// OnStartMountReady @ 14b847100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_MountAbility::OnStartMountReady
          (UDS_MountAbility *this,float param_1,TTransform<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  UDS_MountDataSet *this_00;
  longlong lVar5;
  FDS_MountBaseTableRow *pFVar6;
  UDS_GameInstance *pUVar7;
  USceneComponent *pUVar8;
  TTransform<double> *pTVar9;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  float fVar12;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  (**(code **)(**(longlong **)&this->field_0xc8 + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_298,(void *)0x0
                    );
  if (bVar3) {
    return;
  }
  if (this->IsMountReadyStart == false) {
    this->IsMountReadyStart = true;
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_290);
    bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_290,(void *)0x0);
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3407491361744618348>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                         ,0x36c,"false");
      if (!bVar3) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_290);
    iVar4 = UDS_MountDataSet::GetMountID(this_00);
    if (iVar4 == 0) {
      return;
    }
    lVar5 = (**(code **)(**(longlong **)&this->field_0xc8 + 0x28))(*(longlong **)&this->field_0xc8);
    pFVar6 = FDS_MountBaseTableRow::GetRef((longlong)iVar4,true);
    pUVar7 = UDS_GameInstance::GetInst();
    if (pUVar7 == (UDS_GameInstance *)0x0) {
      return;
    }
    this->MountEndTime = pFVar6->MountingTime;
    this->MountActionTime = 0.0;
    if ((pFVar6->CharacterDismountCourseValue).ArrayNum < 1) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)(pFVar6->CharacterDismountCourseValue).AllocatorInstance.Data;
    }
    this->MountingUpDistance = fVar12;
    dVar2 = (pFVar6->MountingLocation).field0_0x0._s_0.Y;
    (this->MountingLocation).field0_0x0._s_0.X = (pFVar6->MountingLocation).field0_0x0._s_0.X;
    (this->MountingLocation).field0_0x0._s_0.Y = dVar2;
    (this->MountingLocation).field0_0x0._s_0.Z = (pFVar6->MountingLocation).field0_0x0._s_0.Z;
    (this->MountingLocation).field0_0x0._s_0.Z =
         (this->MountingLocation).field0_0x0._s_0.Z - (double)*(float *)(lVar5 + 0x50);
    pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(&local_298);
    pTVar9 = USceneComponent::GetRelativeTransform(pUVar8,&local_a8);
    dVar2 = (pTVar9->Rotation).XY.m128d_f64[1];
    (this->StartTransform).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    (this->StartTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Rotation).ZW.m128d_f64[1];
    (this->StartTransform).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
    (this->StartTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Translation).XY.m128d_f64[1];
    (this->StartTransform).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
    (this->StartTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Translation).ZW.m128d_f64[1];
    (this->StartTransform).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
    (this->StartTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Scale3D).XY.m128d_f64[1];
    (this->StartTransform).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
    (this->StartTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Scale3D).ZW.m128d_f64[1];
    (this->StartTransform).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
    (this->StartTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  if (this->MountEndTime == 0.0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_1c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1c8,"UDS_MountAbility::OnStartMountReady",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_1c8.Ptr,0x38d,L"MountEndTime is 0.");
      if ((void *)local_1c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1c8._padding_);
      }
    }
  }
  else {
    fVar12 = param_1 + this->MountActionTime;
    this->MountActionTime = fVar12;
    fVar12 = fVar12 / this->MountEndTime;
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    local_288.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_288.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    local_288.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_288.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_288.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_288.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    if (fVar12 < __real_3f800000) {
      pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(&local_298);
      USceneComponent::GetRelativeTransform(pUVar8,&local_228);
      local_228.Translation.XY.m128d_f64[0] = (this->MountingLocation).field0_0x0._s_0.X;
      local_228.Translation.XY.m128d_f64[1] = (this->MountingLocation).field0_0x0._s_0.Y;
      param_2 = &local_228;
      local_228.Translation.ZW.m128d_f64[0] = (this->MountingLocation).field0_0x0._s_0.Z;
      local_228.Translation.ZW.m128d_f64[1] = 0.0;
    }
    UE::Math::TTransform<double>::Blend(&local_288,&this->StartTransform,param_2,fVar12);
    pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(&local_298);
    USceneComponent::SetRelativeTransform(pUVar8,&local_288,false,(FHitResult *)0x0,None);
    bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                       (void *)0x0);
    if ((!bVar3) &&
       (pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160),
       pUVar11[3].field_0x3 == '\x01')) {
      this->IsReadyMoveState = true;
    }
    if ((__real_3f800000 <= fVar12) && (this->IsReadyMoveState == true)) {
      OnMountingMotionEnd(this);
    }
  }
  return;
}

// OnTickComponent @ 14b847500

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

void __thiscall UDS_MountAbility::OnTickComponent(UDS_MountAbility *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  UObject *pUVar6;
  FGameplayTag *pFVar7;
  UDS_MountAbilityData *this_01;
  bool local_res18 [8];
  EDS_StateTagType local_res20 [8];
  FWeakObjectPtr local_68;
  undefined8 local_60;
  TVector<double> local_58 [3];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  local_res20[0] = Mount;
  bVar4 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res20);
  if (bVar4) {
    local_res20[0] = Mount_DisMount;
    bVar4 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res20);
    if ((!bVar4) && (UpdateMount(this,param_1), this->field_0xe9 != '\0')) {
      UpdateMountMovement(this,param_1);
      bVar4 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                         (void *)0x0);
      if (!bVar4) {
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
        pTVar5 = UDS_MovementCore::GetVelocity(this_00,local_58);
        dVar1 = (pTVar5->field0_0x0)._s_0.Z;
        dVar2 = (pTVar5->field0_0x0)._s_0.X;
        dVar3 = (pTVar5->field0_0x0)._s_0.Y;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
        local_res18[0] = __real_38d1b717 < (float)(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
        if ((bool)pUVar6[3].field_0x3 != local_res18[0]) {
          if (local_res18[0]) {
            local_68.ObjectIndex = 0;
            local_68.ObjectSerialNumber = 0;
            local_60 = 0;
            FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_60);
            local_res20[0] = Mount_Run;
            pFVar7 = FDS_GameplayTags::GetStateTag(local_res20);
            UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
          }
          else {
            local_68.ObjectIndex = 0;
            local_68.ObjectSerialNumber = 0;
            local_60 = 0;
            FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_60);
            local_res20[0] = Mount_Run;
            pFVar7 = FDS_GameplayTags::GetStateTag(local_res20);
            UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
          }
        }
        this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
        UDS_MountAbilityData::SetIsMoved(this_01,local_res18);
      }
    }
  }
  return;
}

// OnUnmount @ 14b84a8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MountAbility::OnUnmount(UDS_MountAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MountAbilityData *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountAbility::OnUnmount",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x229,L"MountAbilityData is nullptr.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
    UDS_MountAbilityData::Unmount(this_00);
  }
  return;
}

// ResetPlayerSoulPosition @ 14b84d620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MountAbility::ResetPlayerSoulPosition(UDS_MountAbility *this)

{
  bool bVar1;
  longlong lVar2;
  USceneComponent *pUVar3;
  FWeakObjectPtr local_res8 [4];
  TVector<double>_u_0 local_28;
  
  (**(code **)(**(longlong **)&this->field_0xc8 + 0x80))();
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    lVar2 = (**(code **)(**(longlong **)&this->field_0xc8 + 0x28))();
    pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(local_res8);
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z =
         (double)(float)(*(uint *)(lVar2 + 0x50) ^ __xmm_80000000800000008000000080000000);
    USceneComponent::SetRelativeLocation
              (pUVar3,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
    pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(local_res8);
    local_28._s_0.X = ___xmm_c0568000000000000000000000000000;
    local_28._s_0.Y = _UNK_152242e68;
    local_28._s_0.Z = 0.0;
    USceneComponent::SetRelativeRotation
              (pUVar3,(TRotator<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// ShowMountActor @ 14b850710

/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UDS_MountAbility::ShowMountActor(UDS_MountAbility *this)

{
  FDS_EntityBase *pFVar1;
  ulong64 local_res8 [4];
  
  local_res8[0] = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0);
  if (local_res8[0] != 0) {
    pFVar1 = FDS_EntityBase::GetEntityBase(local_res8);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      local_res8[1] = 0x400;
      (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,local_res8 + 1,0);
    }
  }
  return;
}

// TryActivate @ 14b852120

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

bool __cdecl UDS_MountAbility::TryActivate(ulong64 param_1,FDS_MountInfo *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_198 [32];
  EDS_AbilityTagType local_158 [8];
  ulong64 local_150;
  FWeakObjectPtr local_148;
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_2->MountEntity != 0) {
    local_150 = param_1;
    this = FDS_EntityBase::GetEntityBase(&local_150);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MountAbility::TryActivate",0x1d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_138.Ptr,0x156,L"entities is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_148);
      bVar4 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_148,(void *)0x0);
      if (!bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_148);
        iVar2 = param_2->SeatIndex;
        uVar3 = *(undefined4 *)&param_2->field_0xc;
        local_140 = 0;
        local_158[0] = Mount;
        *(ulong64 *)(pUVar7 + 5) = param_2->MountEntity;
        *(int *)&pUVar7[5].field_0x8 = iVar2;
        *(undefined4 *)&pUVar7[5].field_0xc = uVar3;
        bVar4 = FDS_EntityBase::TryActivateAbility
                          (this,local_158,(TObjectPtr<UWN_AbilityContext>)&local_140);
        return bVar4;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3407491361744617821>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                         ,0x15d,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
  }
  return false;
}

// TryDeactivate @ 14b854a00

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

bool __cdecl UDS_MountAbility::TryDeactivate(ulong64 param_1)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148;
  EDS_AbilityTagType local_147 [7];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = param_1;
  this = FDS_EntityBase::GetEntityBase(&local_140);
  if (this == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountAbility::TryDeactivate",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x16b,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  local_148 = Cancel;
  local_147[0] = Mount;
  bVar1 = FDS_EntityBase::DeactivateAbility(this,local_147,&local_148);
  return bVar1;
}

// UnbindMountConditionEvent @ 14b855100

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

void __thiscall UDS_MountAbility::UnbindMountConditionEvent(UDS_MountAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_ZoneManager *pUVar5;
  UDS_InteractionEvent *pUVar6;
  undefined1 auStackY_3b8 [32];
  FWeakObjectPtr local_388;
  ulong64 local_380;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_378._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_378,"UDS_MountAbility::UnbindMountConditionEvent",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x2a0,L"MountAbilityData is nullptr.");
    if ((void *)local_378._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_378._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[2].field_0x8,this);
  if (this->field_0xe9 == '\x01') {
    pUVar5 = UDS_ZoneManager::GetInst();
    if (pUVar5 == (UDS_ZoneManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3407491361744618154>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                         ,0x2aa,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_MountAbility::UnbindMountConditionEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x2ab,L"zoneManager is nullptr.");
      if ((void *)local_258._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_258._padding_);
      return;
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar5->DistrictIdChangeDelegate,(UObject *)this);
    pUVar6 = UDS_InteractionEvent::GetEvent();
    if (pUVar6 != (UDS_InteractionEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnInteractionProcess
                 ,this);
    }
    UDS_CharBuffData::GetData((ulong64)&local_388);
    bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_388,(void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3407491361744618170>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility.cpp"
                         ,0x2ba,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountAbility::UnbindMountConditionEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,699,L"charBuffData is nullptr.");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_388);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 7),this);
  }
  local_380 = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0);
  if (local_380 != 0) {
    FDS_EntityBase::GetEntityBase(&local_380);
  }
  return;
}

// UpdateMount @ 14b857d40

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

void __thiscall UDS_MountAbility::UpdateMount(UDS_MountAbility *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  USceneComponent *this_00;
  undefined1 auStack_128 [32];
  EDS_StateTagType local_f8 [8];
  FWeakObjectPtr local_f0;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  ulong64 local_d8;
  FName local_d0 [5];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->field_0x160,
                     (void *)0x0);
  if (!bVar3) {
    (**(code **)(**(longlong **)&this->field_0xc8 + 0x80))();
    bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_e0,
                       (void *)0x0);
    if (!bVar3) {
      local_d8 = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0);
      if ((local_d8 != 0) &&
         (pFVar4 = FDS_EntityBase::GetEntityBase(&local_d8), pFVar4 != (FDS_EntityBase *)0x0)) {
        (**(code **)(pFVar4->_padding_ + 0x160))(pFVar4);
        bVar3 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_e8,(void *)0x0
                          );
        if (!bVar3) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
          local_f0.ObjectIndex = *(int *)&pUVar5[7].field_0x4;
          local_f0.ObjectSerialNumber = *(int *)&pUVar5[7].field_0x8;
          bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_f0,
                             (void *)0x0);
          if (!bVar3) {
            pUVar5 = FWeakObjectPtr::Get(&local_f0);
            pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x520);
            ::FName::FName(local_d0,"Saddle");
            (*pcVar1)(pUVar5,&local_a8);
            pUVar5 = FWeakObjectPtr::Get(&local_e8);
            local_f8[0] = Mount_Ready;
            local_a8.Translation.ZW.m128d_f64[0] =
                 local_a8.Translation.ZW.m128d_f64[0] + *(double *)&pUVar5[8].field_0x18;
            dVar2 = local_a8.Translation.XY.m128d_f64[1] + *(double *)&pUVar5[8].field_0x10;
            local_a8.Translation.ZW.m128d_f64[1] = 0.0;
            local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
            local_a8.Translation.XY.m128d_f64[0] =
                 local_a8.Translation.XY.m128d_f64[0] + *(double *)&pUVar5[8].field_0x8;
            local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
            bVar3 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_f8);
            if (bVar3) {
              OnStartMountReady(this,param_1,&local_a8);
              return;
            }
            this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_e0);
            USceneComponent::SetRelativeTransform(this_00,&local_a8,false,(FHitResult *)0x0,None);
            return;
          }
        }
      }
      ResetPlayerSoulPosition(this);
    }
  }
  return;
}

// UpdateMountMovement @ 14b857f70

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

void __thiscall UDS_MountAbility::UpdateMountMovement(UDS_MountAbility *this,float param_1)

{
  undefined1 *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  UObject *pUVar12;
  APawn *this_01;
  TRotator<double> *pTVar13;
  TVector<double> *pTVar14;
  TVector<double>_u_0 *pTVar15;
  UDS_MovementCore *this_02;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double local_res8;
  float local_res10;
  double local_res18;
  double local_res20;
  undefined1 local_178 [32];
  TRotator<double> local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  undefined1 local_f8 [16];
  TRotator<double> local_e8 [8];
  
  local_res10 = param_1;
  bVar11 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&this->field_0x158,
                      (void *)0x0);
  if (bVar11) {
    return;
  }
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
  if (pUVar12[6].field_0x10 == '\x01') {
    return;
  }
  local_res8._0_1_ = 0x6d;
  bVar11 = UDS_GameplayAbility::HasStateTag
                     ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  if (!bVar11) {
    return;
  }
  local_res8._0_1_ = 0x73;
  bVar11 = UDS_GameplayAbility::HasStateTag
                     ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  if (bVar11) {
    return;
  }
  local_res8 = (double)CONCAT71(local_res8._1_7_,0x70);
  bVar11 = UDS_GameplayAbility::HasStateTag
                     ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
  this_01 = (APawn *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  pTVar13 = APawn::GetControlRotation(this_01,&local_158);
  local_e8[0].Yaw = pTVar13->Yaw;
  local_e8[0].Pitch = 0.0;
  local_e8[0].Roll = 0.0;
  pTVar14 = UE::Math::TRotator<double>::RotateVector
                      (local_e8,(TVector<double> *)&local_158,
                       &UE::Math::TVector<double>::RightVector);
  dVar18 = *(double *)(pUVar12 + 6);
  dVar1 = (pTVar14->field0_0x0)._s_0.X;
  dVar2 = (pTVar14->field0_0x0)._s_0.Y;
  dVar23 = (pTVar14->field0_0x0)._s_0.Z;
  pTVar14 = UE::Math::TRotator<double>::RotateVector
                      (local_e8,(TVector<double> *)local_178,
                       &UE::Math::TVector<double>::ForwardVector);
  dVar30 = __real_bff0000000000000;
  dVar3 = __real_3ff0000000000000;
  uVar33 = SUB84(__real_bff0000000000000,0);
  uVar34 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar35 = uVar33;
  uVar36 = uVar34;
  if (!bVar11) {
    uVar35 = (int)*(undefined8 *)&pUVar12[6].field_0x8;
    uVar36 = (int)((ulonglong)*(undefined8 *)&pUVar12[6].field_0x8 >> 0x20);
  }
  dVar1 = (double)CONCAT44(uVar36,uVar35) * (pTVar14->field0_0x0)._s_0.X + dVar18 * dVar1;
  dVar2 = (double)CONCAT44(uVar36,uVar35) * (pTVar14->field0_0x0)._s_0.Y + dVar18 * dVar2;
  dVar18 = (double)CONCAT44(uVar36,uVar35) * (pTVar14->field0_0x0)._s_0.Z + dVar18 * dVar23;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) {
    return;
  }
  this_00 = &this->field_0xd0;
  local_res20 = __real_3ff0000000000000;
  local_158.Roll = dVar18;
  local_140._s_0.X = dVar1;
  local_140._s_0.Y = dVar2;
  local_140._s_0.Z = dVar18;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  fVar16 = (float)(**(code **)(*(longlong *)pUVar12 + 0x428))(pUVar12);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  if (*(USceneComponent **)(pUVar12 + 0xb) == (USceneComponent *)0x0) {
    pTVar15 = &local_128;
    local_128._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_128._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_128._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar15 = &USceneComponent::GetForwardVector
                         (*(USceneComponent **)(pUVar12 + 0xb),(TVector<double> *)&local_128._s_0)->
               field0_0x0;
  }
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178._0_16_ = *(undefined1 (*) [16])pTVar15;
  uVar35 = local_178._8_4_;
  uVar36 = local_178._12_4_;
  uVar29 = local_178._0_8_;
  uVar26 = local_178._8_8_;
  if (bVar11) {
    uVar35 = 0;
    uVar36 = 0;
    uVar29 = (double)uVar29 * dVar30;
    uVar26 = (double)uVar26 * dVar30;
  }
  dVar23 = (double)uVar26 * (double)uVar26 + (double)uVar29 * (double)uVar29;
  uVar27 = uVar26;
  if (dVar23 != dVar3) {
    if (dVar23 < __real_3e45798ee0000000) {
      local_178._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      goto LAB_14b858316;
    }
    local_res8 = dVar3 / SQRT(dVar23);
    uVar29 = (double)uVar29 * local_res8;
    uVar26 = (double)uVar26 * local_res8;
    uVar27 = CONCAT44(uVar36,uVar35);
  }
  local_178._16_8_ = 0.0;
LAB_14b858316:
  local_f8._8_4_ = (int)uVar27;
  local_f8._0_8_ = uVar26;
  local_f8._12_4_ = (int)((ulonglong)uVar27 >> 0x20);
  dVar23 = dVar2 * dVar2 + dVar1 * dVar1 + dVar18 * dVar18;
  uVar27 = local_158.Roll;
  uVar17 = dVar2;
  uVar24 = dVar1;
  if (dVar23 != dVar3) {
    if (__real_3e45798ee0000000 <= dVar23) {
      local_res8 = dVar3 / SQRT(dVar23);
      uVar27 = dVar18 * local_res8;
      uVar17 = dVar2 * local_res8;
      uVar24 = dVar1 * local_res8;
    }
    else {
      local_158.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  local_res8 = (double)CONCAT44(local_res8._4_4_,fVar16 * __real_3c8efa35);
  dVar30 = (double)local_178._16_8_ * (double)uVar27;
  local_res18 = (double)local_178._16_8_;
  fVar16 = cosf(fVar16 * __real_3c8efa35);
  if ((float)((double)uVar26 * (double)uVar17 + (double)uVar29 * (double)uVar24 + dVar30) < fVar16)
  {
    local_178._0_8_ = (double)uVar26 * dVar18 - local_res18 * dVar2;
    local_178._8_8_ = local_res18 * dVar1 - (double)uVar29 * dVar18;
    local_178._16_8_ = (double)uVar29 * dVar2 - (double)uVar26 * dVar1;
    pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)local_178,(TVector<double> *)&local_158,
                         __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    local_128._0_16_ = *(undefined1 (*) [16])&pTVar14->field0_0x0;
    local_158.Roll = (pTVar14->field0_0x0)._s_0.Z;
    auVar7._4_8_ = extraout_XMM0_Qb;
    auVar7._0_4_ = local_128._4_4_;
    auVar21._0_8_ = auVar7._0_8_ << 0x20;
    auVar21._8_4_ = local_128._8_4_;
    auVar21._12_4_ = local_128._12_4_;
    local_178._0_8_ = auVar21._8_8_;
    local_178._8_8_ = local_128._8_8_;
    local_res20 = local_158.Roll;
    if (SQRT((double)local_178._8_8_ * (double)local_178._0_8_ + local_128._0_8_ * local_128._0_8_ +
             local_158.Roll * local_158.Roll) < __real_3f1a36e2e0000000) {
      local_res20 = dVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_178._8_8_;
      local_128._0_16_ = auVar8 << 0x40;
      local_178._0_8_ = 0.0;
    }
    __libm_sse2_sincos_();
    auVar20._8_4_ = extraout_XMM0._8_4_;
    auVar20._12_4_ = extraout_XMM0._12_4_;
    dVar4 = extraout_XMM0._8_8_;
    dVar31 = extraout_XMM0._0_8_;
    dVar32 = dVar31 * (double)local_178._0_8_;
    dVar30 = dVar31 * local_res20;
    dVar31 = dVar31 * local_128._s_0.X;
    dVar28 = dVar32 * local_res18 - dVar30 * (double)uVar26;
    dVar28 = dVar28 + dVar28;
    dVar5 = dVar30 * (double)uVar29 - dVar31 * local_res18;
    dVar5 = dVar5 + dVar5;
    dVar25 = dVar31 * (double)local_f8._0_8_ - dVar32 * (double)uVar29;
    dVar25 = dVar25 + dVar25;
    local_res8 = (dVar25 * dVar32 - dVar5 * dVar30) + dVar28 * dVar4 + (double)uVar29;
    auVar19._0_8_ = local_res8 * local_res8;
    auVar19._8_8_ = 0;
    local_140._s_0.Z = (dVar5 * dVar31 - dVar28 * dVar32) + dVar25 * dVar4 + local_res18;
    local_140._s_0.Y = (dVar28 * dVar30 - dVar25 * dVar31) + dVar5 * dVar4 + (double)local_f8._0_8_;
    dVar30 = local_140._s_0.Y * local_140._s_0.Y + auVar19._0_8_ +
             local_140._s_0.Z * local_140._s_0.Z;
    local_140._s_0.X = local_res8;
    if (dVar30 != dVar3) {
      if (__real_3e45798ee0000000 <= dVar30) {
        auVar20._0_8_ = dVar30;
        dVar3 = dVar3 / SQRT(dVar30);
        local_140._s_0.Y = local_140._s_0.Y * dVar3;
        local_140._s_0.Z = local_140._s_0.Z * dVar3;
        local_140._s_0.X = local_res8 * dVar3;
        auVar19 = auVar20;
      }
      else {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_158.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_140._s_0.X = (double)uVar9;
        local_140._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_140._s_0.Y = (double)uVar10;
      }
    }
    uVar33 = SUB84(__real_bff0000000000000,0);
    uVar34 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar23;
    auVar21 = sqrtpd(auVar19,auVar6);
    dVar23 = auVar21._0_8_;
    local_140._s_0.Y = local_140._s_0.Y * dVar23;
    local_140._s_0.X = dVar23 * local_140._s_0.X;
    local_140._s_0.Z = local_140._s_0.Z * dVar23;
  }
  fVar22 = (float)(local_140._s_0.Y * dVar2 + local_140._s_0.X * dVar1 + local_140._s_0.Z * dVar18);
  fVar16 = __real_38d1b717;
  if ((0.0 <= fVar22) && (fVar16 = fVar22, __real_3f800000 < fVar22)) {
    fVar16 = __real_3f7ff972;
  }
  if (__real_3f800000 <= fVar16) {
    fVar16 = __real_3f800000;
  }
  fVar16 = acosf(fVar16);
  dVar18 = (double)(fVar16 * __real_42652ee0) * local_res20;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  *(float *)&pUVar12[0xb].field_0x8 = (float)dVar18;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar12 + 0x2e0))(pUVar12,&local_140);
  fVar16 = local_res10;
  UDS_MountBaseAbility::UpdateBlockByChildCollision
            ((UDS_MountBaseAbility *)this,local_res10,(TVector<double> *)&local_140._s_0);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar12 + 0x458))(pUVar12,&local_110);
  if (((local_110._s_0.X != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
      (local_110._s_0.Y != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
     (local_110._s_0.Z != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    if (bVar11) {
      local_110._s_0.X = local_110._s_0.X * (double)CONCAT44(uVar34,uVar33);
      local_110._s_0.Y = local_110._s_0.Y * (double)CONCAT44(uVar34,uVar33);
      local_110._s_0.Z = local_110._s_0.Z * (double)CONCAT44(uVar34,uVar33);
    }
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_110._s_0,&local_158);
    local_178._0_8_ = 0.0;
    local_178._16_8_ = 0.0;
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    fVar22 = (float)(**(code **)(*(longlong *)&pUVar12[0x29].field_0x10 + 0x158))();
    this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pTVar13 = UDS_MovementCore::GetActorRotation(this_02,&local_158);
    pTVar13 = FMath::RInterpTo((TRotator<double> *)&local_128._s_0,pTVar13,
                               (TRotator<double> *)local_178,fVar16,fVar22);
    local_178._0_8_ = pTVar13->Pitch;
    local_178._8_8_ = pTVar13->Yaw;
    local_178._16_8_ = pTVar13->Roll;
    bVar11 = UDS_MountBaseAbility::CheckRotateAbleByChildCollision
                       ((UDS_MountBaseAbility *)this,(TRotator<double> *)local_178);
    if (bVar11) {
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      (**(code **)(*(longlong *)pUVar12 + 0x370))(pUVar12,local_178);
    }
  }
  return;
}


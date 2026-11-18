// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 36

// StaticClass @ 146fe8e60

UClass * __cdecl UPawnSensingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PawnSensingComponent",
               &Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton,
               StaticRegisterNativesUPawnSensingComponent,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPawnSensingComponent>,
               InternalVTableHelperCtorCaller<UPawnSensingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton;
}

// UPawnSensingComponent @ 146fec510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPawnSensingComponent * __thiscall
UPawnSensingComponent::UPawnSensingComponent(UPawnSensingComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->TimerHandle_OnTimer).Handle = 0;
  *(undefined8 *)&this->OnSeePawn = 0;
  *(undefined8 *)&(this->OnSeePawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnSeePawn).field_0x10 = 0;
  *(undefined8 *)&this->OnHearNoise = 0;
  *(undefined8 *)&(this->OnHearNoise).field_0x8 = 0;
  *(undefined8 *)&(this->OnHearNoise).field_0x10 = 0;
  return this;
}

// UPawnSensingComponent @ 146fec580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPawnSensingComponent * __thiscall
UPawnSensingComponent::UPawnSensingComponent
          (UPawnSensingComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->LOSHearingThreshold = 2800.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->TimerHandle_OnTimer).Handle = 0;
  *(undefined8 *)&this->OnSeePawn = 0;
  *(undefined8 *)&(this->OnSeePawn).field_0x8 = 0;
  *(undefined8 *)&(this->OnSeePawn).field_0x10 = 0;
  *(undefined8 *)&this->OnHearNoise = 0;
  *(undefined8 *)&(this->OnHearNoise).field_0x8 = 0;
  *(undefined8 *)&(this->OnHearNoise).field_0x10 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf7;
  this->bEnableSensingUpdates = 1;
  this->bHearNoises = 1;
  this->bSeePawns = 1;
  this->bOnlySensePlayers = 1;
  this->HearingThreshold = 1400.0;
  this->SightRadius = 5000.0;
  this->PeripheralVisionAngle = 90.0;
  this->PeripheralVisionCosine = -4.371139e-08;
  this->SensingInterval = 0.5;
  this->HearingMaxSoundAge = 1.0;
  return this;
}

// ~UPawnSensingComponent @ 146fec9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::~UPawnSensingComponent(UPawnSensingComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnHearNoise).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHearNoise);
  pvVar1 = *(void **)&(this->OnSeePawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSeePawn);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BroadcastOnHearLocalNoise @ 146fed830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPawnSensingComponent::BroadcastOnHearLocalNoise
          (UPawnSensingComponent *this,APawn *param_1,TVector<double> *param_2,float param_3)

{
  APawn *local_38;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  
  local_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  local_20 = (param_2->field0_0x0)._s_0.Z;
  local_38 = param_1;
  local_18 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnHearNoise,&local_38);
  return;
}

// BroadcastOnHearRemoteNoise @ 146fed870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPawnSensingComponent::BroadcastOnHearRemoteNoise
          (UPawnSensingComponent *this,APawn *param_1,TVector<double> *param_2,float param_3)

{
  APawn *local_38;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  
  local_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  local_20 = (param_2->field0_0x0)._s_0.Z;
  local_38 = param_1;
  local_18 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnHearNoise,&local_38);
  return;
}

// BroadcastOnSeePawn @ 146fed8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPawnSensingComponent::BroadcastOnSeePawn(UPawnSensingComponent *this,APawn *param_1)

{
  APawn *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSeePawn,local_res8);
  return;
}

// CanHear @ 146fed8e0

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

bool __thiscall
UPawnSensingComponent::CanHear
          (UPawnSensingComponent *this,TVector<double> *param_1,float param_2,bool param_3)

{
  AActor *this_00;
  longlong lVar1;
  bool bVar2;
  UWorld *this_01;
  FName *pFVar3;
  FCollisionQueryParams *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStackY_168 [32];
  TStatId local_108;
  FName local_100;
  TVector<double>_u_0 local_f8;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((0.0 < param_2) && (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) &&
     (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    (**(code **)(this->_padding_ + 0x548))(0,&local_f8);
    dVar5 = local_f8._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar7 = local_f8._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar6 = local_f8._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar5 = (dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6) / (double)(param_2 * param_2);
    if (dVar5 <= (double)(this->HearingThreshold * this->HearingThreshold)) {
      return true;
    }
    if ((!param_3) && (dVar5 <= (double)(this->LOSHearingThreshold * this->LOSHearingThreshold))) {
      this_01 = AActor::GetWorld(this_00);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_CanHear =
             (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPawnSensingComponent::CanHear(UE::Math::TVector<double>_const_&,float,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_CanHear>
              )0x0;
        pFVar3 = ::FName::FName(&local_100,"CanHear");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_CanHear,*pFVar3,L"CanHear",
                   "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                   true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_108.StatIdPtr = (TStatIdData *)StatPtr_CanHear;
      if (StatPtr_CanHear ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UPawnSensingComponent::CanHear(UE::Math::TVector<double>_const_&,float,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_CanHear>
           )0x0) {
        pFVar3 = ::FName::FName(&local_100,"CanHear");
        local_108.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_CanHear,*pFVar3,L"CanHear",
                        "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                        ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"CanHear");
        _Init_thread_footer(&::_TSS0);
      }
      pFVar4 = FCollisionQueryParams::FCollisionQueryParams
                         (&local_d8,::StaticName,&local_108,true,this_00);
      bVar2 = UWorld::LineTraceTestByChannel
                        (this_01,(TVector<double> *)&local_f8._s_0,param_1,ECC_Visibility,pFVar4,
                         &FCollisionResponseParams::DefaultResponseParam);
      if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        return !bVar2;
      }
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
      return !bVar2;
    }
  }
  return false;
}

// CanSenseAnything @ 146fedc40

bool __thiscall UPawnSensingComponent::CanSenseAnything(UPawnSensingComponent *this)

{
  int iVar1;
  FReadAccessScope local_28;
  
  if (this->bHearNoises != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHearNoise,
               &local_28);
    iVar1 = *(int *)&(this->OnHearNoise).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      return true;
    }
  }
  if (this->bSeePawns != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSeePawn,&local_28)
    ;
    iVar1 = *(int *)&(this->OnSeePawn).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (0 < iVar1) {
      return true;
    }
  }
  return false;
}

// CouldSeePawn @ 146fee140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPawnSensingComponent::CouldSeePawn(UPawnSensingComponent *this,APawn *param_1,bool param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  TRotator<double> *this_00;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double local_98;
  double local_90;
  double local_88;
  TVector<double>_u_0 local_80;
  undefined1 local_68 [16];
  double local_58;
  
  if ((param_1 != (APawn *)0x0) && (this->_padding_ != 0)) {
    lVar1 = param_1->_padding_;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (lVar1 != 0) {
      local_58 = *(double *)(lVar1 + 0x220);
      uVar7 = *(undefined4 *)(lVar1 + 0x210);
      uVar8 = *(undefined4 *)(lVar1 + 0x214);
      uVar9 = *(undefined4 *)(lVar1 + 0x218);
      uVar10 = *(undefined4 *)(lVar1 + 0x21c);
    }
    (**(code **)(this->_padding_ + 0x548))(local_58,&local_98);
    dVar3 = (double)CONCAT44(uVar8,uVar7) - local_98;
    uVar4 = local_58 - local_88;
    dVar2 = (double)CONCAT44(uVar10,uVar9) - local_90;
    dVar6 = dVar2 * dVar2 + dVar3 * dVar3 + (double)uVar4 * (double)uVar4;
    if ((dVar6 <= (double)(this->SightRadius * this->SightRadius)) &&
       ((!param_2 ||
        (uVar5 = rand(),
        (double)((float)(uVar5 & 0x7fff) * (float)(uVar5 & 0x7fff) * __real_30800200) * dVar6 <=
        (double)(this->SightRadius * this->SightRadius * ___real_3e23d70b))))) {
      if (dVar6 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar6) {
          dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
          dVar3 = dVar3 * dVar6;
          dVar2 = dVar2 * dVar6;
          uVar4 = (double)uVar4 * dVar6;
        }
        else {
          dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
          dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      this_00 = (TRotator<double> *)(**(code **)(this->_padding_ + 0x550))(this,local_68);
      UE::Math::TRotator<double>::Vector(this_00,(TVector<double> *)&local_80._s_0);
      return (double)this->PeripheralVisionCosine <=
             dVar2 * local_80._s_0.Y + dVar3 * local_80._s_0.X + (double)uVar4 * local_80._s_0.Z;
    }
  }
  return false;
}

// FHearNoiseDelegate_DelegateWrapper @ 146ff0390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UPawnSensingComponent::FHearNoiseDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APawn *param_2,
          TVector<double> *param_3,float param_4)

{
  APawn *local_38;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  
  local_30 = (param_3->field0_0x0)._s_0.X;
  dStack_28 = (param_3->field0_0x0)._s_0.Y;
  local_20 = (param_3->field0_0x0)._s_0.Z;
  local_38 = param_2;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  return;
}

// FSeePawnDelegate_DelegateWrapper @ 146ff0400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UPawnSensingComponent::FSeePawnDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APawn *param_2)

{
  APawn *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 146ff0cf0

UClass * __cdecl UPawnSensingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PawnSensingComponent",
               &Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton,
               StaticRegisterNativesUPawnSensingComponent,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPawnSensingComponent>,
               InternalVTableHelperCtorCaller<UPawnSensingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton;
}

// GetSensorActor @ 146ff0e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UPawnSensingComponent::GetSensorActor(UPawnSensingComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  
  pAVar3 = (AActor *)this->_padding_;
  if (pAVar3 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar2->_padding_)) && (((uint)pAVar3->_padding_ >> 0x1e & 1) == 0)) {
      pAVar3 = pAVar3[1].PrimaryActorTick.Target;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pAVar3 == (AActor *)0x0) {
          return (AActor *)0x0;
        }
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      if (pAVar3 == (AActor *)0x0) {
        return (AActor *)0x0;
      }
    }
    if (((uint)pAVar3->_padding_ >> 0x1e & 1) == 0) {
      return pAVar3;
    }
  }
  return (AActor *)0x0;
}

// GetSensorController @ 146ff0ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall UPawnSensingComponent::GetSensorController(UPawnSensingComponent *this)

{
  int iVar1;
  AController *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (AController *)this->_padding_;
  if (pAVar2 != (AController *)0x0) {
    pUVar3 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && (((uint)pAVar2->_padding_ >> 0x1e & 1) == 0)) {
      return pAVar2;
    }
    if (pAVar2 != (AController *)0x0) {
      pUVar3 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar3->_padding_)) &&
         ((((uint)pAVar2->_padding_ >> 0x1e & 1) == 0 &&
          ((*(longlong *)&pAVar2->OnPossessedPawnChanged != 0 &&
           ((*(uint *)(*(longlong *)&pAVar2->OnPossessedPawnChanged + 8) >> 0x1e & 1) == 0)))))) {
        return *(AController **)&pAVar2->OnPossessedPawnChanged;
      }
    }
  }
  return (AController *)0x0;
}

// GetSensorLocation @ 146ff0fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UPawnSensingComponent::GetSensorLocation
          (UPawnSensingComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  AActor *pAVar2;
  undefined1 local_28 [32];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pAVar2 = GetSensorActor(this);
  if (pAVar2 != (AActor *)0x0) {
    (**(code **)(pAVar2->_padding_ + 0x720))(pAVar2,__return_storage_ptr__,local_28);
  }
  return __return_storage_ptr__;
}

// GetSensorRotation @ 146ff1010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
UPawnSensingComponent::GetSensorRotation
          (UPawnSensingComponent *this,TRotator<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  double dVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  int iVar7;
  AActor *pAVar8;
  double *pdVar9;
  TObjectPtr<USceneComponent>_u_0 extraout_RAX;
  TObjectPtr<USceneComponent>_u_0 TVar10;
  TRotator<double> *pTVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_48;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  pAVar8 = GetSensorActor(this);
  dVar6 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  uVar12 = SUB84(this,0);
  if (pAVar8 != (AActor *)0x0) {
    TVar10 = (pAVar8->RootComponent).field0_0x0;
    if (TVar10.DebugPtr != (USceneComponent *)0x0) {
      local_28.X._0_4_ = *(undefined4 *)((TVar10.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64;
      local_28.X._4_4_ =
           *(undefined4 *)
            ((longlong)((TVar10.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 4);
      local_28.Y._0_4_ =
           *(undefined4 *)(((TVar10.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 1);
      local_28.Y._4_4_ =
           *(undefined4 *)
            ((longlong)((TVar10.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64 + 0xc);
      local_28.Z._0_4_ = *(undefined4 *)((TVar10.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64;
      local_28.Z._4_4_ =
           *(undefined4 *)
            ((longlong)((TVar10.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 4);
      local_28.W._0_4_ =
           *(undefined4 *)(((TVar10.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 1);
      local_28.W._4_4_ =
           *(undefined4 *)
            ((longlong)((TVar10.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64 + 0xc);
      plVar1 = (longlong *)((longlong)TVar10 + 0x1e0);
      if (*plVar1 == 0) {
        pdVar9 = ::operator_new(0x40);
        dVar2 = UE::Math::TQuat<double>::Identity.Y;
        if (pdVar9 == (double *)0x0) {
          pdVar9 = (double *)0x0;
        }
        else {
          *pdVar9 = UE::Math::TQuat<double>::Identity.X;
          pdVar9[1] = dVar2;
          dVar2 = UE::Math::TQuat<double>::Identity.W;
          pdVar9[2] = UE::Math::TQuat<double>::Identity.Z;
          pdVar9[3] = dVar2;
          dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          pdVar9[4] = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          pdVar9[5] = dVar2;
          pdVar9[6] = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        if (plVar1 != &local_48) {
          pvVar3 = (void *)*plVar1;
          *plVar1 = (longlong)pdVar9;
          pdVar9 = (double *)0x0;
          ::operator_delete(pvVar3,0x40);
        }
        ::operator_delete(pdVar9,0x40);
        uVar12 = SUB84(pdVar9,0);
        TVar10 = extraout_RAX;
      }
      pdVar9 = (double *)*plVar1;
      lVar14 = -(ulonglong)(pdVar9[3] != (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_));
      lVar15 = -(ulonglong)(pdVar9[1] != (double)CONCAT44(local_28.Y._4_4_,local_28.Y._0_4_));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)(pdVar9[2] != (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar13 = movmskpd(uVar12,auVar4);
      auVar5._8_4_ = (int)lVar15;
      auVar5._0_8_ = -(ulonglong)(*pdVar9 != (double)CONCAT44(local_28.X._4_4_,local_28.X._0_4_));
      auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar7 = movmskpd(TVar10._0_4_,auVar5);
      if ((uVar13 & 0x3fffffff) != 0 || iVar7 != 0) {
        *(undefined4 *)pdVar9 = local_28.X._0_4_;
        *(undefined4 *)((longlong)pdVar9 + 4) = local_28.X._4_4_;
        *(undefined4 *)(pdVar9 + 1) = local_28.Y._0_4_;
        *(undefined4 *)((longlong)pdVar9 + 0xc) = local_28.Y._4_4_;
        pdVar9[2] = (double)CONCAT44(local_28.Z._4_4_,local_28.Z._0_4_);
        pdVar9[3] = (double)CONCAT44(local_28.W._4_4_,local_28.W._0_4_);
        pTVar11 = UE::Math::TQuat<double>::Rotator(&local_28,&local_40);
        dVar2 = pTVar11->Yaw;
        pdVar9[4] = pTVar11->Pitch;
        pdVar9[5] = dVar2;
        pdVar9[6] = pTVar11->Roll;
      }
      dVar6 = pdVar9[5];
      dVar2 = pdVar9[6];
      __return_storage_ptr__->Pitch = pdVar9[4];
      __return_storage_ptr__->Yaw = dVar6;
      __return_storage_ptr__->Roll = dVar2;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = dVar6;
  }
  return __return_storage_ptr__;
}

// HasLineOfSightTo @ 146ff12a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPawnSensingComponent::HasLineOfSightTo(UPawnSensingComponent *this,AActor *param_1)

{
  int iVar1;
  undefined1 uVar2;
  UClass *pUVar3;
  longlong *plVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(plVar4[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
LAB_146ff1348:
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar2 = (**(code **)(*plVar4 + 0x7c0))(plVar4,param_1,&local_28,1);
      return (bool)uVar2;
    }
    if (plVar4 != (longlong *)0x0) {
      pUVar3 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((((iVar1 <= *(int *)(plVar4[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) &&
          (((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0 &&
           ((plVar4[0x5e] != 0 && ((*(uint *)(plVar4[0x5e] + 8) >> 0x1e & 1) == 0)))))) &&
         (plVar4 = (longlong *)plVar4[0x5e], plVar4 != (longlong *)0x0)) goto LAB_146ff1348;
    }
  }
  return false;
}

// InitializeComponent @ 146ff1610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::InitializeComponent(UPawnSensingComponent *this)

{
  UActorComponent::InitializeComponent((UActorComponent *)this);
  (**(code **)(this->_padding_ + 0x508))(this,this->PeripheralVisionAngle);
  if (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) != 0) {
    *(uint *)&this->field_0xd4 = *(undefined4 *)&this->field_0xd4 & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x000146ff1652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x500))(this,1);
    return;
  }
  return;
}

// IsNoiseRelevant @ 146ff1730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPawnSensingComponent::IsNoiseRelevant
          (UPawnSensingComponent *this,APawn *param_1,UPawnNoiseEmitterComponent *param_2,
          bool param_3)

{
  UWorld *pUVar1;
  AActor *pAVar2;
  float fVar3;
  
  fVar3 = UPawnNoiseEmitterComponent::GetLastNoiseVolume(param_2,param_3);
  if (0.0 < fVar3) {
    fVar3 = UPawnNoiseEmitterComponent::GetLastNoiseTime(param_2,param_3);
    pUVar1 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar1->TimeSeconds - (double)fVar3 <= (double)this->HearingMaxSoundAge) &&
       (pAVar2 = GetSensorActor(this), pAVar2 != (AActor *)0x0)) {
      return pAVar2->CreationTime <= fVar3;
    }
  }
  return false;
}

// IsSensorActor @ 146ff18a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPawnSensingComponent::IsSensorActor(UPawnSensingComponent *this,AActor *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = GetSensorActor(this);
  return param_1 == pAVar1;
}

// OnTimer @ 146ff23b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::OnTimer(UPawnSensingComponent *this)

{
  int *piVar1;
  AActor *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_Sensing> FVar7;
  UWorld *pUVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar12.Value = 0;
  FVar7 = StatPtr_STAT_AI_Sensing;
  if (StatPtr_STAT_AI_Sensing == (FThreadSafeStaticStat<FStat_STAT_AI_Sensing>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_AI_Sensing");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_Sensing>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sensing,*pFVar6,L"Sensing",
                       "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\PawnSensingComponent.cpp"
                   ,0x83);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146ff250e;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146ff250e:
  this_00 = (AActor *)this->_padding_;
  if ((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    pUVar8 = AActor::GetWorld(this_00);
    if ((pUVar8 != (UWorld *)0x0) && (((uint)pUVar8->_padding_ >> 0x1e & 1) == 0)) {
      cVar5 = (**(code **)(this->_padding_ + 0x518))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x570))(this);
      }
      if (this->bEnableSensingUpdates != 0) {
        (**(code **)(this->_padding_ + 0x568))(this,this->SensingInterval);
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SensePawn @ 146ff32d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPawnSensingComponent::SensePawn(UPawnSensingComponent *this,APawn *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  UPawnNoiseEmitterComponent *this_00;
  code *pcVar5;
  TVector<double>_u_0 *pTVar6;
  float fVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  undefined4 uVar9;
  TVector<double>_u_0 local_28;
  
  if ((((this->bSeePawns != 0) && (cVar3 = (**(code **)(this->_padding_ + 0x520))(), cVar3 != '\0'))
      && (cVar3 = (**(code **)(this->_padding_ + 0x528))(this,param_1,1), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x538))(this,param_1), cVar3 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000146ff3341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x578))(this,param_1);
    return;
  }
  if (this->bHearNoises == 0) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHearNoise,
             (FReadAccessScope *)&local_28._s_0);
  iVar1 = *(int *)&(this->OnHearNoise).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28._s_0);
  if (iVar1 < 1) {
    return;
  }
  this_00 = (UPawnNoiseEmitterComponent *)(**(code **)(param_1->_padding_ + 0x770))(param_1);
  if (this_00 == (UPawnNoiseEmitterComponent *)0x0) {
    return;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x530))(this,param_1);
  if (cVar3 == '\0') {
    return;
  }
  bVar4 = IsNoiseRelevant(this,param_1,this_00,true);
  if (bVar4) {
    pcVar5 = *(code **)(this->_padding_ + 0x540);
    fVar7 = UPawnNoiseEmitterComponent::GetLastNoiseVolume(this_00,true);
    lVar2 = param_1->_padding_;
    if (lVar2 == 0) {
      uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar9 = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar8 = (undefined4)*(undefined8 *)(lVar2 + 0x220);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x220) >> 0x20);
      local_28._0_4_ = *(undefined4 *)(lVar2 + 0x210);
      local_28._4_4_ = *(undefined4 *)(lVar2 + 0x214);
      local_28._8_4_ = *(undefined4 *)(lVar2 + 0x218);
      local_28._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
    }
    local_28._s_0.Z = (double)CONCAT44(uVar9,uVar8);
    cVar3 = (*pcVar5)(this,&local_28,fVar7);
    if (cVar3 != '\0') {
      pcVar5 = *(code **)(this->_padding_ + 0x580);
      fVar7 = UPawnNoiseEmitterComponent::GetLastNoiseVolume(this_00,true);
      lVar2 = param_1->_padding_;
      uVar8 = extraout_XMM0_Db;
      if (lVar2 == 0) {
        local_28._s_0.X =
             (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        local_28._s_0.Y =
             (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        pTVar6 = &local_28;
        local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_28._s_0.X = *(double *)(lVar2 + 0x210);
        local_28._s_0.Y = *(double *)(lVar2 + 0x218);
        pTVar6 = &local_28;
        local_28._s_0.Z = *(double *)(lVar2 + 0x220);
      }
      goto LAB_146ff34f3;
    }
  }
  bVar4 = IsNoiseRelevant(this,param_1,this_00,false);
  if (!bVar4) {
    return;
  }
  pcVar5 = *(code **)(this->_padding_ + 0x540);
  fVar7 = UPawnNoiseEmitterComponent::GetLastNoiseVolume(this_00,false);
  cVar3 = (*pcVar5)(this,&this_00->LastRemoteNoisePosition,fVar7,0);
  if (cVar3 == '\0') {
    return;
  }
  pcVar5 = *(code **)(this->_padding_ + 0x588);
  fVar7 = UPawnNoiseEmitterComponent::GetLastNoiseVolume(this_00,false);
  pTVar6 = &(this_00->LastRemoteNoisePosition).field0_0x0;
  uVar8 = extraout_XMM0_Db_00;
LAB_146ff34f3:
  (*pcVar5)(this,param_1,pTVar6,CONCAT44(uVar8,fVar7));
  return;
}

// SetPeripheralVisionAngle @ 146ff37a0

void __thiscall
UPawnSensingComponent::SetPeripheralVisionAngle(UPawnSensingComponent *this,float param_1)

{
  float fVar1;
  
  this->PeripheralVisionAngle = param_1;
  fVar1 = cosf(param_1 * __real_3c8efa35);
  this->PeripheralVisionCosine = fVar1;
  return;
}

// SetSensingInterval @ 146ff37e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::SetSensingInterval(UPawnSensingComponent *this,float param_1)

{
  float fVar1;
  AActor *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  float fVar3;
  float fVar4;
  FTimerHandle local_res8;
  
  if (param_1 != this->SensingInterval) {
    this->SensingInterval = param_1;
    this_00 = (AActor *)this->_padding_;
    if ((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      if (0.0 < this->SensingInterval) {
        if (this->bEnableSensingUpdates == 0) {
          return;
        }
        this_01 = AActor::GetWorldTimerManager(this_00);
        local_res8.Handle = (this->TimerHandle_OnTimer).Handle;
        pFVar2 = FTimerManager::FindTimer(this_01,&local_res8);
        fVar3 = FTimerManager::InternalGetTimerElapsed(this_01,pFVar2);
        fVar1 = this->SensingInterval;
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        if (fVar1 <= fVar3) {
          fVar4 = __real_38d1b717;
          if (fVar3 <= fVar1) {
            return;
          }
        }
        else {
          fVar4 = fVar1 - fVar3;
        }
      }
      else {
        fVar4 = 0.0;
      }
      (**(code **)(this->_padding_ + 0x568))(this,fVar4);
    }
  }
  return;
}

// SetSensingUpdatesEnabled @ 146ff38b0

void __thiscall
UPawnSensingComponent::SetSensingUpdatesEnabled(UPawnSensingComponent *this,bool param_1)

{
  float fVar1;
  float fVar2;
  
  if (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) != (uint)param_1) {
    fVar2 = 0.0;
    *(uint *)&this->field_0xd4 = *(undefined4 *)&this->field_0xd4 & 0xfffffffe | (uint)param_1;
    if ((param_1) && (fVar1 = this->SensingInterval, 0.0 < fVar1)) {
      fVar2 = FGenericPlatformMath::SRand();
      fVar2 = fVar2 * fVar1 + __real_38d1b717;
    }
    (**(code **)(this->_padding_ + 0x568))(this,fVar2);
  }
  return;
}

// SetTimer @ 146ff3930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::SetTimer(UPawnSensingComponent *this,float param_1)

{
  AActor *this_00;
  ENetMode EVar1;
  UWorld *pUVar2;
  FTimerManager *this_01;
  code *local_28;
  undefined8 uStack_20;
  
  this_00 = (AActor *)this->_padding_;
  if ((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    EVar1 = UEngine::GetNetMode(GEngine,pUVar2);
    if ((int)EVar1 < 3) {
      this_01 = AActor::GetWorldTimerManager(this_00);
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
      local_28 = _vcall__1376__flat______;
      FTimerManager::SetTimer<UPawnSensingComponent>
                (this_01,&this->TimerHandle_OnTimer,this,(pmf_f5bc859b *)&local_28,param_1,false,
                 __real_bf800000);
    }
  }
  return;
}

// ShouldCheckAudibilityOf @ 146ff3ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPawnSensingComponent::ShouldCheckAudibilityOf(UPawnSensingComponent *this,APawn *param_1)

{
  AController *pAVar1;
  bool bVar2;
  
  pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
  if ((pAVar1 == (AController *)0x0) ||
     ((pAVar1->PlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (this->bHearNoises != 0) {
    if (this->bOnlySensePlayers == 0) {
      if (!bVar2) {
        return true;
      }
    }
    else if (!bVar2) {
      return false;
    }
    if (!AAIController::bAIIgnorePlayers) {
      return true;
    }
  }
  return false;
}

// ShouldCheckVisibilityOf @ 146ff3bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPawnSensingComponent::ShouldCheckVisibilityOf(UPawnSensingComponent *this,APawn *param_1)

{
  AController *pAVar1;
  bool bVar2;
  
  pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
  if ((pAVar1 == (AController *)0x0) ||
     ((pAVar1->PlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (this->bSeePawns == 0) {
    return false;
  }
  if (this->bOnlySensePlayers == 0) {
    if (!bVar2) goto LAB_146ff3c30;
  }
  else if (!bVar2) {
    return false;
  }
  if (AAIController::bAIIgnorePlayers) {
    return false;
  }
LAB_146ff3c30:
  if ((char)param_1->_padding_ < '\0') {
    return false;
  }
  return true;
}

// StaticRegisterNativesUPawnSensingComponent @ 146ff3d40

void __cdecl UPawnSensingComponent::StaticRegisterNativesUPawnSensingComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UPawnSensingComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAISensing @ 146ff44d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPawnSensingComponent::UpdateAISensing(UPawnSensingComponent *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  UWorld *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  APawn *pAVar10;
  UClass *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  TActorIteratorBase<TActorIterator<APawn>_> local_68;
  
  pAVar9 = (AActor *)this->_padding_;
  if (((pAVar9 == (AActor *)0x0) || (((uint)pAVar9->_padding_ >> 0x1e & 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Owner)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\PawnSensingComponent.cpp"
                         ,0xd8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar6 = AActor::GetWorld(pAVar9);
  if (((pUVar6 == (UWorld *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Owner->GetWorld())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\PawnSensingComponent.cpp"
                         ,0xd9,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->bOnlySensePlayers == 0) {
    pUVar8 = Z_Construct_UClass_APawn_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pUVar6 = AActor::GetWorld(pAVar9);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar8 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
      }
    }
    local_68.Flags = OnlyActiveLevels|SkipPendingKill;
    local_68.State.bIsSet = false;
    local_res8 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FActorIteratorState::FActorIteratorState
              (&local_68.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&local_res8);
    local_68.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_68);
      if ((local_68.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if ((local_68.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar9 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      pAVar10 = CastChecked<APawn,AActor>(pAVar9);
      cVar5 = (**(code **)(this->_padding_ + 0x510))(this,pAVar10);
      if (cVar5 == '\0') {
        (**(code **)(this->_padding_ + 0x558))(this,pAVar10);
      }
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar6 = AActor::GetWorld(pAVar9);
    UWorld::GetPlayerControllerIterator(pUVar6,&local_78);
    for (; iVar3 = local_78.Index, pTVar2 = local_78.Container, -1 < local_78.Index;
        local_78.Index = local_78.Index + 1) {
      if ((local_78.Container)->ArrayNum <= local_78.Index) {
        return;
      }
      if ((local_78.Index < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if ((pUVar7 != (UObject *)0x0) && ((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) == 0)) {
        pUVar7 = *(UObject **)&pUVar7[0x13].field_0x18;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_146ff461d;
        }
        else if (pUVar7 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar7);
LAB_146ff461d:
          if (((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) == 0) &&
             (cVar5 = (**(code **)(this->_padding_ + 0x510))(this,pUVar7), cVar5 == '\0')) {
            (**(code **)(this->_padding_ + 0x558))(this,pUVar7);
          }
        }
      }
    }
  }
  return;
}

// execGetPeripheralVisionAngle @ 146ff50f0

void __cdecl
UPawnSensingComponent::execGetPeripheralVisionAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[6].field_0x20;
  return;
}

// execGetPeripheralVisionCosine @ 146ff5120

void __cdecl
UPawnSensingComponent::execGetPeripheralVisionCosine(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[6].field_0x24;
  return;
}

// execSetPeripheralVisionAngle @ 146ff5550

void __cdecl
UPawnSensingComponent::execSetPeripheralVisionAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8[0]);
  return;
}

// execSetSensingInterval @ 146ff55e0

void __cdecl
UPawnSensingComponent::execSetSensingInterval(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0]);
  return;
}

// execSetSensingUpdatesEnabled @ 146ff5670

void __cdecl
UPawnSensingComponent::execSetSensingUpdatesEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8[0] != 0);
  return;
}


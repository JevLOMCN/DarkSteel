// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 41

// StaticClass @ 14b400d20

UClass * __cdecl UDS_AbnormalAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalAbilityData",
               &Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalAbilityData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbnormalAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AbnormalAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton;
}

// UDS_AbnormalAbilityData @ 14b406810

UDS_AbnormalAbilityData * __thiscall
UDS_AbnormalAbilityData::UDS_AbnormalAbilityData
          (UDS_AbnormalAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->HighestAbnormalType = None;
  this->_padding_ = (longlong)&___7UDS_AbnormalAbilityData__6B_;
  this->HighestAbnormalEndTime = 0.0;
  this->bIsAddingAbnormality = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AbnormalHeightCurve).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AbnormalAirborneCurve).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->AbnormalInfoMap = 0;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->OnChangedAbnormalInfoEvent = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedHighestAbnormalInfoEvent = 0;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x18 = 2;
  return this;
}

// ~UDS_AbnormalAbilityData @ 14b407bb0

void __thiscall UDS_AbnormalAbilityData::~UDS_AbnormalAbilityData(UDS_AbnormalAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_AbnormalAbilityData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedHighestAbnormalInfoEvent).field_0x8,
             *(int *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedHighestAbnormalInfoEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedHighestAbnormalInfoEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedAbnormalInfoEvent).field_0x8,
             *(int *)&(this->OnChangedAbnormalInfoEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedAbnormalInfoEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedAbnormalInfoEvent);
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AbnormalInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AbnormalInfoMap);
  this->_padding_ = (longlong)&___7UDS_AbilityData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4099c0

UClass * __cdecl UDS_AbnormalAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalAbilityData",
               &Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalAbilityData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbnormalAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AbnormalAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_AbnormalAbilityData @ 14b40add0

void __cdecl UDS_AbnormalAbilityData::StaticRegisterNativesUDS_AbnormalAbilityData(void)

{
  return;
}

// UDS_AbnormalAbilityData @ 14b9d7dc0

UDS_AbnormalAbilityData * __thiscall
UDS_AbnormalAbilityData::UDS_AbnormalAbilityData
          (UDS_AbnormalAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->HighestAbnormalType = None;
  this->_padding_ = (longlong)&___7UDS_AbnormalAbilityData__6B_;
  this->HighestAbnormalEndTime = 0.0;
  this->bIsAddingAbnormality = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->MoveAbnormalStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AbnormalHeightCurve).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AbnormalAirborneCurve).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->AbnormalInfoMap = 0;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbnormalInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbnormalInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->OnChangedAbnormalInfoEvent = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedHighestAbnormalInfoEvent = 0;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedAbnormalInfoEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x18 = 2;
  return this;
}

// AddAbnormalInfo @ 14b9de8b0

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
UDS_AbnormalAbilityData::AddAbnormalInfo(UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  EDS_AbnormalType EVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FDS_SkillAttackTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_SkillAbnormalActionTableRow *pFVar11;
  FDS_SkillAbnormalTableRow *pFVar12;
  FDS_EntityBase *pFVar13;
  TVector<double> *pTVar14;
  FDS_AbnormalInfo *this_00;
  FDS_AbnormalInfo *this_01;
  UDS_MovementCore *this_02;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 auStackY_248 [32];
  uint uVar19;
  wchar_t *pwVar20;
  EDS_AbilityTagType local_1f8 [8];
  FString local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TPairInitializer<EDS_AbnormalType_const_&,FDS_AbnormalInfo_const_&> local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  iVar15 = param_1->AbnormalActionID;
  if (iVar15 == 0) {
    pFVar9 = FDS_SkillAttackTableRow::Get((longlong)param_1->SkillAttackID,true);
    if (pFVar9 == (FDS_SkillAttackTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_AbnormalAbilityData::AddAbnormalInfo",0x28,Yes);
      pwVar20 = L"SkillAttackTableRow is nullptr. SkillAttackID(%d)";
      uVar19 = 0x3d;
      goto LAB_14b9de959;
    }
    iVar15 = pFVar9->ID_AbnormalAction;
  }
  pFVar11 = FDS_SkillAbnormalActionTableRow::Get((longlong)iVar15,true);
  if (pFVar11 == (FDS_SkillAbnormalActionTableRow *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_AbnormalAbilityData::AddAbnormalInfo",0x28,Yes);
    pwVar20 = L"AbnormalActionTableRow is nullptr. AbnormalID(%d)";
    uVar19 = 0x47;
LAB_14b9de959:
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_188.Ptr,uVar19,pwVar20);
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    return;
  }
  pFVar12 = FDS_SkillAbnormalTableRow::Get((ulonglong)pFVar11->AbnormalType,true);
  if (pFVar12 == (FDS_SkillAbnormalTableRow *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    EVar4 = pFVar11->AbnormalType;
    ::FString::FString((FString *)&local_1b8._s_0,L"EDS_AbnormalType");
    DS_Util::GetEnumToString((FString *)&local_1d8._s_0,(FString *)&local_1b8._s_0,(ulonglong)EVar4)
    ;
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_AbnormalAbilityData::AddAbnormalInfo",0x28,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_188.Ptr,0x4e,
               L"AbnormalTableRow is nullptr. EDS_AbnormalType::%s");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    if ((wchar_t *)local_1d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_1d8._s_0.X);
    }
    if ((void *)local_1b8._s_0.X == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1b8._s_0.X);
    return;
  }
  local_1f0.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  pFVar13 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_1f0);
  if (pFVar13 == (FDS_EntityBase *)0x0) {
    return;
  }
  this->bIsAddingAbnormality = true;
  fVar1 = pFVar13->ScaledCapsuleHalfHeight;
  param_1->AbnormalActionID = iVar15;
  param_1->AbnormalGroup = pFVar12->AbnormalGroup;
  param_1->ActionGrade = pFVar12->ActionGrade;
  param_1->AbnormalType = pFVar11->AbnormalType;
  param_1->AbnormalValue = (int)pFVar11->AbnormalValue;
  param_1->AbnormalHeight = (int)pFVar11->AbnormalHeight;
  param_1->AbnormalTime = pFVar11->AbnormalTime;
  param_1->AbnormalMoveTime = pFVar11->AbnormalMoveTime;
  param_1->AbnormalWaitTime = pFVar11->AbnormalWaitTime;
  param_1->AbnormalGetupTime = pFVar11->AbnormalGetUpTime;
  param_1->IsAbnormalRotation = pFVar11->IsAbnormalRotation;
  ::FString::operator=(&param_1->AtkAttachSocket,&pFVar11->AtkAttachSocket);
  ::FString::operator=(&param_1->DefAttachSocket,&pFVar11->DefAttachSocket);
  param_1->CameraShakeID = pFVar11->CameraShake;
  param_1->bIsSkillUseUncancel = pFVar11->IsSkillUseUncancel;
  param_1->ID_HeightCondition = pFVar11->ID_HeightCondition;
  param_1->IsDeadAbnormalCheck = pFVar12->IsDeadAbnormalCheck;
  UDS_TimeUtilManager::GetCurrentServerTime();
  dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
  uVar16 = SUB84(dVar5,0);
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  param_1->AbnormalEndTime = (double)pFVar11->AbnormalTime + dVar5;
  param_1->AbnormalMoveEndTime =
       (double)pFVar11->AbnormalWaitTime + dVar5 + (double)pFVar11->AbnormalMoveTime;
  GetAbnormalDestination(this,(TVector<double> *)&local_1d8._s_0,param_1,pFVar11);
  local_1b8._s_0.X = local_1d8._s_0.X;
  local_1b8._s_0.Y = local_1d8._s_0.Y;
  local_1b8._s_0.Z = local_1d8._s_0.Z;
  pTVar14 = DS_Util::GetNPCFloorLocationByLocation
                      ((TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1b8._s_0,
                       __real_43160000,false);
  dVar6 = __real_3f1a36e2e0000000;
  dVar3 = (pTVar14->field0_0x0)._s_0.Y;
  (param_1->AbnormalClientDestination).field0_0x0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  (param_1->AbnormalClientDestination).field0_0x0._s_0.Y = dVar3;
  (param_1->AbnormalClientDestination).field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&(param_1->AbnormalDestination).field0_0x0;
  uVar19 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar18,uVar19) < dVar6 || (double)CONCAT44(uVar18,uVar19) == dVar6) &&
      (uVar2 = *(undefined8 *)((longlong)&(param_1->AbnormalDestination).field0_0x0 + 8),
      uVar19 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar18 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar18,uVar19) < dVar6 || (double)CONCAT44(uVar18,uVar19) == dVar6)) &&
     (uVar2 = *(undefined8 *)((longlong)&(param_1->AbnormalDestination).field0_0x0 + 0x10),
     uVar19 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar18 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar18,uVar19) < dVar6 || (double)CONCAT44(uVar18,uVar19) == dVar6)) {
    dVar6 = (param_1->AbnormalClientDestination).field0_0x0._s_0.Y;
    dVar3 = (param_1->AbnormalClientDestination).field0_0x0._s_0.Z;
    (param_1->AbnormalDestination).field0_0x0._s_0.X =
         (param_1->AbnormalClientDestination).field0_0x0._s_0.X;
    (param_1->AbnormalDestination).field0_0x0._s_0.Y = dVar6;
    (param_1->AbnormalDestination).field0_0x0._s_0.Z = dVar3;
  }
  local_1d8._s_0.X = (param_1->AbnormalDestination).field0_0x0._s_0.X;
  local_1d8._s_0.Y = (param_1->AbnormalDestination).field0_0x0._s_0.Y;
  dVar3 = (double)fVar1;
  local_1d8._s_0.Z = dVar3 + (param_1->AbnormalDestination).field0_0x0._s_0.Z;
  pTVar14 = DS_Util::GetNPCFloorLocationByLocation
                      ((TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_1d8._s_0,
                       __real_43160000,false);
  dVar6 = (pTVar14->field0_0x0)._s_0.Y;
  dVar7 = (pTVar14->field0_0x0)._s_0.Z;
  (param_1->AbnormalDestinationFloor).field0_0x0._s_0.X = dVar3 + (pTVar14->field0_0x0)._s_0.X;
  (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Y = dVar3 + dVar6;
  (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Z = dVar3 + dVar7;
  if ((param_1->AbnormalGroup == MoveControl) || (param_1->AbnormalGroup == NonStateMoveControl)) {
    this_01 = GetHighestAbnormalInfo(this,MoveControl);
    bVar8 = FDS_AbnormalInfo::IsValid(this_01);
    if (!bVar8) goto LAB_14b9dedce;
    if (param_1->ActionGrade < this_01->ActionGrade) {
      EVar4 = this_01->AbnormalType;
      ::FString::FString(&local_1f0,L"EDS_AbnormalType");
      DS_Util::GetEnumToString((FString *)&local_198,&local_1f0,(ulonglong)EVar4);
      if ((FWeakObjectPtr)local_1f0.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      EVar4 = param_1->AbnormalType;
      ::FString::FString(&local_1f0,L"EDS_AbnormalType");
      DS_Util::GetEnumToString((FString *)&local_1b8._s_0,&local_1f0,(ulonglong)EVar4);
      if ((FWeakObjectPtr)local_1f0.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_188._padding_ = 0;
        local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)L"";
        if (local_1b8._8_4_ != 0) {
          local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1b8._s_0.X;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_AbnormalAbilityData::AddAbnormalInfo",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_188.Ptr,0xa3,
                   L"AbnormalType(%s(%d)) is lower than AbnormalType(%s(%d))");
        if ((void *)local_188._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_188._padding_);
        }
      }
      RemoveAbnormalInfoByType(this,&this_01->AbnormalType);
      if ((wchar_t *)local_1b8._s_0.X != (wchar_t *)0x0) {
        FMemory::Free((void *)local_1b8._s_0.X);
      }
      if (local_198.Key == (EDS_AbnormalType *)0x0) {
        return;
      }
      FMemory::Free(local_198.Key);
      return;
    }
  }
  else {
    this_00 = GetAbnormalInfo(this,param_1->AbnormalType);
    bVar8 = FDS_AbnormalInfo::IsValid(this_00);
    if (!bVar8) goto LAB_14b9dedce;
    if (0.0 < dVar5) {
      dVar5 = param_1->AbnormalEndTime - dVar5;
    }
    else {
      dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar5 = param_1->AbnormalEndTime - dVar5;
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    this_01 = param_1;
    if (dVar5 <= this_00->AbnormalEndTime - (double)CONCAT44(uVar17,uVar16)) goto LAB_14b9dedce;
  }
  RemoveAbnormalInfoByType(this,&this_01->AbnormalType);
LAB_14b9dedce:
  if (param_1->AbnormalActionID == 0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_AbnormalAbilityData::EmplaceAbnormalInfo",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_188.Ptr,0xf2,L"InAbnormalInfo is invalid");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else {
    local_1b8._s_0.X = (double)UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    pFVar13 = FDS_EntityBase::GetEntityBase((ulong64 *)local_1b8.XYZ);
    if (pFVar13 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar13->_padding_ + 0x78))(pFVar13,&local_1f0);
      bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1f0);
      if (bVar8) {
        this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1f0);
        pTVar14 = UDS_MovementCore::GetActorLocation(this_02,(TVector<double> *)&local_1d8._s_0);
        dVar5 = (pTVar14->field0_0x0)._s_0.Y;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Y = dVar5;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
        local_1d8._s_0.X = (double)param_1;
        local_1d8._s_0.Y = (double)param_1;
        TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_AbnormalType_const_&,FDS_AbnormalInfo_const_&>_>
                  (&this->AbnormalInfoMap,&local_198,(bool *)&local_1d8);
        local_198.Key = (EDS_AbnormalType *)0x0;
        local_1f8[0] = Abnormal_Process;
        FDS_EntityBase::TryActivateAbility
                  (pFVar13,local_1f8,(TObjectPtr<UWN_AbilityContext>)&local_198);
        TMulticastDelegate<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnChangedAbnormalInfoEvent,param_1,true);
        RefreshHighestAbnormalInfo(this);
      }
    }
  }
  this->bIsAddingAbnormality = false;
  return;
}

// Created @ 14b9e61a0

void __thiscall UDS_AbnormalAbilityData::Created(UDS_AbnormalAbilityData *this)

{
  return;
}

// Deleted @ 14b9e6cd0

void __thiscall UDS_AbnormalAbilityData::Deleted(UDS_AbnormalAbilityData *this)

{
  return;
}

// EmplaceAbnormalInfo @ 14b9e86a0

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
UDS_AbnormalAbilityData::EmplaceAbnormalInfo
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar4;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityTagType local_178 [8];
  TPairInitializer<EDS_AbnormalType_const_&,FDS_AbnormalInfo_const_&> local_170;
  ulong64 local_160;
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1->AbnormalActionID == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalAbilityData::EmplaceAbnormalInfo",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xf2,L"InAbnormalInfo is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_160 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    this_00 = FDS_EntityBase::GetEntityBase(&local_160);
    if (this_00 != (FDS_EntityBase *)0x0) {
      (**(code **)(this_00->_padding_ + 0x78))(this_00,&local_170.Value);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_170.Value);
      if (bVar2) {
        this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_170.Value);
        pTVar4 = UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_158._s_0);
        dVar1 = (pTVar4->field0_0x0)._s_0.Y;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Y = dVar1;
        (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
        local_158._s_0.X = (double)param_1;
        local_158._s_0.Y = (double)param_1;
        TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_AbnormalType_const_&,FDS_AbnormalInfo_const_&>_>
                  (&this->AbnormalInfoMap,&local_170,(bool *)&local_158);
        local_170.Key = (EDS_AbnormalType *)0x0;
        local_178[0] = Abnormal_Process;
        FDS_EntityBase::TryActivateAbility
                  (this_00,local_178,(TObjectPtr<UWN_AbilityContext>)&local_170);
        TMulticastDelegate<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnChangedAbnormalInfoEvent,param_1,true);
        RefreshHighestAbnormalInfo(this);
      }
    }
  }
  return;
}

// GetAbnormalDestination @ 14b9ebe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

TVector<double> * __thiscall
UDS_AbnormalAbilityData::GetAbnormalDestination
          (UDS_AbnormalAbilityData *this,TVector<double> *__return_storage_ptr__,
          FDS_AbnormalInfo *param_1,FDS_SkillAbnormalActionTableRow *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  FDS_EntityBase *pFVar5;
  UDS_MovementCore *pUVar6;
  TVector<double> *pTVar7;
  UDS_LogManager *pUVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_238 [32];
  uint uVar21;
  FWeakObjectPtr local_1f8;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  TVector<double>_u_0 local_1e0;
  undefined8 local_1b8;
  TVector<double> local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = FDS_EntityBase::GetEntityBase(&param_1->AttackerEntityID);
  local_1f8 = (FWeakObjectPtr)UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_1f8);
  if ((pFVar4 == (FDS_EntityBase *)0x0) || (pFVar5 == (FDS_EntityBase *)0x0)) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14b9ec1e7;
    pUVar8 = UDS_LogManager::GetInst();
    UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_AbnormalAbilityData::GetAbnormalDestination",0x2f,Yes);
    uVar21 = 0x1f1;
  }
  else {
    (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4,&local_1f0);
    (**(code **)(pFVar5->_padding_ + 0x78))(pFVar5,&local_1e8);
    bVar3 = FWeakObjectPtr::IsValid(&local_1f0);
    if ((bVar3) &&
       (bVar3 = FWeakObjectPtr::IsValid(&local_1e8),
       uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, bVar3)) {
      uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar18 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1e8);
      UDS_MovementCore::GetActorLocation(pUVar6,(TVector<double> *)&local_1e0._s_0);
      if (param_2->AbnormalDirection != Radial) goto LAB_14b9ebffd;
      pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1f0);
      pTVar7 = UDS_MovementCore::GetActorLocation(pUVar6,&local_1b0);
      dVar17 = local_1e0._s_0.X - (pTVar7->field0_0x0)._s_0.X;
      uVar2 = local_1e0._s_0.Y - (pTVar7->field0_0x0)._s_0.Y;
      dVar16 = local_1e0._s_0.Z - (pTVar7->field0_0x0)._s_0.Z;
      dVar15 = (double)uVar2 * (double)uVar2 + dVar17 * dVar17 + dVar16 * dVar16;
      if (dVar15 == __real_3ff0000000000000) {
LAB_14b9ebfe9:
        uVar21 = SUB84(dVar17,0);
        uVar18 = (uint)((ulonglong)dVar17 >> 0x20);
        uVar9 = SUB84(dVar16,0);
        uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
        local_1b0.field0_0x0._s_0.Z = dVar16;
      }
      else {
        if (__real_3e45798ee0000000 <= dVar15) {
          local_1f8 = (FWeakObjectPtr)(__real_3ff0000000000000 / SQRT(dVar15));
          dVar17 = dVar17 * (double)local_1f8;
          uVar2 = (double)uVar2 * (double)local_1f8;
          dVar16 = dVar16 * (double)local_1f8;
          goto LAB_14b9ebfe9;
        }
        uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar18 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar9 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar11 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      local_1b8 = CONCAT44(uVar11,uVar9);
LAB_14b9ebffd:
      uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)local_1b8;
      uVar20 = (uint)((ulonglong)local_1b8 >> 0x20);
      if (((((double)CONCAT44(uVar18 & uVar14,uVar21 & uVar13) < __real_3f1a36e2e0000000 ||
             (double)CONCAT44(uVar18 & uVar14,uVar21 & uVar13) == __real_3f1a36e2e0000000) &&
           (uVar10 = (uint)uVar2 & uVar13, uVar12 = (uint)((ulonglong)uVar2 >> 0x20) & uVar14,
           (double)CONCAT44(uVar12,uVar10) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar12,uVar10) == __real_3f1a36e2e0000000)) &&
          ((double)CONCAT44(uVar20 & uVar14,uVar19 & uVar13) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar20 & uVar14,uVar19 & uVar13) == __real_3f1a36e2e0000000)) ||
         (param_2->AbnormalDirection == Direct)) {
        (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,&local_1f8);
        bVar3 = FWeakObjectPtr::IsValid(&local_1f8);
        if (bVar3) {
          pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1f0);
          pTVar7 = UDS_MovementCore::GetActorForwardVector(pUVar6,&local_1b0);
          auVar1 = *(undefined1 (*) [16])&pTVar7->field0_0x0;
          uVar21 = auVar1._0_4_;
          uVar18 = auVar1._4_4_;
          uVar2 = *(undefined8 *)((longlong)&pTVar7->field0_0x0 + 0x10);
          uVar19 = (uint)uVar2;
          uVar20 = (uint)((ulonglong)uVar2 >> 0x20);
          uVar2 = auVar1._8_8_;
        }
      }
      dVar15 = param_2->AbnormalValue;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar15 * (double)CONCAT44(uVar18,uVar21) + local_1e0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15 * (double)uVar2 + local_1e0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           dVar15 * (double)CONCAT44(uVar20,uVar19) + local_1e0._s_0.Z;
      return __return_storage_ptr__;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14b9ec1e7;
    pUVar8 = UDS_LogManager::GetInst();
    UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"UDS_AbnormalAbilityData::GetAbnormalDestination",0x2f,Yes);
    uVar21 = 0x1fa;
  }
  UDS_LogManager::PrintLog
            (pUVar8,1,Warning,local_198.Ptr,uVar21,
             L"attackerEntity or targetEntity is nullptr. AttackerEntityID(%d), TargetEntityID(%d)")
  ;
  if ((void *)local_198._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_198._padding_);
  }
LAB_14b9ec1e7:
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetAbnormalEntityHeight @ 14b9ec230

int __thiscall
UDS_AbnormalAbilityData::GetAbnormalEntityHeight
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1,TVector<double> *param_2)

{
  bool bVar1;
  int iVar2;
  UCurveFloat *this_00;
  float fVar3;
  double dVar4;
  float fVar5;
  FWeakObjectPtr local_res8;
  
  GetHeightCurve(this,(FDS_AbnormalInfo *)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    bVar1 = FDS_AbnormalInfo::IsValid(param_1);
    if ((bVar1) && (0.0 < param_1->AbnormalMoveTime)) {
      dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
      fVar5 = (param_1->AbnormalMoveTime - (float)(param_1->AbnormalMoveEndTime - dVar4)) /
              param_1->AbnormalMoveTime;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&local_res8);
      fVar3 = UCurveFloat::GetFloatValue(this_00,fVar5);
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= __real_3c23d70a) {
        fVar3 = __real_3c23d70a;
      }
      iVar2 = (int)((float)param_1->AbnormalHeight * fVar3 -
                   (float)((this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z -
                          (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Z) * fVar5);
      goto LAB_14b9ec31d;
    }
  }
  iVar2 = param_1->AbnormalHeight;
LAB_14b9ec31d:
  return (int)((double)iVar2 + (this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z);
}

// GetAbnormalHeight @ 14b9ec350

int __thiscall
UDS_AbnormalAbilityData::GetAbnormalHeight
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1,TVector<double> *param_2)

{
  bool bVar1;
  UCurveFloat *this_00;
  float fVar2;
  double dVar3;
  float fVar4;
  FWeakObjectPtr local_res20;
  
  GetHeightCurve(this,(FDS_AbnormalInfo *)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    bVar1 = FDS_AbnormalInfo::IsValid(param_1);
    if ((bVar1) && (0.0 < param_1->AbnormalMoveTime)) {
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      fVar4 = (param_1->AbnormalMoveTime - (float)(param_1->AbnormalMoveEndTime - dVar3)) /
              param_1->AbnormalMoveTime;
      if (__real_3f800000 <= fVar4) {
        fVar4 = __real_3f800000;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&local_res20);
      fVar2 = UCurveFloat::GetFloatValue(this_00,fVar4);
      if (__real_3f800000 <= fVar2) {
        fVar2 = __real_3f800000;
      }
      if (fVar2 <= __real_3c23d70a) {
        fVar2 = __real_3c23d70a;
      }
      return (int)((float)param_1->AbnormalHeight * fVar2 -
                  (float)((this->MoveAbnormalStartActorLocation).field0_0x0._s_0.Z -
                         (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Z) * fVar4);
    }
  }
  return param_1->AbnormalHeight;
}

// GetAbnormalInfo @ 14b9ec460

FDS_AbnormalInfo * __thiscall
UDS_AbnormalAbilityData::GetAbnormalInfo(UDS_AbnormalAbilityData *this,EDS_AbnormalType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_AbnormalInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->AbnormalInfoMap).field_0x8 != *(int *)&(this->AbnormalInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AbnormalInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->AbnormalInfoMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->AbnormalInfoMap;
      do {
        if (*(EDS_AbnormalType *)((longlong)iVar2 * 0xe0 + lVar1) == param_1) {
          pFVar3 = TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
                   ::FindChecked(&this->AbnormalInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xe0 + 0xd8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return &EmptyInfo;
}

// GetAbnormalInfoBySkillAttackID @ 14b9ec4e0

FDS_AbnormalInfo * __thiscall
UDS_AbnormalAbilityData::GetAbnormalInfoBySkillAttackID(UDS_AbnormalAbilityData *this,int *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDS_AbnormalInfo *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->AbnormalInfoMap).field_0x10;
  iVar3 = *(int *)&(this->AbnormalInfoMap).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14b9ec58d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b9ec58d:
  uVar11 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AbnormalInfoMap).field_0x8 -
                       *(int *)&(this->AbnormalInfoMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FDS_AbnormalInfo *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14b9ec690;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14b9ec690:
  while( true ) {
    if (*(int *)&(this->AbnormalInfoMap).field_0x8 - *(int *)&(this->AbnormalInfoMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)&this->AbnormalInfoMap;
    if (*(int *)(lVar9 + 0x18) == *param_1) {
      return (FDS_AbnormalInfo *)(lVar9 + 8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return &EmptyInfo;
}

// GetAbnormalInfoBySkillAttackID @ 14b9ec710

FDS_AbnormalInfo * __cdecl
UDS_AbnormalAbilityData::GetAbnormalInfoBySkillAttackID(ulong64 param_1,int *param_2)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this;
  FDS_AbnormalInfo *pFVar2;
  ulong64 local_res8 [2];
  undefined1 local_res18;
  FWeakObjectPtr local_res20;
  
  local_res18 = 0x30;
  local_res8[0] = param_1;
  UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
            ((ulong64 *)&local_res20,(EDS_AbilityTagType *)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return &EmptyInfo;
  }
  this = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res20);
  pFVar2 = GetAbnormalInfoBySkillAttackID(this,param_2);
  return pFVar2;
}

// GetCurTime @ 14b9eea00

double __thiscall UDS_AbnormalAbilityData::GetCurTime(UDS_AbnormalAbilityData *this)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  FDS_TimeInfo *pFVar4;
  longlong lStackX_8;
  FDateTime aFStackX_10 [3];
  FDS_TimeInfo FStack_38;
  
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar3) {
    bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar3) {
      pFVar4 = UDS_TimeData::GetTime(&FStack_38,NTPTime);
      lVar2 = (pFVar4->ChronoTime)._MyDur._MyRep;
      dVar1 = pFVar4->Time;
      std::chrono::steady_clock::now();
      return ((double)(lStackX_8 - lVar2) * __real_3e112e0be826d695 + dVar1) -
             UDS_TimeUtilManager::DiffServerTime;
    }
  }
  FDateTime::UtcNow();
  FDateTime::FDateTime(aFStackX_10,0x7b2,1,1,0,0,0,0);
  return (double)(lStackX_8 - aFStackX_10[0].Ticks) * __real_3e7ad7f29abcaf48 -
         UDS_TimeUtilManager::DiffServerTime;
}

// GetElapsedTime @ 14b9efba0

double __thiscall
UDS_AbnormalAbilityData::GetElapsedTime(UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 - param_1->AbnormalStartTime;
}

// GetHeightCurve @ 14b9f0470

TWeakObjectPtr<UCurveFloat,FWeakObjectPtr> __thiscall
UDS_AbnormalAbilityData::GetHeightCurve(UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  bool bVar1;
  FWeakObjectPtr FVar2;
  char *in_R8;
  FName local_res10;
  UCurveFloat *local_res18 [2];
  
  param_1->AbnormalType = None;
  param_1->AbnormalGroup = None;
  *(undefined6 *)&param_1->field_0x2 = 0;
  if (0.0 < (float)*(int *)(in_R8 + 0x1c)) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalHeightCurve).WeakPtr);
    if (!bVar1) {
      ::FName::FName(&local_res10,L"/Game/Datas/Curve/AbnormalHeight");
      local_res18[0] = DS_Util::LoadObjFromPath<UCurveFloat>(&local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18[0] != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18[0]);
      }
      FWeakObjectPtr::operator=(&(this->AbnormalHeightCurve).WeakPtr,(FObjectPtr)local_res18);
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAirborneCurve).WeakPtr);
    if (!bVar1) {
      ::FName::FName(&local_res10,L"/Game/Datas/Curve/AbnormalAirborne");
      local_res18[0] = DS_Util::LoadObjFromPath<UCurveFloat>(&local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18[0] != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18[0]);
      }
      FWeakObjectPtr::operator=(&(this->AbnormalAirborneCurve).WeakPtr,(FObjectPtr)local_res18);
    }
    if (*in_R8 == '\x1e') {
      FVar2 = (this->AbnormalAirborneCurve).WeakPtr;
    }
    else {
      FVar2 = (this->AbnormalHeightCurve).WeakPtr;
    }
    *(FWeakObjectPtr *)param_1 = FVar2;
  }
  return (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetHighestAbnormalInfo @ 14b9f0580

FDS_AbnormalInfo * __thiscall
UDS_AbnormalAbilityData::GetHighestAbnormalInfo
          (UDS_AbnormalAbilityData *this,EDS_AbnormalGroup param_1)

{
  TMap<EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  *this_00;
  ulonglong uVar1;
  char cVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FDS_AbnormalInfo *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  EDS_AbnormalType EVar18;
  int iVar19;
  uint uVar20;
  UDS_AbnormalAbilityData *local_res8;
  uint local_res18;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar19 = 0;
  this_00 = &this->AbnormalInfoMap;
  EVar18 = None;
  iVar8 = *(int *)&(this->AbnormalInfoMap).field_0x28;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AbnormalInfoMap).field_0x10;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_78.Array;
    }
    uVar20 = *puVar17;
    iVar16 = 0;
    while (uVar20 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14b9f063f;
      uVar20 = puVar17[lVar10 + 1];
    }
    uVar6 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = iVar16 + -1 + (int)lVar10;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14b9f063f:
  puVar11 = &(this->AbnormalInfoMap).field_0x10;
  local_res18 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  TStack_78.CurrentBitIndex = iVar7;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  uVar20 = local_res18 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar6,iVar14);
  iVar14 = (int)local_res18 >> 5;
  TStack_78._28_4_ = iVar7;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(this->AbnormalInfoMap).field_0x8 -
                       *(int *)&(this->AbnormalInfoMap).field_0x34);
  local_res8 = this;
  if ((((int)local_res18 < 0) || (iVar8 < (int)local_res18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FDS_AbnormalInfo *)(*pcVar3)();
    return pFVar9;
  }
  uVar6 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  if (local_res18 != uVar6) {
    puVar15 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar11;
    }
    uVar13 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      local_res18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14b9f0770;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10 + -1 + uVar20;
    if ((int)uVar6 < (int)local_res18) {
      local_res18 = uVar6;
    }
  }
LAB_14b9f0770:
  do {
    if (*(int *)&(this->AbnormalInfoMap).field_0x8 - *(int *)&(this->AbnormalInfoMap).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((TStack_78.CurrentBitIndex == local_res18) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) {
      if (*(int *)&(this->AbnormalInfoMap).field_0x8 != *(int *)&(this->AbnormalInfoMap).field_0x34)
      {
        puVar11 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x40;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &(this->AbnormalInfoMap).field_0x38;
        }
        iVar8 = *(int *)(puVar11 +
                        ((ulonglong)(*(int *)&(this->AbnormalInfoMap).field_0x48 - 1) &
                        (ulonglong)EVar18) * 4);
        if (iVar8 != -1) {
          do {
            if (*(EDS_AbnormalType *)((longlong)iVar8 * 0xe0 + *(longlong *)this_00) == EVar18) {
              pFVar9 = TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
                       ::FindChecked(this_00,EVar18);
              return pFVar9;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0xe0 + 0xd8 + *(longlong *)this_00);
          } while (iVar8 != -1);
        }
      }
      return &EmptyInfo;
    }
    lVar10 = *(longlong *)this_00;
    lVar12 = (longlong)TStack_78.CurrentBitIndex * 0xe0;
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    if (0.0 < *(double *)(lVar12 + 0x40 + lVar10) - dVar4) {
      if (param_1 != None) {
        if ((byte)(param_1 - MoveControl) < 2) {
          cVar2 = *(char *)(lVar12 + 9 + lVar10);
          if (cVar2 == '\x02') goto LAB_14b9f07e0;
          bVar5 = cVar2 == '\x03';
        }
        else {
          bVar5 = *(EDS_AbnormalGroup *)(lVar12 + 9 + lVar10) == param_1;
        }
        if (!bVar5) goto LAB_14b9f07f1;
      }
LAB_14b9f07e0:
      iVar8 = *(int *)(lVar12 + 0x20 + lVar10);
      if (iVar19 < iVar8) {
        EVar18 = *(EDS_AbnormalType *)(lVar12 + lVar10);
        iVar19 = iVar8;
      }
    }
LAB_14b9f07f1:
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// GetMoveRemainTime @ 14b9f0d60

double __thiscall
UDS_AbnormalAbilityData::GetMoveRemainTime
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1,double param_2)

{
  if (param_2 <= 0.0) {
    param_2 = UDS_TimeUtilManager::GetCurrentServerTime();
  }
  return param_1->AbnormalMoveEndTime - param_2;
}

// GetRemainTime @ 14b9f1280

double __thiscall
UDS_AbnormalAbilityData::GetRemainTime
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1,double param_2)

{
  if (param_2 <= 0.0) {
    param_2 = UDS_TimeUtilManager::GetCurrentServerTime();
  }
  return param_1->AbnormalEndTime - param_2;
}

// HasAbnormalInfo @ 14b9f2ad0

bool __thiscall
UDS_AbnormalAbilityData::HasAbnormalInfo(UDS_AbnormalAbilityData *this,EDS_AbnormalGroup *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FDS_AbnormalInfo *this_00;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->AbnormalInfoMap).field_0x10;
  iVar3 = *(int *)&(this->AbnormalInfoMap).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14b9f2b7d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14b9f2b7d:
  uVar11 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AbnormalInfoMap).field_0x8 -
                       *(int *)&(this->AbnormalInfoMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14b9f2c80;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14b9f2c80:
  while( true ) {
    if (*(int *)&(this->AbnormalInfoMap).field_0x8 - *(int *)&(this->AbnormalInfoMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (FDS_AbnormalInfo *)
              ((longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)&this->AbnormalInfoMap + 8)
    ;
    if ((this_00->AbnormalGroup == *param_1) && (bVar5 = FDS_AbnormalInfo::IsValid(this_00), bVar5))
    {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// HasAbnormalInfo @ 14b9f2d10

bool __thiscall
UDS_AbnormalAbilityData::HasAbnormalInfo(UDS_AbnormalAbilityData *this,EDS_AbnormalType *param_1)

{
  bool bVar1;
  FDS_AbnormalInfo *this_00;
  
  this_00 = GetAbnormalInfo(this,*param_1);
  bVar1 = FDS_AbnormalInfo::IsValid(this_00);
  return bVar1;
}

// HasAbnormalInfoByID @ 14b9f2d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_AbnormalAbilityData::HasAbnormalInfoByID(UDS_AbnormalAbilityData *this,int param_1)

{
  bool bVar1;
  FDS_SkillAbnormalActionTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_AbnormalInfo *this_00;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_SkillAbnormalActionTableRow::Get((longlong)param_1,true);
  if (pFVar2 == (FDS_SkillAbnormalActionTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalAbilityData::HasAbnormalInfoByID",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x252,
                 L"AbnormalActionTableRow is nullptr. AbnormalID(%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    this_00 = GetAbnormalInfo(this,pFVar2->AbnormalType);
    bVar1 = FDS_AbnormalInfo::IsValid(this_00);
  }
  return bVar1;
}

// HasHeightCurve @ 14b9f3190

bool __thiscall
UDS_AbnormalAbilityData::HasHeightCurve(UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  GetHeightCurve(this,(FDS_AbnormalInfo *)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  return bVar1;
}

// HasHeightMove @ 14b9f31c0

bool __thiscall
UDS_AbnormalAbilityData::HasHeightMove(UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  if (param_1->ID_HeightCondition < 1) {
    uVar2 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    bVar1 = UDS_SyncRecvComponent::HasHeightMoveData(uVar2);
    return bVar1;
  }
  return true;
}

// HasSkillUseUncancel @ 14b9f34f0

bool __thiscall UDS_AbnormalAbilityData::HasSkillUseUncancel(UDS_AbnormalAbilityData *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  TMap<EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_78,
             (TSet<TTuple<EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
              *)&this->AbnormalInfoMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_68;
  local_48 = local_78;
  auStack_40._0_8_ = lStack_70;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uVar3 = local_68._8_8_ >> 0x20;
  local_18 = &this->AbnormalInfoMap;
  if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
    do {
      if (*(char *)((longlong)(int)uVar3 * 0xe0 + 0xd0 + *local_48) == '\x01') {
        if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
          uVar4 = *(int *)(&local_18->field_0x0 + 8) - *(int *)(&local_18->field_0x0 + 0x34);
          if (uVar4 < 4) {
            iVar2 = 1;
          }
          else {
            uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar2 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((0 < (int)uVar4) && (*(int *)&local_18->field_0x48 < iVar2)) ||
             (iVar2 < *(int *)&local_18->field_0x48)) {
            *(int *)&local_18->field_0x48 = iVar2;
            TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_18);
          }
        }
        return true;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)(&local_18->field_0x0 + 8) - *(int *)(&local_18->field_0x0 + 0x34);
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (*(int *)&local_18->field_0x48 < iVar2)) ||
         (iVar2 < *(int *)&local_18->field_0x48)) {
        *(int *)&local_18->field_0x48 = iVar2;
        TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return false;
}

// IsAbnormalState @ 14b9f8f80

bool __thiscall UDS_AbnormalAbilityData::IsAbnormalState(UDS_AbnormalAbilityData *this)

{
  return 0 < *(int *)&(this->AbnormalInfoMap).field_0x8 -
             *(int *)&(this->AbnormalInfoMap).field_0x34;
}

// IsAddingAbnormality @ 14b9f8fa0

bool __thiscall UDS_AbnormalAbilityData::IsAddingAbnormality(UDS_AbnormalAbilityData *this)

{
  return this->bIsAddingAbnormality;
}

// IsEnoughRemainTime @ 14b9f92e0

bool __thiscall
UDS_AbnormalAbilityData::IsEnoughRemainTime(UDS_AbnormalAbilityData *this,EDS_AbnormalType *param_1)

{
  bool bVar1;
  FDS_AbnormalInfo *this_00;
  double dVar2;
  
  this_00 = GetAbnormalInfo(this,*param_1);
  bVar1 = FDS_AbnormalInfo::IsValid(this_00);
  if (!bVar1) {
    return false;
  }
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return 0.0 < (this_00->AbnormalEndTime - dVar2) -
               (double)(this_00->AbnormalMoveTime + this_00->AbnormalWaitTime +
                       this_00->AbnormalGetupTime);
}

// IsMoveControlAbnormal @ 14b9f9550

bool __thiscall
UDS_AbnormalAbilityData::IsMoveControlAbnormal
          (UDS_AbnormalAbilityData *this,EDS_AbnormalGroup param_1)

{
  return (byte)(param_1 - MoveControl) < 2;
}

// RefreshAbnormalInfo @ 14ba0b1d0

void __thiscall UDS_AbnormalAbilityData::RefreshAbnormalInfo(UDS_AbnormalAbilityData *this)

{
  TMap<EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong lStack_a0;
  undefined1 local_98 [16];
  int local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  TMap<EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  *local_48;
  undefined2 local_40;
  
  dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
  pTVar1 = &this->AbnormalInfoMap;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_a8,
             (TSet<TTuple<EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_40 = 0;
  local_58 = local_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  local_78 = local_a8;
  auStack_70._0_8_ = lStack_a0;
  stack0xffffffffffffff98 = local_98;
  uVar5 = local_98._8_8_ >> 0x20;
  local_48 = pTVar1;
  if (local_98._12_4_ < *(int *)(local_98._0_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar5 * 0xe0;
      lVar3 = *local_78;
      dVar10 = dVar9;
      if (dVar9 <= 0.0) {
        dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
      }
      if (*(double *)(lVar6 + 0x40 + lVar3) - dVar10 <= 0.0) {
        iVar4 = (int)local_b0;
        if ((int)local_b0 == local_b0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
        local_b8.Data[iVar4] = *(FScriptContainerElement *)(lVar6 + 8 + lVar3);
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar5 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      uVar8 = *(int *)(&local_48->field_0x0 + 8) - *(int *)(&local_48->field_0x0 + 0x34);
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar8) && (*(int *)&local_48->field_0x48 < iVar4)) ||
         (iVar4 < *(int *)&local_48->field_0x48)) {
        *(int *)&local_48->field_0x48 = iVar4;
        TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  iVar4 = (int)local_b0;
  pFVar2 = local_b8.Data + (int)local_b0;
  FVar7.Data = local_b8.Data;
  while( true ) {
    if ((int)local_b0 != iVar4) {
      `TCheckedPointerIterator<enum_EDS_AbnormalType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar2) break;
    RemoveAbnormalInfoByType(this,(EDS_AbnormalType *)FVar7.Data);
    FVar7.Data = FVar7.Data + 1;
  }
  if ((int)local_b0 != 0) {
    RefreshHighestAbnormalInfo(this);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// RefreshHighestAbnormalInfo @ 14ba0b3d0

void __thiscall UDS_AbnormalAbilityData::RefreshHighestAbnormalInfo(UDS_AbnormalAbilityData *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FDS_AbnormalInfo *pFVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pFVar9 = GetHighestAbnormalInfo(this,None);
  if (pFVar9->AbnormalEndTime != this->HighestAbnormalEndTime) {
    this->HighestAbnormalType = pFVar9->AbnormalType;
    this->HighestAbnormalEndTime = pFVar9->AbnormalEndTime;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnChangedHighestAbnormalInfoEvent,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnChangedHighestAbnormalInfoEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x10) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnChangedHighestAbnormalInfoEvent).field_0x8;
        if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OnChangedHighestAbnormalInfoEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnChangedHighestAbnormalInfoEvent,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// RemoveAbnormalGroup @ 14ba0e420

void __thiscall
UDS_AbnormalAbilityData::RemoveAbnormalGroup
          (UDS_AbnormalAbilityData *this,EDS_AbnormalGroup param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  TArray<EDS_AbnormalType,TSizedDefaultAllocator<32>_> local_f8;
  FDS_AbnormalInfo local_e8;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(&this->AbnormalInfoMap,&local_f8);
  uVar8 = 0;
  if (0 < local_f8.ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < local_f8.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&(this->AbnormalInfoMap).field_0x8 != *(int *)&(this->AbnormalInfoMap).field_0x34)
      {
        puVar1 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x40;
        puVar6 = &(this->AbnormalInfoMap).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        iVar5 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->AbnormalInfoMap).field_0x48 - 1) &
                                  (ulonglong)(byte)local_f8.AllocatorInstance.Data[lVar9]) * 4);
        if (iVar5 != -1) {
          do {
            pFVar7 = (FScriptContainerElement *)
                     ((longlong)iVar5 * 0xe0 + *(longlong *)&this->AbnormalInfoMap);
            if (*pFVar7 == local_f8.AllocatorInstance.Data[lVar9]) {
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FDS_AbnormalInfo::FDS_AbnormalInfo(&local_e8,(FDS_AbnormalInfo *)(pFVar7 + 8));
                goto LAB_14ba0e54c;
              }
              break;
            }
            iVar5 = *(int *)(pFVar7 + 0xd8);
          } while (iVar5 != -1);
        }
      }
      memset(&local_e8,0,0xd0);
      FDS_AbnormalInfo::FDS_AbnormalInfo(&local_e8);
LAB_14ba0e54c:
      if (local_e8.AbnormalGroup == param_1) {
        uVar4 = 0;
        if ((int)uVar8 < local_f8.ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        RemoveAbnormalInfoByType(this,(EDS_AbnormalType *)(local_f8.AllocatorInstance.Data + lVar9))
        ;
      }
      if (local_e8.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_e8.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < local_f8.ArrayNum);
  }
  RefreshHighestAbnormalInfo(this);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// RemoveAbnormalInfoByID @ 14ba0e650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_AbnormalAbilityData::RemoveAbnormalInfoByID(UDS_AbnormalAbilityData *this,int param_1)

{
  FDS_SkillAbnormalActionTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = FDS_SkillAbnormalActionTableRow::Get((longlong)param_1,true);
  if (pFVar1 == (FDS_SkillAbnormalActionTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalAbilityData::RemoveAbnormalInfoByID",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x146,
                 L"AbnormalActionTableRow is nullptr. AbnormalID(%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    RemoveAbnormalInfoByType(this,&pFVar1->AbnormalType);
  }
  return;
}

// RemoveAbnormalInfoByType @ 14ba0e750

void __thiscall
UDS_AbnormalAbilityData::RemoveAbnormalInfoByType
          (UDS_AbnormalAbilityData *this,EDS_AbnormalType *param_1)

{
  TMap<EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  *this_00;
  EDS_AbnormalType EVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  FDS_AbnormalInfo *pFVar5;
  int iVar6;
  EDS_AbnormalType local_res8 [8];
  
  EVar1 = *param_1;
  this_00 = &this->AbnormalInfoMap;
  if (*(int *)&(this->AbnormalInfoMap).field_0x8 != *(int *)&(this->AbnormalInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AbnormalInfoMap).field_0x38;
    }
    iVar6 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->AbnormalInfoMap).field_0x48 - 1) &
                              (ulonglong)EVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)this_00;
      iVar3 = iVar6;
      while (*(EDS_AbnormalType *)((longlong)iVar3 * 0xe0 + lVar2) != EVar1) {
        iVar3 = *(int *)((longlong)iVar3 * 0xe0 + 0xd8 + lVar2);
        if (iVar3 == -1) {
          return;
        }
      }
      do {
        if (*(EDS_AbnormalType *)((longlong)iVar6 * 0xe0 + lVar2) == EVar1) {
          pFVar5 = TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
                   ::FindChecked(this_00,EVar1);
          goto LAB_14ba0e826;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0xe0 + 0xd8 + lVar2);
      } while (iVar6 != -1);
      pFVar5 = &EmptyInfo;
LAB_14ba0e826:
      local_res8[0] = *param_1;
      if (*(int *)&(this->AbnormalInfoMap).field_0x8 != *(int *)&(this->AbnormalInfoMap).field_0x34)
      {
        TSet<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<enum_EDS_AbnormalType>(this_00,(uint)local_res8[0],local_res8);
      }
      TMulticastDelegate<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>::
      Broadcast(&this->OnChangedAbnormalInfoEvent,pFVar5,false);
    }
  }
  return;
}

// RemoveAllAbnormalInfo @ 14ba0e880

void __thiscall UDS_AbnormalAbilityData::RemoveAllAbnormalInfo(UDS_AbnormalAbilityData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TArray<EDS_AbnormalType,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(&this->AbnormalInfoMap,&local_18);
  uVar4 = 0;
  if (0 < local_18.ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < local_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      RemoveAbnormalInfoByType
                (this,(EDS_AbnormalType *)(local_18.AllocatorInstance.Data + (int)uVar4));
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < local_18.ArrayNum);
  }
  RefreshHighestAbnormalInfo(this);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ResetData @ 14ba18520

void __thiscall UDS_AbnormalAbilityData::ResetData(UDS_AbnormalAbilityData *this)

{
  this->HighestAbnormalType = None;
  this->bIsAddingAbnormality = false;
  return;
}

// UpdateHeightMove @ 14ba24360

bool __thiscall
UDS_AbnormalAbilityData::UpdateHeightMove
          (UDS_AbnormalAbilityData *this,FDS_AbnormalInfo *param_1,float param_2,float *param_3,
          TVector<double> *param_4)

{
  bool bVar1;
  ulong64 uVar2;
  
  uVar2 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  bVar1 = UDS_SyncRecvComponent::UpdateHeightMove(uVar2,param_2,param_3,param_4);
  return bVar1;
}

// UsableDeadAbnormalState @ 14ba24560

bool __thiscall UDS_AbnormalAbilityData::UsableDeadAbnormalState(UDS_AbnormalAbilityData *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar10 = *(int *)&(this->AbnormalInfoMap).field_0x8 - *(int *)&(this->AbnormalInfoMap).field_0x34;
  if (iVar10 != 0) {
    puVar9 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AbnormalInfoMap).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AbnormalInfoMap).field_0x48 - 1U & 0xf) *
                              4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)&this->AbnormalInfoMap;
      do {
        if (*(char *)((longlong)iVar7 * 0xe0 + lVar8) == '\x0f') {
          return false;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0xe0 + 0xd8 + lVar8);
      } while (iVar7 != -1);
    }
  }
  iVar12 = 0;
  puVar9 = &(this->AbnormalInfoMap).field_0x10;
  iVar7 = *(int *)&(this->AbnormalInfoMap).field_0x28;
  uVar5 = 1;
  iVar14 = 0;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar9;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ba2465f;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = iVar14 + -1 + local_res10;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_14ba2465f:
  uVar11 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar5,iVar12);
  TStack_50.CurrentBitIndex = iVar6;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iVar6;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,iVar10);
  iVar10 = (int)uVar11 >> 5;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar9;
  if ((((int)uVar11 < 0) || (iVar7 < (int)uVar11)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar5 = *(uint *)&(this->AbnormalInfoMap).field_0x28;
  if (uVar11 != uVar5) {
    puVar13 = *(undefined1 **)&(this->AbnormalInfoMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar9;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ba24770;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
  }
LAB_14ba24770:
  while( true ) {
    if (*(int *)&(this->AbnormalInfoMap).field_0x8 - *(int *)&(this->AbnormalInfoMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbnormalType,FDS_AbnormalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) break;
    if (*(char *)((longlong)TStack_50.CurrentBitIndex * 0xe0 + 0xc9 +
                 *(longlong *)&this->AbnormalInfoMap) == '\x01') {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}


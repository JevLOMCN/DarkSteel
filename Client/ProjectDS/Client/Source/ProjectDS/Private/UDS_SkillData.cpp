// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 66

// StaticClass @ 14b592860

UClass * __cdecl UDS_SkillData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillData",
               &Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton,
               StaticRegisterNativesUDS_SkillData,0x268,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SkillData>,InternalVTableHelperCtorCaller<UDS_SkillData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton;
}

// UDS_SkillData @ 14b594320

UDS_SkillData * __thiscall UDS_SkillData::UDS_SkillData(UDS_SkillData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillData__6B_;
  (this->SkillStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  (this->SkillAbilityTag).TagName = FGameplayTag::EmptyTag.TagName;
  (this->SubSkillIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSkillIDList).ArrayNum = 0;
  (this->SubSkillIDList).ArrayMax = 0;
  (this->AttackLinkIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackLinkIDList).ArrayNum = 0;
  (this->AttackLinkIDList).ArrayMax = 0;
  (this->SkillAniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAniIndexList).ArrayNum = 0;
  (this->SkillAniIndexList).ArrayMax = 0;
  this->SkillID = 0;
  this->MainSkillID = 0;
  this->SkillActLevelID = 0;
  this->SkillGrowLevelID = 0;
  this->SkillModeID = 0;
  this->ActionAniType = 0;
  this->ActionAniIndex = 0;
  this->ActiveSubSkillID = 0;
  this->StartSubSkillID = 0;
  this->SkillIconID = 0;
  this->InitialWaitTimeUntilNextStep = 0.0;
  this->WaitTimeUntilNextStep = 0.0;
  this->WaitEndTimeUntilNextStep = 0.0;
  this->SkillAvailableTime = 0.0;
  this->SkillAvailableEndTime = 0.0;
  this->ToggleUnableTime = 0.0;
  this->ToggleUnableEndTime = 0.0;
  this->SkillDuration = 0.0;
  this->SkillAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  this->SkillTimeScale = 0.0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  this->SkillAbilityTagType = None;
  this->bIsSkillActive = false;
  this->bIsActiveTick = false;
  this->SkillLevel = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillStartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillCostList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostList).ArrayNum = 0;
  (this->SkillCostList).ArrayMax = 0;
  (this->SkillGuideInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillGuideInfoList).ArrayNum = 0;
  (this->SkillGuideInfoList).ArrayMax = 0;
  *(undefined8 *)&this->OnActivateSkillEvent = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnActivateSubSkillEvent = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnActivateSmiteEvent = 0;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x10 = 0;
  *(undefined8 *)&this->SkillAngleData = 0;
  *(undefined8 *)&(this->SkillAngleData).field_0x8 = 0;
  *(undefined8 *)&(this->SkillAngleData).field_0x20 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x18 = 2;
  this->GlobalCoolTime = 0.0;
  this->BaseCoolTime = 0.0;
  this->NotUseSubSkillCoolTime = 0.0;
  this->CoolTimeDecreaseValue = 0;
  this->EndCoolTime = 0.0;
  this->SkillDistanceMax = 0.0;
  this->bIsSilenceUse = false;
  this->bIsStateConUse = false;
  this->bIsMoveConUse = false;
  this->bIsTargeting = false;
  this->bIsTargetTrace = false;
  this->bIsAutoSettingSkill = false;
  this->bIsImmuneAbnormal = false;
  this->bIsSuicide = false;
  this->ControlMoveType = None;
  this->bIsToggleEnd = false;
  this->bIsToggleMoveSwimOff = false;
  this->bIsRotationPlace = false;
  this->bIsActiveSmite = false;
  this->bIsJumpSkill = false;
  this->SkillType = Max;
  this->SkillUseType = Max;
  this->ToggleSkillType = Max;
  *(undefined4 *)&(this->SkillAngleData).field_0x28 = 0;
  *(undefined4 *)&(this->SkillAngleData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillAngleData).field_0x34 = 0;
  *(undefined4 *)&(this->SkillAngleData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillAngleData).field_0x40 = 0;
  *(undefined4 *)&(this->SkillAngleData).field_0x48 = 0;
  (this->SmiteTargetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmiteTargetList).ArrayNum = 0;
  (this->SmiteTargetList).ArrayMax = 0;
  this->ObjectHandlingSkillType = None;
  return this;
}

// ~UDS_SkillData @ 14b5950f0

void __thiscall UDS_SkillData::~UDS_SkillData(UDS_SkillData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_SkillData__6B_;
  pFVar1 = (this->SmiteTargetList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SkillAngleData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkillAngleData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkillAngleData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivateSmiteEvent).field_0x8,
             *(int *)&(this->OnActivateSmiteEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnActivateSmiteEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateSmiteEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivateSubSkillEvent).field_0x8,
             *(int *)&(this->OnActivateSubSkillEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnActivateSubSkillEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateSubSkillEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivateSkillEvent).field_0x8,
             *(int *)&(this->OnActivateSkillEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnActivateSkillEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateSkillEvent);
  pFVar1 = (this->SkillGuideInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillCostList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillAniIndexList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttackLinkIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubSkillIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b596bb0

UClass * __cdecl UDS_SkillData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillData",
               &Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton,
               StaticRegisterNativesUDS_SkillData,0x268,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SkillData>,InternalVTableHelperCtorCaller<UDS_SkillData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillData.InnerSingleton;
}

// GetStackSkillCnt @ 14b5973f0

int __thiscall UDS_SkillData::GetStackSkillCnt(UDS_SkillData *this)

{
  return 0;
}

// IsStackSkill @ 14b597480

bool __thiscall UDS_SkillData::IsStackSkill(UDS_SkillData *this)

{
  return false;
}

// StaticRegisterNativesUDS_SkillData @ 14b597820

void __cdecl UDS_SkillData::StaticRegisterNativesUDS_SkillData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_SkillData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickSkill @ 14b597970

void __thiscall UDS_SkillData::TickSkill(UDS_SkillData *this,float param_1)

{
  return;
}

// execOnChangedCoolTimeDecreaseValue @ 14b5989e0

void __cdecl
UDS_SkillData::execOnChangedCoolTimeDecreaseValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCoolTimeDecreaseValue((UDS_SkillData *)param_1,local_res10[0]);
  return;
}

// UDS_SkillData @ 14ba331d0

UDS_SkillData * __thiscall
UDS_SkillData::UDS_SkillData(UDS_SkillData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_SkillData__6B_;
  (this->SkillStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  (this->SkillAbilityTag).TagName = FGameplayTag::EmptyTag.TagName;
  (this->SubSkillIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSkillIDList).ArrayNum = 0;
  (this->SubSkillIDList).ArrayMax = 0;
  (this->AttackLinkIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackLinkIDList).ArrayNum = 0;
  (this->AttackLinkIDList).ArrayMax = 0;
  (this->SkillAniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAniIndexList).ArrayNum = 0;
  (this->SkillAniIndexList).ArrayMax = 0;
  this->SkillAbilityTagType = None;
  this->bIsSkillActive = false;
  this->bIsActiveTick = false;
  this->SkillID = 0;
  this->MainSkillID = 0;
  this->SkillActLevelID = 0;
  this->SkillGrowLevelID = 0;
  this->SkillModeID = 0;
  this->SkillLevel = 1;
  this->ActionAniType = 0;
  this->ActionAniIndex = 0;
  this->ActiveSubSkillID = 0;
  this->StartSubSkillID = 0;
  this->SkillIconID = 0;
  this->InitialWaitTimeUntilNextStep = 0.0;
  this->WaitTimeUntilNextStep = 0.0;
  this->WaitEndTimeUntilNextStep = 0.0;
  this->SkillAvailableTime = 0.0;
  this->SkillAvailableEndTime = 0.0;
  this->ToggleUnableTime = 0.0;
  this->ToggleUnableEndTime = 0.0;
  this->SkillDuration = 0.0;
  this->SkillAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  this->SkillTimeScale = 0.0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillStartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SkillCostList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostList).ArrayNum = 0;
  (this->SkillCostList).ArrayMax = 0;
  (this->SkillGuideInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillGuideInfoList).ArrayNum = 0;
  (this->SkillGuideInfoList).ArrayMax = 0;
  *(undefined8 *)&this->OnActivateSkillEvent = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnActivateSubSkillEvent = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnActivateSmiteEvent = 0;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSmiteEvent).field_0x18 = 2;
  *(undefined8 *)&this->SkillAngleData = 0;
  *(undefined8 *)&(this->SkillAngleData).field_0x8 = 0;
  *(undefined8 *)&(this->SkillAngleData).field_0x20 = 0;
  this->GlobalCoolTime = 0.0;
  this->BaseCoolTime = 0.0;
  this->NotUseSubSkillCoolTime = 0.0;
  this->CoolTimeDecreaseValue = 0;
  this->EndCoolTime = 0.0;
  this->SkillDistanceMax = 0.0;
  this->bIsSilenceUse = false;
  this->bIsStateConUse = false;
  this->bIsMoveConUse = false;
  this->bIsTargeting = false;
  this->bIsTargetTrace = false;
  this->bIsAutoSettingSkill = false;
  this->bIsImmuneAbnormal = false;
  this->bIsSuicide = false;
  this->bIsRotationPlace = false;
  this->bIsActiveSmite = false;
  this->bIsJumpSkill = false;
  this->SkillType = Max;
  this->SkillUseType = Max;
  this->ToggleSkillType = Max;
  this->ControlMoveType = None;
  this->bIsToggleEnd = false;
  this->bIsToggleMoveSwimOff = false;
  *(undefined4 *)&(this->SkillAngleData).field_0x28 = 0;
  *(undefined4 *)&(this->SkillAngleData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillAngleData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillAngleData).field_0x34 = 0;
  *(undefined8 *)&(this->SkillAngleData).field_0x40 = 0;
  *(undefined4 *)&(this->SkillAngleData).field_0x48 = 0;
  (this->SmiteTargetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmiteTargetList).ArrayNum = 0;
  (this->SmiteTargetList).ArrayMax = 0;
  this->ObjectHandlingSkillType = None;
  return this;
}

// ActiveSubSkill @ 14ba34ce0

void __thiscall UDS_SkillData::ActiveSubSkill(UDS_SkillData *this,int param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr FVar4;
  UClass *pUVar5;
  ulong64 uVar6;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  UDS_SkillData *local_20;
  
  if (param_1 == 0) {
    return;
  }
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar2) {
    uVar6 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (bVar2) {
      uVar6 = 0;
    }
    else {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      uVar6 = *(ulong64 *)(pUVar3 + 1);
    }
  }
  GetData((ulong64)&local_res20,uVar6,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  this->ActiveSubSkillID = *(int *)&pUVar3[2].field_0x1c;
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  SetAvailableTime(this,*(float *)&pUVar3[5].field_0x20);
  FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (FVar4 != (FWeakObjectPtr)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14ba34dce;
  }
  FVar4.ObjectIndex = 0;
  FVar4.ObjectSerialNumber = 0;
LAB_14ba34dce:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar2) && (this->ActiveSubSkillID != this->SkillID)) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    *(int *)&pUVar3[9].field_0x1c = this->ActiveSubSkillID;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_20 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnActivateSubSkillEvent,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_28,
              true);
  *(undefined1 *)&this->_padding_ = 1;
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3[4].field_0x8 = 1;
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      pUVar3[3].field_0x20 = 1;
    }
  }
  return;
}

// ApplyCoolTime @ 14ba36a80

void __thiscall UDS_SkillData::ApplyCoolTime(UDS_SkillData *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar4 [16];
  
  auVar4._4_4_ = in_XMM1_Db;
  auVar4._0_4_ = param_1;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._12_4_ = in_XMM1_Dd;
  this->BaseCoolTime = param_1;
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (param_1 == 0.0) {
    auVar4 = ZEXT416((uint)this->BaseCoolTime);
  }
  if (this->CoolTimeDecreaseValue != 0) {
    auVar4 = roundps(auVar4,ZEXT416((uint)((__real_42c80000 -
                                           (float)this->CoolTimeDecreaseValue * __real_38d1b717) *
                                          auVar4._0_4_)),1);
    auVar4._0_4_ = auVar4._0_4_ * __real_3c23d70a;
  }
  *(undefined1 *)&this->_padding_ = 1;
  this->SkillAvailableEndTime = 0.0;
  this->WaitEndTimeUntilNextStep = 0.0;
  this->ActiveSubSkillID = 0;
  this->StartSubSkillID = 0;
  this->EndCoolTime = (double)auVar4._0_4_ + dVar3;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// CheckCoolTime @ 14ba38470

bool __thiscall UDS_SkillData::CheckCoolTime(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (this->EndCoolTime <= dVar1) {
    return false;
  }
  return 0.0 < (float)(this->EndCoolTime - dVar1);
}

// CheckSkillAbleByAbnormalAction @ 14ba38ed0

bool __thiscall UDS_SkillData::CheckSkillAbleByAbnormalAction(UDS_SkillData *this,double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_AbnormalAbilityData *pUVar6;
  FDS_AbnormalInfo *this_00;
  UDS_CharBuffData *this_01;
  uint uVar7;
  uint uVar8;
  EDS_SpecialBuffType local_res8 [4];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_48 [4];
  
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,0x30);
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
LAB_14ba38f22:
    local_48[0] = 0;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                       (void *)0x0);
    if (bVar1) goto LAB_14ba38f22;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
    local_48[0] = *(undefined8 *)(pUVar5 + 1);
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)local_48);
  bVar1 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar1) goto LAB_14ba39018;
  pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
  bVar1 = UDS_AbnormalAbilityData::HasSkillUseUncancel(pUVar6);
  pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
  local_res8[0]._0_1_ = 1;
  bVar2 = UDS_AbnormalAbilityData::HasAbnormalInfo(pUVar6,(EDS_AbnormalGroup *)local_res8);
  pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
  bVar3 = UDS_AbnormalAbilityData::HasAbnormalInfo(pUVar6,(EDS_AbnormalGroup *)local_res8);
  uVar7 = SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)param_1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar8,uVar7) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar8,uVar7) == __real_3e45798ee2308c3a) {
LAB_14ba39008:
    if (bVar1) {
      if ((!bVar2) && (!bVar3)) {
LAB_14ba39053:
        UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
        UDS_CharBuffData::GetData((ulong64)&local_res20);
        bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res20,
                           (void *)0x0);
        if (!bVar1) {
          this_01 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res20);
          local_res8[0] = Silence;
          bVar1 = UDS_CharBuffData::HasSpecialBuffInfo(this_01,local_res8);
          if ((bVar1) && ((this->SkillType == DefaultSkill || (this->SkillType == SpecialSkill)))) {
            return this->bIsSilenceUse != false;
          }
          goto LAB_14ba390c2;
        }
      }
    }
    else if (((!bVar2) || (this->bIsStateConUse != false)) &&
            ((!bVar3 || (this->bIsMoveConUse != false)))) goto LAB_14ba39053;
LAB_14ba39018:
    bVar1 = false;
  }
  else {
    pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
    this_00 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar6,None);
    bVar4 = FDS_AbnormalInfo::IsValid(this_00);
    if ((!bVar4) || (param_1 < this_00->AbnormalStartTime || param_1 == this_00->AbnormalStartTime))
    goto LAB_14ba39008;
LAB_14ba390c2:
    bVar1 = true;
  }
  return bVar1;
}

// CheckSkillCost @ 14ba390d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SkillData::CheckSkillCost(UDS_SkillData *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UObject *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_StatusInfo *pFVar10;
  char cVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStackY_2a8 [32];
  FWeakObjectPtr local_278;
  FWeakObjectPtr local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                       (void *)0x0);
    if (bVar5) {
      cVar11 = '\0';
    }
    else {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
      cVar11 = pUVar8[1].field_0x8;
    }
    if (cVar11 == '\x02') {
      UDS_PlayerData::GetData((ulong64)&local_270,UDS_PlayerData::MainPlayerEntityID,false);
      bVar5 = FWeakObjectPtr::IsValid(&local_270);
      if (bVar5) {
        FWeakObjectPtr::Get(&local_270);
        UDS_CharStatusData::GetData((ulong64)&local_278);
        bVar5 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_278,
                           (void *)0x0);
        fVar4 = __real_358637bd;
        if (!bVar5) {
          uVar15 = 0;
          if ((this->SkillCostList).ArrayNum < 1) {
            return true;
          }
          lVar14 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar15 < (this->SkillCostList).ArrayNum) {
              uVar7 = ~uVar15 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pFVar1 = (this->SkillCostList).AllocatorInstance.Data;
            if (pFVar1[lVar14] == (FScriptContainerElement)0x1) {
              pUVar8 = FWeakObjectPtr::Get(&local_278);
              if (*(int *)&pUVar8[2].field_0x10 != *(int *)&pUVar8[3].field_0x14) {
                puVar12 = &pUVar8[3].field_0x18;
                if (*(undefined1 **)&pUVar8[3].field_0x20 != (undefined1 *)0x0) {
                  puVar12 = *(undefined1 **)&pUVar8[3].field_0x20;
                }
                iVar13 = *(int *)(puVar12 + (ulonglong)(*(int *)(pUVar8 + 4) - 1U & 6) * 4);
                if (iVar13 != -1) {
                  lVar2 = *(longlong *)&pUVar8[2].field_0x8;
                  do {
                    if (*(int *)((longlong)iVar13 * 0x100 + lVar2) == 6) {
                      pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                                ::FindChecked(&pUVar8[2].field_0x8,Mp);
                      if (pFVar10 != (FDS_StatusInfo *)0x0) goto LAB_14ba3948d;
                      break;
                    }
                    iVar13 = *(int *)((longlong)iVar13 * 0x100 + 0xf8 + lVar2);
                  } while (iVar13 != -1);
                }
              }
            }
            else if (pFVar1[lVar14] == (FScriptContainerElement)0x2) {
              pUVar8 = FWeakObjectPtr::Get(&local_278);
              if (*(int *)&pUVar8[2].field_0x10 != *(int *)&pUVar8[3].field_0x14) {
                puVar12 = &pUVar8[3].field_0x18;
                if (*(undefined1 **)&pUVar8[3].field_0x20 != (undefined1 *)0x0) {
                  puVar12 = *(undefined1 **)&pUVar8[3].field_0x20;
                }
                iVar13 = *(int *)(puVar12 + (ulonglong)(*(int *)(pUVar8 + 4) - 1U & 0xb) * 4);
                if (iVar13 != -1) {
                  lVar2 = *(longlong *)&pUVar8[2].field_0x8;
                  do {
                    if (*(int *)((longlong)iVar13 * 0x100 + lVar2) == 0xb) {
                      pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                                ::FindChecked(&pUVar8[2].field_0x8,Vigor);
                      if (pFVar10 != (FDS_StatusInfo *)0x0) {
                        if (pFVar1[lVar14 + 1] == (FScriptContainerElement)0x0) {
LAB_14ba3948d:
                          if ((longlong)pFVar10->CurrentValue < *(longlong *)(pFVar1 + lVar14 + 8))
                          {
                            return false;
                          }
                        }
                        else if ((pFVar1[lVar14 + 1] == (FScriptContainerElement)0x1) &&
                                ((float)pFVar10->CurrentValue / pFVar10->MaxValue <
                                 (float)*(longlong *)(pFVar1 + lVar14 + 8) * fVar4)) {
                          return false;
                        }
                      }
                      break;
                    }
                    iVar13 = *(int *)((longlong)iVar13 * 0x100 + 0xf8 + lVar2);
                  } while (iVar13 != -1);
                }
              }
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x10;
            if ((this->SkillCostList).ArrayNum <= (int)uVar15) {
              return true;
            }
          } while( true );
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_SkillData::CheckSkillCost",0x1d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_148.Ptr,0x3eb,L"charStatusData is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
            return false;
          }
        }
      }
      else {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_SkillData::CheckSkillCost",0x1d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_268.Ptr,0x3e3,L"mainPlayerData is invalid.");
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2890360493099187228>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_SkillData.cpp"
                           ,0x3e4,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      return false;
    }
  }
  return true;
}

// CheckToggleEndWaitTime @ 14ba39530

bool __thiscall UDS_SkillData::CheckToggleEndWaitTime(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return this->ToggleUnableEndTime <= dVar1;
}

// ClearSkillMoveAngle @ 14ba3a0a0

void __thiscall UDS_SkillData::ClearSkillMoveAngle(UDS_SkillData *this)

{
  undefined1 *puVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->SkillAngleData;
  bVar3 = 1 < *(int *)&(this->SkillAngleData).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->SkillAngleData).field_0xc;
  *(undefined4 *)&(this->SkillAngleData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkillAngleData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillAngleData).field_0x34 = 0;
  iVar2 = *(int *)&(this->SkillAngleData).field_0x2c;
  *(undefined4 *)&(this->SkillAngleData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SkillAngleData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkillAngleData).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SkillAngleData).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  return;
}

// Created @ 14ba3c2d0

void __thiscall UDS_SkillData::Created(UDS_SkillData *this)

{
  return;
}

// EndSkill @ 14ba3dcd0

void __thiscall UDS_SkillData::EndSkill(UDS_SkillData *this)

{
  EDS_SkillUseType EVar1;
  UObject *pUVar2;
  bool bVar3;
  
  this->bIsSkillActive = false;
  this->SkillStartTime = 0.0;
  this->ToggleUnableEndTime = 0.0;
  (**(code **)(this->_padding_ + 0x2d0))(this,1,0);
  EVar1 = this->SkillUseType;
  if (EVar1 == ActiveSkill) {
LAB_14ba3dd0e:
    bVar3 = this->bIsSkillActive == true;
  }
  else {
    if (EVar1 != ToggleSkill) {
      if (EVar1 != SkillModeChange) goto LAB_14ba3dd28;
      goto LAB_14ba3dd0e;
    }
    bVar3 = this->bIsSkillActive == false;
  }
  if (bVar3) {
    (**(code **)(this->_padding_ + 0x2e8))(this,this->BaseCoolTime);
  }
LAB_14ba3dd28:
  *(undefined1 *)&this->_padding_ = 1;
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// GetCurTime @ 14ba466b0

double __thiscall UDS_SkillData::GetCurTime(UDS_SkillData *this)

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

// GetData @ 14ba49f00

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __cdecl
UDS_SkillData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_SkillData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_SkillData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba49f8f:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba49f8f;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_SkillData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_38,(void *)0x0);
      if (!bVar2) {
LAB_14ba49fea:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (bVar2) goto LAB_14ba4a132;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4a059:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4a059;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_SkillData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar2) goto LAB_14ba49fea;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_SkillData>(pUVar5);
    if (pUVar7 != (UDS_SkillData *)0x0) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      local_28 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar2 = UDS_DataSetBase::AddData
                        (pUVar3,CONCAT71(in_register_00000081,param_3),
                         (TObjectPtr<UDS_DataBase>)&local_28);
      if (bVar2) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(undefined8 *)param_1 = 0;
        local_28 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        goto LAB_14ba4a139;
      }
    }
  }
LAB_14ba4a132:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_SkillData *)0x0;
LAB_14ba4a139:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetElapsedCoolTime @ 14ba4a550

float __thiscall UDS_SkillData::GetElapsedCoolTime(UDS_SkillData *this)

{
  int iVar1;
  double dVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  iVar1 = this->CoolTimeDecreaseValue;
  fVar3 = this->BaseCoolTime;
  if (this->EndCoolTime <= dVar2) {
    if (iVar1 != 0) {
      auVar4 = roundps(ZEXT416((uint)fVar3),
                       ZEXT416((uint)((__real_42c80000 - (float)iVar1 * __real_38d1b717) * fVar3)),1
                      );
      fVar3 = auVar4._0_4_ * __real_3c23d70a;
    }
    return fVar3;
  }
  if (iVar1 != 0) {
    auVar4 = roundps(ZEXT416((uint)fVar3),
                     ZEXT416((uint)((__real_42c80000 - (float)iVar1 * __real_38d1b717) * fVar3)),1);
    fVar3 = auVar4._0_4_ * __real_3c23d70a;
  }
  return (float)((double)fVar3 - (this->EndCoolTime - dVar2));
}

// GetElapsedWaitTimeUntilNextStep @ 14ba4a640

float __thiscall UDS_SkillData::GetElapsedWaitTimeUntilNextStep(UDS_SkillData *this)

{
  float fVar1;
  double dVar2;
  
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  fVar1 = this->WaitTimeUntilNextStep;
  if (dVar2 < this->WaitEndTimeUntilNextStep) {
    fVar1 = (float)((double)fVar1 - (this->WaitEndTimeUntilNextStep - dVar2));
  }
  return fVar1;
}

// GetFinalCoolTime @ 14ba4b690

float __thiscall UDS_SkillData::GetFinalCoolTime(UDS_SkillData *this,float param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  if (param_1 == 0.0) {
    param_1 = this->BaseCoolTime;
  }
  if (this->CoolTimeDecreaseValue == 0) {
    return param_1;
  }
  fVar1 = (float)this->CoolTimeDecreaseValue * __real_38d1b717;
  auVar2 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)((__real_42c80000 - fVar1) * param_1)),1);
  return auVar2._0_4_ * __real_3c23d70a;
}

// GetInputMoveTime @ 14ba4c020

float __thiscall UDS_SkillData::GetInputMoveTime(UDS_SkillData *this,bool param_1)

{
  if (param_1) {
    return this->SkillTimeScale * this->InputMoveTime;
  }
  return this->InputMoveTime;
}

// GetMainSkillID @ 14ba4cd70

int __thiscall UDS_SkillData::GetMainSkillID(UDS_SkillData *this)

{
  int iVar1;
  
  iVar1 = this->MainSkillID;
  if (iVar1 < 1) {
    iVar1 = this->SkillID;
  }
  return iVar1;
}

// GetNextSubSkillID @ 14ba4d730

int __thiscall UDS_SkillData::GetNextSubSkillID(UDS_SkillData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (this->StartSubSkillID == 0) {
    return this->SkillID;
  }
  uVar7 = uVar6;
  if (0 < (this->SubSkillIDList).ArrayNum + -1) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (this->SubSkillIDList).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      if (this->StartSubSkillID == *(int *)((this->SubSkillIDList).AllocatorInstance.Data + uVar7))
      {
        uVar3 = 0;
        if ((int)uVar5 < (this->SubSkillIDList).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return *(int *)((this->SubSkillIDList).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      }
      uVar7 = uVar7 + 4;
    } while ((int)uVar5 < (this->SubSkillIDList).ArrayNum + -1);
  }
  return 0;
}

// GetRemainAvailableTime @ 14ba4e9b0

float __thiscall UDS_SkillData::GetRemainAvailableTime(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (this->SkillAvailableEndTime <= dVar1) {
    return 0.0;
  }
  return (float)(this->SkillAvailableEndTime - dVar1);
}

// GetRemainCoolTime @ 14ba4ea20

float __thiscall UDS_SkillData::GetRemainCoolTime(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (this->EndCoolTime <= dVar1) {
    return 0.0;
  }
  return (float)(this->EndCoolTime - dVar1);
}

// GetRemainWaitTimeUntilNextStep @ 14ba4ea60

float __thiscall UDS_SkillData::GetRemainWaitTimeUntilNextStep(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (this->WaitEndTimeUntilNextStep <= dVar1) {
    return 0.0;
  }
  return (float)(this->WaitEndTimeUntilNextStep - dVar1);
}

// GetSkillAniCutTime @ 14ba4eed0

double __thiscall UDS_SkillData::GetSkillAniCutTime(UDS_SkillData *this,bool param_1)

{
  if (param_1) {
    return (double)this->SkillTimeScale * this->SkillAniCutTime;
  }
  return this->SkillAniCutTime;
}

// GetSkillDuration @ 14ba4eff0

double __thiscall UDS_SkillData::GetSkillDuration(UDS_SkillData *this,bool param_1)

{
  if (param_1) {
    return (double)this->SkillTimeScale * this->SkillDuration;
  }
  return this->SkillDuration;
}

// GetSkillMoveAngle @ 14ba4f380

int __thiscall UDS_SkillData::GetSkillMoveAngle(UDS_SkillData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->SkillAngleData).field_0x8 != *(int *)&(this->SkillAngleData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SkillAngleData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SkillAngleData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->SkillAngleData).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->SkillAngleData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->SkillAngleData,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// InitSkill @ 14ba54fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_SkillData::InitSkill(UDS_SkillData *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  EDS_SkillUseType EVar2;
  longlong lVar3;
  code *pcVar4;
  EDS_EntityType EVar5;
  bool bVar6;
  int iVar7;
  FDS_SkillTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  FDS_SkillActLevelTableRow *pFVar10;
  FDS_WeaponTypeBaseTableRow *pFVar11;
  FScriptContainerElement *pFVar12;
  FDS_SkillAttackTableRow *pFVar13;
  FName *pFVar14;
  FDS_SkillConditionTableRow *pFVar15;
  UDS_SkillDataSet *this_01;
  UClass *pUVar16;
  ulonglong uVar17;
  longlong lVar18;
  void *pvVar19;
  EDS_StateTagType *pEVar20;
  FName FVar21;
  int iVar22;
  ulonglong uVar23;
  ForAnyElementType FVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_7c8 [32];
  undefined1 local_788;
  EDS_StateTagType local_787 [5];
  EDS_AbilityTagType local_782 [10];
  uint local_778;
  FWeakObjectPtr local_774;
  longlong local_768;
  undefined8 local_760;
  longlong lStack_758;
  TArray<FDS_ActionHandlingTableRow_const_*,TSizedDefaultAllocator<32>_> local_750;
  UDS_SkillData *local_740;
  int local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  int iStack_72c;
  float local_728;
  float fStack_724;
  double dStack_720;
  double dStack_718;
  double dStack_710;
  float local_708;
  float fStack_704;
  float fStack_700;
  undefined4 uStack_6fc;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  pFVar8 = FDS_SkillTableRow::Get((longlong)this->SkillID,true);
  if (pFVar8 == (FDS_SkillTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_6f8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_6f8,"UDS_SkillData::InitSkill",0x18,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Error,local_6f8.Ptr,0x4a9,L"SkillTableRow is nullptr. SkillID : %d");
    if ((void *)local_6f8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_6f8._padding_);
    return;
  }
  this->MainSkillID = pFVar8->ID_MainSkill;
  iVar22 = pFVar8->ID_SkillActLevelGroup + this->SkillLevel;
  this->SkillActLevelID = iVar22;
  this->SkillGrowLevelID = this->SkillLevel + pFVar8->ID_SkillGrowLevelGroup;
  this->bIsRotationPlace = pFVar8->IsRotationPlace;
  this->SkillIconID = pFVar8->ID_Icon;
  this->SkillType = pFVar8->SkillType;
  this->SkillUseType = pFVar8->SkillUseType;
  this->bIsTargeting = pFVar8->IsTargeting;
  this->bIsTargetTrace = pFVar8->IsTargetTrace;
  this->bIsAutoSettingSkill = pFVar8->IsAutoSettingSkill;
  this->SkillDistanceMax = (float)pFVar8->TargetDistanceMax;
  pFVar10 = FDS_SkillActLevelTableRow::Get((longlong)iVar22,true);
  if (pFVar10 == (FDS_SkillActLevelTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_5d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5d8,"UDS_SkillData::InitSkill",0x18,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Error,local_5d8.Ptr,0x4c1,
               L"SkillActLevelTableRow is nullptr. SkillActLevelID : %d");
    if ((void *)local_5d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_5d8._padding_);
    return;
  }
  this->SkillModeID = pFVar10->ID_SkillMode;
  this->SkillDuration = (double)pFVar10->AttackAniTime;
  this->SkillAniCutTime = (double)pFVar10->EndCutAniTime;
  this->InputMoveTime = pFVar10->InputMoveTime;
  this->GlobalCoolTime = pFVar10->GlobalCoolTime;
  this->BaseCoolTime = pFVar10->CoolTime;
  this->bIsImmuneAbnormal = pFVar10->IsImmuneAbnormal;
  this->bIsSuicide = pFVar10->IsSuicide;
  EVar5 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  if (((EVar5 == MainCharacter) ||
      (EVar5 = UDS_DataBase::GetEntityType((UDS_DataBase *)this), EVar5 == NetCharacter)) ||
     (EVar5 = UDS_DataBase::GetEntityType((UDS_DataBase *)this), EVar5 == DummyCharacter)) {
    pFVar11 = FDS_WeaponTypeBaseTableRow::GetRef((ulonglong)this->WeaponType,true);
    this->bIsJumpSkill = pFVar11->ID_JumpSkill == this->SkillID;
  }
  this_00 = &this->SkillAniIndexList;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(this_00,3,Default);
  uVar23 = 0;
  iVar22 = pFVar10->SkillStartAniIndex;
  if (((this->SkillAniIndexList).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)(this_00->AllocatorInstance).Data = iVar22;
  iVar22 = pFVar10->AttackAniIndex;
  if (((this->SkillAniIndexList).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)((this_00->AllocatorInstance).Data + 4) = iVar22;
  iVar22 = pFVar10->SkillEndAniIndex;
  if (((this->SkillAniIndexList).ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)((this_00->AllocatorInstance).Data + 8) = iVar22;
  this->ActionAniType = pFVar10->ActionAniType;
  this->ActionAniIndex = pFVar10->AttackAniIndex;
  uVar25 = uVar23;
  uVar17 = uVar23;
  if (0 < (pFVar10->SkillCostType).ArrayNum) {
    do {
      iVar22 = (int)uVar17;
      if ((iVar22 < 0) || ((pFVar10->SkillCost).ArrayNum <= iVar22)) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_4b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4b8,"UDS_SkillData::InitSkill",0x18,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_4b8.Ptr,0x4f1,
                     L"SkillCost is invalid index. SkillID : %d, Index : %d");
          if ((void *)local_4b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4b8._padding_);
          }
        }
        break;
      }
      if (((pFVar10->SkillCostType).ArrayNum <= iVar22) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_760 = (FScriptContainerElement *)
                  CONCAT71(local_760._1_7_,(pFVar10->SkillCostType).AllocatorInstance.Data[uVar25]);
      if (((pFVar10->SkillCost).ArrayNum <= iVar22) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lStack_758 = (longlong)*(int *)((pFVar10->SkillCost).AllocatorInstance.Data + uVar25 * 4);
      if (((pFVar10->SkillCostValueType).ArrayNum <= iVar22) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar1 = &(this->SkillCostList).ArrayMax;
      iVar7 = (this->SkillCostList).ArrayNum;
      local_760._0_2_ =
           CONCAT11((pFVar10->SkillCostValueType).AllocatorInstance.Data[uVar25],
                    (undefined1)local_760);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->SkillCostList).AllocatorInstance,piVar1);
      }
      pFVar12 = (this->SkillCostList).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (this->SkillCostList).ArrayNum = iVar7 + 1;
      *(FScriptContainerElement **)pFVar12 = local_760;
      *(longlong *)(pFVar12 + 8) = lStack_758;
      uVar25 = uVar25 + 1;
      uVar17 = (ulonglong)(iVar22 + 1U);
    } while ((int)(iVar22 + 1U) < (pFVar10->SkillCostType).ArrayNum);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->AttackLinkIDList,&pFVar10->ID_AttackLink);
  local_778 = (this->AttackLinkIDList).ArrayNum;
  uVar17 = (ulonglong)(int)local_778;
  pFVar12 = (this->AttackLinkIDList).AllocatorInstance.Data;
  local_768 = 0;
  local_760 = pFVar12 + uVar17 * 4;
  uVar25 = uVar23;
  while( true ) {
    pFVar26 = local_760;
    if ((this->AttackLinkIDList).ArrayNum != (int)uVar17) {
      local_788 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_788);
    }
    if (pFVar12 == pFVar26) break;
    pFVar13 = FDS_SkillAttackTableRow::Get((longlong)*(int *)pFVar12,true);
    if (pFVar13 == (FDS_SkillAttackTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_SkillData::InitSkill",0x18,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_398.Ptr,0x507,
                   L"SkillAttackTableRow is nullptr. SkillAttackID : %d");
        pvVar19 = (void *)local_398._padding_;
LAB_14ba557d7:
        if (pvVar19 != (void *)0x0) {
          FMemory::Free(pvVar19);
        }
      }
    }
    else {
      iVar22 = (int)uVar25;
      if ((iVar22 < 0) || ((pFVar10->ID_AttackLink).ArrayNum <= iVar22)) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_SkillData::InitSkill",0x18,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_278.Ptr,0x50d,
                     L"SkillActLevelTableRow is invalid index. SkillID : %d, Index : %d");
          pvVar19 = (void *)local_278._padding_;
          goto LAB_14ba557d7;
        }
      }
      else {
        if (((pFVar10->LinkStartTime).ArrayNum <= iVar22) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = local_768;
        local_738 = pFVar13->ID_SkillGuide;
        piVar1 = &(this->SkillGuideInfoList).ArrayMax;
        uStack_734 = CONCAT31(uStack_734._1_3_,pFVar13->ImpactType);
        fStack_724 = (float)pFVar13->AttackWidth;
        uStack_730 = *(undefined4 *)((pFVar10->LinkStartTime).AllocatorInstance.Data + local_768);
        iStack_72c = pFVar13->AttackAngle;
        local_728 = (float)pFVar13->AttackDistanceMax;
        iVar7 = (this->SkillGuideInfoList).ArrayNum;
        dStack_710 = (pFVar13->LocationOffset).field0_0x0._s_0.Z;
        dStack_720 = (pFVar13->LocationOffset).field0_0x0._s_0.X;
        dStack_718 = (pFVar13->LocationOffset).field0_0x0._s_0.Y;
        fStack_704 = pFVar13->GuideEffectScalingTime;
        local_708 = pFVar13->RotationOffset;
        fStack_700 = pFVar13->GuideEffectAliveTime;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&(this->SkillGuideInfoList).AllocatorInstance,piVar1);
        }
        uVar25 = (ulonglong)(iVar22 + 1);
        (this->SkillGuideInfoList).ArrayNum = iVar7 + 1;
        pFVar26 = (this->SkillGuideInfoList).AllocatorInstance.Data;
        lVar18 = (longlong)iVar7 * 0x40;
        local_768 = lVar3 + 4;
        *(ulonglong *)(pFVar26 + lVar18) = CONCAT44(uStack_734,local_738);
        *(ulonglong *)(pFVar26 + lVar18 + 8) = CONCAT44(iStack_72c,uStack_730);
        *(ulonglong *)(pFVar26 + lVar18 + 0x10) = CONCAT44(fStack_724,local_728);
        *(double *)(pFVar26 + lVar18 + 0x10 + 8) = dStack_720;
        *(double *)(pFVar26 + lVar18 + 0x20) = dStack_718;
        *(double *)(pFVar26 + lVar18 + 0x20 + 8) = dStack_710;
        *(ulonglong *)(pFVar26 + lVar18 + 0x30) = CONCAT44(fStack_704,local_708);
        *(ulonglong *)(pFVar26 + lVar18 + 0x30 + 8) = CONCAT44(uStack_6fc,fStack_700);
      }
    }
    uVar17 = (ulonglong)local_778;
    pFVar12 = pFVar12 + 4;
  }
  this->bIsSilenceUse = pFVar10->IsSilenceUse;
  this->bIsStateConUse = pFVar10->IsStateConUse;
  this->bIsMoveConUse = pFVar10->IsMoveConUse;
  if (this->SkillType == NormalAttack) {
    local_787[0] = NormalAttack;
    pFVar14 = &FDS_GameplayTags::GetStateTag(local_787)->TagName;
  }
  else {
    if (this->SkillType == DodgeSkill) {
      pFVar11 = FDS_WeaponTypeBaseTableRow::Get((ulonglong)this->WeaponType,true);
      if (pFVar11 == (FDS_WeaponTypeBaseTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_SkillData::InitSkill",0x18,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_158.Ptr,0x52a,
                   L"weaponTypeBaseTableRow is nullptr. WeaponType : %d");
        local_750.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
        goto LAB_14ba55c8c;
      }
      if (this->SkillID == pFVar11->ID_InputRoll) {
        local_787[1] = 0x12;
        pEVar20 = local_787 + 1;
      }
      else {
        local_787[2] = 0x13;
        pEVar20 = local_787 + 2;
      }
    }
    else if (this->ToggleSkillType == Shield) {
      local_787[3] = 3;
      pEVar20 = local_787 + 3;
    }
    else {
      local_787[4] = 0x15;
      pEVar20 = local_787 + 4;
    }
    pFVar14 = &FDS_GameplayTags::GetStateTag(pEVar20)->TagName;
  }
  (this->SkillStateTag).TagName = *pFVar14;
  EVar2 = this->SkillUseType;
  if (EVar2 == CastingSkill) {
    local_782[5] = 0x13;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782 + 5)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = Skill_CastingSkill;
  }
  else if (EVar2 == ChainSkill) {
    local_782[4] = 0x12;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782 + 4)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = Skill_ChainSkill;
  }
  else if (EVar2 == StackSkill) {
    local_782[3] = 0x14;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782 + 3)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = Skill_StackSkill;
  }
  else if (EVar2 == ToggleSkill) {
    local_782[2] = 0x15;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782 + 2)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = ToggleSkill_Process;
  }
  else if (EVar2 == SkillModeChange) {
    local_782[1] = 0x18;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782 + 1)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = SkillMode_Process;
  }
  else {
    local_782[0] = Skill_ActiveSkill;
    pFVar14 = &FDS_GameplayTags::GetAbilityTag(local_782)->TagName;
    FVar21 = *pFVar14;
    this->SkillAbilityTagType = Skill_ActiveSkill;
  }
  (this->SkillAbilityTag).TagName = FVar21;
  if ((this->MainSkillID < 1) ||
     (pFVar15 = FDS_SkillConditionTableRow::Get((longlong)this->MainSkillID,true),
     pFVar15 == (FDS_SkillConditionTableRow *)0x0)) goto LAB_14ba55ba3;
  this->ToggleSkillType = pFVar15->ToggleSkillType;
  this->ControlMoveType = pFVar15->ControlMoveType;
  this->bIsToggleEnd = pFVar15->IsToggleEnd;
  this->bIsToggleMoveSwimOff = pFVar15->IsToggleSwimOff;
  this->ToggleUnableTime = pFVar15->ToggleUnableTime;
  if (pFVar15->SkillUseType != ChainSkill) goto LAB_14ba55ba3;
  if (this->MainSkillID == this->SkillID) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&this->SubSkillIDList,&pFVar15->ID_ChainSkill);
  }
  pFVar26 = (pFVar15->ID_ChainSkill).AllocatorInstance.Data;
  iVar22 = (pFVar15->ID_ChainSkill).ArrayNum;
  pFVar12 = pFVar26 + (longlong)iVar22 * 4;
  while( true ) {
    if ((pFVar15->ID_ChainSkill).ArrayNum != iVar22) {
      local_782[6] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_782 + 6);
    }
    if (pFVar26 == pFVar12) goto LAB_14ba55ba3;
    iVar7 = (int)uVar23;
    if (*(int *)pFVar26 == this->SkillID) break;
    uVar23 = (ulonglong)(iVar7 + 1);
    pFVar26 = pFVar26 + 4;
  }
  if ((iVar7 < 0) || ((pFVar15->ChainSkillDelay).ArrayNum <= iVar7)) {
    if (-1 < iVar7) goto LAB_14ba55aea;
LAB_14ba55b47:
    if (iVar7 < 0) goto LAB_14ba55ba3;
  }
  else {
    this->InitialWaitTimeUntilNextStep =
         *(float *)((pFVar15->ChainSkillDelay).AllocatorInstance.Data + (longlong)iVar7 * 4);
LAB_14ba55aea:
    if ((pFVar15->ChainEndCoolTime).ArrayNum <= iVar7) goto LAB_14ba55b47;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->NotUseSubSkillCoolTime =
         *(float *)((pFVar15->ChainEndCoolTime).AllocatorInstance.Data + (longlong)iVar7 * 4);
  }
  if (iVar7 < (pFVar15->ChainSkillUseTime).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->SkillAvailableTime =
         *(float *)((pFVar15->ChainSkillUseTime).AllocatorInstance.Data + (longlong)iVar7 * 4);
  }
LAB_14ba55ba3:
  this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (this_01 != (UDS_SkillDataSet *)0x0) {
    pUVar16 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar22 = (int)pUVar16->_padding_;
    if ((iVar22 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar16->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_774.ObjectIndex = 0;
      local_774.ObjectSerialNumber = 0;
      local_740 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_774,(FObjectPtr)&local_740);
      UDS_SkillDataSet::RefreshMainSkill
                (this_01,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_774);
    }
  }
  FDS_ActionHandlingTableRow::GetAll(&local_750);
  iVar22 = local_750.ArrayNum;
  uVar23 = (ulonglong)local_750.ArrayNum;
  pFVar12 = local_750.AllocatorInstance.Data + uVar23 * 8;
  FVar24.Data = local_750.AllocatorInstance.Data;
  do {
    if ((uint)uVar23 != iVar22) {
      `TCheckedPointerIterator<FDS_ActionHandlingTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_782 + 7);
      uVar23 = (ulonglong)(uint)local_750.ArrayNum;
    }
    if (FVar24.Data == pFVar12) goto LAB_14ba55c8c;
    lVar3 = *(longlong *)FVar24.Data;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x1c) == this->SkillID) {
        this->ObjectHandlingSkillType = ThrowSkillReady;
        goto LAB_14ba55c8c;
      }
      if (*(int *)(lVar3 + 0x20) == this->SkillID) break;
    }
    FVar24.Data = FVar24.Data + 8;
  } while( true );
  this->ObjectHandlingSkillType = ThrowSkillStart;
LAB_14ba55c8c:
  if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_750.AllocatorInstance.Data);
  }
  return;
}

// InitSkillData @ 14ba55ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SkillData::InitSkillData(UDS_SkillData *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_DataSetContainer *this_00;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_01;
  UClass *pUVar6;
  UDS_DataSetBase *this_02;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_03;
  UDS_CharStatusData *this_04;
  FDS_StatusInfo *pFVar7;
  char cVar8;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  UObject *local_178;
  UObject *local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [272];
  void *local_48;
  wchar_t *local_40;
  undefined8 local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (**(code **)(this->_padding_ + 0x2c8))();
  this->SkillID = param_1;
  this->SkillLevel = param_2;
  (**(code **)(this->_padding_ + 0x308))(this);
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar3) goto LAB_14ba56013;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),(void *)0x0
                    );
  if (bVar3) {
    cVar8 = '\0';
  }
  else {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
    cVar8 = pUVar4[1].field_0x8;
  }
  if (cVar8 != '\x02') goto LAB_14ba56013;
  UDS_PlayerData::GetData((ulong64)&local_180,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_180);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                 "UDS_SkillData::InitSkillData",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_40,0xd0,L"mainPlayerData is invalid.");
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2890360493099188015>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_SkillData.cpp"
                       ,0xd1,"false");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_188.ObjectIndex = *(int *)&pUVar4[4].field_0x0;
  local_188.ObjectSerialNumber = *(int *)&pUVar4[4].field_0x4;
  bVar3 = FWeakObjectPtr::IsValid(&local_188);
  if (!bVar3) goto LAB_14ba56013;
  this_00 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_188);
  this_01 = UDS_DataSetContainer::GetDataSet(this_00,(EDS_DataType)local_168);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14ba55ec9:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_CharDataSet_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14ba55ec9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_178 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_178);
  bVar3 = FWeakObjectPtr::IsValid(&local_198);
  if (!bVar3) goto LAB_14ba56013;
  this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_198);
  this_03 = UDS_DataSetBase::GetData(this_02,(ulong64)local_160);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03.WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14ba55f77:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_CharStatusData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14ba55f77;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_190.ObjectIndex = 0;
  local_190.ObjectSerialNumber = 0;
  local_170 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_170);
  bVar3 = FWeakObjectPtr::IsValid(&local_190);
  if (bVar3) {
    this_04 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_190);
    pFVar7 = UDS_CharStatusData::GetStatusInfo(this_04,RateFallCoolTime);
    if (pFVar7 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar7->ChangeOriginValueDelegate,this);
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_SkillData>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pFVar7->ChangeOriginValueDelegate,(UDS_SkillData *)local_158,(pmf_c2dc3ab2)this);
    }
  }
LAB_14ba56013:
  *(undefined1 *)&this->_padding_ = 1;
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar4[4].field_0x8 = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      pUVar4[3].field_0x20 = 1;
    }
  }
  return;
}

// IsAffectedByForbidCombatSkill @ 14ba59cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SkillData::IsAffectedByForbidCombatSkill(UDS_SkillData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_WeaponTypeBaseTableRow *pFVar5;
  int iVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      iVar6 = *(int *)&pUVar2[1].field_0xc;
      goto LAB_14ba59d0e;
    }
  }
  iVar6 = 0;
LAB_14ba59d0e:
  pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)iVar6,true);
  if (pFVar3 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillData::IsAffectedByForbidCombatSkill",0x2c,Yes);
    pwVar8 = L"characterBaseTable is nullptr. (%d)";
    uVar7 = 0x488;
  }
  else {
    pFVar5 = FDS_WeaponTypeBaseTableRow::Get((ulonglong)this->WeaponType,true);
    if (pFVar5 != (FDS_WeaponTypeBaseTableRow *)0x0) {
      iVar6 = this->SkillID;
      if ((((pFVar5->ID_BaseSkill01 != iVar6) && (pFVar5->ID_BaseSkill02 != iVar6)) &&
          (pFVar5->ID_BaseSkill03 != iVar6)) &&
         (((pFVar5->ID_BaseSkill04 != iVar6 && (pFVar5->ID_BaseSkill05 != iVar6)) &&
          ((pFVar5->ID_BaseSkill06 != iVar6 && (pFVar5->ID_JumpSkill != iVar6)))))) {
        return pFVar3->ID_AirDashSkill == iVar6;
      }
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillData::IsAffectedByForbidCombatSkill",0x2c,Yes);
    pwVar8 = L"weaponTypeBaseTableRow is nullptr. WeaponType : %d";
    uVar7 = 0x48f;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsAscendComplete @ 14ba5a030

bool __thiscall UDS_SkillData::IsAscendComplete(UDS_SkillData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  longlong local_res10;
  
  if (this->AscendWaitCompleteTimeID != 0) {
    UDS_WaitCompleteData::GetData
              ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,
               SUB81(this->AscendWaitCompleteTimeID,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      UDS_TimeUtilManager::GetCurrentServerDateTime();
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      return *(longlong *)&pUVar2[3].field_0x10 < local_res10;
    }
  }
  return false;
}

// IsAscending @ 14ba5a130

bool __thiscall UDS_SkillData::IsAscending(UDS_SkillData *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8 [4];
  
  if (this->AscendWaitCompleteTimeID != 0) {
    UDS_WaitCompleteData::GetData
              ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,
               SUB81(this->AscendWaitCompleteTimeID,0));
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    return bVar1;
  }
  return false;
}

// IsAutoSettingSkill @ 14ba5a1a0

bool __thiscall UDS_SkillData::IsAutoSettingSkill(UDS_SkillData *this)

{
  return this->bIsAutoSettingSkill;
}

// IsCanGrow @ 14ba5a3e0

bool __thiscall UDS_SkillData::IsCanGrow(UDS_SkillData *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  return 1 < pFVar1->MaxLevel;
}

// IsImmuneAbnormal @ 14ba5b710

bool __thiscall UDS_SkillData::IsImmuneAbnormal(UDS_SkillData *this)

{
  return this->bIsImmuneAbnormal;
}

// IsMainSkill @ 14ba5b940

bool __thiscall UDS_SkillData::IsMainSkill(UDS_SkillData *this)

{
  return this->MainSkillID == this->SkillID;
}

// IsMaxLevel @ 14ba5bac0

bool __thiscall UDS_SkillData::IsMaxLevel(UDS_SkillData *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  return pFVar1->MaxLevel == this->SkillLevel;
}

// IsPopupSkill @ 14ba5c5c0

bool __thiscall UDS_SkillData::IsPopupSkill(UDS_SkillData *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) goto LAB_14ba5c605;
  }
  pUVar5 = (UObject *)0x0;
LAB_14ba5c605:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = this->SkillID;
    plVar7 = *(longlong **)&pUVar5[8].field_0x20;
    iVar3 = *(int *)(pUVar5 + 9);
    plVar1 = plVar7 + iVar3;
    while( true ) {
      if (*(int *)(pUVar5 + 9) != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (plVar7 == plVar1) break;
      if (*(int *)(*plVar7 + 0x70) == iVar2) {
        return true;
      }
      plVar7 = plVar7 + 1;
    }
    return false;
  }
  return false;
}

// IsRotationPlace @ 14ba5c9b0

bool __thiscall UDS_SkillData::IsRotationPlace(UDS_SkillData *this)

{
  return this->bIsRotationPlace;
}

// IsSkillActive @ 14ba5cd70

bool __thiscall UDS_SkillData::IsSkillActive(UDS_SkillData *this)

{
  return this->bIsSkillActive;
}

// IsSuicide @ 14ba5d2d0

bool __thiscall UDS_SkillData::IsSuicide(UDS_SkillData *this)

{
  return this->bIsSuicide;
}

// IsTargetTrace @ 14ba5d460

bool __thiscall UDS_SkillData::IsTargetTrace(UDS_SkillData *this)

{
  return this->bIsTargetTrace;
}

// IsTargeting @ 14ba5d470

bool __thiscall UDS_SkillData::IsTargeting(UDS_SkillData *this)

{
  return this->bIsTargeting;
}

// IsToggleEnd @ 14ba5d770

bool __thiscall UDS_SkillData::IsToggleEnd(UDS_SkillData *this)

{
  return this->bIsToggleEnd;
}

// MakeSkillTable @ 14ba5dbe0

void __thiscall UDS_SkillData::MakeSkillTable(UDS_SkillData *this,SqlWeaponSkillSlotTable *param_1)

{
  (param_1->_impl_).selected_skill_id_ = this->SkillID;
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 8;
  (param_1->_impl_).skill_level_ = this->SkillLevel;
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 0x20;
  return;
}

// NotifySkillActiveChanged @ 14ba5e2f0

void __thiscall
UDS_SkillData::NotifySkillActiveChanged(UDS_SkillData *this,bool param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
  *this_00;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  UObject *local_48;
  UDS_SkillData *local_40;
  UDS_SkillData *local_38;
  UDS_SkillData *local_30;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4 == (UObject *)0x0) {
LAB_14ba5e347:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14ba5e347;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_48 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    FVar6 = local_res20;
    if (!param_1) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[5].field_0x8)
      ;
      if (bVar3) {
        TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                     *)&pUVar4[5].field_0x8,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar6,
                    param_2);
      }
      goto LAB_14ba5e4d1;
    }
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[4].field_0x10);
    if (bVar3 == param_1) {
      TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                   *)&pUVar4[4].field_0x10,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar6,
                  param_2);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2890360493099188052>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_SkillData.cpp"
                       ,0xac,"skillDataSet.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (!param_1) {
LAB_14ba5e4d1:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_30 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_30);
      this_00 = &this->OnActivateSubSkillEvent;
      FVar6 = local_50;
      goto LAB_14ba5e521;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_38 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_38);
  this_00 = &this->OnActivateSkillEvent;
  FVar6 = local_58;
LAB_14ba5e521:
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar6,param_2);
  return;
}

// OnChangedCoolTimeDecreaseValue @ 14ba60470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SkillData::OnChangedCoolTimeDecreaseValue(UDS_SkillData *this,int param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 unaff_XMM7 [16];
  undefined1 auStackY_1a8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this->CoolTimeDecreaseValue = param_1;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (this->CoolTimeDecreaseValue != 0) {
      roundps(unaff_XMM7,
              ZEXT416((uint)((__real_42c80000 - (float)this->CoolTimeDecreaseValue * __real_38d1b717
                             ) * this->BaseCoolTime)),1);
    }
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SkillData::OnChangedCoolTimeDecreaseValue",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_158.Ptr,0x1c3,
               L"Skill(%d) StatusValue:%d, BaseCoolTime:%.3f, Result:%.3f");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// OnChangedTagCallback @ 14ba60bb0

void __thiscall
UDS_SkillData::OnChangedTagCallback(UDS_SkillData *this,FGameplayTag *param_1,bool param_2)

{
  return;
}

// ResetCoolTime @ 14ba67f40

void __thiscall UDS_SkillData::ResetCoolTime(UDS_SkillData *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  this->EndCoolTime = dVar1;
  return;
}

// ResetData @ 14ba69180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_SkillData::ResetData(UDS_SkillData *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  (this->SkillStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  this->SkillID = 0;
  this->MainSkillID = 0;
  piVar1 = &(this->AttackLinkIDList).ArrayMax;
  this->SkillActLevelID = 0;
  this->SkillGrowLevelID = 0;
  this->SkillModeID = 0;
  this->SkillDuration = 0.0;
  this->SkillAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  this->bIsSkillActive = false;
  this->bIsRotationPlace = false;
  this->SkillTimeScale = 1.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillStartLocation).field0_0x0._s_0.Y = (double)uVar5;
  (this->SkillStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AttackLinkIDList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AttackLinkIDList).AllocatorInstance,0,piVar1);
  }
  this->SkillLevel = 1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->SkillAniIndexList,3,Default);
  this->SkillIconID = 0;
  this->WaitTimeUntilNextStep = 0.0;
  piVar1 = &(this->SkillCostList).ArrayMax;
  this->WaitEndTimeUntilNextStep = 0.0;
  this->SkillAvailableTime = 0.0;
  this->SkillAvailableEndTime = 0.0;
  this->GlobalCoolTime = 0.0;
  this->BaseCoolTime = 0.0;
  this->EndCoolTime = 0.0;
  this->CoolTimeDecreaseValue = 0;
  this->bIsSilenceUse = false;
  this->bIsStateConUse = false;
  this->bIsMoveConUse = false;
  this->bIsTargeting = false;
  this->bIsTargetTrace = false;
  this->bIsAutoSettingSkill = false;
  this->SkillType = Max;
  this->SkillUseType = Max;
  this->ToggleSkillType = Max;
  this->ControlMoveType = None;
  this->bIsToggleEnd = false;
  (this->SkillCostList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SkillCostList).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SkillGuideInfoList).ArrayMax;
  (this->SkillGuideInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->SkillGuideInfoList).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->SkillAngleData;
  bVar4 = 1 < *(int *)&(this->SkillAngleData).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->SkillAngleData).field_0xc;
  *(undefined4 *)&(this->SkillAngleData).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SkillAngleData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkillAngleData).field_0x34 = 0;
  iVar3 = *(int *)&(this->SkillAngleData).field_0x2c;
  *(undefined4 *)&(this->SkillAngleData).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SkillAngleData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkillAngleData).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->SkillAngleData).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  piVar1 = &(this->SmiteTargetList).ArrayMax;
  (this->SmiteTargetList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SmiteTargetList).AllocatorInstance,0,piVar1);
  }
  this->ObjectHandlingSkillType = None;
  return;
}

// SetAvailableTime @ 14ba6a320

void __thiscall UDS_SkillData::SetAvailableTime(UDS_SkillData *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    this->SkillAvailableEndTime = 0.0;
    return;
  }
  this->SkillAvailableTime = param_1;
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  *(undefined1 *)&this->_padding_ = 1;
  this->SkillAvailableEndTime = dVar3 + (double)param_1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetIsActiveSmite @ 14ba71660

void __thiscall
UDS_SkillData::SetIsActiveSmite(UDS_SkillData *this,bool param_1,ulong64 param_2,int param_3)

{
  undefined1 *puVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  ulong64 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  ulong64 local_res18;
  FDestructionSentinel local_48;
  
  this_00 = &this->SmiteTargetList;
  iVar11 = (this->SmiteTargetList).ArrayNum;
  pFVar13 = (this_00->AllocatorInstance).Data;
  pFVar2 = pFVar13 + (longlong)iVar11 * 8;
  local_res18 = param_2;
  if (param_1) {
    for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 8) {
      if (*(ulong64 *)pFVar13 == param_2) goto LAB_14ba7171e;
    }
    if (iVar11 == (this->SmiteTargetList).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&this_00->AllocatorInstance,&(this->SmiteTargetList).ArrayMax);
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    (this->SmiteTargetList).ArrayNum = iVar11 + 1;
    *(ulong64 *)(pFVar2 + (longlong)iVar11 * 8) = local_res18;
  }
  else {
    for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 8) {
      if (*(ulong64 *)pFVar13 == param_2) {
        TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res18);
        break;
      }
    }
  }
LAB_14ba7171e:
  uVar8 = local_res18;
  bVar5 = 0 < (this->SmiteTargetList).ArrayNum;
  this->bIsActiveSmite = bVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActivateSmiteEvent,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnActivateSmiteEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar14 = *(int *)&(this->OnActivateSmiteEvent).field_0x10 - 1;
  if (-1 < (int)uVar14) {
    lVar15 = (longlong)(int)uVar14 << 4;
    bVar7 = false;
    do {
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&(this->OnActivateSmiteEvent).field_0x10) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnActivateSmiteEvent).field_0x8;
      if (((*(int *)(lVar15 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar15 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,bVar5,uVar8,param_3), cVar10 == '\0')) {
        bVar7 = true;
      }
      lVar15 = lVar15 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  puVar1 = &(this->OnActivateSmiteEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnActivateSmiteEvent,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetNotUseSubSkillCoolTime @ 14ba72fa0

void __thiscall UDS_SkillData::SetNotUseSubSkillCoolTime(UDS_SkillData *this,float param_1)

{
  this->NotUseSubSkillCoolTime = param_1;
  return;
}

// SetWaitTimeUntilNextStep @ 14ba751e0

void __thiscall UDS_SkillData::SetWaitTimeUntilNextStep(UDS_SkillData *this,float param_1)

{
  double dVar1;
  
  this->WaitTimeUntilNextStep = param_1;
  if (param_1 <= 0.0) {
    this->WaitEndTimeUntilNextStep = 0.0;
    return;
  }
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  this->WaitEndTimeUntilNextStep = dVar1 + (double)param_1;
  return;
}

// StartSkill @ 14ba75f30

void __thiscall
UDS_SkillData::StartSkill
          (UDS_SkillData *this,TWeakObjectPtr<UDS_SkillAbilityContext,FWeakObjectPtr> param_1)

{
  EDS_SkillUseType EVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  ulong64 uVar8;
  UDS_SkillData *this_00;
  char cVar9;
  float fVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar6) {
LAB_14ba75fe6:
    UDS_TimeUtilManager::GetCurrentServerTime();
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    this->SkillStartTime = *(double *)&pUVar7[1].field_0x8;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    this->SkillEndTime = *(double *)&pUVar7[1].field_0x10;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    dVar4 = *(double *)&pUVar7[2].field_0x18;
    (this->SkillStartLocation).field0_0x0._s_0.X = *(double *)&pUVar7[2].field_0x10;
    (this->SkillStartLocation).field0_0x0._s_0.Y = dVar4;
    dVar4 = this->SkillEndTime;
    dVar5 = this->SkillStartTime;
    (this->SkillStartLocation).field0_0x0._s_0.Z = *(double *)&pUVar7[2].field_0x20;
    fVar10 = (float)((dVar4 - dVar5) / this->SkillDuration);
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                       (void *)0x0);
    if (bVar6) {
      cVar9 = '\0';
    }
    else {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
      cVar9 = pUVar7[1].field_0x8;
    }
    if (cVar9 != '\x02') goto LAB_14ba75fe6;
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    fVar10 = __real_3f800000;
    this->SkillStartTime = dVar4;
    this->SkillEndTime = dVar4 + this->SkillDuration;
  }
  this->SkillTimeScale = fVar10;
  this->WaitTimeUntilNextStep = this->InitialWaitTimeUntilNextStep;
  dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
  fVar10 = this->WaitTimeUntilNextStep;
  this->WaitEndTimeUntilNextStep = 0.0;
  this->SkillAvailableEndTime = 0.0;
  this->EndCoolTime = 0.0;
  this->ActiveSubSkillID = 0;
  this->StartSubSkillID = this->SkillID;
  this->bIsSkillActive = true;
  dVar5 = 0.0;
  this->ToggleUnableEndTime = (double)this->ToggleUnableTime + dVar4;
  if (0.0 < fVar10) {
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    dVar4 = dVar4 + (double)fVar10;
  }
  else {
    dVar4 = 0.0;
  }
  this->WaitEndTimeUntilNextStep = dVar4;
  EVar1 = this->SkillUseType;
  if (EVar1 == ActiveSkill) {
LAB_14ba760f2:
    bVar6 = this->bIsSkillActive == true;
  }
  else {
    if (EVar1 != ToggleSkill) {
      if (EVar1 != SkillModeChange) goto LAB_14ba7610c;
      goto LAB_14ba760f2;
    }
    bVar6 = this->bIsSkillActive == false;
  }
  if (bVar6) {
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
LAB_14ba7610c:
  iVar2 = this->MainSkillID;
  if ((iVar2 != 0) && (iVar3 = this->SkillID, iVar2 != iVar3)) {
    uVar8 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    if (iVar2 < 1) {
      iVar2 = iVar3;
    }
    GetData((ulong64)&local_res20,uVar8,SUB41(iVar2,0));
    bVar6 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar6) {
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res20);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
      local_res8 = local_res18;
      bVar6 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar6) {
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        this_00->StartSubSkillID = *(int *)&pUVar7[2].field_0x1c;
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        fVar10 = *(float *)&pUVar7[5].field_0x10;
        this_00->WaitTimeUntilNextStep = fVar10;
        if (0.0 < fVar10) {
          dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
          dVar5 = dVar5 + (double)fVar10;
        }
        this_00->WaitEndTimeUntilNextStep = dVar5;
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        this_00->NotUseSubSkillCoolTime = *(float *)&pUVar7[8].field_0x10;
        SetAvailableTime(this_00,0.0);
        *(undefined1 *)&this_00->_padding_ = 1;
        bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this_00->_padding_,
                           (void *)0x0);
        if (!bVar6) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->_padding_);
          pUVar7[4].field_0x8 = 1;
          bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                             (void *)0x0);
          if (!bVar6) {
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
            pUVar7[3].field_0x20 = 1;
          }
        }
      }
    }
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,1,this->bIsSkillActive);
  *(undefined1 *)&this->_padding_ = 1;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar7[4].field_0x8 = 1;
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                       (void *)0x0);
    if (!bVar6) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
      pUVar7[3].field_0x20 = 1;
    }
  }
  return;
}

// StartSubSkill @ 14ba76330

void __thiscall
UDS_SkillData::StartSubSkill
          (UDS_SkillData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  float fVar1;
  bool bVar2;
  UObject *pUVar3;
  double dVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    this->StartSubSkillID = *(int *)&pUVar3[2].field_0x1c;
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    fVar1 = *(float *)&pUVar3[5].field_0x10;
    this->WaitTimeUntilNextStep = fVar1;
    if (0.0 < fVar1) {
      dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar4 = dVar4 + (double)fVar1;
    }
    else {
      dVar4 = 0.0;
    }
    this->WaitEndTimeUntilNextStep = dVar4;
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    this->NotUseSubSkillCoolTime = *(float *)&pUVar3[8].field_0x10;
    SetAvailableTime(this,0.0);
    *(undefined1 *)&this->_padding_ = 1;
    bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[4].field_0x8 = 1;
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// UpdateSkillInfo @ 14ba80dc0

void __thiscall UDS_SkillData::UpdateSkillInfo(UDS_SkillData *this)

{
  EDS_SkillUseType EVar1;
  bool bVar2;
  
  EVar1 = this->SkillUseType;
  if (EVar1 != ActiveSkill) {
    if (EVar1 == ToggleSkill) {
      bVar2 = this->bIsSkillActive == false;
      goto LAB_14ba80dd7;
    }
    if (EVar1 != SkillModeChange) {
      return;
    }
  }
  bVar2 = this->bIsSkillActive == true;
LAB_14ba80dd7:
  if (!bVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ba80de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this,this->BaseCoolTime);
  return;
}

// UpdateSkillMoveAngle @ 14ba80e00

void __thiscall UDS_SkillData::UpdateSkillMoveAngle(UDS_SkillData *this,int param_1,int param_2)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  TPairInitializer<int_&,int_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int *local_10;
  
  this_00 = &this->SkillAngleData;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  if (*(int *)&(this->SkillAngleData).field_0x8 != *(int *)&(this->SkillAngleData).field_0x34) {
    puVar3 = *(undefined1 **)&(this->SkillAngleData).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SkillAngleData).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->SkillAngleData).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x10) == param_1) {
          if (iVar2 != -1) {
            piVar1 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                     ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    *)this_00,param_1);
            *piVar1 = param_2;
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&,int_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this_00,&local_res8,(bool *)&local_18);
  return;
}

// UpdateSubSkillInfo @ 14ba81960

void __thiscall UDS_SkillData::UpdateSubSkillInfo(UDS_SkillData *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong64 uVar5;
  UDS_SkillData *this_00;
  UObject *pUVar6;
  double dVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  iVar2 = this->MainSkillID;
  if ((iVar2 != 0) && (iVar3 = this->SkillID, iVar2 != iVar3)) {
    uVar5 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    if (iVar2 < 1) {
      iVar2 = iVar3;
    }
    GetData((ulong64)local_res18,uVar5,SUB41(iVar2,0));
    bVar4 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar4) {
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res18);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
      local_res8 = local_res10;
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar4) {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        this_00->StartSubSkillID = *(int *)&pUVar6[2].field_0x1c;
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        fVar1 = *(float *)&pUVar6[5].field_0x10;
        this_00->WaitTimeUntilNextStep = fVar1;
        if (0.0 < fVar1) {
          dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
          dVar7 = dVar7 + (double)fVar1;
        }
        else {
          dVar7 = 0.0;
        }
        this_00->WaitEndTimeUntilNextStep = dVar7;
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        this_00->NotUseSubSkillCoolTime = *(float *)&pUVar6[8].field_0x10;
        SetAvailableTime(this_00,0.0);
        *(undefined1 *)&this_00->_padding_ = 1;
        bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this_00->_padding_,
                           (void *)0x0);
        if (!bVar4) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->_padding_);
          pUVar6[4].field_0x8 = 1;
          bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                             (void *)0x0);
          if (!bVar4) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
            pUVar6[3].field_0x20 = 1;
          }
        }
      }
    }
  }
  return;
}

// UpdateSubSkillTimeProcess @ 14ba81b00

void __thiscall UDS_SkillData::UpdateSubSkillTimeProcess(UDS_SkillData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  float fVar13;
  FWeakObjectPtr local_res8;
  
  dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (((this->EndCoolTime <= dVar12) || ((float)(this->EndCoolTime - dVar12) <= 0.0)) ||
     (bVar3 = UDS_GameInstance::IsUseSkillCoolTime(), !bVar3)) {
    dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
    if ((this->WaitEndTimeUntilNextStep <= dVar12) ||
       ((float)(this->WaitEndTimeUntilNextStep - dVar12) <= 0.0)) {
      dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
      if ((this->SkillAvailableEndTime <= dVar12) ||
         ((float)(this->SkillAvailableEndTime - dVar12) <= 0.0)) {
        uVar10 = 0;
        bVar3 = true;
        if (this->StartSubSkillID == 0) {
          iVar9 = this->SkillID;
        }
        else {
          uVar11 = uVar10;
          iVar9 = 0;
          if (0 < (this->SubSkillIDList).ArrayNum + -1) {
            do {
              uVar8 = (uint)uVar10;
              uVar5 = 0;
              if ((int)uVar8 < (this->SubSkillIDList).ArrayNum) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar8 = uVar8 + 1;
              uVar10 = (ulonglong)uVar8;
              if (this->StartSubSkillID ==
                  *(int *)((this->SubSkillIDList).AllocatorInstance.Data + uVar11)) {
                uVar5 = 0;
                if ((int)uVar8 < (this->SubSkillIDList).ArrayNum) {
                  uVar5 = ~uVar8 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar9 = *(int *)((this->SubSkillIDList).AllocatorInstance.Data +
                                (longlong)(int)uVar8 * 4);
                break;
              }
              uVar11 = uVar11 + 4;
              iVar9 = 0;
            } while ((int)uVar8 < (this->SubSkillIDList).ArrayNum + -1);
          }
        }
        iVar1 = this->ActiveSubSkillID;
        if ((0 < iVar1) && (0 < this->StartSubSkillID)) {
          bVar3 = iVar1 == this->StartSubSkillID;
        }
        if ((iVar9 == 0) || (!bVar3)) {
          fVar13 = this->BaseCoolTime;
          if (0 < iVar1) {
            uVar6 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
            GetData((ulong64)&local_res8,uVar6,SUB41(iVar1,0));
            bVar3 = FWeakObjectPtr::IsValid(&local_res8);
            if (bVar3) {
              pUVar7 = FWeakObjectPtr::Get(&local_res8);
              if (pUVar7[2].field_0x19 == '\x01') {
                pUVar7 = FWeakObjectPtr::Get(&local_res8);
                fVar13 = *(float *)&pUVar7[8].field_0xc;
              }
              else {
                pUVar7 = FWeakObjectPtr::Get(&local_res8);
                fVar13 = *(float *)&pUVar7[8].field_0x10;
              }
            }
          }
          (**(code **)(this->_padding_ + 0x2e8))(this,fVar13);
          (**(code **)(this->_padding_ + 0x2d0))(this,0,0);
        }
        else {
          ActiveSubSkill(this,iVar9);
        }
      }
    }
  }
  return;
}


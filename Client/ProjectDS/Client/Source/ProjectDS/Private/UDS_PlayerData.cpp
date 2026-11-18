// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 73

// StaticClass @ 14b55e8f0

UClass * __cdecl UDS_PlayerData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerData",
               &Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton,
               StaticRegisterNativesUDS_PlayerData,0x300,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerData>,InternalVTableHelperCtorCaller<UDS_PlayerData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton;
}

// UDS_PlayerData @ 14b563be0

UDS_PlayerData * __thiscall
UDS_PlayerData::UDS_PlayerData(UDS_PlayerData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->HeroCharacterType = Kairos;
  this->_padding_ = (longlong)&___7UDS_PlayerData__6B_;
  *(undefined8 *)&this->PlayerLevelUpDel = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x10 = 0;
  *(undefined8 *)&this->PlayerLevelCapUpDel = 0;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x10 = 0;
  *(undefined8 *)&this->HaloPointChangedDelegate = 0;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AiRoundRecordDel = 0;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x8 = 0;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_MainTargetEntityID = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_MainTargetEntityID).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_MainTargetEntityID).field_0x10 = 0;
  (this->PlayerNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerNickname).Data.ArrayNum = 0;
  (this->PlayerNickname).Data.ArrayMax = 0;
  (this->CreateDT).Ticks = 0;
  (this->PlayerIconIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerIconIDList).ArrayNum = 0;
  (this->PlayerIconIDList).ArrayMax = 0;
  this->MainTargetEntityID = 0;
  this->InteractionID = 0;
  this->AiRoundRecord_WinCount = 0;
  this->AiRoundRecord_LoseCount = 0;
  this->AiRoundRecord_DamagePoint = 0;
  this->AiRoundRecord_HealPoint = 0;
  this->GuildUID = 0;
  *(undefined8 *)&this->BreachDetailInfoMap = 0;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x18 = 2;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x18 = 2;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x18 = 2;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedBreachDetailInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlayerSkillTargetInfoMap = 0;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedPlayerSkillTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedPenaltyStageDelegate = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedPenaltyStageListDelegate = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x18 = 2;
  return this;
}

// UDS_PlayerData @ 14b563df0

UDS_PlayerData * __thiscall
UDS_PlayerData::UDS_PlayerData(UDS_PlayerData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->HeroCharacterType = Kairos;
  this->_padding_ = (longlong)&___7UDS_PlayerData__6B_;
  *(undefined8 *)&this->PlayerLevelUpDel = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x10 = 0;
  *(undefined8 *)&this->PlayerLevelCapUpDel = 0;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x10 = 0;
  *(undefined8 *)&this->HaloPointChangedDelegate = 0;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AiRoundRecordDel = 0;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x8 = 0;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_MainTargetEntityID = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_MainTargetEntityID).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_MainTargetEntityID).field_0x10 = 0;
  (this->PlayerNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerNickname).Data.ArrayNum = 0;
  (this->PlayerNickname).Data.ArrayMax = 0;
  (this->CreateDT).Ticks = 0;
  (this->PlayerIconIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerIconIDList).ArrayNum = 0;
  (this->PlayerIconIDList).ArrayMax = 0;
  this->MainTargetEntityID = 0;
  this->InteractionID = 0;
  this->AiRoundRecord_WinCount = 0;
  this->AiRoundRecord_LoseCount = 0;
  this->AiRoundRecord_DamagePoint = 0;
  this->AiRoundRecord_HealPoint = 0;
  this->GuildUID = 0;
  *(undefined8 *)&this->BreachDetailInfoMap = 0;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->PlayerLevelUpDel).field_0x18 = 2;
  *(undefined8 *)&(this->PlayerLevelCapUpDel).field_0x18 = 2;
  *(undefined8 *)&(this->HaloPointChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->AiRoundRecordDel).field_0x18 = 2;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreachDetailInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedBreachDetailInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlayerSkillTargetInfoMap = 0;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->ChangedBreachDetailInfoDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlayerSkillTargetInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedPlayerSkillTargetInfoDelegate = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedPenaltyStageDelegate = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedPenaltyStageListDelegate = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedPenaltyStageDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedPenaltyStageListDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_PlayerData @ 14b564de0

void __thiscall UDS_PlayerData::~UDS_PlayerData(UDS_PlayerData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_PlayerData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedPenaltyStageListDelegate).field_0x8,
             *(int *)&(this->ChangedPenaltyStageListDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedPenaltyStageListDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedPenaltyStageListDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedPenaltyStageDelegate).field_0x8,
             *(int *)&(this->ChangedPenaltyStageDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedPenaltyStageDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedPenaltyStageDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedPlayerSkillTargetInfoDelegate).field_0x8,
             *(int *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedPlayerSkillTargetInfoDelegate);
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlayerSkillTargetInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PlayerSkillTargetInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedBreachDetailInfoDelegate).field_0x8,
             *(int *)&(this->ChangedBreachDetailInfoDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedBreachDetailInfoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedBreachDetailInfoDelegate);
  *(undefined4 *)&(this->BreachDetailInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BreachDetailInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BreachDetailInfoMap);
  pFVar2 = (this->PlayerIconIDList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlayerNickname).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->DataPropertyDelegate_MainTargetEntityID).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_MainTargetEntityID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AiRoundRecordDel).field_0x8,*(int *)&(this->AiRoundRecordDel).field_0x10);
  pvVar1 = *(void **)&(this->AiRoundRecordDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AiRoundRecordDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HaloPointChangedDelegate).field_0x8,
             *(int *)&(this->HaloPointChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->HaloPointChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HaloPointChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PlayerLevelCapUpDel).field_0x8,*(int *)&(this->PlayerLevelCapUpDel).field_0x10
            );
  pvVar1 = *(void **)&(this->PlayerLevelCapUpDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlayerLevelCapUpDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PlayerLevelUpDel).field_0x8,*(int *)&(this->PlayerLevelUpDel).field_0x10);
  pvVar1 = *(void **)&(this->PlayerLevelUpDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlayerLevelUpDel);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b567030

UClass * __cdecl UDS_PlayerData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerData",
               &Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton,
               StaticRegisterNativesUDS_PlayerData,0x300,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerData>,InternalVTableHelperCtorCaller<UDS_PlayerData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerData.InnerSingleton;
}

// InitByEntityInfo @ 14b567ee0

void __thiscall UDS_PlayerData::InitByEntityInfo(UDS_PlayerData *this)

{
  return;
}

// StaticRegisterNativesUDS_PlayerData @ 14b568030

void __cdecl UDS_PlayerData::StaticRegisterNativesUDS_PlayerData(void)

{
  return;
}

// AddPlayerIconIDList @ 14ba359e0

void __thiscall UDS_PlayerData::AddPlayerIconIDList(UDS_PlayerData *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  
  pTVar1 = &this->PlayerIconIDList;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  iVar4 = (this->PlayerIconIDList).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar4 * 4;
  while( true ) {
    if (pFVar5 == pFVar2) {
      if (iVar4 == (this->PlayerIconIDList).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,&(this->PlayerIconIDList).ArrayMax);
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      (this->PlayerIconIDList).ArrayNum = iVar4 + 1;
      *(int *)(pFVar2 + (longlong)iVar4 * 4) = param_1;
      *(undefined1 *)&this->_padding_ = 1;
      bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar3) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar6[4].field_0x8 = 1;
        bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                           (void *)0x0);
        if (!bVar3) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
          pUVar6[3].field_0x20 = 1;
        }
      }
      return;
    }
    if (*(int *)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 4;
  }
  return;
}

// AddPlayerSkillTargetInfo @ 14ba35ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_PlayerData::AddPlayerSkillTargetInfo
          (UDS_PlayerData *this,EDS_PlayerSkillType *param_1,PlayerSkillPreservedInfo *param_2)

{
  TMap<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
  *this_00;
  Vector *pVVar1;
  double dVar2;
  ulonglong uVar3;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *this_01;
  Vector *pVVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_108 [32];
  EDS_PlayerSkillTargetInfoChangeType local_d8;
  undefined1 local_d4 [4];
  FDS_PlayerSkillTargetInfo *local_d0;
  FDS_PlayerSkillTargetInfo *local_c8;
  FDS_PlayerSkillTargetInfo local_c0;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c0.EntityID = (param_2->_impl_).entity_id_;
  local_c0.bIsStuff = (param_2->_impl_).is_stuff_;
  local_c0.TableID = (param_2->_impl_).target_id_;
  local_c0.ZoneID = (param_2->_impl_).zone_id_;
  pVVar1 = (param_2->_impl_).position_;
  local_c0.EndTime = 0.0;
  local_c0.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c0.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pVVar4 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar4 = pVVar1;
  }
  local_c0.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  DS_Util::SetFVector(&local_c0.Position,pVVar4);
  local_c0.EndTime = (param_2->_impl_).end_time_;
  uVar8 = SUB84(local_c0.EndTime,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)local_c0.EndTime >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
  ;
  if ((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
       (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) &&
     (dVar2 = UDS_TimeUtilManager::GetCurrentServerTime(), dVar2 <= local_c0.EndTime)) {
    this_00 = &this->PlayerSkillTargetInfoMap;
    if (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8 !=
        *(int *)&(this->PlayerSkillTargetInfoMap).field_0x34) {
      puVar5 = *(undefined1 **)&(this->PlayerSkillTargetInfoMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->PlayerSkillTargetInfoMap).field_0x38;
      }
      iVar7 = *(int *)(puVar5 + ((ulonglong)
                                 (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x48 - 1) &
                                (ulonglong)*param_1) * 4);
      if (iVar7 != -1) {
        do {
          if (*(EDS_PlayerSkillType *)((longlong)iVar7 * 0x60 + *(longlong *)this_00) == *param_1) {
            if (iVar7 != -1) goto LAB_14ba35cb3;
            break;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x60 + 0x58 + *(longlong *)this_00);
        } while (iVar7 != -1);
      }
    }
    local_50 = 0;
    local_c8 = (FDS_PlayerSkillTargetInfo *)&local_88;
    local_78.AllocatorInstance.InlineData[0] = '\0';
    local_78.AllocatorInstance.InlineData[1] = '\0';
    local_78.AllocatorInstance.InlineData[2] = '\0';
    local_78.AllocatorInstance.InlineData[3] = '\0';
    local_78.AllocatorInstance.InlineData[4] = '\0';
    local_78.AllocatorInstance.InlineData[5] = '\0';
    local_78.AllocatorInstance.InlineData[6] = '\0';
    local_78.AllocatorInstance.InlineData[7] = '\0';
    local_78.AllocatorInstance.InlineData[8] = '\0';
    local_78.AllocatorInstance.InlineData[9] = '\0';
    local_78.AllocatorInstance.InlineData[10] = '\0';
    local_78.AllocatorInstance.InlineData[0xb] = '\0';
    local_78.AllocatorInstance.InlineData[0xc] = '\0';
    local_78.AllocatorInstance.InlineData[0xd] = '\0';
    local_78.AllocatorInstance.InlineData[0xe] = '\0';
    local_78.AllocatorInstance.InlineData[0xf] = '\0';
    local_40 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_78.NumBits = 0;
    local_78.MaxBits = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_d0 = (FDS_PlayerSkillTargetInfo *)param_1;
    TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_PlayerSkillType_const_&,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_&&>_>
              (this_00,(TPairInitializer<EDS_PlayerSkillType_const_&,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_&&>
                        *)local_d4,(bool *)(local_d4 + 4));
    local_40 = local_40 & 0xffffffff00000000;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    uVar3 = local_80 >> 0x20;
    local_80 = local_80 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_78.NumBits = 0;
    if (0x80 < (uint)local_78.MaxBits) {
      local_78.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
LAB_14ba35cb3:
    this_01 = (TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
               *)TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                 ::FindChecked(this_00,*param_1);
    local_d8 = Updated;
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      FVar6 = (this_01->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this_01->Hash;
      }
      iVar7 = *(int *)((longlong)FVar6 +
                      ((ulonglong)(this_01->HashSize - 1) &
                      (local_c0.EntityID >> 0x20) * 0x17 + local_c0.EntityID) * 4);
      if (iVar7 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&this_01->Elements + (longlong)iVar7 * 0x48) ==
              local_c0.EntityID) goto LAB_14ba35d29;
          iVar7 = *(int *)(*(longlong *)&this_01->Elements + 0x40 + (longlong)iVar7 * 0x48);
        } while (iVar7 != -1);
      }
    }
    local_d8 = Added;
LAB_14ba35d29:
    local_d0 = &local_c0;
    local_c8 = &local_c0;
    TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&,FDS_PlayerSkillTargetInfo_&>_>
              (this_01,(TPairInitializer<unsigned___int64_&,FDS_PlayerSkillTargetInfo_&> *)local_d4,
               (bool *)(local_d4 + 4));
    TMulticastDelegate<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ChangedPlayerSkillTargetInfoDelegate,param_1,&local_c0,&local_d8);
  }
  return;
}

// BindMainTargetCharSate @ 14ba36b70

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

void __thiscall UDS_PlayerData::BindMainTargetCharSate(UDS_PlayerData *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    UDS_CharStateData::GetData((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_PlayerData>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar2[7].field_0x20,(UDS_PlayerData *)(local_res10 + 1),(pmf_40b13b15)this);
    }
  }
  return;
}

// ChangeMainPlayerDataKey @ 14ba382f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_PlayerData::ChangeMainPlayerDataKey(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_DataManager *this;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerData::ChangeMainPlayerDataKey",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xe2,L"dataMgr is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380301539>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0xe3,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UDS_DataManager::ChangeDataSetContainerKey(this,MainPlayerEntityID,param_1);
    MainPlayerEntityID = param_1;
    GetData((ulong64)local_148,param_1,false);
    bVar2 = FWeakObjectPtr::IsValid(local_148);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_148);
      if (*(ulong64 *)&pUVar4[8].field_0x10 != param_1) {
        *(ulong64 *)&pUVar4[8].field_0x10 = param_1;
      }
    }
  }
  return;
}

// Created @ 14ba3c280

void __thiscall UDS_PlayerData::Created(UDS_PlayerData *this)

{
  return;
}

// Deleted @ 14ba3cc70

void __thiscall UDS_PlayerData::Deleted(UDS_PlayerData *this)

{
  bool bVar1;
  int iVar2;
  UDS_MountEvent *pUVar3;
  UObject *pUVar4;
  ulong64 uVar5;
  longlong lVar6;
  uint uVar7;
  FWeakObjectPtr local_res8;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  pUVar3 = UDS_MountEvent::GetEvent();
  if (pUVar3 != (UDS_MountEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::Remove<UDS_PlayerData>
              (&pUVar3->OnChangedMountStatus_Filtered,this);
  }
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      uVar5 = *(ulong64 *)(pUVar4 + 1);
      goto LAB_14ba3cce2;
    }
  }
  uVar5 = 0;
LAB_14ba3cce2:
  if (MainPlayerEntityID == uVar5) {
    DS_ItemDataUtil::GetItemDataSet();
    bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0x13].field_0x18,this
                );
    }
  }
  local_res8 = (FWeakObjectPtr)this->PlayerUID;
  uVar7 = local_res8.ObjectSerialNumber * 0x17 + local_res8.ObjectIndex;
  if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._8_4_ !=
      UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._52_4_) {
    lVar6 = 0x154cf7318;
    if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_ != 0) {
      lVar6 = UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_;
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._72_4_ - 1 & uVar7) * 4);
    if (iVar2 != -1) {
      while (*(FWeakObjectPtr *)
              (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + (longlong)iVar2 * 0x18) !=
             local_res8) {
        iVar2 = *(int *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + 0x10 +
                        (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
      ::RemoveImpl<__int64>
                ((TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
                  *)&UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap,uVar7,(long64 *)&local_res8);
    }
  }
  return;
}

// FindOrAddData @ 14ba40bf0

TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> __cdecl
UDS_PlayerData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetBreachDetailInfo @ 14ba451f0

FDS_BreachDetailInfo * __thiscall
UDS_PlayerData::GetBreachDetailInfo
          (UDS_PlayerData *this,FDS_BreachDetailInfo *__return_storage_ptr__,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_BreachDetailInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->BreachDetailInfoMap).field_0x8 !=
      *(int *)&(this->BreachDetailInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->BreachDetailInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BreachDetailInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->BreachDetailInfoMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->BreachDetailInfoMap;
      do {
        if (*(ulong64 *)((longlong)iVar2 * 0x58 + lVar1) == param_1) {
          pFVar3 = TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
                                  *)&this->BreachDetailInfoMap,param_1);
          FDS_BreachDetailInfo::FDS_BreachDetailInfo(__return_storage_ptr__,pFVar3);
          return __return_storage_ptr__;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x58 + 0x50 + lVar1);
      } while (iVar2 != -1);
    }
  }
  __return_storage_ptr__->StuffPortalEntityID = 0;
  __return_storage_ptr__->RewardGrade = 0;
  ::FString::FString(&__return_storage_ptr__->FirstPlayerName,"");
  __return_storage_ptr__->FinderEntityID = 0;
  __return_storage_ptr__->CurrentTryCount = 0;
  __return_storage_ptr__->MaxTryCount = 0;
  __return_storage_ptr__->LifeEndTime = 0.0;
  __return_storage_ptr__->BreachBaseID = 0;
  __return_storage_ptr__->NeedTicketType = None;
  __return_storage_ptr__->NeedTicketValue = 0;
  return __return_storage_ptr__;
}

// GetCharEntityType @ 14ba45960

EDS_EntityType __thiscall UDS_PlayerData::GetCharEntityType(UDS_PlayerData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
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
      return (*(ulong64 *)(pUVar2 + 1) != MainPlayerEntityID) + MainCharacter;
    }
  }
  return (MainPlayerEntityID != 0) + MainCharacter;
}

// GetCharacterCount @ 14ba45d20

int __thiscall UDS_PlayerData::GetCharacterCount(UDS_PlayerData *this)

{
  return 1;
}

// GetCurrentCharEntityIDByPlayerUID @ 14ba46ab0

ulong64 __cdecl UDS_PlayerData::GetCurrentCharEntityIDByPlayerUID(long64 param_1)

{
  int iVar1;
  bool bVar2;
  ulong64 *puVar3;
  UObject *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._8_4_ !=
      UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._52_4_) {
    lVar5 = 0x154cf7318;
    if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_ != 0) {
      lVar5 = UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar5 + (ulonglong)
                                  (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._72_4_ - 1 &
                                  (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + 0x10 +
                        (longlong)iVar1 * 0x18)) {
      if (*(longlong *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + (longlong)iVar1 * 0x18)
          == param_1) {
        puVar3 = TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                 ::FindChecked((TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                                *)&UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap,param_1);
        if (*puVar3 != 0) {
          GetData((ulong64)&local_res8,*puVar3,false);
          goto LAB_14ba46b40;
        }
        break;
      }
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
LAB_14ba46b40:
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    return 0;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  return *(ulong64 *)&pUVar4[8].field_0x10;
}

// GetData @ 14ba49750

TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> __cdecl
UDS_PlayerData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_PlayerData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_PlayerData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_PlayerDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba497df:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_PlayerData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba497df;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_PlayerData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_38,(void *)0x0);
      if (!bVar2) {
LAB_14ba4983a:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_PlayerDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (bVar2) goto LAB_14ba49982;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba498a9:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_PlayerData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba498a9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_PlayerData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar2) goto LAB_14ba4983a;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_PlayerData>(pUVar5);
    if (pUVar7 != (UDS_PlayerData *)0x0) {
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
        goto LAB_14ba49989;
      }
    }
  }
LAB_14ba49982:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_PlayerData *)0x0;
LAB_14ba49989:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataByPlayerUID @ 14ba4a170

TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> __cdecl
UDS_PlayerData::GetDataByPlayerUID(long64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  long64 in_RDX;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._8_4_ !=
      UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._52_4_) {
    lVar3 = 0x154cf7318;
    if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_ != 0) {
      lVar3 = UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar3 + (ulonglong)
                                  (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._72_4_ - 1 &
                                  (int)((ulonglong)in_RDX >> 0x20) * 0x17 + (int)in_RDX) * 4);
        iVar1 != -1;
        iVar1 = *(int *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + 0x10 +
                        (longlong)iVar1 * 0x18)) {
      if (*(longlong *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + (longlong)iVar1 * 0x18)
          == in_RDX) {
        puVar2 = TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                 ::FindChecked((TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                                *)&UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap,in_RDX);
        if (*puVar2 != 0) {
          GetData(param_1,*puVar2,false);
          return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
        }
        break;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetIsMountPenalty @ 14ba4c5e0

bool __cdecl UDS_PlayerData::GetIsMountPenalty(EDS_PenaltyType *param_1)

{
  EDS_PenaltyType EVar1;
  
  EVar1 = *param_1;
  if (((EVar1 != Weight_Mount) && (EVar1 != Hunger_Mount)) && (EVar1 != Fatigue_Mount)) {
    return false;
  }
  return true;
}

// GetMainPlayerCurrentCharID @ 14ba4cc50

int __cdecl UDS_PlayerData::GetMainPlayerCurrentCharID(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetData((ulong64)local_res8,MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return *(int *)&pUVar2[8].field_0x18;
  }
  return 0;
}

// GetMainPlayerCurrentEntityID @ 14ba4cca0

ulong64 __cdecl UDS_PlayerData::GetMainPlayerCurrentEntityID(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetData((ulong64)local_res8,MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return *(ulong64 *)&pUVar2[8].field_0x10;
  }
  return 0;
}

// GetMainPlayerData @ 14ba4ccf0

TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> __cdecl UDS_PlayerData::GetMainPlayerData(void)

{
  FWeakObjectPtr in_RCX;
  
  GetData((ulong64)in_RCX,MainPlayerEntityID,false);
  return (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>)in_RCX;
}

// GetPlayerExpRatio @ 14ba4e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UDS_PlayerData::GetPlayerExpRatio(UDS_PlayerData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_PlayerGradeTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  float fVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar3 = FDS_PlayerGradeTableRow::Get((longlong)this->PlayerLevel,true);
  if (pFVar3 == (FDS_PlayerGradeTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerData::GetPlayerExpRatio",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x2bf,L"Faield to Get PlayerGradeTable.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380302016>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x2c0,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)this->PlayerExp / (float)pFVar3->PlayerReqExp;
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
  }
  return fVar5;
}

// GetPlayerSkillTargetInfo @ 14ba4e1b0

bool __thiscall
UDS_PlayerData::GetPlayerSkillTargetInfo
          (UDS_PlayerData *this,EDS_PlayerSkillType *param_1,ulong64 *param_2,
          FDS_PlayerSkillTargetInfo *param_3)

{
  EDS_PlayerSkillType EVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  bool bVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  int iVar8;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *this_00;
  FDS_PlayerSkillTargetInfo *pFVar9;
  undefined1 *puVar10;
  
  EVar1 = *param_1;
  if (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8 !=
      *(int *)&(this->PlayerSkillTargetInfoMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->PlayerSkillTargetInfoMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PlayerSkillTargetInfoMap).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->PlayerSkillTargetInfoMap).field_0x48 - 1) &
                    (ulonglong)EVar1) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->PlayerSkillTargetInfoMap;
      do {
        if (*(EDS_PlayerSkillType *)((longlong)iVar8 * 0x60 + lVar2) == EVar1) {
          this_00 = TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                    ::FindChecked(&this->PlayerSkillTargetInfoMap,EVar1);
          uVar3 = *param_2;
          if (*(int *)&this_00->field_0x8 == *(int *)&this_00->field_0x34) {
            return false;
          }
          puVar10 = *(undefined1 **)&this_00->field_0x40;
          if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
            puVar10 = &this_00->field_0x38;
          }
          iVar8 = *(int *)(puVar10 +
                          ((uVar3 >> 0x20) * 0x17 + uVar3 &
                          (ulonglong)(*(int *)&this_00->field_0x48 - 1)) * 4);
          if (iVar8 == -1) {
            return false;
          }
          do {
            if (*(ulonglong *)(*(longlong *)this_00 + (longlong)iVar8 * 0x48) == uVar3) {
              pFVar9 = TMapBase<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
                       ::FindChecked((TMapBase<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
                                      *)this_00,uVar3);
              bVar5 = pFVar9->bIsStuff;
              uVar6 = *(undefined3 *)&pFVar9->field_0x9;
              iVar8 = pFVar9->TableID;
              param_3->EntityID = pFVar9->EntityID;
              param_3->bIsStuff = bVar5;
              *(undefined3 *)&param_3->field_0x9 = uVar6;
              param_3->TableID = iVar8;
              uVar7 = *(undefined4 *)&pFVar9->field_0x14;
              dVar4 = (pFVar9->Position).field0_0x0._s_0.X;
              param_3->ZoneID = pFVar9->ZoneID;
              *(undefined4 *)&param_3->field_0x14 = uVar7;
              (param_3->Position).field0_0x0._s_0.X = dVar4;
              dVar4 = (pFVar9->Position).field0_0x0._s_0.Z;
              (param_3->Position).field0_0x0._s_0.Y = (pFVar9->Position).field0_0x0._s_0.Y;
              (param_3->Position).field0_0x0._s_0.Z = dVar4;
              param_3->EndTime = pFVar9->EndTime;
              return true;
            }
            iVar8 = *(int *)(*(longlong *)this_00 + 0x40 + (longlong)iVar8 * 0x48);
          } while (iVar8 != -1);
          return false;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + 0x58 + lVar2);
      } while (iVar8 != -1);
    }
  }
  return false;
}

// GetPlayerSkillTargetInfoMap @ 14ba4e2e0

bool __thiscall
UDS_PlayerData::GetPlayerSkillTargetInfoMap
          (UDS_PlayerData *this,EDS_PlayerSkillType *param_1,
          TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
          *param_2)

{
  EDS_PlayerSkillType EVar1;
  longlong lVar2;
  int iVar3;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8 !=
      *(int *)&(this->PlayerSkillTargetInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PlayerSkillTargetInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PlayerSkillTargetInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->PlayerSkillTargetInfoMap).field_0x48 - 1)
                              & (ulonglong)EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->PlayerSkillTargetInfoMap;
      do {
        if (*(EDS_PlayerSkillType *)((longlong)iVar3 * 0x60 + lVar2) == EVar1) {
          pTVar4 = TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                   ::FindChecked(&this->PlayerSkillTargetInfoMap,EVar1);
          if (param_2 != pTVar4) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)&param_2->field_0x38,
                       (int *)&param_2->field_0x48,
                       (ForElementType<FSetElementId> *)&pTVar4->field_0x38,
                       *(int *)&pTVar4->field_0x48);
            iVar3 = *(int *)&pTVar4->field_0x8;
            TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_2,iVar3);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar3,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                       (int *)&param_2->field_0xc);
            *(undefined4 *)&param_2->field_0x30 = *(undefined4 *)&pTVar4->field_0x30;
            *(undefined4 *)&param_2->field_0x34 = *(undefined4 *)&pTVar4->field_0x34;
            if (&param_2->field_0x10 != &pTVar4->field_0x10) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,
                         (TBitArray<FDefaultBitArrayAllocator> *)&pTVar4->field_0x10);
            }
            if (iVar3 != 0) {
              memcpy(*(void **)param_2,*(void **)pTVar4,(longlong)iVar3 * 0x48);
            }
          }
          return true;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// GetSustainPenaltyGroupID @ 14ba50470

int __cdecl UDS_PlayerData::GetSustainPenaltyGroupID(EDS_PenaltyType *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*param_1) {
  case Weight_Char:
    return 0xb;
  case Weight_Mount:
    return 0xc;
  case Hunger_Char:
    return 0x15;
  case Hunger_Mount:
    return 0x16;
  case Fatigue_Char:
    return 0x1f;
  case Fatigue_Mount:
    return 0x20;
  case ItemDurability:
    iVar1 = 0x29;
  }
  return iVar1;
}

// GetSustainPenaltyTable @ 14ba504f0

FDS_SustainPenaltyTableRow * __cdecl
UDS_PlayerData::GetSustainPenaltyTable(EDS_PenaltyType *param_1,EDS_PenaltyStage *param_2)

{
  FDS_SustainPenaltyTableRow *pFVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(*param_1) {
  case Weight_Char:
    iVar2 = 0xb;
    break;
  case Weight_Mount:
    iVar2 = 0xc;
    break;
  case Hunger_Char:
    iVar2 = 0x15;
    break;
  case Hunger_Mount:
    iVar2 = 0x16;
    break;
  case Fatigue_Char:
    iVar2 = 0x1f;
    break;
  case Fatigue_Mount:
    iVar2 = 0x20;
    break;
  case ItemDurability:
    iVar2 = 0x29;
  }
  pFVar1 = FDS_SustainPenaltyTableRow::Get((longlong)(int)(iVar2 * 100 + *param_2),true);
  return pFVar1;
}

// HasPlayerSkillTargetInfo @ 14ba51b00

bool __thiscall
UDS_PlayerData::HasPlayerSkillTargetInfo
          (UDS_PlayerData *this,EDS_PlayerSkillType *param_1,ulong64 *param_2)

{
  EDS_PlayerSkillType EVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar5;
  undefined1 *puVar6;
  
  EVar1 = *param_1;
  if (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8 !=
      *(int *)&(this->PlayerSkillTargetInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PlayerSkillTargetInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PlayerSkillTargetInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->PlayerSkillTargetInfoMap).field_0x48 - 1)
                              & (ulonglong)EVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->PlayerSkillTargetInfoMap;
      do {
        if (*(EDS_PlayerSkillType *)((longlong)iVar4 * 0x60 + lVar2) == EVar1) {
          pTVar5 = TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                   ::FindChecked(&this->PlayerSkillTargetInfoMap,EVar1);
          uVar3 = *param_2;
          if (*(int *)&pTVar5->field_0x8 == *(int *)&pTVar5->field_0x34) goto LAB_14ba51bd7;
          puVar6 = *(undefined1 **)&pTVar5->field_0x40;
          if (*(undefined1 **)&pTVar5->field_0x40 == (undefined1 *)0x0) {
            puVar6 = &pTVar5->field_0x38;
          }
          iVar4 = *(int *)(puVar6 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                                    (ulonglong)(*(int *)&pTVar5->field_0x48 - 1)) * 4);
          if (iVar4 == -1) goto LAB_14ba51bd7;
          goto LAB_14ba51bc0;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar2);
      } while (iVar4 != -1);
    }
  }
  return false;
  while (iVar4 = *(int *)(*(longlong *)pTVar5 + 0x40 + (longlong)iVar4 * 0x48), iVar4 != -1) {
LAB_14ba51bc0:
    if (*(ulonglong *)(*(longlong *)pTVar5 + (longlong)iVar4 * 0x48) == uVar3) goto LAB_14ba51bdc;
  }
LAB_14ba51bd7:
  iVar4 = -1;
LAB_14ba51bdc:
  return iVar4 != -1;
}

// IsContainBreachDetailInfo @ 14ba5aa50

bool __thiscall UDS_PlayerData::IsContainBreachDetailInfo(UDS_PlayerData *this,int param_1)

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
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  FString local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  
  iVar13 = 0;
  puVar1 = &(this->BreachDetailInfoMap).field_0x10;
  iVar3 = *(int *)&(this->BreachDetailInfoMap).field_0x28;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->BreachDetailInfoMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba5aafd;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ba5aafd:
  uVar11 = *(uint *)&(this->BreachDetailInfoMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar7,iVar13);
  TStack_b0.CurrentBitIndex = iVar8;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_b0._28_4_ = iVar8;
  TStack_b0.BaseBitIndex = iVar15;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->BreachDetailInfoMap).field_0x8 -
                       *(int *)&(this->BreachDetailInfoMap).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->BreachDetailInfoMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar14 = *(undefined1 **)&(this->BreachDetailInfoMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba5ac00;
      uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
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
LAB_14ba5ac00:
  while( true ) {
    if (*(int *)&(this->BreachDetailInfoMap).field_0x8 -
        *(int *)&(this->BreachDetailInfoMap).field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar11) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)&this->BreachDetailInfoMap;
    lVar12 = (longlong)TStack_b0.CurrentBitIndex * 0x58;
    local_88 = *(undefined8 *)(lVar12 + lVar9);
    local_80 = *(undefined8 *)(lVar12 + 8 + lVar9);
    local_78 = *(undefined4 *)(lVar12 + 0x10 + lVar9);
    ::FString::FString(&local_70,(FString *)(lVar9 + 0x18 + lVar12));
    local_60 = *(undefined8 *)(lVar12 + 0x28 + lVar9);
    local_58 = *(undefined4 *)(lVar12 + 0x30 + lVar9);
    local_54 = *(undefined4 *)(lVar12 + 0x34 + lVar9);
    local_50 = *(undefined8 *)(lVar12 + 0x38 + lVar9);
    local_48 = *(int *)(lVar12 + 0x40 + lVar9);
    local_44 = *(undefined1 *)(lVar12 + 0x44 + lVar9);
    local_40 = *(undefined4 *)(lVar12 + 0x48 + lVar9);
    if (local_48 == param_1) {
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return false;
}

// IsHaveChar @ 14ba5b6d0

bool __thiscall UDS_PlayerData::IsHaveChar(UDS_PlayerData *this,int param_1)

{
  return true;
}

// IsHavePlayerIcon @ 14ba5b6e0

bool __thiscall UDS_PlayerData::IsHavePlayerIcon(UDS_PlayerData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->PlayerIconIDList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->PlayerIconIDList).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// IsPlayerExpMax @ 14ba5c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_PlayerData::IsPlayerExpMax(UDS_PlayerData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_PlayerGradeTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar4 = FDS_PlayerGradeTableRow::Get((longlong)this->PlayerLevel,true);
  if (pFVar4 == (FDS_PlayerGradeTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerData::IsPlayerExpMax",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x3ab,L"Faield to Get PlayerGradeTable.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380302252>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x3ac,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  else {
    bVar2 = pFVar4->PlayerReqExp <= this->PlayerExp;
  }
  return bVar2;
}

// IsPlayerLevelCapBlock @ 14ba5c250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_PlayerData::IsPlayerLevelCapBlock(UDS_PlayerData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_PlayerGradeTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar4 = FDS_PlayerGradeTableRow::Get((longlong)this->PlayerLevel,true);
  if (pFVar4 == (FDS_PlayerGradeTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerData::IsPlayerLevelCapBlock",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x301,L"Faield to Get PlayerGradeTable.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380302082>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x302,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (((pFVar4->ID_GradeUpCondition != 0) &&
           (this->PlayerLevelCap < pFVar4->ID_GradeUpCondition)) &&
          (bVar2 = IsPlayerExpMax(this), bVar2)) {
    return true;
  }
  return false;
}

// IsPlayerLevelMax @ 14ba5c370

bool __thiscall UDS_PlayerData::IsPlayerLevelMax(UDS_PlayerData *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined1 local_res8 [8];
  TArray<FDS_PlayerGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_PlayerGradeTableRow::GetAll(&local_28);
  iVar5 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 8;
  uVar6 = local_28._8_8_;
  FVar7.Data = local_28.AllocatorInstance.Data;
  iVar3 = 0;
  while( true ) {
    iVar8 = iVar3;
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<FDS_PlayerGradeTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
      uVar6 = local_28._8_8_;
    }
    if (FVar7.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar7.Data;
    FVar7.Data = FVar7.Data + 8;
    iVar3 = *(int *)(lVar2 + 0x20);
    if (*(int *)(lVar2 + 0x20) <= iVar8) {
      iVar3 = iVar8;
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->PlayerLevel < iVar8) || (bVar4 = IsPlayerExpMax(this), !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// IsPlayerLevelMaxOrCapBlock @ 14ba5c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_PlayerData::IsPlayerLevelMaxOrCapBlock(UDS_PlayerData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_PlayerGradeTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  int iVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  TArray<FDS_PlayerGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar10 = 0;
  FDS_PlayerGradeTableRow::GetAll(&local_160);
  iVar7 = local_160.ArrayNum;
  pFVar1 = local_160.AllocatorInstance.Data + (longlong)iVar7 * 8;
  uVar8 = local_160._8_8_;
  FVar9.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      local_168[0] = 0;
      `TCheckedPointerIterator<FDS_PlayerGradeTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_168);
      uVar8 = local_160._8_8_;
    }
    if (FVar9.Data == pFVar1) break;
    if (iVar10 < *(int *)(*(longlong *)FVar9.Data + 0x20)) {
      iVar10 = *(int *)(*(longlong *)FVar9.Data + 0x20);
    }
    FVar9.Data = FVar9.Data + 8;
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (this->PlayerLevel < iVar10) {
LAB_14ba5c4ab:
    pFVar5 = FDS_PlayerGradeTableRow::Get((longlong)this->PlayerLevel,true);
    if (pFVar5 == (FDS_PlayerGradeTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PlayerData::IsPlayerLevelCapBlock",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x301,L"Faield to Get PlayerGradeTable.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9202793448380302082>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                         ,0x302,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else if ((pFVar5->ID_GradeUpCondition != 0) &&
            (this->PlayerLevelCap < pFVar5->ID_GradeUpCondition)) {
      bVar3 = IsPlayerExpMax(this);
      if (bVar3) goto LAB_14ba5c5b0;
    }
    bVar3 = false;
  }
  else {
    bVar3 = IsPlayerExpMax(this);
    if (!bVar3) goto LAB_14ba5c4ab;
LAB_14ba5c5b0:
    bVar3 = true;
  }
  return bVar3;
}

// OnBreachDetailInfoFailure @ 14ba5fe80

void __thiscall
UDS_PlayerData::OnBreachDetailInfoFailure
          (UDS_PlayerData *this,EDS_ErrorCode param_1,BreachDetailInfoResponse *param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FDS_BreachDetailInfo local_58;
  
  FDS_BreachDetailInfo::FDS_BreachDetailInfo(&local_58,param_2);
  uVar2 = (param_2->_impl_).stuffportal_entity_id_;
  uVar5 = (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2;
  if (*(int *)&(this->BreachDetailInfoMap).field_0x8 !=
      *(int *)&(this->BreachDetailInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->BreachDetailInfoMap).field_0x40;
    iVar1 = *(int *)&(this->BreachDetailInfoMap).field_0x48;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->BreachDetailInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(iVar1 - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->BreachDetailInfoMap).field_0x0;
      do {
        if (*(ulong64 *)((longlong)iVar4 * 0x58 + lVar3) == uVar2) {
          iVar1 = *(int *)(puVar6 + ((longlong)iVar1 - 1U & (longlong)(int)uVar5) * 4);
          goto joined_r0x00014ba5ff18;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x58 + 0x50 + lVar3);
      } while (iVar4 != -1);
    }
  }
LAB_14ba5ff41:
  TMulticastDelegate<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ChangedBreachDetailInfoDelegate,&local_58,Removed);
  if (local_58.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FirstPlayerName.Data.AllocatorInstance.Data);
  }
  return;
joined_r0x00014ba5ff18:
  if (iVar1 == -1) goto LAB_14ba5ff41;
  if (*(ulong64 *)((longlong)iVar1 * 0x58 + lVar3) == uVar2) {
    TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                     *)&this->BreachDetailInfoMap,iVar1);
    goto LAB_14ba5ff41;
  }
  iVar1 = *(int *)((longlong)iVar1 * 0x58 + 0x50 + lVar3);
  goto joined_r0x00014ba5ff18;
}

// OnChangedCharState_MainTarget @ 14ba60410

void __thiscall
UDS_PlayerData::OnChangedCharState_MainTarget
          (UDS_PlayerData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    if (((*(uint *)&pUVar2[2].field_0x18 >> 0x12 & 1) == 0) &&
       (pUVar2 = FWeakObjectPtr::Get(local_res10), (*(uint *)&pUVar2[2].field_0x18 >> 0x15 & 1) == 0
       )) {
      return;
    }
    SetMainTargetEntityID(this,0);
  }
  return;
}

// OnChangedStatus_PenaltyStage_Weight @ 14ba60890

void __thiscall
UDS_PlayerData::OnChangedStatus_PenaltyStage_Weight(UDS_PlayerData *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  UDS_ItemDataSet *pUVar4;
  UDS_CharStatusData *pUVar5;
  UObject *pUVar6;
  float fVar7;
  ulong64 uStackX_8;
  float afStackX_10 [2];
  EDS_PenaltyType aEStackX_18 [2];
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_38;
  FWeakObjectPtr FStack_30;
  FWeakObjectPtr aFStack_28 [2];
  
  UDS_CharStatusData::GetData((ulong64)&FStack_38);
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&FStack_38,(void *)0x0);
  if (bVar1) {
    return;
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&FStackX_20,(void *)0x0);
  if (bVar1) {
    return;
  }
  aEStackX_18[0] = Weight_Char;
  pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&FStackX_20);
  iVar3 = UDS_ItemDataSet::GetInventoryWeight(pUVar4,PlayerNormal);
  afStackX_10[0] = (float)iVar3;
  pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&FStack_38);
  uStackX_8._0_4_ = UDS_CharStatusData::GetMaxStatus(pUVar5,CharLoadCapacity);
  bVar1 = UpdatePenaltyStage(this,aEStackX_18,afStackX_10,(float *)&uStackX_8,0);
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&FStack_30);
  bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&FStack_30,(void *)0x0);
  if ((!bVar2) && (pUVar6 = FWeakObjectPtr::Get(&FStack_30), *(longlong *)(pUVar6 + 5) != 0)) {
    UDS_CharStatusData::GetData((ulong64)aFStack_28);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)aFStack_28,(void *)0x0);
    if (!bVar2) {
      aEStackX_18[0] = Weight_Mount;
      pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&FStackX_20);
      iVar3 = UDS_ItemDataSet::GetInventoryWeight(pUVar4,Mount);
      afStackX_10[0] = (float)iVar3;
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(aFStack_28);
      fVar7 = UDS_CharStatusData::GetMaxStatus(pUVar5,MountLoadCapacity);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,fVar7);
      bVar2 = UpdatePenaltyStage(this,aEStackX_18,afStackX_10,(float *)&uStackX_8,0);
      if (bVar2) goto LAB_14ba801c8;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_14ba801c8:
  uStackX_8 = this->CurrentCharEntityID;
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangedPenaltyStageListDelegate,&uStackX_8);
  return;
}

// OnMainCharacterSwitchComplete @ 14ba60f90

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
UDS_PlayerData::OnMainCharacterSwitchComplete
          (UDS_PlayerData *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UDS_CharStatusData *pUVar2;
  FDS_StatusInfo *pFVar3;
  FDS_StatusInfo *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  undefined1 local_158 [272];
  void *local_48;
  TVector<double>_u_0 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1 == (FDS_EntityBase *)0x0) || (param_2 == (FDS_EntityBase *)0x0)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
               "UDS_PlayerData::OnMainCharacterSwitchComplete",0x2d,Yes);
    pwVar7 = L"Entity is nullptr.";
    uVar6 = 0x1e1;
  }
  else {
    UDS_CharStatusData::GetData((ulong64)&local_168);
    UDS_CharStatusData::GetData((ulong64)&local_160);
    bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_168,(void *)0x0);
    if ((!bVar1) &&
       (bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_160,
                           (void *)0x0), !bVar1)) {
      pUVar2 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_168);
      pFVar3 = UDS_CharStatusData::GetStatusInfo(pUVar2,CharLoadCapacity);
      pUVar2 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_160);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(pUVar2,CharLoadCapacity);
      if ((pFVar3 != (FDS_StatusInfo *)0x0) && (pFVar4 != (FDS_StatusInfo *)0x0)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar3->ChangeMaxValueDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_PlayerData>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar4->ChangeMaxValueDelegate,(UDS_PlayerData *)local_158,(pmf_e4cf2c55)this);
        UpdatePenaltyStage_Weight(this);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                 "UDS_PlayerData::OnMainCharacterSwitchComplete",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,(wchar_t *)local_40._s_0.X,500,L"StatusInfo is nullptr.");
      if (local_48 == (void *)0x0) {
        return;
      }
      FMemory::Free(local_48);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
               "UDS_PlayerData::OnMainCharacterSwitchComplete",0x2d,Yes);
    pwVar7 = L"CharStatusData is nullptr.";
    uVar6 = 0x1ec;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,(wchar_t *)local_40._s_0.X,uVar6,pwVar7);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// OnUpdatedInventory @ 14ba61490

void __thiscall UDS_PlayerData::OnUpdatedInventory(UDS_PlayerData *this,EDS_InventoryUpdate param_1)

{
  if ((param_1 & Wieght) != None) {
    UpdatePenaltyStage_Weight(this);
  }
  if (((ulonglong)param_1 >> 0xd & 1) != 0) {
    UpdatePenaltyState_ItemDurability(this);
  }
  return;
}

// PrepareCharacterSwitch @ 14ba614d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PlayerData::PrepareCharacterSwitch(UDS_PlayerData *this)

{
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  double *pdVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  undefined1 local_150 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_MovementCore::GetMovementCore((ulong64)&local_158);
  bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerData::PrepareCharacterSwitch",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1d3,L"mainPlayerMovementCore is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&local_158);
    pdVar5 = (double *)(**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4,local_150);
    dVar1 = pdVar5[1];
    (this->Position).field0_0x0._s_0.X = *pdVar5;
    (this->Position).field0_0x0._s_0.Y = dVar1;
    (this->Position).field0_0x0._s_0.Z = pdVar5[2];
    this->Direction = (float)ADS_CameraManager::CameraRotation.Yaw;
  }
  return;
}

// RemovePlayerSkillTargetInfo @ 14ba66da0

void __thiscall
UDS_PlayerData::RemovePlayerSkillTargetInfo
          (UDS_PlayerData *this,EDS_PlayerSkillType *param_1,PlayerSkillPreservedInfo *param_2)

{
  EDS_PlayerSkillType EVar1;
  Vector *pVVar2;
  longlong lVar3;
  int iVar4;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *this_00;
  Vector *pVVar5;
  undefined1 *puVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  EDS_PlayerSkillTargetInfoChangeType local_res8 [2];
  FDS_PlayerSkillTargetInfo local_48;
  
  local_48.EntityID = (param_2->_impl_).entity_id_;
  local_48.bIsStuff = (param_2->_impl_).is_stuff_;
  local_48.TableID = (param_2->_impl_).target_id_;
  local_48.ZoneID = (param_2->_impl_).zone_id_;
  pVVar2 = (param_2->_impl_).position_;
  local_48.EndTime = 0.0;
  local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pVVar5 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar5 = pVVar2;
  }
  local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  DS_Util::SetFVector(&local_48.Position,pVVar5);
  local_48.EndTime = (param_2->_impl_).end_time_;
  EVar1 = *param_1;
  if (*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8 !=
      *(int *)&(this->PlayerSkillTargetInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PlayerSkillTargetInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PlayerSkillTargetInfoMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->PlayerSkillTargetInfoMap).field_0x48 - 1)
                              & (ulonglong)EVar1) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&this->PlayerSkillTargetInfoMap;
      while (*(EDS_PlayerSkillType *)((longlong)iVar4 * 0x60 + lVar3) != EVar1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar3);
        if (iVar4 == -1) {
          return;
        }
      }
      this_00 = (TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
                 *)TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                   ::FindChecked(&this->PlayerSkillTargetInfoMap,EVar1);
      uVar8 = (int)(local_48.EntityID >> 0x20) * 0x17 + (int)local_48.EntityID;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        FVar7 = (this_00->Hash).SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&this_00->Hash;
        }
        iVar4 = *(int *)((longlong)FVar7 + (ulonglong)(this_00->HashSize - 1U & uVar8) * 4);
        if (iVar4 != -1) {
          while (*(ulong64 *)(*(longlong *)&this_00->Elements + (longlong)iVar4 * 0x48) !=
                 local_48.EntityID) {
            iVar4 = *(int *)(*(longlong *)&this_00->Elements + 0x40 + (longlong)iVar4 * 0x48);
            if (iVar4 == -1) {
              return;
            }
          }
          iVar4 = *(int *)((longlong)FVar7 +
                          ((longlong)this_00->HashSize - 1U & (longlong)(int)uVar8) * 4);
          if (iVar4 != -1) {
            do {
              if (*(ulong64 *)(*(longlong *)&this_00->Elements + (longlong)iVar4 * 0x48) ==
                  local_48.EntityID) {
                TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
                ::RemoveByIndex(this_00,iVar4);
                break;
              }
              iVar4 = *(int *)(*(longlong *)&this_00->Elements + 0x40 + (longlong)iVar4 * 0x48);
            } while (iVar4 != -1);
          }
          local_res8[0] = Removed;
          TMulticastDelegate<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->ChangedPlayerSkillTargetInfoDelegate,param_1,&local_48,local_res8);
        }
      }
    }
  }
  return;
}

// ResetData @ 14ba68da0

void __thiscall UDS_PlayerData::ResetData(UDS_PlayerData *this)

{
  undefined1 *puVar1;
  TMap<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FDestructionSentinel local_28;
  
  iVar2 = this->PlayerLevel;
  this->PlayerUID = 0;
  this->PlayerLevel = 0;
  if ((0 < iVar2) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelUpDel,this->PlayerLevel);
  }
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
  iVar2 = this->PlayerLevelCap;
  this->PlayerExp = 0;
  this->PlayerLevelCap = 0;
  if ((0 < iVar2) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelCapUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelCapUpDel,this->PlayerLevelCap);
  }
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
  SetMainTargetEntityID(this,0);
  this_00 = &this->PlayerSkillTargetInfoMap;
  bVar3 = 1 < *(int *)&(this->PlayerSkillTargetInfoMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->PlayerSkillTargetInfoMap).field_0x8);
  puVar1 = &(this->PlayerSkillTargetInfoMap).field_0xc;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->PlayerSkillTargetInfoMap).field_0x2c;
  *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlayerSkillTargetInfoMap).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->PlayerSkillTargetInfoMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedPlayerSkillTargetInfoDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->ChangedPlayerSkillTargetInfoDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  this->PenaltyStateValue[0] = 0;
  this->PenaltyStateValue[1] = 0;
  this->PenaltyStage[0] = None;
  this->PenaltyStage[1] = None;
  this->PenaltyStage[2] = None;
  this->PenaltyStateValue[2] = 0;
  this->PenaltyStateValue[3] = 0;
  this->PenaltyStage[3] = None;
  this->PenaltyStage[4] = None;
  this->PenaltyStateValue[4] = 0;
  this->PenaltyStateValue[5] = 0;
  this->PenaltyStage[5] = None;
  this->PenaltyStage[6] = None;
  this->PenaltyStateValue[6] = 0;
  return;
}

// SetAiRoundRecordResponse @ 14ba69e70

void __thiscall
UDS_PlayerData::SetAiRoundRecordResponse(UDS_PlayerData *this,PlayerAiRoundRecords *param_1)

{
  undefined1 *puVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_38;
  
  uVar2 = (param_1->_impl_).win_count_;
  this->AiRoundRecord_WinCount = uVar2;
  uVar3 = (param_1->_impl_).lose_count_;
  this->AiRoundRecord_LoseCount = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->AiRoundRecordDel,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->AiRoundRecordDel).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar11 = *(int *)&(this->AiRoundRecordDel).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&(this->AiRoundRecordDel).field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->AiRoundRecordDel).field_0x8;
      if (((*(int *)(lVar4 + 8 + lVar12) == 0) ||
          (plVar5 = *(longlong **)(lVar4 + lVar12), plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar2,uVar3), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->AiRoundRecordDel).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->AiRoundRecordDel,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetBreachDetailInfoResponse @ 14ba6a500

void __thiscall
UDS_PlayerData::SetBreachDetailInfoResponse(UDS_PlayerData *this,BreachDetailInfoResponse *param_1)

{
  TMap<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
  *this_00;
  FDS_BreachBaseTableRow *pFVar1;
  FString *pFVar2;
  FDS_BreachDetailInfo *pFVar3;
  long64 lVar4;
  undefined1 *puVar5;
  int iVar6;
  double dVar7;
  TPairInitializer<unsigned___int64_&,FDS_BreachDetailInfo_&> local_res18;
  undefined1 local_98 [12];
  int iStack_8c;
  FDS_BreachDetailInfo local_88;
  FStringFormatArg local_38;
  FString local_18;
  
  FDS_BreachDetailInfo::FDS_BreachDetailInfo(&local_88,param_1);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)local_88.LifeEndTime >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_88.LifeEndTime,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
     ) {
    dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
    if (dVar7 <= local_88.LifeEndTime) {
      local_res18.Value = (FDS_BreachDetailInfo *)(param_1->_impl_).stuffportal_entity_id_;
      this_00 = &this->BreachDetailInfoMap;
      if (*(int *)&(this->BreachDetailInfoMap).field_0x8 !=
          *(int *)&(this->BreachDetailInfoMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->BreachDetailInfoMap).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this->BreachDetailInfoMap).field_0x38;
        }
        iVar6 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->BreachDetailInfoMap).field_0x48 - 1)
                                  & (longlong)&(local_res18.Value)->StuffPortalEntityID +
                                    ((ulonglong)local_res18.Value >> 0x20) * 0x17) * 4);
        if (iVar6 != -1) {
          do {
            if (*(FDS_BreachDetailInfo **)
                 ((longlong)iVar6 * 0x58 + *(longlong *)&this_00->field_0x0) == local_res18.Value) {
              if (iVar6 != -1) {
                pFVar3 = TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
                         ::FindChecked((TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
                                        *)this_00,(ulong64)local_res18.Value);
                pFVar3->StuffPortalEntityID = local_88.StuffPortalEntityID;
                pFVar3->RewardGrade = local_88.RewardGrade;
                ::FString::operator=(&pFVar3->FirstPlayerName,&local_88.FirstPlayerName);
                pFVar3->FinderEntityID = local_88.FinderEntityID;
                pFVar3->CurrentTryCount = local_88.CurrentTryCount;
                pFVar3->MaxTryCount = local_88.MaxTryCount;
                pFVar3->LifeEndTime = local_88.LifeEndTime;
                pFVar3->BreachBaseID = local_88.BreachBaseID;
                pFVar3->NeedTicketType = local_88.NeedTicketType;
                pFVar3->NeedTicketValue = local_88.NeedTicketValue;
                TMulticastDelegate<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
                ::Broadcast(&this->ChangedBreachDetailInfoDelegate,&local_88,Updated);
                goto LAB_14ba6a7de;
              }
              break;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x58 + 0x50 + *(longlong *)&this_00->field_0x0);
          } while (iVar6 != -1);
        }
      }
      local_98._0_8_ = &local_res18.Value;
      unique0x00008e00 = &local_88;
      TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_&,FDS_BreachDetailInfo_&>_>
                ((TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                  *)this_00,&local_res18,(bool *)local_98);
      TMulticastDelegate<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ChangedBreachDetailInfoDelegate,&local_88,Added);
      pFVar1 = FDS_BreachBaseTableRow::Get((longlong)local_88.BreachBaseID,true);
      if (pFVar1 != (FDS_BreachBaseTableRow *)0x0) {
        if (pFVar1->BreachContentsType == Breach) {
          pFVar2 = (FString *)(**(code **)((pFVar1->ID_Name)._padding_ + 8))(&pFVar1->ID_Name);
          pFVar2 = ::FString::FString(&local_18,pFVar2);
          FStringFormatArg::FStringFormatArg(&local_38,pFVar2);
          local_98._0_8_ = (FStringFormatArg *)0x0;
          stack0xffffffffffffff70 = (FDS_BreachDetailInfo *)CONCAT44(iStack_8c,1);
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,(ForAnyElementType *)local_98,1,&iStack_8c);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>((void *)local_98._0_8_,&local_38,1);
          if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
          }
          lVar4 = 0x5ccc5;
        }
        else {
          if (pFVar1->BreachContentsType != Gate) goto LAB_14ba6a7de;
          pFVar2 = (FString *)(**(code **)((pFVar1->ID_Name)._padding_ + 8))(&pFVar1->ID_Name);
          pFVar2 = ::FString::FString(&local_18,pFVar2);
          FStringFormatArg::FStringFormatArg(&local_38,pFVar2);
          local_98._0_8_ = (FStringFormatArg *)0x0;
          stack0xffffffffffffff70 = (FDS_BreachDetailInfo *)CONCAT44(iStack_8c,1);
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,(ForAnyElementType *)local_98,1,&iStack_8c);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>((void *)local_98._0_8_,&local_38,1);
          if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
          }
          lVar4 = 0x5f3d5;
        }
        UDS_UIMessageManager::OpenMsgByStringUi
                  (lVar4,Complete_None_01,
                   (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)local_98,
                   (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                    *)0x0);
        DestructItems<FStringFormatArg,int>((FStringFormatArg *)local_98._0_8_,local_98._8_4_);
        if ((FStringFormatArg *)local_98._0_8_ != (FStringFormatArg *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
      }
    }
  }
LAB_14ba6a7de:
  if (local_88.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.FirstPlayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetCurrentCharEntityID @ 14ba6bd50

void __thiscall UDS_PlayerData::SetCurrentCharEntityID(UDS_PlayerData *this,ulong64 param_1)

{
  if (this->CurrentCharEntityID != param_1) {
    this->CurrentCharEntityID = param_1;
  }
  return;
}

// SetDataByGuildInfo @ 14ba6ecd0

void __thiscall UDS_PlayerData::SetDataByGuildInfo(UDS_PlayerData *this,GuildRes *param_1)

{
  SqlGuildTable *pSVar1;
  SqlGuildTable *pSVar2;
  
  pSVar1 = (param_1->_impl_).guild_;
  pSVar2 = &ds_guild::_SqlGuildTable_default_instance_._instance;
  if (pSVar1 != (SqlGuildTable *)0x0) {
    pSVar2 = pSVar1;
  }
  this->GuildUID = (pSVar2->_impl_).guild_uid_;
  return;
}

// SetDataByJoinMapResponse @ 14ba6ed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerData::SetDataByJoinMapResponse(UDS_PlayerData *this,JoinMapResponse *param_1,bool param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulong64 uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  UDS_MountEvent *pUVar9;
  UObject *pUVar10;
  UDS_LogManager *pUVar11;
  FDS_AuthData *this_00;
  FDS_AuthData *pFVar12;
  UDS_DungeonPlayBuildManager *pUVar13;
  UDS_DataManager *this_01;
  FString *pFVar14;
  FDS_StatusInfo *pFVar15;
  EDS_AccountAuthority EVar16;
  CharacterEntityTypeDefaultTypeInternal *pCVar17;
  undefined1 *puVar18;
  int iVar19;
  FObjectPtr_u_0 FVar20;
  char *pcVar21;
  int *piVar22;
  RepeatedPtrField<server_msg::CharacterEntityPair> *pRVar23;
  int iVar24;
  TMap<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
  *this_02;
  FDS_AuthData *pFVar25;
  undefined1 auStackY_8e8 [32];
  undefined1 local_8b8;
  char local_8b7;
  FWeakObjectPtr local_8b0;
  int local_8a8;
  int local_8a4;
  undefined4 local_8a0 [2];
  FWeakObjectPtr local_898;
  FWeakObjectPtr local_890;
  undefined4 *local_888;
  undefined8 local_880;
  undefined8 local_878;
  UDS_DataManager *local_870;
  JoinMapResponse *local_868;
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  FString local_840;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  MainPlayerEntityID = (param_1->_impl_).player_entity_id_;
  pFVar25 = (FDS_AuthData *)0x0;
  local_8b7 = param_2;
  local_868 = param_1;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_PlayerData>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,(UDS_PlayerData *)local_860,
             (pmf_87127bb2)this);
  pUVar9 = UDS_MountEvent::GetEvent();
  if (pUVar9 != (UDS_MountEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::Remove<UDS_PlayerData>
              (&pUVar9->OnChangedMountStatus_Filtered,this);
    this_02 = &(pUVar9->OnChangedMountStatus_Filtered).Subscriptions;
    local_8a0[0] = 0x197;
    if (*(int *)&(pUVar9->OnChangedMountStatus_Filtered).Subscriptions.field_0x8 !=
        *(int *)&(pUVar9->OnChangedMountStatus_Filtered).Subscriptions.field_0x34) {
      puVar18 = *(undefined1 **)&(pUVar9->OnChangedMountStatus_Filtered).Subscriptions.field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(pUVar9->OnChangedMountStatus_Filtered).Subscriptions.field_0x38;
      }
      iVar19 = *(int *)(puVar18 +
                       (ulonglong)
                       (*(int *)&(pUVar9->OnChangedMountStatus_Filtered).Subscriptions.field_0x48 -
                        1U & 0x197) * 4);
      if (iVar19 != -1) {
        do {
          piVar22 = (int *)((longlong)iVar19 * 0x50 + *(longlong *)this_02);
          if (*piVar22 == 0x197) {
            if (piVar22 != (int *)0x0) goto LAB_14ba6ee1c;
            break;
          }
          iVar19 = piVar22[0x12];
        } while (iVar19 != -1);
      }
    }
    local_888 = local_8a0;
    TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_StatusType_const_&>_>
              (this_02,(uint)&local_8a4,(TKeyInitializer<EDS_StatusType_const_&> *)0x197,
               (bool *)&local_888);
    piVar22 = (int *)((longlong)local_8a4 * 0x50 + *(longlong *)this_02);
LAB_14ba6ee1c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar22 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_PlayerData>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               (piVar22 + 2),(UDS_PlayerData *)(local_860 + 8),(pmf_92c99a5c)this);
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar7 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_898,(void *)0x0);
  if (bVar7) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_828._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_828,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_828.Ptr,0x16a,L"itemDataSet is nullptr.");
      if ((FScriptContainerElement *)local_828._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_828._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380301675>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x16b,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&local_898);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar10[0x13].field_0x18,this)
    ;
    pUVar10 = FWeakObjectPtr::Get(&local_898);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_PlayerData>
              (&pUVar10[0x13].field_0x18,(UDS_PlayerData *)local_850,(pmf_18ced0e4)this);
  }
  local_870 = UDS_DataManager::GetInst();
  if (local_870 == (UDS_DataManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_708._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_708,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_708.Ptr,0x171,L"dataMgr is nullptr.");
      if ((void *)local_708._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_708._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380301682>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x172,"false");
    if (!bVar7) {
      return;
    }
code_r0x00014ba6f53b:
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = TDS_Singleton<FDS_AuthData>::Inst;
  if (TDS_Singleton<FDS_AuthData>::Inst == (FDS_AuthData *)0x0) {
    this_00 = ::operator_new(0x110);
    pFVar12 = pFVar25;
    if (this_00 != (FDS_AuthData *)0x0) {
      memset(this_00,0,0x110);
      pFVar12 = FDS_AuthData::FDS_AuthData(this_00);
    }
    TDS_Singleton<FDS_AuthData>::Inst = pFVar12;
    cVar8 = (**(code **)(pFVar12->_padding_ + 8))();
    pFVar12 = TDS_Singleton<FDS_AuthData>::Inst;
    if (cVar8 == '\0') {
      if (TDS_Singleton<FDS_AuthData>::Inst != (FDS_AuthData *)0x0) {
        (**(code **)(TDS_Singleton<FDS_AuthData>::Inst->_padding_ + 0x18))
                  (TDS_Singleton<FDS_AuthData>::Inst,1);
      }
      TDS_Singleton<FDS_AuthData>::Inst = (FDS_AuthData *)0x0;
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = &TDS_Singleton<FDS_AuthData>::Empty;
    }
  }
  bVar7 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar7) {
    pUVar13 = UDS_DungeonPlayBuildManager::GetInst();
    if (pUVar13 == (UDS_DungeonPlayBuildManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_5e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5e8,"FDS_AuthData::GetAccountAuthority",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_5e8.Ptr,0x46,L"dungeonPlayBuildMng is nullptr.");
        if ((void *)local_5e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_5e8._padding_);
        }
      }
      goto LAB_14ba6f136;
    }
    EVar16 = pUVar13->AccountAuthority;
  }
  else {
LAB_14ba6f136:
    EVar16 = pFVar12->AccountAuthority;
  }
  this->AccountAuthority = EVar16;
  uVar2 = *(ulonglong *)&(param_1->_impl_).entity_pair_;
  if ((uVar2 & 1) == 0) {
    pRVar23 = &(param_1->_impl_).entity_pair_;
  }
  else {
    pRVar23 = (RepeatedPtrField<server_msg::CharacterEntityPair> *)(uVar2 + 7);
  }
  iVar19 = *(int *)&(param_1->_impl_).entity_pair_.field_0x8;
  plVar6 = (longlong *)&pRVar23->field_0x0;
  for (; pRVar23 != (RepeatedPtrField<server_msg::CharacterEntityPair> *)(plVar6 + iVar19);
      pRVar23 = (RepeatedPtrField<server_msg::CharacterEntityPair> *)&pRVar23->field_0x8) {
    lVar3 = *(longlong *)pRVar23;
    iVar24 = *(int *)(lVar3 + 0x28);
    pCVar17 = &messages::_CharacterEntityType_default_instance_;
    if (*(CharacterEntityTypeDefaultTypeInternal **)(lVar3 + 0x18) !=
        (CharacterEntityTypeDefaultTypeInternal *)0x0) {
      pCVar17 = *(CharacterEntityTypeDefaultTypeInternal **)(lVar3 + 0x18);
    }
    uVar1 = (pCVar17->_instance)._impl_._oneof_case_[0];
    local_8a8 = iVar24;
    if ((uVar1 == 1) || (uVar1 == 2)) {
      pFVar12 = (FDS_AuthData *)(((pCVar17->_instance)._impl_.entity_.main_)->_impl_).bits_;
      if (pFVar12 != (FDS_AuthData *)&DAT_00000001) goto LAB_14ba6f248;
      local_8b8 = 0;
      `UDS_DataSetContainer::GetDataSetContainer'::__l5::<lambda_1>::operator()(&local_8b8);
      FVar20.Handle = (UObject *)&local_880;
      local_880 = 0;
LAB_14ba6f297:
      local_8b0.ObjectIndex = 0;
      local_8b0.ObjectSerialNumber = 0;
      FWeakObjectPtr::operator=(&local_8b0,(FObjectPtr)FVar20);
    }
    else {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_4c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4c8,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_4c8.Ptr,399,L"entity_type.entity_case() is invalid.");
        iVar24 = local_8a8;
        if ((void *)local_4c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4c8._padding_);
          iVar24 = local_8a8;
        }
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                         ,400,L"");
      pFVar12 = pFVar25;
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_14ba6f248:
      this_01 = UDS_DataManager::GetInst();
      if (this_01 == (UDS_DataManager *)0x0) {
        local_878 = 0;
        FVar20.Handle = (UObject *)&local_878;
        goto LAB_14ba6f297;
      }
      UDS_DataManager::GetDataSetContainer(this_01,(ulong64)&local_8b0);
    }
    bVar7 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&local_8b0,(void *)0x0
                      );
    if ((bVar7) &&
       (bVar7 = UDS_DataManager::CreateDataSetContainer
                          (local_870,(ulong64)pFVar12,MainCharacter,iVar24,false), !bVar7)) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_3a8.Ptr,0x19a,
                   L"Create MainChar DataSetContainer is Failed.");
        if ((void *)local_3a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3a8._padding_);
        }
      }
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9202793448380301723>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                         ,0x19b,"false");
      if (!bVar7) {
        return;
      }
      goto code_r0x00014ba6f53b;
    }
    pCVar17 = &messages::_CharacterEntityType_default_instance_;
    if (*(CharacterEntityTypeDefaultTypeInternal **)(lVar3 + 0x18) !=
        (CharacterEntityTypeDefaultTypeInternal *)0x0) {
      pCVar17 = *(CharacterEntityTypeDefaultTypeInternal **)(lVar3 + 0x18);
    }
    if (((pCVar17->_instance)._impl_._oneof_case_[0] == 1) && (local_8b7 != '\0')) {
      uVar4 = (((pCVar17->_instance)._impl_.entity_.main_)->_impl_).bits_;
      if (this->CurrentCharEntityID != uVar4) {
        this->CurrentCharEntityID = uVar4;
      }
      this->CurrentCharID = iVar24;
    }
    param_1 = local_868;
  }
  pcVar21 = (char *)((ulonglong)(param_1->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar21 + 0x18)) {
    pcVar21 = *(char **)pcVar21;
  }
  pFVar14 = DS_Util::ConvertUTF8ToFString(&local_840,pcVar21);
  ::FString::operator=(&this->PlayerNickname,pFVar14);
  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data.AllocatorInstance.Data);
  }
  UDS_CharStatusData::GetData((ulong64)&local_890);
  bVar7 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_890,(void *)0x0);
  if (bVar7) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_168.Ptr,0x1bb,L"curCharStatusData is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380301756>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x1bc,"false");
    if (bVar7) goto code_r0x00014ba6f612;
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&local_890);
    if (*(int *)&pUVar10[2].field_0x10 != *(int *)&pUVar10[3].field_0x14) {
      puVar18 = *(undefined1 **)&pUVar10[3].field_0x20;
      if (*(undefined1 **)&pUVar10[3].field_0x20 == (undefined1 *)0x0) {
        puVar18 = &pUVar10[3].field_0x18;
      }
      iVar19 = *(int *)(puVar18 + (ulonglong)(*(int *)(pUVar10 + 4) - 1U & 0x195) * 4);
      if (iVar19 != -1) {
        lVar3 = *(longlong *)&pUVar10[2].field_0x8;
        do {
          if (*(int *)((longlong)iVar19 * 0x100 + lVar3) == 0x195) {
            pFVar15 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                      ::FindChecked(&pUVar10[2].field_0x8,CharLoadCapacity);
            if (pFVar15 != (FDS_StatusInfo *)0x0) {
              TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
              AddUObject<UDS_PlayerData>
                        ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                          *)&pFVar15->ChangeMaxValueDelegate,(UDS_PlayerData *)(local_850 + 8),
                         (pmf_e4cf2c55)this);
              goto LAB_14ba6f613;
            }
            break;
          }
          iVar19 = *(int *)((longlong)iVar19 * 0x100 + 0xf8 + lVar3);
        } while (iVar19 != -1);
      }
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_PlayerData::SetDataByJoinMapResponse",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_288.Ptr,0x1b5,L"curStatusInfo is nullptr.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9202793448380301750>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                       ,0x1b6,"false");
    if (bVar7) {
code_r0x00014ba6f612:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
LAB_14ba6f613:
  bVar7 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar7) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar7 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar7) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
      pFVar25 = *(FDS_AuthData **)(pUVar10 + 1);
    }
  }
  FDS_CharacterService::UpdateCharByJoinMapResponse(param_1,(ulong64)pFVar25);
  return;
}

// SetDataByPlayerExpChangeResponse @ 14ba6ff80

void __thiscall
UDS_PlayerData::SetDataByPlayerExpChangeResponse
          (UDS_PlayerData *this,PlayerExpChangeResponse *param_1)

{
  this->PlayerExp = (param_1->_impl_).exp_;
  return;
}

// SetDataByPlayerGradeCapUpResponse @ 14ba6ffa0

void __thiscall
UDS_PlayerData::SetDataByPlayerGradeCapUpResponse
          (UDS_PlayerData *this,PlayerGradeCapUpResponse *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  
  iVar1 = this->PlayerLevelCap;
  iVar2 = (param_1->_impl_).grade_cap_;
  this->PlayerLevelCap = iVar2;
  if (((0 < iVar1) && (iVar1 != iVar2)) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelCapUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelCapUpDel,this->PlayerLevelCap);
  }
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

// SetDataByPlayerGradeChangeResponse @ 14ba70040

void __thiscall
UDS_PlayerData::SetDataByPlayerGradeChangeResponse
          (UDS_PlayerData *this,PlayerGradeChangeResponse *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  
  iVar1 = this->PlayerLevel;
  iVar2 = (param_1->_impl_).grade_;
  this->PlayerLevel = iVar2;
  if (((0 < iVar1) && (iVar1 != iVar2)) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelUpDel,this->PlayerLevel);
  }
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

// SetDataByReturnHomeSaveResponse @ 14ba700e0

void __thiscall
UDS_PlayerData::SetDataByReturnHomeSaveResponse
          (UDS_PlayerData *this,ReturnHomeSaveResponse *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->_impl_).return_home_id_;
  if (this->ReturnHomeID != iVar1) {
    this->ReturnHomeID = iVar1;
  }
  return;
}

// SetDataBySpawnCharacterResponse @ 14ba704c0

void __thiscall
UDS_PlayerData::SetDataBySpawnCharacterResponse
          (UDS_PlayerData *this,SpawnCharacterResponse *param_1)

{
  ulong64 uVar1;
  Vector *pVVar2;
  VectorF *pVVar3;
  FString *pFVar4;
  VectorF *pVVar5;
  char *pcVar6;
  Vector *pVVar7;
  FString local_38;
  TVector<double>_u_0 local_28;
  
  pcVar6 = (char *)((ulonglong)(param_1->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  pFVar4 = DS_Util::ConvertUTF8ToFString(&local_38,pcVar6);
  ::FString::operator=(&this->PlayerNickname,pFVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  uVar1 = (param_1->_impl_).entity_id_;
  if (this->CurrentCharEntityID != uVar1) {
    this->CurrentCharEntityID = uVar1;
  }
  this->CurrentCharID = (param_1->_impl_).char_id_;
  SetPlayerUID(this,(param_1->_impl_).player_uid_);
  this->AccountAuthority = (EDS_AccountAuthority)(param_1->_impl_).account_authority_;
  pVVar2 = (param_1->_impl_).position_;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pVVar7 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar7 = pVVar2;
  }
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
  (this->Position).field0_0x0._s_0.X = local_28._s_0.X;
  (this->Position).field0_0x0._s_0.Y = local_28._s_0.Y;
  (this->Position).field0_0x0._s_0.Z = local_28._s_0.Z;
  pVVar3 = (param_1->_impl_).direction_;
  pVVar5 = &_VectorF_default_instance_._instance;
  if (pVVar3 != (VectorF *)0x0) {
    pVVar5 = pVVar3;
  }
  this->Direction = (pVVar5->_impl_).y_;
  return;
}

// SetHaloPoint @ 14ba71200

void __thiscall UDS_PlayerData::SetHaloPoint(UDS_PlayerData *this,int param_1,bool param_2)

{
  this->HaloPoint = param_1;
  if (param_2) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->HaloPointChangedDelegate,param_1);
    return;
  }
  return;
}

// SetInteractionID @ 14ba71650

void __thiscall UDS_PlayerData::SetInteractionID(UDS_PlayerData *this,int param_1)

{
  this->InteractionID = param_1;
  return;
}

// SetMainTargetEntityID @ 14ba72460

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

void __thiscall UDS_PlayerData::SetMainTargetEntityID(UDS_PlayerData *this,ulong64 param_1)

{
  ulong64 *puVar1;
  EDS_EntityType EVar2;
  bool bVar3;
  UDS_AttackableManager *this_00;
  ulong64 uVar4;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8 [2];
  
  puVar1 = &this->MainTargetEntityID;
  if (*puVar1 == param_1) {
    return;
  }
  if ((param_1 != 0) &&
     (EVar2 = UDS_DataBase::GetEntityType((UDS_DataBase *)this), EVar2 == MainCharacter)) {
    this_00 = UDS_AttackableManager::GetInst();
    if (this_00 == (UDS_AttackableManager *)0x0) {
      return;
    }
    uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    bVar3 = UDS_AttackableManager::IsAttackable(this_00,uVar4,param_1);
    if (!bVar3) {
      return;
    }
  }
  if ((*puVar1 != 0) &&
     (pFVar5 = FDS_EntityBase::GetEntityBase(puVar1), pFVar5 != (FDS_EntityBase *)0x0)) {
    UDS_CharStateData::GetData((ulong64)local_res8);
    bVar3 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6[7].field_0x20,this);
    }
  }
  *puVar1 = param_1;
  FDS_DataPropertyDelegate_uint64_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_MainTargetEntityID,puVar1);
  if ((*puVar1 != 0) &&
     (pFVar5 = FDS_EntityBase::GetEntityBase(puVar1), pFVar5 != (FDS_EntityBase *)0x0)) {
    UDS_CharStateData::GetData((ulong64)local_res8);
    bVar3 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(local_res8);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_PlayerData>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar6[7].field_0x20,(UDS_PlayerData *)(local_res8 + 1),(pmf_40b13b15)this);
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  return;
}

// SetPlayerIconID @ 14ba73be0

void __thiscall UDS_PlayerData::SetPlayerIconID(UDS_PlayerData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->PlayerIconID = param_1;
  *(undefined1 *)&this->_padding_ = 1;
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

// SetPlayerLevel @ 14ba73c50

void __thiscall UDS_PlayerData::SetPlayerLevel(UDS_PlayerData *this,int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  
  iVar1 = this->PlayerLevel;
  iVar2 = *param_1;
  this->PlayerLevel = iVar2;
  if (((0 < iVar1) && (iVar1 != iVar2)) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelUpDel,this->PlayerLevel);
  }
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

// SetPlayerLevelCap @ 14ba73cf0

void __thiscall UDS_PlayerData::SetPlayerLevelCap(UDS_PlayerData *this,int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  
  iVar1 = this->PlayerLevelCap;
  iVar2 = *param_1;
  this->PlayerLevelCap = iVar2;
  if (((0 < iVar1) && (iVar1 != iVar2)) &&
     (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PlayerLevelCapUpDel), bVar3)) {
    TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
              (&this->PlayerLevelCapUpDel,this->PlayerLevelCap);
  }
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

// SetPlayerUID @ 14ba73d90

void __thiscall UDS_PlayerData::SetPlayerUID(UDS_PlayerData *this,long64 param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  uint uVar5;
  TPairInitializer<__int64_&,unsigned___int64_&&> local_res8;
  long64 *local_18;
  ulong64 **local_10;
  
  this->PlayerUID = param_1;
  if (param_1 < 1) {
    return;
  }
  uVar5 = (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1;
  if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._8_4_ !=
      UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._52_4_) {
    lVar4 = 0x154cf7318;
    if (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_ != 0) {
      lVar4 = UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar4 + (ulonglong)
                                  (UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._72_4_ - 1 & uVar5)
                                  * 4); iVar1 != -1;
        iVar1 = *(int *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + 0x10 +
                        (longlong)iVar1 * 0x18)) {
      if (*(longlong *)(UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap._0_8_ + (longlong)iVar1 * 0x18)
          == param_1) {
        local_res8.Key = (long64 *)param_1;
        TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<__int64>
                  ((TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
                    *)&UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap,uVar5,(long64 *)&local_res8);
        break;
      }
    }
  }
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      local_res8.Value = *(ulong64 **)(pUVar3 + 1);
      goto LAB_14ba73e6e;
    }
  }
  local_res8.Value = (ulong64 *)0x0;
LAB_14ba73e6e:
  local_10 = &local_res8.Value;
  local_18 = &this->PlayerUID;
  TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_&,unsigned___int64_&&>_>
            ((TSet<TTuple<__int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>,FDefaultSetAllocator>
              *)&UDS_PlayerDataSet::PlayerUIDEntityIDMatchMap,&local_res8,(bool *)&local_18);
  return;
}

// SetReturnHomeID @ 14ba740a0

void __thiscall UDS_PlayerData::SetReturnHomeID(UDS_PlayerData *this,int *param_1)

{
  if (this->ReturnHomeID != *param_1) {
    this->ReturnHomeID = *param_1;
  }
  return;
}

// ShowPlayerExpNotChangeMessage @ 14ba75890

void __cdecl UDS_PlayerData::ShowPlayerExpNotChangeMessage(void)

{
  bool bVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  bVar1 = UDS_TimeCoolDownManager::HasCoolDown(PlayerExpCapAlarm,0);
  if (!bVar1) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x2b06,None,&local_28);
    UDS_TimeCoolDownManager::StartCoolDown(PlayerExpCapAlarm,0,0.0);
    return;
  }
  return;
}

// UnBindMainTargetCharSate @ 14ba782d0

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
UDS_PlayerData::UnBindMainTargetCharSate(UDS_PlayerData *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    UDS_CharStateData::GetData((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
  }
  return;
}

// UpdateBreachDetailInfoMap @ 14ba7b920

void __thiscall UDS_PlayerData::UpdateBreachDetailInfoMap(UDS_PlayerData *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  FString local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  FDestructionSentinel local_88;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
              *)&this->BreachDetailInfoMap);
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3e45798ee2308c3a;
  local_e0 = 0;
  stack0xfffffffffffffef8 = local_70._16_16_;
  auStack_110._0_8_ = local_70._8_8_;
  local_f8 = local_50;
  pTStack_f0 = pTStack_48;
  uVar12 = local_70._24_8_ >> 0x20;
  local_e8 = (TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
              *)&this->BreachDetailInfoMap;
  if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
    do {
      lVar13 = (longlong)(int)uVar12 * 0x58;
      lVar14 = *(longlong *)local_70._0_8_;
      local_d8 = *(undefined8 *)(lVar13 + 8 + lVar14);
      local_d0 = *(undefined4 *)(lVar13 + 0x10 + lVar14);
      ::FString::FString(&local_c8,(FString *)(lVar14 + 0x18 + lVar13));
      local_b8 = *(undefined8 *)(lVar13 + 0x28 + lVar14);
      local_b0 = *(undefined4 *)(lVar13 + 0x30 + lVar14);
      local_ac = *(undefined4 *)(lVar13 + 0x34 + lVar14);
      local_a8 = *(double *)(lVar13 + 0x38 + lVar14);
      local_a0 = *(undefined4 *)(lVar13 + 0x40 + lVar14);
      local_9c = *(undefined1 *)(lVar13 + 0x44 + lVar14);
      local_98 = *(undefined4 *)(lVar13 + 0x48 + lVar14);
      if (((double)CONCAT44((uint)((ulonglong)local_a8 >> 0x20) & uVar6,SUB84(local_a8,0) & uVar15)
           <= dVar5) || (dVar16 = UDS_TimeUtilManager::GetCurrentServerTime(), local_a8 < dVar16)) {
        TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_f0,(int)uVar12);
        local_e0 = CONCAT11(local_e0._1_1_,1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ChangedBreachDetailInfoDelegate,(FWriteAccessScope *)&local_88);
        puVar1 = &(this->ChangedBreachDetailInfoDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar4 = false;
        uVar11 = *(int *)&(this->ChangedBreachDetailInfoDelegate).field_0x10 - 1;
        if (-1 < (int)uVar11) {
          lVar14 = (longlong)(int)uVar11 << 4;
          do {
            uVar9 = 0;
            if ((int)uVar11 < *(int *)&(this->ChangedBreachDetailInfoDelegate).field_0x10) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar13 = *(longlong *)&(this->ChangedBreachDetailInfoDelegate).field_0x8;
            if (((*(int *)(lVar13 + 8 + lVar14) == 0) ||
                (plVar2 = *(longlong **)(lVar13 + lVar14), plVar2 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_d8,2), cVar8 == '\0')) {
              bVar4 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        puVar1 = &(this->ChangedBreachDetailInfoDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->ChangedBreachDetailInfoDelegate,false);
        }
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uStack_100 = uStack_100 & ~auStack_110._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
      uVar12 = (ulonglong)uStack_fc;
    } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
    if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar10 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_e8->HashSize < iVar10)) || (iVar10 < local_e8->HashSize)) {
        local_e8->HashSize = iVar10;
        TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_e8);
      }
    }
  }
  return;
}

// UpdateData @ 14ba7cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PlayerData::UpdateData(UDS_PlayerData *this,DbWorkItem *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  Message *pMVar3;
  code *pcVar4;
  bool bVar5;
  FDS_PlayerGradeTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  Vector *pVVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStackY_398 [32];
  undefined1 local_368 [4];
  int local_364;
  int local_360 [2];
  TArray<FDS_PlayerGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_358;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *local_318;
  undefined2 local_310;
  TVector<double>_u_0 local_308;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2f0;
  SqlPlayerGradeTable local_2d8;
  SqlReturnHomeTable local_2a8;
  SqlPlayerIconTable local_280;
  SqlPlayerIconEquipTable local_258;
  undefined1 local_230 [32];
  longlong local_210;
  TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
  *pTStack_208;
  SqlPositionTable local_1f8;
  SqlGPlayerTable local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  switch((param_1->_impl_)._oneof_case_[0]) {
  case 4:
    ds_game::SqlPositionTable::SqlPositionTable
              (&local_1f8,(Arena *)0x0,(SqlPositionTable *)(param_1->_impl_).Item_.characterlevel_);
    local_1f8._padding_ = (longlong)&___7SqlPositionTable_ds_game__6B_;
    local_308._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_308._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar13 = &_Vector_default_instance_._instance;
    if (local_1f8._impl_.position_ != (Vector *)0x0) {
      pVVar13 = local_1f8._impl_.position_;
    }
    local_308._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_308._s_0,pVVar13);
    (this->Position).field0_0x0._s_0.X = local_308._s_0.X;
    (this->Position).field0_0x0._s_0.Y = local_308._s_0.Y;
    this->Direction = local_1f8._impl_.direction_;
    (this->Position).field0_0x0._s_0.Z = local_308._s_0.Z;
    ds_game::SqlPositionTable::~SqlPositionTable(&local_1f8);
    break;
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6b:
  case 0x6c:
  case 0x6d:
    break;
  case 6:
    ds_game::SqlGPlayerTable::SqlGPlayerTable
              (&local_1b8,(Arena *)0x0,(SqlGPlayerTable *)(param_1->_impl_).Item_.characterlevel_);
    local_1b8._padding_ = (longlong)&___7SqlGPlayerTable_ds_game__6B_;
    SetPlayerUID(this,local_1b8._impl_.player_uid_);
    ds_game::SqlGPlayerTable::~SqlGPlayerTable(&local_1b8);
    break;
  case 7:
    ds_game::SqlPlayerGradeTable::SqlPlayerGradeTable
              (&local_2d8,(Arena *)0x0,
               (SqlPlayerGradeTable *)(param_1->_impl_).Item_.characterlevel_);
    local_2d8._padding_ = (longlong)&___7SqlPlayerGradeTable_ds_game__6B_;
    local_364 = local_2d8._impl_.player_grade_;
    SetPlayerLevel(this,&local_364);
    this->PlayerExp = local_2d8._impl_.exp_;
    local_360[0] = local_2d8._impl_.player_grade_cap_;
    SetPlayerLevelCap(this,local_360);
    iVar16 = 0;
    FDS_PlayerGradeTableRow::GetAll(&local_358);
    iVar12 = local_358.ArrayNum;
    pFVar2 = local_358.AllocatorInstance.Data + (longlong)iVar12 * 8;
    uVar14 = local_358._8_8_;
    FVar15.Data = local_358.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar12) {
        local_368[0] = 0;
        `TCheckedPointerIterator<FDS_PlayerGradeTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_368);
        uVar14 = local_358._8_8_;
      }
      if (FVar15.Data == pFVar2) break;
      if (iVar16 < *(int *)(*(longlong *)FVar15.Data + 0x20)) {
        iVar16 = *(int *)(*(longlong *)FVar15.Data + 0x20);
      }
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.AllocatorInstance.Data);
    }
    if ((this->PlayerLevel < iVar16) || (bVar5 = IsPlayerExpMax(this), !bVar5)) {
      pFVar6 = FDS_PlayerGradeTableRow::Get((longlong)this->PlayerLevel,true);
      if (pFVar6 == (FDS_PlayerGradeTableRow *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_PlayerData::IsPlayerLevelCapBlock",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_158.Ptr,0x301,L"Faield to Get PlayerGradeTable.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9202793448380302082>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                           ,0x302,"false");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (((pFVar6->ID_GradeUpCondition != 0) &&
               (this->PlayerLevelCap < pFVar6->ID_GradeUpCondition)) &&
              (bVar5 = IsPlayerExpMax(this), bVar5)) goto LAB_14ba7d07f;
    }
    else {
LAB_14ba7d07f:
      local_2f0._0_8_ = 0;
      local_2f0._8_8_ = 0;
      local_2f0._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2b05,None,&local_2f0);
    }
    ds_game::SqlPlayerGradeTable::~SqlPlayerGradeTable(&local_2d8);
    break;
  case 0x59:
    ds_game::SqlPlayerIconTable::SqlPlayerIconTable
              (&local_280,(Arena *)0x0,(SqlPlayerIconTable *)(param_1->_impl_).Item_.characterlevel_
              );
    pFVar9 = (this->PlayerIconIDList).AllocatorInstance.Data;
    local_280._padding_ = (longlong)&___7SqlPlayerIconTable_ds_game__6B_;
    pFVar2 = pFVar9 + (longlong)(this->PlayerIconIDList).ArrayNum * 4;
    for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 4) {
      if (*(int *)pFVar9 == local_280._impl_.player_icon_id_) goto LAB_14ba7d1b1;
    }
    iVar16 = (this->PlayerIconIDList).ArrayNum;
    piVar1 = &(this->PlayerIconIDList).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->PlayerIconIDList).AllocatorInstance,piVar1);
    }
    (this->PlayerIconIDList).ArrayNum = iVar16 + 1;
    *(int *)((this->PlayerIconIDList).AllocatorInstance.Data + (longlong)iVar16 * 4) =
         local_280._impl_.player_icon_id_;
    *(undefined1 *)&this->_padding_ = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar5) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar8[4].field_0x8 = 1;
      bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                         (void *)0x0);
      if (!bVar5) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
        pUVar8[3].field_0x20 = 1;
      }
    }
LAB_14ba7d1b1:
    ds_game::SqlPlayerIconTable::~SqlPlayerIconTable(&local_280);
    break;
  case 0x5a:
    ds_game::SqlPlayerIconEquipTable::SqlPlayerIconEquipTable
              (&local_258,(Arena *)0x0,
               (SqlPlayerIconEquipTable *)(param_1->_impl_).Item_.characterlevel_);
    *(undefined1 *)&this->_padding_ = 1;
    local_258._padding_ = (longlong)&___7SqlPlayerIconEquipTable_ds_game__6B_;
    this->PlayerIconID = local_258._impl_.player_icon_id_;
    bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar5) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar8[4].field_0x8 = 1;
      bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                         (void *)0x0);
      if (!bVar5) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
        pUVar8[3].field_0x20 = 1;
      }
    }
    ds_game::SqlPlayerIconEquipTable::~SqlPlayerIconEquipTable(&local_258);
    break;
  case 0x6a:
    pMVar3 = (param_1->_impl_).Item_.characterlevel_;
    TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_230,
               (TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                *)&this->BreachDetailInfoMap);
    local_310 = 0;
    stack0xfffffffffffffcc8 = local_230._16_16_;
    local_348 = (longlong *)local_230._0_8_;
    auStack_340._0_8_ = local_230._8_8_;
    local_328 = local_210;
    pTStack_320 = pTStack_208;
    uVar10 = local_230._24_8_ >> 0x20;
    local_318 = (TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                 *)&this->BreachDetailInfoMap;
    if (local_230._28_4_ < *(int *)(local_230._16_8_ + 0x18)) {
      do {
        lVar11 = (longlong)(int)uVar10 * 0x58;
        if (*(int *)(lVar11 + 0x40 + *local_348) == *(int *)&pMVar3[2].field_0xc) {
          *(undefined4 *)(lVar11 + 0x30 + *local_348) = *(undefined4 *)(pMVar3 + 3);
        }
        uStack_330 = uStack_330 & ~auStack_340._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
        uVar10 = (ulonglong)uStack_32c;
      } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
      if (((char)local_310 != '\0') && (local_310._1_1_ != '\0')) {
        iVar16 = 1;
        uVar17 = *(int *)&(local_318->Elements).field_0x8 -
                 *(int *)&(local_318->Elements).field_0x34;
        if (3 < uVar17) {
          uVar10 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar16 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((0 < (int)uVar17) && (local_318->HashSize < iVar16)) || (iVar16 < local_318->HashSize))
        {
          local_318->HashSize = iVar16;
          TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_318);
        }
      }
    }
    break;
  case 0x6e:
    ds_game::SqlReturnHomeTable::SqlReturnHomeTable
              (&local_2a8,(Arena *)0x0,(SqlReturnHomeTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_2a8._padding_ = (longlong)&___7SqlReturnHomeTable_ds_game__6B_;
    if (this->ReturnHomeID != local_2a8._impl_.return_home_id_) {
      this->ReturnHomeID = local_2a8._impl_.return_home_id_;
    }
    ds_game::SqlReturnHomeTable::~SqlReturnHomeTable(&local_2a8);
    break;
  default:
    goto switchD_14ba7cdec_default;
  }
switchD_14ba7cdec_default:
  return;
}

// UpdatePenaltyStage @ 14ba7fdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerData::UpdatePenaltyStage
          (UDS_PlayerData *this,EDS_PenaltyType *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  EDS_PenaltyType EVar3;
  EDS_PenaltyStage EVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  FDS_SustainPenaltyTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  int iVar11;
  EDS_PenaltyStage EVar12;
  undefined1 auStackY_1b8 [32];
  ulong64 local_188 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (__real_3f800000 < *param_3 || __real_3f800000 == *param_3) {
    EVar3 = *param_1;
    EVar4 = this->PenaltyStage[(int)EVar3];
    this->PenaltyStage[(int)EVar3] = None;
    if (this->PenaltyStateValue[(int)*param_1] != param_4) {
      this->PenaltyStateValue[(int)*param_1] = param_4;
    }
    fVar6 = __real_358637bd;
    fVar1 = *param_2;
    fVar2 = *param_3;
    EVar12 = None;
    do {
      iVar11 = 0;
      switch(*param_1) {
      case Weight_Char:
        iVar11 = 0xb;
        break;
      case Weight_Mount:
        iVar11 = 0xc;
        break;
      case Hunger_Char:
        iVar11 = 0x15;
        break;
      case Hunger_Mount:
        iVar11 = 0x16;
        break;
      case Fatigue_Char:
        iVar11 = 0x1f;
        break;
      case Fatigue_Mount:
        iVar11 = 0x20;
        break;
      case ItemDurability:
        iVar11 = 0x29;
      }
      pFVar9 = FDS_SustainPenaltyTableRow::Get((longlong)(int)(iVar11 * 100 + EVar12),true);
      if (pFVar9 == (FDS_SustainPenaltyTableRow *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_PlayerData::UpdatePenaltyStage",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_178.Ptr,0x4ea,L"sustainPenaltyTable is nullptr.");
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9202793448380302571>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerData.cpp"
                           ,0x4eb,"false");
        if (!bVar7) {
          return false;
        }
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((float)pFVar9->MinRate * fVar6 <= fVar1 / fVar2) &&
         (fVar1 / fVar2 < (float)pFVar9->MaxRate * fVar6)) {
        this->PenaltyStage[(int)EVar3] = EVar12;
        if (EVar12 != EVar4) {
          local_188[0] = this->CurrentCharEntityID;
          TMulticastDelegate<void___cdecl(unsigned___int64_const_&,enum_EDS_PenaltyType_const_&,enum_EDS_PenaltyStage_const_&,int),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->ChangedPenaltyStageDelegate,local_188,param_1,
                      this->PenaltyStage + (int)EVar3,param_4);
        }
        return true;
      }
      EVar12 = EVar12 + None;
    } while ((int)EVar12 < 5);
  }
  return false;
}

// UpdatePenaltyStage_Fatigue @ 14ba80040

void __thiscall UDS_PlayerData::UpdatePenaltyStage_Fatigue(UDS_PlayerData *this)

{
  return;
}

// UpdatePenaltyStage_Hunger @ 14ba80050

void __thiscall UDS_PlayerData::UpdatePenaltyStage_Hunger(UDS_PlayerData *this)

{
  return;
}

// UpdatePenaltyStage_Weight @ 14ba80060

void __thiscall UDS_PlayerData::UpdatePenaltyStage_Weight(UDS_PlayerData *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  UDS_ItemDataSet *pUVar4;
  UDS_CharStatusData *pUVar5;
  UObject *pUVar6;
  float fVar7;
  ulong64 local_res8;
  float local_res10 [2];
  EDS_PenaltyType local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  FWeakObjectPtr local_28 [2];
  
  UDS_CharStatusData::GetData((ulong64)&local_38);
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar1) {
    return;
  }
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar1) {
    return;
  }
  local_res18[0] = Weight_Char;
  pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
  iVar3 = UDS_ItemDataSet::GetInventoryWeight(pUVar4,PlayerNormal);
  local_res10[0] = (float)iVar3;
  pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_38);
  local_res8._0_4_ = UDS_CharStatusData::GetMaxStatus(pUVar5,CharLoadCapacity);
  bVar1 = UpdatePenaltyStage(this,local_res18,local_res10,(float *)&local_res8,0);
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_30);
  bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
  if ((!bVar2) && (pUVar6 = FWeakObjectPtr::Get(&local_30), *(longlong *)(pUVar6 + 5) != 0)) {
    UDS_CharStatusData::GetData((ulong64)local_28);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_28,(void *)0x0);
    if (!bVar2) {
      local_res18[0] = Weight_Mount;
      pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
      iVar3 = UDS_ItemDataSet::GetInventoryWeight(pUVar4,Mount);
      local_res10[0] = (float)iVar3;
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_28);
      fVar7 = UDS_CharStatusData::GetMaxStatus(pUVar5,MountLoadCapacity);
      local_res8 = CONCAT44(local_res8._4_4_,fVar7);
      bVar2 = UpdatePenaltyStage(this,local_res18,local_res10,(float *)&local_res8,0);
      if (bVar2) goto LAB_14ba801c8;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_14ba801c8:
  local_res8 = this->CurrentCharEntityID;
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangedPenaltyStageListDelegate,&local_res8);
  return;
}

// UpdatePenaltyState_ItemDurability @ 14ba80200

void __thiscall UDS_PlayerData::UpdatePenaltyState_ItemDurability(UDS_PlayerData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ItemDataSet *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UDS_ItemData *this_00;
  FDS_SustainPenaltyTableRow *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  EDS_PenaltyStage EVar10;
  int iVar11;
  undefined1 local_res10 [8];
  EDS_PenaltyStage local_res18 [2];
  EDS_PenaltyType local_res20 [2];
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  ulong64 local_68;
  ulong64 local_60;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FDS_EquipmentItemCharacterData,1> local_48;
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar3 = FWeakObjectPtr::IsValid(&local_70);
  if (bVar3) {
    EVar10 = 0;
    iVar11 = 0;
    pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_70);
    UDS_ItemDataSet::GetEquipmentItemCharacterData(pUVar4,&local_48);
    if (local_48.Object != (FDS_EquipmentItemCharacterData *)0x0) {
      if ((local_48.Object == (FDS_EquipmentItemCharacterData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList(local_48.Object,&local_58);
      iVar8 = local_58.ArrayNum;
      pFVar1 = local_58.AllocatorInstance.Data + (longlong)iVar8 * 8;
      FVar9.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar8) {
          `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar9.Data == pFVar1) break;
        pUVar4 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_70);
        UDS_ItemDataSet::GetItemDataByUID(pUVar4,(ulong64)&local_78);
        bVar3 = FWeakObjectPtr::IsValid(&local_78);
        if (bVar3) {
          pUVar5 = FWeakObjectPtr::Get(&local_78);
          pUVar6 = FWeakObjectPtr::Get(&local_78);
          if (*(int *)&pUVar5[0x11].field_0x4 < *(int *)&pUVar6[0x15].field_0x18) {
            this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_78);
            pFVar7 = UDS_ItemData::GetDurabilitySustainPenaltyTable(this_00);
            if ((pFVar7 != (FDS_SustainPenaltyTableRow *)0x0) && (pFVar7->IsShowHud != false)) {
              iVar11 = iVar11 + 1;
              if ((int)EVar10 < pFVar7->Level) {
                EVar10 = pFVar7->Level;
              }
            }
          }
        }
        FVar9.Data = FVar9.Data + 8;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (((0 < (int)EVar10) || (0 < iVar11)) &&
         ((this->PenaltyStage[6] != EVar10 || (this->PenaltyStateValue[6] != iVar11)))) {
        local_68 = this->CurrentCharEntityID;
        this->PenaltyStage[6] = EVar10;
        this->PenaltyStateValue[6] = iVar11;
        local_res20[0] = ItemDurability;
        local_res18[0] = EVar10;
        TMulticastDelegate<void___cdecl(unsigned___int64_const_&,enum_EDS_PenaltyType_const_&,enum_EDS_PenaltyStage_const_&,int),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->ChangedPenaltyStageDelegate,&local_68,local_res20,local_res18,iVar11);
        local_60 = this->CurrentCharEntityID;
        TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&this->ChangedPenaltyStageListDelegate,&local_60);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdatePlayerSkillTargetInfoMap @ 14ba80430

void __thiscall UDS_PlayerData::UpdatePlayerSkillTargetInfoMap(UDS_PlayerData *this)

{
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined1 auStack_180 [16];
  uint uStack_170;
  uint uStack_16c;
  longlong local_168;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *pTStack_160;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *local_158;
  undefined2 local_150;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  int local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  TMap<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
  *local_118;
  undefined2 local_110;
  FDestructionSentinel local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  longlong *local_b8;
  longlong lStack_b0;
  undefined1 local_a8 [16];
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  *pTStack_60;
  
  TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_b8,
             (TSet<TTuple<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
              *)&this->PlayerSkillTargetInfoMap);
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_3e45798ee2308c3a;
  local_110 = 0;
  stack0xfffffffffffffec8 = local_a8;
  local_148 = local_b8;
  auStack_140._0_8_ = lStack_b0;
  local_128 = local_98;
  uStack_124 = uStack_94;
  uStack_120 = uStack_90;
  uVar14 = local_a8._8_8_ >> 0x20;
  if (local_a8._12_4_ < *(int *)(local_a8._0_8_ + 0x18)) {
    iVar17 = 1;
    local_118 = &this->PlayerSkillTargetInfoMap;
    do {
      lVar18 = (longlong)(int)uVar14 * 0x60 + *local_148;
      pTVar1 = (TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
                *)(lVar18 + 8);
      TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_88,pTVar1);
      uVar9 = local_88._0_8_;
      local_150 = 0;
      stack0xfffffffffffffe88 = local_88._16_16_;
      auStack_180._0_8_ = local_88._8_8_;
      local_168 = local_68;
      pTStack_160 = pTStack_60;
      uVar14 = local_88._24_8_ >> 0x20;
      uVar20 = local_88._28_4_;
      local_158 = pTVar1;
      if ((int)uVar20 < *(int *)(local_88._16_8_ + 0x18)) {
        do {
          lVar13 = (longlong)(int)uVar20;
          lVar15 = *(longlong *)uVar9;
          puVar3 = (undefined8 *)(lVar15 + 8 + lVar13 * 0x48);
          local_f0 = *puVar3;
          uStack_e8 = puVar3[1];
          puVar3 = (undefined8 *)(lVar15 + 0x18 + lVar13 * 0x48);
          local_e0 = *puVar3;
          uStack_d8 = puVar3[1];
          puVar3 = (undefined8 *)(lVar15 + 0x28 + lVar13 * 0x48);
          local_d0 = *puVar3;
          uStack_c8 = puVar3[1];
          local_c0 = *(double *)(lVar15 + 0x38 + lVar13 * 0x48);
          uVar20 = SUB84(local_c0,0) & uVar16;
          uVar21 = (uint)((ulonglong)local_c0 >> 0x20) & uVar8;
          if (((double)CONCAT44(uVar21,uVar20) < dVar7 || (double)CONCAT44(uVar21,uVar20) == dVar7)
             || (dVar19 = UDS_TimeUtilManager::GetCurrentServerTime(), local_c0 < dVar19)) {
            TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_160,(int)uVar14);
            local_150 = CONCAT11(local_150._1_1_,1);
            local_res10[0] = 2;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this->ChangedPlayerSkillTargetInfoDelegate,(FWriteAccessScope *)&local_108);
            puVar2 = &(this->ChangedPlayerSkillTargetInfoDelegate).field_0x1c;
            *(int *)puVar2 = *(int *)puVar2 + 1;
            bVar6 = false;
            uVar20 = *(int *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x10 - 1;
            if (-1 < (int)uVar20) {
              lVar15 = (longlong)(int)uVar20 << 4;
              do {
                uVar21 = 0;
                if ((int)uVar20 < *(int *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x10)
                {
                  uVar21 = ~uVar20 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar13 = *(longlong *)&(this->ChangedPlayerSkillTargetInfoDelegate).field_0x8;
                if (((*(int *)(lVar13 + 8 + lVar15) == 0) ||
                    (plVar4 = *(longlong **)(lVar13 + lVar15), plVar4 == (longlong *)0x0)) ||
                   (cVar11 = (**(code **)(*plVar4 + 0x68))(plVar4,lVar18,&local_f0,local_res10),
                   cVar11 == '\0')) {
                  bVar6 = true;
                }
                lVar15 = lVar15 + -0x10;
                uVar20 = uVar20 - 1;
              } while (-1 < (int)uVar20);
            }
            puVar2 = &(this->ChangedPlayerSkillTargetInfoDelegate).field_0x1c;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            if (bVar6) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->ChangedPlayerSkillTargetInfoDelegate,false);
            }
            if (local_108.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
            }
          }
          uStack_170 = uStack_170 & ~auStack_180._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_180);
          uVar14 = (ulonglong)uStack_16c;
          uVar20 = uStack_16c;
        } while ((int)uStack_16c < *(int *)(auStack_180._8_8_ + 0x18));
        if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
          uVar20 = *(int *)&(local_158->Elements).field_0x8 -
                   *(int *)&(local_158->Elements).field_0x34;
          if (uVar20 < 4) {
            iVar12 = 1;
          }
          else {
            uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
            lVar18 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_res18 = (undefined4)lVar18;
            iVar12 = 1 << ((byte)lVar18 & 0x1f);
          }
          if (((0 < (int)uVar20) && (local_158->HashSize < iVar12)) ||
             (iVar12 < local_158->HashSize)) {
            local_158->HashSize = iVar12;
            TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_158);
          }
        }
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar14 = (ulonglong)uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar16 = *(int *)(&local_118->field_0x0 + 8) - *(int *)(&local_118->field_0x0 + 0x34);
      if (3 < uVar16) {
        uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar16) && (*(int *)&local_118->field_0x48 < iVar17)) ||
         (iVar17 < *(int *)&local_118->field_0x48)) {
        *(int *)&local_118->field_0x48 = iVar17;
        TSet<TTuple<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  return;
}


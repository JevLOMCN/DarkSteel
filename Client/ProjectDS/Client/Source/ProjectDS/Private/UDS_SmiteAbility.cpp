// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b59a040

UClass * __cdecl UDS_SmiteAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SmiteAbility",
               &Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton,
               StaticRegisterNativesUDS_SmiteAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SmiteAbility>,
               InternalVTableHelperCtorCaller<UDS_SmiteAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton;
}

// UDS_SmiteAbility @ 14b59cbe0

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

UDS_SmiteAbility * __thiscall
UDS_SmiteAbility::UDS_SmiteAbility(UDS_SmiteAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SmiteAbility @ 14b59d410

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

void __thiscall UDS_SmiteAbility::~UDS_SmiteAbility(UDS_SmiteAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e0c0

UClass * __cdecl UDS_SmiteAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SmiteAbility",
               &Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton,
               StaticRegisterNativesUDS_SmiteAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SmiteAbility>,
               InternalVTableHelperCtorCaller<UDS_SmiteAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SmiteAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_SmiteAbility @ 14b59e540

void __cdecl UDS_SmiteAbility::StaticRegisterNativesUDS_SmiteAbility(void)

{
  return;
}

// UDS_SmiteAbility @ 14b8234f0

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

UDS_SmiteAbility * __thiscall
UDS_SmiteAbility::UDS_SmiteAbility(UDS_SmiteAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// OnCanActivate @ 14b83abc0

bool __thiscall UDS_SmiteAbility::OnCanActivate(UDS_SmiteAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnChangedBuffList @ 14b83ba70

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
UDS_SmiteAbility::OnChangedBuffList
          (UDS_SmiteAbility *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  UDS_SmiteAbility *pUVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  UDS_LogManager *pUVar8;
  UDS_SkillDataSet *this_00;
  FDS_SkillDeckInfo *this_01;
  UObject *pUVar9;
  UDS_SkillData *pUVar10;
  FDS_SkillActLevelTableRow *pFVar11;
  UDS_CharBuffData *pUVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FWeakObjectPtr *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_218 [32];
  undefined1 uStack_1d8;
  undefined1 auStack_1d7 [7];
  FWeakObjectPtr FStack_1d0;
  FWeakObjectPtr FStack_1c8;
  int aiStack_1c0 [2];
  FWeakObjectPtr FStack_1b8;
  FWeakObjectPtr FStack_1b0;
  FWeakObjectPtr FStack_1a8;
  FWeakObjectPtr FStack_1a0;
  FDS_EntityBase *pFStack_198;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_190;
  UDS_SmiteAbility *pUStack_180;
  FWeakObjectPtr *pFStack_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUStack_180 = this;
  pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (((pFVar6 != (FDS_EntityBase *)0x0) &&
      (pFStack_198 = pFVar6, pFVar7 = FDS_EntityBase::GetEntityBase(param_1),
      pFVar7 != (FDS_EntityBase *)0x0)) && (pFVar7->EntityType != MainCharacter)) {
    UDS_CharBuffData::GetData((ulong64)&FStack_1b8);
    bVar5 = FWeakObjectPtr::IsValid(&FStack_1b8);
    if (bVar5) {
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&FStack_1b0);
      bVar5 = FWeakObjectPtr::IsValid(&FStack_1b0);
      if (bVar5) {
        UDS_DeathData::GetData((ulong64)&FStack_1a0,pFVar7->EntityID,false);
        bVar5 = FWeakObjectPtr::IsValid(&FStack_1a0);
        if (bVar5) {
          this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&FStack_1b0);
          this_01 = UDS_SkillDataSet::GetSkillDeckInfo(this_00);
          FDS_SkillDeckInfo::GetSkillList(this_01,&TStack_190);
          iVar13 = TStack_190.ArrayNum;
          pFVar15 = (FWeakObjectPtr *)(TStack_190.AllocatorInstance.Data + (longlong)iVar13 * 8);
          FVar16.Data = TStack_190.AllocatorInstance.Data;
          pFStack_178 = pFVar15;
LAB_14b85a8d0:
          if (TStack_190.ArrayNum != iVar13) {
            uStack_1d8 = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&uStack_1d8);
          }
          if ((FWeakObjectPtr *)FVar16.Data == pFVar15) goto LAB_14b85ab10;
          FStack_1c8 = *(FWeakObjectPtr *)FVar16.Data;
          bVar5 = FWeakObjectPtr::IsValid(&FStack_1c8);
          if (bVar5) {
            FStack_1d0 = FStack_1c8;
            pUVar9 = FWeakObjectPtr::Get(&FStack_1c8);
            if (0 < *(int *)(pUVar9 + 5)) {
              pUVar9 = FWeakObjectPtr::Get(&FStack_1c8);
              UDS_SkillData::GetData
                        ((ulong64)&FStack_1a8,pFVar6->EntityID,SUB41(*(undefined4 *)(pUVar9 + 5),0))
              ;
              bVar5 = FWeakObjectPtr::IsValid(&FStack_1a8);
              if (bVar5) {
                FStack_1d0 = FStack_1a8;
              }
            }
            pUVar9 = FWeakObjectPtr::Get(&FStack_1a0);
            if (pUVar9[3].field_0x18 == '\x01') {
              pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_1d0);
              UDS_SkillData::SetIsActiveSmite(pUVar10,false,pFVar7->EntityID,0);
              FVar16.Data = FVar16.Data + 8;
              goto LAB_14b85a8d0;
            }
            pUVar9 = FWeakObjectPtr::Get(&FStack_1d0);
            pFVar11 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar9[2].field_0x24,true);
            pFVar6 = pFStack_198;
            if (pFVar11 == (FDS_SkillActLevelTableRow *)0x0) goto LAB_14b85aa81;
            pFVar14 = (pFVar11->ID_SmiteBuff).AllocatorInstance.Data;
            iVar2 = (pFVar11->ID_SmiteBuff).ArrayNum;
            pFVar1 = pFVar14 + (longlong)iVar2 * 4;
            while( true ) {
              if ((pFVar11->ID_SmiteBuff).ArrayNum != iVar2) {
                auStack_1d7[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(auStack_1d7);
              }
              pUVar4 = pUStack_180;
              if (pFVar14 == pFVar1) break;
              aiStack_1c0[0] = *(int *)pFVar14;
              pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&FStack_1b8);
              bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,aiStack_1c0);
              if (bVar5) goto LAB_14b85aa8e;
              pFVar14 = pFVar14 + 4;
            }
            bVar5 = FWeakObjectPtr::IsValid(&(pUStack_180->MainCharBuffData).WeakPtr);
            if (bVar5) {
              pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(pUVar4->MainCharBuffData).WeakPtr)
              ;
              bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,&pFVar11->ID_HaveMySmiteBuff);
              if (bVar5) {
                pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&FStack_1b8);
                bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,&pFVar11->ID_HaveTargetSmiteBuff);
                if (bVar5) {
LAB_14b85aa8e:
                  pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_1d0);
                  if (((pFVar11->ID_AttackLink).ArrayNum < 1) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  UDS_SkillData::SetIsActiveSmite
                            (pUVar10,true,pFVar7->EntityID,
                             *(int *)(pFVar11->ID_AttackLink).AllocatorInstance.Data);
                  goto LAB_14b85ab10;
                }
              }
            }
            pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_1d0);
            UDS_SkillData::SetIsActiveSmite(pUVar10,false,pFVar7->EntityID,0);
            pFVar15 = pFStack_178;
            pFVar6 = pFStack_198;
          }
LAB_14b85aa81:
          FVar16.Data = FVar16.Data + 8;
          goto LAB_14b85a8d0;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_SmiteAbility::UpdateSmiteInfo",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,TStack_168.Ptr,0x95,L"deathData is nullptr. EntityID: %llu");
          TStack_190.AllocatorInstance.Data = (FScriptContainerElement *)TStack_168._padding_;
LAB_14b85ab10:
          if (TStack_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_190.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// OnDeadEvent @ 14b840590

void __thiscall
UDS_SmiteAbility::OnDeadEvent
          (UDS_SmiteAbility *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = UDS_DataBase::GetEntityID(this_00);
    UpdateSmiteInfo(this,local_res18);
  }
  return;
}

// OnMainCharChanged @ 14b840ba0

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
UDS_SmiteAbility::OnMainCharChanged
          (UDS_SmiteAbility *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *this_00;
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar4;
  undefined1 local_res20 [8];
  
  pFVar2 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this_00 = &this->MainCharBuffData;
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
    }
    TVar4 = UDS_CharBuffData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar4.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SmiteAbility>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar3[6].field_0x8,(UDS_SmiteAbility *)local_res20,(pmf_1a6e1ad7 *)this);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b846010

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

void __thiscall UDS_SmiteAbility::OnPostActivateAbility(UDS_SmiteAbility *this)

{
  FDS_EntityBase *pFVar1;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar2;
  UDS_EntityManager *pUVar3;
  undefined1 local_res10 [24];
  
  pFVar1 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    TVar2 = UDS_CharBuffData::GetData((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->MainCharBuffData).WeakPtr = *TVar2.WeakPtr;
  }
  pUVar3 = UDS_EntityManager::GetInst();
  if (pUVar3 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnSpawnEntityEvent,
               this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_SmiteAbility>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3->OnSpawnEntityEvent,(UDS_SmiteAbility *)local_res10,(pmf_43e15a3b *)this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_SmiteAbility>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_SmiteAbility *)local_res10,(pmf_3e30ac0d *)this);
  return;
}

// OnSpawnEntity @ 14b846fd0

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

void __thiscall UDS_SmiteAbility::OnSpawnEntity(UDS_SmiteAbility *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  code *local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  code *local_18;
  longlong lStack_10;
  
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    UDS_CharBuffData::GetData((ulong64)&stack0x00000018);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0x00000018);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000018);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,this);
      uStack_20 = 0;
      local_28 = OnChangedBuffList;
      lStack_10 = (ulonglong)uStack_1c << 0x20;
      local_18 = OnChangedBuffList;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000018);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SmiteAbility>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar3[6].field_0x8,(UDS_SmiteAbility *)&stack0xffffffffffffffd8,
                 (pmf_1a6e1ad7 *)this);
    }
    UDS_DeathData::GetData((ulong64)&stack0x00000020,pFVar2->EntityID,false);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0x00000020);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000020);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[3].field_0x20,this);
      uStack_20 = 0;
      local_28 = OnDeadEvent;
      lStack_10 = (ulonglong)uStack_1c << 0x20;
      local_18 = OnDeadEvent;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000020);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SmiteAbility>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)&pUVar3[3].field_0x20,(UDS_SmiteAbility *)&stack0xffffffffffffffd8,
                 (pmf_d9e2b740 *)this);
    }
  }
  return;
}

// UpdateSmiteInfo @ 14b85a730

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

void __thiscall UDS_SmiteAbility::UpdateSmiteInfo(UDS_SmiteAbility *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  UDS_SmiteAbility *pUVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  UDS_LogManager *pUVar8;
  UDS_SkillDataSet *this_00;
  FDS_SkillDeckInfo *this_01;
  UObject *pUVar9;
  UDS_SkillData *pUVar10;
  FDS_SkillActLevelTableRow *pFVar11;
  UDS_CharBuffData *pUVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FWeakObjectPtr *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  int local_1c0 [2];
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  FDS_EntityBase *local_198;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_190;
  UDS_SmiteAbility *local_180;
  FWeakObjectPtr *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_180 = this;
  pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (((pFVar6 != (FDS_EntityBase *)0x0) &&
      (local_198 = pFVar6, pFVar7 = FDS_EntityBase::GetEntityBase(param_1),
      pFVar7 != (FDS_EntityBase *)0x0)) && (pFVar7->EntityType != MainCharacter)) {
    UDS_CharBuffData::GetData((ulong64)&local_1b8);
    bVar5 = FWeakObjectPtr::IsValid(&local_1b8);
    if (bVar5) {
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_1b0);
      bVar5 = FWeakObjectPtr::IsValid(&local_1b0);
      if (bVar5) {
        UDS_DeathData::GetData((ulong64)&local_1a0,pFVar7->EntityID,false);
        bVar5 = FWeakObjectPtr::IsValid(&local_1a0);
        if (bVar5) {
          this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_1b0);
          this_01 = UDS_SkillDataSet::GetSkillDeckInfo(this_00);
          FDS_SkillDeckInfo::GetSkillList(this_01,&local_190);
          iVar13 = local_190.ArrayNum;
          pFVar15 = (FWeakObjectPtr *)(local_190.AllocatorInstance.Data + (longlong)iVar13 * 8);
          FVar16.Data = local_190.AllocatorInstance.Data;
          local_178 = pFVar15;
LAB_14b85a8d0:
          if (local_190.ArrayNum != iVar13) {
            local_1d8 = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_1d8);
          }
          if ((FWeakObjectPtr *)FVar16.Data == pFVar15) goto LAB_14b85ab10;
          local_1c8 = *(FWeakObjectPtr *)FVar16.Data;
          bVar5 = FWeakObjectPtr::IsValid(&local_1c8);
          if (bVar5) {
            local_1d0 = local_1c8;
            pUVar9 = FWeakObjectPtr::Get(&local_1c8);
            if (0 < *(int *)(pUVar9 + 5)) {
              pUVar9 = FWeakObjectPtr::Get(&local_1c8);
              UDS_SkillData::GetData
                        ((ulong64)&local_1a8,pFVar6->EntityID,SUB41(*(undefined4 *)(pUVar9 + 5),0));
              bVar5 = FWeakObjectPtr::IsValid(&local_1a8);
              if (bVar5) {
                local_1d0 = local_1a8;
              }
            }
            pUVar9 = FWeakObjectPtr::Get(&local_1a0);
            if (pUVar9[3].field_0x18 == '\x01') {
              pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_1d0);
              UDS_SkillData::SetIsActiveSmite(pUVar10,false,pFVar7->EntityID,0);
              FVar16.Data = FVar16.Data + 8;
              goto LAB_14b85a8d0;
            }
            pUVar9 = FWeakObjectPtr::Get(&local_1d0);
            pFVar11 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar9[2].field_0x24,true);
            pFVar6 = local_198;
            if (pFVar11 == (FDS_SkillActLevelTableRow *)0x0) goto LAB_14b85aa81;
            pFVar14 = (pFVar11->ID_SmiteBuff).AllocatorInstance.Data;
            iVar2 = (pFVar11->ID_SmiteBuff).ArrayNum;
            pFVar1 = pFVar14 + (longlong)iVar2 * 4;
            while( true ) {
              if ((pFVar11->ID_SmiteBuff).ArrayNum != iVar2) {
                local_1d7[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_1d7);
              }
              pUVar4 = local_180;
              if (pFVar14 == pFVar1) break;
              local_1c0[0] = *(int *)pFVar14;
              pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_1b8);
              bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,local_1c0);
              if (bVar5) goto LAB_14b85aa8e;
              pFVar14 = pFVar14 + 4;
            }
            bVar5 = FWeakObjectPtr::IsValid(&(local_180->MainCharBuffData).WeakPtr);
            if (bVar5) {
              pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(pUVar4->MainCharBuffData).WeakPtr)
              ;
              bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,&pFVar11->ID_HaveMySmiteBuff);
              if (bVar5) {
                pUVar12 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_1b8);
                bVar5 = UDS_CharBuffData::HasBuffInfo(pUVar12,&pFVar11->ID_HaveTargetSmiteBuff);
                if (bVar5) {
LAB_14b85aa8e:
                  pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_1d0);
                  if (((pFVar11->ID_AttackLink).ArrayNum < 1) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  UDS_SkillData::SetIsActiveSmite
                            (pUVar10,true,pFVar7->EntityID,
                             *(int *)(pFVar11->ID_AttackLink).AllocatorInstance.Data);
                  goto LAB_14b85ab10;
                }
              }
            }
            pUVar10 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_1d0);
            UDS_SkillData::SetIsActiveSmite(pUVar10,false,pFVar7->EntityID,0);
            pFVar15 = local_178;
            pFVar6 = local_198;
          }
LAB_14b85aa81:
          FVar16.Data = FVar16.Data + 8;
          goto LAB_14b85a8d0;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_SmiteAbility::UpdateSmiteInfo",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_168.Ptr,0x95,L"deathData is nullptr. EntityID: %llu");
          local_190.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
LAB_14b85ab10:
          if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}


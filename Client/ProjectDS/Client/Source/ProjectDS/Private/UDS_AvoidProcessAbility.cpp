// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b421cc0

UClass * __cdecl UDS_AvoidProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AvoidProcessAbility",
               &Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_AvoidProcessAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AvoidProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_AvoidProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton;
}

// UDS_AvoidProcessAbility @ 14b423ca0

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

UDS_AvoidProcessAbility * __thiscall
UDS_AvoidProcessAbility::UDS_AvoidProcessAbility
          (UDS_AvoidProcessAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_AvoidProcessAbility @ 14b424080

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

void __thiscall UDS_AvoidProcessAbility::~UDS_AvoidProcessAbility(UDS_AvoidProcessAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4250b0

UClass * __cdecl UDS_AvoidProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AvoidProcessAbility",
               &Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_AvoidProcessAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AvoidProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_AvoidProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AvoidProcessAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_AvoidProcessAbility @ 14b425580

void __cdecl UDS_AvoidProcessAbility::StaticRegisterNativesUDS_AvoidProcessAbility(void)

{
  return;
}

// UDS_AvoidProcessAbility @ 14b79b660

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

UDS_AvoidProcessAbility * __thiscall
UDS_AvoidProcessAbility::UDS_AvoidProcessAbility
          (UDS_AvoidProcessAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// InitAvoidSkillID @ 14b7ae3f0

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

void __thiscall UDS_AvoidProcessAbility::InitAvoidSkillID(UDS_AvoidProcessAbility *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  FDS_CharacterBaseTableRow *pFVar4;
  UDS_SkillDataSet *this_00;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined4 uVar9;
  undefined1 auStackY_1c8 [32];
  EDS_AbilityDeactivateType local_188 [8];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->field_0xe9 == '\0') {
    local_188[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
  }
  else {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_170);
    bVar2 = FWeakObjectPtr::IsValid(&local_170);
    if ((bVar2) &&
       (pFVar4 = FDS_CharacterBaseTableRow::Get
                           (*(long64 *)(*(longlong *)&this->field_0xc8 + 0x18),true),
       pFVar4 != (FDS_CharacterBaseTableRow *)0x0)) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_170);
      UDS_SkillDataSet::GetAvoidSkillList(this_00,&local_168);
      uVar9 = 0;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
      iVar7 = local_168.ArrayNum;
      if (pUVar5[6].field_0x11 == '\x01') {
        uVar9 = 0;
        if (0 < iVar7) {
          uVar9 = *(undefined4 *)local_168.AllocatorInstance.Data;
        }
      }
      else if (1 < iVar7) {
        uVar9 = *(undefined4 *)(local_168.AllocatorInstance.Data + 4);
      }
      pFVar1 = local_168.AllocatorInstance.Data + (longlong)iVar7 * 4;
      FVar8.Data = local_168.AllocatorInstance.Data;
      while( true ) {
        if (local_168.ArrayNum != iVar7) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_188);
        }
        if (FVar8.Data == pFVar1) {
          UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
          bVar2 = FWeakObjectPtr::IsValid(&local_178);
          if (bVar2) {
            pUVar5 = FWeakObjectPtr::Get(&local_178);
            *(undefined4 *)(pUVar5 + 1) = uVar9;
            local_180 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_178);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_180 != (FWeakObjectPtr)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_180);
            }
            local_188[0] = 0xd;
            bVar2 = UDS_GameplayAbility::TryActivateAbility
                              ((UDS_GameplayAbility *)this,local_188,
                               (TObjectPtr<UWN_AbilityContext>)&local_180);
            local_188[0] = Cancel;
            if (bVar2) {
              local_188[0] = Success;
            }
          }
          else {
            local_188[0] = Cancel;
          }
          goto LAB_14b7ae661;
        }
        UDS_SkillData::GetData
                  ((ulong64)&local_180,*(ulong64 *)&this->field_0xe0,
                   SUB41(*(undefined4 *)FVar8.Data,0));
        bVar2 = FWeakObjectPtr::IsValid(&local_180);
        if (!bVar2) break;
        pUVar5 = FWeakObjectPtr::Get(&local_180);
        cVar3 = (**(code **)(*(longlong *)pUVar5 + 0x2f8))(pUVar5);
        if (cVar3 == '\0') goto LAB_14b7ae5e0;
        FVar8.Data = FVar8.Data + 4;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_AvoidProcessAbility::InitAvoidSkillID",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_158.Ptr,0x81,L"skill data is invalid. SkillID : %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
LAB_14b7ae5e0:
      local_188[0] = Cancel;
LAB_14b7ae661:
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
      if (local_168.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_168.AllocatorInstance.Data);
      return;
    }
    local_188[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
  }
  return;
}

// OnCanActivate @ 14b7b5d60

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

bool __thiscall UDS_AvoidProcessAbility::OnCanActivate(UDS_AvoidProcessAbility *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
              ((ulong64 *)&local_res20,&this->field_0xe0);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res20);
      if ((pUVar4[5].field_0x10 == '\0') && (pUVar4[5].field_0x11 == '\0')) {
        pUVar4 = FWeakObjectPtr::Get(&local_res20);
        if (pUVar4[4].field_0x20 == '\0') {
          local_res18[0] = Mount;
          bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res18);
          if (!bVar2) {
            return true;
          }
        }
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6676608119981735972>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AvoidProcessAbility.cpp"
                         ,0x24,"airwalkAbilityData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b8230

void __thiscall
UDS_AvoidProcessAbility::OnDeactivateAbility(UDS_AvoidProcessAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b7bb430

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

void __thiscall UDS_AvoidProcessAbility::OnPostActivateAbility(UDS_AvoidProcessAbility *this)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UDS_SkillDataSet *this_00;
  UObject *pUVar3;
  UDS_SkillData *this_01;
  int iVar4;
  ForAnyElementType this_02;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
    UDS_SkillDataSet::GetCurrentActiveSkillList(this_00,&local_28);
    iVar4 = local_28.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + (longlong)iVar4 * 8);
    this_02.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
      if (pUVar3[9].field_0x8 == '\x05') {
        this_01 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        bVar2 = UDS_SkillData::IsToggleEnd(this_01);
        if (!bVar2) {
          local_res8[0] = Cancel;
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
          UDS_GameplayAbility::DeactivateAbility
                    ((UDS_GameplayAbility *)this,&pUVar3[2].field_0x18,local_res8);
        }
      }
      this_02.Data = this_02.Data + 8;
    }
    if ((FWeakObjectPtr *)local_28.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  InitAvoidSkillID(this);
  return;
}


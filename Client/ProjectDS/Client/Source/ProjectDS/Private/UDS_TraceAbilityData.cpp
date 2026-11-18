// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5c3610

UClass * __cdecl UDS_TraceAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TraceAbilityData",
               &Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TraceAbilityData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TraceAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TraceAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton;
}

// UDS_TraceAbilityData @ 14b5c74d0

UDS_TraceAbilityData * __thiscall
UDS_TraceAbilityData::UDS_TraceAbilityData(UDS_TraceAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TraceAbilityData__6B_;
  this->RequestSkillID = 0;
  this->TargetTraceEntityID = 0;
  this->bIsTargetTrace = false;
  this->TargetAbilityTagType = None;
  this->TraceType = None;
  return this;
}

// ~UDS_TraceAbilityData @ 14b5c8d20

void __thiscall UDS_TraceAbilityData::~UDS_TraceAbilityData(UDS_TraceAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_TraceAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc320

UClass * __cdecl UDS_TraceAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TraceAbilityData",
               &Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TraceAbilityData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TraceAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TraceAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TraceAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_TraceAbilityData @ 14b5ce040

void __cdecl UDS_TraceAbilityData::StaticRegisterNativesUDS_TraceAbilityData(void)

{
  return;
}

// UDS_TraceAbilityData @ 14ba33710

UDS_TraceAbilityData * __thiscall
UDS_TraceAbilityData::UDS_TraceAbilityData(UDS_TraceAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TraceAbilityData__6B_;
  this->RequestSkillID = 0;
  this->TargetTraceEntityID = 0;
  this->bIsTargetTrace = false;
  this->TargetAbilityTagType = None;
  this->TraceType = None;
  return this;
}

// IsTrackingNeeded @ 14ba5d780

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

bool __thiscall UDS_TraceAbilityData::IsTrackingNeeded(UDS_TraceAbilityData *this)

{
  bool bVar1;
  EDS_MoveToTargetAbilityState EVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  ulong64 local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->bIsTargetTrace != false) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      local_150 = 0;
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        local_150 = *(ulong64 *)(pUVar3 + 1);
      }
      if (local_150 != 0) {
        pFVar4 = FDS_EntityBase::GetEntityBase(&local_150);
        if (pFVar4 == (FDS_EntityBase *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_TraceAbilityData::IsTrackingNeeded",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_138.Ptr,0x35,
                     L"sourceEntity is nullptr. sourceEntityID : %llu");
        }
        else {
          if (pFVar4->EntityType != MainCharacter) {
            return false;
          }
          UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                    ((ulong64 *)&local_148,(EDS_AbilityTagType *)&local_150);
          bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_148,
                             (void *)0x0);
          if (bVar1) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_TraceAbilityData::IsTrackingNeeded",0x26,Yes);
            pwVar7 = L"findTargetData is nullptr.";
            uVar6 = 0x42;
          }
          else {
            pUVar3 = FWeakObjectPtr::Get(&local_148);
            bVar1 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar3[2].field_0x8);
            if (!bVar1) {
              return false;
            }
            UDS_AbilityDataSet::GetAbilityData<UDS_MoveToTargetAbilityData>
                      ((ulong64 *)&local_140,(EDS_AbilityTagType *)&local_150);
            bVar1 = TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> *)
                               &local_140,(void *)0x0);
            if (!bVar1) {
              EVar2 = UDS_MoveToTargetAbility::GetMoveToTargetState
                                ((TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)
                                 local_140);
              return EVar2 == Moving;
            }
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_TraceAbilityData::IsTrackingNeeded",0x26,Yes);
            pwVar7 = L"moveToTargetData is nullptr.";
            uVar6 = 0x4f;
          }
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar6,pwVar7);
        }
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// ResetData @ 14ba696b0

void __thiscall UDS_TraceAbilityData::ResetData(UDS_TraceAbilityData *this)

{
  this->RequestSkillID = 0;
  this->TargetTraceEntityID = 0;
  return;
}

// SetTargetTraceData @ 14ba75130

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
UDS_TraceAbilityData::SetTargetTraceData
          (UDS_TraceAbilityData *this,FDS_EntityBase *param_1,FDS_SkillTableRow *param_2,
          ulong64 param_3,bool param_4)

{
  bool bVar1;
  
  (**(code **)(this->_padding_ + 0x2c8))();
  if ((param_2 != (FDS_SkillTableRow *)0x0) && (param_1 != (FDS_EntityBase *)0x0)) {
    if (param_4) {
      this->bIsTargetTrace = true;
    }
    else {
      bVar1 = param_2->IsTargetTrace;
      this->bIsTargetTrace = bVar1;
      if (bVar1 != true) {
        return;
      }
    }
    this->RequestSkillID = param_2->ID;
    this->TargetTraceEntityID = param_3;
    this->TargetAbilityTagType = Skill_Process;
    this->TraceType = Skill;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b497120

UClass * __cdecl UDS_FindTargetAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FindTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_FindTargetAbilityData,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FindTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_FindTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton;
}

// UDS_FindTargetAbilityData @ 14b49a210

UDS_FindTargetAbilityData * __thiscall
UDS_FindTargetAbilityData::UDS_FindTargetAbilityData
          (UDS_FindTargetAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FindTargetAbilityData__6B_;
  (this->TargetInfo).TargetEntityID = 0;
  (this->TargetInfo).TargetHitSphereID = 0;
  (this->TargetInfo).TargetRadius = 0.0;
  (this->TargetInfo).DistanceOnSelected = 0.0;
  (this->TargetInfo).bIsValid = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).bIsForcedSetTarget = false;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConditionInfo).SearchDistance = 0.0;
  (this->ConditionInfo).SearchHeight = 0.0;
  (this->ConditionInfo).TargetDistanceMax = 0.0;
  (this->ConditionInfo).bIsBlockingCheck = false;
  (this->ConditionInfo).bIsTargetTrace = false;
  (this->ConditionInfo).bIsAutoUseSkill = false;
  (this->ConditionInfo).bIsInputTargeting = false;
  (this->ConditionInfo).SearchQuerys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionInfo).SearchQuerys.ArrayNum = 0;
  (this->ConditionInfo).SearchQuerys.ArrayMax = 0;
  return this;
}

// UDS_FindTargetAbilityData @ 14b49a2a0

UDS_FindTargetAbilityData * __thiscall
UDS_FindTargetAbilityData::UDS_FindTargetAbilityData
          (UDS_FindTargetAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_FindTargetAbilityData__6B_;
  (this->TargetInfo).TargetEntityID = 0;
  (this->TargetInfo).TargetHitSphereID = 0;
  (this->TargetInfo).TargetRadius = 0.0;
  (this->TargetInfo).DistanceOnSelected = 0.0;
  (this->TargetInfo).bIsValid = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).bIsForcedSetTarget = false;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConditionInfo).SearchDistance = 0.0;
  (this->ConditionInfo).SearchHeight = 0.0;
  (this->ConditionInfo).TargetDistanceMax = 0.0;
  (this->ConditionInfo).bIsBlockingCheck = false;
  (this->ConditionInfo).bIsTargetTrace = false;
  (this->ConditionInfo).bIsAutoUseSkill = false;
  (this->ConditionInfo).bIsInputTargeting = false;
  (this->ConditionInfo).SearchQuerys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionInfo).SearchQuerys.ArrayNum = 0;
  (this->ConditionInfo).SearchQuerys.ArrayMax = 0;
  return this;
}

// ~UDS_FindTargetAbilityData @ 14b49abc0

void __thiscall
UDS_FindTargetAbilityData::~UDS_FindTargetAbilityData(UDS_FindTargetAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_FindTargetAbilityData__6B_;
  pFVar1 = (this->ConditionInfo).SearchQuerys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b49bdd0

UClass * __cdecl UDS_FindTargetAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FindTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_FindTargetAbilityData,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FindTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_FindTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FindTargetAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_FindTargetAbilityData @ 14b49c070

void __cdecl UDS_FindTargetAbilityData::StaticRegisterNativesUDS_FindTargetAbilityData(void)

{
  return;
}

// ResetData @ 14ba18760

void __thiscall UDS_FindTargetAbilityData::ResetData(UDS_FindTargetAbilityData *this)

{
  int *piVar1;
  undefined8 uVar2;
  
  (this->TargetInfo).bIsValid = false;
  (this->TargetInfo).bIsForcedSetTarget = false;
  piVar1 = &(this->ConditionInfo).SearchQuerys.ArrayMax;
  (this->TargetInfo).TargetEntityID = 0;
  (this->TargetInfo).TargetHitSphereID = 0;
  (this->TargetInfo).TargetRadius = 0.0;
  (this->TargetInfo).DistanceOnSelected = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetInfo).TargetLocationOnSelected.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConditionInfo).SearchDistance = 0.0;
  (this->ConditionInfo).SearchHeight = 0.0;
  (this->ConditionInfo).TargetDistanceMax = 0.0;
  (this->ConditionInfo).bIsBlockingCheck = false;
  (this->ConditionInfo).bIsTargetTrace = false;
  (this->ConditionInfo).bIsAutoUseSkill = false;
  (this->ConditionInfo).bIsInputTargeting = false;
  (this->ConditionInfo).SearchQuerys.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ConditionInfo).SearchQuerys.AllocatorInstance,0,piVar1);
  }
  return;
}

// SetFindTargetDataBySkillID @ 14ba1c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataBySkillID
          (UDS_FindTargetAbilityData *this,ulong64 *param_1,int param_2)

{
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  FDS_SkillTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  double dVar6;
  undefined1 auStackY_198 [32];
  int local_158 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = param_2;
  (**(code **)(this->_padding_ + 0x2c8))();
  if ((*param_1 == 0) || (local_158[0] < 1)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_FindTargetAbilityData::SetFindTargetDataBySkillID",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_148.Ptr,0x73,
               L"Invalid param. (SourceEntityID: %d, SkillID: %d)");
  }
  else {
    pFVar4 = FDS_SkillTableRow::Get((longlong)local_158[0],true);
    if (pFVar4 != (FDS_SkillTableRow *)0x0) {
      dVar6 = DS_CommonDataHelper::BattleViewRange();
      (this->ConditionInfo).SearchDistance = (float)dVar6;
      (this->ConditionInfo).SearchHeight = (float)pFVar4->TargetHeight;
      (this->ConditionInfo).TargetDistanceMax = (float)pFVar4->TargetDistanceMax;
      (this->ConditionInfo).bIsBlockingCheck = pFVar4->IsBlockingCheck;
      (this->ConditionInfo).bIsTargetTrace = pFVar4->IsTargetTrace;
      bVar2 = UDS_SkillDataSet::IsAutoUseSkill(local_158);
      (this->ConditionInfo).bIsAutoUseSkill = bVar2;
      pTVar1 = &(this->ConditionInfo).SearchQuerys;
      (this->ConditionInfo).bIsInputTargeting = pFVar4->IsInputTargeting;
      iVar3 = (this->ConditionInfo).SearchQuerys.ArrayNum;
      if (iVar3 == (this->ConditionInfo).SearchQuerys.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar1->AllocatorInstance,
                           &(this->ConditionInfo).SearchQuerys.ArrayMax);
      }
      (this->ConditionInfo).SearchQuerys.ArrayNum = iVar3 + 1;
      (pTVar1->AllocatorInstance).Data[iVar3] = (FScriptContainerElement)0x8;
      iVar3 = (this->ConditionInfo).SearchQuerys.ArrayNum;
      if (iVar3 == (this->ConditionInfo).SearchQuerys.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar1->AllocatorInstance,
                           &(this->ConditionInfo).SearchQuerys.ArrayMax);
      }
      (this->ConditionInfo).SearchQuerys.ArrayNum = iVar3 + 1;
      (pTVar1->AllocatorInstance).Data[iVar3] = (FScriptContainerElement)0x7;
      return true;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_FindTargetAbilityData::SetFindTargetDataBySkillID",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x7a,L"skillTableRow is nullptr. (%d)");
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// SetFindTargetDataBySkillID @ 14ba1c4f0

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataBySkillID(UDS_FindTargetAbilityData *this,int param_1)

{
  bool bVar1;
  ulong64 local_res18 [2];
  
  local_res18[0] = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  bVar1 = SetFindTargetDataBySkillID(this,local_res18,param_1);
  return bVar1;
}

// SetFindTargetDataByTargetEntityID @ 14ba1c530

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataByTargetEntityID
          (UDS_FindTargetAbilityData *this,ulong64 *param_1,ulong64 *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UDS_FindTargetAbilityData *local_res18 [2];
  
  (this->TargetInfo).TargetEntityID = *param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar1 = UDS_FindTargetAbility::FindTargetByForced
                    (*param_1,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                              &local_res8);
  if (!bVar1) {
    return false;
  }
  (this->TargetInfo).bIsValid = true;
  (this->TargetInfo).bIsForcedSetTarget = true;
  return true;
}

// SetFindTargetDataByTargetEntityID @ 14ba1c5c0

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataByTargetEntityID
          (UDS_FindTargetAbilityData *this,ulong64 *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  FWeakObjectPtr local_res8;
  UDS_FindTargetAbilityData *local_res10;
  
  uVar2 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  (this->TargetInfo).TargetEntityID = *param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  bVar1 = UDS_FindTargetAbility::FindTargetByForced
                    (uVar2,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res8);
  if (!bVar1) {
    return false;
  }
  (this->TargetInfo).bIsValid = true;
  (this->TargetInfo).bIsForcedSetTarget = true;
  return true;
}

// SetFindTargetDataByTargetLocation @ 14ba1c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataByTargetLocation
          (UDS_FindTargetAbilityData *this,ulong64 *param_1,ulong64 *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x2c8))();
  if (*param_1 == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_FindTargetAbilityData::SetFindTargetDataByTargetLocation",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x58,L"Invalid SourceEntityID. (%d)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    (this->TargetInfo).TargetEntityID = *param_2;
    bVar2 = true;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Y = dVar1;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    (this->TargetInfo).bIsValid = true;
    (this->TargetInfo).bIsForcedSetTarget = true;
  }
  return bVar2;
}

// SetFindTargetDataByTargetLocation @ 14ba1c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_FindTargetAbilityData::SetFindTargetDataByTargetLocation
          (UDS_FindTargetAbilityData *this,ulong64 *param_1,TVector<double> *param_2)

{
  double dVar1;
  bool bVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar3 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  (**(code **)(this->_padding_ + 0x2c8))(this);
  if (uVar3 == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_FindTargetAbilityData::SetFindTargetDataByTargetLocation",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x58,L"Invalid SourceEntityID. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    (this->TargetInfo).TargetEntityID = *param_1;
    bVar2 = true;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Y = dVar1;
    (this->TargetInfo).ForcedTargetLocation.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    (this->TargetInfo).bIsValid = true;
    (this->TargetInfo).bIsForcedSetTarget = true;
  }
  return bVar2;
}


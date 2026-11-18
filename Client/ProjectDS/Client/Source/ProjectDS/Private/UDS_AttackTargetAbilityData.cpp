// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b420010

UClass * __cdecl UDS_AttackTargetAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AttackTargetAbilityData,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AttackTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AttackTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton;
}

// UDS_AttackTargetAbilityData @ 14b423bd0

UDS_AttackTargetAbilityData * __thiscall
UDS_AttackTargetAbilityData::UDS_AttackTargetAbilityData
          (UDS_AttackTargetAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->AnimationIndex = -1;
  this->_padding_ = (longlong)&___7UDS_AttackTargetAbilityData__6B_;
  this->AttackType = None;
  this->AttackStartTime = 0.0;
  this->AttackEndTime = 0.0;
  this->AbilityDuration = 0.0;
  this->AbilityAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  (this->ImpactInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpactInfo).ArrayNum = 0;
  (this->ImpactInfo).ArrayMax = 0;
  return this;
}

// ~UDS_AttackTargetAbilityData @ 14b423fd0

void __thiscall
UDS_AttackTargetAbilityData::~UDS_AttackTargetAbilityData(UDS_AttackTargetAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AttackTargetAbilityData__6B_;
  DestructItems<FDS_AtomicImpactInfo,int>
            ((FDS_AtomicImpactInfo *)(this->ImpactInfo).AllocatorInstance.Data,
             (this->ImpactInfo).ArrayNum);
  pFVar1 = (this->ImpactInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b424f30

UClass * __cdecl UDS_AttackTargetAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AttackTargetAbilityData,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AttackTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_AttackTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackTargetAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_AttackTargetAbilityData @ 14b425560

void __cdecl UDS_AttackTargetAbilityData::StaticRegisterNativesUDS_AttackTargetAbilityData(void)

{
  return;
}

// UDS_AttackTargetAbilityData @ 14b9d7fc0

UDS_AttackTargetAbilityData * __thiscall
UDS_AttackTargetAbilityData::UDS_AttackTargetAbilityData
          (UDS_AttackTargetAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->AnimationIndex = -1;
  this->_padding_ = (longlong)&___7UDS_AttackTargetAbilityData__6B_;
  this->AttackType = None;
  this->AttackStartTime = 0.0;
  this->AttackEndTime = 0.0;
  this->AbilityDuration = 0.0;
  this->AbilityAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  (this->ImpactInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpactInfo).ArrayNum = 0;
  (this->ImpactInfo).ArrayMax = 0;
  return this;
}

// InitAttackTargetData @ 14b9f6aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_AttackTargetAbilityData::InitAttackTargetData
          (UDS_AttackTargetAbilityData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  int *piVar1;
  EDS_SkillType EVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FDS_SkillTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  FDS_SkillActLevelTableRow *pFVar10;
  UDS_SkillData *pUVar11;
  FDS_SkillAttackTableRow *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  float fVar17;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_258 [32];
  uint uVar18;
  wchar_t *pwVar19;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  int local_208;
  int local_204 [3];
  FDS_AtomicImpactInfo local_1f8;
  FScriptContainerElement *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_res10 = param_1.WeakPtr;
  (**(code **)(this->_padding_ + 0x2c8))();
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pFVar8 = FDS_SkillTableRow::Get((longlong)*(int *)&pUVar7[2].field_0x1c,true);
    if (pFVar8 == (FDS_SkillTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar9 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_res10);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_AttackTargetAbilityData::InitAttackTargetData",0x31,Yes);
      pwVar19 = L"skillTableRow is nullptr. skillID : %d";
      uVar18 = 0x31;
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      pFVar10 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar7[2].field_0x24,true);
      if (pFVar10 != (FDS_SkillActLevelTableRow *)0x0) {
        this->AnimationIndex = pFVar10->AttackAniIndex + -1;
        pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
        dVar4 = UDS_SkillData::GetSkillDuration(pUVar11,true);
        this->AbilityDuration = (float)dVar4;
        pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
        dVar4 = UDS_SkillData::GetSkillAniCutTime(pUVar11,true);
        this->AbilityAniCutTime = (float)dVar4;
        pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
        fVar17 = UDS_SkillData::GetInputMoveTime(pUVar11,true);
        this->InputMoveTime = fVar17;
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        this->AttackStartTime = *(double *)&pUVar7[7].field_0x8;
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        this->AttackEndTime = *(double *)&pUVar7[7].field_0x10;
        EVar2 = pFVar8->SkillType;
        if (EVar2 == NormalAttack) {
          this->AttackType = NormalAttack;
        }
        else if ((EVar2 == DefaultSkill) || (EVar2 == SpecialSkill)) {
          this->AttackType = SkillAttack;
        }
        local_210.Data = (FScriptContainerElement *)0x0;
        local_208 = (pFVar10->ID_AttackLink).ArrayNum;
        lVar14 = (longlong)local_208;
        pFVar3 = (pFVar10->ID_AttackLink).AllocatorInstance.Data;
        if (local_208 == 0) {
          local_204[0] = 0;
          iVar13 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208,0,&local_210,local_208,local_204);
          memcpy(local_210.Data,pFVar3,lVar14 << 2);
          iVar13 = local_208;
        }
        local_178 = local_210.Data + (longlong)iVar13 * 4;
        FVar16.Data = local_210.Data;
        iVar6 = iVar13;
        while( true ) {
          pFVar3 = local_178;
          if (iVar6 != iVar13) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_218);
          }
          if (FVar16.Data == pFVar3) goto LAB_14b9f7041;
          iVar6 = *(int *)FVar16.Data;
          pFVar12 = FDS_SkillAttackTableRow::Get((longlong)iVar6,true);
          if (pFVar12 == (FDS_SkillAttackTableRow *)0x0) break;
          if (pFVar12->SkillDamageType != None) {
            local_1f8.ImpactTime.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f8.LocationOffset.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_1f8.LocationOffset.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_1f8.LocationOffset.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_1f8.ImpactTime.ArrayNum = 0;
            local_1f8.ImpactTime.ArrayMax = 0;
            local_1f8.MulDamage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f8.MulDamage.ArrayNum = 0;
            local_1f8.MulDamage.ArrayMax = 0;
            local_1f8.AttackAngle = 0;
            local_1f8.AttackDistanceMin = 0;
            local_1f8.AttackDistanceMax = 0;
            local_1f8.AttackWidth = 0.0;
            local_1f8.AttackHeight = 0;
            local_1f8.RotationOffset = 0.0;
            local_1f8.HitEffect = 0;
            local_1f8.HitEffectScale = 0.0;
            local_1f8.HitEffectRotation = 0.0;
            local_1f8.CriticalHitEffect = 0;
            local_1f8.CriticalHitEffectScale = 0.0;
            local_1f8.HitEffectSound = 0;
            local_1f8.AbnormalActionID = 0;
            local_1f8.ImpactType = pFVar12->ImpactType;
            iVar15 = 0;
            local_1f8.SkillAttackID = iVar6;
            if (&local_1f8.ImpactTime != &pFVar12->ImpactTime) {
              uVar18 = (pFVar12->ImpactTime).ArrayNum;
              pFVar3 = (pFVar12->ImpactTime).AllocatorInstance.Data;
              local_1f8.ImpactTime.ArrayMax = 0;
              local_1f8.ImpactTime.ArrayNum = uVar18;
              iVar15 = 0;
              if (uVar18 != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar18,0,&local_1f8.ImpactTime.AllocatorInstance,uVar18,
                           &local_1f8.ImpactTime.ArrayMax);
                memcpy(local_1f8.ImpactTime.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar18 << 2
                      );
                iVar15 = local_1f8.MulDamage.ArrayMax;
              }
            }
            if (&local_1f8.MulDamage != &pFVar12->MulDamage) {
              iVar6 = (pFVar12->MulDamage).ArrayNum;
              pFVar3 = (pFVar12->MulDamage).AllocatorInstance.Data;
              local_1f8.MulDamage.ArrayNum = iVar6;
              if ((iVar6 == 0) && (iVar15 == 0)) {
                local_1f8.MulDamage.ArrayNum = 0;
                local_1f8.MulDamage.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar6,iVar15,&local_1f8.MulDamage.AllocatorInstance,iVar6,
                           &local_1f8.MulDamage.ArrayMax);
                if (iVar6 != 0) {
                  memcpy(local_1f8.MulDamage.AllocatorInstance.Data,pFVar3,(longlong)iVar6 << 2);
                }
              }
            }
            piVar1 = &(this->ImpactInfo).ArrayMax;
            local_1f8.AttackDistanceMin = (int)pFVar12->AttackDistanceMin;
            local_1f8.AttackAngle = pFVar12->AttackAngle;
            local_1f8.AttackWidth = (float)pFVar12->AttackWidth;
            local_1f8.AttackDistanceMax = (int)pFVar12->AttackDistanceMax;
            local_1f8.AttackHeight = (int)pFVar12->AttackHeight;
            local_1f8.LocationOffset.field0_0x0._s_0.X = (pFVar12->LocationOffset).field0_0x0._s_0.X
            ;
            local_1f8.LocationOffset.field0_0x0._s_0.Y = (pFVar12->LocationOffset).field0_0x0._s_0.Y
            ;
            local_1f8.LocationOffset.field0_0x0._s_0.Z = (pFVar12->LocationOffset).field0_0x0._s_0.Z
            ;
            local_1f8.RotationOffset = pFVar12->RotationOffset;
            local_1f8.AbnormalActionID = pFVar12->ID_AbnormalAction;
            iVar6 = (this->ImpactInfo).ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,&(this->ImpactInfo).AllocatorInstance,piVar1);
            }
            (this->ImpactInfo).ArrayNum = iVar6 + 1;
            FDS_AtomicImpactInfo::FDS_AtomicImpactInfo
                      ((FDS_AtomicImpactInfo *)
                       ((this->ImpactInfo).AllocatorInstance.Data + (longlong)iVar6 * 0x78),
                       &local_1f8);
            if (local_1f8.MulDamage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.MulDamage.AllocatorInstance.Data);
            }
            if (local_1f8.ImpactTime.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.ImpactTime.AllocatorInstance.Data);
            }
          }
          FVar16.Data = FVar16.Data + 4;
          iVar6 = local_208;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_AttackTargetAbilityData::InitAttackTargetData",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_168.Ptr,0x5d,
                     L"skillAttackTable is nullptr. attackID : %d");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
LAB_14b9f7041:
        if (local_210.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data);
        }
        return true;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar9 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_res10);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_AttackTargetAbilityData::InitAttackTargetData",0x31,Yes);
      pwVar19 = L"skillActLevelTableRow is nullptr. skillActLevelID : %d";
      uVar18 = 0x38;
    }
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,uVar18,pwVar19);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  return false;
}

// ResetData @ 14ba18580

void __thiscall UDS_AttackTargetAbilityData::ResetData(UDS_AttackTargetAbilityData *this)

{
  int *piVar1;
  
  this->AnimationIndex = -1;
  this->AttackType = None;
  this->AbilityDuration = 0.0;
  this->AbilityAniCutTime = 0.0;
  this->InputMoveTime = 0.0;
  DestructItems<FDS_AtomicImpactInfo,int>
            ((FDS_AtomicImpactInfo *)(this->ImpactInfo).AllocatorInstance.Data,
             (this->ImpactInfo).ArrayNum);
  piVar1 = &(this->ImpactInfo).ArrayMax;
  (this->ImpactInfo).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(this->ImpactInfo).AllocatorInstance,0,piVar1);
  }
  return;
}


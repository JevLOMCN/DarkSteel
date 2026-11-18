// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b5846d0

UClass * __cdecl UDS_RotateToTargetAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_RotateToTargetAbilityData,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RotateToTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_RotateToTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton;
}

// UDS_RotateToTargetAbilityData @ 14b587460

UDS_RotateToTargetAbilityData * __thiscall
UDS_RotateToTargetAbilityData::UDS_RotateToTargetAbilityData
          (UDS_RotateToTargetAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bIsRotationPlace = false;
  this->_padding_ = (longlong)&___7UDS_RotateToTargetAbilityData__6B_;
  (this->StepInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepInfoArray).ArrayNum = 0;
  (this->StepInfoArray).ArrayMax = 0;
  FDS_RotateStepInfo::FDS_RotateStepInfo(&this->EmptyInfo,-1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_RotateToTargetAbilityData @ 14b5874d0

UDS_RotateToTargetAbilityData * __thiscall
UDS_RotateToTargetAbilityData::UDS_RotateToTargetAbilityData
          (UDS_RotateToTargetAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bIsRotationPlace = false;
  this->_padding_ = (longlong)&___7UDS_RotateToTargetAbilityData__6B_;
  (this->StepInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepInfoArray).ArrayNum = 0;
  (this->StepInfoArray).ArrayMax = 0;
  FDS_RotateStepInfo::FDS_RotateStepInfo(&this->EmptyInfo,-1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_RotateToTargetAbilityData @ 14b587bc0

void __thiscall
UDS_RotateToTargetAbilityData::~UDS_RotateToTargetAbilityData(UDS_RotateToTargetAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_RotateToTargetAbilityData__6B_;
  pFVar1 = (this->EmptyInfo).DefAttachSocket.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmptyInfo).AtkAttachSocket.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_RotateStepInfo,int>
            ((FDS_RotateStepInfo *)(this->StepInfoArray).AllocatorInstance.Data,
             (this->StepInfoArray).ArrayNum);
  pFVar1 = (this->StepInfoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5894f0

UClass * __cdecl UDS_RotateToTargetAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_RotateToTargetAbilityData,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RotateToTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_RotateToTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToTargetAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_RotateToTargetAbilityData @ 14b589c00

void __cdecl UDS_RotateToTargetAbilityData::StaticRegisterNativesUDS_RotateToTargetAbilityData(void)

{
  return;
}

// GetStepInfoByTime @ 14ba4fe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ba5002f) */
/* WARNING: Removing unreachable block (ram,0x00014ba50038) */
/* WARNING: Removing unreachable block (ram,0x00014ba50041) */
/* WARNING: Removing unreachable block (ram,0x00014ba5004a) */
/* WARNING: Removing unreachable block (ram,0x00014ba50054) */
/* WARNING: Removing unreachable block (ram,0x00014ba500b9) */
/* WARNING: Removing unreachable block (ram,0x00014ba500be) */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_RotateStepInfo * __thiscall
UDS_RotateToTargetAbilityData::GetStepInfoByTime(UDS_RotateToTargetAbilityData *this,float param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FDS_RotateStepInfo *pFVar7;
  UDS_LogManager *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_2d8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8 [2];
  ulonglong local_68;
  
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar10 = (this->StepInfoArray).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 * 0xb0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->StepInfoArray).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDS_RotateStepInfo *)(*pcVar3)();
        return pFVar7;
      }
      pFVar2 = (this->StepInfoArray).AllocatorInstance.Data;
      if (pFVar2[lVar9 + 0x10] == (FScriptContainerElement)0x1) {
        FVar1 = pFVar2[lVar9 + 8];
        if ((FVar1 == (FScriptContainerElement)0x0) || (FVar1 == (FScriptContainerElement)0x1)) {
          if ((fVar4 < (float)(*(uint *)(pFVar2 + lVar9 + 0x68) & uVar11)) ||
             (fVar4 < (float)(*(uint *)(pFVar2 + lVar9 + 0x6c) & uVar11))) goto LAB_14ba50104;
        }
        else if (FVar1 != (FScriptContainerElement)0x2) {
          if ((FVar1 == (FScriptContainerElement)0x3) || (FVar1 == (FScriptContainerElement)0x4))
          goto LAB_14ba50104;
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_2a8[0]._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (local_2a8,"FDS_RotateStepInfo::IsRotateOnlyOnce",0x24,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_2a8[0].Ptr,0x75,
                       L"Need to define behavior according to ViewTarget.");
            if ((void *)local_2a8[0]._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_2a8[0]._padding_);
            }
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7260423428253941878>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_RotateToTargetAbilityData.cpp"
                             ,0x76,"false");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FDS_RotateStepInfo *)(*pcVar3)();
            return pFVar7;
          }
        }
      }
      else {
LAB_14ba50104:
        if (*(float *)(pFVar2 + lVar9 + 0x14) <= param_1) {
          uVar11 = 0;
          if ((int)uVar10 < (this->StepInfoArray).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FDS_RotateStepInfo *)(*pcVar3)();
            return pFVar7;
          }
          return (FDS_RotateStepInfo *)
                 ((this->StepInfoArray).AllocatorInstance.Data + (ulonglong)uVar10 * 0xb0);
        }
      }
      lVar9 = lVar9 + -0xb0;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return &this->EmptyInfo;
}

// ResetData @ 14ba69100

void __thiscall UDS_RotateToTargetAbilityData::ResetData(UDS_RotateToTargetAbilityData *this)

{
  int *piVar1;
  undefined8 uVar2;
  
  this->bIsRotationPlace = false;
  DestructItems<FDS_RotateStepInfo,int>
            ((FDS_RotateStepInfo *)(this->StepInfoArray).AllocatorInstance.Data,
             (this->StepInfoArray).ArrayNum);
  piVar1 = &(this->StepInfoArray).ArrayMax;
  (this->StepInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,0,&(this->StepInfoArray).AllocatorInstance,0,piVar1);
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetLocationOnStartAbility).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// SetRotateToTargetDataBySkillData @ 14ba740c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData
          (UDS_RotateToTargetAbilityData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  TArray<FDS_RotateStepInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UObject *pUVar12;
  FDS_SkillTableRow *pFVar13;
  FDS_SkillActLevelTableRow *pFVar14;
  FDS_SkillAttackTableRow *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_b78 [32];
  FDS_RotateStepInfo local_b18;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b78;
  local_res10 = param_1.WeakPtr;
  (**(code **)(this->_padding_ + 0x2c8))();
  bVar7 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar7) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_a68._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_a68,"UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",0x3f,Yes
              );
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_a68.Ptr,0x8d,L"InSkillData is nullptr.");
    local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_a68._padding_;
  }
  else {
    pUVar12 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)&pUVar12[2].field_0x1c;
    if (iVar2 < 1) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar11 = UDS_LogManager::GetInst();
      local_948._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_948,"UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",0x3f,
                 Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_948.Ptr,0x94,L"Invalid SkillID. (%d)");
      local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_948._padding_;
    }
    else {
      pFVar13 = FDS_SkillTableRow::Get((longlong)iVar2,true);
      if (pFVar13 == (FDS_SkillTableRow *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar11 = UDS_LogManager::GetInst();
        local_828._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_828,"UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",0x3f
                   ,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_828.Ptr,0x9b,L"skillTableRow is nullptr. (%d)");
        local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_828._padding_;
      }
      else {
        pUVar12 = FWeakObjectPtr::Get(&local_res10);
        if (*(int *)&pUVar12[2].field_0x24 < 1) {
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar11 = UDS_LogManager::GetInst();
          local_708._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_708,"UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",
                     0x3f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_708.Ptr,0xa2,L"Invalid SkillActLevelID. (%d)");
          local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_708._padding_;
        }
        else {
          pFVar14 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)&pUVar12[2].field_0x24,true);
          if (pFVar14 == (FDS_SkillActLevelTableRow *)0x0) {
            pUVar11 = UDS_LogManager::GetInst();
            if (pUVar11 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar11 = UDS_LogManager::GetInst();
            local_5e8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_5e8,"UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",
                       0x3f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar11,1,Warning,local_5e8.Ptr,0xa9,
                       L"skillActLevelTableRow is nullptr. (%d)");
            local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_5e8._padding_;
          }
          else {
            uVar3 = (pFVar14->ID_AttackLink).ArrayNum;
            if (uVar3 == 0) {
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar11 = UDS_LogManager::GetInst();
              local_4c8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_4c8,
                         "UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",0x3f,Yes)
              ;
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,local_4c8.Ptr,0xb2,L"attackLinkIDArray is empty. (%d)");
              local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_4c8._padding_;
            }
            else {
              if (uVar3 == (pFVar14->LinkStartTime).ArrayNum) {
                pTVar1 = &this->StepInfoArray;
                this->bIsRotationPlace = pFVar13->IsRotationPlace;
                if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
                }
                if ((this->StepInfoArray).ArrayMax < (int)uVar3) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xb0,8,uVar3,&pTVar1->AllocatorInstance,(this->StepInfoArray).ArrayNum,
                             &(this->StepInfoArray).ArrayMax);
                }
                uVar17 = 0;
                uVar18 = uVar17;
                if (0 < (int)uVar3) {
                  do {
                    uVar16 = (uint)uVar17;
                    uVar9 = 0;
                    if ((int)uVar16 < (pFVar14->ID_AttackLink).ArrayNum) {
                      uVar9 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      uVar8 = (*pcVar6)();
                      return (bool)uVar8;
                    }
                    pFVar4 = (pFVar14->ID_AttackLink).AllocatorInstance.Data;
                    uVar9 = 0;
                    if ((int)uVar16 < (pFVar14->LinkStartTime).ArrayNum) {
                      uVar9 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      uVar8 = (*pcVar6)();
                      return (bool)uVar8;
                    }
                    pFVar5 = (pFVar14->LinkStartTime).AllocatorInstance.Data;
                    pFVar15 = FDS_SkillAttackTableRow::Get
                                        ((longlong)*(int *)(pFVar4 + uVar18 * 4),true);
                    if (pFVar15 == (FDS_SkillAttackTableRow *)0x0) {
                      pUVar11 = UDS_LogManager::GetInst();
                      if (pUVar11 != (UDS_LogManager *)0x0) {
                        pUVar11 = UDS_LogManager::GetInst();
                        local_168._padding_ = 0;
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (&local_168,
                                   "UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData"
                                   ,0x3f,Yes);
                        UDS_LogManager::PrintLog
                                  (pUVar11,1,Warning,local_168.Ptr,0xcd,
                                   L"skillAttackTableRow is nullptr. (%d)");
                        if ((void *)local_168._padding_ != (void *)0x0) {
                          FMemory::Free((void *)local_168._padding_);
                        }
                      }
                      (**(code **)(this->_padding_ + 0x2c8))();
                      return false;
                    }
                    FDS_RotateStepInfo::FDS_RotateStepInfo(&local_b18,uVar16);
                    local_b18.AttackLinkID = *(int *)(pFVar4 + uVar18 * 4);
                    local_b18.ViewTarget = pFVar15->ViewTarget;
                    local_b18.LinkStartTime = *(float *)(pFVar5 + uVar18 * 4);
                    local_b18.SkillID = iVar2;
                    if ((local_b18.ViewTarget == TargetView) ||
                       (local_b18.ViewTarget == RotationView)) {
                      local_b18.DelayViewRotation = pFVar15->DelayViewRotation;
                      local_b18.ViewRotationTime = pFVar15->ViewRotationTime;
                      local_b18.ViewRotation.Yaw = (double)pFVar15->ViewRotation;
                    }
                    else if (local_b18.ViewTarget != Stand) {
                      if (local_b18.ViewTarget == AttackStand) {
                        if (0 < (pFVar15->ImpactTime).ArrayNum) {
                          local_b18.FirstImpactTime =
                               *(float *)(pFVar15->ImpactTime).AllocatorInstance.Data;
                        }
                      }
                      else {
                        if (local_b18.ViewTarget != AttachTargetView) {
                          pUVar11 = UDS_LogManager::GetInst();
                          if (pUVar11 != (UDS_LogManager *)0x0) {
                            pUVar11 = UDS_LogManager::GetInst();
                            local_288._padding_ = 0;
                            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                      (&local_288,
                                       "UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData"
                                       ,0x3f,Yes);
                            UDS_LogManager::PrintLog
                                      (pUVar11,1,Warning,local_288.Ptr,0xfe,
                                       L"Need to define behavior according to ViewTarget.");
                            if ((void *)local_288._padding_ != (void *)0x0) {
                              FMemory::Free((void *)local_288._padding_);
                            }
                          }
                          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<7260423428253942015>,false,
                                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_RotateToTargetAbilityData.cpp"
                                             ,0xff,"false");
                          if (bVar7) {
                            pcVar6 = (code *)swi(3);
                            uVar8 = (*pcVar6)();
                            return (bool)uVar8;
                          }
                          if (local_b18.DefAttachSocket.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_b18.DefAttachSocket.Data.AllocatorInstance.Data);
                          }
                          goto LAB_14ba748ae;
                        }
                        if (&local_b18.AtkAttachSocket != &pFVar15->AtkAttachSocket) {
                          iVar10 = (pFVar15->AtkAttachSocket).Data.ArrayNum;
                          pFVar4 = (pFVar15->AtkAttachSocket).Data.AllocatorInstance.Data;
                          local_b18.AtkAttachSocket.Data.ArrayNum = iVar10;
                          if ((iVar10 == 0) && (local_b18.AtkAttachSocket.Data.ArrayMax == 0)) {
                            local_b18.AtkAttachSocket.Data.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,iVar10,local_b18.AtkAttachSocket.Data.ArrayMax,
                                       (ForAnyElementType *)&local_b18.AtkAttachSocket,iVar10,
                                       &local_b18.AtkAttachSocket.Data.ArrayMax);
                            if (iVar10 != 0) {
                              memcpy(local_b18.AtkAttachSocket.Data.AllocatorInstance.Data,pFVar4,
                                     (longlong)iVar10 * 2);
                            }
                          }
                        }
                        if (&local_b18.DefAttachSocket != &pFVar15->DefAttachSocket) {
                          iVar10 = (pFVar15->DefAttachSocket).Data.ArrayNum;
                          pFVar4 = (pFVar15->DefAttachSocket).Data.AllocatorInstance.Data;
                          local_b18.DefAttachSocket.Data.ArrayNum = iVar10;
                          if ((iVar10 == 0) && (local_b18.DefAttachSocket.Data.ArrayMax == 0)) {
                            local_b18.DefAttachSocket.Data.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,iVar10,local_b18.DefAttachSocket.Data.ArrayMax,
                                       (ForAnyElementType *)&local_b18.DefAttachSocket,iVar10,
                                       &local_b18.DefAttachSocket.Data.ArrayMax);
                            if (iVar10 != 0) {
                              memcpy(local_b18.DefAttachSocket.Data.AllocatorInstance.Data,pFVar4,
                                     (longlong)iVar10 * 2);
                            }
                          }
                        }
                      }
                    }
                    iVar10 = (this->StepInfoArray).ArrayNum;
                    if (iVar10 == (this->StepInfoArray).ArrayMax) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x8b0,&pTVar1->AllocatorInstance,
                                          &(this->StepInfoArray).ArrayMax);
                    }
                    (this->StepInfoArray).ArrayNum = iVar10 + 1;
                    FDS_RotateStepInfo::FDS_RotateStepInfo
                              ((FDS_RotateStepInfo *)
                               ((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0xb0),
                               &local_b18);
                    if (local_b18.DefAttachSocket.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b18.DefAttachSocket.Data.AllocatorInstance.Data);
                    }
                    if (local_b18.AtkAttachSocket.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b18.AtkAttachSocket.Data.AllocatorInstance.Data);
                    }
                    uVar17 = (ulonglong)(uVar16 + 1);
                    uVar18 = uVar18 + 1;
                  } while ((longlong)uVar18 < (longlong)(int)uVar3);
                }
                return true;
              }
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar11 = UDS_LogManager::GetInst();
              local_3a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_3a8,
                         "UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData",0x3f,Yes)
              ;
              UDS_LogManager::PrintLog
                        (pUVar11,1,Warning,local_3a8.Ptr,0xbb,
                         L"attackLinkIDNum(%d) != linkStartTimeNum(%d)");
              local_b18.AtkAttachSocket.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_3a8._padding_;
            }
          }
        }
      }
    }
  }
LAB_14ba748ae:
  if (local_b18.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.AtkAttachSocket.Data.AllocatorInstance.Data);
  }
  return false;
}

// SetRotateToTargetDataOnInteraction @ 14ba74970

bool __thiscall
UDS_RotateToTargetAbilityData::SetRotateToTargetDataOnInteraction
          (UDS_RotateToTargetAbilityData *this)

{
  int *piVar1;
  int iVar2;
  FDS_RotateStepInfo local_b8;
  
  (**(code **)(this->_padding_ + 0x2c8))();
  FDS_RotateStepInfo::FDS_RotateStepInfo(&local_b8,0);
  iVar2 = (this->StepInfoArray).ArrayNum;
  piVar1 = &(this->StepInfoArray).ArrayMax;
  local_b8.ViewTarget = TargetView;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&(this->StepInfoArray).AllocatorInstance,piVar1);
  }
  (this->StepInfoArray).ArrayNum = iVar2 + 1;
  FDS_RotateStepInfo::FDS_RotateStepInfo
            ((FDS_RotateStepInfo *)
             ((this->StepInfoArray).AllocatorInstance.Data + (longlong)iVar2 * 0xb0),&local_b8);
  if (local_b8.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.DefAttachSocket.Data.AllocatorInstance.Data);
  }
  if (local_b8.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AtkAttachSocket.Data.AllocatorInstance.Data);
  }
  return true;
}


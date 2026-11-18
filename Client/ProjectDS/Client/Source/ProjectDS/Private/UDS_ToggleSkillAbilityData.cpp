// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b5c4710

UClass * __cdecl UDS_ToggleSkillAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ToggleSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton;
}

// UDS_ToggleSkillAbilityData @ 14b5c7190

UDS_ToggleSkillAbilityData * __thiscall
UDS_ToggleSkillAbilityData::UDS_ToggleSkillAbilityData
          (UDS_ToggleSkillAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ToggleSkillAbilityData__6B_;
  this->ToggleSkillID = 0;
  this->LoopEffectID = 0;
  this->HitEffectID = 0;
  this->EndEffectID = 0;
  (this->SkillCostInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostInfoList).ArrayNum = 0;
  (this->SkillCostInfoList).ArrayMax = 0;
  this->MoveSpeed = 0.0;
  return this;
}

// UDS_ToggleSkillAbilityData @ 14b5c71e0

UDS_ToggleSkillAbilityData * __thiscall
UDS_ToggleSkillAbilityData::UDS_ToggleSkillAbilityData
          (UDS_ToggleSkillAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ToggleSkillAbilityData__6B_;
  this->ToggleSkillID = 0;
  this->LoopEffectID = 0;
  this->HitEffectID = 0;
  this->EndEffectID = 0;
  (this->SkillCostInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillCostInfoList).ArrayNum = 0;
  (this->SkillCostInfoList).ArrayMax = 0;
  this->MoveSpeed = 0.0;
  return this;
}

// ~UDS_ToggleSkillAbilityData @ 14b5c8b70

void __thiscall
UDS_ToggleSkillAbilityData::~UDS_ToggleSkillAbilityData(UDS_ToggleSkillAbilityData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ToggleSkillAbilityData__6B_;
  pFVar1 = (this->SkillCostInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cbd20

UClass * __cdecl UDS_ToggleSkillAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ToggleSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_ToggleSkillAbilityData @ 14b5cdf90

void __cdecl UDS_ToggleSkillAbilityData::StaticRegisterNativesUDS_ToggleSkillAbilityData(void)

{
  return;
}

// ResetData @ 14ba69650

void __thiscall UDS_ToggleSkillAbilityData::ResetData(UDS_ToggleSkillAbilityData *this)

{
  int *piVar1;
  
  this->ToggleSkillID = 0;
  piVar1 = &(this->SkillCostInfoList).ArrayMax;
  this->ToggleSkillType = None;
  this->LoopEffectID = 0;
  this->HitEffectID = 0;
  this->EndEffectID = 0;
  this->ControlMoveTime = 0.0;
  this->MoveSpeed = 0.0;
  this->UseControlMoveTime = 0.0;
  this->ControlMoveType = None;
  (this->SkillCostInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->SkillCostInfoList).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetData @ 14ba6def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ToggleSkillAbilityData::SetData(UDS_ToggleSkillAbilityData *this,int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FDS_SkillConditionTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_2c8 [32];
  undefined4 local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar8 = FDS_SkillConditionTableRow::Get((longlong)param_1,true);
  if (pFVar8 == (FDS_SkillConditionTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_ToggleSkillAbilityData::SetData",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_278.Ptr,0x1f,L"skillConditionTable is invalid");
    pvVar10 = (void *)local_278._padding_;
  }
  else {
    if ((pFVar8->SkillConditionCost).ArrayNum != 0) {
      this->ToggleSkillID = param_1;
      this->ToggleSkillType = pFVar8->ToggleSkillType;
      this->LoopEffectID = pFVar8->ID_ToggleLoopEffect;
      this->HitEffectID = pFVar8->ID_ToggleHitEffect;
      this->EndEffectID = pFVar8->ID_ToggleEndEffect;
      uVar12 = 0;
      this->MoveSpeed = (float)pFVar8->ControlMoveSpeed;
      lVar14 = (longlong)(pFVar8->SkillConditionCostType).ArrayNum;
      if (0 < lVar14) {
        lVar13 = 0;
        do {
          uVar11 = ~uVar12 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar12 < (pFVar8->SkillConditionCostType).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((pFVar8->SkillConditionCostType).AllocatorInstance.Data[lVar13] !=
              (FScriptContainerElement)0x0) {
            uVar6 = 0;
            if ((int)uVar12 < (pFVar8->SkillConditionCost).ArrayNum) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (0 < *(int *)((pFVar8->SkillConditionCost).AllocatorInstance.Data + lVar13 * 4)) {
              uVar6 = 0;
              if ((int)uVar12 < (pFVar8->SkillConditionCostType).ArrayNum) {
                uVar6 = uVar11;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              local_288 = CONCAT31(local_288._1_3_,
                                   (pFVar8->SkillConditionCostType).AllocatorInstance.Data[lVar13]);
              uVar6 = 0;
              if ((int)uVar12 < (pFVar8->SkillConditionCost).ArrayNum) {
                uVar6 = uVar11;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              piVar1 = &(this->SkillCostInfoList).ArrayMax;
              iVar2 = *(int *)((pFVar8->SkillConditionCost).AllocatorInstance.Data + lVar13 * 4);
              iVar7 = (this->SkillCostInfoList).ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&(this->SkillCostInfoList).AllocatorInstance,piVar1);
              }
              (this->SkillCostInfoList).ArrayNum = iVar7 + 1;
              *(ulonglong *)((this->SkillCostInfoList).AllocatorInstance.Data + (longlong)iVar7 * 8)
                   = CONCAT44((float)iVar2,local_288);
            }
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < lVar14);
      }
      this->ControlMoveTime = pFVar8->ControlMoveTime;
      this->UseControlMoveTime = pFVar8->UseControlMoveTime;
      this->ControlMoveType = pFVar8->ControlMoveType;
      return true;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ToggleSkillAbilityData::SetData",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x25,L"SkillConditionCost is 0.(%d)");
    pvVar10 = (void *)local_158._padding_;
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return false;
}


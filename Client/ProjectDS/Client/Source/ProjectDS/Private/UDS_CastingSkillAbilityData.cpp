// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b439a50

UClass * __cdecl UDS_CastingSkillAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CastingSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_CastingSkillAbilityData,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CastingSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_CastingSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton;
}

// UDS_CastingSkillAbilityData @ 14b43c140

UDS_CastingSkillAbilityData * __thiscall
UDS_CastingSkillAbilityData::UDS_CastingSkillAbilityData
          (UDS_CastingSkillAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CastingSkillAbilityData__6B_;
  *(undefined8 *)&this->CastingSkillInfoMap = 0;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x48 = 0;
  this->CastingStep = 0;
  this->CastingStartTime = 0.0;
  this->bIsCastingEndSkillUseType = false;
  return this;
}

// ~UDS_CastingSkillAbilityData @ 14b43ce40

void __thiscall
UDS_CastingSkillAbilityData::~UDS_CastingSkillAbilityData(UDS_CastingSkillAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CastingSkillAbilityData__6B_;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CastingSkillInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CastingSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CastingSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CastingSkillInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CastingSkillInfoMap);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e440

UClass * __cdecl UDS_CastingSkillAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CastingSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_CastingSkillAbilityData,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CastingSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_CastingSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CastingSkillAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_CastingSkillAbilityData @ 14b43e8d0

void __cdecl UDS_CastingSkillAbilityData::StaticRegisterNativesUDS_CastingSkillAbilityData(void)

{
  return;
}

// UDS_CastingSkillAbilityData @ 14b9d8010

UDS_CastingSkillAbilityData * __thiscall
UDS_CastingSkillAbilityData::UDS_CastingSkillAbilityData
          (UDS_CastingSkillAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CastingSkillAbilityData__6B_;
  *(undefined8 *)&this->CastingSkillInfoMap = 0;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CastingSkillInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x48 = 0;
  this->CastingStep = 0;
  this->CastingStartTime = 0.0;
  this->bIsCastingEndSkillUseType = false;
  return this;
}

// CheckAvailableTime @ 14b9e28f0

bool __thiscall
UDS_CastingSkillAbilityData::CheckAvailableTime
          (UDS_CastingSkillAbilityData *this,FDS_CastingSkillInfo *param_1)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  return 0.0 <= param_1->AvailableEndTime -
                ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000);
}

// DoNextStep @ 14b9e8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_CastingSkillAbilityData::DoNextStep
          (UDS_CastingSkillAbilityData *this,FDS_CastingSkillInfo *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  LARGE_INTEGER local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->CastingStep == this->CastingStep) {
    if (param_1->SkillID == 0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CastingSkillAbilityData::DoNextStep",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x92,L"CastingSkillInfo is invalid")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      QueryPerformanceCounter(local_148);
      if (0.0 <= param_1->AvailableEndTime -
                 ((double)local_148[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000)) {
        this->CastingStep = this->CastingStep + 1;
        return true;
      }
    }
  }
  return false;
}

// GetCastingSkillInfo @ 14b9ed1d0

FDS_CastingSkillInfo * __thiscall
UDS_CastingSkillAbilityData::GetCastingSkillInfo(UDS_CastingSkillAbilityData *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  FDS_CastingSkillInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = this->CastingStep;
  if (*(int *)&(this->CastingSkillInfoMap).field_0x8 !=
      *(int *)&(this->CastingSkillInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CastingSkillInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CastingSkillInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->CastingSkillInfoMap).field_0x48 - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->CastingSkillInfoMap;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x28) == uVar1) {
          pFVar4 = TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
                                  *)&this->CastingSkillInfoMap,uVar1);
          return pFVar4;
        }
        iVar3 = *(int *)(lVar2 + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return &CastingSkillEmptyInfo;
}

// GetCurTime @ 14b9eea20

double __thiscall UDS_CastingSkillAbilityData::GetCurTime(UDS_CastingSkillAbilityData *this)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  return (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
}

// GetLastCastingSkillInfo @ 14b9f0bd0

FDS_CastingSkillInfo * __thiscall
UDS_CastingSkillAbilityData::GetLastCastingSkillInfo(UDS_CastingSkillAbilityData *this)

{
  FDS_CastingSkillInfo *pFVar1;
  int iVar2;
  
  iVar2 = *(int *)&(this->CastingSkillInfoMap).field_0x8 -
          *(int *)&(this->CastingSkillInfoMap).field_0x34;
  if (iVar2 < 1) {
    return &CastingSkillEmptyInfo;
  }
  pFVar1 = TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
                          *)&this->CastingSkillInfoMap,iVar2 + -1);
  return pFVar1;
}

// InitCastingSkillInfo @ 14b9f7080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_CastingSkillAbilityData::InitCastingSkillInfo
          (UDS_CastingSkillAbilityData *this,int param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *this_00;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FDS_SkillTableRow *pFVar8;
  FDS_SkillConditionTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  void *pvVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_448 [32];
  undefined1 local_418 [4];
  uint local_414;
  TPairInitializer<int_&,FDS_CastingSkillInfo_&> local_410;
  double local_400;
  double dStack_3f8;
  TPairInitializer<int_&,FDS_CastingSkillInfo_&> local_3f0;
  int local_3e0 [2];
  double local_3d8;
  double local_3d0;
  uint *local_3c8;
  int *local_3c0;
  uint *local_3b8;
  FDS_CastingSkillInfo **local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3f0.Value = (FDS_CastingSkillInfo *)this;
  pFVar8 = FDS_SkillTableRow::Get((longlong)param_1,true);
  if (pFVar8 != (FDS_SkillTableRow *)0x0) {
    iVar2 = pFVar8->ID_MainSkill;
    if (iVar2 != 0) {
      pFVar9 = FDS_SkillConditionTableRow::Get((longlong)iVar2,true);
      if (pFVar9 == (FDS_SkillConditionTableRow *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar10 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_CastingSkillAbilityData::InitCastingSkillInfo",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_3a8.Ptr,0x34,L"SkillConditionTableRow is invalid");
        pvVar11 = (void *)local_3a8._padding_;
      }
      else {
        iVar3 = (pFVar9->ID_CastingSkill).ArrayNum;
        if (((pFVar9->CastingTime).ArrayNum == iVar3) &&
           (iVar3 == (pFVar9->CastingSkillUseTime).ArrayNum)) {
          local_3d0 = GetCurTime(this);
          this->CastingStartTime = local_3d0;
          local_3c8 = &local_414;
          this->CastingStep = 0;
          local_3c0 = local_3e0;
          local_414 = 0;
          local_3e0[1] = 0;
          local_410.Key = (int *)&this->CastingSkillInfoMap;
          local_3d8 = (double)pFVar9->CastingStartTime + local_3d0;
          local_3e0[0] = iVar2;
          TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,FDS_CastingSkillInfo_&>_>
                    ((TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
                      *)local_410.Key,&local_3f0,(bool *)&local_3c8);
          this_00 = local_410.Key;
          pFVar12 = (pFVar9->ID_CastingSkill).AllocatorInstance.Data;
          iVar2 = (pFVar9->ID_CastingSkill).ArrayNum;
          uVar15 = SUB84(local_3d8,0);
          uVar16 = (undefined4)((ulonglong)local_3d8 >> 0x20);
          pFVar1 = pFVar12 + (longlong)iVar2 * 4;
          while( true ) {
            if ((pFVar9->ID_CastingSkill).ArrayNum != iVar2) {
              local_418[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_418);
            }
            if (pFVar12 == pFVar1) {
              *(bool *)((longlong)local_3f0.Value + 0xb8) = pFVar9->IsCastingEndSkillUseType;
              return true;
            }
            lVar13 = (longlong)(int)local_414;
            local_410.Value._0_4_ = *(undefined4 *)pFVar12;
            local_410.Value._4_4_ = local_414 + 1;
            local_400 = 0.0;
            dStack_3f8 = 0.0;
            uVar7 = 0;
            if ((int)local_414 < (pFVar9->CastingTime).ArrayNum) {
              uVar7 = ~local_414 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            lVar14 = (longlong)(int)local_414;
            uVar7 = 0;
            if ((int)local_414 < (pFVar9->CastingSkillUseTime).ArrayNum) {
              uVar7 = ~local_414 >> 0x1f;
            }
            local_400 = (double)*(float *)((pFVar9->CastingTime).AllocatorInstance.Data + lVar13 * 4
                                          ) + (double)CONCAT44(uVar16,uVar15);
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            local_3b8 = &local_414;
            local_414 = local_414 + 1;
            local_3b0 = &local_410.Value;
            dStack_3f8 = (double)*(float *)((pFVar9->CastingSkillUseTime).AllocatorInstance.Data +
                                           lVar14 * 4) + (double)CONCAT44(uVar16,uVar15);
            uVar15 = SUB84(local_400,0);
            uVar16 = (undefined4)((ulonglong)local_400 >> 0x20);
            TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,FDS_CastingSkillInfo_&>_>
                      ((TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
                        *)this_00,&local_410,(bool *)&local_3b8);
            pFVar12 = pFVar12 + 4;
          }
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar10 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_CastingSkillAbilityData::InitCastingSkillInfo",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_288.Ptr,0x3b,
                   L"CastingTime or CastingSkillUseTime is invalid");
        pvVar11 = (void *)local_288._padding_;
      }
      goto LAB_14b9f747c;
    }
  }
  pUVar10 = UDS_LogManager::GetInst();
  if (pUVar10 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar10 = UDS_LogManager::GetInst();
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UDS_CastingSkillAbilityData::InitCastingSkillInfo",0x31,Yes);
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x2c,L"MainSkillID is invalid");
  pvVar11 = (void *)local_168._padding_;
LAB_14b9f747c:
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return false;
}

// NextStep @ 14b9fcce0

void __thiscall UDS_CastingSkillAbilityData::NextStep(UDS_CastingSkillAbilityData *this)

{
  this->CastingStep = this->CastingStep + 1;
  return;
}

// ResetData @ 14ba185f0

void __thiscall UDS_CastingSkillAbilityData::ResetData(UDS_CastingSkillAbilityData *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->CastingSkillInfoMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
                      *)&this->CastingSkillInfoMap);
  }
  puVar1 = &(this->CastingSkillInfoMap).field_0xc;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->CastingSkillInfoMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->CastingSkillInfoMap).field_0x2c;
  *(undefined4 *)&(this->CastingSkillInfoMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CastingSkillInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CastingSkillInfoMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CastingSkillInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_CastingSkillInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>,FDefaultSetAllocator>
              *)&this->CastingSkillInfoMap);
  }
  this->CastingStep = 0;
  this->CastingStartTime = 0.0;
  this->bIsCastingEndSkillUseType = false;
  return;
}

// UpdateCastingStep @ 14ba23a20

void __thiscall UDS_CastingSkillAbilityData::UpdateCastingStep(UDS_CastingSkillAbilityData *this)

{
  uint uVar1;
  undefined1 *puVar2;
  double dVar3;
  int iVar4;
  FDS_CastingSkillInfo *pFVar5;
  undefined1 *puVar6;
  LARGE_INTEGER local_res8;
  
  dVar3 = __real_4170000000000000;
  while( true ) {
    uVar1 = this->CastingStep;
    if (*(int *)&(this->CastingSkillInfoMap).field_0x8 ==
        *(int *)&(this->CastingSkillInfoMap).field_0x34) {
      return;
    }
    puVar2 = *(undefined1 **)&(this->CastingSkillInfoMap).field_0x40;
    puVar6 = &(this->CastingSkillInfoMap).field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar6 = puVar2;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->CastingSkillInfoMap).field_0x48 - 1U & uVar1) * 4);
    if (iVar4 == -1) {
      return;
    }
    while (*(uint *)(*(longlong *)&this->CastingSkillInfoMap + (longlong)iVar4 * 0x28) != uVar1) {
      iVar4 = *(int *)(*(longlong *)&this->CastingSkillInfoMap + 0x20 + (longlong)iVar4 * 0x28);
      if (iVar4 == -1) {
        return;
      }
    }
    pFVar5 = TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
             ::FindChecked((TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
                            *)&this->CastingSkillInfoMap,uVar1);
    QueryPerformanceCounter(&local_res8);
    if ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 <
        pFVar5->CastingEndTime) break;
    this->CastingStep = this->CastingStep + 1;
  }
  return;
}


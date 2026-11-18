// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b53d760

UClass * __cdecl UDS_NPCLingData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCLingData",
               &Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton,
               StaticRegisterNativesUDS_NPCLingData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCLingData>,InternalVTableHelperCtorCaller<UDS_NPCLingData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton;
}

// UDS_NPCLingData @ 14b540400

UDS_NPCLingData * __thiscall
UDS_NPCLingData::UDS_NPCLingData(UDS_NPCLingData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCLingData__6B_;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LingNpcTalkStartDelegate = 0;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x10 = 0;
  this->bUsePlayerSkill_Ling = false;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_NPCLingData @ 14b5416c0

void __thiscall UDS_NPCLingData::~UDS_NPCLingData(UDS_NPCLingData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCLingData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LingNpcTalkStartDelegate).field_0x8,
             *(int *)&(this->LingNpcTalkStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->LingNpcTalkStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LingNpcTalkStartDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCompleteDelegate).field_0x8,
             *(int *)&(this->InteractionCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCancelDelegate).field_0x8,
             *(int *)&(this->InteractionCancelDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCancelDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCancelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionStartDelegate).field_0x8,
             *(int *)&(this->InteractionStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionStartDelegate);
  this->_padding_ = (longlong)&___7UDS_NPCDataBase__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b542d00

UClass * __cdecl UDS_NPCLingData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCLingData",
               &Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton,
               StaticRegisterNativesUDS_NPCLingData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCLingData>,InternalVTableHelperCtorCaller<UDS_NPCLingData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCLingData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCLingData @ 14b543a90

void __cdecl UDS_NPCLingData::StaticRegisterNativesUDS_NPCLingData(void)

{
  return;
}

// UDS_NPCLingData @ 14ba91d10

UDS_NPCLingData * __thiscall
UDS_NPCLingData::UDS_NPCLingData(UDS_NPCLingData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCLingData__6B_;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LingNpcTalkStartDelegate = 0;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x10 = 0;
  this->bUsePlayerSkill_Ling = false;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->LingNpcTalkStartDelegate).field_0x18 = 2;
  return this;
}

// Created @ 14ba9da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCLingData::Created(UDS_NPCLingData *this)

{
  bool bVar1;
  int iVar2;
  FDS_NpcBaseTableRow *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_NpcBaseTableRow::Get((longlong)iVar2,true);
  if (this_00 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCLingData::Created",0x18,Yes);
    pwVar5 = L"NpcBaseTableRow is nullptr";
    uVar4 = 0x27;
  }
  else {
    bVar1 = FDS_NpcBaseTableRow::HasPlayerSkill(this_00,6);
    if (bVar1) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCLingData::Created",0x18,Yes);
    pwVar5 = L"HasPlayerSkill(Ling) == false";
    uVar4 = 0x2d;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// GetData @ 14baa7500

TWeakObjectPtr<UDS_NPCLingData,FWeakObjectPtr> __cdecl UDS_NPCLingData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCLingData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCLingData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa75a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa75a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCLingData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetPlayerSkillGrade @ 14baaebd0

EDS_GradeType __thiscall UDS_NPCLingData::GetPlayerSkillGrade(UDS_NPCLingData *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_GradeType EVar3;
  int iVar4;
  uint uVar5;
  FDS_NpcBaseTableRow *this_00;
  uint uVar6;
  longlong lVar7;
  
  iVar4 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_NpcBaseTableRow::Get((longlong)iVar4,true);
  if (((this_00 != (FDS_NpcBaseTableRow *)0x0) &&
      (bVar2 = FDS_NpcBaseTableRow::HasPlayerSkill(this_00,6), bVar2)) &&
     (uVar6 = 0, 0 < (this_00->PlayerSkillType).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this_00->PlayerSkillType).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      if ((((this_00->PlayerSkillType).AllocatorInstance.Data[lVar7] == (FScriptContainerElement)0x6
           ) && (-1 < (int)uVar6)) && ((int)uVar6 < (this_00->PlayerSkillGrade).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar6 < (this_00->PlayerSkillGrade).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
        return (EDS_GradeType)(this_00->PlayerSkillGrade).AllocatorInstance.Data[(int)uVar6];
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (this_00->PlayerSkillType).ArrayNum);
  }
  return None;
}

// GetPlayerSkillLevel @ 14baaee60

int __thiscall UDS_NPCLingData::GetPlayerSkillLevel(UDS_NPCLingData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_NpcBaseTableRow *this_00;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_NpcBaseTableRow::Get((longlong)iVar3,true);
  if (((this_00 != (FDS_NpcBaseTableRow *)0x0) &&
      (bVar2 = FDS_NpcBaseTableRow::HasPlayerSkill(this_00,6), bVar2)) &&
     (uVar5 = 0, 0 < (this_00->PlayerSkillType).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this_00->PlayerSkillType).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if ((((this_00->PlayerSkillType).AllocatorInstance.Data[lVar6] == (FScriptContainerElement)0x6
           ) && (-1 < (int)uVar5)) && ((int)uVar5 < (this_00->PlayerSkillLevel).ArrayNum)) {
        uVar4 = 0;
        if ((int)uVar5 < (this_00->PlayerSkillLevel).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        return *(int *)((this_00->PlayerSkillLevel).AllocatorInstance.Data +
                       (longlong)(int)uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this_00->PlayerSkillType).ArrayNum);
  }
  return 0;
}

// InitByEntityInfo @ 14bab42d0

void __thiscall UDS_NPCLingData::InitByEntityInfo(UDS_NPCLingData *this)

{
  bool bVar1;
  int iVar2;
  FDS_NpcBaseTableRow *this_00;
  
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_NpcBaseTableRow::Get((longlong)iVar2,true);
  if (this_00 != (FDS_NpcBaseTableRow *)0x0) {
    bVar1 = FDS_NpcBaseTableRow::HasPlayerSkill(this_00,6);
    this->bUsePlayerSkill_Ling = bVar1;
  }
  return;
}

// IsLingSuccess @ 14bab9f20

bool __thiscall UDS_NPCLingData::IsLingSuccess(UDS_NPCLingData *this)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  ulong64 local_res18;
  FDS_PlayerSkillTargetInfo local_48;
  
  if (this->bUsePlayerSkill_Ling != true) {
    return true;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    local_48.EntityID = 0;
    local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48.bIsStuff = false;
    local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48.EndTime = 0.0;
    local_48.TableID = 0;
    local_48.ZoneID = 0;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_res8[0] = Ling;
    bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo(this_00,local_res8,&local_res18,&local_48);
    if (bVar1) {
      bVar1 = FDS_PlayerSkillTargetInfo::IsOverEndTime(&local_48);
      return !bVar1;
    }
  }
  return false;
}

// OnResponseInteractionCanceled @ 14bac20d0

void __thiscall
UDS_NPCLingData::OnResponseInteractionCanceled(UDS_NPCLingData *this,ulong64 param_1,int param_2)

{
  TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->InteractionCancelDelegate,param_1,param_2);
  return;
}

// OnResponseInteractionCompleted @ 14bac20e0

void __thiscall
UDS_NPCLingData::OnResponseInteractionCompleted(UDS_NPCLingData *this,ulong64 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->InteractionCompleteDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->InteractionCompleteDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->InteractionCompleteDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->InteractionCompleteDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->InteractionCompleteDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->InteractionCompleteDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->InteractionCompleteDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnResponseInteractionStarted @ 14bac2210

void __thiscall
UDS_NPCLingData::OnResponseInteractionStarted(UDS_NPCLingData *this,LingSkillUseResponse *param_1)

{
  undefined1 *puVar1;
  double dVar2;
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
  double dVar13;
  FDestructionSentinel local_48 [2];
  
  dVar13 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar2 = (param_1->_impl_).interaction_end_time_;
  uVar3 = (param_1->_impl_).target_entity_id_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->InteractionStartDelegate,(FWriteAccessScope *)local_48);
  puVar1 = &(this->InteractionStartDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar11 = *(int *)&(this->InteractionStartDelegate).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&(this->InteractionStartDelegate).field_0x10) {
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
      lVar4 = *(longlong *)&(this->InteractionStartDelegate).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar4) == 0) ||
          (plVar5 = *(longlong **)(lVar12 + lVar4), plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar3,(float)(dVar2 - dVar13)), cVar9 == '\0'
         )) {
        bVar7 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->InteractionStartDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InteractionStartDelegate
               ,false);
  }
  if (local_48[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
  }
  return;
}

// OnResponseLingNpcTalkStart @ 14bac2360

void __thiscall
UDS_NPCLingData::OnResponseLingNpcTalkStart(UDS_NPCLingData *this,ulong64 param_1,int param_2)

{
  TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LingNpcTalkStartDelegate,param_1,param_2);
  return;
}


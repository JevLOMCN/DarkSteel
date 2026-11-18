// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5a1980

UClass * __cdecl UDS_StackSkillData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StackSkillData",
               &Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton,
               StaticRegisterNativesUDS_StackSkillData,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StackSkillData>,
               InternalVTableHelperCtorCaller<UDS_StackSkillData>,local_res8,
               UDS_SkillData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton;
}

// UDS_StackSkillData @ 14b5a2a70

UDS_StackSkillData * __thiscall
UDS_StackSkillData::UDS_StackSkillData(UDS_StackSkillData *this,FVTableHelper *param_1)

{
  UDS_SkillData::UDS_SkillData((UDS_SkillData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_StackSkillData__6B_;
  *(undefined8 *)&this->OnChangedStackCountDelegate = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x10 = 0;
  this->CurStackCount = 0;
  this->MaxStackCount = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x18 = 2;
  return this;
}

// UDS_StackSkillData @ 14b5a2ac0

UDS_StackSkillData * __thiscall
UDS_StackSkillData::UDS_StackSkillData(UDS_StackSkillData *this,FObjectInitializer *param_1)

{
  UDS_SkillData::UDS_SkillData((UDS_SkillData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_StackSkillData__6B_;
  *(undefined8 *)&this->OnChangedStackCountDelegate = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x10 = 0;
  this->CurStackCount = 0;
  this->MaxStackCount = 0;
  *(undefined8 *)&(this->OnChangedStackCountDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_StackSkillData @ 14b5a2c90

void __thiscall UDS_StackSkillData::~UDS_StackSkillData(UDS_StackSkillData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_StackSkillData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedStackCountDelegate).field_0x8,
             *(int *)&(this->OnChangedStackCountDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedStackCountDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedStackCountDelegate);
  UDS_SkillData::~UDS_SkillData((UDS_SkillData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5a36a0

UClass * __cdecl UDS_StackSkillData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StackSkillData",
               &Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton,
               StaticRegisterNativesUDS_StackSkillData,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StackSkillData>,
               InternalVTableHelperCtorCaller<UDS_StackSkillData>,local_res8,
               UDS_SkillData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StackSkillData.InnerSingleton;
}

// GetStackSkillCnt @ 14b5a3760

int __thiscall UDS_StackSkillData::GetStackSkillCnt(UDS_StackSkillData *this)

{
  return this->CurStackCount;
}

// IsStackSkill @ 14b5a3770

bool __thiscall UDS_StackSkillData::IsStackSkill(UDS_StackSkillData *this)

{
  return true;
}

// StaticRegisterNativesUDS_StackSkillData @ 14b5a3830

void __cdecl UDS_StackSkillData::StaticRegisterNativesUDS_StackSkillData(void)

{
  return;
}

// Created @ 14ba9db80

void __thiscall UDS_StackSkillData::Created(UDS_StackSkillData *this)

{
  UDS_SkillData::Created((UDS_SkillData *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return;
}

// InitSkill @ 14bab5ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StackSkillData::InitSkill(UDS_StackSkillData *this)

{
  FDS_SkillActLevelTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_SkillData::InitSkill((UDS_SkillData *)this);
  pFVar1 = FDS_SkillActLevelTableRow::Get((longlong)*(int *)((longlong)&this->_padding_ + 4),true);
  if (pFVar1 == (FDS_SkillActLevelTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StackSkillData::InitSkill",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x55,
                 L"SkillActLevelTableRow is nullptr. SkillActLevelID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->MaxStackCount = pFVar1->StackUseCount;
  }
  return;
}

// IsSkillAvailable @ 14babaa50

bool __thiscall UDS_StackSkillData::IsSkillAvailable(UDS_StackSkillData *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  EDS_EntityType EVar3;
  bool bVar4;
  bool bVar5;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_00;
  FWeakObjectPtr FVar6;
  UClass *pUVar7;
  UDS_CharStateData *pUVar8;
  UDS_SkillDataSet *pUVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FWeakObjectPtr FVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  
  EVar3 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  if (EVar3 != MainCharacter) {
    return true;
  }
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharStateData::GetData((ulong64)&local_res18);
  this_00 = UDS_DataBase::GetMyDataSet((UDS_DataBase *)this);
  FVar6 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00.WeakPtr);
  FVar13.ObjectIndex = 0;
  FVar13.ObjectSerialNumber = 0;
  if (FVar6 != (FWeakObjectPtr)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)FVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_14babaad1;
  }
  FVar6 = FVar13;
LAB_14babaad1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res10 = FVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res10);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(&local_res20), bVar4)) {
    pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
    local_res10.ObjectIndex = 0xc0081;
    local_res10.ObjectSerialNumber = 0;
    bVar4 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)&local_res10);
    if (!bVar4) {
      pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10.ObjectIndex = 0x800;
      local_res10.ObjectSerialNumber = 0;
      bVar4 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)&local_res10);
      if (bVar4) {
        pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
        local_res10.ObjectIndex = 0x26;
        bVar4 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res10);
        if (!bVar4) {
          return false;
        }
      }
      bVar4 = UDS_SkillData::CheckSkillCost((UDS_SkillData *)this);
      if (bVar4) {
        pUVar9 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
        bVar4 = UDS_SkillDataSet::CheckGlobalCoolTime(pUVar9);
        if (((!bVar4) && (0 < this->CurStackCount)) &&
           (bVar4 = UDS_SkillData::CheckSkillAbleByAbnormalAction((UDS_SkillData *)this,0.0), bVar4)
           ) {
          pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
          local_res10.ObjectIndex = 0x15;
          bVar4 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res10);
          pUVar9 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
          UDS_SkillDataSet::GetCurrentActiveSkillList(pUVar9,&local_40);
          iVar2 = local_40.ArrayNum;
          uVar11 = (ulonglong)local_40.ArrayNum;
          pFVar1 = (FWeakObjectPtr *)(local_40.AllocatorInstance.Data + uVar11 * 8);
          FVar12.Data = local_40.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar11 != iVar2) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_res10);
            }
            if (((FWeakObjectPtr *)FVar12.Data == pFVar1) ||
               (local_res10 = *(FWeakObjectPtr *)FVar12.Data, bVar4)) break;
            bVar5 = FWeakObjectPtr::IsValid(&local_res10);
            if (((bVar5) &&
                (pUVar10 = FWeakObjectPtr::Get(&local_res10),
                *(int *)&pUVar10[2].field_0x1c != *(int *)((longlong)&this->_padding_ + 4))) &&
               ((pUVar10 = FWeakObjectPtr::Get(&local_res10), pUVar10[9].field_0x8 != '\x05' &&
                (pUVar10 = FWeakObjectPtr::Get(&local_res10),
                *(byte *)((longlong)&this->_padding_ + 7) <= (byte)pUVar10[9].field_0x7)))) {
              bVar4 = false;
LAB_14babacae:
              if ((FWeakObjectPtr *)local_40.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
                FMemory::Free(local_40.AllocatorInstance.Data);
              }
              return bVar4;
            }
            uVar11 = (ulonglong)(uint)local_40.ArrayNum;
            FVar12.Data = FVar12.Data + 8;
          }
          bVar4 = true;
          goto LAB_14babacae;
        }
      }
    }
  }
  return false;
}

// ReduceStackCount @ 14bac39c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StackSkillData::ReduceStackCount(UDS_StackSkillData *this,int param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->CurStackCount = this->CurStackCount - param_1;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedStackCountDelegate,this->CurStackCount);
  if (this->CurStackCount < 0) {
    this->CurStackCount = 0;
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StackSkillData::ReduceStackCount",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Error,local_138.Ptr,0xc5,L"StackCount Cannot Reduce Under 0");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// StartSkill @ 14bacee40

void __thiscall
UDS_StackSkillData::StartSkill
          (UDS_StackSkillData *this,TWeakObjectPtr<UDS_SkillAbilityContext,FWeakObjectPtr> param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FWeakObjectPtr FVar7;
  EDS_EntityType EVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UObject *pUVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UDS_StackSkillData *local_res18;
  FDestructionSentinel local_58;
  
  local_res10 = param_1.WeakPtr;
  dVar16 = UDS_SkillData::GetCurTime((UDS_SkillData *)this);
  this->_padding_ = (longlong)dVar16;
  EVar8 = UDS_DataBase::GetEntityType((UDS_DataBase *)this);
  if (EVar8 == MainCharacter) {
    dVar16 = (double)this->_padding_ + (double)this->_padding_;
    fVar15 = __real_3f800000;
  }
  else {
    pUVar12 = FWeakObjectPtr::Get(&local_res10);
    dVar16 = *(double *)&pUVar12[1].field_0x10;
    fVar15 = (float)((dVar16 - (double)this->_padding_) / (double)this->_padding_);
  }
  this->_padding_ = (longlong)dVar16;
  *(float *)((longlong)&this->_padding_ + 4) = fVar15;
  fVar15 = *(float *)((longlong)&this->_padding_ + 4);
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(float *)&this->_padding_ = fVar15;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  UDS_SkillData::SetWaitTimeUntilNextStep((UDS_SkillData *)this,fVar15);
  UDS_SkillData::UpdateSkillInfo((UDS_SkillData *)this);
  UDS_SkillData::UpdateSubSkillInfo((UDS_SkillData *)this);
  uVar2 = *(undefined1 *)((longlong)&this->_padding_ + 1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  FVar7 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_58);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar6 = false;
  uVar13 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar6 = false;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + this->_padding_) == 0) ||
          (plVar4 = *(longlong **)(lVar14 + this->_padding_), plVar4 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,FVar7,uVar2), cVar10 == '\0')) {
        bVar6 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// TickSkill @ 14bacf0a0

void __thiscall UDS_StackSkillData::TickSkill(UDS_StackSkillData *this,float param_1)

{
  bool bVar1;
  
  if (this->CurStackCount < this->MaxStackCount) {
    bVar1 = UDS_SkillData::CheckCoolTime((UDS_SkillData *)this);
    if (!bVar1) {
      this->CurStackCount = this->CurStackCount + 1;
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnChangedStackCountDelegate,this->CurStackCount);
      if (this->CurStackCount < this->MaxStackCount) {
                    /* WARNING: Could not recover jumptable at 0x00014bacf0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x2e8))(this,*(undefined4 *)((longlong)&this->_padding_ + 4))
        ;
        return;
      }
    }
  }
  return;
}


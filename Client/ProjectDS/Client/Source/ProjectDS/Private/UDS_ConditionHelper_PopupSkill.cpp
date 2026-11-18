// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b46b260

UClass * __cdecl UDS_ConditionHelper_PopupSkill::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_PopupSkill",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_PopupSkill,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_PopupSkill>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_PopupSkill>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton;
}

// UDS_ConditionHelper_PopupSkill @ 14b471150

UDS_ConditionHelper_PopupSkill * __thiscall
UDS_ConditionHelper_PopupSkill::UDS_ConditionHelper_PopupSkill
          (UDS_ConditionHelper_PopupSkill *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_PopupSkill__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PopupSkillChecker).field0_0x0.DebugPtr = (UDS_ConditionChecker *)0x0;
  this->PopupSkillID = 0;
  this->PopupSkillUseTime = 0;
  this->MainSkillID = 0;
  return this;
}

// UDS_ConditionHelper_PopupSkill @ 14b4711b0

UDS_ConditionHelper_PopupSkill * __thiscall
UDS_ConditionHelper_PopupSkill::UDS_ConditionHelper_PopupSkill
          (UDS_ConditionHelper_PopupSkill *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_PopupSkill__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PopupSkillChecker).field0_0x0.DebugPtr = (UDS_ConditionChecker *)0x0;
  this->PopupSkillID = 0;
  this->PopupSkillUseTime = 0;
  this->MainSkillID = 0;
  return this;
}

// ~UDS_ConditionHelper_PopupSkill @ 14b4729d0

void __thiscall
UDS_ConditionHelper_PopupSkill::~UDS_ConditionHelper_PopupSkill
          (UDS_ConditionHelper_PopupSkill *this)

{
  this->_padding_ = (longlong)&___7UDS_ConditionHelper__6B_;
  UDS_ConditionHelper::UnInit((UDS_ConditionHelper *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b476180

UClass * __cdecl UDS_ConditionHelper_PopupSkill::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_PopupSkill",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_PopupSkill,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_PopupSkill>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_PopupSkill>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_PopupSkill.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionHelper_PopupSkill @ 14b476ea0

void __cdecl
UDS_ConditionHelper_PopupSkill::StaticRegisterNativesUDS_ConditionHelper_PopupSkill(void)

{
  return;
}

// HandleConditionResult @ 14c08a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionHelper_PopupSkill::HandleConditionResult
          (UDS_ConditionHelper_PopupSkill *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_SkillData *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
    UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
    bVar3 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar3) {
      iVar1 = this->PopupSkillID;
      pUVar5 = FWeakObjectPtr::Get(&local_148);
      UDS_SkillData::GetData((ulong64)&local_140,*(ulong64 *)&pUVar5[8].field_0x10,SUB41(iVar1,0));
      bVar3 = FWeakObjectPtr::IsValid(&local_140);
      if (bVar3) {
        this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_140);
        UDS_SkillData::SetAvailableTime(this_00,(float)this->PopupSkillUseTime);
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ConditionHelper_PopupSkill::HandleConditionResult",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xe6,L"mainPlayerData is invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6982745653604516071>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ConditionHelper.cpp"
                         ,0xe7,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// InitConditionHelper @ 14c08bce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionHelper_PopupSkill::InitConditionHelper
          (UDS_ConditionHelper_PopupSkill *this,FDS_SkillConditionTableRow *param_1)

{
  EDS_TargetType EVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  UDS_ConditionChecker *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  TObjectPtr<UDS_ConditionChecker> TVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_1a8 [32];
  UDS_ConditionHelper_PopupSkill *local_178;
  undefined1 local_170 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  if (param_1 != (FDS_SkillConditionTableRow *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    if ((param_1->PopupCheckType).ArrayNum == (param_1->PopupCheckTypeValue).ArrayNum) {
      *(EDS_ConditionUseType *)((longlong)&this->_padding_ + 1) = param_1->PopupUseType;
      *(EDS_ConditionSkillType *)&this->_padding_ = param_1->ConditionSkillType;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
      this->PopupSkillID = param_1->ID_PopupSkill;
      this->PopupSkillUseTime = param_1->PopupSkillUseTime;
      uVar9 = 0;
      this->MainSkillID = param_1->ID;
      EVar1 = param_1->PopupCheckTarget;
      if (0 < (param_1->PopupCheckType).ArrayNum) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (param_1->PopupCheckType).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (param_1->PopupCheckType).AllocatorInstance.Data[lVar10];
          uVar6 = 0;
          if ((int)uVar9 < (param_1->PopupCheckTypeValue).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UDS_ConditionHelper::AddConditionChecker
                    ((UDS_ConditionHelper *)this,EVar1,(EDS_ConditionCheckType)FVar2,
                     *(int *)((param_1->PopupCheckTypeValue).AllocatorInstance.Data + lVar10 * 4));
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 1;
        } while ((int)uVar9 < (param_1->PopupCheckType).ArrayNum);
      }
      if (param_1->ConditionSkillType == SkillUse) {
        TVar8 = UDS_ConditionChecker::CreateConditionChecker
                          ((UObject *)local_170,(EDS_ConditionCheckType)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)TVar8.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)TVar8.field0_0x0);
        }
        this_00 = *(UDS_ConditionChecker **)TVar8.field0_0x0;
        (this->PopupSkillChecker).field0_0x0.DebugPtr = this_00;
        if (this_00 == (UDS_ConditionChecker *)0x0) {
          return;
        }
        iVar3 = param_1->ID;
        local_178 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(this_00->Outer).WeakPtr,(FObjectPtr)&local_178);
        this_00->TargetType = Myself;
        this_00->CheckValue = iVar3;
        UDS_ConditionChecker::BindTargetUpdateEvent(this_00,Myself);
        (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ConditionHelper_PopupSkill>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                    *)&((this->PopupSkillChecker).field0_0x0.DebugPtr)->
                       OnChangedConditionValueDelegate,
                   (UDS_ConditionHelper_PopupSkill *)(local_170 + 8),(pmf_0fef89d7)this);
        bVar5 = ((this->PopupSkillChecker).field0_0x0.DebugPtr)->bConditionValue;
        if ((bool)(char)this->_padding_ == bVar5) {
          return;
        }
        *(bool *)&this->_padding_ = bVar5;
      }
      else {
        if (param_1->ConditionSkillType != Default) {
          return;
        }
        if ((char)this->_padding_ == '\x01') {
          return;
        }
        *(undefined1 *)&this->_padding_ = 1;
      }
      UDS_ConditionHelper::UpdateConditionValue((UDS_ConditionHelper *)this);
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ConditionHelper_PopupSkill::InitConditionHelper",0x33,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0xb6,
                   L"PopupCheckType.Num() != PopupCheckTypeValue.Num()");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// OnChangedPoupSkillChecker @ 14c0929f0

void __thiscall
UDS_ConditionHelper_PopupSkill::OnChangedPoupSkillChecker
          (UDS_ConditionHelper_PopupSkill *this,
          TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr> param_1,bool param_2)

{
  if ((bool)(char)this->_padding_ != param_2) {
    *(bool *)&this->_padding_ = param_2;
    UDS_ConditionHelper::UpdateConditionValue((UDS_ConditionHelper *)this);
    return;
  }
  return;
}


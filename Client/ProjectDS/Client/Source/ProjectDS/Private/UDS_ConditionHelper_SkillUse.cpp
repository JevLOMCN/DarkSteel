// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b46b160

UClass * __cdecl UDS_ConditionHelper_SkillUse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_SkillUse",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_SkillUse,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_SkillUse>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_SkillUse>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton;
}

// UDS_ConditionHelper_SkillUse @ 14b471210

UDS_ConditionHelper_SkillUse * __thiscall
UDS_ConditionHelper_SkillUse::UDS_ConditionHelper_SkillUse
          (UDS_ConditionHelper_SkillUse *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_SkillUse__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SkillUseChecker).field0_0x0.DebugPtr = (UDS_ConditionChecker *)0x0;
  this->MainSkillID = 0;
  return this;
}

// UDS_ConditionHelper_SkillUse @ 14b471270

UDS_ConditionHelper_SkillUse * __thiscall
UDS_ConditionHelper_SkillUse::UDS_ConditionHelper_SkillUse
          (UDS_ConditionHelper_SkillUse *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_SkillUse__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SkillUseChecker).field0_0x0.DebugPtr = (UDS_ConditionChecker *)0x0;
  this->MainSkillID = 0;
  return this;
}

// ~UDS_ConditionHelper_SkillUse @ 14b472a40

void __thiscall
UDS_ConditionHelper_SkillUse::~UDS_ConditionHelper_SkillUse(UDS_ConditionHelper_SkillUse *this)

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

// GetPrivateStaticClass @ 14b476240

UClass * __cdecl UDS_ConditionHelper_SkillUse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_SkillUse",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_SkillUse,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_SkillUse>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_SkillUse>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_SkillUse.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionHelper_SkillUse @ 14b476eb0

void __cdecl UDS_ConditionHelper_SkillUse::StaticRegisterNativesUDS_ConditionHelper_SkillUse(void)

{
  return;
}

// GetUseSkillID @ 14c089a60

int __thiscall UDS_ConditionHelper_SkillUse::GetUseSkillID(UDS_ConditionHelper_SkillUse *this)

{
  EDS_ConditionCheckerType EVar1;
  UDS_ConditionChecker *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDS_SkillConditionTableRow *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined8 *local_res20;
  
  pFVar6 = FDS_SkillConditionTableRow::Get((longlong)this->MainSkillID,true);
  if (pFVar6 != (FDS_SkillConditionTableRow *)0x0) {
    local_res18 = (uint)this->_padding_;
    uVar7 = (ulonglong)(int)local_res18;
    puVar11 = (undefined8 *)this->_padding_;
    puVar10 = puVar11 + uVar7;
    local_res20 = puVar10;
    while( true ) {
      if ((int)this->_padding_ != (int)uVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDS_ConditionChecker>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar11 == puVar10) break;
      this_00 = (UDS_ConditionChecker *)*puVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UDS_ConditionChecker *)0x0) goto LAB_14c089b00;
      }
      else if (this_00 != (UDS_ConditionChecker *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14c089b00:
        if ((this_00->CheckType != NearStruck) && (this_00->CheckType != FarStruck)) {
          bVar3 = (bool)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
          UDS_ConditionChecker::SetConditionValue(this_00,bVar3);
          puVar10 = local_res20;
          if (bVar3 == false) goto LAB_14c089c7c;
        }
        uVar13 = 0;
        uVar7 = 0;
        uVar9 = 0;
        puVar10 = local_res20;
        if (0 < (pFVar6->AutoUseCheckType).ArrayNum) {
          do {
            uVar8 = (uint)uVar9;
            EVar1 = this_00->CheckType;
            uVar12 = ~uVar8 >> 0x1f;
            uVar4 = uVar13;
            if ((int)uVar8 < (pFVar6->AutoUseCheckTarget).ArrayNum) {
              uVar4 = uVar12;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            if ((pFVar6->AutoUseCheckTarget).AllocatorInstance.Data[uVar7] ==
                (FScriptContainerElement)this_00->TargetType) {
              uVar4 = uVar13;
              if ((int)uVar8 < (pFVar6->AutoUseCheckType).ArrayNum) {
                uVar4 = uVar12;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                iVar5 = (*pcVar2)();
                return iVar5;
              }
              if ((byte)(pFVar6->AutoUseCheckType).AllocatorInstance.Data[uVar7] == EVar1) {
                uVar4 = uVar13;
                if ((int)uVar8 < (pFVar6->AutoUseCheckTypeValue).ArrayNum) {
                  uVar4 = uVar12;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  iVar5 = (*pcVar2)();
                  return iVar5;
                }
                if (*(int *)((pFVar6->AutoUseCheckTypeValue).AllocatorInstance.Data + uVar7 * 4) ==
                    this_00->CheckValue) {
                  uVar13 = 0;
                  if ((int)uVar8 < (pFVar6->ID_AutoUseSkill).ArrayNum) {
                    uVar13 = uVar12;
                  }
                  if ((uVar13 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    iVar5 = (*pcVar2)();
                    return iVar5;
                  }
                  return *(int *)((pFVar6->ID_AutoUseSkill).AllocatorInstance.Data +
                                 (longlong)(int)uVar8 * 4);
                }
              }
            }
            uVar7 = uVar7 + 1;
            uVar9 = (ulonglong)(uVar8 + 1);
            puVar10 = local_res20;
          } while ((int)(uVar8 + 1) < (pFVar6->AutoUseCheckType).ArrayNum);
        }
      }
LAB_14c089c7c:
      puVar11 = puVar11 + 1;
      uVar7 = (ulonglong)local_res18;
    }
  }
  return 0;
}

// HandleConditionResult @ 14c08a1e0

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

void __thiscall
UDS_ConditionHelper_SkillUse::HandleConditionResult(UDS_ConditionHelper_SkillUse *this,bool param_1)

{
  UDS_ConditionChecker *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_DataBase *this_01;
  FDS_EntityBase *this_02;
  UDS_DataSetBase *this_03;
  ulong64 uVar5;
  UObject *pUVar6;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  FWeakObjectPtr local_270;
  ulong64 local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
    this_00 = (this->SkillUseChecker).field0_0x0.DebugPtr;
    bVar2 = (bool)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
    UDS_ConditionChecker::SetConditionValue(this_00,bVar2);
    if (bVar2 != false) {
      UDS_PlayerData::GetData((ulong64)&local_280,UDS_PlayerData::MainPlayerEntityID,false);
      bVar2 = FWeakObjectPtr::IsValid(&local_280);
      if (bVar2) {
        FWeakObjectPtr::Get(&local_280);
        UDS_CharInfoData::GetData((ulong64)&local_278);
        bVar2 = FWeakObjectPtr::IsValid(&local_278);
        if (bVar2) {
          this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_278);
          local_268[0] = UDS_DataBase::GetEntityID(this_01);
          this_02 = FDS_EntityBase::GetEntityBase(local_268);
          if (this_02 != (FDS_EntityBase *)0x0) {
            TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_288);
            bVar2 = FWeakObjectPtr::IsValid(&local_288);
            if (bVar2) {
              iVar3 = this->MainSkillID;
              this_03 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_288);
              uVar5 = UDS_DataSetBase::GetDataContainerKey(this_03);
              UDS_SkillData::GetData((ulong64)&local_270,uVar5,SUB41(iVar3,0));
              bVar2 = FWeakObjectPtr::IsValid(&local_270);
              if (bVar2) {
                iVar3 = GetUseSkillID(this);
                if (iVar3 == 0) {
                  pUVar4 = UDS_LogManager::GetInst();
                  if (pUVar4 != (UDS_LogManager *)0x0) {
                    pUVar4 = UDS_LogManager::GetInst();
                    local_138._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_138,"UDS_ConditionHelper_SkillUse::HandleConditionResult",0x33
                               ,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar4,1,Warning,local_138.Ptr,0x152,
                               L"useSkillID is 0. (MainSkill: %d)");
                    if ((void *)local_138._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_138._padding_);
                    }
                  }
                }
                else {
                  pUVar6 = FWeakObjectPtr::Get(&local_270);
                  if (pUVar6[9].field_0x8 == '\x05') {
                    FDS_EntityBase::DeActivateSkillAbility(this_02,this->MainSkillID,Cancel);
                  }
                  pUVar6 = FWeakObjectPtr::Get(&local_288);
                  pUVar6[0xc].field_0x1 = 1;
                  FDS_EntityBase::TryActivateSkillAbility(this_02,iVar3);
                  pUVar6 = FWeakObjectPtr::Get(&local_288);
                  pUVar6[0xc].field_0x1 = 0;
                }
              }
            }
          }
        }
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"UDS_ConditionHelper_SkillUse::HandleConditionResult",0x33,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_258.Ptr,0x131,L"mainPlayerData is invalid.");
          if ((void *)local_258._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6982745653604516146>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ConditionHelper.cpp"
                           ,0x132,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// InitConditionHelper @ 14c08c010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionHelper_SkillUse::InitConditionHelper
          (UDS_ConditionHelper_SkillUse *this,FDS_SkillConditionTableRow *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  UDS_ConditionChecker *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  TObjectPtr<UDS_ConditionChecker> TVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_198 [32];
  UDS_ConditionHelper_SkillUse *local_168;
  undefined1 local_160 [264];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  if (param_1 != (FDS_SkillConditionTableRow *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
    if ((param_1->AutoUseCheckType).ArrayNum == (param_1->AutoUseCheckTypeValue).ArrayNum) {
      uVar9 = 0;
      *(undefined2 *)&this->_padding_ = 0x101;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
      this->MainSkillID = param_1->ID;
      if (0 < (param_1->AutoUseCheckType).ArrayNum) {
        lVar11 = 0;
        do {
          uVar10 = ~uVar9 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->AutoUseCheckTarget).ArrayNum) {
            uVar6 = uVar10;
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
          FVar1 = (param_1->AutoUseCheckTarget).AllocatorInstance.Data[lVar11];
          uVar6 = 0;
          if ((int)uVar9 < (param_1->AutoUseCheckType).ArrayNum) {
            uVar6 = uVar10;
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
          FVar2 = (param_1->AutoUseCheckType).AllocatorInstance.Data[lVar11];
          uVar6 = 0;
          if ((int)uVar9 < (param_1->AutoUseCheckTypeValue).ArrayNum) {
            uVar6 = uVar10;
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
                    ((UDS_ConditionHelper *)this,(EDS_TargetType)FVar1,(EDS_ConditionCheckType)FVar2
                     ,*(int *)((param_1->AutoUseCheckTypeValue).AllocatorInstance.Data + lVar11 * 4)
                    );
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
        } while ((int)uVar9 < (param_1->AutoUseCheckType).ArrayNum);
      }
      TVar8 = UDS_ConditionChecker::CreateConditionChecker
                        ((UObject *)local_160,(EDS_ConditionCheckType)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)TVar8.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)TVar8.field0_0x0);
      }
      this_00 = *(UDS_ConditionChecker **)TVar8.field0_0x0;
      (this->SkillUseChecker).field0_0x0.DebugPtr = this_00;
      if (this_00 != (UDS_ConditionChecker *)0x0) {
        iVar3 = param_1->ID;
        local_168 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(this_00->Outer).WeakPtr,(FObjectPtr)&local_168);
        this_00->TargetType = Myself;
        this_00->CheckValue = iVar3;
        UDS_ConditionChecker::BindTargetUpdateEvent(this_00,Myself);
        (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
      }
      if ((char)this->_padding_ != '\x01') {
        *(undefined1 *)&this->_padding_ = 1;
        UDS_ConditionHelper::UpdateConditionValue((UDS_ConditionHelper *)this);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_58 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_160 + 8),
                   "UDS_ConditionHelper_SkillUse::InitConditionHelper",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_50,0x104,
                   L"AutoUseCheckType.Num() != AutoUseCheckTypeValue.Num()");
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
    }
  }
  return;
}

// OnChangedSkillUseChecker @ 14c092a40

void __thiscall
UDS_ConditionHelper_SkillUse::OnChangedSkillUseChecker
          (UDS_ConditionHelper_SkillUse *this,
          TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr> param_1,bool param_2)

{
  if ((bool)(char)this->_padding_ != param_2) {
    *(bool *)&this->_padding_ = param_2;
    UDS_ConditionHelper::UpdateConditionValue((UDS_ConditionHelper *)this);
    return;
  }
  return;
}


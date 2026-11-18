// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b46acf0

UClass * __cdecl UDS_ConditionHelper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper",
               &Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionHelper>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton;
}

// UDS_ConditionHelper @ 14b470ff0

UDS_ConditionHelper * __thiscall
UDS_ConditionHelper::UDS_ConditionHelper(UDS_ConditionHelper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionHelper__6B_;
  (this->ConditionCheckList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionCheckList).ArrayNum = 0;
  (this->ConditionCheckList).ArrayMax = 0;
  this->ConditionSkillType = None;
  this->ConditionUseType = And;
  this->ConditionResultType = None;
  this->bCheckCondition = false;
  this->bConditionValue = false;
  *(undefined8 *)&this->ConditionHelperChangedDelegate = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x18 = 2;
  return this;
}

// UDS_ConditionHelper @ 14b471040

UDS_ConditionHelper * __thiscall
UDS_ConditionHelper::UDS_ConditionHelper(UDS_ConditionHelper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionHelper__6B_;
  (this->ConditionCheckList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionCheckList).ArrayNum = 0;
  (this->ConditionCheckList).ArrayMax = 0;
  this->ConditionSkillType = None;
  this->ConditionUseType = And;
  this->ConditionResultType = None;
  this->bCheckCondition = false;
  this->bConditionValue = false;
  *(undefined8 *)&this->ConditionHelperChangedDelegate = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ConditionHelperChangedDelegate).field_0x18 = 2;
  return this;
}

// GetPrivateStaticClass @ 14b476010

UClass * __cdecl UDS_ConditionHelper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper",
               &Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionHelper>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper.InnerSingleton;
}

// HandleConditionResult @ 14b476830

void __thiscall UDS_ConditionHelper::HandleConditionResult(UDS_ConditionHelper *this,bool param_1)

{
  return;
}

// InitConditionHelper @ 14b476840

void __thiscall
UDS_ConditionHelper::InitConditionHelper
          (UDS_ConditionHelper *this,FDS_BubbleTalkBaseTableRow *param_1)

{
  return;
}

// InitConditionHelper @ 14b476850

void __thiscall
UDS_ConditionHelper::InitConditionHelper
          (UDS_ConditionHelper *this,FDS_SkillConditionTableRow *param_1)

{
  return;
}

// StaticRegisterNativesUDS_ConditionHelper @ 14b476e80

void __cdecl UDS_ConditionHelper::StaticRegisterNativesUDS_ConditionHelper(void)

{
  return;
}

// AddConditionChecker @ 14c06aca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionHelper::AddConditionChecker
          (UDS_ConditionHelper *this,UDS_ConditionChecker *param_1,EDS_TargetType param_2,
          EDS_ConditionCheckType param_3,int param_4,long64 param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [272];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  if (param_1 != (UDS_ConditionChecker *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnChangedConditionValueDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ConditionHelper>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&param_1->OnChangedConditionValueDelegate,(UDS_ConditionHelper *)local_158,
               (pmf_de140af5)this);
    if (param_5 < 1) {
      if (this != (UDS_ConditionHelper *)0x0) {
        local_158._0_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(param_1->Outer).WeakPtr,(FObjectPtr)local_158);
        param_1->CheckValue = param_4;
        param_1->TargetType = param_2;
        UDS_ConditionChecker::BindTargetUpdateEvent(param_1,param_2);
        (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
      }
    }
    else {
      if (this != (UDS_ConditionHelper *)0x0) {
        local_158._0_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(param_1->Outer).WeakPtr,(FObjectPtr)local_158);
        param_1->CheckValue = param_4;
        param_1->TargetType = param_2;
        UDS_ConditionChecker::BindTargetUpdateEvent(param_1,param_2);
        (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
      }
      UDS_CharInfoData::GetData((ulong64)(local_158 + 8));
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_158 + 8));
      if (bVar2) {
        UDS_ConditionChecker::SetTargetData
                  (param_1,(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_158._8_8_);
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_48 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                     "UDS_ConditionChecker::InitConditionChecker",0x2a,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_40,0xd3,L"targetData is invalid");
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
        }
      }
    }
    iVar3 = (this->ConditionCheckList).ArrayNum;
    piVar1 = &(this->ConditionCheckList).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ConditionCheckList).AllocatorInstance,piVar1);
    }
    (this->ConditionCheckList).ArrayNum = iVar3 + 1;
    *(UDS_ConditionChecker **)
     ((this->ConditionCheckList).AllocatorInstance.Data + (longlong)iVar3 * 8) = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  return;
}

// AddConditionChecker @ 14c06aec0

void __thiscall
UDS_ConditionHelper::AddConditionChecker
          (UDS_ConditionHelper *this,EDS_TargetType param_1,EDS_ConditionCheckType param_2,
          int param_3)

{
  UDS_ConditionChecker *pUVar1;
  UDS_ConditionChecker *pUVar2;
  TObjectPtr<UDS_ConditionChecker> TVar3;
  EDS_ConditionCheckType EVar4;
  undefined1 local_18 [16];
  
  EVar4 = (EDS_ConditionCheckType)this;
  if (param_1 == FriendAll) {
    TVar3 = UDS_ConditionChecker::CreateConditionChecker((UObject *)local_18,EVar4);
    pUVar1 = *(UDS_ConditionChecker **)TVar3.field0_0x0;
    TVar3 = UDS_ConditionChecker::CreateConditionChecker((UObject *)(local_18 + 8),EVar4);
    pUVar2 = *(UDS_ConditionChecker **)TVar3.field0_0x0;
    AddConditionChecker(this,pUVar1,Myself,param_2,param_3,0);
    AddConditionChecker(this,pUVar2,Friend,param_2,param_3,0);
  }
  else {
    TVar3 = UDS_ConditionChecker::CreateConditionChecker((UObject *)(local_18 + 8),EVar4);
    AddConditionChecker(this,*(UDS_ConditionChecker **)TVar3.field0_0x0,param_1,param_2,param_3,0);
  }
  return;
}

// CreateConditionHelper @ 14c070eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ConditionHelper> __cdecl
UDS_ConditionHelper::CreateConditionHelper(UObject *param_1,EDS_ConditionResultType param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined4 in_register_00000014;
  UObject *pUVar4;
  int in_R8D;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  pUVar4 = (UObject *)CONCAT44(in_register_00000014,param_2);
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar2 = (UObject *)0x0;
  if (in_R8D == 1) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionHelper_SkillUse_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = pUVar4;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ == 0) goto LAB_14c071004;
    plVar3 = (longlong *)(local_98 + 0x50);
    local_198._104_8_ = local_98._104_8_;
  }
  else if (in_R8D == 2) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionHelper_PopupSkill_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_118,pUVar1);
    local_118._8_8_ = pUVar4;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
    if (local_118._64_8_ == 0) goto LAB_14c071004;
    plVar3 = (longlong *)(local_118 + 0x50);
    local_198._104_8_ = local_118._104_8_;
  }
  else {
    if (in_R8D != 3) goto LAB_14c071004;
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionHelper_BubbleTalk_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_198,pUVar1);
    local_198._8_8_ = pUVar4;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
    if (local_198._64_8_ == 0) goto LAB_14c071004;
    plVar3 = (longlong *)(local_198 + 0x50);
  }
  if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
    plVar3 = (longlong *)local_198._104_8_;
  }
  (**(code **)(*plVar3 + 0x10))();
LAB_14c071004:
  *(UObject **)param_1 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return (TObjectPtr<UDS_ConditionHelper>)(TObjectPtr<UDS_ConditionHelper>_u_0)param_1;
}

// OnChangedConditionChecker @ 14c0925e0

void __thiscall
UDS_ConditionHelper::OnChangedConditionChecker
          (UDS_ConditionHelper *this,TWeakObjectPtr<UDS_ConditionChecker,FWeakObjectPtr> param_1,
          bool param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  EDS_ConditionUseType EVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  UObject *pUVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  UDS_ConditionHelper *pUStack_68;
  FDestructionSentinel FStack_60;
  
  if (this->bCheckCondition == false) {
    return;
  }
  if (this->bCheckCondition != false) {
    bVar17 = this->ConditionUseType != Or;
    iVar4 = (this->ConditionCheckList).ArrayNum;
    pFVar15 = (this->ConditionCheckList).AllocatorInstance.Data;
    pFVar2 = pFVar15 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->ConditionCheckList).ArrayNum != iVar4) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDS_ConditionChecker>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar15 == pFVar2) goto LAB_14c0af300;
      pUVar13 = *(UObject **)pFVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar13 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
      }
      FStackX_10.ObjectIndex = 0;
      FStackX_10.ObjectSerialNumber = 0;
      pUStackX_20 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&pUStackX_20);
      bVar9 = FWeakObjectPtr::IsValid(&FStackX_10);
      if (!bVar9) break;
      EVar3 = this->ConditionUseType;
      if (EVar3 == And) {
        pUVar13 = FWeakObjectPtr::Get(&FStackX_10);
        if (pUVar13[1].field_0x19 == '\0') {
          bVar17 = false;
        }
LAB_14c0af2f4:
        pFVar15 = pFVar15 + 8;
      }
      else if (EVar3 == Or) {
        pUVar13 = FWeakObjectPtr::Get(&FStackX_10);
        if (pUVar13[1].field_0x19 != '\x01') goto LAB_14c0af2f4;
        bVar17 = true;
        pFVar15 = pFVar15 + 8;
      }
      else {
        if ((EVar3 != Not) ||
           (pUVar13 = FWeakObjectPtr::Get(&FStackX_10), pUVar13[1].field_0x19 != '\x01'))
        goto LAB_14c0af2f4;
        bVar17 = false;
        pFVar15 = pFVar15 + 8;
      }
    }
    bVar17 = false;
LAB_14c0af300:
    if (bVar17 != this->bConditionValue) {
      this->bConditionValue = bVar17;
      (**(code **)(this->_padding_ + 0x2c0))(this,bVar17);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FStackX_18.ObjectIndex = 0;
      FStackX_18.ObjectSerialNumber = 0;
      pUStack_68 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_68);
      FVar8 = FStackX_18;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ConditionHelperChangedDelegate,(FWriteAccessScope *)&FStack_60);
      puVar1 = &(this->ConditionHelperChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar9 = false;
      uVar14 = *(int *)&(this->ConditionHelperChangedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar14) {
        lVar16 = (longlong)(int)uVar14 << 4;
        bVar9 = false;
        do {
          uVar12 = 0;
          if ((int)uVar14 < *(int *)&(this->ConditionHelperChangedDelegate).field_0x10) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->ConditionHelperChangedDelegate).field_0x8;
          if (((*(int *)(lVar16 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar16 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,FVar8,bVar17), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      puVar1 = &(this->ConditionHelperChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->ConditionHelperChangedDelegate,false);
      }
      if (FStack_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
      }
    }
  }
  return;
}

// OnUnInit @ 14c09c7a0

void __thiscall UDS_ConditionHelper::OnUnInit(UDS_ConditionHelper *this)

{
  return;
}

// SetCheckCondition @ 14c0a0dc0

void __thiscall UDS_ConditionHelper::SetCheckCondition(UDS_ConditionHelper *this,bool param_1)

{
  if (this->bCheckCondition != param_1) {
    this->bCheckCondition = param_1;
    UpdateConditionValue(this);
    return;
  }
  return;
}

// UnInit @ 14c0adac0

void __thiscall UDS_ConditionHelper::UnInit(UDS_ConditionHelper *this)

{
  int *piVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ConditionHelperChangedDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->ConditionHelperChangedDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  piVar1 = &(this->ConditionCheckList).ArrayMax;
  (this->ConditionCheckList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConditionCheckList).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateConditionValue @ 14c0af1a0

void __thiscall UDS_ConditionHelper::UpdateConditionValue(UDS_ConditionHelper *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  EDS_ConditionUseType EVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  UObject *pUVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_ConditionHelper *local_68;
  FDestructionSentinel local_60;
  
  if (this->bCheckCondition != false) {
    bVar17 = this->ConditionUseType != Or;
    iVar4 = (this->ConditionCheckList).ArrayNum;
    pFVar15 = (this->ConditionCheckList).AllocatorInstance.Data;
    pFVar2 = pFVar15 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->ConditionCheckList).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDS_ConditionChecker>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar2) goto LAB_14c0af300;
      pUVar13 = *(UObject **)pFVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar13 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      bVar9 = FWeakObjectPtr::IsValid(&local_res10);
      if (!bVar9) break;
      EVar3 = this->ConditionUseType;
      if (EVar3 == And) {
        pUVar13 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar13[1].field_0x19 == '\0') {
          bVar17 = false;
        }
LAB_14c0af2f4:
        pFVar15 = pFVar15 + 8;
      }
      else if (EVar3 == Or) {
        pUVar13 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar13[1].field_0x19 != '\x01') goto LAB_14c0af2f4;
        bVar17 = true;
        pFVar15 = pFVar15 + 8;
      }
      else {
        if ((EVar3 != Not) ||
           (pUVar13 = FWeakObjectPtr::Get(&local_res10), pUVar13[1].field_0x19 != '\x01'))
        goto LAB_14c0af2f4;
        bVar17 = false;
        pFVar15 = pFVar15 + 8;
      }
    }
    bVar17 = false;
LAB_14c0af300:
    if (bVar17 != this->bConditionValue) {
      this->bConditionValue = bVar17;
      (**(code **)(this->_padding_ + 0x2c0))(this,bVar17);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_68 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
      FVar8 = local_res18;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ConditionHelperChangedDelegate,(FWriteAccessScope *)&local_60);
      puVar1 = &(this->ConditionHelperChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar9 = false;
      uVar14 = *(int *)&(this->ConditionHelperChangedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar14) {
        lVar16 = (longlong)(int)uVar14 << 4;
        bVar9 = false;
        do {
          uVar12 = 0;
          if ((int)uVar14 < *(int *)&(this->ConditionHelperChangedDelegate).field_0x10) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->ConditionHelperChangedDelegate).field_0x8;
          if (((*(int *)(lVar16 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar16 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,FVar8,bVar17), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      puVar1 = &(this->ConditionHelperChangedDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->ConditionHelperChangedDelegate,false);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
    }
  }
  return;
}


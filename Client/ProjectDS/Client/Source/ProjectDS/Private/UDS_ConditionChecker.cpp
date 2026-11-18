// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b46b590

UClass * __cdecl UDS_ConditionChecker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker",
               &Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionChecker>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton;
}

// UDS_ConditionChecker @ 14b470830

UDS_ConditionChecker * __thiscall
UDS_ConditionChecker::UDS_ConditionChecker(UDS_ConditionChecker *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker__6B_;
  (this->Outer).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Outer).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TargetData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetData).WeakPtr,(FObjectPtr)&local_res8);
  this->CheckValue = 0;
  this->CheckType = None;
  this->TargetType = None;
  this->bConditionValue = false;
  *(undefined8 *)&this->OnChangedConditionValueDelegate = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x18 = 2;
  return this;
}

// UDS_ConditionChecker @ 14b4708b0

UDS_ConditionChecker * __thiscall
UDS_ConditionChecker::UDS_ConditionChecker(UDS_ConditionChecker *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker__6B_;
  (this->Outer).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Outer).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->TargetData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetData).WeakPtr,(FObjectPtr)&local_res8);
  this->CheckValue = 0;
  this->CheckType = None;
  this->TargetType = None;
  this->bConditionValue = false;
  *(undefined8 *)&this->OnChangedConditionValueDelegate = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedConditionValueDelegate).field_0x18 = 2;
  return this;
}

// GetPrivateStaticClass @ 14b475360

UClass * __cdecl UDS_ConditionChecker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker",
               &Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionChecker>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker.InnerSingleton;
}

// OnCheckCondition @ 14b476860

bool __thiscall UDS_ConditionChecker::OnCheckCondition(UDS_ConditionChecker *this)

{
  return false;
}

// OnInit @ 14b476880

void __thiscall UDS_ConditionChecker::OnInit(UDS_ConditionChecker *this)

{
  return;
}

// OnUnInit @ 14b476890

void __thiscall UDS_ConditionChecker::OnUnInit(UDS_ConditionChecker *this)

{
  return;
}

// OnUpdateTargetData @ 14b4768a0

void __thiscall
UDS_ConditionChecker::OnUpdateTargetData
          (UDS_ConditionChecker *this,TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  return;
}

// StaticRegisterNativesUDS_ConditionChecker @ 14b476c80

void __cdecl UDS_ConditionChecker::StaticRegisterNativesUDS_ConditionChecker(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ConditionChecker_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedMainTarget @ 14b479050

void __cdecl
UDS_ConditionChecker::execOnChangedMainTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulong64 *puVar2;
  ulong64 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  puVar2 = &local_res10;
  if ((ulong64 *)param_2->MostRecentPropertyAddress != (ulong64 *)0x0) {
    puVar2 = (ulong64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedMainTarget((UDS_ConditionChecker *)param_1,puVar2);
  return;
}

// BindTargetUpdateEvent @ 14c06d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker::BindTargetUpdateEvent(UDS_ConditionChecker *this,EDS_TargetType param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  undefined1 auStackY_348 [32];
  <lambda_1> local_318 [8];
  FWeakObjectPtr local_310;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  FWeakObjectPtr local_300;
  FName local_2f8;
  FWeakObjectPtr local_2f0;
  FName local_2e8;
  FWeakObjectPtr local_2e0;
  FName local_2d8;
  UDS_ConditionChecker *local_2d0;
  FName *local_2c8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_2c0;
  FDestructionSentinel local_2b0;
  FReadAccessScope local_298;
  FReadAccessScope local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_348;
  UDS_PlayerData::GetData((ulong64)&local_310,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_310);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_ConditionChecker::BindTargetUpdateEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x105,L"mainPlayerData is invalid.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8406762697911173382>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ConditionChecker.cpp"
                       ,0x106,"false");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWeakObjectPtr::Get(&local_310);
  UDS_CharInfoData::GetData((ulong64)&local_2f0);
  bVar2 = FWeakObjectPtr::IsValid(&local_2f0);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ConditionChecker::BindTargetUpdateEvent",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x10e,L"mainCharData is invalid");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  if (param_1 != Enemy) {
    if (param_1 != Myself) {
      return;
    }
    SetTargetData(this,(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_2f0);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_310);
  if (*(longlong *)&pUVar4[9].field_0x8 != 0) {
    UDS_CharInfoData::GetData((ulong64)&local_2e0);
    SetTargetData(this,(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_2e0);
  }
  pUVar4 = FWeakObjectPtr::Get(&local_310);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4[5].field_0x10,
             (UObject *)this);
  pUVar4 = FWeakObjectPtr::Get(&local_310);
  pcVar5 = strstr("&UDS_ConditionChecker::OnChangedMainTarget","::");
  if (pcVar5 == (char *)0x0) {
LAB_14c06d89b:
    pcVar7 = &DAT_00000002;
LAB_14c06d8a0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14c06d89b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14c06d8a0;
  }
  ::FName::FName(&local_2d8,pcVar7);
  if ((this == (UDS_ConditionChecker *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2e8 = local_2d8;
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_300.ObjectIndex = 0;
  local_300.ObjectSerialNumber = 0;
  local_2f8.ComparisonIndex.Value = 0;
  local_2f8.Number = 0;
  if ((this == (UDS_ConditionChecker *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0 = this;
  if (this == (UDS_ConditionChecker *)0x0) {
    local_2d0 = (UDS_ConditionChecker *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2d0 != (UDS_ConditionChecker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2d0);
  }
  FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_2d0);
  local_2f8 = local_2e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_308,&local_298);
  if ((local_2f8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_300), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_298);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_2f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_298);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14c06d9ee;
  }
  local_2c8 = &local_2e8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned___int64_const_&>::
  __Internal_BindDynamic<UDS_ConditionChecker>'::__l2::<lambda_1>::operator()(&local_2c8);
LAB_14c06d9ee:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_308,&local_280);
  local_2c0.Object = local_300;
  local_2c0.FunctionName = local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_280);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4[5].field_0x10,
             (FWriteAccessScope *)&local_2b0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[5].field_0x18,local_318,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4[5].field_0x10,
             &local_2c0);
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  return;
}

// CheckCondition @ 14c06e440

bool __thiscall UDS_ConditionChecker::CheckCondition(UDS_ConditionChecker *this)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  SetConditionValue(this,bVar1);
  return bVar1;
}

// CreateConditionChecker @ 14c0707a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ConditionChecker> __cdecl
UDS_ConditionChecker::CreateConditionChecker(UObject *param_1,EDS_BubbleTalkConditionType param_2)

{
  UClass *pUVar1;
  longlong *plVar2;
  undefined4 in_register_00000014;
  UObject *pUVar3;
  UDS_ConditionChecker_SkillUse *pUVar4;
  int in_R8D;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [128];
  undefined1 local_428 [128];
  undefined1 local_3a8 [128];
  undefined1 local_328 [128];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  pUVar3 = (UObject *)CONCAT44(in_register_00000014,param_2);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  pUVar4 = (UDS_ConditionChecker_SkillUse *)0x0;
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)param_1 = 0;
    return (TObjectPtr<UDS_ConditionChecker>)(TObjectPtr<UDS_ConditionChecker>_u_0)param_1;
  }
  if (in_R8D < 0xbba) {
    if (in_R8D == 0xbb9) {
switchD_14c070914_caseD_bba:
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_MoonShape_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_3a8,pUVar1);
      local_3a8._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3a8);
      if (local_3a8._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_3a8 + 0x50);
      local_4a8._104_8_ = local_3a8._104_8_;
    }
    else {
      if (in_R8D < 0x7d2) {
        if (in_R8D != 0x7d1) {
          if (in_R8D != 1) {
            if (((in_R8D != 0x3e9) && (in_R8D != 0x3ea)) &&
               (pUVar4 = (UDS_ConditionChecker_SkillUse *)0x0, in_R8D != 0x3eb))
            goto switchD_14c070914_default;
            goto LAB_14c070822;
          }
          FObjectInitializer::AssertIfInConstructor
                    (pUVar3,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_Pass_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_4a8,pUVar1);
          local_4a8._8_8_ = pUVar3;
          pUVar4 = (UDS_ConditionChecker_SkillUse *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4a8);
          if (local_4a8._64_8_ == 0) goto switchD_14c070914_default;
          plVar2 = (longlong *)(local_4a8 + 0x50);
          goto LAB_14c070bdf;
        }
      }
      else if (((in_R8D != 0x7d2) && (in_R8D != 0x7d3)) && (in_R8D != 0x7d4))
      goto switchD_14c070914_default;
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_Timeband_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_428,pUVar1);
      local_428._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_428);
      if (local_428._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_428 + 0x50);
      local_4a8._104_8_ = local_428._104_8_;
    }
  }
  else if (in_R8D < 0xfa2) {
    if (in_R8D != 0xfa1) {
      switch(in_R8D) {
      case 0xbba:
      case 0xbbb:
      case 0xbbc:
      case 0xbbd:
      case 0xbbe:
      case 0xbbf:
        goto switchD_14c070914_caseD_bba;
      default:
        goto switchD_14c070914_default;
      }
    }
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_QuestComplete_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_328,pUVar1);
    local_328._8_8_ = pUVar3;
    pUVar4 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_328);
    if (local_328._64_8_ == 0) goto switchD_14c070914_default;
    plVar2 = (longlong *)(local_328 + 0x50);
    local_4a8._104_8_ = local_328._104_8_;
  }
  else if (in_R8D < 0x138a) {
    if (in_R8D == 0x1389) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_TargetSight_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_228,pUVar1);
      local_228._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
      if (local_228._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_228 + 0x50);
      local_4a8._104_8_ = local_228._104_8_;
    }
    else {
      if (in_R8D != 0xfa2) goto switchD_14c070914_default;
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_Questing_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_2a8,pUVar1);
      local_2a8._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
      if (local_2a8._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_2a8 + 0x50);
      local_4a8._104_8_ = local_2a8._104_8_;
    }
  }
  else {
    if (in_R8D < 0x138e) {
      if (in_R8D != 0x138d) {
        if (in_R8D == 0x138a) {
          pUVar4 = NewObject<UDS_ConditionChecker_SkillUse>(pUVar3);
          goto switchD_14c070914_default;
        }
        if (in_R8D != 0x138b) {
          if (in_R8D != 0x138c) goto switchD_14c070914_default;
          FObjectInitializer::AssertIfInConstructor
                    (pUVar3,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_TargetHp_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1a8,pUVar1);
          local_1a8._8_8_ = pUVar3;
          pUVar4 = (UDS_ConditionChecker_SkillUse *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
          if (local_1a8._64_8_ == 0) goto switchD_14c070914_default;
          plVar2 = (longlong *)(local_1a8 + 0x50);
          local_4a8._104_8_ = local_1a8._104_8_;
          goto LAB_14c070bdf;
        }
      }
LAB_14c070822:
      pUVar4 = (UDS_ConditionChecker_SkillUse *)NewObject<UDS_ConditionChecker>(pUVar3);
      goto switchD_14c070914_default;
    }
    if (in_R8D == 0x138e) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_TargetDeath_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar1);
      local_a8._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_a8 + 0x50);
      local_4a8._104_8_ = local_a8._104_8_;
    }
    else {
      if (in_R8D != 0x1771) goto switchD_14c070914_default;
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_PlayerGrade_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar1);
      local_128._8_8_ = pUVar3;
      pUVar4 = (UDS_ConditionChecker_SkillUse *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ == 0) goto switchD_14c070914_default;
      plVar2 = (longlong *)(local_128 + 0x50);
      local_4a8._104_8_ = local_128._104_8_;
    }
  }
LAB_14c070bdf:
  if ((longlong *)local_4a8._104_8_ != (longlong *)0x0) {
    plVar2 = (longlong *)local_4a8._104_8_;
  }
  (**(code **)(*plVar2 + 0x10))();
switchD_14c070914_default:
  *(UDS_ConditionChecker_SkillUse **)param_1 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_ConditionChecker_SkillUse *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TObjectPtr<UDS_ConditionChecker>)(TObjectPtr<UDS_ConditionChecker>_u_0)param_1;
}

// CreateConditionChecker @ 14c070c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ConditionChecker> __cdecl
UDS_ConditionChecker::CreateConditionChecker(UObject *param_1,EDS_ConditionCheckType param_2)

{
  UClass *pUVar1;
  UDS_ConditionChecker_SkillUse *pUVar2;
  longlong *plVar3;
  undefined7 in_register_00000011;
  UObject *pUVar4;
  undefined1 in_R8B;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  pUVar4 = (UObject *)CONCAT71(in_register_00000011,param_2);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  pUVar2 = (UDS_ConditionChecker_SkillUse *)0x0;
  if (pUVar4 == (UObject *)0x0) {
    *(undefined8 *)param_1 = 0;
    return (TObjectPtr<UDS_ConditionChecker>)(TObjectPtr<UDS_ConditionChecker>_u_0)param_1;
  }
  switch(in_R8B) {
  case 1:
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_GiveAbnormal_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2a8,pUVar1);
    local_2a8._8_8_ = pUVar4;
    pUVar2 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
    if (local_2a8._64_8_ == 0) goto switchD_14c070caf_default;
    plVar3 = (longlong *)(local_2a8 + 0x50);
    local_a8._104_8_ = local_2a8._104_8_;
    break;
  case 2:
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_GiveBuff_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_228,pUVar1);
    local_228._8_8_ = pUVar4;
    pUVar2 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
    if (local_228._64_8_ == 0) goto switchD_14c070caf_default;
    plVar3 = (longlong *)(local_228 + 0x50);
    local_a8._104_8_ = local_228._104_8_;
    break;
  case 3:
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_NearStruck_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1a8,pUVar1);
    local_1a8._8_8_ = pUVar4;
    pUVar2 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
    if (local_1a8._64_8_ == 0) goto switchD_14c070caf_default;
    plVar3 = (longlong *)(local_1a8 + 0x50);
    local_a8._104_8_ = local_1a8._104_8_;
    break;
  case 4:
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_FarStruck_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar1);
    local_128._8_8_ = pUVar4;
    pUVar2 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ == 0) goto switchD_14c070caf_default;
    plVar3 = (longlong *)(local_128 + 0x50);
    local_a8._104_8_ = local_128._104_8_;
    break;
  case 5:
    pUVar2 = NewObject<UDS_ConditionChecker_SkillUse>(pUVar4);
    goto switchD_14c070caf_default;
  case 6:
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_ConditionChecker_SkillElapsedTime_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._8_8_ = pUVar4;
    pUVar2 = (UDS_ConditionChecker_SkillUse *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ == 0) goto switchD_14c070caf_default;
    plVar3 = (longlong *)(local_a8 + 0x50);
    break;
  default:
    goto switchD_14c070caf_default;
  }
  if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
    plVar3 = (longlong *)local_a8._104_8_;
  }
  (**(code **)(*plVar3 + 0x10))();
switchD_14c070caf_default:
  *(UDS_ConditionChecker_SkillUse **)param_1 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_ConditionChecker_SkillUse *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return (TObjectPtr<UDS_ConditionChecker>)(TObjectPtr<UDS_ConditionChecker>_u_0)param_1;
}

// InitConditionChecker @ 14c08b780

void __thiscall
UDS_ConditionChecker::InitConditionChecker
          (UDS_ConditionChecker *this,UObject *param_1,EDS_TargetType param_2,int param_3)

{
  UObject *local_res10;
  
  if (param_1 != (UObject *)0x0) {
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&(this->Outer).WeakPtr,(FObjectPtr)&local_res10);
    this->TargetType = param_2;
    this->CheckValue = param_3;
    BindTargetUpdateEvent(this,param_2);
    (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  return;
}

// InitConditionChecker @ 14c08b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker::InitConditionChecker
          (UDS_ConditionChecker *this,UObject *param_1,EDS_TargetType param_2,int param_3,
          ulong64 param_4)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UObject *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UObject *)0x0) {
    local_140 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&(this->Outer).WeakPtr,(FObjectPtr)&local_140);
    this->TargetType = param_2;
    this->CheckValue = param_3;
    BindTargetUpdateEvent(this,param_2);
    (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  UDS_CharInfoData::GetData((ulong64)&local_148);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    SetTargetData(this,(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ConditionChecker::InitConditionChecker",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd3,L"targetData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnChangedMainTarget @ 14c092760

void __thiscall
UDS_ConditionChecker::OnChangedMainTarget(UDS_ConditionChecker *this,ulong64 *param_1)

{
  FWeakObjectPtr local_res10 [3];
  
  if (*param_1 != 0) {
    UDS_CharInfoData::GetData((ulong64)local_res10);
    SetTargetData(this,(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_res10[0]);
  }
  return;
}

// SetConditionValue @ 14c0a0de0

void __thiscall UDS_ConditionChecker::SetConditionValue(UDS_ConditionChecker *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UDS_ConditionChecker *local_res18;
  FDestructionSentinel local_48;
  
  if (param_1 != this->bConditionValue) {
    this->bConditionValue = param_1;
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
    FVar6 = local_res8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnChangedConditionValueDelegate,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnChangedConditionValueDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar11 = *(int *)&(this->OnChangedConditionValueDelegate).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar10 = (longlong)(int)uVar11 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&(this->OnChangedConditionValueDelegate).field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnChangedConditionValueDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,FVar6,param_1), cVar8 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(this->OnChangedConditionValueDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnChangedConditionValueDelegate,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// SetTargetData @ 14c0a1890

void __thiscall
UDS_ConditionChecker::SetTargetData
          (UDS_ConditionChecker *this,TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if ((bVar1) &&
     ((bVar1 = FWeakObjectPtr::IsValid(local_res10), !bVar1 ||
      (bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals<UDS_CharInfoData,bool>
                         (&this->TargetData,
                          (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_res10), !bVar1)))
     ) {
    (this->TargetData).WeakPtr = local_res10[0];
    (**(code **)(this->_padding_ + 0x2c8))(this);
  }
  return;
}

// UnInit @ 14c0ada60

void __thiscall UDS_ConditionChecker::UnInit(UDS_ConditionChecker *this)

{
  FDestructionSentinel local_28;
  
  (**(code **)(this->_padding_ + 0x2b8))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChangedConditionValueDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnChangedConditionValueDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (this->Outer).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}


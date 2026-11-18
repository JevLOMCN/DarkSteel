// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b426d80

UClass * __cdecl UDS_BubbleTalkCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BubbleTalkCondition",
               &Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton,
               StaticRegisterNativesUDS_BubbleTalkCondition,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BubbleTalkCondition>,
               InternalVTableHelperCtorCaller<UDS_BubbleTalkCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton;
}

// UDS_BubbleTalkCondition @ 14b42ac40

UDS_BubbleTalkCondition * __thiscall
UDS_BubbleTalkCondition::UDS_BubbleTalkCondition
          (UDS_BubbleTalkCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_BubbleTalkCondition__6B_;
  *(undefined8 *)&this->BubbleTalkHelperChangedDelegate = 0;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x10 = 0;
  (this->ConditionHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionHelpers).ArrayNum = 0;
  (this->ConditionHelpers).ArrayMax = 0;
  this->BubbleTalkBaseID = 0;
  this->LastBubbleTalkID = 0;
  this->bIsConditionCheck = false;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x18 = 2;
  return this;
}

// UDS_BubbleTalkCondition @ 14b42ac90

UDS_BubbleTalkCondition * __thiscall
UDS_BubbleTalkCondition::UDS_BubbleTalkCondition
          (UDS_BubbleTalkCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_BubbleTalkCondition__6B_;
  *(undefined8 *)&this->BubbleTalkHelperChangedDelegate = 0;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x10 = 0;
  (this->ConditionHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionHelpers).ArrayNum = 0;
  (this->ConditionHelpers).ArrayMax = 0;
  this->BubbleTalkBaseID = 0;
  this->LastBubbleTalkID = 0;
  this->bIsConditionCheck = false;
  *(undefined8 *)&(this->BubbleTalkHelperChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_BubbleTalkCondition @ 14b42b6e0

void __thiscall UDS_BubbleTalkCondition::~UDS_BubbleTalkCondition(UDS_BubbleTalkCondition *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_BubbleTalkCondition__6B_;
  pFVar1 = (this->ConditionHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BubbleTalkHelperChangedDelegate).field_0x8,
             *(int *)&(this->BubbleTalkHelperChangedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->BubbleTalkHelperChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BubbleTalkHelperChangedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b42db10

UClass * __cdecl UDS_BubbleTalkCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BubbleTalkCondition",
               &Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton,
               StaticRegisterNativesUDS_BubbleTalkCondition,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BubbleTalkCondition>,
               InternalVTableHelperCtorCaller<UDS_BubbleTalkCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BubbleTalkCondition.InnerSingleton;
}

// StaticRegisterNativesUDS_BubbleTalkCondition @ 14b42e260

void __cdecl UDS_BubbleTalkCondition::StaticRegisterNativesUDS_BubbleTalkCondition(void)

{
  return;
}

// AddConditionHelper @ 14ba93830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_BubbleTalkCondition::AddConditionHelper
          (UDS_BubbleTalkCondition *this,ulong64 param_1,FDS_BubbleTalkBaseTableRow *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UDS_ConditionHelper_BubbleTalk *this_00;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_178;
  FObjectPtr_u_0 local_170;
  FObjectPtr_u_0 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_ConditionHelper::CreateConditionHelper((UObject *)&local_170,(EDS_ConditionResultType)this);
  if (local_170.Handle == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_BubbleTalkCondition::AddConditionHelper",0x2b,Yes);
    pwVar8 = L"conditionHelper is nullptr.";
    uVar7 = 0x103;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_ConditionHelper_BubbleTalk_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_170,pUVar5);
    local_168[0].Handle = (UObject *)0x0;
    if (bVar2) {
      local_168[0] = local_170;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_168[0].Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_168[0].Handle);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_168[0].Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_168[0].Handle);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)local_168);
    bVar2 = FWeakObjectPtr::IsValid(&local_178);
    if (bVar2) {
      iVar3 = (this->ConditionHelpers).ArrayNum;
      piVar1 = &(this->ConditionHelpers).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ConditionHelpers).AllocatorInstance,piVar1);
      }
      (this->ConditionHelpers).ArrayNum = iVar3 + 1;
      ((FObjectPtr_u_0 *)((this->ConditionHelpers).AllocatorInstance.Data + (longlong)iVar3 * 8))->
      Handle = (UObject *)local_170;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170.Handle != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_170.Handle);
      }
      pUVar6 = FWeakObjectPtr::Get(&local_178);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionHelper,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_BubbleTalkCondition>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ConditionHelper,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                  *)&pUVar6[1].field_0x20,(UDS_BubbleTalkCondition *)local_168,(pmf_5b88e69a)this);
      this_00 = (UDS_ConditionHelper_BubbleTalk *)FWeakObjectPtr::Get(&local_178);
      UDS_ConditionHelper_BubbleTalk::InitBubbleTalkHelper(this_00,param_1);
      pUVar6 = FWeakObjectPtr::Get(&local_178);
      (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,param_2);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_BubbleTalkCondition::AddConditionHelper",0x2b,Yes);
    pwVar8 = L"bubbleTalkHelper is nullptr.";
    uVar7 = 0x109;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar7,pwVar8);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// ConditionHelperCheck @ 14ba98a50

bool __thiscall UDS_BubbleTalkCondition::ConditionHelperCheck(UDS_BubbleTalkCondition *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->BubbleTalkBaseID != 0) {
    pFVar3 = (this->ConditionHelpers).AllocatorInstance.Data;
    iVar2 = (this->ConditionHelpers).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ConditionHelpers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if (*(char *)(*(longlong *)pFVar3 + 0x41) == '\0') break;
      pFVar3 = pFVar3 + 8;
    }
  }
  return false;
}

// ConditionHelpersUnbinding @ 14ba98ad0

void __thiscall UDS_BubbleTalkCondition::ConditionHelpersUnbinding(UDS_BubbleTalkCondition *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FScriptContainerElement *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = (this->ConditionHelpers).AllocatorInstance.Data;
  iVar2 = (this->ConditionHelpers).ArrayNum;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConditionHelpers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar5 = (UObject *)0x0;
    if (*(longlong *)this_00 != 0) {
      pUVar4 = Z_Construct_UClass_UDS_ConditionHelper_BubbleTalk_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (bVar3) {
        pUVar5 = *(UObject **)this_00;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[1].field_0x20,this);
    }
    this_00 = this_00 + 8;
  }
  return;
}

// Init @ 14bab3730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_BubbleTalkCondition::Init
          (UDS_BubbleTalkCondition *this,ulong64 param_1,FDS_BubbleTalkBaseTableRow *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_2 == (FDS_BubbleTalkBaseTableRow *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_BubbleTalkCondition::Init",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0xd7,L"InSkillConditionTableRow is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    this->BubbleTalkBaseID = param_2->ID;
    AddConditionHelper(this,param_1,param_2);
  }
  return;
}

// OnChangedConditionHelper @ 14babe570

void __thiscall
UDS_BubbleTalkCondition::OnChangedConditionHelper
          (UDS_BubbleTalkCondition *this,TWeakObjectPtr<UDS_ConditionHelper,FWeakObjectPtr> param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FWeakObjectPtr local_res8;
  UDS_BubbleTalkCondition *local_res20;
  
  pFVar3 = (this->ConditionHelpers).AllocatorInstance.Data;
  iVar2 = (this->ConditionHelpers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConditionHelpers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    local_res20 = this;
    if (pFVar3 == pFVar1) break;
    if (*(char *)(*(longlong *)pFVar3 + 0x41) == '\x01') {
      this->bIsConditionCheck = true;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      bVar4 = true;
LAB_14babe645:
      TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_BubbleTalkCondition,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->BubbleTalkHelperChangedDelegate,
                  (TWeakObjectPtr<UDS_BubbleTalkCondition,FWeakObjectPtr>)local_res8,bVar4);
      return;
    }
    pFVar3 = pFVar3 + 8;
  }
  this->bIsConditionCheck = false;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar4 = false;
  goto LAB_14babe645;
}


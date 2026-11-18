// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4a3ef0

UClass * __cdecl UDS_GimmickAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GimmickAnim",
               &Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton,
               StaticRegisterNativesUDS_GimmickAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_GimmickAnim>,
               InternalVTableHelperCtorCaller<UDS_GimmickAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton;
}

// UDS_GimmickAnim @ 14b4a6f60

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

UDS_GimmickAnim * __thiscall
UDS_GimmickAnim::UDS_GimmickAnim(UDS_GimmickAnim *this,FVTableHelper *param_1)

{
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->DuringSpawnStatus = false;
  this->IdleState = DisableClose;
  this->bIsFirstState = true;
  this->bIsInteraction = false;
  *(undefined ***)this = &___7UDS_GimmickAnim__6B_;
  (this->NpcGimmickData).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsEnabled = false;
  this->bIsOpened = false;
  this->bIsDead = false;
  return this;
}

// ~UDS_GimmickAnim @ 14b4a7850

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

void __thiscall UDS_GimmickAnim::~UDS_GimmickAnim(UDS_GimmickAnim *this)

{
  *(undefined ***)this = &___7UDS_GimmickAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8a80

UClass * __cdecl UDS_GimmickAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GimmickAnim",
               &Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton,
               StaticRegisterNativesUDS_GimmickAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_GimmickAnim>,
               InternalVTableHelperCtorCaller<UDS_GimmickAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GimmickAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_GimmickAnim @ 14b4a9570

void __cdecl UDS_GimmickAnim::StaticRegisterNativesUDS_GimmickAnim(void)

{
  return;
}

// UDS_GimmickAnim @ 14b864d20

UDS_GimmickAnim * __thiscall
UDS_GimmickAnim::UDS_GimmickAnim(UDS_GimmickAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->DuringSpawnStatus = false;
  this->IdleState = DisableClose;
  this->bIsFirstState = true;
  this->bIsInteraction = false;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined ***)this = &___7UDS_GimmickAnim__6B_;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  this->bIsEnabled = false;
  this->bIsOpened = false;
  this->bIsDead = false;
  (this->NpcGimmickData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// IsValidReferencedPtr @ 14b87ea90

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

bool __thiscall UDS_GimmickAnim::IsValidReferencedPtr(UDS_GimmickAnim *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->NpcGimmickData).WeakPtr);
    if (bVar2) {
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6236782681229623384>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_GimmickAnim.cpp"
                       ,0x58,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_GimmickAnim::IsValidReferencedPtr",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x59,L"Invalid Referenced Ptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnBindAnimationEvents @ 14b8812d0

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

void __thiscall UDS_GimmickAnim::OnBindAnimationEvents(UDS_GimmickAnim *this)

{
  UObject *pUVar1;
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  pUVar1 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(bool,bool,bool),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GimmickAnim>
            ((TMulticastDelegateRegistration<void___cdecl(bool,bool,bool),FDefaultDelegateUserPolicy>
              *)&pUVar1[2].field_0x8,(UDS_GimmickAnim *)&stack0x00000008,(pmf_1a9f2d19)this);
  pUVar1 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GimmickAnim>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             (pUVar1 + 3),(UDS_GimmickAnim *)&stack0x00000008,(pmf_6724d8f5)this);
  pUVar1 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GimmickAnim>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pUVar1[3].field_0x20,(UDS_GimmickAnim *)&stack0x00000008,(pmf_6724d8f5)this);
  pUVar1 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GimmickAnim>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pUVar1[4].field_0x18,(UDS_GimmickAnim *)&stack0x00000008,(pmf_6724d8f5)this);
  return;
}

// OnChangeEnableState @ 14b884c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GimmickAnim::OnChangeEnableState(UDS_GimmickAnim *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GimmickAnim::OnChangeEnableState",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x72,L"[GS] OnChangeEnableState : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this->bIsEnabled = param_1;
  this->IdleState = DisableClose;
  this->bIsFirstState = false;
  if (param_1) {
    this->IdleState = (this->bIsOpened == true) + EnableClose;
  }
  return;
}

// OnChangeInteractionState @ 14b884d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GimmickAnim::OnChangeInteractionState(UDS_GimmickAnim *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GimmickAnim::OnChangeInteractionState",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x86,L"[GS] OnChangeInteractionState : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this->bIsInteraction = param_1;
  this->IdleState = DisableClose;
  if (this->bIsEnabled == true) {
    this->IdleState = (this->bIsOpened == true) + EnableClose;
  }
  return;
}

// OnChangeOpenState @ 14b884e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GimmickAnim::OnChangeOpenState(UDS_GimmickAnim *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_GimmickAnim::OnChangeOpenState",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x7c,L"[GS] OnChangeOpenState : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this->IdleState = DisableClose;
  this->bIsFirstState = false;
  this->bIsOpened = param_1;
  if (this->bIsEnabled == true) {
    this->IdleState = param_1 + EnableClose;
  }
  return;
}

// OnChangeSpawnState @ 14b884f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_GimmickAnim::OnChangeSpawnState(UDS_GimmickAnim *this,bool param_1,bool param_2,bool param_3)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_GimmickAnim::OnChangeSpawnState",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_148.Ptr,99,L"[GS] OnChangeSpawnState : %d");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (param_1) {
    this->bIsEnabled = param_2;
    this->bIsOpened = param_3;
  }
  this->IdleState = DisableClose;
  if (this->bIsEnabled == true) {
    this->IdleState = (this->bIsOpened == true) + EnableClose;
  }
  return;
}

// OnClearVariables @ 14b887a40

void __thiscall UDS_GimmickAnim::OnClearVariables(UDS_GimmickAnim *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->NpcGimmickData).WeakPtr = local_res8;
  return;
}

// OnInitVariables @ 14b889bd0

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

void __thiscall UDS_GimmickAnim::OnInitVariables(UDS_GimmickAnim *this)

{
  char cVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar3;
  TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar3 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar3.WeakPtr;
  }
  TVar4 = UDS_NPCGimmickData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
  (this->NpcGimmickData).WeakPtr = *TVar4.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcGimmickData).WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
    this->bIsEnabled = (bool)pUVar5[10].field_0x19;
    pUVar5 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
    this->bIsOpened = (bool)pUVar5[10].field_0x1a;
    pUVar5 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
    this->bIsInteraction = (bool)pUVar5[10].field_0x1b;
  }
  this->bIsFirstState = true;
  this->DuringSpawnStatus = false;
  this->bIsDead = false;
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88af80

void __thiscall
UDS_GimmickAnim::OnNativeThreadSafeUpdateAnimation(UDS_GimmickAnim *this,float param_1)

{
  return;
}

// OnNativeUpdateAnimation @ 14b88bde0

void __thiscall UDS_GimmickAnim::OnNativeUpdateAnimation(UDS_GimmickAnim *this,float param_1)

{
  return;
}

// OnUnBindAnimationEvents @ 14b894270

void __thiscall UDS_GimmickAnim::OnUnBindAnimationEvents(UDS_GimmickAnim *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
  pUVar2 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 3),this);
  pUVar2 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[3].field_0x20,this);
  pUVar2 = FWeakObjectPtr::Get(&(this->NpcGimmickData).WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
  return;
}

// UpdateIdleState @ 14b8a2430

void __thiscall UDS_GimmickAnim::UpdateIdleState(UDS_GimmickAnim *this)

{
  this->IdleState = DisableClose;
  if (this->bIsEnabled == true) {
    this->IdleState = (this->bIsOpened == true) + EnableClose;
  }
  return;
}


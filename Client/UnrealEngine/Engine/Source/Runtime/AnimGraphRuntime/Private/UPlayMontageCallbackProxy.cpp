// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 20

// StaticClass @ 1463eed50

UClass * __cdecl UPlayMontageCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"PlayMontageCallbackProxy",
               &Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton,
               StaticRegisterNativesUPlayMontageCallbackProxy,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlayMontageCallbackProxy>,
               InternalVTableHelperCtorCaller<UPlayMontageCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton;
}

// UPlayMontageCallbackProxy @ 146407b20

UPlayMontageCallbackProxy * __thiscall
UPlayMontageCallbackProxy::UPlayMontageCallbackProxy
          (UPlayMontageCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayMontageCallbackProxy__6B_;
  *(undefined8 *)&this->OnCompleted = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x10 = 0;
  *(undefined8 *)&this->OnBlendOut = 0;
  *(undefined8 *)&(this->OnBlendOut).field_0x8 = 0;
  *(undefined8 *)&(this->OnBlendOut).field_0x10 = 0;
  *(undefined8 *)&this->OnInterrupted = 0;
  *(undefined8 *)&(this->OnInterrupted).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterrupted).field_0x10 = 0;
  *(undefined8 *)&this->OnNotifyBegin = 0;
  *(undefined8 *)&(this->OnNotifyBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnNotifyBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnNotifyEnd = 0;
  *(undefined8 *)&(this->OnNotifyEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnNotifyEnd).field_0x10 = 0;
  (this->AnimInstancePtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->BlendingOutDelegate = 0;
  *(undefined8 *)&(this->BlendingOutDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->BlendingOutDelegate).field_0x10 = 0;
  *(undefined8 *)&this->MontageEndedDelegate = 0;
  *(undefined8 *)&(this->MontageEndedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->MontageEndedDelegate).field_0x10 = 0;
  return this;
}

// UPlayMontageCallbackProxy @ 146407bc0

UPlayMontageCallbackProxy * __thiscall
UPlayMontageCallbackProxy::UPlayMontageCallbackProxy
          (UPlayMontageCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MontageInstanceID = -1;
  this->_padding_ = (longlong)&___7UPlayMontageCallbackProxy__6B_;
  this->bInterruptedCalledBeforeBlendingOut = 0;
  *(undefined8 *)&this->OnCompleted = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x10 = 0;
  *(undefined8 *)&this->OnBlendOut = 0;
  *(undefined8 *)&(this->OnBlendOut).field_0x8 = 0;
  *(undefined8 *)&(this->OnBlendOut).field_0x10 = 0;
  *(undefined8 *)&this->OnInterrupted = 0;
  *(undefined8 *)&(this->OnInterrupted).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterrupted).field_0x10 = 0;
  *(undefined8 *)&this->OnNotifyBegin = 0;
  *(undefined8 *)&(this->OnNotifyBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnNotifyBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnNotifyEnd = 0;
  *(undefined8 *)&(this->OnNotifyEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnNotifyEnd).field_0x10 = 0;
  (this->AnimInstancePtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->BlendingOutDelegate = 0;
  *(undefined8 *)&(this->BlendingOutDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->BlendingOutDelegate).field_0x10 = 0;
  *(undefined8 *)&this->MontageEndedDelegate = 0;
  *(undefined8 *)&(this->MontageEndedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->MontageEndedDelegate).field_0x10 = 0;
  return this;
}

// ~UPlayMontageCallbackProxy @ 146409810

void __thiscall
UPlayMontageCallbackProxy::~UPlayMontageCallbackProxy(UPlayMontageCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPlayMontageCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MontageEndedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->BlendingOutDelegate);
  pvVar1 = *(void **)&(this->OnNotifyEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNotifyEnd);
  pvVar1 = *(void **)&(this->OnNotifyBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNotifyBegin);
  pvVar1 = *(void **)&(this->OnInterrupted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterrupted);
  pvVar1 = *(void **)&(this->OnBlendOut).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBlendOut);
  pvVar1 = *(void **)&(this->OnCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompleted);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146416aa0

void __thiscall UPlayMontageCallbackProxy::BeginDestroy(UPlayMontageCallbackProxy *this)

{
  UnbindDelegates(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateProxyObjectForPlayMontage @ 146422d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPlayMontageCallbackProxy * __cdecl
UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage
          (USkeletalMeshComponent *param_1,UAnimMontage *param_2,float param_3,float param_4,
          FName param_5,bool param_6)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPlayMontageCallbackProxy *this;
  longlong *plVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar2);
  local_c8._8_8_ = pUVar1;
  this = (UPlayMontageCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  PlayMontage(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return this;
}

// GetPrivateStaticClass @ 14644d660

UClass * __cdecl UPlayMontageCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"PlayMontageCallbackProxy",
               &Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton,
               StaticRegisterNativesUPlayMontageCallbackProxy,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlayMontageCallbackProxy>,
               InternalVTableHelperCtorCaller<UPlayMontageCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayMontageCallbackProxy.InnerSingleton;
}

// IsNotifyValid @ 14645aee0

bool __thiscall
UPlayMontageCallbackProxy::IsNotifyValid
          (UPlayMontageCallbackProxy *this,FName param_1,FBranchingPointNotifyPayload *param_2)

{
  if ((this->MontageInstanceID != -1) && (param_2->MontageInstanceID == this->MontageInstanceID)) {
    return true;
  }
  return false;
}

// OnMontageBlendingOut @ 14645f080

void __thiscall
UPlayMontageCallbackProxy::OnMontageBlendingOut
          (UPlayMontageCallbackProxy *this,UAnimMontage *param_1,bool param_2)

{
  undefined8 local_res20;
  
  local_res20 = 0;
  if (param_2) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInterrupted,
               &local_res20);
    this->bInterruptedCalledBeforeBlendingOut = 1;
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBlendOut,&local_res20)
  ;
  return;
}

// OnMontageEnded @ 14645f0d0

void __thiscall
UPlayMontageCallbackProxy::OnMontageEnded
          (UPlayMontageCallbackProxy *this,UAnimMontage *param_1,bool param_2)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  undefined8 local_res20;
  
  if (param_2) {
    if (this->bInterruptedCalledBeforeBlendingOut != 0) goto LAB_14645f107;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInterrupted;
  }
  else {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCompleted;
  }
  local_res20 = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,&local_res20);
LAB_14645f107:
  UnbindDelegates(this);
  return;
}

// OnNotifyBeginReceived @ 14645f120

void __thiscall
UPlayMontageCallbackProxy::OnNotifyBeginReceived
          (UPlayMontageCallbackProxy *this,FName param_1,FBranchingPointNotifyPayload *param_2)

{
  FName local_res8 [4];
  
  if ((this->MontageInstanceID != -1) && (param_2->MontageInstanceID == this->MontageInstanceID)) {
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNotifyBegin,
               local_res8);
  }
  return;
}

// OnNotifyEndReceived @ 14645f160

void __thiscall
UPlayMontageCallbackProxy::OnNotifyEndReceived
          (UPlayMontageCallbackProxy *this,FName param_1,FBranchingPointNotifyPayload *param_2)

{
  FName local_res8 [4];
  
  if ((this->MontageInstanceID != -1) && (param_2->MontageInstanceID == this->MontageInstanceID)) {
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNotifyEnd,local_res8
              );
  }
  return;
}

// PlayMontage @ 14645fb70

bool __thiscall
UPlayMontageCallbackProxy::PlayMontage
          (UPlayMontageCallbackProxy *this,USkeletalMeshComponent *param_1,UAnimMontage *param_2,
          float param_3,float param_4,FName param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UAnimInstance *this_00;
  FAnimMontageInstance *pFVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  UAnimInstance *local_58;
  FName local_50;
  FName local_48;
  undefined8 local_40 [3];
  
  if ((param_1 == (USkeletalMeshComponent *)0x0) ||
     (this_00 = USkeletalMeshComponent::GetAnimInstance(param_1), this_00 == (UAnimInstance *)0x0))
  {
LAB_14645fe0f:
    local_40[0] = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInterrupted,local_40
              );
    return false;
  }
  fVar8 = UAnimInstance::Montage_Play(this_00,param_2,param_3,MontageLength,param_4,param_6);
  if (fVar8 <= 0.0) goto LAB_14645fe0f;
  local_58 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&(this->AnimInstancePtr).WeakPtr,(FObjectPtr)&local_58);
  pFVar4 = UAnimInstance::GetActiveInstanceForMontage(this_00,param_2);
  if (pFVar4 != (FAnimMontageInstance *)0x0) {
    this->MontageInstanceID = pFVar4->InstanceID;
  }
  if (param_5 != (FName)0x0) {
    UAnimInstance::Montage_JumpToSection(this_00,param_5,param_2);
  }
  TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  BindUObject<UPlayMontageCallbackProxy>
            ((TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             &this->BlendingOutDelegate,this,(pmf_a6a46e2e)0x14645f080);
  UAnimInstance::Montage_SetBlendingOutDelegate(this_00,&this->BlendingOutDelegate,param_2);
  TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  BindUObject<UPlayMontageCallbackProxy>
            ((TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             &this->MontageEndedDelegate,this,(pmf_a6a46e2e)0x14645f0d0);
  UAnimInstance::Montage_SetEndDelegate(this_00,&this->MontageEndedDelegate,param_2);
  pcVar5 = strstr("&UPlayMontageCallbackProxy::OnNotifyBeginReceived","::");
  pcVar7 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14645fcfa:
    pcVar6 = &DAT_00000002;
LAB_14645fcfd:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14645fcfa;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14645fcfd;
  }
  ::FName::FName(&local_50,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
  ::__Internal_AddDynamic<UPlayMontageCallbackProxy>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
              *)&this_00->OnPlayMontageNotifyBegin,this,(pmf_a9d9c37a)0x14645f120,local_50);
  pcVar5 = strstr("&UPlayMontageCallbackProxy::OnNotifyEndReceived","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 != (char *)0x0) && (pcVar7 = pcVar6 + 2, pcVar6[2] != '0')) goto LAB_14645fdd8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14645fdd8:
  ::FName::FName(&local_48,pcVar7);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
  ::__Internal_AddDynamic<UPlayMontageCallbackProxy>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
              *)&this_00->OnPlayMontageNotifyEnd,this,(pmf_a9d9c37a)0x14645f160,local_48);
  return true;
}

// StaticRegisterNativesUPlayMontageCallbackProxy @ 14646e7d0

void __cdecl UPlayMontageCallbackProxy::StaticRegisterNativesUPlayMontageCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UPlayMontageCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindDelegates @ 146470510

void __thiscall UPlayMontageCallbackProxy::UnbindDelegates(UPlayMontageCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->AnimInstancePtr).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  pcVar4 = strstr("&UPlayMontageCallbackProxy::OnNotifyBeginReceived","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14647059a:
    pcVar5 = &DAT_00000002;
LAB_14647059d:
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
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14647059a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14647059d;
  }
  ::FName::FName(&local_res8,pcVar5);
  if ((this == (UPlayMontageCallbackProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x500,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[0x19].field_0x10,
             (UObject *)this,local_res8);
  pcVar4 = strstr("&UPlayMontageCallbackProxy::OnNotifyEndReceived","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_146470698;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146470698:
  ::FName::FName(&local_res10,pcVar6);
  if ((this == (UPlayMontageCallbackProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x500,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 0x1a),(UObject *)this
             ,local_res10);
  return;
}

// execCreateProxyObjectForPlayMontage @ 146480bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UPlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  float fVar4;
  FName FVar5;
  UAnimMontage *pUVar6;
  USkeletalMeshComponent *this;
  UObject *pUVar7;
  UClass *pUVar8;
  UPlayMontageCallbackProxy *this_00;
  UAnimInstance *this_01;
  FAnimMontageInstance *pFVar9;
  char *pcVar10;
  longlong *plVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStackY_178 [32];
  int local_148;
  float local_144;
  float local_140 [2];
  FName local_138;
  UAnimMontage *local_130;
  USkeletalMeshComponent *local_128;
  undefined8 local_120;
  UAnimInstance *local_118;
  FName local_110;
  FName local_108;
  undefined8 local_100;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_128 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_130 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_140[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  local_144 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_144,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_144);
  }
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_148 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  this = local_128;
  pUVar6 = local_130;
  FVar5 = local_138;
  fVar4 = local_140[0];
  fVar15 = local_144;
  bVar14 = local_148 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar8);
  local_f8._8_8_ = pUVar7;
  this_00 = (UPlayMontageCallbackProxy *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar11 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_StrongRefOnFrame);
  if (((this == (USkeletalMeshComponent *)0x0) ||
      (this_01 = USkeletalMeshComponent::GetAnimInstance(this), this_01 == (UAnimInstance *)0x0)) ||
     (fVar15 = UAnimInstance::Montage_Play(this_01,pUVar6,fVar4,MontageLength,fVar15,bVar14),
     fVar15 <= 0.0)) {
    local_120 = 0;
    local_100 = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnInterrupted,
               &local_100);
    goto LAB_14648107d;
  }
  local_118 = this_01;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  FWeakObjectPtr::operator=(&(this_00->AnimInstancePtr).WeakPtr,(FObjectPtr)&local_118);
  pFVar9 = UAnimInstance::GetActiveInstanceForMontage(this_01,pUVar6);
  if (pFVar9 != (FAnimMontageInstance *)0x0) {
    this_00->MontageInstanceID = pFVar9->InstanceID;
  }
  if (FVar5 != (FName)0x0) {
    UAnimInstance::Montage_JumpToSection(this_01,FVar5,pUVar6);
  }
  TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  BindUObject<UPlayMontageCallbackProxy>
            ((TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             &this_00->BlendingOutDelegate,this_00,(pmf_a6a46e2e)0x14645f080);
  UAnimInstance::Montage_SetBlendingOutDelegate(this_01,&this_00->BlendingOutDelegate,pUVar6);
  TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  BindUObject<UPlayMontageCallbackProxy>
            ((TDelegateRegistration<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             &this_00->MontageEndedDelegate,this_00,(pmf_a6a46e2e)0x14645f0d0);
  UAnimInstance::Montage_SetEndDelegate(this_01,&this_00->MontageEndedDelegate,pUVar6);
  pcVar10 = strstr("&UPlayMontageCallbackProxy::OnNotifyBeginReceived","::");
  pcVar13 = &DAT_00000002;
  if (pcVar10 == (char *)0x0) {
LAB_146480f5a:
    pcVar12 = &DAT_00000002;
LAB_146480f5d:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result && Result[2] != \'0\'",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                        ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar10;
      pcVar10 = strstr(pcVar12 + 1,"::");
    } while (pcVar10 != (char *)0x0);
    if (pcVar12 == (char *)0x0) goto LAB_146480f5a;
    pcVar12 = pcVar12 + 2;
    if (*pcVar12 == '0') goto LAB_146480f5d;
  }
  ::FName::FName(&local_110,pcVar12);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
  ::__Internal_AddDynamic<UPlayMontageCallbackProxy>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
              *)&this_01->OnPlayMontageNotifyBegin,this_00,(pmf_a9d9c37a)0x14645f120,local_110);
  pcVar10 = strstr("&UPlayMontageCallbackProxy::OnNotifyEndReceived","::");
  if (pcVar10 == (char *)0x0) {
LAB_14648100a:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result && Result[2] != \'0\'",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                        ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar10;
      pcVar10 = strstr(pcVar12 + 1,"::");
    } while (pcVar10 != (char *)0x0);
    if ((pcVar12 == (char *)0x0) || (pcVar13 = pcVar12 + 2, pcVar12[2] == '0')) goto LAB_14648100a;
  }
  ::FName::FName(&local_108,pcVar13);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
  ::__Internal_AddDynamic<UPlayMontageCallbackProxy>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,FName,FBranchingPointNotifyPayload_const_&>
              *)&this_01->OnPlayMontageNotifyEnd,this_00,(pmf_a9d9c37a)0x14645f160,local_108);
LAB_14648107d:
  *(UPlayMontageCallbackProxy **)param_3 = this_00;
  return;
}

// execOnMontageBlendingOut @ 1464856d0

void __cdecl
UPlayMontageCallbackProxy::execOnMontageBlendingOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[2].field_0x8,
               local_18);
    *(uint *)&param_1[4].field_0xc = *(uint *)&param_1[4].field_0xc | 1;
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[1].field_0x18,local_18
            );
  return;
}

// execOnMontageEnded @ 1464857d0

void __cdecl
UPlayMontageCallbackProxy::execOnMontageEnded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *this;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    this = param_1 + 1;
  }
  else {
    if ((param_1[4].field_0xc & 1) != 0) goto LAB_1464858a8;
    this = (UObject *)&param_1[2].field_0x8;
  }
  local_18[0] = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_18);
LAB_1464858a8:
  UnbindDelegates((UPlayMontageCallbackProxy *)param_1);
  return;
}

// execOnNotifyBeginReceived @ 1464858d0

void __cdecl
UPlayMontageCallbackProxy::execOnNotifyBeginReceived(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  uchar local_38 [32];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = 0xff;
  local_38[0x19] = 0xff;
  local_38[0x1a] = 0xff;
  local_38[0x1b] = 0xff;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x1c] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar2 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)&param_1[4].field_0x8 != -1) &&
     (*(int *)(puVar2 + 0x18) == *(int *)&param_1[4].field_0x8)) {
    local_res10 = local_res8;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[2].field_0x20,
               &local_res10);
  }
  return;
}

// execOnNotifyEndReceived @ 1464859f0

void __cdecl
UPlayMontageCallbackProxy::execOnNotifyEndReceived(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  uchar local_38 [32];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = 0xff;
  local_38[0x19] = 0xff;
  local_38[0x1a] = 0xff;
  local_38[0x1b] = 0xff;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x1c] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar2 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)&param_1[4].field_0x8 != -1) &&
     (*(int *)(puVar2 + 0x18) == *(int *)&param_1[4].field_0x8)) {
    local_res10 = local_res8;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x10,
               &local_res10);
  }
  return;
}


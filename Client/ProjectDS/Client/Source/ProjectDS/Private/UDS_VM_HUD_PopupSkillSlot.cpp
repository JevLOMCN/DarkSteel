// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetAnimationFinishEvent_WrapperImpl @ 14b6754b0

void __cdecl
UDS_VM_HUD_PopupSkillSlot::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName aFStackX_10 [3];
  
  pFVar1 = ::FName::FName(aFStackX_10,"CloseAni");
  if (*(FName *)param_2 == *pFVar1) {
    UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
  }
  return;
}

// StaticClass @ 14b6754c0

UClass * __cdecl UDS_VM_HUD_PopupSkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupSkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupSkillSlot,0x450,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_PopupSkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupSkillSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton;
}

// UDS_VM_HUD_PopupSkillSlot @ 14b679f50

UDS_VM_HUD_PopupSkillSlot * __thiscall
UDS_VM_HUD_PopupSkillSlot::UDS_VM_HUD_PopupSkillSlot
          (UDS_VM_HUD_PopupSkillSlot *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillSlot__6B_;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->IsEmptyInfo = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsClosing = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_PopupSkillSlot @ 14b67a030

UDS_VM_HUD_PopupSkillSlot * __thiscall
UDS_VM_HUD_PopupSkillSlot::UDS_VM_HUD_PopupSkillSlot
          (UDS_VM_HUD_PopupSkillSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillSlot__6B_;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->IsEmptyInfo = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsClosing = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_PopupSkillSlot @ 14b67b750

void __thiscall
UDS_VM_HUD_PopupSkillSlot::~UDS_VM_HUD_PopupSkillSlot(UDS_VM_HUD_PopupSkillSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupSkillSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67df00

IClassDescriptor * __thiscall
UDS_VM_HUD_PopupSkillSlot::GetFieldNotificationDescriptor(UDS_VM_HUD_PopupSkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PopupSkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e9b0

UClass * __cdecl UDS_VM_HUD_PopupSkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupSkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupSkillSlot,0x450,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_PopupSkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupSkillSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupSkillSlot.InnerSingleton;
}

// GetTickableTickType @ 14b67f070

ETickableTickType __thiscall
UDS_VM_HUD_PopupSkillSlot::GetTickableTickType(UDS_VM_HUD_PopupSkillSlot *this)

{
  return Conditional;
}

// IsUpdate @ 14b67f0c0

bool __thiscall UDS_VM_HUD_PopupSkillSlot::IsUpdate(UDS_VM_HUD_PopupSkillSlot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_HUD_PopupSkillSlot @ 14b67f260

void __cdecl UDS_VM_HUD_PopupSkillSlot::StaticRegisterNativesUDS_VM_HUD_PopupSkillSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_PopupSkillSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUpdateSkillSlot @ 14b6807e0

void __cdecl
UDS_VM_HUD_PopupSkillSlot::execUpdateSkillSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateSkillSlot((UDS_VM_HUD_PopupSkillSlot *)param_1,local_res10);
  return;
}

// BindModel @ 14bf40960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupSkillSlot::BindModel(UDS_VM_HUD_PopupSkillSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_HUD_PopupSkillSlot *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FWeakObjectPtr local_d0;
  FName local_c8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_b8;
  FName *local_a8;
  FDestructionSentinel local_a0;
  undefined1 local_88 [56];
  FReadAccessScope local_50;
  
  UDS_VM_W_CommonSkillSlot::BindModel((UDS_VM_W_CommonSkillSlot *)this);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) goto LAB_14bf40bbf;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar4 = strstr("&UDS_VM_HUD_PopupSkillSlot::UpdateSkillSlot","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf40a0b:
    pcVar6 = &DAT_00000002;
LAB_14bf40a10:
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
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bf40a0b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bf40a10;
  }
  ::FName::FName(&local_res18,pcVar6);
  if ((this == (UDS_VM_HUD_PopupSkillSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_res10 = local_res18;
  if ((this == (UDS_VM_HUD_PopupSkillSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_HUD_PopupSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_res20);
  local_c8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_d8,(FReadAccessScope *)(local_88 + 0x20));
  if ((local_c8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_d0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
LAB_14bf40b3c:
    local_a8 = &local_res10;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
    __Internal_BindDynamic<UDS_VM_HUD_PopupSkillSlot>'::__l2::<lambda_1>::operator()(&local_a8);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14bf40b3c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_50);
  local_b8.Object = local_d0;
  local_b8.FunctionName = local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_a0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_b8);
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
LAB_14bf40bbf:
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    local_b8.FunctionName = (FName)((ulonglong)local_b8.FunctionName & 0xffffffff00000000);
    local_b8.Object = (FWeakObjectPtr)UDS_VM_W_CommonSkillSlot::OnChangedBuffList;
    local_88._16_8_ = UDS_VM_W_CommonSkillSlot::OnChangedBuffList;
    local_88._24_4_ = local_b8.FunctionName.ComparisonIndex.Value;
    local_88._28_4_ = local_b8.FunctionName.Number;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_PopupSkillSlot>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3[6].field_0x8,(UDS_VM_HUD_PopupSkillSlot *)local_88,(pmf_97ec5176 *)this);
  }
  return;
}

// InitViewModel @ 14bf5a760

void __thiscall UDS_VM_HUD_PopupSkillSlot::InitViewModel(UDS_VM_HUD_PopupSkillSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_Progress *pUVar4;
  atomic<int> *paVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 FVar7;
  FObjectPtr_u_0 local_res8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  FDS_ViewModelContext_InputKey *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_AvailableTime).field0_0x0.DebugPtr = pUVar4;
  }
  if (this->_padding_ == 0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if ((local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    pFVar2->KeyActionType = IA_PopupSkill;
    if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_18 = local_28.Object;
    pTStack_10 = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::CreateViewModel
              ((UObject *)&local_res8,(TSharedPtr<FDS_ViewModelContext,1> *)this);
    if (local_res8.Handle == (UObject *)0x0) {
      FVar7.Handle = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      FVar7.Handle = (UObject *)0x0;
      if (bVar3) {
        FVar7 = local_res8;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar7.Handle);
    }
    this->_padding_ = (longlong)FVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  this->IsEmptyInfo = false;
  return;
}

// OnAnimationFinished @ 14bf5eed0

void __thiscall
UDS_VM_HUD_PopupSkillSlot::OnAnimationFinished
          (UDS_VM_HUD_PopupSkillSlot *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"CloseAni");
  if (param_1->AnimationName == *pFVar1) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  return;
}

// OnClickSkillSlot @ 14bf627b0

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

void __thiscall UDS_VM_HUD_PopupSkillSlot::OnClickSkillSlot(UDS_VM_HUD_PopupSkillSlot *this)

{
  longlong *this_00;
  bool bVar1;
  UDS_DataBase *this_01;
  FDS_EntityBase *this_02;
  UObject *pUVar2;
  ulong64 local_res8;
  
  this_00 = &this->_padding_;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res8 = UDS_DataBase::GetEntityID(this_01);
    this_02 = FDS_EntityBase::GetEntityBase(&local_res8);
    if (this_02 != (FDS_EntityBase *)0x0) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      FDS_EntityBase::TryActivateSkillAbility(this_02,*(int *)&pUVar2[2].field_0x1c);
    }
  }
  return;
}

// OnCloseInit @ 14bf63300

void __thiscall UDS_VM_HUD_PopupSkillSlot::OnCloseInit(UDS_VM_HUD_PopupSkillSlot *this)

{
  UDS_VM_W_CommonSkillSlot::OnCloseInit((UDS_VM_W_CommonSkillSlot *)this);
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return;
}

// OnSetViewModel @ 14bf68ef0

void __thiscall
UDS_VM_HUD_PopupSkillSlot::OnSetViewModel
          (UDS_VM_HUD_PopupSkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_SkillTableRow *pFVar4;
  UObject *local_res10;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDS_Text local_68;
  
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_CommonSkillSlot::OnSetViewModel((UDS_VM_W_CommonSkillSlot *)this,&local_88);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillSlot>(&local_98,&local_78);
  if (local_98.Object != (FDS_ViewModelContext_SkillSlot *)0x0) {
    UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
    UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress_Color
              ((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
    UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,false);
    if (local_98.Object == (FDS_ViewModelContext_SkillSlot *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res10 = FWeakObjectPtr::Get(&((local_98.Object)->SkillData).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar2) {
      UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,true);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_VM_W_CommonSkillSlot::SetIcon
                ((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar3[5].field_0x8);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pFVar4 = FDS_SkillTableRow::GetRef((longlong)*(int *)&pUVar3[2].field_0x1c,true);
      local_68.StringTableType = None;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_68,&pFVar4->ID_Name);
      UDS_VM_W_CommonSkillSlot::SetSkillName((UDS_VM_W_CommonSkillSlot *)this,&local_68);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                 local_68.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
      }
      if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
      }
      this->IsEmptyInfo = false;
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
    else {
      this->IsEmptyInfo = true;
      UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,0);
      UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed)
      ;
      UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      UDS_VM_W_CommonSkillSlot::SetVis_UseSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      UDS_VM_W_CommonSkillSlot::SetVis_EndCoolDown((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      UDS_VM_W_CommonSkillSlot::SetVis_Silence((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf72080

void __thiscall UDS_VM_HUD_PopupSkillSlot::OnUpdate(UDS_VM_HUD_PopupSkillSlot *this,float param_1)

{
  UDS_VM_Progress *this_00;
  bool bVar1;
  UDS_SkillData *pUVar2;
  FName *pFVar3;
  float fVar4;
  FName local_res8;
  FName local_28;
  int local_20;
  
  if (this->IsEmptyInfo != true) {
    this_00 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_Progress *)0x0) {
      bVar1 = UDS_VM_Progress::GetIsUpdateCurrentValue(this_00);
      if (bVar1) {
        pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        fVar4 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar2);
        if (0.0 < fVar4) {
          UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress
                    ((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
        }
        else {
          UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress
                    ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
          fVar4 = UDS_VM_Progress::GetCurrentPercent((this->VM_AvailableTime).field0_0x0.DebugPtr);
          UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio
                    ((UDS_VM_W_CommonSkillSlot *)this,fVar4);
        }
      }
    }
    pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar4 = UDS_SkillData::GetRemainAvailableTime(pUVar2);
    if ((fVar4 <= 0.0) && (this->IsClosing == false)) {
      this->IsClosing = true;
      pFVar3 = ::FName::FName(&local_res8,"CloseAni");
      (this->AnimationEvent).AnimationName = *pFVar3;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_20 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    pUVar2 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_SkillData::CheckSkillCost(pUVar2);
    UDS_VM_W_CommonSkillSlot::SetWidgetEnabled((UDS_VM_W_CommonSkillSlot *)this,bVar1);
  }
  return;
}

// SetEmptyInfo @ 14bf7aa60

void __thiscall UDS_VM_HUD_PopupSkillSlot::SetEmptyInfo(UDS_VM_HUD_PopupSkillSlot *this,int param_1)

{
  this->IsEmptyInfo = true;
  UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,param_1);
  UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_UseSkill((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_EndCoolDown((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_Vigor((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  UDS_VM_W_CommonSkillSlot::SetVis_Silence((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  return;
}

// UnbindModel @ 14bf84bd0

void __thiscall UDS_VM_HUD_PopupSkillSlot::UnbindModel(UDS_VM_HUD_PopupSkillSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr FStackX_8;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
    FStackX_8 = (FWeakObjectPtr)this->_padding_;
    bVar1 = FWeakObjectPtr::IsValid(&FStackX_8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&FStackX_8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  return;
}

// UpdateAvailableTime @ 14bf862f0

void __thiscall
UDS_VM_HUD_PopupSkillSlot::UpdateAvailableTime
          (UDS_VM_HUD_PopupSkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  UDS_SkillData *pUVar3;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res10 [3];
  
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    local_res10[0] = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar2) {
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar5 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar3);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      if (0.0 < fVar5) {
        UDS_VM_Progress::SetCurrentValue(pUVar1,0.0);
        return;
      }
      UDS_VM_Progress::SetIncreaseType(pUVar1,DeltaTime);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      UDS_VM_Progress::SetMaxValue(pUVar1,*(float *)&pUVar4[5].field_0x20);
      UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
      pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      pUVar3 = (UDS_SkillData *)FWeakObjectPtr::Get(local_res10);
      fVar5 = UDS_SkillData::GetRemainAvailableTime(pUVar3);
      UDS_VM_Progress::SetCurrentValue(pUVar1,fVar5);
    }
  }
  return;
}

// UpdateSkillSlot @ 14bf89f70

void __thiscall
UDS_VM_HUD_PopupSkillSlot::UpdateSkillSlot(UDS_VM_HUD_PopupSkillSlot *this,UDS_DataBase *param_1)

{
  longlong *this_00;
  int iVar1;
  undefined4 uVar2;
  UDS_VM_Progress *pUVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UDS_SkillData *pUVar9;
  FName *pFVar10;
  UDS_DataBase *this_01;
  ulong64 uVar11;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar12;
  float fVar13;
  FWeakObjectPtr local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_38;
  int local_30;
  
  this_00 = &this->_padding_;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar4) goto LAB_14bf8a1f7;
  if (param_1 == (UDS_DataBase *)0x0) {
LAB_14bf89fc2:
    param_1._0_4_ = 0;
    param_1._4_4_ = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14bf89fc2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)param_1 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)param_1 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
  bVar4 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(local_res8);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (*(int *)&pUVar7[2].field_0x1c != *(int *)&pUVar8[2].field_0x1c) {
      return;
    }
    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    fVar13 = UDS_SkillData::GetRemainAvailableTime(pUVar9);
    if (0.0 < fVar13) {
      EVar5 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
      if (EVar5 == Collapsed) {
        pFVar10 = ::FName::FName(&local_res18,"OpenAni");
        (this->AnimationEvent).AnimationName = *pFVar10;
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        this->IsClosing = false;
      }
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
      local_res20 = (FName)*this_00;
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if (0 < *(int *)(pUVar7 + 5)) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        uVar2 = *(undefined4 *)(pUVar7 + 5);
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        uVar11 = UDS_DataBase::GetDataContainerKey(this_01);
        TVar12 = UDS_SkillData::GetData((ulong64)&local_res18,uVar11,SUB41(uVar2,0));
        local_res20 = *(FName *)TVar12.WeakPtr;
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res20);
      UDS_VM_W_CommonSkillSlot::SetIcon
                ((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar7[5].field_0x8);
      local_res18 = (FName)*this_00;
      if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
        return;
      }
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res18);
      if (!bVar4) {
        return;
      }
      pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
      fVar13 = UDS_SkillData::GetRemainWaitTimeUntilNextStep(pUVar9);
      pUVar3 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      if (fVar13 <= 0.0) {
        UDS_VM_Progress::SetIncreaseType(pUVar3,DeltaTime);
        pUVar3 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
        UDS_VM_Progress::SetMaxValue(pUVar3,*(float *)&pUVar7[5].field_0x20);
        UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
        pUVar3 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
        pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
        fVar13 = UDS_SkillData::GetRemainAvailableTime(pUVar9);
        UDS_VM_Progress::SetCurrentValue(pUVar3,fVar13);
        return;
      }
      UDS_VM_Progress::SetCurrentValue(pUVar3,0.0);
      return;
    }
  }
LAB_14bf8a1f7:
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}


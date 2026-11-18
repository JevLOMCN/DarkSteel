// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b6684d0

UClass * __cdecl UDS_VM_W_HUD_Completion_Alarm::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_Completion_Alarm",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_Completion_Alarm,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_HUD_Completion_Alarm>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_Completion_Alarm>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton;
}

// UDS_VM_W_HUD_Completion_Alarm @ 14b66e420

UDS_VM_W_HUD_Completion_Alarm * __thiscall
UDS_VM_W_HUD_Completion_Alarm::UDS_VM_W_HUD_Completion_Alarm
          (UDS_VM_W_HUD_Completion_Alarm *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Completion_Alarm__6B_;
  (this->Text_NameTitle).StringTableID = 0;
  (this->Text_NameTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_NameTitle).StringEnumTableNameID.Number = 0;
  (this->Text_NameTitle).DateTime.Ticks = 0;
  (this->Text_NameTitle).TimeSpan.Ticks = 0;
  (this->Text_NameTitle).TimeExpressionType = None;
  (this->Text_NameTitle).IsExpression = false;
  (this->Text_NameTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_NameTitle).UniqueString.Data.ArrayNum = 0;
  (this->Text_NameTitle).UniqueString.Data.ArrayMax = 0;
  (this->Text_NameTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_NameTitle).FormatArgs.ArrayNum = 0;
  (this->Text_NameTitle).FormatArgs.ArrayMax = 0;
  (this->Text_Info).StringTableType = None;
  (this->Text_Info).StringTableID = 0;
  (this->Text_Info).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Info).StringEnumTableNameID.Number = 0;
  (this->Text_Info).DateTime.Ticks = 0;
  (this->Text_Info).TimeSpan.Ticks = 0;
  (this->Text_Info).TimeExpressionType = None;
  (this->Text_Info).IsExpression = false;
  (this->Text_Info).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Info).UniqueString.Data.ArrayNum = 0;
  (this->Text_Info).UniqueString.Data.ArrayMax = 0;
  (this->Text_Info).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Info).FormatArgs.ArrayNum = 0;
  (this->Text_Info).FormatArgs.ArrayMax = 0;
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
  (this->Text_NameTitle).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_HUD_Completion_Alarm @ 14b66e540

UDS_VM_W_HUD_Completion_Alarm * __thiscall
UDS_VM_W_HUD_Completion_Alarm::UDS_VM_W_HUD_Completion_Alarm
          (UDS_VM_W_HUD_Completion_Alarm *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Completion_Alarm__6B_;
  (this->Text_NameTitle).StringTableID = 0;
  (this->Text_NameTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_NameTitle).StringEnumTableNameID.Number = 0;
  (this->Text_NameTitle).DateTime.Ticks = 0;
  (this->Text_NameTitle).TimeSpan.Ticks = 0;
  (this->Text_NameTitle).TimeExpressionType = None;
  (this->Text_NameTitle).IsExpression = false;
  (this->Text_NameTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_NameTitle).UniqueString.Data.ArrayNum = 0;
  (this->Text_NameTitle).UniqueString.Data.ArrayMax = 0;
  (this->Text_NameTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_NameTitle).FormatArgs.ArrayNum = 0;
  (this->Text_NameTitle).FormatArgs.ArrayMax = 0;
  (this->Text_Info).StringTableType = None;
  (this->Text_Info).StringTableID = 0;
  (this->Text_Info).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Info).StringEnumTableNameID.Number = 0;
  (this->Text_Info).DateTime.Ticks = 0;
  (this->Text_Info).TimeSpan.Ticks = 0;
  (this->Text_Info).TimeExpressionType = None;
  (this->Text_Info).IsExpression = false;
  (this->Text_Info).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Info).UniqueString.Data.ArrayNum = 0;
  (this->Text_Info).UniqueString.Data.ArrayMax = 0;
  (this->Text_Info).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Info).FormatArgs.ArrayNum = 0;
  (this->Text_Info).FormatArgs.ArrayMax = 0;
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
  (this->Text_NameTitle).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_HUD_Completion_Alarm @ 14b66f740

void __thiscall
UDS_VM_W_HUD_Completion_Alarm::~UDS_VM_W_HUD_Completion_Alarm(UDS_VM_W_HUD_Completion_Alarm *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUD_Completion_Alarm__6B_;
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
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Info).FormatArgs.AllocatorInstance.Data,
             (this->Text_Info).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_Info).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_Info).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_NameTitle).FormatArgs.AllocatorInstance.Data,
             (this->Text_NameTitle).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_NameTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_NameTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671c70

IClassDescriptor * __thiscall
UDS_VM_W_HUD_Completion_Alarm::GetFieldNotificationDescriptor(UDS_VM_W_HUD_Completion_Alarm *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_HUD_Completion_Alarm::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6729a0

UClass * __cdecl UDS_VM_W_HUD_Completion_Alarm::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUD_Completion_Alarm",
               &Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUD_Completion_Alarm,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_HUD_Completion_Alarm>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUD_Completion_Alarm>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUD_Completion_Alarm.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_HUD_Completion_Alarm @ 14b672c70

void __cdecl UDS_VM_W_HUD_Completion_Alarm::StaticRegisterNativesUDS_VM_W_HUD_Completion_Alarm(void)

{
  return;
}

// BindModel @ 14be78020

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_HUD_Completion_Alarm::BindModel(UDS_VM_W_HUD_Completion_Alarm *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// OnEndAnimFinish @ 14be97fc0

void __thiscall UDS_VM_W_HUD_Completion_Alarm::OnEndAnimFinish(UDS_VM_W_HUD_Completion_Alarm *this)

{
  UDS_GameInstance *this_00;
  UClass *pUVar1;
  UDS_ManagerBase *pUVar2;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar1 = Z_Construct_UClass_UDS_WindowManager_NoRegister();
  pUVar2 = UDS_GameInstance::GetManager(this_00,(FName)pUVar1->_padding_);
  if (pUVar2 != (UDS_ManagerBase *)0x0) {
    Z_Construct_UClass_UDS_WindowManager_NoRegister();
  }
  return;
}

// OnSetViewModel @ 14bea6700

void __thiscall
UDS_VM_W_HUD_Completion_Alarm::OnSetViewModel
          (UDS_VM_W_HUD_Completion_Alarm *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FName local_res8;
  FName local_38;
  int iStack_30;
  undefined4 uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  ::FName::FName(&local_res8,"Open_Ani");
  (this->AnimationEvent).AnimationName = local_res8;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_38 = (FName)OnStartAnimFinish;
  iStack_30 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_28);
  local_10 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_HUD_Completion_Alarm____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar2 + 4) = local_38;
    puVar2[5] = CONCAT44(uStack_2c,iStack_30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  iStack_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStartAnimFinish @ 14bea6890

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

void __thiscall
UDS_VM_W_HUD_Completion_Alarm::OnStartAnimFinish(UDS_VM_W_HUD_Completion_Alarm *this)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerUnifiedDelegate *pFVar5;
  undefined1 auStackY_d8 [32];
  FDelegateAllocation local_a8;
  UDS_VM_W_HUD_Completion_Alarm *local_98;
  FTimerHandle local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  FTimerUnifiedDelegate local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_90.Handle = 0;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_7c = local_70._4_4_;
  uStack_80 = 0;
  local_88 = OnStartAnimFinishDelay;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78 = 0;
  local_70 = &local_a8;
  local_a8.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_HUD_Completion_Alarm____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_HUD_Completion_Alarm *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_98 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_W_HUD_Completion_Alarm *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_98);
    puVar3[4] = local_88;
    puVar3[5] = CONCAT44(uStack_7c,uStack_80);
  }
  pFVar5 = FTimerUnifiedDelegate::FTimerUnifiedDelegate
                     (&local_68,
                      (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                      &local_a8);
  FTimerManager::InternalSetTimer(this_00,&local_90,pFVar5,__real_40000000,false,__real_bf800000);
  if (3 < local_68.VariantDelegate.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.VariantDelegate.TypeIndex])(&local_68);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  return;
}

// OnStartAnimFinishDelay @ 14bea6a80

void __thiscall
UDS_VM_W_HUD_Completion_Alarm::OnStartAnimFinishDelay(UDS_VM_W_HUD_Completion_Alarm *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FName local_res8;
  FName local_38;
  int iStack_30;
  undefined4 uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  ::FName::FName(&local_res8,"End_Ani");
  (this->AnimationEvent).AnimationName = local_res8;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_38 = (FName)OnEndAnimFinish;
  iStack_30 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_28);
  local_10 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_HUD_Completion_Alarm____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar1 + 4) = local_38;
    puVar1[5] = CONCAT44(uStack_2c,iStack_30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  iStack_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// UnbindModel @ 14bebcc20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_HUD_Completion_Alarm::UnbindModel(UDS_VM_W_HUD_Completion_Alarm *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b7557f0

UClass * __cdecl UDS_VM_W_SkillInfo_SkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SkillInfo_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SkillInfo_SkillSlot,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_SkillInfo_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SkillInfo_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton;
}

// UDS_VM_W_SkillInfo_SkillSlot @ 14b759990

UDS_VM_W_SkillInfo_SkillSlot * __thiscall
UDS_VM_W_SkillInfo_SkillSlot::UDS_VM_W_SkillInfo_SkillSlot
          (UDS_VM_W_SkillInfo_SkillSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillInfo_SkillSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->BtnEventField)._padding_ = '\0';
  (this->BtnEventField).bIsCustomSelected = false;
  (this->BtnEventField).bIsLacked = false;
  (this->BtnEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEventField).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  (this->AnimationEvent_Hover).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent_Hover).AnimationName.Number = 0;
  (this->AnimationEvent_Hover).AnimationPlayTime = 0.0;
  (this->AnimationEvent_Hover).AnimationEventType = None;
  (this->AnimationEvent_Hover).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent_Upgrade).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent_Upgrade).AnimationName.Number = 0;
  (this->AnimationEvent_Upgrade).AnimationPlayTime = 0.0;
  (this->AnimationEvent_Upgrade).AnimationEventType = None;
  (this->AnimationEvent_Upgrade).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent_Hover).NumberOfLoops = 1;
  (this->AnimationEvent_Upgrade).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_SkillInfo_SkillSlot @ 14b759ab0

UDS_VM_W_SkillInfo_SkillSlot * __thiscall
UDS_VM_W_SkillInfo_SkillSlot::UDS_VM_W_SkillInfo_SkillSlot
          (UDS_VM_W_SkillInfo_SkillSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillInfo_SkillSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->BtnEventField)._padding_ = '\0';
  (this->BtnEventField).bIsCustomSelected = false;
  (this->BtnEventField).bIsLacked = false;
  (this->BtnEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEventField).Delegate.field_0x10 = 0;
  (this->BtnHoveredEventField)._padding_ = '\0';
  (this->BtnHoveredEventField).bIsCustomSelected = false;
  (this->BtnHoveredEventField).bIsLacked = false;
  (this->BtnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnHoveredEventField).Delegate.field_0x10 = 0;
  (this->BtnUnHoveredEventField)._padding_ = '\0';
  (this->BtnUnHoveredEventField).bIsCustomSelected = false;
  (this->BtnUnHoveredEventField).bIsLacked = false;
  (this->BtnUnHoveredEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate = 0;
  *(undefined8 *)&(this->BtnUnHoveredEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnUnHoveredEventField).Delegate.field_0x10 = 0;
  (this->AnimationEvent_Hover).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent_Hover).AnimationName.Number = 0;
  (this->AnimationEvent_Hover).AnimationPlayTime = 0.0;
  (this->AnimationEvent_Hover).AnimationEventType = None;
  (this->AnimationEvent_Hover).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent_Upgrade).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent_Upgrade).AnimationName.Number = 0;
  (this->AnimationEvent_Upgrade).AnimationPlayTime = 0.0;
  (this->AnimationEvent_Upgrade).AnimationEventType = None;
  (this->AnimationEvent_Upgrade).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent_Hover).NumberOfLoops = 1;
  (this->AnimationEvent_Upgrade).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_SkillInfo_SkillSlot @ 14b75b8e0

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::~UDS_VM_W_SkillInfo_SkillSlot(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillInfo_SkillSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Upgrade).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent_Upgrade).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Upgrade).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationEvent_Upgrade).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Hover).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent_Hover).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent_Hover).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Hover).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent_Hover).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnUnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnUnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnUnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnHoveredEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnHoveredEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnHoveredEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEventField).Delegate);
  pvVar1 = *(void **)&(this->BtnEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dcf0

IClassDescriptor * __thiscall
UDS_VM_W_SkillInfo_SkillSlot::GetFieldNotificationDescriptor(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e5b0

UClass * __cdecl UDS_VM_W_SkillInfo_SkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SkillInfo_SkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SkillInfo_SkillSlot,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_SkillInfo_SkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SkillInfo_SkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SkillInfo_SkillSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_SkillInfo_SkillSlot @ 14b75ef90

void __cdecl UDS_VM_W_SkillInfo_SkillSlot::StaticRegisterNativesUDS_VM_W_SkillInfo_SkillSlot(void)

{
  return;
}

// Create @ 14bf44d80

UDS_VM_W_SkillInfo_SkillSlot * __cdecl
UDS_VM_W_SkillInfo_SkillSlot::Create
          (UObject *param_1,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_2,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FObjectPtr_u_0 FVar3;
  FObjectPtr_u_0 FVar4;
  UDS_VM_W_SkillInfo_SkillSlot *pUVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  UClass *pUVar7;
  FObjectPtr_u_0 FVar8;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 local_res10;
  FObjectPtr_u_0 local_28;
  FObjectPtr_u_0 local_20;
  
  FVar3.Handle = ::operator_new(0x40);
  FVar8.Handle = (UObject *)0x0;
  FVar9.Handle = FVar8.Handle;
  if ((UDS_VM_W_SkillInfo_SkillSlot *)FVar3.Handle != (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
    *(longlong *)&(FVar3.Handle)->field_0x18 = 0;
    *(undefined4 *)&FVar3.Handle[1].field_0x14 = 0;
    *(longlong *)&(FVar3.Handle)->field_0x8 = 0;
    *(longlong *)&(FVar3.Handle)->field_0x10 = 0;
    *(undefined ***)FVar3.Handle = &___7FDS_ViewModelContext_SkillInfo_SkillSlot__6B_;
    *(longlong *)&(FVar3.Handle)->field_0x20 = 0;
    *(longlong *)(FVar3.Handle + 1) = 0;
    *(longlong *)&FVar3.Handle[1].field_0x8 = 0;
    *(undefined4 *)&FVar3.Handle[1].field_0x10 = 0;
    FVar9.Handle = FVar3.Handle;
  }
  FVar4.Handle = ::operator_new(0x20);
  FVar3.Handle = FVar8.Handle;
  if ((UDS_VM_W_SkillInfo_SkillSlot *)FVar4.Handle != (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
    *(undefined4 *)&(FVar4.Handle)->field_0x8 = 1;
    *(code **)&(FVar4.Handle)->field_0x10 = ViewModelContextDeleter;
    *(undefined ***)FVar4.Handle =
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillInfo_SkillSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&(FVar4.Handle)->field_0xc = 1;
    *(FObjectPtr_u_0 *)&(FVar4.Handle)->field_0x18 = (UObject *)FVar9;
    FVar3.Handle = FVar4.Handle;
  }
  if (((UDS_VM_W_SkillInfo_SkillSlot *)FVar9.Handle == (UDS_VM_W_SkillInfo_SkillSlot *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UDS_VM_W_SkillInfo_SkillSlot *)(*pcVar1)();
    return pUVar5;
  }
  pUVar6 = FDS_ViewModelContext_SkillInfo_SkillSlot::StaticStruct();
  *(UScriptStruct **)&(FVar9.Handle)->field_0x8 = pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    if ((UDS_VM_W_SkillInfo_SkillSlot *)FVar3.Handle != (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
      LOCK();
      *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
      UNLOCK();
    }
    local_28 = FVar9;
    local_20 = FVar3;
    UDS_ViewModelContextManager::RegisterContext
              (this,(TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20.Handle);
  }
  *(undefined4 *)&(FVar9.Handle)->field_0x18 = 0xc1;
  *(FWeakObjectPtr *)&(FVar9.Handle)->field_0x20 = param_2.WeakPtr;
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(FVar9.Handle + 1),
             param_3);
  if ((UDS_VM_W_SkillInfo_SkillSlot *)FVar3.Handle != (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
    LOCK();
    *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
    UNLOCK();
    LOCK();
    *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
    UNLOCK();
  }
  DS_ViewModelTemplateUtil::CreateViewModel
            ((UObject *)&local_res10,(TSharedPtr<FDS_ViewModelContext,1> *)param_1);
  if ((UDS_VM_W_SkillInfo_SkillSlot *)local_res10.Handle != (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_VM_W_SkillInfo_SkillSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
    if (bVar2) {
      FVar8 = local_res10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar3.Handle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar3.Handle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return (UDS_VM_W_SkillInfo_SkillSlot *)FVar8.Handle;
}

// GetSkillID @ 14bf57f30

int __thiscall UDS_VM_W_SkillInfo_SkillSlot::GetSkillID(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  UDS_VM_SkillData *pUVar1;
  
  pUVar1 = (this->VM_SkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_VM_SkillData *)0x0) {
    return 0;
  }
  return pUVar1->SkillID;
}

// OnHoverAnimationFinish @ 14bf63f10

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::OnHoverAnimationFinish(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  return;
}

// OnHovered @ 14bf63fb0

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::OnHovered(UDS_VM_W_SkillInfo_SkillSlot *this,UObject *param_1)

{
  UDS_SkillData *pUVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName local_res8;
  UDS_SkillData *local_res18 [2];
  FName local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pFVar4 = ::FName::FName(&local_res8,"Ani_Hover");
  iStack_50 = 0;
  local_58 = (FName)OnHoverAnimationFinish;
  (this->AnimationEvent_Hover).AnimationName = *pFVar4;
  (this->AnimationEvent_Hover).AnimationEventType = PlayForward;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Hover).Delegate_AnimationFinish,(FWriteAccessScope *)&local_48);
  local_30 = &(this->AnimationEvent_Hover).Delegate_AnimationFinish.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_SkillInfo_SkillSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar5 + 4) = local_58;
    puVar5[5] = CONCAT44(uStack_4c,iStack_50);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  iStack_50 = FFieldNotificationClassDescriptor::AnimationEvent_Hover.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::AnimationEvent_Hover.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  iVar3 = FFieldNotificationClassDescriptor::IsHovered.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsHovered.FieldName;
  if (this->IsHovered != true) {
    this->IsHovered = true;
    iStack_50 = iVar3;
    local_58 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  pUVar1 = (((this->VM_SkillData).field0_0x0.DebugPtr)->SkillData).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)local_res18);
  UDS_VM_W_SkillDetailPopup::OpenPopup
            (param_1,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res8);
  return;
}

// OnSetViewModel @ 14bf6ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::OnSetViewModel
          (UDS_VM_W_SkillInfo_SkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_VM_SkillData *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_248 [32];
  UDS_VM_W_SkillInfo_SkillSlot *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  UDS_VM_W_SkillInfo_SkillSlot *local_1f8 [2];
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  code *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TSharedPtr<FDS_ViewModelContext_SkillInfo_SkillSlot,1> local_1b8;
  FDestructionSentinel local_1a8;
  undefined1 *local_190;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_208.Object = param_1->Object;
  local_208.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillInfo_SkillSlot>(&local_1b8,&local_208);
  if (local_1b8.Object == (FDS_ViewModelContext_SkillInfo_SkillSlot *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3483743407958917148>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillInfo_SkillSlot.cpp"
                       ,0x1c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_W_SkillInfo_SkillSlot::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_168.Ptr,0x1d,
                 L"UDS_VM_SkillData::SetViewModel() skillDataContext is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    pUVar4 = UDS_VM_SkillData::Create
                       ((UObject *)this,
                        (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)
                        ((local_1b8.Object)->SkillData).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_SkillData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_SkillData).field0_0x0.DebugPtr = pUVar4;
    local_1e0 = FFieldNotificationClassDescriptor::VM_SkillData.BitNumber;
    local_1e8 = FFieldNotificationClassDescriptor::VM_SkillData.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->BtnEventField).Delegate,&(local_1b8.Object)->BtnDelegate);
    local_1d0 = FFieldNotificationClassDescriptor::BtnEventField.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::BtnEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    local_218 = (UDS_VM_W_SkillInfo_SkillSlot *)OnHovered;
    uStack_20c = local_208.SharedReferenceCount.ReferenceController._4_4_;
    uStack_210 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnHoveredEventField).Delegate,(FWriteAccessScope *)&local_1a8);
    local_190 = &(this->BtnHoveredEventField).Delegate.field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_190);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_SkillInfo_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_1f8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_1f8);
      puVar5[4] = local_218;
      puVar5[5] = CONCAT44(uStack_20c,uStack_210);
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    uStack_1c0 = 0;
    local_1c8 = OnUnHovered;
    uStack_1bc = local_208.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->BtnUnHoveredEventField).Delegate,(FWriteAccessScope *)&local_188);
    local_170 = &(this->BtnUnHoveredEventField).Delegate.field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_170);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_SkillInfo_SkillSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_218 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_218);
      puVar5[4] = local_1c8;
      puVar5[5] = CONCAT44(uStack_1bc,uStack_1c0);
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnHovered @ 14bf71c40

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::OnUnHovered(UDS_VM_W_SkillInfo_SkillSlot *this,UObject *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsHovered.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsHovered.FieldName;
  if (this->IsHovered != false) {
    this->IsHovered = false;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UDS_VM_W_SkillDetailPopup::ClosePopup();
  return;
}

// OnUpgrade @ 14bf728a0

void __thiscall UDS_VM_W_SkillInfo_SkillSlot::OnUpgrade(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FName local_res8;
  FName local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  iVar2 = FFieldNotificationClassDescriptor::IsUpgradeAnimation.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsUpgradeAnimation.FieldName;
  if (this->IsUpgradeAnimation != true) {
    this->IsUpgradeAnimation = true;
    iStack_40 = iVar2;
    local_48 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  pFVar3 = ::FName::FName(&local_res8,"Ani_Upgrade");
  iStack_40 = 0;
  local_48 = (FName)OnUpgradeAnimationFinish;
  (this->AnimationEvent_Upgrade).AnimationName = *pFVar3;
  (this->AnimationEvent_Upgrade).AnimationEventType = PlayForward;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent_Upgrade).Delegate_AnimationFinish,(FWriteAccessScope *)&local_38
            );
  local_20 = &(this->AnimationEvent_Upgrade).Delegate_AnimationFinish.field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_SkillInfo_SkillSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar4 + 4) = local_48;
    puVar4[5] = CONCAT44(uStack_3c,iStack_40);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  iStack_40 = FFieldNotificationClassDescriptor::AnimationEvent_Upgrade.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::AnimationEvent_Upgrade.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// OnUpgradeAnimationFinish @ 14bf72a40

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::OnUpgradeAnimationFinish(UDS_VM_W_SkillInfo_SkillSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsUpgradeAnimation.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsUpgradeAnimation.FieldName;
  if (this->IsUpgradeAnimation != false) {
    this->IsUpgradeAnimation = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetClickDelegate @ 14bf79a40

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::SetClickDelegate
          (UDS_VM_W_SkillInfo_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetHoveredDelegate @ 14bf7b110

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::SetHoveredDelegate
          (UDS_VM_W_SkillInfo_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnHoveredEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnHoveredEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnHoveredEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetSkillData @ 14bf7d620

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::SetSkillData
          (UDS_VM_W_SkillInfo_SkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_SkillData *pUVar1;
  UDS_VM_SkillData *this_00;
  FName FVar2;
  int iVar3;
  UDS_SkillData *pUVar4;
  bool bVar5;
  FWeakObjectPtr FStackX_10;
  FName FStack_18;
  int iStack_10;
  
  iVar3 = UDS_VM_SkillData::FFieldNotificationClassDescriptor::SkillData.BitNumber;
  FVar2 = UDS_VM_SkillData::FFieldNotificationClassDescriptor::SkillData.FieldName;
  this_00 = (this->VM_SkillData).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_SkillData *)0x0) {
    return;
  }
  FStackX_10 = param_1.WeakPtr;
  pUVar4 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStackX_10);
  pUVar1 = (this_00->SkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_SkillData *)0x0) {
    bVar5 = pUVar4 == (UDS_SkillData *)0x0;
  }
  else {
    bVar5 = pUVar1 == pUVar4;
  }
  if (!bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this_00->SkillData).field0_0x0.DebugPtr = pUVar4;
    FStack_18 = FVar2;
    iStack_10 = iVar3;
    (**(code **)(this_00->_padding_ + 0x38))(&this_00->_padding_,&FStack_18);
  }
  UDS_VM_SkillData::OnDirtySkillData
            (this_00,(UDS_DataBase *)(this_00->SkillData).field0_0x0.DebugPtr);
  return;
}

// SetUnHoveredDelegate @ 14bf7ef70

void __thiscall
UDS_VM_W_SkillInfo_SkillSlot::SetUnHoveredDelegate
          (UDS_VM_W_SkillInfo_SkillSlot *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FName local_18;
  int local_10;
  
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BtnUnHoveredEventField).Delegate,param_1);
  local_10 = FFieldNotificationClassDescriptor::BtnUnHoveredEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BtnUnHoveredEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 91

// GetVisibility_WrapperImpl @ 14b5d3440

void __cdecl UDS_ViewModelBase::GetVisibility_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = GetVisibility(param_1);
  *(ESlateVisibility *)param_2 = EVar1;
  return;
}

// SetVisibility_WrapperImpl @ 14b5d3460

void __cdecl UDS_ViewModelBase::SetVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b5d3470

UClass * __cdecl UDS_ViewModelBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewModelBase",
               &Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton,
               StaticRegisterNativesUDS_ViewModelBase,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewModelBase>,
               InternalVTableHelperCtorCaller<UDS_ViewModelBase>,local_res8,
               UMVVMViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton;
}

// UDS_ViewModelBase @ 14b5d94d0

UDS_ViewModelBase * __thiscall
UDS_ViewModelBase::UDS_ViewModelBase(UDS_ViewModelBase *this,FVTableHelper *param_1)

{
  UMVVMViewModelBase::UMVVMViewModelBase((UMVVMViewModelBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->Visibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ViewModelContext).Object = (FDS_ViewModelContext *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ViewModelContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UDS_ViewModelBase__6B_;
  ::FName::FName(&this->VMName,"");
  this->bIsCloseInit = false;
  (this->TextPropertyIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextPropertyIDList).ArrayNum = 0;
  (this->TextPropertyIDList).ArrayMax = 0;
  return this;
}

// UDS_ViewModelBase @ 14b5d9560

UDS_ViewModelBase * __thiscall
UDS_ViewModelBase::UDS_ViewModelBase(UDS_ViewModelBase *this,FObjectInitializer *param_1)

{
  UMVVMViewModelBase::UMVVMViewModelBase((UMVVMViewModelBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->Visibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ViewModelContext).Object = (FDS_ViewModelContext *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ViewModelContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UDS_ViewModelBase__6B_;
  ::FName::FName(&this->VMName,"");
  this->bIsCloseInit = false;
  (this->TextPropertyIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextPropertyIDList).ArrayNum = 0;
  (this->TextPropertyIDList).ArrayMax = 0;
  return this;
}

// ~UDS_ViewModelBase @ 14b5da490

void __thiscall UDS_ViewModelBase::~UDS_ViewModelBase(UDS_ViewModelBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_ViewModelBase__6B_;
  pFVar1 = (this->TextPropertyIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModelContext).SharedReferenceCount.ReferenceController);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UMVVMViewModelBase::~UMVVMViewModelBase((UMVVMViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b5db3d0

IClassDescriptor * __thiscall
UDS_ViewModelBase::GetFieldNotificationDescriptor(UDS_ViewModelBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_ViewModelBase::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b5db7f0

UClass * __cdecl UDS_ViewModelBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewModelBase",
               &Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton,
               StaticRegisterNativesUDS_ViewModelBase,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewModelBase>,
               InternalVTableHelperCtorCaller<UDS_ViewModelBase>,local_res8,
               UMVVMViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewModelBase.InnerSingleton;
}

// GetTickableTickType @ 14b5dbc50

ETickableTickType __thiscall UDS_ViewModelBase::GetTickableTickType(UDS_ViewModelBase *this)

{
  return Never;
}

// InitViewModel @ 14b5dbc60

void __thiscall UDS_ViewModelBase::InitViewModel(UDS_ViewModelBase *this)

{
  return;
}

// InitViewModelCDO @ 14b5dbc70

void __thiscall UDS_ViewModelBase::InitViewModelCDO(UDS_ViewModelBase *this)

{
  return;
}

// IsUpdate @ 14b5dbc80

bool __thiscall UDS_ViewModelBase::IsUpdate(UDS_ViewModelBase *this)

{
  return true;
}

// OnPostSetViewModel @ 14b5dbc90

void __thiscall
UDS_ViewModelBase::OnPostSetViewModel
          (UDS_ViewModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnPreSetViewModel @ 14b5dbca0

void __thiscall
UDS_ViewModelBase::OnPreSetViewModel
          (UDS_ViewModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSetViewModel @ 14b5dbcb0

void __thiscall
UDS_ViewModelBase::OnSetViewModel
          (UDS_ViewModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14b5dbcc0

void __thiscall UDS_ViewModelBase::OnUpdate(UDS_ViewModelBase *this,float param_1)

{
  return;
}

// ShouldSaveViewModelContext @ 14b5dbd10

bool __thiscall UDS_ViewModelBase::ShouldSaveViewModelContext(UDS_ViewModelBase *this)

{
  return false;
}

// ShouldUseUpdateWhenCollapsed @ 14b5dbd20

bool __thiscall UDS_ViewModelBase::ShouldUseUpdateWhenCollapsed(UDS_ViewModelBase *this)

{
  return false;
}

// StaticRegisterNativesUDS_ViewModelBase @ 14b5dbdb0

void __cdecl UDS_ViewModelBase::StaticRegisterNativesUDS_ViewModelBase(void)

{
  return;
}

// CreateViewModel<UDS_VM_BreachExpectedReward> @ 14bd37e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_BreachExpectedReward * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_BreachExpectedReward>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_BreachExpectedReward *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_BreachExpectedReward_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_BreachExpectedReward_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_BreachExpectedReward *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_BreachExpectedReward *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Chat_InputFocus> @ 14bd37f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Chat_InputFocus * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_Chat_InputFocus>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Chat_InputFocus *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Chat_InputFocus_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Chat_InputFocus_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Chat_InputFocus *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Chat_InputFocus *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_InputKey> @ 14bd38050

UDS_VM_InputKey * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>
          (UObject *param_1,TSharedPtr<FDS_ViewModelContext,1> *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 FVar5;
  FObjectPtr_u_0 local_res10 [3];
  
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar2->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  DS_ViewModelTemplateUtil::CreateViewModel
            ((UObject *)local_res10,(TSharedPtr<FDS_ViewModelContext,1> *)param_1);
  if ((UDS_VM_InputKey *)local_res10[0].Handle != (UDS_VM_InputKey *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)local_res10,pUVar4);
    FVar5.Handle = (UObject *)0x0;
    if (bVar3) {
      FVar5 = local_res10[0];
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return (UDS_VM_InputKey *)FVar5.Handle;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (UDS_VM_InputKey *)0x0;
}

// CreateViewModel<UDS_VM_TicketDisplay> @ 14bd380e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TicketDisplay * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_TicketDisplay>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_TicketDisplay *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_TicketDisplay_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_TicketDisplay_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_TicketDisplay *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_TicketDisplay *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_Common_Condition> @ 14bd381f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_Common_Condition * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Common_Condition>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_Common_Condition *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_Common_Condition_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_Common_Condition_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_Common_Condition *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_Common_Condition *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_CommonIconTextButton> @ 14bd9d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CommonIconTextButton * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_CommonIconTextButton *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_CommonIconTextButton> @ 14bd9d800

UDS_VM_CommonIconTextButton * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
          (UObject *param_1,TSharedPtr<FDS_ViewModelContext,1> *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 FVar5;
  FObjectPtr_u_0 local_res10 [3];
  
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar2->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  DS_ViewModelTemplateUtil::CreateViewModel
            ((UObject *)local_res10,(TSharedPtr<FDS_ViewModelContext,1> *)param_1);
  if ((UDS_VM_CommonIconTextButton *)local_res10[0].Handle != (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_VM_CommonIconTextButton_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)local_res10,pUVar4);
    FVar5.Handle = (UObject *)0x0;
    if (bVar3) {
      FVar5 = local_res10[0];
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return (UDS_VM_CommonIconTextButton *)FVar5.Handle;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (UDS_VM_CommonIconTextButton *)0x0;
}

// CreateViewModel<UDS_VM_InputKey> @ 14bd9d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_InputKey * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_InputKey *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_InputKey *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_InputKey *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_MoneyDisplay> @ 14bd9d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MoneyDisplay * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MoneyDisplay *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_MoneyDisplay_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_MoneyDisplay_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_MoneyDisplay *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_MoneyDisplay *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Progress> @ 14bd9dab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Progress * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Progress *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Progress_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Progress_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Progress *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Progress *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_StatusUpgradeInfo> @ 14bd9dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_StatusUpgradeInfo * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_W_StatusUpgradeInfo>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_StatusUpgradeInfo *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_StatusUpgradeInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_StatusUpgradeInfo *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// BeginDestroy @ 14bdaee50

void __thiscall UDS_ViewModelBase::BeginDestroy(UDS_ViewModelBase *this)

{
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BindModel @ 14bdb1c50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_ViewModelBase::BindModel(UDS_ViewModelBase *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (this->TextPropertyIDList).ArrayNum) &&
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

// CollectTextFieldID @ 14bdb3750

void __thiscall UDS_ViewModelBase::CollectTextFieldID(UDS_ViewModelBase *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FField *pFVar3;
  UFunction *this_00;
  int iVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  FProperty *pFVar7;
  UScriptStruct *pUVar8;
  bool bVar9;
  FName local_res8;
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  FName local_60;
  code *local_58;
  code **local_50;
  TFieldIterator<FStructProperty> local_48;
  
  puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  local_48.Struct = (UStruct *)this->_padding_;
  if (local_48.Struct == (UStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (local_48.Struct)->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FStructProperty>::IterateToNext(&local_48);
  pFVar3 = local_48.Field;
  while (pFVar3 != (FField *)0x0) {
    if (pFVar3[2].Owner.Container.Field != (FField *)0x0) {
      local_48.Field = pFVar3;
      pUVar6 = FDS_Text::StaticStruct();
      pUVar8 = (UScriptStruct *)pFVar3[2].Owner.Container.Field;
      if (pUVar8 == (UScriptStruct *)0x0) {
        bVar9 = pUVar6 == (UScriptStruct *)0x0;
      }
      else {
        bVar9 = pUVar8 == pUVar6;
      }
      if (!bVar9) {
        pUVar6 = FDS_TextIcon::StaticStruct();
        pUVar8 = (UScriptStruct *)pFVar3[2].Owner.Container.Field;
        if (pUVar8 == (UScriptStruct *)0x0) {
          bVar9 = pUVar6 == (UScriptStruct *)0x0;
        }
        else {
          bVar9 = pUVar8 == pUVar6;
        }
        if (!bVar9) goto LAB_14bdb38b1;
      }
      bVar9 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar9) {
        local_res8 = pFVar3->NamePrivate;
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
      local_68 = (code *)&local_78;
      local_50 = &local_68;
      local_78 = 0;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                 ::Call;
      local_60 = local_res8;
      (**(code **)*puVar5)(puVar5,this->_padding_,&local_58);
      if (local_78 != 0) {
        iVar4 = (this->TextPropertyIDList).ArrayNum;
        piVar1 = &(this->TextPropertyIDList).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(this->TextPropertyIDList).AllocatorInstance,piVar1);
        }
        (this->TextPropertyIDList).ArrayNum = iVar4 + 1;
        pFVar2 = (this->TextPropertyIDList).AllocatorInstance.Data;
        *(longlong *)(pFVar2 + (longlong)iVar4 * 0xc) = local_78;
        *(undefined4 *)(pFVar2 + (longlong)iVar4 * 0xc + 8) = local_70;
      }
    }
LAB_14bdb38b1:
    local_48.Field = pFVar3->Next;
    TFieldIterator<FStructProperty>::IterateToNext(&local_48);
    pFVar3 = local_48.Field;
  }
  local_48.Struct = (UStruct *)this->_padding_;
  if (local_48.Struct == (UStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (FField *)((local_48.Struct)->Children).field0_0x0.DebugPtr;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_48);
  this_00 = (UFunction *)local_48.Field;
  do {
    if (this_00 == (UFunction *)0x0) {
      return;
    }
    local_48.Field = (FField *)this_00;
    pFVar7 = UFunction::GetReturnProperty(this_00);
    if (((pFVar7 != (FProperty *)0x0) && ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x14 & 1) != 0))
       && (pFVar7[1]._padding_ != 0)) {
      pUVar8 = FDS_Text::StaticStruct();
      if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
        bVar9 = pUVar8 == (UScriptStruct *)0x0;
      }
      else {
        bVar9 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar8;
      }
      if (!bVar9) {
        pUVar8 = FDS_TextIcon::StaticStruct();
        if ((UScriptStruct *)pFVar7[1]._padding_ == (UScriptStruct *)0x0) {
          bVar9 = pUVar8 == (UScriptStruct *)0x0;
        }
        else {
          bVar9 = (UScriptStruct *)pFVar7[1]._padding_ == pUVar8;
        }
        if (!bVar9) goto LAB_14bdb3a04;
      }
      local_58 = (code *)&local_78;
      local_50 = (code **)this_00->_padding_;
      local_60 = (FName)&local_58;
      local_78 = 0;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                 ::Call;
      (**(code **)*puVar5)(puVar5,this->_padding_,&local_68);
      if (local_78 != 0) {
        iVar4 = (this->TextPropertyIDList).ArrayNum;
        piVar1 = &(this->TextPropertyIDList).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(this->TextPropertyIDList).AllocatorInstance,piVar1);
        }
        (this->TextPropertyIDList).ArrayNum = iVar4 + 1;
        pFVar2 = (this->TextPropertyIDList).AllocatorInstance.Data;
        *(longlong *)(pFVar2 + (longlong)iVar4 * 0xc) = local_78;
        *(undefined4 *)(pFVar2 + (longlong)iVar4 * 0xc + 8) = local_70;
      }
    }
LAB_14bdb3a04:
    local_48.Field = (FField *)this_00->_padding_;
    TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_48);
    this_00 = (UFunction *)local_48.Field;
  } while( true );
}

// GetOrAddGlobalViewModel @ 14bdc3990

TObjectPtr<UDS_ViewModelBase> __cdecl
UDS_ViewModelBase::GetOrAddGlobalViewModel
          (TSubclassOf<UDS_ViewModelBase> param_1,FMVVMViewModelContext *param_2)

{
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  undefined8 uVar4;
  bool bVar5;
  UDS_GameInstance *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  USubsystem *pUVar9;
  UClass *pUVar10;
  undefined8 *in_R8;
  TObjectPtr<UClass>_u_0 local_48;
  undefined8 local_40;
  TObjectPtr<UClass>_u_0 local_38;
  undefined8 local_30;
  
  pUVar10 = (UClass *)0x0;
  pUVar6 = UDS_GameInstance::GetInst();
  if (pUVar6 == (UDS_GameInstance *)0x0) goto LAB_14bdc3bb5;
  pUVar7 = Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_14bdc39fd;
LAB_14bdc3a2b:
    pUVar7 = pUVar10;
  }
  else {
    if (pUVar7 == (UClass *)0x0) goto LAB_14bdc3a2b;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14bdc39fd:
    pUVar8 = Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();
    if (pUVar8 == (UClass *)0x0) goto LAB_14bdc3a2b;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14bdc3a2b;
  }
  pUVar9 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar6->_padding_,pUVar7);
  pUVar2 = (UObject *)pUVar9[1]._padding_;
  if (pUVar2 != (UObject *)0x0) {
    TVar3.DebugPtr = (UClass *)*in_R8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    uVar4 = in_R8[1];
    local_48.DebugPtr = TVar3.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    local_40 = uVar4;
    pUVar7 = (UClass *)
             FMVVMViewModelCollection::FindViewModelInstance
                       ((FMVVMViewModelCollection *)(pUVar2 + 1),
                        (FMVVMViewModelContext *)&local_48.ObjectPtr);
    if (pUVar7 == (UClass *)0x0) {
      pUVar7 = (param_2->ContextClass).Class.field0_0x0.DebugPtr;
      if ((pUVar7 != (UClass *)0x0) &&
         (pUVar8 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar10 = (param_2->ContextClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar10 = (UClass *)
                NewObject<UDS_ViewModelBase>
                          (pUVar2,pUVar10,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_38.DebugPtr = (UClass *)*in_R8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
      }
      uVar4 = in_R8[1];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
      }
      local_30 = uVar4;
      FMVVMViewModelCollection::AddInstance
                ((FMVVMViewModelCollection *)(pUVar2 + 1),
                 (FMVVMViewModelContext *)&local_38.ObjectPtr,(UMVVMViewModelBase *)0x0);
    }
    else {
      pUVar8 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        pUVar10 = pUVar7;
      }
    }
  }
LAB_14bdc3bb5:
  *(UClass **)param_1.Class.field0_0x0 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  return (TObjectPtr<UDS_ViewModelBase>)(TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
}

// GetOuterUniqueID @ 14bdc3bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UDS_ViewModelBase::GetOuterUniqueID(UDS_ViewModelBase *this)

{
  longlong lVar1;
  uint uVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ViewModelBase::GetOuterUniqueID",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x50,L"Outer is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    uVar2 = *(uint *)(lVar1 + 0xc);
  }
  return uVar2;
}

// GetStatId @ 14bdc42c0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UDS_ViewModelBase::GetStatId(UDS_ViewModelBase *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_ViewModelBase::GetStatId(void)const_::_2_::FStat_DS_ViewModel>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_DS_ViewModel ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_ViewModelBase::GetStatId(void)const_::_2_::FStat_DS_ViewModel>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"DS_ViewModel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_DS_ViewModel,*pFVar1,L"DS_ViewModel",
                   "STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"DS_ViewModel",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_DS_ViewModel;
  if (StatPtr_DS_ViewModel ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_ViewModelBase::GetStatId(void)const_::_2_::FStat_DS_ViewModel>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"DS_ViewModel");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_ViewModelBase::GetStatId(void)const_::_2_::FStat_DS_ViewModel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_DS_ViewModel,*pFVar1,L"DS_ViewModel",
                         "STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"DS_ViewModel",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetVMName @ 14bdc4920

FName __thiscall UDS_ViewModelBase::GetVMName(UDS_ViewModelBase *this)

{
  bool bVar1;
  FName in_RDX;
  
  bVar1 = ::FName::Equals(this->VMName,"");
  if (bVar1) {
    *(undefined8 *)in_RDX = *(undefined8 *)(this->_padding_ + 0x18);
    return in_RDX;
  }
  *(FName *)in_RDX = this->VMName;
  return in_RDX;
}

// GetVisibility @ 14bdc4a80

ESlateVisibility __thiscall UDS_ViewModelBase::GetVisibility(UDS_ViewModelBase *this)

{
  return this->Visibility;
}

// IsTickable @ 14bdc9670

bool __thiscall UDS_ViewModelBase::IsTickable(UDS_ViewModelBase *this)

{
  undefined1 uVar1;
  
  if ((this[-1]._padding_ & 0x10) == 0) {
    if ((char)this->_padding_ == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014bdc9687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this[-1]._padding_ + 0x308))();
      return (bool)uVar1;
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014bdc969a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this[-1]._padding_ + 0x318))();
      return (bool)uVar1;
    }
  }
  return false;
}

// OnCloseInit @ 14bdcdc50

void __thiscall UDS_ViewModelBase::OnCloseInit(UDS_ViewModelBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bIsCloseInit != true) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ViewModelContext != (TSharedPtr<FDS_ViewModelContext,1> *)&local_18) {
      (this->ViewModelContext).Object = (FDS_ViewModelContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ViewModelContext).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    this->bIsCloseInit = true;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f8))(this);
    return;
  }
  return;
}

// OnInputAction @ 14bdcf2d0

void __thiscall
UDS_ViewModelBase::OnInputAction
          (UDS_ViewModelBase *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  return;
}

// OnLanguageChanged @ 14bdcfd10

void __thiscall UDS_ViewModelBase::OnLanguageChanged(UDS_ViewModelBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = (this->TextPropertyIDList).ArrayNum;
  pFVar3 = (this->TextPropertyIDList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->TextPropertyIDList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::FieldNotification::FFieldId,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_10 = *(undefined4 *)(pFVar3 + 8);
    local_18 = *(undefined8 *)pFVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pFVar3 = pFVar3 + 0xc;
  }
  return;
}

// OnReleasedListView @ 14bdd1940

void __thiscall UDS_ViewModelBase::OnReleasedListView(UDS_ViewModelBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ViewModelContext != (TSharedPtr<FDS_ViewModelContext,1> *)&local_18) {
    (this->ViewModelContext).Object = (FDS_ViewModelContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewModelContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014bdd198a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this);
  return;
}

// OnViewDestruct @ 14bde1160

void __thiscall UDS_ViewModelBase::OnViewDestruct(UDS_ViewModelBase *this)

{
  return;
}

// PostInitProperties @ 14bde2170

void __thiscall UDS_ViewModelBase::PostInitProperties(UDS_ViewModelBase *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    (**(code **)(this->_padding_ + 0x300))();
    CollectTextFieldID(this);
    return;
  }
  (**(code **)(this->_padding_ + 0x2e8))(this);
  CollectTextFieldID(this);
  return;
}

// SetContext @ 14bde4c50

void __thiscall
UDS_ViewModelBase::SetContext(UDS_ViewModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  longlong lVar5;
  atomic<int> *paVar6;
  FDS_ViewModelContext *local_28;
  TReferenceControllerBase<1> *local_20;
  
  cVar4 = (**(code **)(this->_padding_ + 0x310))();
  if (cVar4 == '\x01') {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ViewModelContext).SharedReferenceCount.ReferenceController;
    (this->ViewModelContext).Object = pFVar2;
    (this->ViewModelContext).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  (**(code **)(this->_padding_ + 0x2f8))(this);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    lVar5 = this->_padding_;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
    lVar5 = this->_padding_;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_28 = pFVar2;
  local_20 = pTVar1;
  (**(code **)(lVar5 + 0x2d0))(this,&local_28);
  lVar5 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_28 = pFVar2;
  local_20 = pTVar1;
  (**(code **)(lVar5 + 0x2d8))(this,&local_28);
  lVar5 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_28 = pFVar2;
  local_20 = pTVar1;
  (**(code **)(lVar5 + 0x2e0))(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)(this->_padding_ + 0x2f0))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVMName @ 14bde9cf0

void __thiscall UDS_ViewModelBase::SetVMName(UDS_ViewModelBase *this,FName *param_1)

{
  this->VMName = *param_1;
  return;
}

// SetViewModel @ 14bdea130

void __thiscall
UDS_ViewModelBase::SetViewModel(UDS_ViewModelBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x2d0);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18);
  pcVar1 = *(code **)(this->_padding_ + 0x2d8);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVisibility @ 14bdea310

void __thiscall UDS_ViewModelBase::SetVisibility(UDS_ViewModelBase *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (this->Visibility != param_1) {
    this->Visibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// Tick @ 14bdeb020

void __thiscall UDS_ViewModelBase::Tick(UDS_ViewModelBase *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bdeb028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 800))(&this[-1]._padding_);
  return;
}

// UnbindModel @ 14bdece70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_ViewModelBase::UnbindModel(UDS_ViewModelBase *this)

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

// CreateViewModel<UDS_VM_MoneyData> @ 14be03f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MoneyData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MoneyData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_MoneyData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_MoneyData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_MoneyData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_MoneyData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_StatusInfo> @ 14be04090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_StatusInfo * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_StatusInfo *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_StatusInfo_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_StatusInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_StatusInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_StatusInfo *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_CommonProgress> @ 14be66930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CommonProgress * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CommonProgress *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_CommonProgress *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_CommonProgress *)0x0) {
    pUVar5->field_0x8c = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Common_TabGroup> @ 14be66a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Common_TabGroup * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Common_TabGroup *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Common_TabGroup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Common_TabGroup *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Dropdown> @ 14be66b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Dropdown * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Dropdown *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Dropdown_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Dropdown_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Dropdown *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Dropdown *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Dungeon_Reward> @ 14be66c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Dungeon_Reward * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_Dungeon_Reward>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Dungeon_Reward *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Dungeon_Reward_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Dungeon_Reward_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Dungeon_Reward *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Dungeon_Reward *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_GuildData> @ 14be66d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_GuildData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_GuildData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_GuildData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_GuildData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_GuildData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_GuildData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_GuildMark> @ 14be66e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_GuildMark * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_GuildMark *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_GuildMark_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_GuildMark_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_GuildMark *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_GuildMark *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_GuildMemberData> @ 14be66f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_GuildMemberData * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_GuildMemberData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_GuildMemberData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_GuildMemberData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_GuildMemberData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_GuildMemberData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_GuildPermissionPopupSlot> @ 14be670a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_GuildPermissionPopupSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_GuildPermissionPopupSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_GuildPermissionPopupSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_GuildPermissionPopupSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_GuildPermissionPopupSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Item> @ 14be671b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Item * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_Item>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Item *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Item *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Item *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_ItemCraft_Tab> @ 14be672c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ItemCraft_Tab * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_ItemCraft_Tab>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_ItemCraft_Tab *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_ItemCraft_Tab_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_ItemCraft_Tab_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_ItemCraft_Tab *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_ItemCraft_Tab *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_RingCmdQuickSlot> @ 14be673d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_RingCmdQuickSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_RingCmdQuickSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_RingCmdQuickSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_RingCmdQuickSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_RingCmdQuickSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_RingCmdQuickSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_CommonQuantityControl> @ 14be674e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_CommonQuantityControl * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_W_CommonQuantityControl>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_CommonQuantityControl *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_CommonQuantityControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_CommonQuantityControl *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_HUD_PartyGroupSlot> @ 14becd380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_PartyGroupSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyGroupSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_HUD_PartyGroupSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_HUD_PartyGroupSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_HUD_PartyGroupSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_HUD_PartyGroupSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_HUD_PartyGroupSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_HUD_PartyMemberSlot> @ 14becd490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_PartyMemberSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_HUD_PartyMemberSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_HUD_PartyMemberSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_HUD_PartyMemberSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_HUD_PartyMemberSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_MountSlot> @ 14becd5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MountSlot * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MountSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_MountSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_MountSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_MountSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_MountSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_CharBuffData> @ 14bf31c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CharBuffData * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_CharBuffData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharBuffData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_CharBuffData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_CharBuffData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_CharBuffData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_CharInfoData> @ 14bf31da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_CharInfoData * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharInfoData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_CharInfoData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_CharInfoData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_CharInfoData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_CharInfoData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_HUD_SkillSlot> @ 14bf31eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_HUD_SkillSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_HUD_SkillSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_HUD_SkillSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_HUD_SkillSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_HUD_SkillSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_HUD_SkillSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_PlayerData> @ 14bf31fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_PlayerData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_PlayerData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_PlayerData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_PlayerData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_PlayerData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_PlayerData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_PlayerSkillStatus> @ 14bf320d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_PlayerSkillStatus * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerSkillStatus>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_PlayerSkillStatus *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_PlayerSkillStatus_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_PlayerSkillStatus_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_PlayerSkillStatus *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_PlayerSkillStatus *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Player_IconSlot> @ 14bf321e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Player_IconSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_Player_IconSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Player_IconSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Player_IconSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Player_IconSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Player_IconSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Player_IconSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_QuestData> @ 14bf322f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_QuestData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_QuestData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_QuestData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_QuestInfo> @ 14bf32400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestInfo * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestInfo *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_QuestInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_QuestInfo *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_QuestInfo_Reward> @ 14bf32510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestInfo_Reward * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo_Reward>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestInfo_Reward *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_QuestInfo_Reward_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_QuestInfo_Reward_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_QuestInfo_Reward *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_QuestInfo_Reward *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_QuestObjectiveData> @ 14bf32620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestObjectiveData * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestObjectiveData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_QuestObjectiveData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_QuestObjectiveData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_QuestObjectiveData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_QuestObjectiveData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_QuestRepeatData> @ 14bf32730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_QuestRepeatData * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestRepeatData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestRepeatData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_QuestRepeatData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_QuestRepeatData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_QuestRepeatData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_QuestRepeatData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_SkillData> @ 14bf32840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SkillData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_SkillData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_SkillData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_SkillData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_SkillData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_SkillData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_SkillData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_StackSkillCount> @ 14bf32950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_StackSkillCount * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_StackSkillCount *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_StackSkillCount_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_StackSkillCount_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_StackSkillCount *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_StackSkillCount *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_SwimControl> @ 14bf32a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SwimControl * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimControl>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_SwimControl *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_SwimControl_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_SwimControl_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_SwimControl *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_SwimControl *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_SwimSlot> @ 14bf32b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_SwimSlot * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_SwimSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_SwimSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_SwimSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_SwimSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_SwimSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_TotalMenu_PlayerInfo_Tab> @ 14bf32c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_TotalMenu_PlayerInfo_Tab * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_TotalMenu_PlayerInfo_Tab>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_TotalMenu_PlayerInfo_Tab *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_TotalMenu_PlayerInfo_Tab *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_Avoid> @ 14bf32d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_Avoid * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Avoid>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_Avoid *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_Avoid_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_Avoid_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_Avoid *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_Avoid *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_Common_Check_Text> @ 14bf902d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_Common_Check_Text * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_Check_Text>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Common_Check_Text *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_Common_Check_Text_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_Common_Check_Text_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_Common_Check_Text *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_Common_Check_Text *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_ViewportInteractionButton> @ 14bf903e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_ViewportInteractionButton * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_ViewportInteractionButton>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_ViewportInteractionButton *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_ViewportInteractionButton *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_ViewportInteractionButton *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_WB_CheatParam> @ 14bf904f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_WB_CheatParam * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_WB_CheatParam>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_WB_CheatParam *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_WB_CheatParam_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_WB_CheatParam_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_WB_CheatParam *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_WB_CheatParam *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_AirWalkSlot> @ 14bf90600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_AirWalkSlot * __cdecl
UDS_ViewModelBase::CreateViewModel<UDS_VM_W_AirWalkSlot>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_AirWalkSlot *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_AirWalkSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_AirWalkSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_W_RingCmd> @ 14bf90710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_W_RingCmd * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_W_RingCmd>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_RingCmd *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_W_RingCmd_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_W_RingCmd_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_W_RingCmd *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_W_RingCmd *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}

// CreateViewModel<UDS_VM_MountData> @ 14bff66f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_VM_MountData * __cdecl UDS_ViewModelBase::CreateViewModel<UDS_VM_MountData>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_MountData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_VM_MountData_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_VM_MountData_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_VM_MountData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pUVar5 != (UDS_VM_MountData *)0x0) {
    *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
  }
  return pUVar5;
}


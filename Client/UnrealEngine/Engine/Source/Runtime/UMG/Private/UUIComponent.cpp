// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 25

// StaticClass @ 146a1e5c0

UClass * __cdecl UUIComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponent",&Z_Registration_Info_UClass_UUIComponent.InnerSingleton
               ,StaticRegisterNativesUUIComponent,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIComponent>,
               InternalVTableHelperCtorCaller<UUIComponent>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponent.InnerSingleton;
}

// _getUObject @ 146a30ce0

UObject * __thiscall UUIComponent::_getUObject(UUIComponent *this)

{
  return (UObject *)&this[-1].Owner;
}

// UUIComponent @ 146a565f0

UUIComponent * __thiscall UUIComponent::UUIComponent(UUIComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Delegates).AddedEmplaceAt = 0xffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Delegates).Delegates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delegates).Delegates.ArrayNum = 0;
  (this->Delegates).Delegates.ArrayMax = 0;
  (this->Delegates).DelegateLockCount = 0;
  (this->Delegates).CompactionCount = 0;
  this->bInitialized = false;
  return this;
}

// UUIComponent @ 146a56640

UUIComponent * __thiscall UUIComponent::UUIComponent(UUIComponent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Delegates).AddedEmplaceAt = 0xffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Delegates).Delegates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delegates).Delegates.ArrayNum = 0;
  (this->Delegates).Delegates.ArrayMax = 0;
  (this->Delegates).DelegateLockCount = 0;
  (this->Delegates).CompactionCount = 0;
  this->bInitialized = false;
  return this;
}

// ~UUIComponent @ 146a58770

void __thiscall UUIComponent::~UUIComponent(UUIComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)(this->Delegates).Delegates.AllocatorInstance.Data,
             (this->Delegates).Delegates.ArrayNum);
  pFVar1 = (this->Delegates).Delegates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddFieldValueChangedDelegate @ 146a5cf30

FDelegateHandle __thiscall
UUIComponent::AddFieldValueChangedDelegate
          (UUIComponent *this,FFieldId *param_1,
          TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  FDelegateHandle FVar2;
  FName FVar3;
  ForAnyElementType *in_R9;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  if (*(longlong *)param_2 == 0) {
    FVar3.ComparisonIndex.Value = 0;
    FVar3.Number = 0;
  }
  else {
    local_18 = in_R9->Data;
    local_28._0_8_ = *(undefined8 *)param_2;
    local_10 = *(undefined4 *)&in_R9[1].Data;
    local_28._8_4_ = *(undefined4 *)&param_2->field_0x8;
    in_R9->Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&in_R9[1].Data = 0;
    FVar2 = UE::FieldNotification::FFieldMulticastDelegate::Add
                      ((FFieldMulticastDelegate *)&this->_padding_,(UObject *)&stack0x00000010,
                       (FFieldId *)&this[-1].Owner,&local_28);
    FVar3 = *(FName *)FVar2.ID;
  }
  iVar1 = *(int *)&in_R9[1].Data;
  param_1->FieldName = FVar3;
  if ((iVar1 != 0) && (in_R9->Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)in_R9->Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(in_R9,0,0,0x10);
    *(undefined4 *)&in_R9[1].Data = 0;
  }
  if (in_R9->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(in_R9->Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// BroadcastFieldValueChanged @ 146a5f590

void __thiscall UUIComponent::BroadcastFieldValueChanged(UUIComponent *this,FFieldId *param_1)

{
  FFieldId local_18 [2];
  
  if (param_1->FieldName != (FName)0x0) {
    local_18[0].FieldName = param_1->FieldName;
    local_18[0].BitNumber = param_1->BitNumber;
    UE::FieldNotification::FFieldMulticastDelegate::Broadcast
              ((FFieldMulticastDelegate *)&this->_padding_,(UObject *)&this[-1].Owner,local_18);
  }
  return;
}

// Construct @ 146a62a90

void __thiscall UUIComponent::Construct(UUIComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146a62a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// Destruct @ 146a6ad60

void __thiscall UUIComponent::Destruct(UUIComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146a6ad63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// GetFieldNotificationDescriptor @ 146a76510

IClassDescriptor * __thiscall UUIComponent::GetFieldNotificationDescriptor(UUIComponent *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UUIComponent::GetFieldNotificationDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Local__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Local;
}

// GetOwner @ 146a77850

TWeakObjectPtr<UWidget,FWeakObjectPtr> __thiscall UUIComponent::GetOwner(UUIComponent *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->Owner).WeakPtr;
  return (TWeakObjectPtr<UWidget,FWeakObjectPtr>)in_RDX;
}

// GetPrivateStaticClass @ 146a77db0

UClass * __cdecl UUIComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponent",&Z_Registration_Info_UClass_UUIComponent.InnerSingleton
               ,StaticRegisterNativesUUIComponent,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIComponent>,
               InternalVTableHelperCtorCaller<UUIComponent>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponent.InnerSingleton;
}

// GraphRenamed @ 146a79c20

void __thiscall
UUIComponent::GraphRenamed(UUIComponent *this,UEdGraph *param_1,FName *param_2,FName *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146a79c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))();
  return;
}

// Initialize @ 146a7a2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUIComponent::Initialize(UUIComponent *this,UWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UWidget *local_res8;
  
  if (this->bInitialized != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9109232056897896462>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                       ,0xe,"!bInitialized");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UWidget::IsConstructed(param_1);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9109232056897896463>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                       ,0xf,"!Target->IsConstructed()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (UWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9109232056897896464>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                       ,0x10,"Target");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->Owner).WeakPtr.ObjectIndex != 0) || ((this->Owner).WeakPtr.ObjectSerialNumber != 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9109232056897896465>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                       ,0x11,"Owner.IsExplicitlyNull()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)&local_res8);
  pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  pUVar3[6].field_0xa = pUVar3[6].field_0xa | 1;
  (**(code **)(this->_padding_ + 0x2c0))(this);
  this->bInitialized = true;
  return;
}

// OnConstruct @ 146a81e10

void __thiscall UUIComponent::OnConstruct(UUIComponent *this)

{
  return;
}

// OnDestruct @ 146a822d0

void __thiscall UUIComponent::OnDestruct(UUIComponent *this)

{
  return;
}

// OnGraphRenamed @ 146a83670

void __thiscall
UUIComponent::OnGraphRenamed(UUIComponent *this,UEdGraph *param_1,FName *param_2,FName *param_3)

{
  return;
}

// OnInitialize @ 146a836d0

void __thiscall UUIComponent::OnInitialize(UUIComponent *this)

{
  return;
}

// OnPreConstruct @ 146a85fc0

void __thiscall UUIComponent::OnPreConstruct(UUIComponent *this,bool param_1)

{
  return;
}

// PreConstruct @ 146a8a420

void __thiscall UUIComponent::PreConstruct(UUIComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9109232056897896474>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                       ,0x1a,"bInitialized");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a8a477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
  return;
}

// RebuildWidgetWithContent @ 146a8d480

TSharedRef<SWidget,1> * __thiscall
UUIComponent::RebuildWidgetWithContent
          (UUIComponent *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// RemoveAllFieldValueChangedDelegates @ 146a8f1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall UUIComponent::RemoveAllFieldValueChangedDelegates(UUIComponent *this,void *param_1)

{
  int iVar1;
  FRemoveAllResult *pFVar2;
  undefined1 auStack_58 [32];
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != (void *)0x0) {
    pFVar2 = UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
                       ((FFieldMulticastDelegate *)&this->_padding_,&local_38,
                        (UObject *)&this[-1].Owner,param_1);
    iVar1 = pFVar2->RemoveCount;
    if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
    }
    return iVar1;
  }
  return 0;
}

// RemoveAllFieldValueChangedDelegates @ 146a8f240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UUIComponent::RemoveAllFieldValueChangedDelegates
          (UUIComponent *this,FFieldId *param_1,void *param_2)

{
  int iVar1;
  FRemoveAllResult *pFVar2;
  undefined1 auStackY_78 [32];
  FFieldId local_48;
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((param_1->FieldName != (FName)0x0) && (param_2 != (void *)0x0)) {
    local_48.FieldName = param_1->FieldName;
    local_48.BitNumber = param_1->BitNumber;
    pFVar2 = UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
                       ((FFieldMulticastDelegate *)&this->_padding_,&local_38,
                        (UObject *)&this[-1].Owner,&local_48,param_2);
    iVar1 = pFVar2->RemoveCount;
    if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
    }
    return iVar1;
  }
  return 0;
}

// RemoveFieldValueChangedDelegate @ 146a90120

bool __thiscall
UUIComponent::RemoveFieldValueChangedDelegate
          (UUIComponent *this,FFieldId *param_1,FDelegateHandle param_2)

{
  FRemoveFromResult FVar1;
  undefined6 extraout_var;
  FName local_18;
  int local_10;
  
  if ((param_1->FieldName != (FName)0x0) && (param_2.ID != 0)) {
    local_18 = param_1->FieldName;
    local_10 = param_1->BitNumber;
    FVar1 = UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
                      ((FFieldMulticastDelegate *)&this->_padding_,(UObject *)&stack0x00000010,
                       (FFieldId *)&this[-1].Owner,(FDelegateHandle)&local_18);
    return (bool)*(undefined1 *)CONCAT62(extraout_var,FVar1);
  }
  return false;
}

// StaticRegisterNativesUUIComponent @ 146a96800

void __cdecl UUIComponent::StaticRegisterNativesUUIComponent(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 49

// GetWidgetClass @ 1469da1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FSlateWidgetClassData * __thiscall SObjectWidget::GetWidgetClass(SObjectWidget *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res10;
  FName local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res18,"SObjectWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res10,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res10);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res10);
      atexit(`SObjectWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// SObjectWidget @ 146a55e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

SObjectWidget * __thiscall SObjectWidget::SObjectWidget(SObjectWidget *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->WidgetObject).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  (this->DebugTickEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTickEventName).Data.ArrayNum = 0;
  (this->DebugTickEventName).Data.ArrayMax = 0;
  (this->DebugPaintEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugPaintEventName).Data.ArrayNum = 0;
  (this->DebugPaintEventName).Data.ArrayMax = 0;
  return this;
}

// ~SObjectWidget @ 146a583e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::~SObjectWidget(SObjectWidget *this)

{
  FScriptContainerElement *pFVar1;
  SObjectWidget *local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  if ((GExitPurge == false) && (GIsGarbageCollecting != false)) {
    local_res8 = this;
    `SObjectWidget::~SObjectWidget'::__l5::<lambda_1>::operator()(&local_res8);
  }
  ResetWidget(this);
  pFVar1 = (this->DebugPaintEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTickEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddReferencedObjects @ 146a5d580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::AddReferencedObjects(SObjectWidget *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)&this->_padding_);
  return;
}

// ComputeDesiredSize @ 146a61bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector2<double> * __thiscall
SObjectWidget::ComputeDesiredSize
          (SObjectWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  undefined1 auVar1 [16];
  TObjectPtr<UUserWidget>_u_0 TVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  TVector2<double>_u_0 local_18;
  
  SCompoundWidget::ComputeDesiredSize
            ((SCompoundWidget *)this,(TVector2<double> *)&local_18._s_0,param_1);
  TVar2 = (this->WidgetObject).field0_0x0;
  if (TVar2.DebugPtr != (UUserWidget *)0x0) {
    auVar1 = *(undefined1 (*) [16])((longlong)TVar2 + 0x350);
    uVar3 = SUB84(local_18._s_0.X,0);
    uVar4 = (int)((ulonglong)local_18._0_8_ >> 0x20);
    if (local_18._s_0.X <= auVar1._0_8_) {
      uVar3 = auVar1._0_4_;
      uVar4 = auVar1._4_4_;
    }
    uVar5 = auVar1._8_8_;
    if (auVar1._8_8_ <= local_18._s_0.Y) {
      uVar5 = local_18._s_0.Y;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar4,uVar3);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    return __return_storage_ptr__;
  }
  *(double *)&__return_storage_ptr__->field0_0x0 = local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18._s_0.Y;
  return __return_storage_ptr__;
}

// Construct @ 146a61f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::Construct(SObjectWidget *this,FArguments *param_1,UUserWidget *param_2)

{
  FString *pFVar1;
  EWidgetUpdateFlags EVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  UUserWidget *this_00;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FString *pFVar7;
  EWidgetUpdateFlags EVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->WidgetObject).field0_0x0.DebugPtr = param_2;
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar8 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar8);
  this_00 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (this_00 != (UUserWidget *)0x0) {
    pFVar7 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    pFVar1 = &this->DebugName;
    if (pFVar1 != pFVar7) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->DebugName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->DebugName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_38,pFVar1,L"_Paint");
    pFVar7 = &this->DebugPaintEventName;
    if (pFVar7 != &local_38) {
      pFVar5 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar7->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->DebugPaintEventName).Data.ArrayNum = local_38.Data.ArrayNum;
      (this->DebugPaintEventName).Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_28,pFVar1,L"_Tick");
    pFVar1 = &this->DebugTickEventName;
    if (pFVar1 != &local_28) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->DebugTickEventName).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->DebugTickEventName).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    UUserWidget::UpdateCanTick((this->WidgetObject).field0_0x0.DebugPtr);
  }
  return;
}

// GetPrivateWidgetClass @ 146a78990

FSlateWidgetClassData * __cdecl SObjectWidget::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SObjectWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SObjectWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetReferencerName @ 146a78d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FString * __thiscall
SObjectWidget::GetReferencerName(SObjectWidget *this,FString *__return_storage_ptr__)

{
  void *pvVar1;
  undefined1 auStack_468 [32];
  FName local_448 [2];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_468;
  local_438.Base = local_418;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  local_438.CurPos = local_418;
  local_438.End = (wchar_t *)local_18;
  pvVar1 = FGenericPlatformString::Memcpy(local_418,L"SObjectWidget(",0x1c);
  local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x1c);
  if (this->_padding_ == 0) {
    if (local_438.End < (wchar_t *)((longlong)pvVar1 + 0x2aU)) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,7);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"nullptr",0xe);
    local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0xe);
  }
  else {
    local_448[0] = *(FName *)(this->_padding_ + 0x18);
    ::FName::AppendString(local_448,&local_438);
  }
  if (local_438.End < local_438.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_438,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L")",2);
  local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
  if (local_438.End < (wchar_t *)((longlong)pvVar1 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_438,1);
  }
  *local_438.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_438.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  return __return_storage_ptr__;
}

// IsInteractable @ 146a7c280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall SObjectWidget::IsInteractable(SObjectWidget *this)

{
  UUserWidget *this_00;
  bool bVar1;
  undefined1 uVar2;
  
  this_00 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (this_00 != (UUserWidget *)0x0) {
    bVar1 = UWidget::CanSafelyRouteCall((UWidget *)this_00);
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000146a7c2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(((this->WidgetObject).field0_0x0.DebugPtr)->_padding_ + 0x380))();
      return (bool)uVar2;
    }
  }
  return false;
}

// OnAnalogValueChanged @ 146a81540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnAnalogValueChanged
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  FReply local_c8;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3f0))(pUVar1,&local_c8,param_1,param_2);
    if ((char)local_c8._padding_ == '\0') {
      SWidget::OnAnalogValueChanged((SWidget *)this,__return_storage_ptr__,param_1,param_2);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnCursorQuery @ 146a82160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FCursorReply * __thiscall
SObjectWidget::OnCursorQuery
          (SObjectWidget *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnDragCancelled @ 146a822e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::OnDragCancelled
          (SObjectWidget *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  UUserWidget *pUVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar6 = FUMGDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar6);
    if (cVar4 != '\0') {
      pTVar7 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar1 != (FDragDropOperation *)0x0) &&
         (pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr, pUVar3 != (UUserWidget *)0x0)) {
        bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar3);
        if (bVar5) {
          pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr;
          (**(code **)(pUVar3->_padding_ + 0x460))
                    (pUVar3,param_1,pFVar1[1].CursorDecoratorWindow.Object);
        }
      }
      goto LAB_146a8236a;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_146a8236a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnDragDetected @ 146a82420

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnDragDetected
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  SObjectWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  float fVar7;
  UDragDropOperation *local_res8;
  undefined1 local_128 [8];
  FSharedReferencer<1> local_120;
  TSharedRef<FUMGDragDropOp,1> local_118;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  FReply local_e8;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar5)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    local_res8 = (UDragDropOperation *)0x0;
    (**(code **)(pUVar1->_padding_ + 0x438))(pUVar1,param_1,param_2,&local_res8);
    if (local_res8 != (UDragDropOperation *)0x0) {
      local_f8._s_0.Y = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
      local_128._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      local_128._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      local_f8._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
      fVar7 = (float)local_128._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0] +
              (float)local_128._0_4_ * (param_1->AccumulatedRenderTransform).M.M[0][0] +
              (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      local_128._4_4_ =
           (float)local_128._0_4_ * (param_1->AccumulatedRenderTransform).M.M[0][1] +
           (float)local_128._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
           (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      local_128._0_4_ = fVar7;
      local_108._s_0.X = (double)fVar7;
      local_108._s_0.Y = (double)(float)local_128._4_4_;
      fVar7 = UWidgetLayoutLibrary::GetViewportScale
                        ((UObject *)(this->WidgetObject).field0_0x0.DebugPtr);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)local_128);
      pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
      pSVar3 = (SObjectWidget *)pTVar6->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.ReferenceController);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.ReferenceController);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_128 = (undefined1  [8])pSVar3;
      local_120.ReferenceController = pTVar2;
      FUMGDragDropOp::New(&local_118,local_res8,param_2->PointerIndex,
                          (TVector2<double> *)&local_f8._s_0,(TVector2<double> *)&local_108._s_0,
                          fVar7,(TSharedPtr<SObjectWidget,1> *)local_128);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FReply::FReply(&local_e8,true);
      FVar4.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_120.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
      local_e8.DragDropContent.Object = (FDragDropOperation *)local_118.Object;
      local_128 = (undefined1  [8])0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_e8.DragDropContent.SharedReferenceCount,&local_120);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragEnter @ 146a82750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::OnDragEnter(SObjectWidget *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  UUserWidget *pUVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar6 = FUMGDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar6);
    if (cVar4 != '\0') {
      pTVar7 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar1 != (FDragDropOperation *)0x0) &&
         (pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr, pUVar3 != (UUserWidget *)0x0)) {
        bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar3);
        if (bVar5) {
          pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr;
          (**(code **)(pUVar3->_padding_ + 0x440))
                    (pUVar3,param_1,param_2,pFVar1[1].CursorDecoratorWindow.Object);
        }
      }
      goto LAB_146a827e6;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_146a827e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnDragLeave @ 146a828d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::OnDragLeave(SObjectWidget *this,FDragDropEvent *param_1)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  UUserWidget *pUVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar6 = FUMGDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar6);
    if (cVar4 != '\0') {
      pTVar7 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar1 != (FDragDropOperation *)0x0) &&
         (pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr, pUVar3 != (UUserWidget *)0x0)) {
        bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar3);
        if (bVar5) {
          pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr;
          (**(code **)(pUVar3->_padding_ + 0x448))
                    (pUVar3,param_1,pFVar1[1].CursorDecoratorWindow.Object);
        }
      }
      goto LAB_146a8295a;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_146a8295a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnDragOver @ 146a82a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnDragOver
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  UUserWidget *pUVar3;
  char cVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_146a82ab1:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUMGDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1);
    if (cVar4 == '\0') goto LAB_146a82ab1;
    pTVar6 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FDragDropOperation *)0x0) &&
       (pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr, pUVar3 != (UUserWidget *)0x0)) {
      bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar3);
      if (bVar5) {
        pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr;
        cVar4 = (**(code **)(pUVar3->_padding_ + 0x450))
                          (pUVar3,param_1,param_2,pFVar1[1].CursorDecoratorWindow.Object);
        if (cVar4 != '\0') {
          bVar5 = true;
          goto LAB_146a82ab5;
        }
      }
    }
  }
  bVar5 = false;
LAB_146a82ab5:
  FReply::FReply(__return_storage_ptr__,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnDrop @ 146a83070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnDrop
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  UUserWidget *pUVar3;
  char cVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_146a83111:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUMGDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1);
    if (cVar4 == '\0') goto LAB_146a83111;
    pTVar6 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar1 != (FDragDropOperation *)0x0) &&
       (pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr, pUVar3 != (UUserWidget *)0x0)) {
      bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar3);
      if (bVar5) {
        pUVar3 = (this->WidgetObject).field0_0x0.DebugPtr;
        cVar4 = (**(code **)(pUVar3->_padding_ + 0x458))
                          (pUVar3,param_1,param_2,pFVar1[1].CursorDecoratorWindow.Object);
        if (cVar4 != '\0') {
          bVar5 = true;
          goto LAB_146a83115;
        }
      }
    }
  }
  bVar5 = false;
LAB_146a83115:
  FReply::FReply(__return_storage_ptr__,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnFinishedPointerInput @ 146a83220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::OnFinishedPointerInput(SObjectWidget *this)

{
  UUserWidget *this_00;
  bool bVar1;
  
  this_00 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (this_00 != (UUserWidget *)0x0) {
    bVar1 = UWidget::CanSafelyRouteCall((UWidget *)this_00);
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000146a8324d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(((this->WidgetObject).field0_0x0.DebugPtr)->_padding_ + 0x4b0))();
      return;
    }
  }
  return;
}

// OnFocusChanging @ 146a83260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::OnFocusChanging
          (SObjectWidget *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x3a8))(pUVar1,param_1,param_2,param_3);
    }
  }
  return;
}

// OnFocusLost @ 146a832d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::OnFocusLost(SObjectWidget *this,FFocusEvent *param_1)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x3a0))(pUVar1,param_1);
    }
  }
  return;
}

// OnFocusReceived @ 146a83360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnFocusReceived
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x398))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyChar @ 146a83760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnKeyChar
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3d0))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDown @ 146a83930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnKeyDown
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  FReply local_c8;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3e0))(pUVar1,&local_c8,param_1,param_2);
    if ((char)local_c8._padding_ == '\0') {
      SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyUp @ 146a83b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnKeyUp
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  FReply local_c8;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 1000))(pUVar1,&local_c8,param_1,param_2);
    if ((char)local_c8._padding_ == '\0') {
      SWidget::OnKeyUp((SWidget *)this,__return_storage_ptr__,param_1,param_2);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMotionDetected @ 146a83f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMotionDetected
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FMotionEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x488))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 146a84170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMouseButtonDoubleClick
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x430))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 146a84300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMouseButtonDown
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3f8))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 146a84490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMouseButtonUp
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x408))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 146a84620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::OnMouseCaptureLost(SObjectWidget *this,FCaptureLostEvent *param_1)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x4a8))(pUVar1,param_1);
    }
  }
  return;
}

// OnMouseEnter @ 146a846b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::OnMouseEnter(SObjectWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x418))(pUVar1,param_1,param_2);
    }
  }
  return;
}

// OnMouseLeave @ 146a847c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::OnMouseLeave(SObjectWidget *this,FPointerEvent *param_1)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x420))(pUVar1,param_1);
    }
  }
  return;
}

// OnMouseMove @ 146a84890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMouseMove
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x410))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 146a84a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnMouseWheel
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x428))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnNavigation @ 146a84bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationReply * __thiscall
SObjectWidget::OnNavigation
          (SObjectWidget *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  UUserWidget *pUVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 local_58 [32];
  undefined1 local_38 [24];
  EUINavigationRule local_20;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 == (UUserWidget *)0x0) ||
     (cVar3 = (**(code **)(pUVar1->_padding_ + 0x390))(), cVar3 == '\0')) {
    SWidget::OnNavigation((SWidget *)this,(FNavigationReply *)local_58,param_1,param_2);
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    if ((pUVar1 == (UUserWidget *)0x0) ||
       (bVar4 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), !bVar4)) {
      uVar2 = local_58._24_8_;
      (__return_storage_ptr__->EventHandler).Object = (SWidget *)local_58._0_8_;
      (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_58._8_8_;
      (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)local_58._16_8_;
      local_58._24_8_ = (TReferenceControllerBase<1> *)0x0;
      local_58._8_8_ = (TReferenceControllerBase<1> *)0x0;
      local_58._0_8_ = (SWidget *)0x0;
      local_58._16_8_ = (SWidget *)0x0;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)uVar2;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->FocusDelegate
                 ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
      __return_storage_ptr__->BoundaryRule = local_20;
    }
    else {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x3c8))
                (pUVar1,__return_storage_ptr__,param_1,param_2,local_58);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._24_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
  }
  else {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// OnPaint @ 146a85120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall
SObjectWidget::OnPaint
          (SObjectWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  UUserWidget *pUVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  FPaintArgs *local_res10;
  code *local_48;
  undefined1 *local_40;
  
  pwVar7 = L"";
  if ((this->DebugPaintEventName).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->DebugPaintEventName).Data.AllocatorInstance.Data;
  }
  local_res10 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,pwVar6);
  if ((this->DebugPaintEventName).Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)(this->DebugPaintEventName).Data.AllocatorInstance.Data;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar7,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SObjectWidget.cpp"
               ,0x87);
  }
  iVar2 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,local_res10,param_2,param_3,param_4,param_5,param_6,
                     param_7);
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (pFVar3 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_40 = local_res8;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar4);
    if (*(char *)(pFVar5 + 4) == '\0') {
      pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
      iVar2 = (**(code **)(pUVar1->_padding_ + 0x378))
                        (pUVar1,local_res10,param_2,param_3,param_4,iVar2,param_6,param_7);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar2;
}

// OnPreviewKeyDown @ 146a85fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnPreviewKeyDown
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x3d8))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPreviewMouseButtonDown @ 146a861f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnPreviewMouseButtonDown
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x400))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 146a86b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchEnded
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x480))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 146a86ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchFirstMove
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x498))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 146a86e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchForceChanged
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x490))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 146a86fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchGesture
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x468))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 146a87150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchMoved
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x478))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 146a872e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectWidget::OnTouchStarted
          (SObjectWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UUserWidget *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar2 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar2)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x470))(pUVar1,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// PrivateRegisterAttributes @ 146a8b160

void __cdecl SObjectWidget::PrivateRegisterAttributes(FInitializer *param_1)

{
  return;
}

// ResetWidget @ 146a90c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::ResetWidget(SObjectWidget *this)

{
  UUserWidget *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  
  bVar5 = UObjectInitialized();
  if ((bVar5) && ((this->WidgetObject).field0_0x0.DebugPtr != (UUserWidget *)0x0)) {
    FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UUserWidget *)0x0) {
      bVar5 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1);
      if (bVar5) {
        (**(code **)(((this->WidgetObject).field0_0x0.DebugPtr)->_padding_ + 0x368))();
      }
    }
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    (this->WidgetObject).field0_0x0.DebugPtr = (UUserWidget *)0x0;
    ::FString::operator=(&this->DebugTickEventName,L"");
    ::FString::operator=(&this->DebugPaintEventName,L"");
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar3 = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)FVar4.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// SetPadding @ 146a941e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectWidget::SetPadding(SObjectWidget *this,TAttribute<FMargin> *param_1)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  FSlotBase *this_00;
  FDestructionSentinel local_88;
  FMargin local_70;
  undefined1 local_60;
  undefined1 local_58 [8];
  ForAnyElementType FStack_50;
  int local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  local_70.Left = (param_1->Value).Left;
  local_70.Top = (param_1->Value).Top;
  local_70.Right = (param_1->Value).Right;
  local_70.Bottom = (param_1->Value).Bottom;
  local_60 = param_1->bIsSet;
  local_48 = 0;
  local_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
             &param_1->Getter);
  local_40[0x10] = (bool)local_60;
  local_40._0_4_ = local_70.Left;
  local_40._4_4_ = local_70.Top;
  local_40._8_4_ = local_70.Right;
  local_40._12_4_ = local_70.Bottom;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  this_00 = (FSlotBase *)&this->_padding_;
  if (&this->_padding_ == (longlong *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  pSVar3 = FSlotBase::GetOwnerWidget(this_00);
  if (pSVar3 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,pSVar3,(TAttribute<FMargin> *)local_40,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_88);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// SupportsKeyboardFocus @ 146a96ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall SObjectWidget::SupportsKeyboardFocus(SObjectWidget *this)

{
  UUserWidget *this_00;
  bool bVar1;
  undefined1 uVar2;
  
  this_00 = (this->WidgetObject).field0_0x0.DebugPtr;
  if (this_00 != (UUserWidget *)0x0) {
    bVar1 = UWidget::CanSafelyRouteCall((UWidget *)this_00);
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000146a96f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(((this->WidgetObject).field0_0x0.DebugPtr)->_padding_ + 0x388))();
      return (bool)uVar2;
    }
  }
  return false;
}

// Tick @ 146a97bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectWidget::Tick(SObjectWidget *this,FGeometry *param_1,double param_2,float param_3)

{
  UUserWidget *pUVar1;
  uint uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  pwVar5 = L"";
  if ((this->DebugTickEventName).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->DebugTickEventName).Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,pwVar4);
  if ((this->DebugTickEventName).Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)(this->DebugTickEventName).Data.AllocatorInstance.Data;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar5,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SObjectWidget.cpp"
               ,0x76);
  }
  if (__CsvProfilerStat119 == false) {
    FCsvProfilerTrace::OutputInlineStat("SObjectWidget_Tick",_GCsvCategory_Slate.Index);
    __CsvProfilerStat119 = true;
  }
  uVar2 = _GCsvCategory_Slate.Index;
  FCsvProfiler::BeginStat("SObjectWidget_Tick",_GCsvCategory_Slate.Index,"CSV_SObjectWidget_Tick");
  pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
  if ((pUVar1 != (UUserWidget *)0x0) &&
     (bVar3 = UWidget::CanSafelyRouteCall((UWidget *)pUVar1), bVar3)) {
    pUVar1 = (this->WidgetObject).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x370))(pUVar1,param_1,param_3);
  }
  FCsvProfiler::EndStat("SObjectWidget_Tick",uVar2);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 1504f77f0

bool __thiscall `SObjectWidget::~SObjectWidget'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3150156549368840240>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<3150156549368840240>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}


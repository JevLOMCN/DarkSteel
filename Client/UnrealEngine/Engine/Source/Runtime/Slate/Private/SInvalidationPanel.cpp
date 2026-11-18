// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// SInvalidationPanel @ 1429ba0b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

SInvalidationPanel * __thiscall SInvalidationPanel::SInvalidationPanel(SInvalidationPanel *this)

{
  byte *pbVar1;
  FHittestGrid *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  SInvalidationPanel *pSVar6;
  FSlateApplicationBase *pFVar7;
  EWidgetUpdateFlags EVar8;
  EWidgetUpdateFlags EVar9;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  FSlateInvalidationRoot::FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FSlateInvalidationRoot__;
  pTVar5 = ::operator_new(0x108);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->HittestGrid).Object = (FHittestGrid *)0x10;
    (this->HittestGrid).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFHittestGrid___00_SharedPointerInternals__6B_;
    FHittestGrid::FHittestGrid((FHittestGrid *)(pTVar5 + 1));
    (this->HittestGrid).SharedReferenceCount.ReferenceController = pTVar5;
    (this->HittestGrid).Object = (FHittestGrid *)(pTVar5 + 1);
    if ((FHittestGrid *)(pTVar5 + 1) == (FHittestGrid *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pSVar6 = (SInvalidationPanel *)(*pcVar3)();
        return pSVar6;
      }
    }
  }
  (this->LastClippingState).bIsSet = false;
  FGeometry::FGeometry(&this->LastAllottedGeometry);
  pFVar2 = (this->HittestGrid).Object;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->bCanCache = true;
  this->bPaintedSinceLastPrepass = true;
  this->_padding_ = (longlong)pFVar2;
  (this->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  (this->DebugTickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTickName).Data.ArrayNum = 0;
  (this->DebugTickName).Data.ArrayMax = 0;
  (this->DebugPaintName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugPaintName).Data.ArrayNum = 0;
  (this->DebugPaintName).Data.ArrayMax = 0;
  this->_padding_ = (longlong)this;
  EVar8 = (EWidgetUpdateFlags)this->_padding_;
  this->bWasCachable = false;
  EVar9 = EVar8 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar9;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar8,EVar9);
  if (((this->bCanCache == false) || (GSlateEnableGlobalInvalidation != false)) ||
     (bInvalidationPanelsEnabled == false)) {
    EVar8 = (EWidgetUpdateFlags)this->_padding_;
    EVar9 = EVar8 & ~NeedsVolatilePrepass;
  }
  else {
    EVar8 = (EWidgetUpdateFlags)this->_padding_;
    EVar9 = EVar8 | NeedsVolatilePrepass;
  }
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar9;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar8,EVar9);
  (this->LastIncomingColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pFVar7 = FSlateApplicationBase::Get();
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddRaw<SInvalidationPanel>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pFVar7->OnGlobalInvalidationToggledEvent,(SInvalidationPanel *)&stack0x00000008,
             (pmf_a238ec8d *)this);
  return this;
}

// ~SInvalidationPanel @ 1429bf4c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SInvalidationPanel::~SInvalidationPanel(SInvalidationPanel *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FSlateInvalidationRoot__;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &(FSlateApplicationBase::CurrentBaseApplication.Object)->
                OnGlobalInvalidationToggledEvent,this);
  }
  pFVar1 = (this->DebugPaintName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((this->LastClippingState).bIsSet != false) &&
     (pFVar1 = (this->LastClippingState).TypedValue.StencilQuads.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HittestGrid).SharedReferenceCount.ReferenceController);
  FSlateInvalidationRoot::~FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Advanced_AsInvalidationRoot @ 1429c7400

FSlateInvalidationRoot * __thiscall
SInvalidationPanel::Advanced_AsInvalidationRoot(SInvalidationPanel *this)

{
  bool bVar1;
  SInvalidationPanel *pSVar2;
  SInvalidationPanel *pSVar3;
  
  if (((this->bCanCache == false) || (GSlateEnableGlobalInvalidation)) ||
     (bVar1 = true, !bInvalidationPanelsEnabled)) {
    bVar1 = false;
  }
  pSVar3 = (SInvalidationPanel *)0x0;
  if (bVar1) {
    pSVar3 = this;
  }
  pSVar2 = (SInvalidationPanel *)&pSVar3->_padding_;
  if (pSVar3 == (SInvalidationPanel *)0x0) {
    pSVar2 = (SInvalidationPanel *)0x0;
  }
  return (FSlateInvalidationRoot *)pSVar2;
}

// Advanced_IsInvalidationRoot @ 1429c7450

bool __thiscall SInvalidationPanel::Advanced_IsInvalidationRoot(SInvalidationPanel *this)

{
  if (((this->bCanCache != false) && (!GSlateEnableGlobalInvalidation)) &&
     (bInvalidationPanelsEnabled)) {
    return true;
  }
  return false;
}

// AreInvalidationPanelsEnabled @ 1429c8120

bool __cdecl SInvalidationPanel::AreInvalidationPanelsEnabled(void)

{
  return bInvalidationPanelsEnabled;
}

// Construct @ 1429d3730

void __thiscall SInvalidationPanel::Construct(SInvalidationPanel *this,FArguments *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  FScriptContainerElement *pFVar7;
  FString *pFVar8;
  FString local_48;
  FString local_38;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar5 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_Content).Widget.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = this->_padding_;
  pTStack_20 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar6;
  this->_padding_ = (longlong)pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  pFVar8 = &param_1->_DebugName;
  pFVar2 = &this->DebugName;
  if (pFVar2 != pFVar8) {
    iVar3 = (param_1->_DebugName).Data.ArrayNum;
    piVar1 = &(this->DebugName).Data.ArrayMax;
    iVar4 = *piVar1;
    pFVar7 = (pFVar8->Data).AllocatorInstance.Data;
    (this->DebugName).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar7,(longlong)iVar3 * 2);
      }
    }
  }
  ::FString::ConcatFC(&local_48,pFVar8,L"_Tick");
  pFVar2 = &this->DebugTickName;
  if (pFVar2 != &local_48) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->DebugTickName).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->DebugTickName).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_38,pFVar8,L"_Paint");
  pFVar2 = &this->DebugPaintName;
  if (pFVar2 != &local_38) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->DebugPaintName).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->DebugPaintName).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CustomPrepass @ 1429e33d0

bool __thiscall SInvalidationPanel::CustomPrepass(SInvalidationPanel *this,float param_1)

{
  FChildren *pFVar1;
  
  this->bPaintedSinceLastPrepass = false;
  if (((this->bCanCache != false) && (GSlateEnableGlobalInvalidation == false)) &&
     (bInvalidationPanelsEnabled != false)) {
    if ((char)this->_padding_ < '\0') {
      FSlateInvalidationRoot::SetNeedsSlowPath((FSlateInvalidationRoot *)&this->_padding_,true);
    }
    FSlateInvalidationRoot::ProcessInvalidation((FSlateInvalidationRoot *)&this->_padding_);
    if ((char)this->_padding_ != '\0') {
      pFVar1 = SCompoundWidget::GetChildren((SCompoundWidget *)this);
      SWidget::Prepass_ChildLoop((SWidget *)this,param_1,pFVar1);
    }
    return false;
  }
  return true;
}

// Debug_GetChildrenForReflector @ 1429e3580

FChildren * __thiscall SInvalidationPanel::Debug_GetChildrenForReflector(SInvalidationPanel *this)

{
  return (FChildren *)&this->_padding_;
}

// EnableInvalidationPanels @ 1429e41a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl SInvalidationPanel::EnableInvalidationPanels(bool param_1)

{
  FSlateApplicationBase *pFVar1;
  
  if ((bInvalidationPanelsEnabled != param_1) &&
     (bInvalidationPanelsEnabled = param_1, !GSlateEnableGlobalInvalidation)) {
    pFVar1 = FSlateApplicationBase::Get();
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pFVar1->OnGlobalInvalidationToggledEvent,GSlateEnableGlobalInvalidation);
    return;
  }
  return;
}

// GetAllChildren @ 1429e8dc0

FChildren * __thiscall SInvalidationPanel::GetAllChildren(SInvalidationPanel *this)

{
  return (FChildren *)&this->_padding_;
}

// GetCanCache @ 1429e92b0

bool __thiscall SInvalidationPanel::GetCanCache(SInvalidationPanel *this)

{
  if (((this->bCanCache != false) && (!GSlateEnableGlobalInvalidation)) &&
     (bInvalidationPanelsEnabled)) {
    return true;
  }
  return false;
}

// GetChildren @ 1429ea5d0

FChildren * __thiscall SInvalidationPanel::GetChildren(SInvalidationPanel *this)

{
  FChildren *pFVar1;
  
  if (((this->bCanCache != false) && (!GSlateEnableGlobalInvalidation)) &&
     (bInvalidationPanelsEnabled)) {
    return (FChildren *)&FNoChildren::NoChildrenInstance;
  }
  pFVar1 = SCompoundWidget::GetChildren((SCompoundWidget *)this);
  return pFVar1;
}

// GetPrivateWidgetClass @ 1429ed180

FSlateWidgetClassData * __cdecl SInvalidationPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SInvalidationPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SInvalidationPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetRootWidget @ 1429ed530

TSharedRef<SWidget,1> * __thiscall
SInvalidationPanel::GetRootWidget
          (SInvalidationPanel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FChildren *pFVar3;
  SWidget **ppSVar4;
  SWidget *pSVar5;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar5 = SNullWidget::NullWidget.Object;
  bVar1 = false;
  if (((*(char *)((longlong)&this->_padding_ + 4) == '\0') || (GSlateEnableGlobalInvalidation)) ||
     (!bInvalidationPanelsEnabled)) {
    local_28 = SNullWidget::NullWidget.Object;
    local_20 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = false;
    ppSVar4 = &local_28;
    bVar1 = true;
  }
  else {
    pFVar3 = SCompoundWidget::GetChildren((SCompoundWidget *)&this[-1]._padding_);
    ppSVar4 = (SWidget **)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_18,0);
    bVar2 = true;
    pSVar5 = *ppSVar4;
  }
  __return_storage_ptr__->Object = pSVar5;
  pSVar5 = ppSVar4[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  if (pSVar5 != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
    UNLOCK();
  }
  if (bVar1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return __return_storage_ptr__;
}

// GetWidgetClass @ 1429efea0

FSlateWidgetClassData * __thiscall SInvalidationPanel::GetWidgetClass(SInvalidationPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SInvalidationPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SInvalidationPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnGlobalInvalidationToggled @ 1429fa130

void __thiscall
SInvalidationPanel::OnGlobalInvalidationToggled(SInvalidationPanel *this,bool param_1)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  FSlateInvalidationRoot::ClearAllFastPathData((FSlateInvalidationRoot *)&this->_padding_,true);
  if (((this->bCanCache == false) || (GSlateEnableGlobalInvalidation != false)) ||
     (bInvalidationPanelsEnabled == false)) {
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    EVar2 = EVar1 & ~NeedsVolatilePrepass;
  }
  else {
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    EVar2 = EVar1 | NeedsVolatilePrepass;
  }
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  return;
}

// OnPaint @ 1429fd920

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SInvalidationPanel::OnPaint
          (SInvalidationPanel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  FHittestGrid *pFVar2;
  SInvalidationPanel *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_SlateInvalidationPaint> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  wchar_t *pwVar16;
  FName FVar17;
  bool bVar18;
  FColor_u_0 local_138 [2];
  FName local_130;
  FName local_128;
  TVector2<float>_u_0 local_118;
  TVector2<float>_u_0 local_110;
  TVector2<float>_u_0 local_108;
  LARGE_INTEGER local_100;
  TSharedRef<FHittestGrid_const_,1> local_f8;
  FStatMessage local_e8;
  FSlateInvalidationContext local_d8;
  FName local_98;
  FSlateInvalidationResult local_90;
  FPaintArgs local_80;
  
  if ((this->DebugPaintName).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(this->DebugPaintName).Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,pwVar16);
  if ((this->DebugPaintName).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(this->DebugPaintName).Data.AllocatorInstance.Data;
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar16,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SInvalidationPanel.cpp"
               ,0x123);
  }
  FVar15 = StatPtr_STAT_SlateInvalidationPaint;
  if (StatPtr_STAT_SlateInvalidationPaint ==
      (FThreadSafeStaticStat<FStat_STAT_SlateInvalidationPaint>)0x0) {
    pFVar14 = ::FName::FName(&local_98,"STAT_SlateInvalidationPaint");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_SlateInvalidationPaint>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateInvalidationPaint,*pFVar14,
                        L"SInvalidationPanel::Paint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar5 = false;
  bVar7 = false;
  FVar17 = *(FName *)FVar15;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_130.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SInvalidationPanel.cpp"
                   ,0x125);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_1429fdae5;
    }
  }
  bVar6 = false;
  FVar17 = local_128;
LAB_1429fdae5:
  this->bPaintedSinceLastPrepass = true;
  if (((this->bCanCache == false) || (GSlateEnableGlobalInvalidation != false)) ||
     (bInvalidationPanelsEnabled == false)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (bVar11 != this->bWasCachable) {
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
    this->bWasCachable = bVar11;
  }
  if (bVar11 == false) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"SInvalidationPanel Uncached");
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId353,"SInvalidationPanel Uncached",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SInvalidationPanel.cpp"
                 ,0x161);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId353);
    }
    iVar13 = SCompoundWidget::OnPaint
                       ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                        param_7);
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  else {
    pFVar2 = param_1->RootGrid;
    local_118 = (pFVar2->GridWindowOrigin).field0_0x0;
    local_110 = (pFVar2->GridSize).field0_0x0;
    local_108 = (pFVar2->GridOrigin).field0_0x0;
    bVar11 = FHittestGrid::SetHittestArea
                       ((this->HittestGrid).Object,(FDeprecateVector2DParameter *)&local_108._s_0,
                        (FDeprecateVector2DParameter *)&local_110._s_0,
                        (FDeprecateVector2DParameter *)&local_118._s_0);
    pFVar2 = (this->HittestGrid).Object;
    pSVar3 = (SInvalidationPanel *)pFVar2->Owner;
    if (((pSVar3 != (SInvalidationPanel *)0x0) && (pSVar3 != this)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner == nullptr || Owner == InOwner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Input\\HittestGrid.h"
                            ,0x41,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      iVar13 = (*pcVar4)();
      return iVar13;
    }
    pFVar2->Owner = (SWidget *)this;
    pFVar2 = (this->HittestGrid).Object;
    fVar8 = param_3->Top;
    fVar9 = param_3->Right;
    fVar10 = param_3->Bottom;
    (pFVar2->CullingRect).Left = param_3->Left;
    (pFVar2->CullingRect).Top = fVar8;
    (pFVar2->CullingRect).Right = fVar9;
    (pFVar2->CullingRect).Bottom = fVar10;
    FPaintArgs::FPaintArgs
              (&local_80,param_1->PaintParentPtr,param_1->RootGrid,(this->HittestGrid).Object,
               (FDeprecateVector2DParameter)(param_1->WindowOffset).field0_0x0._s_0,
               param_1->CurrentTime,param_1->DeltaTime);
    (local_80.CurrentGrid)->CurrentUserIndex = param_1->RootGrid->CurrentUserIndex;
    if ((GSlateEnableGlobalInvalidation != false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GSlateEnableGlobalInvalidation",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SInvalidationPanel.cpp"
                            ,0x140,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      iVar13 = (*pcVar4)();
      return iVar13;
    }
    bVar12 = UpdateCachePrequisites(this,param_4,param_2,param_3,param_5,param_6);
    if ((bVar11) || (bVar12)) {
      FSlateInvalidationRoot::InvalidateRootLayout
                ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)this);
    }
    local_d8.bParentEnabled = param_7;
    local_d8.ViewOffset = (FDeprecateSlateVector2D)0x0;
    local_d8.WidgetStyle = param_6;
    local_d8.WindowElementList = param_4;
    local_d8.bAllowFastPathUpdate = true;
    local_d8.LayoutScaleMultiplier = __real_3f800000;
    if ((this->_padding_ & 0x4000) != 0) {
      local_d8.LayoutScaleMultiplier = *(float *)((longlong)&this->_padding_ + 4);
    }
    local_d8.PaintArgs = &local_80;
    local_d8.IncomingLayerId = param_5;
    local_d8.CullingRect.Left = param_3->Left;
    local_d8.CullingRect.Top = param_3->Top;
    local_d8.CullingRect.Right = param_3->Right;
    local_d8.CullingRect.Bottom = param_3->Bottom;
    FSlateInvalidationRoot::PaintInvalidationRoot
              ((FSlateInvalidationRoot *)&this->_padding_,&local_90,&local_d8);
    iVar13 = local_90.MaxLayerIdPainted;
    if ((param_1->bInheritedHittestability != 0) && ((this->_padding_ & 0x1000) != 0)) {
      local_f8.Object = (this->HittestGrid).Object;
      pFVar2 = param_1->CurrentGrid;
      local_f8.SharedReferenceCount.ReferenceController =
           (this->HittestGrid).SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FHittestGrid::AddGrid(pFVar2,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      iVar13 = local_90.MaxLayerIdPainted;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e8.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar13;
}

// PaintSlowPath @ 142a02bb0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SInvalidationPanel::PaintSlowPath(SInvalidationPanel *this,FSlateInvalidationContext *param_1)

{
  bool bVar1;
  FWidgetStyle *pFVar2;
  FSlateWindowElementList *pFVar3;
  int iVar4;
  FGeometry *pFVar5;
  
  bVar1 = param_1->bParentEnabled;
  pFVar2 = param_1->WidgetStyle;
  iVar4 = param_1->IncomingLayerId;
  pFVar3 = param_1->WindowElementList;
  pFVar5 = SWidget::GetPaintSpaceGeometry((SWidget *)&this[-1]._padding_);
  iVar4 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)&this[-1]._padding_,param_1->PaintArgs,pFVar5,
                     &param_1->CullingRect,pFVar3,iVar4,pFVar2,bVar1);
  return iVar4;
}

// PrivateRegisterAttributes @ 142a02e70

void __cdecl SInvalidationPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  return;
}

// SetCanCache @ 142a07770

void __thiscall SInvalidationPanel::SetCanCache(SInvalidationPanel *this,bool param_1)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  if (this->bCanCache != param_1) {
    this->bCanCache = param_1;
    if (((param_1) && (GSlateEnableGlobalInvalidation == false)) &&
       (bInvalidationPanelsEnabled != false)) {
      EVar1 = (EWidgetUpdateFlags)this->_padding_;
      EVar2 = EVar1 | NeedsVolatilePrepass;
    }
    else {
      EVar1 = (EWidgetUpdateFlags)this->_padding_;
      EVar2 = EVar1 & ~NeedsVolatilePrepass;
    }
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
    return;
  }
  return;
}

// SetContent @ 142a07b50

void __thiscall
SInvalidationPanel::SetContent(SInvalidationPanel *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  return;
}

// UpdateCachePrequisites @ 142a124b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SInvalidationPanel::UpdateCachePrequisites
          (SInvalidationPanel *this,FSlateWindowElementList *param_1,FGeometry *param_2,
          FSlateRect *param_3,int param_4,FWidgetStyle *param_5)

{
  TOptional<FSlateClippingState> *this_00;
  int iVar1;
  FDeprecateSlateVector2D FVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  float local_res8;
  float fStackX_c;
  float local_res18;
  float fStackX_1c;
  TOptional<FSlateClippingState> local_78;
  
  bVar8 = bAlwaysInvalidate;
  if (this->LastIncomingLayerId < param_4) {
    this->LastIncomingLayerId = param_4;
    bVar8 = true;
  }
  FVar2 = (this->LastAllottedGeometry).Size;
  local_res8 = SUB84(param_2->Size,0);
  local_res18 = FVar2._0_4_;
  if ((local_res8 == local_res18) &&
     (fStackX_c = SUB84(param_2->Size,4), fStackX_1c = FVar2._4_4_, fStackX_c == fStackX_1c)) {
    bVar5 = TTransform2<float>::operator==
                      (&param_2->AccumulatedRenderTransform,
                       &(this->LastAllottedGeometry).AccumulatedRenderTransform);
    if (!bVar5) goto LAB_142a12542;
  }
  else {
LAB_142a12542:
    FGeometry::operator=(&this->LastAllottedGeometry,param_2);
    bVar8 = true;
  }
  fVar10 = param_3->Right - param_3->Left;
  auVar12 = roundps(in_XMM3,ZEXT416((uint)((param_3->Bottom - param_3->Top) + __real_3f000000)),1);
  auVar11 = roundps(ZEXT416((uint)fVar10),ZEXT416((uint)(fVar10 + __real_3f000000)),1);
  if (((double)auVar11._0_4_ != (this->LastClipRectSize).field0_0x0._s_0.X) ||
     ((double)auVar12._0_4_ != (this->LastClipRectSize).field0_0x0._s_0.Y)) {
    (this->LastClipRectSize).field0_0x0._s_0.X = (double)auVar11._0_4_;
    bVar8 = true;
    (this->LastClipRectSize).field0_0x0._s_0.Y = (double)auVar12._0_4_;
  }
  FSlateWindowElementList::GetClippingState(param_1,&local_78);
  cVar9 = local_78.bIsSet;
  FVar7.Data = local_78.TypedValue.StencilQuads.AllocatorInstance.Data;
  bVar5 = (this->LastClippingState).bIsSet;
  if (bVar5 == local_78.bIsSet) {
    if (bVar5 == false) {
      bVar6 = false;
      goto LAB_142a12697;
    }
    if ((this->LastClippingState).TypedValue.Flags == local_78.TypedValue.Flags) {
      bVar6 = (this->LastClippingState).TypedValue.ScissorRect.bIsSet;
      if (bVar6 == local_78.TypedValue.ScissorRect.bIsSet) {
        if (bVar6 != false) {
          bVar6 = FSlateClippingZone::operator==
                            (&(this->LastClippingState).TypedValue.ScissorRect.TypedValue,
                             &local_78.TypedValue.ScissorRect.TypedValue);
          if (!bVar6) goto LAB_142a12692;
        }
        iVar1 = (this->LastClippingState).TypedValue.StencilQuads.ArrayNum;
        if (iVar1 == local_78.TypedValue.StencilQuads.ArrayNum) {
          bVar6 = CompareItems<FSlateClippingZone,int>
                            ((FSlateClippingZone *)
                             (this->LastClippingState).TypedValue.StencilQuads.AllocatorInstance.
                             Data,(FSlateClippingZone *)FVar7.Data,iVar1);
          if (bVar6) {
            bVar6 = false;
            goto LAB_142a12697;
          }
        }
      }
    }
  }
LAB_142a12692:
  bVar6 = true;
LAB_142a12697:
  this_00 = &this->LastClippingState;
  if (bVar6) {
    if (&local_78 != this_00) {
      if ((bool)cVar9 == false) {
        if (bVar5 != false) {
          pFVar3 = (this_00->TypedValue).StencilQuads.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
            FVar7.Data = local_78.TypedValue.StencilQuads.AllocatorInstance.Data;
            cVar9 = local_78.bIsSet;
          }
          (this->LastClippingState).bIsSet = false;
        }
      }
      else {
        if (((this->LastClippingState).bIsSet != false) &&
           (pFVar3 = (this_00->TypedValue).StencilQuads.AllocatorInstance.Data,
           pFVar3 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(pFVar3);
        }
        FSlateClippingState::FSlateClippingState(&this_00->TypedValue,&local_78.TypedValue);
        (this->LastClippingState).bIsSet = true;
        FVar7.Data = local_78.TypedValue.StencilQuads.AllocatorInstance.Data;
        cVar9 = local_78.bIsSet;
      }
    }
    bVar8 = true;
  }
  if (((((param_5->ColorAndOpacityTint).field0_0x0._s_0.R !=
         (this->LastIncomingColorAndOpacity).field0_0x0._s_0.R) ||
       ((param_5->ColorAndOpacityTint).field0_0x0._s_0.G !=
        (this->LastIncomingColorAndOpacity).field0_0x0._s_0.G)) ||
      ((param_5->ColorAndOpacityTint).field0_0x0._s_0.B !=
       (this->LastIncomingColorAndOpacity).field0_0x0._s_0.B)) ||
     ((param_5->ColorAndOpacityTint).field0_0x0._s_0.A !=
      (this->LastIncomingColorAndOpacity).field0_0x0._s_0.A)) {
    uVar4 = *(undefined8 *)((longlong)&(param_5->ColorAndOpacityTint).field0_0x0 + 8);
    bVar8 = true;
    *(undefined8 *)&(this->LastIncomingColorAndOpacity).field0_0x0 =
         *(undefined8 *)&(param_5->ColorAndOpacityTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->LastIncomingColorAndOpacity).field0_0x0 + 8) = uVar4;
  }
  if ((cVar9 != '\0') && ((FSlateClippingZone *)FVar7.Data != (FSlateClippingZone *)0x0)) {
    FMemory::Free(FVar7.Data);
  }
  return bVar8;
}


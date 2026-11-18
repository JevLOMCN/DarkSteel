// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 18

// GetbCanCache_WrapperImpl @ 146967df0

void __cdecl UInvalidationBox::GetbCanCache_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  if (*(SInvalidationPanel **)((longlong)param_1 + 0x1d0) != (SInvalidationPanel *)0x0) {
    bVar1 = SInvalidationPanel::GetCanCache(*(SInvalidationPanel **)((longlong)param_1 + 0x1d0));
    *(bool *)param_2 = bVar1;
    return;
  }
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetbCanCache_WrapperImpl @ 146967e30

void __cdecl UInvalidationBox::SetbCanCache_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  SWidget *pSVar2;
  EWidgetUpdateFlags EVar3;
  EWidgetUpdateFlags EVar4;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1c8) = cVar1;
  pSVar2 = *(SWidget **)((longlong)param_1 + 0x1d0);
  if (pSVar2 == (SWidget *)0x0) {
    return;
  }
  if (pSVar2[1].field_0x1fc != cVar1) {
    pSVar2[1].field_0x1fc = cVar1;
    if (((cVar1 == '\0') || (GSlateEnableGlobalInvalidation != false)) ||
       (bInvalidationPanelsEnabled == false)) {
      EVar3 = pSVar2->UpdateFlags;
      EVar4 = EVar3 & ~NeedsVolatilePrepass;
    }
    else {
      EVar3 = pSVar2->UpdateFlags;
      EVar4 = EVar3 | NeedsVolatilePrepass;
    }
    pSVar2->UpdateFlags = EVar4;
    FWidgetProxyHandle::UpdateWidgetFlags(&pSVar2->FastPathProxyHandle,pSVar2,EVar3,EVar4);
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)
               &pSVar2[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame,
               (SWidget *)0x0);
    return;
  }
  return;
}

// StaticClass @ 146967e90

UClass * __cdecl UInvalidationBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"InvalidationBox",
               &Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton,
               StaticRegisterNativesUInvalidationBox,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInvalidationBox>,
               InternalVTableHelperCtorCaller<UInvalidationBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton;
}

// UInvalidationBox @ 14698ad20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInvalidationBox * __thiscall
UInvalidationBox::UInvalidationBox(UInvalidationBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyInvalidationPanel).Object = (SInvalidationPanel *)0x0;
  (this->MyInvalidationPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInvalidationBox @ 14698ad70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInvalidationBox * __thiscall
UInvalidationBox::UInvalidationBox(UInvalidationBox *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->bCanCache = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MyInvalidationPanel).Object = (SInvalidationPanel *)0x0;
  (this->MyInvalidationPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UInvalidationBox @ 1469930f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInvalidationBox::~UInvalidationBox(UInvalidationBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyInvalidationPanel).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetCanCache @ 1469ce2a0

bool __thiscall UInvalidationBox::GetCanCache(UInvalidationBox *this)

{
  SInvalidationPanel *this_00;
  bool bVar1;
  
  this_00 = (this->MyInvalidationPanel).Object;
  if (this_00 != (SInvalidationPanel *)0x0) {
    bVar1 = SInvalidationPanel::GetCanCache(this_00);
    return bVar1;
  }
  return this->bCanCache;
}

// GetPrivateStaticClass @ 1469d4570

UClass * __cdecl UInvalidationBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"InvalidationBox",
               &Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton,
               StaticRegisterNativesUInvalidationBox,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInvalidationBox>,
               InternalVTableHelperCtorCaller<UInvalidationBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInvalidationBox.InnerSingleton;
}

// InvalidateCache @ 1469e0910

void __thiscall UInvalidationBox::InvalidateCache(UInvalidationBox *this)

{
  return;
}

// OnSlotAdded @ 1469f07b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInvalidationBox::OnSlotAdded(UInvalidationBox *this,UPanelSlot *param_1)

{
  SInvalidationPanel *this_00;
  UWidget *this_01;
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyInvalidationPanel).Object;
  if (this_00 != (SInvalidationPanel *)0x0) {
    this_01 = (param_1->Content).field0_0x0.DebugPtr;
    if (this_01 != (UWidget *)0x0) {
      pTVar1 = UWidget::TakeWidget(this_01,&local_18);
      SInvalidationPanel::SetContent(this_00,pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return;
    }
    local_28.Object = SNullWidget::NullWidget.Object;
    local_28.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SInvalidationPanel::SetContent(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSlotRemoved @ 1469f1490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInvalidationBox::OnSlotRemoved(UInvalidationBox *this,UPanelSlot *param_1)

{
  SInvalidationPanel *this_00;
  
  this_00 = (this->MyInvalidationPanel).Object;
  if (this_00 != (SInvalidationPanel *)0x0) {
    SInvalidationPanel::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// RebuildWidget @ 146a00160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UInvalidationBox::RebuildWidget
          (UInvalidationBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SInvalidationPanel,1> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  SInvalidationPanel *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FArguments *pFVar8;
  FString *pFVar9;
  TSharedRef<SInvalidationPanel,1> *pTVar10;
  TSharedRef<SWidget,1> *pTVar11;
  UObject *pUVar12;
  int iVar13;
  UObject *pUVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SInvalidationPanel *local_2b8;
  FSharedReferencer<1> local_2b0;
  TSharedRef<SWidget,1> local_2a8;
  TSharedRef<SInvalidationPanel,1> local_298;
  TSharedRef<SWidget,1> local_288;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> local_278;
  FString local_260;
  FArguments local_250;
  
  pUVar12 = (UObject *)0x0;
  pFVar8 = SInvalidationPanel::FArguments::FArguments(&local_250);
  pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_260,(UObject *)0x0);
  iVar2 = (pFVar9->Data).ArrayNum;
  iVar13 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange
            (&pFVar8->_DebugName,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar13);
  pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
            (&local_278,"SInvalidationPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\InvalidationBox.cpp"
             ,0x22,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar10 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_278,&local_298,pFVar8);
  local_2b0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_2b8 = pTVar10->Object;
  if (local_2b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyInvalidationPanel;
  if (pTVar1 != (TSharedPtr<SInvalidationPanel,1> *)&local_2b8) {
    pTVar1->Object = local_2b8;
    local_2b8 = (SInvalidationPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInvalidationPanel).SharedReferenceCount,&local_2b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278._Widget.SharedReferenceCount.ReferenceController);
  if (local_250._DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250._DebugName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  if (pTVar1->Object == (SInvalidationPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  SInvalidationPanel::SetCanCache(pTVar1->Object,this->bCanCache);
  if (0 < (int)this->_padding_) {
    if (pTVar1->Object == (SInvalidationPanel *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar6)();
        return pTVar11;
      }
    }
    pSVar4 = pTVar1->Object;
    if ((int)this->_padding_ < 1) {
      pUVar14 = (UObject *)0x0;
    }
    else {
      pUVar14 = *(UObject **)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar14);
      }
    }
    if (*(longlong *)&pUVar14[1].field_0x8 == 0) {
      local_2a8.Object = SNullWidget::NullWidget.Object;
      local_2a8.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SInvalidationPanel::SetContent(pSVar4,&local_2a8);
      local_288.SharedReferenceCount.ReferenceController =
           local_2a8.SharedReferenceCount.ReferenceController;
    }
    else {
      if (((0 < (int)this->_padding_) &&
          (pUVar12 = *(UObject **)this->_padding_,
          UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      pTVar11 = UWidget::TakeWidget(*(UWidget **)&pUVar12[1].field_0x8,&local_288);
      SInvalidationPanel::SetContent(pSVar4,pTVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.SharedReferenceCount.ReferenceController);
  }
  if (pTVar1->Object == (SInvalidationPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pSVar4 = pTVar1->Object;
  pTVar5 = (this->MyInvalidationPanel).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SInvalidationPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a7a0

void __thiscall UInvalidationBox::ReleaseSlateResources(UInvalidationBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyInvalidationPanel != (TSharedPtr<SInvalidationPanel,1> *)&local_18) {
    (this->MyInvalidationPanel).Object = (SInvalidationPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInvalidationPanel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetCanCache @ 146a11e20

void __thiscall UInvalidationBox::SetCanCache(UInvalidationBox *this,bool param_1)

{
  SInvalidationPanel *pSVar1;
  EWidgetUpdateFlags EVar2;
  EWidgetUpdateFlags EVar3;
  
  this->bCanCache = param_1;
  pSVar1 = (this->MyInvalidationPanel).Object;
  if (pSVar1 == (SInvalidationPanel *)0x0) {
    return;
  }
  if (pSVar1->bCanCache != param_1) {
    pSVar1->bCanCache = param_1;
    if (((param_1) && (GSlateEnableGlobalInvalidation == false)) &&
       (bInvalidationPanelsEnabled != false)) {
      EVar2 = *(EWidgetUpdateFlags *)&pSVar1->_padding_;
      EVar3 = EVar2 | NeedsVolatilePrepass;
    }
    else {
      EVar2 = *(EWidgetUpdateFlags *)&pSVar1->_padding_;
      EVar3 = EVar2 & ~NeedsVolatilePrepass;
    }
    *(EWidgetUpdateFlags *)&pSVar1->_padding_ = EVar3;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pSVar1->_padding_,(SWidget *)pSVar1,EVar2,EVar3);
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&pSVar1->_padding_,(SWidget *)0x0);
    return;
  }
  return;
}

// StaticRegisterNativesUInvalidationBox @ 146a1e9e0

void __cdecl UInvalidationBox::StaticRegisterNativesUInvalidationBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInvalidationBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCanCache @ 146a34610

void __cdecl UInvalidationBox::execGetCanCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SInvalidationPanel **)&param_1[0xb].field_0x18 != (SInvalidationPanel *)0x0) {
    bVar1 = SInvalidationPanel::GetCanCache(*(SInvalidationPanel **)&param_1[0xb].field_0x18);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = param_1[0xb].field_0x10;
  return;
}

// execInvalidateCache @ 146a373f0

void __cdecl UInvalidationBox::execInvalidateCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetCanCache @ 146a3ad30

void __cdecl UInvalidationBox::execSetCanCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x10 = local_res8[0] != 0;
  if (*(SInvalidationPanel **)&param_1[0xb].field_0x18 != (SInvalidationPanel *)0x0) {
    SInvalidationPanel::SetCanCache
              (*(SInvalidationPanel **)&param_1[0xb].field_0x18,local_res8[0] != 0);
  }
  return;
}


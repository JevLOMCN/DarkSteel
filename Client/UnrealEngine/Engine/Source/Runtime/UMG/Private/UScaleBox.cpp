// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 34

// GetStretch_WrapperImpl @ 146963e90

void __cdecl UScaleBox::GetStretch_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetStretch_WrapperImpl @ 146963f60

void __cdecl UScaleBox::SetStretch_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1c8) = bVar1;
  if (*(SScaleBox **)((longlong)param_1 + 0x1d8) != (SScaleBox *)0x0) {
    SScaleBox::SetStretch(*(SScaleBox **)((longlong)param_1 + 0x1d8),(uint)bVar1);
    return;
  }
  return;
}

// GetStretchDirection_WrapperImpl @ 146963f90

void __cdecl UScaleBox::GetStretchDirection_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c9);
  return;
}

// SetStretchDirection_WrapperImpl @ 146963fb0

void __cdecl UScaleBox::SetStretchDirection_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1c9) = bVar1;
  if (*(SScaleBox **)((longlong)param_1 + 0x1d8) != (SScaleBox *)0x0) {
    SScaleBox::SetStretchDirection(*(SScaleBox **)((longlong)param_1 + 0x1d8),(uint)bVar1);
    return;
  }
  return;
}

// GetUserSpecifiedScale_WrapperImpl @ 146963ff0

void __cdecl UScaleBox::GetUserSpecifiedScale_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1cc);
  return;
}

// SetUserSpecifiedScale_WrapperImpl @ 146964000

void __cdecl UScaleBox::SetUserSpecifiedScale_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  SWidget *pSVar2;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1cc) = fVar1;
  pSVar2 = *(SWidget **)((longlong)param_1 + 0x1d8);
  if (pSVar2 == (SWidget *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar2[1].PersistentState.InitialClipState.bIsSet,pSVar2,Member
            );
  if (fVar1 != *(float *)&pSVar2[1].PersistentState.InitialClipState.bIsSet) {
    *(float *)&pSVar2[1].PersistentState.InitialClipState.bIsSet = fVar1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar2[1].PersistentState.InitialClipState.bIsSet,pSVar2,
               Member,None);
  }
  return;
}

// GetIgnoreInheritedScale_WrapperImpl @ 146964050

void __cdecl UScaleBox::GetIgnoreInheritedScale_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1d0);
  return;
}

// SetIgnoreInheritedScale_WrapperImpl @ 1469640a0

void __cdecl UScaleBox::SetIgnoreInheritedScale_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  SWidget *pSVar2;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1d0) = cVar1;
  pSVar2 = *(SWidget **)((longlong)param_1 + 0x1d8);
  if (pSVar2 == (SWidget *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar2[1].PersistentState.InitialClipState.field_0x4c,pSVar2,
             Member);
  if (pSVar2[1].PersistentState.InitialClipState.field_0x4c != cVar1) {
    pSVar2[1].PersistentState.InitialClipState.field_0x4c = cVar1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar2[1].PersistentState.InitialClipState.field_0x4c,pSVar2,
               Member,None);
  }
  return;
}

// StaticClass @ 146964130

UClass * __cdecl UScaleBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBox",&Z_Registration_Info_UClass_UScaleBox.InnerSingleton,
               StaticRegisterNativesUScaleBox,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleBox>,InternalVTableHelperCtorCaller<UScaleBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBox.InnerSingleton;
}

// UScaleBox @ 14698ce80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScaleBox * __thiscall UScaleBox::UScaleBox(UScaleBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyScaleBox).Object = (SScaleBox *)0x0;
  (this->MyScaleBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UScaleBox @ 14698ced0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScaleBox * __thiscall UScaleBox::UScaleBox(UScaleBox *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MyScaleBox).Object = (SScaleBox *)0x0;
  (this->MyScaleBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->Stretch = '\x02';
  this->StretchDirection = '\0';
  this->UserSpecifiedScale = 1.0;
  this->IgnoreInheritedScale = false;
  return this;
}

// ~UScaleBox @ 146993f20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScaleBox::~UScaleBox(UScaleBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyScaleBox).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d56a0

UClass * __cdecl UScaleBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBox",&Z_Registration_Info_UClass_UScaleBox.InnerSingleton,
               StaticRegisterNativesUScaleBox,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleBox>,InternalVTableHelperCtorCaller<UScaleBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBox.InnerSingleton;
}

// GetSlotClass @ 1469d8770

UClass * __thiscall UScaleBox::GetSlotClass(UScaleBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBoxSlot",
               &Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton,
               UScaleBoxSlot::StaticRegisterNativesUScaleBoxSlot,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UScaleBoxSlot>,
               InternalVTableHelperCtorCaller<UScaleBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton;
}

// GetStretch @ 1469d8a30

Type __thiscall UScaleBox::GetStretch(UScaleBox *this)

{
  return (Type)(this->Stretch).Value;
}

// GetStretchDirection @ 1469d8a50

Type __thiscall UScaleBox::GetStretchDirection(UScaleBox *this)

{
  return (Type)(this->StretchDirection).Value;
}

// GetUserSpecifiedScale @ 1469d9730

float __thiscall UScaleBox::GetUserSpecifiedScale(UScaleBox *this)

{
  return this->UserSpecifiedScale;
}

// IsIgnoreInheritedScale @ 1469e1830

bool __thiscall UScaleBox::IsIgnoreInheritedScale(UScaleBox *this)

{
  return this->IgnoreInheritedScale;
}

// OnSlotAdded @ 1469f0be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScaleBox::OnSlotAdded(UScaleBox *this,UPanelSlot *param_1)

{
  code *pcVar1;
  bool bVar2;
  UScaleBoxSlot *this_00;
  TSharedRef<SScaleBox,1> local_18;
  
  if ((this->MyScaleBox).Object != (SScaleBox *)0x0) {
    this_00 = CastChecked<UScaleBoxSlot,UPanelSlot>(param_1);
    if ((this->MyScaleBox).Object == (SScaleBox *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18.SharedReferenceCount.ReferenceController =
         (this->MyScaleBox).SharedReferenceCount.ReferenceController;
    local_18.Object = (this->MyScaleBox).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_18.Object == (SScaleBox *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UScaleBoxSlot::BuildSlot(this_00,&local_18);
  }
  return;
}

// OnSlotRemoved @ 1469f1690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScaleBox::OnSlotRemoved(UScaleBox *this,UPanelSlot *param_1)

{
  SScaleBox *this_00;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyScaleBox).Object;
  if (this_00 != (SScaleBox *)0x0) {
    local_18.Object = SNullWidget::NullWidget.Object;
    local_18.SharedReferenceCount.ReferenceController =
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
    SScaleBox::SetContent(this_00,&local_18);
  }
  return;
}

// RebuildWidget @ 146a045d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UScaleBox::RebuildWidget(UScaleBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SScaleBox,1> *this_00;
  UPanelSlot *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  SScaleBox *pSVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SScaleBox,1> *pTVar7;
  UScaleBoxSlot *this_01;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<SScaleBox,1> local_308;
  TSharedRef<SScaleBox,1> local_2f8;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_2e8;
  TSharedRef<SScaleBox,1> local_2d0;
  FArguments local_2c0;
  
  pFVar6 = SScaleBox::FArguments::FArguments(&local_2c0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_2e8,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScaleBox.cpp"
             ,0x25,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2e8,&local_2f8,pFVar6);
  local_308.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  local_308.Object = pTVar7->Object;
  if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MyScaleBox;
  if (this_00 != &local_308) {
    this_00->Object = local_308.Object;
    local_308.Object = (SScaleBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScaleBox).SharedReferenceCount,&local_308.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8._Widget.SharedReferenceCount.ReferenceController);
  SScaleBox::FArguments::~FArguments(&local_2c0);
  if (0 < (int)this->_padding_) {
    pUVar1 = *(UPanelSlot **)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this_01 = CastChecked<UScaleBoxSlot,UPanelSlot>(pUVar1);
    pTVar7 = TSharedPtr<SScaleBox,1>::ToSharedRef(this_00,&local_2d0);
    UScaleBoxSlot::BuildSlot(this_01,pTVar7);
  }
  if (this_00->Object == (SScaleBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar2 = (this->MyScaleBox).SharedReferenceCount.ReferenceController;
  pSVar3 = this_00->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SScaleBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b0f0

void __thiscall UScaleBox::ReleaseSlateResources(UScaleBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyScaleBox != (TSharedPtr<SScaleBox,1> *)&local_18) {
    (this->MyScaleBox).Object = (SScaleBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyScaleBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Serialize @ 146a10b00

void __thiscall UScaleBox::Serialize(UScaleBox *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a10b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  return;
}

// Serialize @ 146a10b30

void __thiscall UScaleBox::Serialize(UScaleBox *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEditorObjectVersion::GUID);
  return;
}

// SetIgnoreInheritedScale @ 146a15580

void __thiscall UScaleBox::SetIgnoreInheritedScale(UScaleBox *this,bool param_1)

{
  SScaleBox *pSVar1;
  
  this->IgnoreInheritedScale = param_1;
  pSVar1 = (this->MyScaleBox).Object;
  if (pSVar1 == (SScaleBox *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar1->IgnoreInheritedScaleAttribute,(SWidget *)pSVar1,Member)
  ;
  if (pSVar1->IgnoreInheritedScaleAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1) {
    pSVar1->IgnoreInheritedScaleAttribute =
         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar1->IgnoreInheritedScaleAttribute,(SWidget *)pSVar1,
               Member,None);
  }
  return;
}

// SetStretch @ 146a1b9e0

void __thiscall UScaleBox::SetStretch(UScaleBox *this,Type param_1)

{
  SScaleBox *pSVar1;
  
  (this->Stretch).Value = (uchar)param_1;
  pSVar1 = (this->MyScaleBox).Object;
  if (pSVar1 == (SScaleBox *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar1->StretchAttribute,(SWidget *)pSVar1,Member);
  if (pSVar1->StretchAttribute !=
      (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1)
  {
    pSVar1->StretchAttribute =
         (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
         param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar1->StretchAttribute,(SWidget *)pSVar1,Member,None);
  }
  return;
}

// SetStretchDirection @ 146a1ba60

void __thiscall UScaleBox::SetStretchDirection(UScaleBox *this,Type param_1)

{
  SScaleBox *pSVar1;
  
  (this->StretchDirection).Value = (uchar)param_1;
  pSVar1 = (this->MyScaleBox).Object;
  if (pSVar1 == (SScaleBox *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar1->StretchDirectionAttribute,(SWidget *)pSVar1,Member);
  if (pSVar1->StretchDirectionAttribute !=
      (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
      param_1) {
    pSVar1->StretchDirectionAttribute =
         (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          )param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar1->StretchDirectionAttribute,(SWidget *)pSVar1,Member,
               None);
  }
  return;
}

// SetUserSpecifiedScale @ 146a1d2a0

void __thiscall UScaleBox::SetUserSpecifiedScale(UScaleBox *this,float param_1)

{
  SScaleBox *pSVar1;
  
  this->UserSpecifiedScale = param_1;
  pSVar1 = (this->MyScaleBox).Object;
  if (pSVar1 == (SScaleBox *)0x0) {
    return;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&pSVar1->UserSpecifiedScaleAttribute,(SWidget *)pSVar1,Member);
  if (param_1 != (float)pSVar1->UserSpecifiedScaleAttribute) {
    pSVar1->UserSpecifiedScaleAttribute =
         (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar1->UserSpecifiedScaleAttribute,(SWidget *)pSVar1,Member,
               None);
  }
  return;
}

// StaticRegisterNativesUScaleBox @ 146a1edf0

void __cdecl UScaleBox::StaticRegisterNativesUScaleBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UScaleBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScaleBox::SynchronizeProperties(UScaleBox *this)

{
  SScaleBox *this_00;
  code *pcVar1;
  bool bVar2;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyScaleBox).Object;
  if (this_00 == (SScaleBox *)0x0) {
    return;
  }
  SScaleBox::SetStretchDirection(this_00,(uint)(this->StretchDirection).Value);
  if ((this->MyScaleBox).Object == (SScaleBox *)0x0) {
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
  SScaleBox::SetStretch((this->MyScaleBox).Object,(uint)(this->Stretch).Value);
  if ((this->MyScaleBox).Object == (SScaleBox *)0x0) {
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
  SScaleBox::SetUserSpecifiedScale((this->MyScaleBox).Object,this->UserSpecifiedScale);
  if ((this->MyScaleBox).Object == (SScaleBox *)0x0) {
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
  SScaleBox::SetIgnoreInheritedScale((this->MyScaleBox).Object,this->IgnoreInheritedScale);
  return;
}

// execSetIgnoreInheritedScale @ 146a3dbf0

void __cdecl UScaleBox::execSetIgnoreInheritedScale(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0xb].field_0x18 = local_res8[0] != 0;
  if (*(SScaleBox **)&param_1[0xb].field_0x20 != (SScaleBox *)0x0) {
    SScaleBox::SetIgnoreInheritedScale(*(SScaleBox **)&param_1[0xb].field_0x20,local_res8[0] != 0);
  }
  return;
}

// execSetStretch @ 146a42fc0

void __cdecl UScaleBox::execSetStretch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x10 = local_res8[0];
  if (*(SScaleBox **)&param_1[0xb].field_0x20 != (SScaleBox *)0x0) {
    SScaleBox::SetStretch(*(SScaleBox **)&param_1[0xb].field_0x20,(uint)local_res8[0]);
  }
  return;
}

// execSetStretchDirection @ 146a43050

void __cdecl UScaleBox::execSetStretchDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x11 = local_res8[0];
  if (*(SScaleBox **)&param_1[0xb].field_0x20 != (SScaleBox *)0x0) {
    SScaleBox::SetStretchDirection(*(SScaleBox **)&param_1[0xb].field_0x20,(uint)local_res8[0]);
  }
  return;
}

// execSetUserSpecifiedScale @ 146a43fc0

void __cdecl UScaleBox::execSetUserSpecifiedScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0xb].field_0x14 = local_res8[0];
  if (*(SScaleBox **)&param_1[0xb].field_0x20 != (SScaleBox *)0x0) {
    SScaleBox::SetUserSpecifiedScale(*(SScaleBox **)&param_1[0xb].field_0x20,local_res8[0]);
  }
  return;
}


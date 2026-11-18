// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 46

// GetBorderBrush_WrapperImpl @ 146958ef0

void __cdecl UExpandableArea::GetBorderBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  pFVar1 = FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)((longlong)param_1 + 0x340));
  FSlateBrush::operator=(param_2,pFVar1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetBorderBrush_WrapperImpl @ 146958f40

void __cdecl UExpandableArea::SetBorderBrush_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FSlateBrush::operator!=((FSlateBrush *)((longlong)param_1 + 0x340),param_2);
  if (bVar2) {
    FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x340),param_2);
    if (*(SExpandableArea **)((longlong)param_1 + 0x458) != (SExpandableArea *)0x0) {
      SExpandableArea::SetBorderBrush(*(SExpandableArea **)((longlong)param_1 + 0x458),param_2);
      if (*(longlong *)((longlong)param_1 + 0x458) == 0) {
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
      SExpandableArea::InvalidateBorderBrush(*(SExpandableArea **)((longlong)param_1 + 0x458));
    }
  }
  return;
}

// GetBorderColor_WrapperImpl @ 1469590f0

void __cdecl UExpandableArea::GetBorderColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x3f8);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x400);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x3f0);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x10) = uVar1;
  return;
}

// SetBorderColor_WrapperImpl @ 146959110

void __cdecl UExpandableArea::SetBorderColor_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FDestructionSentinel FStack_58;
  FLinearColor_u_0 FStack_40;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  uVar3 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x3f0) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x3f8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x400) = *(undefined4 *)((longlong)param_2 + 0x10);
  lVar1 = *(longlong *)((longlong)param_1 + 0x458);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x2c0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x106,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x2c0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_30 = *(undefined4 *)((longlong)param_2 + 0x10);
  FStack_40._0_8_ = *(undefined8 *)param_2;
  FStack_40._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  uStack_2c = 1;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&(*(SWidget **)(lVar1 + 0x2c0))[1].PersistentState.InitialClipState.bIsSet,
           *(SWidget **)(lVar1 + 0x2c0),(TAttribute<FSlateColor> *)&FStack_40._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_58);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// GetbIsExpanded_WrapperImpl @ 146959140

void __cdecl UExpandableArea::GetbIsExpanded_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x404);
  return;
}

// SetbIsExpanded_WrapperImpl @ 146959190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UExpandableArea::SetbIsExpanded_WrapperImpl(void *param_1,void *param_2)

{
  SetIsExpanded(param_1,*(bool *)param_2);
  return;
}

// GetMaxHeight_WrapperImpl @ 1469591a0

void __cdecl UExpandableArea::GetMaxHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x408);
  return;
}

// SetMaxHeight_WrapperImpl @ 1469591e0

void __cdecl UExpandableArea::SetMaxHeight_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  SWidget *this;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x408) = fVar1;
  this = *(SWidget **)((longlong)param_1 + 0x458);
  if (this == (SWidget *)0x0) {
    return;
  }
  if (fVar1 != (float)this[1].PersistentState.OutgoingLayerId) {
    this[1].PersistentState.OutgoingLayerId = (int)fVar1;
    SWidget::Invalidate(this,Layout);
    return;
  }
  return;
}

// GetHeaderPadding_WrapperImpl @ 146959210

void __cdecl UExpandableArea::GetHeaderPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x414);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x40c);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetHeaderPadding_WrapperImpl @ 146959230

void __cdecl UExpandableArea::SetHeaderPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FMargin local_18;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x40c) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x414) = uVar1;
  if (*(SExpandableArea **)((longlong)param_1 + 0x458) != (SExpandableArea *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    SExpandableArea::SetHeaderPadding(*(SExpandableArea **)((longlong)param_1 + 0x458),&local_18);
  }
  return;
}

// GetAreaPadding_WrapperImpl @ 146959270

void __cdecl UExpandableArea::GetAreaPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x424);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x41c);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetAreaPadding_WrapperImpl @ 1469592d0

void __cdecl UExpandableArea::SetAreaPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FMargin local_18;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x41c) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x424) = uVar1;
  if (*(SExpandableArea **)((longlong)param_1 + 0x458) != (SExpandableArea *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    SExpandableArea::SetAreaPadding(*(SExpandableArea **)((longlong)param_1 + 0x458),&local_18);
  }
  return;
}

// StaticClass @ 146959310

UClass * __cdecl UExpandableArea::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExpandableArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ExpandableArea",
               &Z_Registration_Info_UClass_UExpandableArea.InnerSingleton,
               StaticRegisterNativesUExpandableArea,0x470,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExpandableArea>,
               InternalVTableHelperCtorCaller<UExpandableArea>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExpandableArea.InnerSingleton;
}

// UExpandableArea @ 14698a1f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UExpandableArea * __thiscall
UExpandableArea::UExpandableArea(UExpandableArea *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UExpandableArea__6B_;
  FExpandableAreaStyle::FExpandableAreaStyle(&this->Style);
  FSlateBrush::FSlateBrush(&this->BorderBrush);
  *(undefined8 *)&(this->BorderColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BorderColor).ColorUseRule = UseColor_Specified;
  (this->HeaderPadding).Left = 0.0;
  (this->HeaderPadding).Top = 0.0;
  (this->HeaderPadding).Right = 0.0;
  (this->HeaderPadding).Bottom = 0.0;
  (this->AreaPadding).Left = 0.0;
  (this->AreaPadding).Top = 0.0;
  (this->AreaPadding).Right = 0.0;
  (this->AreaPadding).Bottom = 0.0;
  *(undefined8 *)&this->OnExpansionChanged = 0;
  *(undefined8 *)&(this->OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnExpansionChanged).field_0x10 = 0;
  (this->HeaderContent).field0_0x0.DebugPtr = (UWidget *)0x0;
  (this->BodyContent).field0_0x0.DebugPtr = (UWidget *)0x0;
  (this->MyExpandableArea).Object = (SExpandableArea *)0x0;
  (this->MyExpandableArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  return this;
}

// UExpandableArea @ 14698a2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UExpandableArea * __thiscall
UExpandableArea::UExpandableArea(UExpandableArea *this,FObjectInitializer *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FDefaultStyleCache *pFVar4;
  uint local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UExpandableArea__6B_;
  FExpandableAreaStyle::FExpandableAreaStyle(&this->Style);
  FSlateBrush::FSlateBrush(&this->BorderBrush);
  this->field_0xf9 = this->field_0xf9 | 1;
  (this->BorderColor).ColorUseRule = UseColor_Specified;
  this->bIsExpanded = false;
  (this->HeaderPadding).Left = 0.0;
  (this->HeaderPadding).Top = 0.0;
  (this->HeaderPadding).Right = 0.0;
  (this->HeaderPadding).Bottom = 0.0;
  (this->AreaPadding).Left = 0.0;
  (this->AreaPadding).Top = 0.0;
  (this->AreaPadding).Right = 0.0;
  (this->AreaPadding).Bottom = 0.0;
  *(undefined8 *)&this->OnExpansionChanged = 0;
  *(undefined8 *)&(this->OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnExpansionChanged).field_0x10 = 0;
  (this->HeaderContent).field0_0x0.DebugPtr = (UWidget *)0x0;
  (this->BodyContent).field0_0x0.DebugPtr = (UWidget *)0x0;
  (this->MyExpandableArea).Object = (SExpandableArea *)0x0;
  (this->MyExpandableArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->BorderColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=
            (&(this->Style).CollapsedImage,&(pFVar4->Runtime).ExpandableAreaStyle.CollapsedImage);
  FSlateBrush::operator=
            (&(this->Style).ExpandedImage,&(pFVar4->Runtime).ExpandableAreaStyle.ExpandedImage);
  (this->Style).RolloutAnimationSeconds =
       (pFVar4->Runtime).ExpandableAreaStyle.RolloutAnimationSeconds;
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=(&this->BorderBrush,&(pFVar4->Runtime).ExpandableAreaBorderBrush);
  local_18 = local_18 & 0xffffff00;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->BorderColor).ColorUseRule = (undefined1)local_18;
  uVar2 = _UNK_15076b1f8;
  (this->BorderColor).ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->BorderColor).field_0x12 = local_18._2_2_;
  uVar1 = _UNK_15076b1f4;
  (this->AreaPadding).Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  uVar3 = _UNK_15076b1f8;
  (this->AreaPadding).Top = (float)uVar1;
  _UNK_15076b1f8 = (undefined4)uVar2;
  _UNK_15076b1fc = SUB84(uVar2,4);
  uVar1 = _UNK_15076b1fc;
  (this->AreaPadding).Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar3;
  (this->AreaPadding).Bottom = (float)uVar1;
  (this->HeaderPadding).Left = 4.0;
  (this->HeaderPadding).Top = 2.0;
  (this->HeaderPadding).Right = 4.0;
  (this->HeaderPadding).Bottom = 2.0;
  return this;
}

// ~UExpandableArea @ 146992d70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::~UExpandableArea(UExpandableArea *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UExpandableArea__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyExpandableArea).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExpansionChanged);
  pTVar2 = (this->BorderBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FExpandableAreaStyle::~FExpandableAreaStyle(&this->Style);
  *(undefined ***)&this->field_0x1b0 = &___7INamedSlotInterface__6B_;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAreaPadding @ 1469cd110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
UExpandableArea::GetAreaPadding(UExpandableArea *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->AreaPadding).Top;
  fVar2 = (this->AreaPadding).Right;
  fVar3 = (this->AreaPadding).Bottom;
  __return_storage_ptr__->Left = (this->AreaPadding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetBorderBrush @ 1469cd960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall UExpandableArea::GetBorderBrush(UExpandableArea *this)

{
  return &this->BorderBrush;
}

// GetBorderColor @ 1469cd970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall UExpandableArea::GetBorderColor(UExpandableArea *this)

{
  return &this->BorderColor;
}

// GetContentForSlot @ 1469ce9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UExpandableArea::GetContentForSlot(UExpandableArea *this,FName param_1)

{
  if (param_1 == HeaderName) {
    return *(UWidget **)&(this->Style).ExpandedImage.TintColor.ColorUseRule;
  }
  if (param_1 == BodyName) {
    return (UWidget *)(this->Style).ExpandedImage.ImageSize;
  }
  return (UWidget *)0x0;
}

// GetFieldNotificationDescriptor @ 1469d04e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UExpandableArea::GetFieldNotificationDescriptor(UExpandableArea *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UExpandableArea::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetHeaderPadding @ 1469d0fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
UExpandableArea::GetHeaderPadding(UExpandableArea *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->HeaderPadding).Top;
  fVar2 = (this->HeaderPadding).Right;
  fVar3 = (this->HeaderPadding).Bottom;
  __return_storage_ptr__->Left = (this->HeaderPadding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetIsExpanded @ 1469d1670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UExpandableArea::GetIsExpanded(UExpandableArea *this)

{
  return this->bIsExpanded;
}

// GetMaxHeight @ 1469d1ca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UExpandableArea::GetMaxHeight(UExpandableArea *this)

{
  return this->MaxHeight;
}

// GetPrivateStaticClass @ 1469d4030

UClass * __cdecl UExpandableArea::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExpandableArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ExpandableArea",
               &Z_Registration_Info_UClass_UExpandableArea.InnerSingleton,
               StaticRegisterNativesUExpandableArea,0x470,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExpandableArea>,
               InternalVTableHelperCtorCaller<UExpandableArea>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExpandableArea.InnerSingleton;
}

// GetSlotNames @ 1469d87d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UExpandableArea::GetSlotNames
          (UExpandableArea *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x1551b7261) &&
     (&HeaderName < (FName *)(pFVar1 + (longlong)param_1->ArrayMax * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = HeaderName;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x1551b7269) &&
     (&BodyName < (FName *)(pFVar1 + (longlong)param_1->ArrayMax * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = BodyName;
  return;
}

// GetStyle @ 1469d8a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FExpandableAreaStyle * __thiscall UExpandableArea::GetStyle(UExpandableArea *this)

{
  return &this->Style;
}

// RebuildWidget @ 1469fe750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UExpandableArea::RebuildWidget(UExpandableArea *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  UWidget *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SExpandableArea *pSVar6;
  code *pcVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FArguments *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  SWidget *pSVar17;
  undefined4 local_res8 [2];
  TSharedRef<SWidget,1> *local_res10;
  FName local_res18;
  UExpandableArea *local_res20;
  undefined1 local_638 [8];
  FDelegateAllocation local_630;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_620;
  FMemScope local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  SExpandableArea *local_5f8;
  FSharedReferencer<1> local_5f0;
  FSlateBrush *local_5e8;
  undefined1 local_5e0;
  undefined1 local_5d8 [8];
  void *pvStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined1 local_5ac;
  undefined1 local_5a8 [8];
  void *pvStack_5a0;
  undefined8 local_598;
  TSharedRef<SWidget,1> local_590;
  TSharedRef<SWidget,1> local_580;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined1 local_560;
  undefined1 local_558 [8];
  void *pvStack_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined1 local_530;
  undefined1 local_528 [8];
  void *pvStack_520;
  undefined8 local_518;
  SWidget *local_510;
  undefined8 uStack_508;
  FDestructionSentinel local_500;
  FDestructionSentinel local_4e8;
  FDelegateAllocation *local_4d0;
  TSharedRef<SWidget,1> local_4c8;
  TSharedRef<SWidget,1> local_4b8;
  SWidget *local_4a8;
  TReferenceControllerBase<1> *pTStack_4a0;
  FArguments local_498;
  
  local_res8[0] = 0;
  pUVar2 = (this->HeaderContent).field0_0x0.DebugPtr;
  local_res10 = __return_storage_ptr__;
  if (pUVar2 == (UWidget *)0x0) {
    local_590.Object = SNullWidget::NullWidget.Object;
    local_res18 = (FName)SNullWidget::NullWidget.Object;
    local_590.SharedReferenceCount.ReferenceController =
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
    pTVar13 = &local_590;
    bVar8 = false;
    bVar10 = true;
  }
  else {
    pTVar13 = UWidget::TakeWidget(pUVar2,&local_4c8);
    bVar8 = true;
    bVar10 = false;
    local_res18 = (FName)pTVar13->Object;
  }
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_590.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
  }
  pSVar17 = SNullWidget::NullWidget.Object;
  pUVar2 = (this->BodyContent).field0_0x0.DebugPtr;
  if (pUVar2 == (UWidget *)0x0) {
    local_580.Object = SNullWidget::NullWidget.Object;
    local_580.SharedReferenceCount.ReferenceController =
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
    pTVar13 = &local_580;
    bVar8 = false;
    bVar10 = true;
  }
  else {
    pTVar13 = UWidget::TakeWidget(pUVar2,&local_4b8);
    bVar8 = true;
    bVar10 = false;
    pSVar17 = pTVar13->Object;
  }
  pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_580.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b8.SharedReferenceCount.ReferenceController);
  }
  pFVar14 = SExpandableArea::FArguments::FArguments(&local_498);
  pFVar14->_Style = &this->Style;
  local_5e8 = &this->BorderBrush;
  local_5e0 = 1;
  local_5c8 = 0;
  local_5d8 = (undefined1  [8])0x0;
  pvStack_5d0 = (void *)0x0;
  (pFVar14->_BorderImage).Value = local_5e8;
  (pFVar14->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
  if (pvStack_5d0 != (void *)0x0) {
    FMemory::Free(pvStack_5d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d8);
  local_5b0._0_1_ = (this->BorderColor).ColorUseRule;
  local_5b0._1_1_ = (this->BorderColor).ColorTableId;
  local_5b0._2_2_ = *(undefined2 *)&(this->BorderColor).field_0x12;
  local_5c0 = *(undefined8 *)&(this->BorderColor).SpecifiedColor.field0_0x0;
  uStack_5b8 = *(undefined8 *)((longlong)&(this->BorderColor).SpecifiedColor.field0_0x0 + 8);
  local_5ac = 1;
  local_598 = 0;
  local_5a8 = (undefined1  [8])0x0;
  pvStack_5a0 = (void *)0x0;
  *(undefined8 *)&(pFVar14->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_5c0;
  *(undefined8 *)((longlong)&(pFVar14->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_5b8;
  (pFVar14->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_5b0;
  (pFVar14->_BorderBackgroundColor).Value.ColorTableId = local_5b0._1_1_;
  *(undefined2 *)&(pFVar14->_BorderBackgroundColor).Value.field_0x12 = local_5b0._2_2_;
  (pFVar14->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  if (pvStack_5a0 != (void *)0x0) {
    FMemory::Free(pvStack_5a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a8);
  pFVar14->_MaxHeight = this->MaxHeight;
  local_570._0_4_ = (this->AreaPadding).Left;
  local_570._4_4_ = (this->AreaPadding).Top;
  uStack_568._0_4_ = (this->AreaPadding).Right;
  uStack_568._4_4_ = (this->AreaPadding).Bottom;
  local_560 = 1;
  local_548 = 0;
  local_558 = (undefined1  [8])0x0;
  pvStack_550 = (void *)0x0;
  (pFVar14->_Padding).Value.Left = (float)(undefined4)local_570;
  (pFVar14->_Padding).Value.Top = (float)local_570._4_4_;
  (pFVar14->_Padding).Value.Right = (float)(undefined4)uStack_568;
  (pFVar14->_Padding).Value.Bottom = (float)uStack_568._4_4_;
  (pFVar14->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
  if (pvStack_550 != (void *)0x0) {
    FMemory::Free(pvStack_550);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_558);
  local_540._0_4_ = (this->HeaderPadding).Left;
  local_540._4_4_ = (this->HeaderPadding).Top;
  uStack_538._0_4_ = (this->HeaderPadding).Right;
  uStack_538._4_4_ = (this->HeaderPadding).Bottom;
  local_530 = 1;
  local_518 = 0;
  local_528 = (undefined1  [8])0x0;
  pvStack_520 = (void *)0x0;
  (pFVar14->_HeaderPadding).Value.Left = (float)(undefined4)local_540;
  (pFVar14->_HeaderPadding).Value.Top = (float)local_540._4_4_;
  (pFVar14->_HeaderPadding).Value.Right = (float)(undefined4)uStack_538;
  (pFVar14->_HeaderPadding).Value.Bottom = (float)uStack_538._4_4_;
  (pFVar14->_HeaderPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_HeaderPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
  if (pvStack_520 != (void *)0x0) {
    FMemory::Free(pvStack_520);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_528);
  uStack_600 = 0;
  local_608 = (FMemScope)SlateExpansionChanged;
  uStack_5fc = uStack_508._4_4_;
  local_638 = (undefined1  [8])0x0;
  local_630.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_630.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_638,
             (FWriteAccessScope *)&local_4e8);
  local_4d0 = &local_630;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_630);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUExpandableArea____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar15 + 4) = local_608;
    puVar15[5] = CONCAT44(uStack_5fc,uStack_600);
    __return_storage_ptr__ = local_res10;
  }
  if (local_4e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnAreaExpansionChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_638);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4a8 = (pFVar14->_HeaderContent).Widget.Object;
  pTStack_4a0 = (pFVar14->_HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_HeaderContent).Widget.Object = (SWidget *)local_res18;
  (pFVar14->_HeaderContent).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4a0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_510 = (pFVar14->_BodyContent).Widget.Object;
  uStack_508 = (pFVar14->_BodyContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_BodyContent).Widget.Object = pSVar17;
  (pFVar14->_BodyContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_508);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_608,&local_res18,true);
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
            (&local_620,"SExpandableArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ExpandableArea.cpp"
             ,0xde,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_608);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
  pSVar6 = local_620._Widget.Object;
  if (local_620._Widget.Object == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_620._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SExpandableArea::Construct(local_620._Widget.Object,pFVar14);
  if (local_620._Widget.Object == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  if (((local_620._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_620._Widget.Object)->_padding_ + 0x228))(local_620._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_1469fecaf;
  }
  bVar12 = 0x20;
LAB_1469fecaf:
  *(byte *)&(local_620._Widget.Object)->_padding_ =
       (byte)(local_620._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_620._Widget.Object)->_padding_ =
       (byte)(local_620._Widget.Object)->_padding_ | bVar12;
  if (local_620._Widget.Object == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_620._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_620._Widget.Object == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  FVar9.ReferenceController = local_620._Widget.SharedReferenceCount.ReferenceController;
  local_620._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_620._Widget.Object = (SExpandableArea *)0x0;
  if (pSVar6 == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  local_5f8 = pSVar6;
  local_5f0.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyExpandableArea != (TSharedPtr<SExpandableArea,1> *)&local_5f8) {
    (this->MyExpandableArea).Object = pSVar6;
    local_5f8 = (SExpandableArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyExpandableArea).SharedReferenceCount,&local_5f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_638,
             (FWriteAccessScope *)&local_500);
  if ((local_630.DelegateSize != 0) &&
     (local_630.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_630.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_630,0,0,0x10);
    local_630.DelegateSize = 0;
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  if (local_630.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_630.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_638);
  SExpandableArea::FArguments::~FArguments(&local_498);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pTVar5 = (this->MyExpandableArea).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyExpandableArea).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SExpandableArea *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::ReleaseSlateResources(UExpandableArea *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  if (param_1) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    (**(code **)(*(longlong *)&this->field_0x1b0 + 0x10))(&this->field_0x1b0,&local_48);
    iVar2 = (int)local_40;
    uVar4 = (ulonglong)(int)local_40;
    puVar1 = local_48 + uVar4;
    puVar5 = local_48;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar5 == puVar1) break;
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)&this->field_0x1b0 + 0x18))(&this->field_0x1b0,*puVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,1);
      }
      uVar4 = local_40 & 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyExpandableArea != (TSharedPtr<SExpandableArea,1> *)&local_38) {
    (this->MyExpandableArea).Object = (SExpandableArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyExpandableArea).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// SetAreaPadding @ 146a11020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetAreaPadding(UExpandableArea *this,FMargin *param_1)

{
  SExpandableArea *this_00;
  FMargin local_18;
  
  local_18.Left = param_1->Left;
  local_18.Top = param_1->Top;
  local_18.Right = param_1->Right;
  local_18.Bottom = param_1->Bottom;
  (this->AreaPadding).Left = local_18.Left;
  (this->AreaPadding).Top = local_18.Top;
  (this->AreaPadding).Right = local_18.Right;
  (this->AreaPadding).Bottom = local_18.Bottom;
  this_00 = (this->MyExpandableArea).Object;
  if (this_00 != (SExpandableArea *)0x0) {
    SExpandableArea::SetAreaPadding(this_00,&local_18);
  }
  return;
}

// SetBorderBrush @ 146a11330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetBorderBrush(UExpandableArea *this,FSlateBrush *param_1)

{
  SExpandableArea *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FSlateBrush::operator!=(&this->BorderBrush,param_1);
  if (bVar2) {
    FSlateBrush::operator=(&this->BorderBrush,param_1);
    this_00 = (this->MyExpandableArea).Object;
    if (this_00 != (SExpandableArea *)0x0) {
      SExpandableArea::SetBorderBrush(this_00,param_1);
      if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
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
      SExpandableArea::InvalidateBorderBrush((this->MyExpandableArea).Object);
    }
  }
  return;
}

// SetBorderColor @ 146a113d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetBorderColor(UExpandableArea *this,FSlateColor *param_1)

{
  SBorder *pSVar1;
  SExpandableArea *pSVar2;
  code *pcVar3;
  undefined8 uVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  bool bVar7;
  FDestructionSentinel FStack_58;
  FLinearColor_u_0 FStack_40;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  uVar4 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BorderColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BorderColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar5 = param_1->ColorTableId;
  uVar6 = *(undefined2 *)&param_1->field_0x12;
  (this->BorderColor).ColorUseRule = param_1->ColorUseRule;
  (this->BorderColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->BorderColor).field_0x12 = uVar6;
  pSVar2 = (this->MyExpandableArea).Object;
  if (pSVar2 == (SExpandableArea *)0x0) {
    return;
  }
  if ((pSVar2->WidgetBorder).Object == (SBorder *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
                       ,0x106,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((pSVar2->WidgetBorder).Object == (SBorder *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (pSVar2->WidgetBorder).Object;
  uStack_30._0_1_ = param_1->ColorUseRule;
  uStack_30._1_1_ = param_1->ColorTableId;
  uStack_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  FStack_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  FStack_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  uStack_2c = 1;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->BorderBackgroundColorAttribute,(SWidget *)pSVar1,
           (TAttribute<FSlateColor> *)&FStack_40._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_58);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// SetContentForSlot @ 146a12a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UExpandableArea::SetContentForSlot(UExpandableArea *this,FName param_1,UWidget *param_2)

{
  longlong *plVar1;
  FDeprecateSlateVector2D FVar2;
  
  if (param_1 == HeaderName) {
    plVar1 = *(longlong **)&(this->Style).ExpandedImage.TintColor.ColorUseRule;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(UWidget **)&(this->Style).ExpandedImage.TintColor.ColorUseRule = param_2;
    return;
  }
  if (param_1 == BodyName) {
    FVar2 = (this->Style).ExpandedImage.ImageSize;
    if (FVar2 != (FDeprecateSlateVector2D)0x0) {
      (**(code **)(*(longlong *)FVar2 + 0x2b0))(FVar2,1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->Style).ExpandedImage.ImageSize = (FDeprecateSlateVector2D)param_2;
  }
  return;
}

// SetHeaderPadding @ 146a14700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetHeaderPadding(UExpandableArea *this,FMargin *param_1)

{
  SExpandableArea *this_00;
  FMargin local_18;
  
  local_18.Left = param_1->Left;
  local_18.Top = param_1->Top;
  local_18.Right = param_1->Right;
  local_18.Bottom = param_1->Bottom;
  (this->HeaderPadding).Left = local_18.Left;
  (this->HeaderPadding).Top = local_18.Top;
  (this->HeaderPadding).Right = local_18.Right;
  (this->HeaderPadding).Bottom = local_18.Bottom;
  this_00 = (this->MyExpandableArea).Object;
  if (this_00 != (SExpandableArea *)0x0) {
    SExpandableArea::SetHeaderPadding(this_00,&local_18);
  }
  return;
}

// SetIsExpanded @ 146a15d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetIsExpanded(UExpandableArea *this,bool param_1)

{
  SExpandableArea *pSVar1;
  FFieldId local_18;
  
  if (this->bIsExpanded != param_1) {
    this->bIsExpanded = param_1;
    local_18.FieldName = FFieldNotificationClassDescriptor::bIsExpanded.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::bIsExpanded.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_18);
  }
  pSVar1 = (this->MyExpandableArea).Object;
  if (pSVar1 != (SExpandableArea *)0x0) {
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,param_1);
  }
  return;
}

// SetIsExpanded_Animated @ 146a15d90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetIsExpanded_Animated(UExpandableArea *this,bool param_1)

{
  SExpandableArea *pSVar1;
  FFieldId local_18;
  
  if (this->bIsExpanded != param_1) {
    this->bIsExpanded = param_1;
    local_18.FieldName = FFieldNotificationClassDescriptor::bIsExpanded.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::bIsExpanded.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_18);
  }
  pSVar1 = (this->MyExpandableArea).Object;
  if (pSVar1 != (SExpandableArea *)0x0) {
    (**(code **)(pSVar1->_padding_ + 600))(pSVar1,param_1);
  }
  return;
}

// SetMaxHeight @ 146a16eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetMaxHeight(UExpandableArea *this,float param_1)

{
  SExpandableArea *this_00;
  
  this->MaxHeight = param_1;
  this_00 = (this->MyExpandableArea).Object;
  if (this_00 == (SExpandableArea *)0x0) {
    return;
  }
  if (param_1 != this_00->MaxHeight) {
    this_00->MaxHeight = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetStyle @ 146a1bb70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SetStyle(UExpandableArea *this,FExpandableAreaStyle *param_1)

{
  SExpandableArea *this_00;
  
  FSlateBrush::operator=(&(this->Style).CollapsedImage,&param_1->CollapsedImage);
  FSlateBrush::operator=(&(this->Style).ExpandedImage,&param_1->ExpandedImage);
  (this->Style).RolloutAnimationSeconds = param_1->RolloutAnimationSeconds;
  this_00 = (this->MyExpandableArea).Object;
  if (this_00 != (SExpandableArea *)0x0) {
    SExpandableArea::InvalidateStyle(this_00);
  }
  return;
}

// SlateExpansionChanged @ 146a1e2e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SlateExpansionChanged(UExpandableArea *this,bool param_1)

{
  int iVar1;
  undefined1 local_28 [8];
  int local_20;
  
  if (this->bIsExpanded != param_1) {
    this->bIsExpanded = param_1;
    local_28._0_4_ = FFieldNotificationClassDescriptor::bIsExpanded.FieldName.ComparisonIndex.Value;
    local_28._4_4_ = FFieldNotificationClassDescriptor::bIsExpanded.FieldName.Number;
    local_20 = FFieldNotificationClassDescriptor::bIsExpanded.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnExpansionChanged,
             (FReadAccessScope *)local_28);
  iVar1 = *(int *)&(this->OnExpansionChanged).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_28);
  if (0 < iVar1) {
    local_20 = CONCAT31(local_20._1_3_,param_1);
    local_28 = (undefined1  [8])this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnExpansionChanged,
               local_28);
  }
  return;
}

// StaticRegisterNativesUExpandableArea @ 146a1e820

void __cdecl UExpandableArea::StaticRegisterNativesUExpandableArea(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UExpandableArea_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a21130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UExpandableArea::SynchronizeProperties(UExpandableArea *this)

{
  SExpandableArea *pSVar1;
  code *pcVar2;
  bool bVar3;
  FMargin local_28;
  FMargin local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyExpandableArea).Object;
  if (pSVar1 == (SExpandableArea *)0x0) {
    return;
  }
  SExpandableArea::SetStyle(pSVar1,&this->Style);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SExpandableArea::InvalidateStyle((this->MyExpandableArea).Object);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->MyExpandableArea).Object;
  (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,this->bIsExpanded);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.Left = (this->AreaPadding).Left;
  local_28.Top = (this->AreaPadding).Top;
  local_28.Right = (this->AreaPadding).Right;
  local_28.Bottom = (this->AreaPadding).Bottom;
  SExpandableArea::SetAreaPadding((this->MyExpandableArea).Object,&local_28);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.Left = (this->HeaderPadding).Left;
  local_18.Top = (this->HeaderPadding).Top;
  local_18.Right = (this->HeaderPadding).Right;
  local_18.Bottom = (this->HeaderPadding).Bottom;
  SExpandableArea::SetHeaderPadding((this->MyExpandableArea).Object,&local_18);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SExpandableArea::SetBorderBrush((this->MyExpandableArea).Object,&this->BorderBrush);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SExpandableArea::InvalidateBorderBrush((this->MyExpandableArea).Object);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SExpandableArea::SetBorderBackgroundColor((this->MyExpandableArea).Object,&this->BorderColor);
  if ((this->MyExpandableArea).Object == (SExpandableArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SExpandableArea::SetMaxHeight((this->MyExpandableArea).Object,this->MaxHeight);
  return;
}

// _getUObject @ 146a30cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UExpandableArea::_getUObject(UExpandableArea *this)

{
  return (UObject *)&this[-1].HeaderContent;
}

// _getUObject`adjustor{392}' @ 146a30ccc

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UExpandableArea::_getUObject`adjustor{392}' (void)const __ptr64 */

UObject * __thiscall UExpandableArea::_getUObject_adjustor_392__(UExpandableArea *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UExpandableArea *)
                       ((longlong)
                        &this[-1].Style.ExpandedImage.OutlineSettings.Color.SpecifiedColor.
                         field0_0x0 + 8));
  return (UObject *)pUVar1;
}

// execGetIsExpanded @ 146a35600

void __cdecl UExpandableArea::execGetIsExpanded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x19].field_0x1c;
  return;
}

// execSetIsExpanded @ 146a3de80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UExpandableArea::execSetIsExpanded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  SetIsExpanded((UExpandableArea *)param_1,local_res10[0] != 0);
  return;
}

// execSetIsExpanded_Animated @ 146a3df10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UExpandableArea::execSetIsExpanded_Animated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  int local_res8 [2];
  FFieldId local_18;
  
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[0x19].field_0x1c != bVar3) {
    param_1[0x19].field_0x1c = bVar3;
    local_18.FieldName = FFieldNotificationClassDescriptor::bIsExpanded.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::bIsExpanded.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)(param_1 + 1),&local_18);
  }
  plVar2 = *(longlong **)&param_1[0x1b].field_0x20;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 600))(plVar2,bVar3);
  }
  return;
}


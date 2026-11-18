// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 64

// GetWidgetStyle_WrapperImpl @ 1468dbcc0

void __cdecl UButton::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FButtonStyle *pFVar1;
  FButtonStyle local_398;
  
  pFVar1 = FButtonStyle::FButtonStyle(&local_398,(FButtonStyle *)((longlong)param_1 + 0x1d0));
  FButtonStyle::operator=(param_2,pFVar1);
  FButtonStyle::~FButtonStyle(&local_398);
  return;
}

// SetWidgetStyle_WrapperImpl @ 1468dbd10

void __cdecl UButton::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FButtonStyle::operator=((FButtonStyle *)((longlong)param_1 + 0x1d0),param_2);
  if (*(SButton **)((longlong)param_1 + 0x6a8) != (SButton *)0x0) {
    SButton::SetButtonStyle
              (*(SButton **)((longlong)param_1 + 0x6a8),(FButtonStyle *)((longlong)param_1 + 0x1d0))
    ;
  }
  return;
}

// GetColorAndOpacity_WrapperImpl @ 1468dbd60

void __cdecl UButton::GetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x568);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x560);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetColorAndOpacity_WrapperImpl @ 1468dbd80

void __cdecl UButton::SetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetColorAndOpacity(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// GetBackgroundColor_WrapperImpl @ 1468dbdb0

void __cdecl UButton::GetBackgroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x578);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x570);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetBackgroundColor_WrapperImpl @ 1468dbe10

void __cdecl UButton::SetBackgroundColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x570) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x578) = local_38._8_8_;
  if (*(SBorder **)((longlong)param_1 + 0x6a8) != (SBorder *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_24 = 1;
    SBorder::SetBorderBackgroundColor
              (*(SBorder **)((longlong)param_1 + 0x6a8),(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// GetClickMethod_WrapperImpl @ 1468dbe70

void __cdecl UButton::GetClickMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x580);
  return;
}

// SetClickMethod_WrapperImpl @ 1468dbec0

void __cdecl UButton::SetClickMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x580) = bVar1;
  if (*(SButton **)((longlong)param_1 + 0x6a8) != (SButton *)0x0) {
    SButton::SetClickMethod(*(SButton **)((longlong)param_1 + 0x6a8),(uint)bVar1);
    return;
  }
  return;
}

// GetTouchMethod_WrapperImpl @ 1468dbef0

void __cdecl UButton::GetTouchMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x581);
  return;
}

// SetTouchMethod_WrapperImpl @ 1468dbf10

void __cdecl UButton::SetTouchMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x581) = bVar1;
  if (*(SButton **)((longlong)param_1 + 0x6a8) != (SButton *)0x0) {
    SButton::SetTouchMethod(*(SButton **)((longlong)param_1 + 0x6a8),(uint)bVar1);
    return;
  }
  return;
}

// GetPressMethod_WrapperImpl @ 1468dbf80

void __cdecl UButton::GetPressMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x582);
  return;
}

// SetPressMethod_WrapperImpl @ 1468dbf90

void __cdecl UButton::SetPressMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x582) = bVar1;
  if (*(SButton **)((longlong)param_1 + 0x6a8) != (SButton *)0x0) {
    SButton::SetPressMethod(*(SButton **)((longlong)param_1 + 0x6a8),(uint)bVar1);
    return;
  }
  return;
}

// GetIsFocusable_WrapperImpl @ 1468dbfc0

void __cdecl UButton::GetIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x583);
  return;
}

// StaticClass @ 1468dbfd0

UClass * __cdecl UButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Button",&Z_Registration_Info_UClass_UButton.InnerSingleton,
               StaticRegisterNativesUButton,0x6c0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UButton>,InternalVTableHelperCtorCaller<UButton>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButton.InnerSingleton;
}

// UButton @ 146900ad0

UButton * __thiscall UButton::UButton(UButton *this,FVTableHelper *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FButtonStyle::FButtonStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnClicked = 0;
  *(undefined8 *)&(this->OnClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnPressed = 0;
  *(undefined8 *)&(this->OnPressed).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressed).field_0x10 = 0;
  *(undefined8 *)&this->OnReleased = 0;
  *(undefined8 *)&(this->OnReleased).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleased).field_0x10 = 0;
  *(undefined8 *)&this->OnHovered = 0;
  *(undefined8 *)&(this->OnHovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnUnhovered = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragDetected = 0;
  *(undefined8 *)&(this->OnButtonDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragEnter = 0;
  *(undefined8 *)&(this->OnButtonDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragLeave = 0;
  *(undefined8 *)&(this->OnButtonDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragOver = 0;
  *(undefined8 *)&(this->OnButtonDragOver).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragOver).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDrop = 0;
  *(undefined8 *)&(this->OnButtonDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnReceivedFocus = 0;
  *(undefined8 *)&(this->OnReceivedFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnReceivedFocus).field_0x10 = 0;
  *(undefined8 *)&this->OnLostFocus = 0;
  *(undefined8 *)&(this->OnLostFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnLostFocus).field_0x10 = 0;
  (this->MyButton).Object = (SButton *)0x0;
  (this->MyButton).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UButton @ 146900c20

UButton * __thiscall UButton::UButton(UButton *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  FButtonStyle *pFVar2;
  
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FButtonStyle::FButtonStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnClicked = 0;
  *(undefined8 *)&(this->OnClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnPressed = 0;
  *(undefined8 *)&(this->OnPressed).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressed).field_0x10 = 0;
  *(undefined8 *)&this->OnReleased = 0;
  *(undefined8 *)&(this->OnReleased).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleased).field_0x10 = 0;
  *(undefined8 *)&this->OnHovered = 0;
  *(undefined8 *)&(this->OnHovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnUnhovered = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragDetected = 0;
  *(undefined8 *)&(this->OnButtonDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragEnter = 0;
  *(undefined8 *)&(this->OnButtonDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragLeave = 0;
  *(undefined8 *)&(this->OnButtonDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDragOver = 0;
  *(undefined8 *)&(this->OnButtonDragOver).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDragOver).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonDrop = 0;
  *(undefined8 *)&(this->OnButtonDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnReceivedFocus = 0;
  *(undefined8 *)&(this->OnReceivedFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnReceivedFocus).field_0x10 = 0;
  *(undefined8 *)&this->OnLostFocus = 0;
  *(undefined8 *)&(this->OnLostFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnLostFocus).field_0x10 = 0;
  (this->MyButton).Object = (SButton *)0x0;
  (this->MyButton).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = (FButtonStyle *)UE::Slate::Private::FDefaultStyleCache::Get();
  FButtonStyle::operator=(&this->WidgetStyle,pFVar2);
  (this->ColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  this->ClickMethod = '\0';
  this->TouchMethod = '\0';
  this->bAllowDragDrop = false;
  (this->BackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->IsFocusable = true;
  return this;
}

// ~UButton @ 146904670

void __thiscall UButton::~UButton(UButton *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyButton).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReceivedFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragOver);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragDetected);
  pvVar1 = *(void **)&(this->OnUnhovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnhovered);
  pvVar1 = *(void **)&(this->OnHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHovered);
  pvVar1 = *(void **)&(this->OnReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleased);
  pvVar1 = *(void **)&(this->OnPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressed);
  pvVar1 = *(void **)&(this->OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClicked);
  FButtonStyle::~FButtonStyle(&this->WidgetStyle);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  return;
}

// GetAccessibleWidget @ 14691d4c0

TSharedPtr<SWidget,1> * __thiscall
UButton::GetAccessibleWidget(UButton *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyButton).Object;
  pTVar1 = (this->MyButton).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetBackgroundColor @ 14691db30

FLinearColor * __thiscall
UButton::GetBackgroundColor(UButton *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetClickMethod @ 14691ddf0

Type __thiscall UButton::GetClickMethod(UButton *this)

{
  return (Type)(this->ClickMethod).Value;
}

// GetColorAndOpacity @ 14691de00

FLinearColor * __thiscall
UButton::GetColorAndOpacity(UButton *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetIsFocusable @ 14691e9e0

bool __thiscall UButton::GetIsFocusable(UButton *this)

{
  return this->IsFocusable;
}

// GetPressMethod @ 146921620

Type __thiscall UButton::GetPressMethod(UButton *this)

{
  return (Type)(this->PressMethod).Value;
}

// GetPrivateStaticClass @ 146921b70

UClass * __cdecl UButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Button",&Z_Registration_Info_UClass_UButton.InnerSingleton,
               StaticRegisterNativesUButton,0x6c0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UButton>,InternalVTableHelperCtorCaller<UButton>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButton.InnerSingleton;
}

// GetSlotClass @ 1469242d0

UClass * __thiscall UButton::GetSlotClass(UButton *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UButtonSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ButtonSlot",&Z_Registration_Info_UClass_UButtonSlot.InnerSingleton,
               UButtonSlot::StaticRegisterNativesUButtonSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonSlot>,
               InternalVTableHelperCtorCaller<UButtonSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonSlot.InnerSingleton;
}

// GetStyle @ 146924840

FButtonStyle * __thiscall UButton::GetStyle(UButton *this)

{
  return &this->WidgetStyle;
}

// GetTouchMethod @ 146924a80

Type __thiscall UButton::GetTouchMethod(UButton *this)

{
  return (Type)(this->TouchMethod).Value;
}

// InitIsFocusable @ 146929b20

void __thiscall UButton::InitIsFocusable(UButton *this,bool param_1)

{
  this->IsFocusable = param_1;
  return;
}

// IsPressed @ 14692cbf0

bool __thiscall UButton::IsPressed(UButton *this)

{
  SButton *pSVar1;
  
  pSVar1 = (this->MyButton).Object;
  if ((pSVar1 != (SButton *)0x0) &&
     ((pSVar1->bIsPressed != '\0' ||
      (pSVar1->AppearPressedAttribute !=
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)))) {
    return true;
  }
  return false;
}

// OnSlotAdded @ 1469301f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::OnSlotAdded(UButton *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SButton,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SButton,1> local_28;
  FString local_18;
  
  if ((this->MyButton).Object != (SButton *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UButtonSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UButtonSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UButtonSlot>(&local_38);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SButton,1>::ToSharedRef(&this->MyButton,&local_28);
    UButtonSlot::BuildSlot((UButtonSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 146930440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::OnSlotRemoved(UButton *this,UPanelSlot *param_1)

{
  SButton *pSVar1;
  code *pcVar2;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (this->MyButton).Object;
  if (pSVar1 != (SButton *)0x0) {
    pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
    local_18 = SNullWidget::NullWidget.Object;
    local_10 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pSVar1,&local_18);
  }
  return;
}

// PostLoad @ 146933180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UButton::PostLoad(UButton *this)

{
  UWidget *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPanelSlot *pUVar6;
  UClass *pUVar7;
  UPanelSlot *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  iVar5 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if ((0 < iVar5) &&
     (pUVar6 = UContentWidget::GetContentSlot((UContentWidget *)this), pUVar6 != (UPanelSlot *)0x0))
  {
    pUVar7 = UButtonSlot::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UButtonSlot::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = this;
      pUVar6 = (UPanelSlot *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar9 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pUVar8 = UContentWidget::GetContentSlot((UContentWidget *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr, pUVar1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr;
      (pUVar6->Content).field0_0x0.DebugPtr = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (pUVar1->Slot).field0_0x0.DebugPtr = pUVar6;
      iVar5 = (int)this->_padding_;
      if (iVar5 < 1) {
        local_a8 = 0;
        local_a0 = (longlong)iVar5;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar2 = (undefined8 *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *puVar2 = pUVar6;
    }
  }
  return;
}

// RebuildWidget @ 146935c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UButton::RebuildWidget(UButton *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  SButton *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  UButtonSlot *this_00;
  UClass *pUVar14;
  TSharedRef<SButton,1> *pTVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UButton *local_res18;
  UButton *local_res20;
  FMemScope local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  TSharedRef<SButton,1> local_928;
  undefined1 local_918 [8];
  FDelegateAllocation local_910;
  undefined1 local_900 [8];
  FDelegateAllocation local_8f8;
  undefined1 local_8e8 [8];
  FDelegateAllocation local_8e0;
  undefined1 local_8d0 [8];
  FDelegateAllocation local_8c8;
  undefined1 local_8b8 [8];
  FDelegateAllocation local_8b0;
  undefined1 local_8a0 [8];
  FDelegateAllocation local_898;
  undefined1 local_888 [8];
  FDelegateAllocation local_880;
  undefined1 local_870 [8];
  FDelegateAllocation local_868;
  SButton *local_858;
  FSharedReferencer<1> local_850;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_848;
  UButton *local_830;
  UButton *local_828;
  UButton *local_820;
  UButton *local_818;
  UButton *local_810;
  UButton *local_808;
  UButton *local_800;
  UButton *local_7f8;
  UButton *local_7f0;
  FName local_7e8;
  UButton *local_7e0;
  FDestructionSentinel local_7d8;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDelegateAllocation *local_700;
  FDestructionSentinel local_6f8;
  FDelegateAllocation *local_6e0;
  FDestructionSentinel local_6d8;
  FDelegateAllocation *local_6c0;
  FDestructionSentinel local_6b8;
  undefined1 *local_6a0;
  FDestructionSentinel local_698;
  undefined1 *local_680;
  FDestructionSentinel local_678;
  undefined1 *local_660;
  FDestructionSentinel local_658;
  undefined1 *local_640;
  FDestructionSentinel local_638;
  FDelegateAllocation *local_620;
  FDestructionSentinel local_618;
  FDelegateAllocation *local_600;
  FDestructionSentinel local_5f8;
  FDelegateAllocation *local_5e0;
  FDestructionSentinel local_5d8;
  FDelegateAllocation *local_5c0;
  FDestructionSentinel local_5b8;
  FDelegateAllocation *local_5a0;
  TSharedRef<SButton,1> local_598;
  FArguments local_588;
  
  pFVar10 = SButton::FArguments::FArguments(&local_588);
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  uStack_930 = 0;
  local_8e8 = (undefined1  [8])0x0;
  local_938 = (FMemScope)SlateHandleClicked;
  local_8e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_718);
  local_700 = &local_8e0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_8e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnClicked,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandlePressed;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_870 = (undefined1  [8])0x0;
  local_868.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_868.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
             (FWriteAccessScope *)&local_6f8);
  local_6e0 = &local_868;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_868);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_6f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnPressed,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleReleased;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_888 = (undefined1  [8])0x0;
  local_880.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_880.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
             (FWriteAccessScope *)&local_6d8);
  local_6c0 = &local_880;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_880);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_830 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_830);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_6d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnReleased,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_888);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleHovered;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnHovered,
             (FWriteAccessScope *)&local_6b8);
  local_6a0 = &(pFVar10->_OnHovered).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_6a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_828 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_828);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_6b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
  }
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleUnhovered;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnUnhovered,
             (FWriteAccessScope *)&local_698);
  local_680 = &(pFVar10->_OnUnhovered).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_680);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_820 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_820);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_698.Accessor,&local_698);
  }
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleOnReceivedFocus;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnReceivedFocus,
             (FWriteAccessScope *)&local_678);
  local_660 = &(pFVar10->_OnReceivedFocus).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_660);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_818 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_818);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleOnLostFocus;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnLostFocus,
             (FWriteAccessScope *)&local_658);
  local_640 = &(pFVar10->_OnLostFocus).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_640);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_810 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_810);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
  }
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleDragDetected;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_8a0 = (undefined1  [8])0x0;
  local_898.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_898.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
             (FWriteAccessScope *)&local_638);
  local_620 = &local_898;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_898);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_7e0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_7e0);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSlateButtonDragDetected,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleDragEnter;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_8b8 = (undefined1  [8])0x0;
  local_8b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b8,
             (FWriteAccessScope *)&local_618);
  local_600 = &local_8b0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_8b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_808 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_808);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSlateButtonDragEnter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b8);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleDragLeave;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_8d0 = (undefined1  [8])0x0;
  local_8c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
             (FWriteAccessScope *)&local_5f8);
  local_5e0 = &local_8c8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_8c8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_800 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_800);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_5f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSlateButtonDragLeave,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8d0);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleDragOver;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_900 = (undefined1  [8])0x0;
  local_8f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_5d8);
  local_5c0 = &local_8f8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_8f8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_7f8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_7f8);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSlateButtonDragOver,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
  uStack_930 = 0;
  local_938 = (FMemScope)SlateHandleDrop;
  uStack_92c = local_928.SharedReferenceCount.ReferenceController._4_4_;
  local_918 = (undefined1  [8])0x0;
  local_910.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_910.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
             (FWriteAccessScope *)&local_5b8);
  local_5a0 = &local_910;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_910);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUButton____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_7f0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_7f0);
    *(FMemScope *)(puVar11 + 4) = local_938;
    puVar11[5] = CONCAT44(uStack_92c,uStack_930);
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSlateButtonDrop,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
  pFVar10->_ButtonStyle = &this->WidgetStyle;
  pFVar10->_ClickMethod = (uint)(this->ClickMethod).Value;
  pFVar10->_TouchMethod = (uint)(this->TouchMethod).Value;
  pFVar10->_PressMethod = (uint)(this->PressMethod).Value;
  pFVar10->_IsFocusable = this->IsFocusable;
  pFVar10->_AllowDragDrop = this->bAllowDragDrop;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_938,&local_7e8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_848,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Button.cpp"
             ,0x43,local_res8);
  FMemScope::~FMemScope(&local_938);
  FLLMScope::~FLLMScope(local_res10);
  pSVar4 = local_848._Widget.Object;
  if (local_848._Widget.Object == (SButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_848._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SButton::Construct(local_848._Widget.Object,pFVar10);
  if (local_848._Widget.Object == (SButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  if (((local_848._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_848._Widget.Object)->_padding_ + 0x228))(local_848._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_146936841;
  }
  else {
LAB_146936841:
    bVar8 = 0x20;
  }
  FVar5.ReferenceController = local_848._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_848._Widget.Object)->_padding_ =
       (byte)(local_848._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_848._Widget.Object)->_padding_ =
       (byte)(local_848._Widget.Object)->_padding_ | bVar8;
  pbVar1 = (byte *)((longlong)&(local_848._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_848._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_848._Widget.Object = (SButton *)0x0;
  if (pSVar4 == (SButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  local_858 = pSVar4;
  local_850.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyButton != (TSharedPtr<SButton,1> *)&local_858) {
    (this->MyButton).Object = pSVar4;
    local_858 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyButton).SharedReferenceCount,&local_850);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
             (FWriteAccessScope *)&local_7d8);
  if ((local_910.DelegateSize != 0) &&
     (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_910.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_910,0,0,0x10);
    local_910.DelegateSize = 0;
  }
  if (local_7d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d8.Accessor,&local_7d8);
  }
  if (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_910.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_918);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_7c0);
  if ((local_8f8.DelegateSize != 0) &&
     (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8f8,0,0,0x10);
    local_8f8.DelegateSize = 0;
  }
  if (local_7c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
  }
  if (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_900);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
             (FWriteAccessScope *)&local_7a8);
  if ((local_8c8.DelegateSize != 0) &&
     (local_8c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8c8,0,0,0x10);
    local_8c8.DelegateSize = 0;
  }
  if (local_7a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
  }
  if (local_8c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b8,
             (FWriteAccessScope *)&local_790);
  if ((local_8b0.DelegateSize != 0) &&
     (local_8b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8b0,0,0,0x10);
    local_8b0.DelegateSize = 0;
  }
  if (local_790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
  }
  if (local_8b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
             (FWriteAccessScope *)&local_778);
  if ((local_898.DelegateSize != 0) &&
     (local_898.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_898.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_898,0,0,0x10);
    local_898.DelegateSize = 0;
  }
  if (local_778.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
  }
  if (local_898.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_898.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
             (FWriteAccessScope *)&local_760);
  if ((local_880.DelegateSize != 0) &&
     (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_880.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_880,0,0,0x10);
    local_880.DelegateSize = 0;
  }
  if (local_760.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
  }
  if (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_880.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_888);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
             (FWriteAccessScope *)&local_748);
  if ((local_868.DelegateSize != 0) &&
     (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_868.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_868,0,0,0x10);
    local_868.DelegateSize = 0;
  }
  if (local_748.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
  }
  if (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_868.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_870);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_730);
  if ((local_8e0.DelegateSize != 0) &&
     (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8e0,0,0,0x10);
    local_8e0.DelegateSize = 0;
  }
  if (local_730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
  }
  if (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._ButtonColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._ContentScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._DesiredSizeScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnSlateButtonDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnSlateButtonDragOver);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnSlateButtonDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnSlateButtonDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnSlateButtonDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnReceivedFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnUnhovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnHovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._OnClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._Text.Getter);
  if (local_588._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_588._Text.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._PressedPaddingOverride.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._NormalPaddingOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_588._ContentPadding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_588);
  iVar9 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar9 < 1) goto LAB_146936ded;
  this_00 = (UButtonSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (UButtonSlot *)0x0) {
LAB_146936dcc:
    this_00 = (UButtonSlot *)0x0;
  }
  else {
    pUVar14 = UButtonSlot::StaticClass();
    iVar9 = (int)pUVar14->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar14->_padding_)) goto LAB_146936dcc;
  }
  pTVar15 = TSharedPtr<SButton,1>::ToSharedRef(&this->MyButton,&local_598);
  UButtonSlot::BuildSlot(this_00,pTVar15);
LAB_146936ded:
  pTVar15 = TSharedPtr<SButton,1>::ToSharedRef(&this->MyButton,&local_928);
  __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
  pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_928.SharedReferenceCount.ReferenceController._4_4_,
                      local_928.SharedReferenceCount.ReferenceController._0_4_));
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14693abd0

void __thiscall UButton::ReleaseSlateResources(UButton *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyButton != (TSharedPtr<SButton,1> *)&local_18) {
    (this->MyButton).Object = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyButton).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetAllowDragDrop @ 146941c20

void __thiscall UButton::SetAllowDragDrop(UButton *this,bool param_1)

{
  SButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyButton).Object;
  this->bAllowDragDrop = param_1;
  if ((((pSVar1 != (SButton *)0x0) && (pSVar1->_padding_ != 0)) && (pSVar1->_padding_ != 0)) &&
     (0 < *(int *)(pSVar1->_padding_ + 8))) {
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    SButton::SetAllowDragDrop((this->MyButton).Object,this->bAllowDragDrop);
    return;
  }
  return;
}

// SetBackgroundColor @ 146941ff0

void __thiscall UButton::SetBackgroundColor(UButton *this,FLinearColor *param_1)

{
  SButton *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MyButton).Object;
  if (this_00 != (SButton *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetBorderBackgroundColor((SBorder *)this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetClickMethod @ 1469426d0

void __thiscall UButton::SetClickMethod(UButton *this,Type param_1)

{
  SButton *this_00;
  
  (this->ClickMethod).Value = (uchar)param_1;
  this_00 = (this->MyButton).Object;
  if (this_00 != (SButton *)0x0) {
    SButton::SetClickMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetColorAndOpacity @ 146942700

void __thiscall UButton::SetColorAndOpacity(UButton *this,FLinearColor *param_1)

{
  SButton *pSVar1;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pSVar1 = (this->MyButton).Object;
  *(undefined8 *)&(this->ColorAndOpacity).field0_0x0 = local_40._0_8_;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8) = local_40._8_8_;
  if (pSVar1 != (SButton *)0x0) {
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FLinearColor> *)&local_40._s_0,None
            );
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetPressMethod @ 146943f50

void __thiscall UButton::SetPressMethod(UButton *this,Type param_1)

{
  SButton *this_00;
  
  (this->PressMethod).Value = (uchar)param_1;
  this_00 = (this->MyButton).Object;
  if (this_00 != (SButton *)0x0) {
    SButton::SetPressMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetStyle @ 1469442a0

void __thiscall UButton::SetStyle(UButton *this,FButtonStyle *param_1)

{
  SButton *this_00;
  
  FButtonStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyButton).Object;
  if (this_00 != (SButton *)0x0) {
    SButton::SetButtonStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SetTouchMethod @ 1469442f0

void __thiscall UButton::SetTouchMethod(UButton *this,Type param_1)

{
  SButton *this_00;
  
  (this->TouchMethod).Value = (uchar)param_1;
  this_00 = (this->MyButton).Object;
  if (this_00 != (SButton *)0x0) {
    SButton::SetTouchMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SlateHandleClicked @ 146944e40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall UButton::SlateHandleClicked(UButton *this,FReply *__return_storage_ptr__)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnClicked,(void *)0x0);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// SlateHandleDragDetected @ 146944e70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UButton::SlateHandleDragDetected
          (UButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragDetected,
             &local_28);
  if (((*(int *)&(this->OnButtonDragDetected).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnButtonDragDetected).field_0x8, plVar1 != (longlong *)0x0))
     && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnButtonDragDetected,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandleDragEnter @ 146944f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UButton::SlateHandleDragEnter(UButton *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragEnter,
             &local_28);
  if ((*(int *)&(this->OnButtonDragEnter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnButtonDragEnter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragEnter,
                 &local_28);
      if (*(int *)&(this->OnButtonDragEnter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnButtonDragEnter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandleDragLeave @ 146944fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SlateHandleDragLeave(UButton *this,FDragDropEvent *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragLeave,
             &local_28);
  if ((*(int *)&(this->OnButtonDragLeave).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnButtonDragLeave).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragLeave,
                 &local_28);
      if (*(int *)&(this->OnButtonDragLeave).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnButtonDragLeave).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandleDragOver @ 146945040

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UButton::SlateHandleDragOver
          (UButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FDragDropEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDragOver,
             &local_28);
  if (((*(int *)&(this->OnButtonDragOver).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnButtonDragOver).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnButtonDragOver,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandleDrop @ 1469450e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UButton::SlateHandleDrop
          (UButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FDragDropEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonDrop,&local_28
            );
  if (((*(int *)&(this->OnButtonDrop).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnButtonDrop).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnButtonDrop,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandleHovered @ 146945180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SlateHandleHovered(UButton *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnHovered,(void *)0x0);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetHoveredStateRegistration::Bit,true);
  return;
}

// SlateHandleOnLostFocus @ 1469451c0

void __thiscall UButton::SlateHandleOnLostFocus(UButton *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnLostFocus,&local_28)
  ;
  if ((*(int *)&(this->OnLostFocus).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnLostFocus).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandleOnReceivedFocus @ 146945210

void __thiscall UButton::SlateHandleOnReceivedFocus(UButton *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReceivedFocus,
             &local_28);
  if ((*(int *)&(this->OnReceivedFocus).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnReceivedFocus).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandlePressed @ 146945260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SlateHandlePressed(UButton *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPressed,(void *)0x0);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,true);
  return;
}

// SlateHandleReleased @ 1469452a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SlateHandleReleased(UButton *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnReleased,(void *)0x0);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,false);
  return;
}

// SlateHandleUnhovered @ 1469452e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SlateHandleUnhovered(UButton *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnUnhovered,(void *)0x0)
  ;
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetHoveredStateRegistration::Bit,false);
  return;
}

// StaticRegisterNativesUButton @ 1469456f0

void __cdecl UButton::StaticRegisterNativesUButton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UButton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146947960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButton::SynchronizeProperties(UButton *this)

{
  SButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_88;
  FLinearColor_u_0 local_70;
  undefined1 local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyButton).Object;
  if (pSVar1 != (SButton *)0x0) {
    SButton::SetButtonStyle(pSVar1,&this->WidgetStyle);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    local_70._0_8_ = *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
    local_70._8_8_ = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
    pSVar1 = (this->MyButton).Object;
    local_60 = 1;
    local_48 = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FLinearColor> *)&local_70._s_0,None
            );
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_88);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    local_40._0_8_ = *(undefined8 *)&(this->BackgroundColor).field0_0x0;
    local_40._8_8_ = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
    local_30 = 0;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    SBorder::SetBorderBackgroundColor
              ((SBorder *)(this->MyButton).Object,(TAttribute<FSlateColor> *)&local_40._s_0);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    SButton::SetClickMethod((this->MyButton).Object,(uint)(this->ClickMethod).Value);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    SButton::SetTouchMethod((this->MyButton).Object,(uint)(this->TouchMethod).Value);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    SButton::SetPressMethod((this->MyButton).Object,(uint)(this->PressMethod).Value);
    if ((this->MyButton).Object == (SButton *)0x0) {
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
    SButton::SetAllowDragDrop((this->MyButton).Object,this->bAllowDragDrop);
  }
  return;
}

// __VTableCtorCaller @ 146950470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UButton::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UContentWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UContentWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &_vftable__for__UVisual__;
    *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
    FButtonStyle::FButtonStyle((FButtonStyle *)&this[1].field_0x8);
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined8 *)&this[3].field_0x38 = 0;
    *(undefined8 *)&this[3].field_0x40 = 0;
    *(undefined8 *)&this[3].field_0x48 = 0;
    *(undefined8 *)&this[3].field_0x50 = 0;
    *(undefined8 *)&this[3].field_0x58 = 0;
    *(undefined8 *)&this[3].field_0x60 = 0;
    *(undefined8 *)&this[3].field_0x68 = 0;
    *(undefined8 *)&this[3].field_0x70 = 0;
    *(undefined8 *)&this[3].field_0x78 = 0;
    *(undefined8 *)&this[3].field_0x80 = 0;
    *(undefined8 *)&this[3].field_0x88 = 0;
    *(undefined8 *)&this[3].field_0x90 = 0;
    *(undefined8 *)&this[3].field_0x98 = 0;
    *(undefined8 *)&this[3].field_0xa0 = 0;
    *(undefined8 *)&this[3].field_0xa8 = 0;
    *(undefined8 *)&this[3].field_0xb0 = 0;
    *(undefined4 *)&this[3].field_0xb8 = 0;
    *(undefined8 *)&this[3].field_0xc0 = 0;
    *(undefined8 *)&this[3].field_0xc8 = 0;
    *(undefined4 *)&this[3].field_0xd0 = 0;
    *(undefined8 *)&this[3].field_0xd8 = 0;
    *(undefined8 *)&this[3].field_0xe0 = 0;
    *(undefined4 *)&this[3].field_0xe8 = 0;
    *(undefined8 *)&this[3].field_0xf0 = 0;
    *(undefined8 *)&this[3].field_0xf8 = 0;
    *(undefined4 *)&this[3].field_0x100 = 0;
    *(undefined8 *)&this[3].field_0x108 = 0;
    *(undefined8 *)&this[3].field_0x110 = 0;
    *(undefined4 *)&this[3].field_0x118 = 0;
    *(undefined8 *)&this[3].field_0x120 = 0;
    *(undefined8 *)&this[3].field_0x128 = 0;
    *(undefined4 *)&this[3].field_0x130 = 0;
    *(undefined8 *)&this[3].field_0x138 = 0;
    *(undefined8 *)&this[3].field_0x140 = 0;
    *(undefined4 *)&this[3].field_0x148 = 0;
    *(undefined8 *)&this[3].field_0x150 = 0;
    *(undefined8 *)&this[3].field_0x158 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execIsPressed @ 1469539f0

void __cdecl UButton::execIsPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x2a].field_0x18;
  if (lVar1 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (((*(byte *)(lVar1 + 0x464) & 2) == 0) && (*(char *)(lVar1 + 0x4ac) == '\0')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetAllowDragDrop @ 1469546c0

void __cdecl UButton::execSetAllowDragDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
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
  *(bool *)(param_1 + 0x2b) = local_res8[0] != 0;
  lVar2 = *(longlong *)&param_1[0x2a].field_0x18;
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1c8) != 0)) && (*(longlong *)(lVar2 + 0x1d0) != 0))
     && (0 < *(int *)(*(longlong *)(lVar2 + 0x1d0) + 8))) {
    if (*(longlong *)&param_1[0x2a].field_0x18 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SButton::SetAllowDragDrop(*(SButton **)&param_1[0x2a].field_0x18,*(bool *)(param_1 + 0x2b));
  }
  return;
}

// execSetBackgroundColor @ 146954990

void __cdecl UButton::execSetBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x2a].field_0x18;
  *(undefined8 *)&param_1[0x22].field_0x20 = local_48;
  *(undefined8 *)(param_1 + 0x23) = uStack_40;
  if (this != (SBorder *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetBorderBackgroundColor(this,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// execSetClickMethod @ 146955090

void __cdecl UButton::execSetClickMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SButton *this;
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
  this = *(SButton **)&param_1[0x2a].field_0x18;
  param_1[0x23].field_0x8 = local_res8[0];
  if (this != (SButton *)0x0) {
    SButton::SetClickMethod(this,(uint)local_res8[0]);
  }
  return;
}

// execSetColorAndOpacity @ 146955130

void __cdecl UButton::execSetColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetColorAndOpacity((UButton *)param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetPressMethod @ 146956140

void __cdecl UButton::execSetPressMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SButton *this;
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
  this = *(SButton **)&param_1[0x2a].field_0x18;
  param_1[0x23].field_0xa = local_res8[0];
  if (this != (SButton *)0x0) {
    SButton::SetPressMethod(this,(uint)local_res8[0]);
  }
  return;
}

// execSetStyle @ 146956490

void __cdecl UButton::execSetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FButtonStyle *pFVar2;
  FButtonStyle local_398;
  
  FButtonStyle::FButtonStyle(&local_398);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_398,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_398);
  }
  pFVar2 = &local_398;
  if ((FButtonStyle *)param_2->MostRecentPropertyAddress != (FButtonStyle *)0x0) {
    pFVar2 = (FButtonStyle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FButtonStyle::operator=((FButtonStyle *)&param_1[0xb].field_0x18,pFVar2);
  if (*(SButton **)&param_1[0x2a].field_0x18 != (SButton *)0x0) {
    SButton::SetButtonStyle
              (*(SButton **)&param_1[0x2a].field_0x18,(FButtonStyle *)&param_1[0xb].field_0x18);
  }
  FButtonStyle::~FButtonStyle(&local_398);
  return;
}

// execSetTouchMethod @ 146956560

void __cdecl UButton::execSetTouchMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SButton *this;
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
  this = *(SButton **)&param_1[0x2a].field_0x18;
  param_1[0x23].field_0x9 = local_res8[0];
  if (this != (SButton *)0x0) {
    SButton::SetTouchMethod(this,(uint)local_res8[0]);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 76

// GetWidthOverride_WrapperImpl @ 1469637d0

void __cdecl USizeBox::GetWidthOverride_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d8);
  return;
}

// SetWidthOverride_WrapperImpl @ 146963820

void __cdecl USizeBox::SetWidthOverride_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 1;
  *(float *)((longlong)param_1 + 0x1d8) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetWidthOverride(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetHeightOverride_WrapperImpl @ 146963890

void __cdecl USizeBox::GetHeightOverride_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1dc);
  return;
}

// SetHeightOverride_WrapperImpl @ 1469638d0

void __cdecl USizeBox::SetHeightOverride_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 2;
  *(float *)((longlong)param_1 + 0x1dc) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetHeightOverride(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMinDesiredWidth_WrapperImpl @ 146963970

void __cdecl USizeBox::GetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1e0);
  return;
}

// SetMinDesiredWidth_WrapperImpl @ 1469639b0

void __cdecl USizeBox::SetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 4;
  *(float *)((longlong)param_1 + 0x1e0) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredWidth(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMinDesiredHeight_WrapperImpl @ 146963a10

void __cdecl USizeBox::GetMinDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1e4);
  return;
}

// SetMinDesiredHeight_WrapperImpl @ 146963ae0

void __cdecl USizeBox::SetMinDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 8;
  *(float *)((longlong)param_1 + 0x1e4) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredHeight(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMaxDesiredWidth_WrapperImpl @ 146963b40

void __cdecl USizeBox::GetMaxDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1e8);
  return;
}

// SetMaxDesiredWidth_WrapperImpl @ 146963b50

void __cdecl USizeBox::SetMaxDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 0x10;
  *(float *)((longlong)param_1 + 0x1e8) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredWidth(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMaxDesiredHeight_WrapperImpl @ 146963bb0

void __cdecl USizeBox::GetMaxDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1ec);
  return;
}

// SetMaxDesiredHeight_WrapperImpl @ 146963bc0

void __cdecl USizeBox::SetMaxDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 0x20;
  *(float *)((longlong)param_1 + 0x1ec) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredHeight(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMinAspectRatio_WrapperImpl @ 146963c20

void __cdecl USizeBox::GetMinAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1f0);
  return;
}

// SetMinAspectRatio_WrapperImpl @ 146963c30

void __cdecl USizeBox::SetMinAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 0x40;
  *(float *)((longlong)param_1 + 0x1f0) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinAspectRatio(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// GetMaxAspectRatio_WrapperImpl @ 146963c90

void __cdecl USizeBox::GetMaxAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 500);
  return;
}

// SetMaxAspectRatio_WrapperImpl @ 146963ca0

void __cdecl USizeBox::SetMaxAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x1f8) = *(byte *)((longlong)param_1 + 0x1f8) | 0x80;
  *(float *)((longlong)param_1 + 500) = local_28.Value.Size;
  if (*(SBox **)((longlong)param_1 + 0x1c8) != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxAspectRatio(*(SBox **)((longlong)param_1 + 0x1c8),&local_28);
  }
  return;
}

// StaticClass @ 146963d50

UClass * __cdecl USizeBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBox",&Z_Registration_Info_UClass_USizeBox.InnerSingleton,
               StaticRegisterNativesUSizeBox,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USizeBox>,InternalVTableHelperCtorCaller<USizeBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBox.InnerSingleton;
}

// USizeBox @ 14698d530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USizeBox * __thiscall USizeBox::USizeBox(USizeBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MySizeBox).Object = (SBox *)0x0;
  (this->MySizeBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USizeBox @ 14698d580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USizeBox * __thiscall USizeBox::USizeBox(USizeBox *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MySizeBox).Object = (SBox *)0x0;
  (this->MySizeBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->MinAspectRatio = 1.0;
  this->MaxAspectRatio = 1.0;
  return this;
}

// ~USizeBox @ 1469941d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USizeBox::~USizeBox(USizeBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySizeBox).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// ClearHeightOverride @ 1469a6490

void __thiscall USizeBox::ClearHeightOverride(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_HeightOverride = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetHeightOverride(this_00,&local_28);
  }
  return;
}

// ClearMaxAspectRatio @ 1469a66d0

void __thiscall USizeBox::ClearMaxAspectRatio(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxAspectRatio = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxAspectRatio(this_00,&local_28);
  }
  return;
}

// ClearMaxDesiredHeight @ 1469a67c0

void __thiscall USizeBox::ClearMaxDesiredHeight(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredHeight = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxDesiredHeight(this_00,&local_28);
  }
  return;
}

// ClearMaxDesiredWidth @ 1469a68b0

void __thiscall USizeBox::ClearMaxDesiredWidth(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredWidth = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxDesiredWidth(this_00,&local_28);
  }
  return;
}

// ClearMinAspectRatio @ 1469a6b40

void __thiscall USizeBox::ClearMinAspectRatio(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinAspectRatio = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinAspectRatio(this_00,&local_28);
  }
  return;
}

// ClearMinDesiredHeight @ 1469a6c30

void __thiscall USizeBox::ClearMinDesiredHeight(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredHeight = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinDesiredHeight(this_00,&local_28);
  }
  return;
}

// ClearMinDesiredWidth @ 1469a6d20

void __thiscall USizeBox::ClearMinDesiredWidth(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredWidth = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinDesiredWidth(this_00,&local_28);
  }
  return;
}

// ClearWidthOverride @ 1469a73b0

void __thiscall USizeBox::ClearWidthOverride(USizeBox *this)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_WidthOverride = '\0';
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetWidthOverride(this_00,&local_28);
  }
  return;
}

// GetHeightOverride @ 1469d0fe0

float __thiscall USizeBox::GetHeightOverride(USizeBox *this)

{
  return this->HeightOverride;
}

// GetMaxAspectRatio @ 1469d1c20

float __thiscall USizeBox::GetMaxAspectRatio(USizeBox *this)

{
  return this->MaxAspectRatio;
}

// GetMaxDesiredHeight @ 1469d1c40

float __thiscall USizeBox::GetMaxDesiredHeight(USizeBox *this)

{
  return this->MaxDesiredHeight;
}

// GetMaxDesiredWidth @ 1469d1c60

float __thiscall USizeBox::GetMaxDesiredWidth(USizeBox *this)

{
  return this->MaxDesiredWidth;
}

// GetMinAspectRatio @ 1469d1da0

float __thiscall USizeBox::GetMinAspectRatio(USizeBox *this)

{
  return this->MinAspectRatio;
}

// GetMinDesiredHeight @ 1469d1dc0

float __thiscall USizeBox::GetMinDesiredHeight(USizeBox *this)

{
  return this->MinDesiredHeight;
}

// GetMinDesiredWidth @ 1469d1e10

float __thiscall USizeBox::GetMinDesiredWidth(USizeBox *this)

{
  return this->MinDesiredWidth;
}

// GetPrivateStaticClass @ 1469d5b20

UClass * __cdecl USizeBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBox",&Z_Registration_Info_UClass_USizeBox.InnerSingleton,
               StaticRegisterNativesUSizeBox,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USizeBox>,InternalVTableHelperCtorCaller<USizeBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBox.InnerSingleton;
}

// GetSlotClass @ 1469d8790

UClass * __thiscall USizeBox::GetSlotClass(USizeBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBoxSlot",&Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton
               ,USizeBoxSlot::StaticRegisterNativesUSizeBoxSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USizeBoxSlot>,
               InternalVTableHelperCtorCaller<USizeBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBoxSlot.InnerSingleton;
}

// GetWidthOverride @ 1469da3e0

float __thiscall USizeBox::GetWidthOverride(USizeBox *this)

{
  return this->WidthOverride;
}

// IsHeightOverride @ 1469e1770

bool __thiscall USizeBox::IsHeightOverride(USizeBox *this)

{
  return this->bOverride_HeightOverride;
}

// IsMaxAspectRatioOverride @ 1469e2370

bool __thiscall USizeBox::IsMaxAspectRatioOverride(USizeBox *this)

{
  return this->bOverride_MaxAspectRatio;
}

// IsMaxDesiredHeightOverride @ 1469e23b0

bool __thiscall USizeBox::IsMaxDesiredHeightOverride(USizeBox *this)

{
  return this->bOverride_MaxDesiredHeight;
}

// IsMaxDesiredWidthOverride @ 1469e23f0

bool __thiscall USizeBox::IsMaxDesiredWidthOverride(USizeBox *this)

{
  return this->bOverride_MaxDesiredWidth;
}

// IsMinAspectRatioOverride @ 1469e2430

bool __thiscall USizeBox::IsMinAspectRatioOverride(USizeBox *this)

{
  return this->bOverride_MinAspectRatio;
}

// IsMinDesiredHeightOverride @ 1469e2470

bool __thiscall USizeBox::IsMinDesiredHeightOverride(USizeBox *this)

{
  return this->bOverride_MinDesiredHeight;
}

// IsMinDesiredWidthOverride @ 1469e24b0

bool __thiscall USizeBox::IsMinDesiredWidthOverride(USizeBox *this)

{
  return this->bOverride_MinDesiredWidth;
}

// IsWidthOverride @ 1469e38e0

bool __thiscall USizeBox::IsWidthOverride(USizeBox *this)

{
  return this->bOverride_WidthOverride;
}

// OnSlotAdded @ 1469f0da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USizeBox::OnSlotAdded(USizeBox *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SBox,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SBox,1> local_28;
  FString local_18;
  
  if ((this->MySizeBox).Object != (SBox *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<USizeBoxSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = USizeBoxSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<USizeBoxSlot>(&local_38);
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
    pTVar3 = TSharedPtr<SBox,1>::ToSharedRef(&this->MySizeBox,&local_28);
    USizeBoxSlot::BuildSlot((USizeBoxSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USizeBox::OnSlotRemoved(USizeBox *this,UPanelSlot *param_1)

{
  SBox *this_00;
  
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    SBox::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// RebuildWidget @ 146a05780

TSharedRef<SWidget,1> * __thiscall
USizeBox::RebuildWidget(USizeBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SBox,1> *this_00;
  int iVar1;
  SBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SBox,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  UClass *pUVar9;
  USizeBoxSlot *this_01;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<SBox,1> local_3a8;
  TSharedRef<SBox,1> local_398;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_388;
  TSharedRef<SBox,1> local_370;
  FArguments local_360;
  
  pFVar6 = SBox::FArguments::FArguments(&local_360);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_388,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SizeBox.cpp"
             ,0x24,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_388,&local_398,pFVar6);
  local_3a8.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  local_3a8.Object = pTVar7->Object;
  if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MySizeBox;
  if (this_00 != &local_3a8) {
    this_00->Object = local_3a8.Object;
    local_3a8.Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySizeBox).SharedReferenceCount,&local_3a8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_360);
  if ((int)this->_padding_ < 1) goto LAB_146a0595b;
  if ((int)this->_padding_ < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  this_01 = *(USizeBoxSlot **)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146a05919:
    if (this_01 == (USizeBoxSlot *)0x0) goto LAB_146a05941;
    pUVar9 = USizeBoxSlot::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_146a05941;
  }
  else {
    if (this_01 != (USizeBoxSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
      goto LAB_146a05919;
    }
LAB_146a05941:
    this_01 = (USizeBoxSlot *)0x0;
  }
  pTVar7 = TSharedPtr<SBox,1>::ToSharedRef(this_00,&local_370);
  USizeBoxSlot::BuildSlot(this_01,pTVar7);
LAB_146a0595b:
  if (this_00->Object == (SBox *)0x0) {
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
  pSVar2 = this_00->Object;
  pTVar3 = (this->MySizeBox).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SBox *)0x0) {
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
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b340

void __thiscall USizeBox::ReleaseSlateResources(USizeBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySizeBox != (TSharedPtr<SBox,1> *)&local_18) {
    (this->MySizeBox).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySizeBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetHeightOverride @ 146a14740

void __thiscall USizeBox::SetHeightOverride(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_HeightOverride = '\x01';
  this->HeightOverride = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetHeightOverride(this_00,&local_28);
  }
  return;
}

// SetMaxAspectRatio @ 146a16ae0

void __thiscall USizeBox::SetMaxAspectRatio(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxAspectRatio = '\x01';
  this->MaxAspectRatio = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMaxAspectRatio(this_00,&local_28);
  }
  return;
}

// SetMaxDesiredHeight @ 146a16be0

void __thiscall USizeBox::SetMaxDesiredHeight(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredHeight = '\x01';
  this->MaxDesiredHeight = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMaxDesiredHeight(this_00,&local_28);
  }
  return;
}

// SetMaxDesiredWidth @ 146a16ce0

void __thiscall USizeBox::SetMaxDesiredWidth(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredWidth = '\x01';
  this->MaxDesiredWidth = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMaxDesiredWidth(this_00,&local_28);
  }
  return;
}

// SetMinAspectRatio @ 146a17200

void __thiscall USizeBox::SetMinAspectRatio(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinAspectRatio = '\x01';
  this->MinAspectRatio = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMinAspectRatio(this_00,&local_28);
  }
  return;
}

// SetMinDesiredHeight @ 146a17300

void __thiscall USizeBox::SetMinDesiredHeight(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredHeight = '\x01';
  this->MinDesiredHeight = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMinDesiredHeight(this_00,&local_28);
  }
  return;
}

// SetMinDesiredWidth @ 146a17640

void __thiscall USizeBox::SetMinDesiredWidth(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredWidth = '\x01';
  this->MinDesiredWidth = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetMinDesiredWidth(this_00,&local_28);
  }
  return;
}

// SetWidthOverride @ 146a1dff0

void __thiscall USizeBox::SetWidthOverride(USizeBox *this,float param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_WidthOverride = '\x01';
  this->WidthOverride = param_1;
  this_00 = (this->MySizeBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value.Size = param_1;
    SBox::SetWidthOverride(this_00,&local_28);
  }
  return;
}

// StaticRegisterNativesUSizeBox @ 146a1ef40

void __cdecl USizeBox::StaticRegisterNativesUSizeBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_USizeBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a25280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USizeBox::SynchronizeProperties(USizeBox *this)

{
  undefined1 uVar1;
  SBox *pSVar2;
  TAttribute<FOptionalSize> local_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_WidthOverride == 0) {
    this->field_0x1f8 = uVar1 & 0xfe;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a252f4;
    }
  }
  else {
    local_28.Value.Size = this->WidthOverride;
    this->field_0x1f8 = uVar1 | 1;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a252f4:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetWidthOverride(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_HeightOverride == '\0') {
    this->field_0x1f8 = uVar1 & 0xfd;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a25362;
    }
  }
  else {
    local_28.Value.Size = this->HeightOverride;
    this->field_0x1f8 = uVar1 | 2;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a25362:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetHeightOverride(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_MinDesiredWidth == '\0') {
    this->field_0x1f8 = uVar1 & 0xfb;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a253d0;
    }
  }
  else {
    local_28.Value.Size = this->MinDesiredWidth;
    this->field_0x1f8 = uVar1 | 4;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a253d0:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredWidth(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_MinDesiredHeight == '\0') {
    this->field_0x1f8 = uVar1 & 0xf7;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a2543e;
    }
  }
  else {
    local_28.Value.Size = this->MinDesiredHeight;
    this->field_0x1f8 = uVar1 | 8;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a2543e:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredHeight(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_MaxDesiredWidth == '\0') {
    this->field_0x1f8 = uVar1 & 0xef;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a254ac;
    }
  }
  else {
    local_28.Value.Size = this->MaxDesiredWidth;
    this->field_0x1f8 = uVar1 | 0x10;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a254ac:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredWidth(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_MaxDesiredHeight == '\0') {
    this->field_0x1f8 = uVar1 & 0xdf;
    if (pSVar2 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      goto LAB_146a2551a;
    }
  }
  else {
    local_28.Value.Size = this->MaxDesiredHeight;
    this->field_0x1f8 = uVar1 | 0x20;
    if (pSVar2 != (SBox *)0x0) {
LAB_146a2551a:
      local_28.Getter._8_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredHeight(pSVar2,&local_28);
    }
  }
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if (this->bOverride_MinAspectRatio == '\0') {
    this->field_0x1f8 = uVar1 & 0xbf;
    if (pSVar2 == (SBox *)0x0) goto LAB_146a2559e;
    local_28.Value.Size = FOptionalSize::Unspecified;
  }
  else {
    local_28.Value.Size = this->MinAspectRatio;
    this->field_0x1f8 = uVar1 | 0x40;
    if (pSVar2 == (SBox *)0x0) goto LAB_146a2559e;
  }
  local_28.Getter._8_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  SBox::SetMinAspectRatio(pSVar2,&local_28);
LAB_146a2559e:
  uVar1 = this->field_0x1f8;
  pSVar2 = (this->MySizeBox).Object;
  if ((bool)this->bOverride_MaxAspectRatio) {
    local_28.Value.Size = this->MaxAspectRatio;
    this->field_0x1f8 = uVar1 | 0x80;
    if (pSVar2 == (SBox *)0x0) {
      return;
    }
  }
  else {
    this->field_0x1f8 = uVar1 & 0x7f;
    if (pSVar2 == (SBox *)0x0) {
      return;
    }
    local_28.Value.Size = FOptionalSize::Unspecified;
  }
  local_28.Getter._8_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  SBox::SetMaxAspectRatio(pSVar2,&local_28);
  return;
}

// execClearHeightOverride @ 146a32ef0

void __cdecl USizeBox::execClearHeightOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xfd;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetHeightOverride(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMaxAspectRatio @ 146a33030

void __cdecl USizeBox::execClearMaxAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0x7f;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxAspectRatio(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMaxDesiredHeight @ 146a33150

void __cdecl USizeBox::execClearMaxDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xdf;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxDesiredHeight(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMaxDesiredWidth @ 146a33270

void __cdecl USizeBox::execClearMaxDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xef;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMaxDesiredWidth(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMinAspectRatio @ 146a333d0

void __cdecl USizeBox::execClearMinAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xbf;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinAspectRatio(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMinDesiredHeight @ 146a334f0

void __cdecl USizeBox::execClearMinDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xf7;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinDesiredHeight(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearMinDesiredWidth @ 146a33610

void __cdecl USizeBox::execClearMinDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xfb;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetMinDesiredWidth(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execClearWidthOverride @ 146a33940

void __cdecl USizeBox::execClearWidthOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 & 0xfe;
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    SBox::SetWidthOverride(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execSetHeightOverride @ 146a3d2e0

void __cdecl USizeBox::execSetHeightOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 2;
  *(float *)&param_1[0xb].field_0x24 = local_res8[0];
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetHeightOverride(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execSetMaxAspectRatio @ 146a3ed80

void __cdecl USizeBox::execSetMaxAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBox *this;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 0x80;
  this = *(SBox **)&param_1[0xb].field_0x10;
  *(float *)&param_1[0xc].field_0x14 = local_res8[0];
  if (this != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxAspectRatio(this,&local_28);
  }
  return;
}

// execSetMaxDesiredHeight @ 146a3ee50

void __cdecl USizeBox::execSetMaxDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBox *this;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 0x20;
  this = *(SBox **)&param_1[0xb].field_0x10;
  *(float *)&param_1[0xc].field_0xc = local_res8[0];
  if (this != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredHeight(this,&local_28);
  }
  return;
}

// execSetMaxDesiredWidth @ 146a3ef20

void __cdecl USizeBox::execSetMaxDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBox *this;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 0x10;
  this = *(SBox **)&param_1[0xb].field_0x10;
  *(float *)&param_1[0xc].field_0x8 = local_res8[0];
  if (this != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredWidth(this,&local_28);
  }
  return;
}

// execSetMinAspectRatio @ 146a3f240

void __cdecl USizeBox::execSetMinAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 0x40;
  *(float *)&param_1[0xc].field_0x10 = local_res8[0];
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinAspectRatio(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}

// execSetMinDesiredHeight @ 146a3f310

void __cdecl USizeBox::execSetMinDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBox *this;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 8;
  this = *(SBox **)&param_1[0xb].field_0x10;
  *(float *)&param_1[0xc].field_0x4 = local_res8[0];
  if (this != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredHeight(this,&local_28);
  }
  return;
}

// execSetMinDesiredWidth @ 146a3f5f0

void __cdecl USizeBox::execSetMinDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBox *this;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 4;
  this = *(SBox **)&param_1[0xb].field_0x10;
  *(float *)(param_1 + 0xc) = local_res8[0];
  if (this != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredWidth(this,&local_28);
  }
  return;
}

// execSetWidthOverride @ 146a44b70

void __cdecl USizeBox::execSetWidthOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  TAttribute<FOptionalSize> local_28;
  
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
  param_1[0xc].field_0x18 = param_1[0xc].field_0x18 | 1;
  *(float *)&param_1[0xb].field_0x20 = local_res8[0];
  if (*(SBox **)&param_1[0xb].field_0x10 != (SBox *)0x0) {
    local_28.Value.Size = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetWidthOverride(*(SBox **)&param_1[0xb].field_0x10,&local_28);
  }
  return;
}


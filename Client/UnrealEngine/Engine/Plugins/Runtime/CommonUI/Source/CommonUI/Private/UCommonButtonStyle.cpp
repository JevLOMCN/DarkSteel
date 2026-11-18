// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 38

// StaticClass @ 14a784060

UClass * __cdecl UCommonButtonStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonStyle",
               &Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton,
               StaticRegisterNativesUCommonButtonStyle,0x710,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonStyle>,
               InternalVTableHelperCtorCaller<UCommonButtonStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton;
}

// UCommonButtonStyle @ 14a7ad310

UCommonButtonStyle * __thiscall
UCommonButtonStyle::UCommonButtonStyle(UCommonButtonStyle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonButtonStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SingleMaterialBrush);
  FSlateBrush::FSlateBrush(&this->NormalBase);
  FSlateBrush::FSlateBrush(&this->NormalHovered);
  FSlateBrush::FSlateBrush(&this->NormalPressed);
  FSlateBrush::FSlateBrush(&this->SelectedBase);
  FSlateBrush::FSlateBrush(&this->SelectedHovered);
  FSlateBrush::FSlateBrush(&this->SelectedPressed);
  FSlateBrush::FSlateBrush(&this->Disabled);
  (this->ButtonPadding).Left = 0.0;
  (this->ButtonPadding).Top = 0.0;
  (this->ButtonPadding).Right = 0.0;
  (this->ButtonPadding).Bottom = 0.0;
  (this->CustomPadding).Left = 0.0;
  (this->CustomPadding).Top = 0.0;
  (this->CustomPadding).Right = 0.0;
  (this->CustomPadding).Bottom = 0.0;
  (this->NormalTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->NormalHoveredTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SelectedTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SelectedHoveredTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DisabledTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FSlateSound::FSlateSound(&this->PressedSlateSound);
  FSlateSound::FSlateSound(&this->ClickedSlateSound);
  (this->SelectedPressedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedPressedSlateSound).Sound);
  (this->SelectedClickedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedClickedSlateSound).Sound);
  (this->LockedPressedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedPressedSlateSound).Sound);
  (this->LockedClickedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedClickedSlateSound).Sound);
  FSlateSound::FSlateSound(&this->HoveredSlateSound);
  (this->SelectedHoveredSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedHoveredSlateSound).Sound);
  (this->LockedHoveredSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedHoveredSlateSound).Sound);
  return this;
}

// UCommonButtonStyle @ 14a7ad470

UCommonButtonStyle * __thiscall
UCommonButtonStyle::UCommonButtonStyle(UCommonButtonStyle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonButtonStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SingleMaterialBrush);
  FSlateBrush::FSlateBrush(&this->NormalBase);
  FSlateBrush::FSlateBrush(&this->NormalHovered);
  FSlateBrush::FSlateBrush(&this->NormalPressed);
  FSlateBrush::FSlateBrush(&this->SelectedBase);
  FSlateBrush::FSlateBrush(&this->SelectedHovered);
  FSlateBrush::FSlateBrush(&this->SelectedPressed);
  FSlateBrush::FSlateBrush(&this->Disabled);
  (this->ButtonPadding).Left = 0.0;
  (this->ButtonPadding).Top = 0.0;
  (this->ButtonPadding).Right = 0.0;
  (this->ButtonPadding).Bottom = 0.0;
  (this->CustomPadding).Left = 0.0;
  (this->CustomPadding).Top = 0.0;
  (this->CustomPadding).Right = 0.0;
  (this->CustomPadding).Bottom = 0.0;
  (this->NormalTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->NormalHoveredTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SelectedTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SelectedHoveredTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DisabledTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FSlateSound::FSlateSound(&this->PressedSlateSound);
  FSlateSound::FSlateSound(&this->ClickedSlateSound);
  (this->SelectedPressedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedPressedSlateSound).Sound);
  (this->SelectedClickedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedClickedSlateSound).Sound);
  (this->LockedPressedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedPressedSlateSound).Sound);
  (this->LockedClickedSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedClickedSlateSound).Sound);
  FSlateSound::FSlateSound(&this->HoveredSlateSound);
  (this->SelectedHoveredSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->SelectedHoveredSlateSound).Sound);
  (this->LockedHoveredSlateSound).bHasSound = false;
  FSlateSound::FSlateSound(&(this->LockedHoveredSlateSound).Sound);
  return this;
}

// ~UCommonButtonStyle @ 14a7b2a00

void __thiscall UCommonButtonStyle::~UCommonButtonStyle(UCommonButtonStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7UCommonButtonStyle__6B_;
  (this->Disabled)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Disabled).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->SelectedPressed).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SelectedPressed)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SelectedHovered).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SelectedHovered)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SelectedBase).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SelectedBase)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalPressed).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalPressed)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalHovered).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalHovered)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalBase).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalBase)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SingleMaterialBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SingleMaterialBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UObject::~UObject((UObject *)this);
  return;
}

// GetButtonPadding @ 14a7e0e30

void __thiscall UCommonButtonStyle::GetButtonPadding(UCommonButtonStyle *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->ButtonPadding).Top;
  fVar2 = (this->ButtonPadding).Right;
  fVar3 = (this->ButtonPadding).Bottom;
  param_1->Left = (this->ButtonPadding).Left;
  param_1->Top = fVar1;
  param_1->Right = fVar2;
  param_1->Bottom = fVar3;
  return;
}

// GetCustomPadding @ 14a7e1900

void __thiscall UCommonButtonStyle::GetCustomPadding(UCommonButtonStyle *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->CustomPadding).Top;
  fVar2 = (this->CustomPadding).Right;
  fVar3 = (this->CustomPadding).Bottom;
  param_1->Left = (this->CustomPadding).Left;
  param_1->Top = fVar1;
  param_1->Right = fVar2;
  param_1->Bottom = fVar3;
  return;
}

// GetDisabledBrush @ 14a7e1c70

void __thiscall UCommonButtonStyle::GetDisabledBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->Disabled);
  return;
}

// GetDisabledTextStyle @ 14a7e1c90

UCommonTextStyle * __thiscall UCommonButtonStyle::GetDisabledTextStyle(UCommonButtonStyle *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->DisabledTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->DisabledTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->DisabledTextStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e1d24;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e1d24:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// GetMaterialBrush @ 14a7e3420

void __thiscall UCommonButtonStyle::GetMaterialBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->SingleMaterialBrush);
  return;
}

// GetNormalBaseBrush @ 14a7e34c0

void __thiscall
UCommonButtonStyle::GetNormalBaseBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->NormalBase);
  return;
}

// GetNormalHoveredBrush @ 14a7e34e0

void __thiscall
UCommonButtonStyle::GetNormalHoveredBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->NormalHovered);
  return;
}

// GetNormalHoveredTextStyle @ 14a7e3500

UCommonTextStyle * __thiscall
UCommonButtonStyle::GetNormalHoveredTextStyle(UCommonButtonStyle *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->NormalHoveredTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->NormalHoveredTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->NormalHoveredTextStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e3594;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e3594:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// GetNormalPressedBrush @ 14a7e35f0

void __thiscall
UCommonButtonStyle::GetNormalPressedBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->NormalPressed);
  return;
}

// GetNormalTextStyle @ 14a7e3610

UCommonTextStyle * __thiscall UCommonButtonStyle::GetNormalTextStyle(UCommonButtonStyle *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->NormalTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->NormalTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->NormalTextStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e36a4;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e36a4:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// GetPrivateStaticClass @ 14a7e52f0

UClass * __cdecl UCommonButtonStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonStyle",
               &Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton,
               StaticRegisterNativesUCommonButtonStyle,0x710,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonStyle>,
               InternalVTableHelperCtorCaller<UCommonButtonStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonStyle.InnerSingleton;
}

// GetSelectedBaseBrush @ 14a7e76c0

void __thiscall
UCommonButtonStyle::GetSelectedBaseBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->SelectedBase);
  return;
}

// GetSelectedHoveredBrush @ 14a7e7710

void __thiscall
UCommonButtonStyle::GetSelectedHoveredBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->SelectedHovered);
  return;
}

// GetSelectedHoveredTextStyle @ 14a7e7730

UCommonTextStyle * __thiscall
UCommonButtonStyle::GetSelectedHoveredTextStyle(UCommonButtonStyle *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->SelectedHoveredTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->SelectedHoveredTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->SelectedHoveredTextStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e77c4;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e77c4:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// GetSelectedPressedBrush @ 14a7e7820

void __thiscall
UCommonButtonStyle::GetSelectedPressedBrush(UCommonButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->SelectedPressed);
  return;
}

// GetSelectedTextStyle @ 14a7e7ab0

UCommonTextStyle * __thiscall UCommonButtonStyle::GetSelectedTextStyle(UCommonButtonStyle *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->SelectedTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->SelectedTextStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->SelectedTextStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e7b44;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e7b44:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// NeedsLoadForServer @ 14a7fb900

bool __thiscall UCommonButtonStyle::NeedsLoadForServer(UCommonButtonStyle *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
}

// StaticRegisterNativesUCommonButtonStyle @ 14a81e4f0

void __cdecl UCommonButtonStyle::StaticRegisterNativesUCommonButtonStyle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UCommonButtonStyle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14a82b7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UCommonButtonStyle::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCommonButtonStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[1].field_0x8);
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[5].field_0x18);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pUVar1 + 10));
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[0xe].field_0x10);
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[0x12].field_0x20);
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[0x17].field_0x8);
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[0x1b].field_0x18);
    FSlateBrush::FSlateBrush((FSlateBrush *)(pUVar1 + 0x20));
    *(undefined8 *)&pUVar1[0x24].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x24].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x24].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x25) = 0;
    *(undefined8 *)&pUVar1[0x25].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x25].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x26) = 0;
    *(undefined8 *)&pUVar1[0x26].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x26].field_0x10 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x26].field_0x18);
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x27].field_0x8);
    pUVar1[0x27].field_0x20 = 0;
    FSlateSound::FSlateSound((FSlateSound *)(pUVar1 + 0x28));
    pUVar1[0x28].field_0x18 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x28].field_0x20);
    pUVar1[0x29].field_0x10 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x29].field_0x18);
    pUVar1[0x2a].field_0x8 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x2a].field_0x10);
    FSlateSound::FSlateSound((FSlateSound *)(pUVar1 + 0x2b));
    pUVar1[0x2b].field_0x18 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x2b].field_0x20);
    pUVar1[0x2c].field_0x10 = 0;
    FSlateSound::FSlateSound((FSlateSound *)&pUVar1[0x2c].field_0x18);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execGetButtonPadding @ 14a82d690

void __cdecl
UCommonButtonStyle::execGetButtonPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x24].field_0x11;
  uVar3 = param_1[0x24].field_0x12;
  uVar4 = param_1[0x24].field_0x13;
  uVar5 = param_1[0x24].field_0x14;
  uVar6 = param_1[0x24].field_0x15;
  uVar7 = param_1[0x24].field_0x16;
  uVar8 = param_1[0x24].field_0x17;
  uVar9 = param_1[0x24].field_0x18;
  uVar10 = param_1[0x24].field_0x19;
  uVar11 = param_1[0x24].field_0x1a;
  uVar12 = param_1[0x24].field_0x1b;
  uVar13 = param_1[0x24].field_0x1c;
  uVar14 = param_1[0x24].field_0x1d;
  uVar15 = param_1[0x24].field_0x1e;
  uVar16 = param_1[0x24].field_0x1f;
  puVar17[0] = param_1[0x24].field_0x10;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetCustomPadding @ 14a82daa0

void __cdecl
UCommonButtonStyle::execGetCustomPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x24].field_0x21;
  uVar3 = param_1[0x24].field_0x22;
  uVar4 = param_1[0x24].field_0x23;
  uVar5 = param_1[0x24].field_0x24;
  uVar6 = param_1[0x24].field_0x25;
  uVar7 = param_1[0x24].field_0x26;
  uVar8 = param_1[0x24].field_0x27;
  uVar9 = param_1[0x25].field_0x0;
  uVar10 = param_1[0x25].field_0x1;
  uVar11 = param_1[0x25].field_0x2;
  uVar12 = param_1[0x25].field_0x3;
  uVar13 = param_1[0x25].field_0x4;
  uVar14 = param_1[0x25].field_0x5;
  uVar15 = param_1[0x25].field_0x6;
  uVar16 = param_1[0x25].field_0x7;
  puVar17[0] = param_1[0x24].field_0x20;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetDisabledBrush @ 14a82dbb0

void __cdecl
UCommonButtonStyle::execGetDisabledBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)(param_1 + 0x20));
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetDisabledTextStyle @ 14a82dc80

void __cdecl
UCommonButtonStyle::execGetDisabledTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetDisabledTextStyle((UCommonButtonStyle *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}

// execGetMaterialBrush @ 14a82e7e0

void __cdecl
UCommonButtonStyle::execGetMaterialBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[1].field_0x8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetNormalBaseBrush @ 14a82e910

void __cdecl
UCommonButtonStyle::execGetNormalBaseBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[5].field_0x18);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetNormalHoveredBrush @ 14a82e9e0

void __cdecl
UCommonButtonStyle::execGetNormalHoveredBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)(param_1 + 10));
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetNormalHoveredTextStyle @ 14a82eab0

void __cdecl
UCommonButtonStyle::execGetNormalHoveredTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetNormalHoveredTextStyle((UCommonButtonStyle *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}

// execGetNormalPressedBrush @ 14a82eaf0

void __cdecl
UCommonButtonStyle::execGetNormalPressedBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[0xe].field_0x10);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetNormalTextStyle @ 14a82ebc0

void __cdecl
UCommonButtonStyle::execGetNormalTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetNormalTextStyle((UCommonButtonStyle *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}

// execGetSelectedBaseBrush @ 14a82ede0

void __cdecl
UCommonButtonStyle::execGetSelectedBaseBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[0x12].field_0x20);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetSelectedHoveredBrush @ 14a82ef20

void __cdecl
UCommonButtonStyle::execGetSelectedHoveredBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[0x17].field_0x8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetSelectedHoveredTextStyle @ 14a82eff0

void __cdecl
UCommonButtonStyle::execGetSelectedHoveredTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSelectedHoveredTextStyle((UCommonButtonStyle *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}

// execGetSelectedPressedBrush @ 14a82f060

void __cdecl
UCommonButtonStyle::execGetSelectedPressedBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[0x1b].field_0x18);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetSelectedTextStyle @ 14a82f1d0

void __cdecl
UCommonButtonStyle::execGetSelectedTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSelectedTextStyle((UCommonButtonStyle *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}


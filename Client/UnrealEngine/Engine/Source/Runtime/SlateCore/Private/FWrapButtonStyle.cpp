// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// StaticStruct @ 14252fe10

UScriptStruct * __cdecl FWrapButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWrapButtonStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FWrapButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWrapButtonStyle,(UObject *)pUVar1,
                         L"WrapButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FWrapButtonStyle.OuterSingleton;
}

// FWrapButtonStyle @ 142549440

FWrapButtonStyle * __thiscall
FWrapButtonStyle::FWrapButtonStyle(FWrapButtonStyle *this,FWrapButtonStyle *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Padding).Top;
  fVar3 = (param_1->Padding).Right;
  fVar4 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar2;
  (this->Padding).Right = fVar3;
  (this->Padding).Bottom = fVar4;
  this->WrapButtonIndex = param_1->WrapButtonIndex;
  FSlateBrush::FSlateBrush(&this->ExpandBrush,&param_1->ExpandBrush);
  bVar1 = param_1->bHasDownArrow;
  (this->ComboButtonStyle).bIsSet = false;
  this->bHasDownArrow = bVar1;
  bVar1 = (param_1->ComboButtonStyle).bIsSet;
  (this->ComboButtonStyle).bIsSet = bVar1;
  if (bVar1 != false) {
    FComboButtonStyle::FComboButtonStyle
              (&(this->ComboButtonStyle).TypedValue,&(param_1->ComboButtonStyle).TypedValue);
  }
  bVar1 = param_1->bIncludeSeparator;
  (this->SeparatorBrush).bIsSet = false;
  this->bIncludeSeparator = bVar1;
  bVar1 = (param_1->SeparatorBrush).bIsSet;
  (this->SeparatorBrush).bIsSet = bVar1;
  if (bVar1 != false) {
    FSlateBrush::FSlateBrush
              (&(this->SeparatorBrush).TypedValue,&(param_1->SeparatorBrush).TypedValue);
  }
  (this->SeparatorThickness).bIsSet = false;
  bVar1 = (param_1->SeparatorThickness).bIsSet;
  (this->SeparatorThickness).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SeparatorThickness).TypedValue = (param_1->SeparatorThickness).TypedValue;
  }
  (this->SeparatorPadding).bIsSet = false;
  bVar1 = (param_1->SeparatorPadding).bIsSet;
  (this->SeparatorPadding).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar2 = (param_1->SeparatorPadding).TypedValue.Top;
    fVar3 = (param_1->SeparatorPadding).TypedValue.Right;
    fVar4 = (param_1->SeparatorPadding).TypedValue.Bottom;
    (this->SeparatorPadding).TypedValue.Left = (param_1->SeparatorPadding).TypedValue.Left;
    (this->SeparatorPadding).TypedValue.Top = fVar2;
    (this->SeparatorPadding).TypedValue.Right = fVar3;
    (this->SeparatorPadding).TypedValue.Bottom = fVar4;
  }
  return this;
}

// FWrapButtonStyle @ 142549540

FWrapButtonStyle * __thiscall FWrapButtonStyle::FWrapButtonStyle(FWrapButtonStyle *this)

{
  this->WrapButtonIndex = -1;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  FSlateBrush::FSlateBrush(&this->ExpandBrush);
  this->bHasDownArrow = true;
  (this->ComboButtonStyle).bIsSet = false;
  this->bIncludeSeparator = true;
  (this->SeparatorBrush).bIsSet = false;
  (this->SeparatorThickness).TypedValue = 2.0;
  (this->SeparatorThickness).bIsSet = true;
  (this->SeparatorPadding).TypedValue.Left = 0.0;
  (this->SeparatorPadding).TypedValue.Top = 0.0;
  (this->SeparatorPadding).TypedValue.Right = 0.0;
  (this->SeparatorPadding).TypedValue.Bottom = 0.0;
  (this->SeparatorPadding).bIsSet = true;
  return this;
}

// operator= @ 14254e8e0

/* WARNING: Type propagation algorithm not settling */

FWrapButtonStyle * __thiscall
FWrapButtonStyle::operator=(FWrapButtonStyle *this,FWrapButtonStyle *param_1)

{
  TOptional<FComboButtonStyle> *this_00;
  TOptional<FSlateBrush> *this_01;
  TOptional<FMargin> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TOptional<FMargin> *pTVar6;
  
  fVar3 = (param_1->Padding).Top;
  fVar4 = (param_1->Padding).Right;
  fVar5 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  this->WrapButtonIndex = param_1->WrapButtonIndex;
  FSlateBrush::operator=(&this->ExpandBrush,&param_1->ExpandBrush);
  this_00 = &this->ComboButtonStyle;
  this->bHasDownArrow = param_1->bHasDownArrow;
  if (&param_1->ComboButtonStyle != this_00) {
    if ((param_1->ComboButtonStyle).bIsSet == false) {
      if ((this->ComboButtonStyle).bIsSet != false) {
        pTVar2 = (this->ComboButtonStyle).TypedValue.MenuBorderBrush.ResourceHandle.Data.
                 SharedReferenceCount.ReferenceController;
        *(undefined ***)&this_00->TypedValue = &___7FComboButtonStyle__6B_;
        (this->ComboButtonStyle).TypedValue.MenuBorderBrush._padding_ =
             (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar2 = (this->ComboButtonStyle).TypedValue.DownArrowImage.ResourceHandle.Data.
                 SharedReferenceCount.ReferenceController;
        (this->ComboButtonStyle).TypedValue.DownArrowImage._padding_ =
             (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FButtonStyle::~FButtonStyle(&(this->ComboButtonStyle).TypedValue.ButtonStyle);
        FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_00);
        (this->ComboButtonStyle).bIsSet = false;
      }
    }
    else {
      if ((this->ComboButtonStyle).bIsSet != false) {
        pTVar2 = (this->ComboButtonStyle).TypedValue.MenuBorderBrush.ResourceHandle.Data.
                 SharedReferenceCount.ReferenceController;
        *(undefined ***)&this_00->TypedValue = &___7FComboButtonStyle__6B_;
        (this->ComboButtonStyle).TypedValue.MenuBorderBrush._padding_ =
             (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pTVar2 = (this->ComboButtonStyle).TypedValue.DownArrowImage.ResourceHandle.Data.
                 SharedReferenceCount.ReferenceController;
        (this->ComboButtonStyle).TypedValue.DownArrowImage._padding_ =
             (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FButtonStyle::~FButtonStyle(&(this->ComboButtonStyle).TypedValue.ButtonStyle);
        FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_00);
      }
      FComboButtonStyle::FComboButtonStyle
                (&this_00->TypedValue,&(param_1->ComboButtonStyle).TypedValue);
      (this->ComboButtonStyle).bIsSet = true;
    }
  }
  this_01 = &this->SeparatorBrush;
  this->bIncludeSeparator = param_1->bIncludeSeparator;
  if (&param_1->SeparatorBrush != this_01) {
    if ((param_1->SeparatorBrush).bIsSet == false) {
      if ((this->SeparatorBrush).bIsSet != false) {
        pTVar2 = (this->SeparatorBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
                 ReferenceController;
        (this_01->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        (this->SeparatorBrush).bIsSet = false;
      }
    }
    else {
      if ((this->SeparatorBrush).bIsSet != false) {
        pTVar2 = (this->SeparatorBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
                 ReferenceController;
        (this_01->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      FSlateBrush::FSlateBrush(&this_01->TypedValue,&(param_1->SeparatorBrush).TypedValue);
      (this->SeparatorBrush).bIsSet = true;
    }
  }
  if (&param_1->SeparatorThickness != &this->SeparatorThickness) {
    if ((param_1->SeparatorThickness).bIsSet == false) {
      if ((this->SeparatorThickness).bIsSet != false) {
        (this->SeparatorThickness).bIsSet = false;
      }
    }
    else {
      (this->SeparatorThickness).TypedValue = (param_1->SeparatorThickness).TypedValue;
      (this->SeparatorThickness).bIsSet = true;
    }
  }
  pTVar6 = &param_1->SeparatorPadding;
  pTVar1 = &this->SeparatorPadding;
  if (pTVar6 != pTVar1) {
    if ((param_1->SeparatorPadding).bIsSet == false) {
      if ((this->SeparatorPadding).bIsSet != false) {
        (this->SeparatorPadding).bIsSet = false;
      }
    }
    else {
      fVar3 = (pTVar6->TypedValue).Top;
      fVar4 = (param_1->SeparatorPadding).TypedValue.Right;
      fVar5 = (param_1->SeparatorPadding).TypedValue.Bottom;
      (pTVar1->TypedValue).Left = (pTVar6->TypedValue).Left;
      (pTVar1->TypedValue).Top = fVar3;
      (this->SeparatorPadding).TypedValue.Right = fVar4;
      (this->SeparatorPadding).TypedValue.Bottom = fVar5;
      (this->SeparatorPadding).bIsSet = true;
    }
  }
  return this;
}

// GetResources @ 1425885a0

void __thiscall
FWrapButtonStyle::GetResources
          (FWrapButtonStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TOptional<FComboButtonStyle> *pTVar5;
  FSlateBrush *local_18;
  TOptional<FComboButtonStyle> *local_10;
  
  local_18 = &this->ExpandBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  pTVar5 = &this->ComboButtonStyle;
  if ((this->ComboButtonStyle).bIsSet == false) {
    pTVar5 = (TOptional<FComboButtonStyle> *)0x0;
  }
  if (pTVar5 != (TOptional<FComboButtonStyle> *)0x0) {
    (**(code **)(*(longlong *)&pTVar5->TypedValue + 8))(pTVar5,param_1);
  }
  local_10 = (TOptional<FComboButtonStyle> *)&this->SeparatorBrush;
  if ((this->SeparatorBrush).bIsSet == false) {
    local_10 = (TOptional<FComboButtonStyle> *)0x0;
  }
  if (local_10 != (TOptional<FComboButtonStyle> *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(TOptional<FComboButtonStyle> **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_10;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 14252e550

UScriptStruct * __cdecl FComboBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComboBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FComboBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComboBoxStyle,(UObject *)pUVar1,L"ComboBoxStyle"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FComboBoxStyle.OuterSingleton;
}

// FComboBoxStyle @ 142542710

FComboBoxStyle * __thiscall
FComboBoxStyle::FComboBoxStyle(FComboBoxStyle *this,FComboBoxStyle *param_1)

{
  UObject *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->_padding_ = (longlong)&___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle,&param_1->ComboButtonStyle);
  pUVar1 = (param_1->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->PressedSlateSound).LegacyResourceName_DEPRECATED;
  (this->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  pUVar1 = (param_1->SelectionChangeSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->SelectionChangeSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED;
  (this->SelectionChangeSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->SelectionChangeSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  fVar2 = (param_1->ContentPadding).Top;
  fVar3 = (param_1->ContentPadding).Right;
  fVar4 = (param_1->ContentPadding).Bottom;
  (this->ContentPadding).Left = (param_1->ContentPadding).Left;
  (this->ContentPadding).Top = fVar2;
  (this->ContentPadding).Right = fVar3;
  (this->ContentPadding).Bottom = fVar4;
  fVar2 = (param_1->MenuRowPadding).Top;
  fVar3 = (param_1->MenuRowPadding).Right;
  fVar4 = (param_1->MenuRowPadding).Bottom;
  (this->MenuRowPadding).Left = (param_1->MenuRowPadding).Left;
  (this->MenuRowPadding).Top = fVar2;
  (this->MenuRowPadding).Right = fVar3;
  (this->MenuRowPadding).Bottom = fVar4;
  return this;
}

// FComboBoxStyle @ 1425427f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FComboBoxStyle * __thiscall FComboBoxStyle::FComboBoxStyle(FComboBoxStyle *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle);
  uVar2 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  (this->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectionChangeSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->SelectionChangeSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->MenuRowPadding).Top = 0.0;
  (this->MenuRowPadding).Right = 0.0;
  (this->MenuRowPadding).Bottom = 0.0;
  (this->ContentPadding).Left = 4.0;
  (this->ContentPadding).Top = 2.0;
  (this->ContentPadding).Right = 4.0;
  *(undefined8 *)&(this->ContentPadding).Bottom = 0x40000000;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  ___xmm_3f8000003f8000003f8000003f800000 = (undefined4)uVar4;
  _UNK_15076b1f4 = SUB84(uVar4,4);
  uVar1 = _UNK_15076b1f4;
  (this->ComboButtonStyle).MenuBorderPadding.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  ___xmm_3f8000003f8000003f8000003f800000 = uVar3;
  uVar4 = _UNK_15076b1f8;
  (this->ComboButtonStyle).MenuBorderPadding.Top = (float)uVar1;
  _UNK_15076b1f8 = (undefined4)uVar2;
  _UNK_15076b1fc = SUB84(uVar2,4);
  uVar1 = _UNK_15076b1fc;
  (this->ComboButtonStyle).MenuBorderPadding.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar4;
  (this->ComboButtonStyle).MenuBorderPadding.Bottom = (float)uVar1;
  return this;
}

// ~FComboBoxStyle @ 14254ad60

void __thiscall FComboBoxStyle::~FComboBoxStyle(FComboBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FComboBoxStyle__6B_;
  (this->ComboButtonStyle).MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(undefined ***)&this->ComboButtonStyle = &___7FComboButtonStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboButtonStyle).MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->ComboButtonStyle).DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ComboButtonStyle).DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&(this->ComboButtonStyle).ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ComboButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254d970

FComboBoxStyle * __thiscall FComboBoxStyle::operator=(FComboBoxStyle *this,FComboBoxStyle *param_1)

{
  UObject *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FComboButtonStyle::operator=(&this->ComboButtonStyle,&param_1->ComboButtonStyle);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->PressedSlateSound).ResourceObject.field0_0x0 =
       (param_1->PressedSlateSound).ResourceObject.field0_0x0;
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->PressedSlateSound).LegacyResourceName_DEPRECATED;
  (this->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SelectionChangeSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->SelectionChangeSlateSound).ResourceObject.field0_0x0 =
       (param_1->SelectionChangeSlateSound).ResourceObject.field0_0x0;
  (this->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->SelectionChangeSlateSound).LegacyResourceName_DEPRECATED;
  (this->SelectionChangeSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->SelectionChangeSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  fVar2 = (param_1->ContentPadding).Top;
  fVar3 = (param_1->ContentPadding).Right;
  fVar4 = (param_1->ContentPadding).Bottom;
  (this->ContentPadding).Left = (param_1->ContentPadding).Left;
  (this->ContentPadding).Top = fVar2;
  (this->ContentPadding).Right = fVar3;
  (this->ContentPadding).Bottom = fVar4;
  fVar2 = (param_1->MenuRowPadding).Top;
  fVar3 = (param_1->MenuRowPadding).Right;
  fVar4 = (param_1->MenuRowPadding).Bottom;
  (this->MenuRowPadding).Left = (param_1->MenuRowPadding).Left;
  (this->MenuRowPadding).Top = fVar2;
  (this->MenuRowPadding).Right = fVar3;
  (this->MenuRowPadding).Bottom = fVar4;
  return this;
}

// GetDefault @ 14257f4f0

FComboBoxStyle * __cdecl FComboBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FComboBoxStyle(&::Default);
      atexit(`FComboBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142583c60

void __thiscall
FComboBoxStyle::GetResources
          (FComboBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142583c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->ComboButtonStyle + 8))(&this->ComboButtonStyle);
  return;
}

// GetTypeName @ 142589b10

FName __thiscall FComboBoxStyle::GetTypeName(FComboBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


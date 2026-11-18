// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 25

// StaticStruct @ 142d527c0

UScriptStruct * __cdecl FActionButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActionButtonStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FActionButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActionButtonStyle,(UObject *)pUVar1,
                         L"ActionButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FActionButtonStyle.OuterSingleton;
}

// FActionButtonStyle @ 142d60580

FActionButtonStyle * __thiscall
FActionButtonStyle::FActionButtonStyle(FActionButtonStyle *this,FActionButtonStyle *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  
  this->_padding_ = (longlong)&___7FActionButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle,&param_1->ButtonStyle);
  (this->ButtonContentPadding).bIsSet = false;
  bVar1 = (param_1->ButtonContentPadding).bIsSet;
  (this->ButtonContentPadding).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar3 = (param_1->ButtonContentPadding).TypedValue.Top;
    fVar4 = (param_1->ButtonContentPadding).TypedValue.Right;
    fVar5 = (param_1->ButtonContentPadding).TypedValue.Bottom;
    (this->ButtonContentPadding).TypedValue.Left = (param_1->ButtonContentPadding).TypedValue.Left;
    (this->ButtonContentPadding).TypedValue.Top = fVar3;
    (this->ButtonContentPadding).TypedValue.Right = fVar4;
    (this->ButtonContentPadding).TypedValue.Bottom = fVar5;
  }
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle,&param_1->ComboButtonStyle);
  bVar1 = param_1->bHasDownArrow;
  (this->ComboButtonContentPadding).bIsSet = false;
  this->bHasDownArrow = bVar1;
  bVar1 = (param_1->ComboButtonContentPadding).bIsSet;
  (this->ComboButtonContentPadding).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar3 = (param_1->ComboButtonContentPadding).TypedValue.Top;
    fVar4 = (param_1->ComboButtonContentPadding).TypedValue.Right;
    fVar5 = (param_1->ComboButtonContentPadding).TypedValue.Bottom;
    (this->ComboButtonContentPadding).TypedValue.Left =
         (param_1->ComboButtonContentPadding).TypedValue.Left;
    (this->ComboButtonContentPadding).TypedValue.Top = fVar3;
    (this->ComboButtonContentPadding).TypedValue.Right = fVar4;
    (this->ComboButtonContentPadding).TypedValue.Bottom = fVar5;
  }
  (this->HorizontalContentAlignment).Value = (param_1->HorizontalContentAlignment).Value;
  FTextBlockStyle::FTextBlockStyle(&this->TextBlockStyle,&param_1->TextBlockStyle);
  (this->IconBrush).bIsSet = false;
  bVar1 = (param_1->IconBrush).bIsSet;
  (this->IconBrush).bIsSet = bVar1;
  if (bVar1 != false) {
    FSlateBrush::FSlateBrush(&(this->IconBrush).TypedValue,&(param_1->IconBrush).TypedValue);
  }
  (this->IconColorAndOpacity).bIsSet = false;
  bVar1 = (param_1->IconColorAndOpacity).bIsSet;
  (this->IconColorAndOpacity).bIsSet = bVar1;
  if (bVar1 != false) {
    uVar2 = *(undefined8 *)
             ((longlong)&(param_1->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(this->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_1->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(this->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8)
         = uVar2;
    EVar6 = (param_1->IconColorAndOpacity).TypedValue.ColorTableId;
    uVar7 = *(undefined2 *)&(param_1->IconColorAndOpacity).TypedValue.field_0x12;
    (this->IconColorAndOpacity).TypedValue.ColorUseRule =
         (param_1->IconColorAndOpacity).TypedValue.ColorUseRule;
    (this->IconColorAndOpacity).TypedValue.ColorTableId = EVar6;
    *(undefined2 *)&(this->IconColorAndOpacity).TypedValue.field_0x12 = uVar7;
  }
  (this->IconNormalPadding).bIsSet = false;
  bVar1 = (param_1->IconNormalPadding).bIsSet;
  (this->IconNormalPadding).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar3 = (param_1->IconNormalPadding).TypedValue.Top;
    fVar4 = (param_1->IconNormalPadding).TypedValue.Right;
    fVar5 = (param_1->IconNormalPadding).TypedValue.Bottom;
    (this->IconNormalPadding).TypedValue.Left = (param_1->IconNormalPadding).TypedValue.Left;
    (this->IconNormalPadding).TypedValue.Top = fVar3;
    (this->IconNormalPadding).TypedValue.Right = fVar4;
    (this->IconNormalPadding).TypedValue.Bottom = fVar5;
  }
  (this->IconPressedPadding).bIsSet = false;
  bVar1 = (param_1->IconPressedPadding).bIsSet;
  (this->IconPressedPadding).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar3 = (param_1->IconPressedPadding).TypedValue.Top;
    fVar4 = (param_1->IconPressedPadding).TypedValue.Right;
    fVar5 = (param_1->IconPressedPadding).TypedValue.Bottom;
    (this->IconPressedPadding).TypedValue.Left = (param_1->IconPressedPadding).TypedValue.Left;
    (this->IconPressedPadding).TypedValue.Top = fVar3;
    (this->IconPressedPadding).TypedValue.Right = fVar4;
    (this->IconPressedPadding).TypedValue.Bottom = fVar5;
  }
  this->ActionButtonType = param_1->ActionButtonType;
  (this->IconButtonStyle).bIsSet = false;
  bVar1 = (param_1->IconButtonStyle).bIsSet;
  (this->IconButtonStyle).bIsSet = bVar1;
  if (bVar1 != false) {
    FButtonStyle::FButtonStyle
              (&(this->IconButtonStyle).TypedValue,&(param_1->IconButtonStyle).TypedValue);
  }
  return this;
}

// FActionButtonStyle @ 142d60730

FActionButtonStyle * __thiscall FActionButtonStyle::FActionButtonStyle(FActionButtonStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FActionButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  (this->ButtonContentPadding).bIsSet = false;
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle);
  this->bHasDownArrow = false;
  (this->ComboButtonContentPadding).bIsSet = false;
  (this->HorizontalContentAlignment).Value = '\x02';
  FTextBlockStyle::FTextBlockStyle(&this->TextBlockStyle);
  (this->IconBrush).bIsSet = false;
  (this->ActionButtonType).ComparisonIndex = 0;
  (this->ActionButtonType).Number = 0;
  (this->IconButtonStyle).bIsSet = false;
  (this->IconColorAndOpacity).bIsSet = false;
  (this->IconNormalPadding).bIsSet = false;
  (this->IconPressedPadding).bIsSet = false;
  return this;
}

// ~FActionButtonStyle @ 142d655e0

void __thiscall FActionButtonStyle::~FActionButtonStyle(FActionButtonStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((this->IconButtonStyle).bIsSet != false) {
    FButtonStyle::~FButtonStyle(&(this->IconButtonStyle).TypedValue);
  }
  if ((this->IconBrush).bIsSet != false) {
    pTVar1 = (this->IconBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController;
    (this->IconBrush).TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextBlockStyle::~FTextBlockStyle(&this->TextBlockStyle);
  FComboButtonStyle::~FComboButtonStyle(&this->ComboButtonStyle);
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetActionButtonType @ 142daa640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EActionButtonType __thiscall FActionButtonStyle::GetActionButtonType(FActionButtonStyle *this)

{
  EActionButtonType EVar1;
  EActionButtonType *pEVar2;
  undefined1 auStack_e8 [32];
  EActionButtonType local_c8 [8];
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  initializer_list<TPairInitializer<FName_const_&,EActionButtonType_const_&>_> local_88;
  TPairInitializer<FName_const_&,EActionButtonType_const_&> local_78;
  FName *local_68;
  EActionButtonType *local_60;
  FName *local_58;
  EActionButtonType *local_50;
  FName *local_48;
  EActionButtonType *local_40;
  FName *local_38;
  EActionButtonType *local_30;
  FName *local_28;
  EActionButtonType *local_20;
  TPairInitializer<FName_const_&,EActionButtonType_const_&> local_18;
  
  local_18.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  local_90 = this->ActionButtonType;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&local_c0,L"Default");
      local_78.Key = &local_c0;
      local_c8[0] = Default;
      local_78.Value = local_c8;
      ::FName::FName(&local_b8,L"Simple");
      local_68 = &local_b8;
      local_c8[1] = 1;
      local_60 = local_c8 + 1;
      ::FName::FName(&local_b0,L"Primary");
      local_58 = &local_b0;
      local_c8[2] = 2;
      local_50 = local_c8 + 2;
      ::FName::FName(&local_a8,L"Positive");
      local_48 = &local_a8;
      local_c8[3] = 3;
      local_40 = local_c8 + 3;
      ::FName::FName(&local_a0,L"Warning");
      local_38 = &local_a0;
      local_c8[4] = 4;
      local_30 = local_c8 + 4;
      ::FName::FName(&local_98,L"Error");
      local_28 = &local_98;
      local_c8[5] = 5;
      local_20 = local_c8 + 5;
      local_88._First = &local_78;
      local_88._Last = &local_18;
      TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
      ::
      TMap<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
                (&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::__l2
                  ::Lookup,&local_88);
      atexit(`UE::ToolWidgets::Private::NameToEnum'::__l2::_dynamic_atexit_destructor_for__Lookup__)
      ;
      _Init_thread_footer(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pEVar2 = TMapBase<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
           ::Find(&`enum_EActionButtonType___cdecl_UE::ToolWidgets::Private::NameToEnum(FName)'::
                   __l2::Lookup,&local_90);
  EVar1 = Default;
  if (pEVar2 != (EActionButtonType *)0x0) {
    EVar1 = *pEVar2;
  }
  return EVar1;
}

// GetButtonContentPadding @ 142dab6b0

FMargin * __thiscall
FActionButtonStyle::GetButtonContentPadding
          (FActionButtonStyle *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FMargin *pFVar4;
  
  pFVar4 = &(this->ButtonContentPadding).TypedValue;
  if ((this->ButtonContentPadding).bIsSet == false) {
    pFVar4 = &DefaultButtonContentPadding;
  }
  fVar1 = pFVar4->Top;
  fVar2 = pFVar4->Right;
  fVar3 = pFVar4->Bottom;
  __return_storage_ptr__->Left = pFVar4->Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetComboButtonContentPadding @ 142dab6e0

FMargin * __thiscall
FActionButtonStyle::GetComboButtonContentPadding
          (FActionButtonStyle *this,FMargin *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = 0x924;
  if ((this->ComboButtonContentPadding).bIsSet == false) {
    lVar4 = 0x8f0;
  }
  puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar4);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  __return_storage_ptr__->Left = (float)(int)uVar2;
  __return_storage_ptr__->Top = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->Right = (float)(int)uVar3;
  __return_storage_ptr__->Bottom = (float)(int)((ulonglong)uVar3 >> 0x20);
  return __return_storage_ptr__;
}

// GetDefault @ 142dab8c0

FActionButtonStyle * __cdecl FActionButtonStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FActionButtonStyle__6B_;
      FButtonStyle::FButtonStyle(&::Default.ButtonStyle);
      ::Default.ButtonContentPadding.bIsSet = false;
      FComboButtonStyle::FComboButtonStyle(&::Default.ComboButtonStyle);
      ::Default.bHasDownArrow = false;
      ::Default.ComboButtonContentPadding.bIsSet = false;
      ::Default.HorizontalContentAlignment.Value = '\x02';
      FTextBlockStyle::FTextBlockStyle(&::Default.TextBlockStyle);
      ::Default.IconBrush.bIsSet = false;
      ::Default.ActionButtonType.ComparisonIndex.Value = 0;
      ::Default.ActionButtonType.Number = 0;
      ::Default.IconButtonStyle.bIsSet = false;
      ::Default.IconColorAndOpacity.bIsSet = false;
      ::Default.IconNormalPadding.bIsSet = false;
      ::Default.IconPressedPadding.bIsSet = false;
      atexit(`FActionButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetIconButtonStyle @ 142dacaf0

FButtonStyle * __thiscall FActionButtonStyle::GetIconButtonStyle(FActionButtonStyle *this)

{
  longlong lVar1;
  
  lVar1 = 0xd30;
  if ((this->IconButtonStyle).bIsSet == false) {
    lVar1 = 0x10;
  }
  return (FButtonStyle *)((longlong)&this->_padding_ + lVar1);
}

// GetResources @ 142db0580

void __thiscall
FActionButtonStyle::GetResources
          (FActionButtonStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TOptional<FSlateBrush> *local_18 [2];
  
  if ((this->IconBrush).bIsSet != false) {
    local_18[0] = &this->IconBrush;
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
    *(TOptional<FSlateBrush> **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  (**(code **)(*(longlong *)&this->ButtonStyle + 8))(&this->ButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->ComboButtonStyle + 8))(&this->ComboButtonStyle,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142db0670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TextBlockStyle + 8))(&this->TextBlockStyle,param_1);
  return;
}

// GetTypeName @ 142db22e0

FName __thiscall FActionButtonStyle::GetTypeName(FActionButtonStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetActionButtonType @ 142dd7e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FActionButtonStyle * __thiscall
FActionButtonStyle::SetActionButtonType(FActionButtonStyle *this,EActionButtonType param_1)

{
  int iVar1;
  longlong lVar2;
  FName *pFVar3;
  undefined1 auStack_e8 [32];
  EActionButtonType local_c8 [8];
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  initializer_list<TPairInitializer<EActionButtonType_const_&,FName_const_&>_> local_88;
  TPairInitializer<EActionButtonType_const_&,FName_const_&> local_78;
  EActionButtonType *local_68;
  FName *local_60;
  EActionButtonType *local_58;
  FName *local_50;
  EActionButtonType *local_48;
  FName *local_40;
  EActionButtonType *local_38;
  FName *local_30;
  EActionButtonType *local_28;
  FName *local_20;
  TPairInitializer<EActionButtonType_const_&,FName_const_&> local_18;
  
  local_18.Key = (EActionButtonType *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    local_c8[0] = Default;
    ::FName::FName(&local_c0,L"Default");
    local_78.Key = local_c8;
    local_c8[1] = 1;
    local_78.Value = &local_c0;
    ::FName::FName(&local_b8,L"Simple");
    local_68 = local_c8 + 1;
    local_c8[2] = 2;
    local_60 = &local_b8;
    ::FName::FName(&local_b0,L"Primary");
    local_58 = local_c8 + 2;
    local_c8[3] = 3;
    local_50 = &local_b0;
    ::FName::FName(&local_a8,L"Positive");
    local_48 = local_c8 + 3;
    local_c8[4] = 4;
    local_40 = &local_a8;
    ::FName::FName(&local_a0,L"Warning");
    local_38 = local_c8 + 4;
    local_c8[5] = 5;
    local_30 = &local_a0;
    ::FName::FName(&local_98,L"Error");
    local_28 = local_c8 + 5;
    local_20 = &local_98;
    local_88._First = &local_78;
    local_88._Last = &local_18;
    TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
    ::
    TMap<enum_EActionButtonType,FName_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonType,FName_const_,0>_>
              (&`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
                Lookup,&local_88);
    atexit(`UE::ToolWidgets::Private::LexToName'::__l2::_dynamic_atexit_destructor_for__Lookup__);
    _Init_thread_footer(&`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::Lookup.
      _8_4_ != `class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
               Lookup._52_4_) {
    lVar2 = 0x155061bd8;
    if (`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::Lookup.
        _64_8_ != 0) {
      lVar2 = `class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
              Lookup._64_8_;
    }
    iVar1 = *(int *)(lVar2 + ((ulonglong)
                              (`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'
                               ::__l2::Lookup._72_4_ - 1) & (ulonglong)param_1) * 4);
    while (iVar1 != -1) {
      lVar2 = `class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
              Lookup._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EActionButtonType *)
           (`class_FName___cdecl_UE::ToolWidgets::Private::LexToName(EActionButtonType)'::__l2::
            Lookup._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar3 = (FName *)(lVar2 + 4);
        if (lVar2 == 0) {
          pFVar3 = (FName *)0x0;
        }
        if (pFVar3 != (FName *)0x0) {
          this->ActionButtonType = *pFVar3;
          return this;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0xc);
    }
  }
  ::FName::FName(&local_90,L"Invalid");
  this->ActionButtonType = local_90;
  return this;
}

// SetButtonContentPadding @ 142dd8240

FActionButtonStyle * __thiscall
FActionButtonStyle::SetButtonContentPadding(FActionButtonStyle *this,FMargin *param_1)

{
  TOptional<FMargin> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pTVar1 = &this->ButtonContentPadding;
  if ((TOptional<FMargin> *)param_1 != pTVar1) {
    fVar2 = param_1->Top;
    fVar3 = param_1->Right;
    fVar4 = param_1->Bottom;
    (pTVar1->TypedValue).Left = param_1->Left;
    (pTVar1->TypedValue).Top = fVar2;
    (this->ButtonContentPadding).TypedValue.Right = fVar3;
    (this->ButtonContentPadding).TypedValue.Bottom = fVar4;
    (this->ButtonContentPadding).bIsSet = true;
  }
  return this;
}

// SetButtonStyle @ 142dd8260

FActionButtonStyle * __thiscall
FActionButtonStyle::SetButtonStyle(FActionButtonStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->ButtonStyle,param_1);
  return this;
}

// SetComboButtonContentPadding @ 142dd8350

FActionButtonStyle * __thiscall
FActionButtonStyle::SetComboButtonContentPadding(FActionButtonStyle *this,FMargin *param_1)

{
  TOptional<FMargin> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pTVar1 = &this->ComboButtonContentPadding;
  if ((TOptional<FMargin> *)param_1 != pTVar1) {
    fVar2 = param_1->Top;
    fVar3 = param_1->Right;
    fVar4 = param_1->Bottom;
    (pTVar1->TypedValue).Left = param_1->Left;
    (pTVar1->TypedValue).Top = fVar2;
    (this->ComboButtonContentPadding).TypedValue.Right = fVar3;
    (this->ComboButtonContentPadding).TypedValue.Bottom = fVar4;
    (this->ComboButtonContentPadding).bIsSet = true;
  }
  return this;
}

// SetComboButtonStyle @ 142dd8370

FActionButtonStyle * __thiscall
FActionButtonStyle::SetComboButtonStyle(FActionButtonStyle *this,FComboButtonStyle *param_1)

{
  FComboButtonStyle::operator=(&this->ComboButtonStyle,param_1);
  return this;
}

// SetHasDownArrow @ 142dd8f80

FActionButtonStyle * __thiscall
FActionButtonStyle::SetHasDownArrow(FActionButtonStyle *this,bool *param_1)

{
  this->bHasDownArrow = *param_1;
  return this;
}

// SetHorizontalContentAlignment @ 142dd8fb0

FActionButtonStyle * __thiscall
FActionButtonStyle::SetHorizontalContentAlignment
          (FActionButtonStyle *this,EHorizontalAlignment *param_1)

{
  (this->HorizontalContentAlignment).Value = (char)*param_1;
  return this;
}

// SetIconBrush @ 142dd8fd0

FActionButtonStyle * __thiscall
FActionButtonStyle::SetIconBrush(FActionButtonStyle *this,FSlateBrush *param_1)

{
  TOptional<FSlateBrush> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  this_00 = &this->IconBrush;
  if ((TOptional<FSlateBrush> *)param_1 != this_00) {
    if ((this->IconBrush).bIsSet != false) {
      pTVar1 = (this->IconBrush).TypedValue.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController;
      (this_00->TypedValue)._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    FSlateBrush::FSlateBrush(&this_00->TypedValue,param_1);
    (this->IconBrush).bIsSet = true;
  }
  return this;
}

// SetIconButtonStyle @ 142dd9040

FActionButtonStyle * __thiscall
FActionButtonStyle::SetIconButtonStyle(FActionButtonStyle *this,FButtonStyle *param_1)

{
  TOptional<FButtonStyle> *this_00;
  
  this_00 = &this->IconButtonStyle;
  if ((TOptional<FButtonStyle> *)param_1 != this_00) {
    if ((this->IconButtonStyle).bIsSet != false) {
      FButtonStyle::~FButtonStyle(&this_00->TypedValue);
    }
    FButtonStyle::FButtonStyle(&this_00->TypedValue,param_1);
    (this->IconButtonStyle).bIsSet = true;
  }
  return this;
}

// SetIconColorAndOpacity @ 142dd90a0

FActionButtonStyle * __thiscall
FActionButtonStyle::SetIconColorAndOpacity(FActionButtonStyle *this,FSlateColor *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  if ((TOptional<FSlateColor> *)param_1 != &this->IconColorAndOpacity) {
    uVar1 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
    *(undefined8 *)&(this->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
    *(undefined8 *)((longlong)&(this->IconColorAndOpacity).TypedValue.SpecifiedColor.field0_0x0 + 8)
         = uVar1;
    EVar2 = param_1->ColorTableId;
    uVar3 = *(undefined2 *)&param_1->field_0x12;
    (this->IconColorAndOpacity).TypedValue.ColorUseRule = param_1->ColorUseRule;
    (this->IconColorAndOpacity).TypedValue.ColorTableId = EVar2;
    *(undefined2 *)&(this->IconColorAndOpacity).TypedValue.field_0x12 = uVar3;
    (this->IconColorAndOpacity).bIsSet = true;
  }
  return this;
}

// SetIconNormalPadding @ 142dd90d0

FActionButtonStyle * __thiscall
FActionButtonStyle::SetIconNormalPadding(FActionButtonStyle *this,FMargin *param_1)

{
  TOptional<FMargin> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pTVar1 = &this->IconNormalPadding;
  if ((TOptional<FMargin> *)param_1 != pTVar1) {
    fVar2 = param_1->Top;
    fVar3 = param_1->Right;
    fVar4 = param_1->Bottom;
    (pTVar1->TypedValue).Left = param_1->Left;
    (pTVar1->TypedValue).Top = fVar2;
    (this->IconNormalPadding).TypedValue.Right = fVar3;
    (this->IconNormalPadding).TypedValue.Bottom = fVar4;
    (this->IconNormalPadding).bIsSet = true;
  }
  return this;
}

// SetIconPressedPadding @ 142dd90f0

FActionButtonStyle * __thiscall
FActionButtonStyle::SetIconPressedPadding(FActionButtonStyle *this,FMargin *param_1)

{
  TOptional<FMargin> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pTVar1 = &this->IconPressedPadding;
  if ((TOptional<FMargin> *)param_1 != pTVar1) {
    fVar2 = param_1->Top;
    fVar3 = param_1->Right;
    fVar4 = param_1->Bottom;
    (pTVar1->TypedValue).Left = param_1->Left;
    (pTVar1->TypedValue).Top = fVar2;
    (this->IconPressedPadding).TypedValue.Right = fVar3;
    (this->IconPressedPadding).TypedValue.Bottom = fVar4;
    (this->IconPressedPadding).bIsSet = true;
  }
  return this;
}

// SetTextBlockStyle @ 142dd9d20

FActionButtonStyle * __thiscall
FActionButtonStyle::SetTextBlockStyle(FActionButtonStyle *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&this->TextBlockStyle,param_1);
  return this;
}

// UnlinkColors @ 142ddbb90

void __thiscall FActionButtonStyle::UnlinkColors(FActionButtonStyle *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  
  FButtonStyle::UnlinkColors(&this->ButtonStyle);
  FButtonStyle::UnlinkColors(&(this->ComboButtonStyle).ButtonStyle);
  if ((this->ComboButtonStyle).DownArrowImage.TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->ComboButtonStyle).DownArrowImage.TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->ComboButtonStyle).DownArrowImage.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ComboButtonStyle).DownArrowImage.TintColor.SpecifiedColor.field0_0x0 =
         uVar1;
    *(undefined8 *)
     ((longlong)&(this->ComboButtonStyle).DownArrowImage.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  if ((this->ComboButtonStyle).MenuBorderBrush.TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->ComboButtonStyle).MenuBorderBrush.TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->ComboButtonStyle).MenuBorderBrush.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ComboButtonStyle).MenuBorderBrush.TintColor.SpecifiedColor.field0_0x0 =
         uVar1;
    *(undefined8 *)
     ((longlong)&(this->ComboButtonStyle).MenuBorderBrush.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  if ((this->TextBlockStyle).ColorAndOpacity.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->TextBlockStyle).ColorAndOpacity);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->TextBlockStyle).ColorAndOpacity.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextBlockStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->TextBlockStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 + 8)
         = uVar2;
  }
  if ((this->TextBlockStyle).SelectedBackgroundColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->TextBlockStyle).SelectedBackgroundColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->TextBlockStyle).SelectedBackgroundColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextBlockStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 = uVar1
    ;
    *(undefined8 *)
     ((longlong)&(this->TextBlockStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  if ((this->TextBlockStyle).HighlightShape.TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->TextBlockStyle).HighlightShape.TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->TextBlockStyle).HighlightShape.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextBlockStyle).HighlightShape.TintColor.SpecifiedColor.field0_0x0 =
         uVar1;
    *(undefined8 *)
     ((longlong)&(this->TextBlockStyle).HighlightShape.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  if ((this->TextBlockStyle).StrikeBrush.TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->TextBlockStyle).StrikeBrush.TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->TextBlockStyle).StrikeBrush.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextBlockStyle).StrikeBrush.TintColor.SpecifiedColor.field0_0x0 = uVar1;
    *(undefined8 *)
     ((longlong)&(this->TextBlockStyle).StrikeBrush.TintColor.SpecifiedColor.field0_0x0 + 8) = uVar2
    ;
  }
  if ((this->TextBlockStyle).UnderlineBrush.TintColor.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&(this->TextBlockStyle).UnderlineBrush.TintColor);
    uVar1 = *(undefined8 *)&pFVar3->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    (this->TextBlockStyle).UnderlineBrush.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextBlockStyle).UnderlineBrush.TintColor.SpecifiedColor.field0_0x0 =
         uVar1;
    *(undefined8 *)
     ((longlong)&(this->TextBlockStyle).UnderlineBrush.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
  }
  return;
}


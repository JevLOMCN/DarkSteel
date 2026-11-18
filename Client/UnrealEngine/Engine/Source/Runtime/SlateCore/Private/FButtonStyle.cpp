// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// StaticStruct @ 14252e350

UScriptStruct * __cdecl FButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FButtonStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyle,(UObject *)pUVar1,L"ButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FButtonStyle.OuterSingleton;
}

// FButtonStyle @ 142541de0

FButtonStyle * __thiscall FButtonStyle::FButtonStyle(FButtonStyle *this,FButtonStyle *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(undefined ***)this = &___7FButtonStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Normal,&param_1->Normal);
  FSlateBrush::FSlateBrush(&this->Hovered,&param_1->Hovered);
  FSlateBrush::FSlateBrush(&this->Pressed,&param_1->Pressed);
  FSlateBrush::FSlateBrush(&this->Disabled,&param_1->Disabled);
  uVar2 = *(undefined8 *)((longlong)&(param_1->NormalForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->NormalForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->NormalForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->NormalForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->NormalForeground).field_0x12;
  (this->NormalForeground).ColorUseRule = (param_1->NormalForeground).ColorUseRule;
  (this->NormalForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->NormalForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->HoveredForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->HoveredForeground).field_0x12;
  (this->HoveredForeground).ColorUseRule = (param_1->HoveredForeground).ColorUseRule;
  (this->HoveredForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->HoveredForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->PressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->PressedForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->PressedForeground).field_0x12;
  (this->PressedForeground).ColorUseRule = (param_1->PressedForeground).ColorUseRule;
  (this->PressedForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->PressedForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->DisabledForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->DisabledForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->DisabledForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->DisabledForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->DisabledForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->DisabledForeground).field_0x12;
  (this->DisabledForeground).ColorUseRule = (param_1->DisabledForeground).ColorUseRule;
  (this->DisabledForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->DisabledForeground).field_0x12 = uVar4;
  fVar5 = (param_1->NormalPadding).Top;
  fVar6 = (param_1->NormalPadding).Right;
  fVar7 = (param_1->NormalPadding).Bottom;
  (this->NormalPadding).Left = (param_1->NormalPadding).Left;
  (this->NormalPadding).Top = fVar5;
  (this->NormalPadding).Right = fVar6;
  (this->NormalPadding).Bottom = fVar7;
  fVar5 = (param_1->PressedPadding).Top;
  fVar6 = (param_1->PressedPadding).Right;
  fVar7 = (param_1->PressedPadding).Bottom;
  (this->PressedPadding).Left = (param_1->PressedPadding).Left;
  (this->PressedPadding).Top = fVar5;
  (this->PressedPadding).Right = fVar6;
  (this->PressedPadding).Bottom = fVar7;
  pUVar1 = (param_1->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->PressedSlateSound).LegacyResourceName_DEPRECATED;
  (this->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  pUVar1 = (param_1->ClickedSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->ClickedSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ClickedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->ClickedSlateSound).LegacyResourceName_DEPRECATED;
  (this->ClickedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->ClickedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  pUVar1 = (param_1->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr;
  (this->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->HoveredSlateSound).LegacyResourceName_DEPRECATED;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  return this;
}

// FButtonStyle @ 142541f90

FButtonStyle * __thiscall FButtonStyle::FButtonStyle(FButtonStyle *this)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FButtonStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Normal);
  FSlateBrush::FSlateBrush(&this->Hovered);
  FSlateBrush::FSlateBrush(&this->Pressed);
  FSlateBrush::FSlateBrush(&this->Disabled);
  *(undefined8 *)&(this->NormalForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->NormalPadding).Left = 0.0;
  (this->NormalPadding).Top = 0.0;
  (this->NormalPadding).Right = 0.0;
  (this->NormalPadding).Bottom = 0.0;
  (this->PressedPadding).Left = 0.0;
  (this->PressedPadding).Top = 0.0;
  (this->PressedPadding).Right = 0.0;
  (this->PressedPadding).Bottom = 0.0;
  (this->PressedSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->PressedSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->PressedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ClickedSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->ClickedSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->ClickedSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->ClickedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED.ComparisonIndex = 0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED.Number = 0;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NormalForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->NormalForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->NormalForeground).ColorUseRule = UseColor_Foreground;
  (this->NormalForeground).ColorTableId = Black;
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->HoveredForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->HoveredForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->HoveredForeground).ColorUseRule = UseColor_Foreground;
  (this->HoveredForeground).ColorTableId = Black;
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->PressedForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->PressedForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->PressedForeground).ColorUseRule = UseColor_Foreground;
  (this->PressedForeground).ColorTableId = Black;
  *(undefined8 *)&(this->DisabledForeground).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->DisabledForeground).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->DisabledForeground).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->DisabledForeground).ColorUseRule = UseColor_Foreground;
  (this->DisabledForeground).ColorTableId = Black;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&this->Disabled,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return this;
}

// ~FButtonStyle @ 14254aaf0

void __thiscall FButtonStyle::~FButtonStyle(FButtonStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FButtonStyle__6B_;
  (this->Disabled)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Disabled).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->Pressed).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Pressed)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Hovered).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Hovered)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Normal).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Normal)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254d4f0

FButtonStyle * __thiscall FButtonStyle::operator=(FButtonStyle *this,FButtonStyle *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FSlateBrush::operator=(&this->Normal,&param_1->Normal);
  FSlateBrush::operator=(&this->Hovered,&param_1->Hovered);
  FSlateBrush::operator=(&this->Pressed,&param_1->Pressed);
  FSlateBrush::operator=(&this->Disabled,&param_1->Disabled);
  uVar2 = *(undefined8 *)((longlong)&(param_1->NormalForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->NormalForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->NormalForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->NormalForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->NormalForeground).field_0x12;
  (this->NormalForeground).ColorUseRule = (param_1->NormalForeground).ColorUseRule;
  (this->NormalForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->NormalForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HoveredForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->HoveredForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->HoveredForeground).field_0x12;
  (this->HoveredForeground).ColorUseRule = (param_1->HoveredForeground).ColorUseRule;
  (this->HoveredForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->HoveredForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->PressedForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PressedForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PressedForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->PressedForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->PressedForeground).field_0x12;
  (this->PressedForeground).ColorUseRule = (param_1->PressedForeground).ColorUseRule;
  (this->PressedForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->PressedForeground).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->DisabledForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->DisabledForeground).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->DisabledForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->DisabledForeground).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->DisabledForeground).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->DisabledForeground).field_0x12;
  (this->DisabledForeground).ColorUseRule = (param_1->DisabledForeground).ColorUseRule;
  (this->DisabledForeground).ColorTableId = EVar3;
  *(undefined2 *)&(this->DisabledForeground).field_0x12 = uVar4;
  fVar5 = (param_1->NormalPadding).Top;
  fVar6 = (param_1->NormalPadding).Right;
  fVar7 = (param_1->NormalPadding).Bottom;
  (this->NormalPadding).Left = (param_1->NormalPadding).Left;
  (this->NormalPadding).Top = fVar5;
  (this->NormalPadding).Right = fVar6;
  (this->NormalPadding).Bottom = fVar7;
  fVar5 = (param_1->PressedPadding).Top;
  fVar6 = (param_1->PressedPadding).Right;
  fVar7 = (param_1->PressedPadding).Bottom;
  (this->PressedPadding).Left = (param_1->PressedPadding).Left;
  (this->PressedPadding).Top = fVar5;
  (this->PressedPadding).Right = fVar6;
  (this->PressedPadding).Bottom = fVar7;
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
     (pUVar1 = (param_1->ClickedSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ClickedSlateSound).ResourceObject.field0_0x0 =
       (param_1->ClickedSlateSound).ResourceObject.field0_0x0;
  (this->ClickedSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->ClickedSlateSound).LegacyResourceName_DEPRECATED;
  (this->ClickedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->ClickedSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->HoveredSlateSound).ResourceObject.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->HoveredSlateSound).ResourceObject.field0_0x0 =
       (param_1->HoveredSlateSound).ResourceObject.field0_0x0;
  (this->HoveredSlateSound).LegacyResourceName_DEPRECATED =
       (param_1->HoveredSlateSound).LegacyResourceName_DEPRECATED;
  (this->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr =
       (param_1->HoveredSlateSound).LegacyResourceObject_DEPRECATED.WeakPtr;
  return this;
}

// GetDefault @ 14257f3d0

FButtonStyle * __cdecl FButtonStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425831e0

void __thiscall
FButtonStyle::GetResources
          (FButtonStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_28 = &this->Normal;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28;
  local_20 = &this->Hovered;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_20;
  local_18 = &this->Pressed;
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
  local_10 = &this->Disabled;
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// GetTypeName @ 142589ad0

FName __thiscall FButtonStyle::GetTypeName(FButtonStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetHovered @ 142591380

FButtonStyle * __thiscall FButtonStyle::SetHovered(FButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->Hovered,param_1);
  return this;
}

// SetNormal @ 142591a10

FButtonStyle * __thiscall FButtonStyle::SetNormal(FButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->Normal,param_1);
  return this;
}

// SetPressed @ 142591ae0

FButtonStyle * __thiscall FButtonStyle::SetPressed(FButtonStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->Pressed,param_1);
  return this;
}

// UnlinkColors @ 1425a9bb0

void __thiscall FButtonStyle::UnlinkColors(FButtonStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->Normal).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Normal).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->Normal).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Normal).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->Normal).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->Hovered).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Hovered).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->Hovered).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Hovered).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->Hovered).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->Pressed).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Pressed).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->Pressed).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Pressed).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->Pressed).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->Disabled).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Disabled).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->Disabled).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Disabled).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->Disabled).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  return;
}


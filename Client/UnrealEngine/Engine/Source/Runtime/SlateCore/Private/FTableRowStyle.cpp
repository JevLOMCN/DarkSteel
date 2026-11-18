// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// StaticStruct @ 14252efd0

UScriptStruct * __cdecl FTableRowStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTableRowStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FTableRowStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTableRowStyle,(UObject *)pUVar1,L"TableRowStyle"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FTableRowStyle.OuterSingleton;
}

// FTableRowStyle @ 1425481b0

FTableRowStyle * __thiscall
FTableRowStyle::FTableRowStyle(FTableRowStyle *this,FTableRowStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  this->_padding_ = (longlong)&___7FTableRowStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SelectorFocusedBrush,&param_1->SelectorFocusedBrush);
  FSlateBrush::FSlateBrush(&this->ActiveHoveredBrush,&param_1->ActiveHoveredBrush);
  FSlateBrush::FSlateBrush(&this->ActiveBrush,&param_1->ActiveBrush);
  FSlateBrush::FSlateBrush(&this->InactiveHoveredBrush,&param_1->InactiveHoveredBrush);
  FSlateBrush::FSlateBrush(&this->InactiveBrush,&param_1->InactiveBrush);
  this->bUseParentRowBrush = param_1->bUseParentRowBrush;
  FSlateBrush::FSlateBrush(&this->ParentRowBackgroundBrush,&param_1->ParentRowBackgroundBrush);
  FSlateBrush::FSlateBrush
            (&this->ParentRowBackgroundHoveredBrush,&param_1->ParentRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush
            (&this->EvenRowBackgroundHoveredBrush,&param_1->EvenRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush(&this->EvenRowBackgroundBrush,&param_1->EvenRowBackgroundBrush);
  FSlateBrush::FSlateBrush
            (&this->OddRowBackgroundHoveredBrush,&param_1->OddRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush(&this->OddRowBackgroundBrush,&param_1->OddRowBackgroundBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->TextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TextColor).field_0x12;
  (this->TextColor).ColorUseRule = (param_1->TextColor).ColorUseRule;
  (this->TextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TextColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SelectedTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SelectedTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SelectedTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SelectedTextColor).field_0x12;
  (this->SelectedTextColor).ColorUseRule = (param_1->SelectedTextColor).ColorUseRule;
  (this->SelectedTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SelectedTextColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->DropIndicator_Above,&param_1->DropIndicator_Above);
  FSlateBrush::FSlateBrush(&this->DropIndicator_Onto,&param_1->DropIndicator_Onto);
  FSlateBrush::FSlateBrush(&this->DropIndicator_Below,&param_1->DropIndicator_Below);
  FSlateBrush::FSlateBrush(&this->ActiveHighlightedBrush,&param_1->ActiveHighlightedBrush);
  FSlateBrush::FSlateBrush(&this->InactiveHighlightedBrush,&param_1->InactiveHighlightedBrush);
  return this;
}

// FTableRowStyle @ 142548350

FTableRowStyle * __thiscall FTableRowStyle::FTableRowStyle(FTableRowStyle *this)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FTableRowStyle__6B_;
  FSlateBrush::FSlateBrush(&this->SelectorFocusedBrush);
  FSlateBrush::FSlateBrush(&this->ActiveHoveredBrush);
  FSlateBrush::FSlateBrush(&this->ActiveBrush);
  FSlateBrush::FSlateBrush(&this->InactiveHoveredBrush);
  FSlateBrush::FSlateBrush(&this->InactiveBrush);
  this->bUseParentRowBrush = false;
  FSlateBrush::FSlateBrush(&this->ParentRowBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ParentRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush(&this->EvenRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush(&this->EvenRowBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->OddRowBackgroundHoveredBrush);
  FSlateBrush::FSlateBrush(&this->OddRowBackgroundBrush);
  *(undefined8 *)&(this->TextColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->TextColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->TextColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->TextColor).ColorUseRule = UseColor_Foreground;
  FVar1 = FLinearColor::White;
  (this->TextColor).ColorTableId = Black;
  (this->SelectedTextColor).ColorUseRule = UseColor_Specified;
  (this->SelectedTextColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush(&this->DropIndicator_Above);
  FSlateBrush::FSlateBrush(&this->DropIndicator_Onto);
  FSlateBrush::FSlateBrush(&this->DropIndicator_Below);
  FSlateBrush::FSlateBrush(&this->ActiveHighlightedBrush);
  FSlateBrush::FSlateBrush(&this->InactiveHighlightedBrush);
  return this;
}

// ~FTableRowStyle @ 14254c320

void __thiscall FTableRowStyle::~FTableRowStyle(FTableRowStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FTableRowStyle__6B_;
  (this->InactiveHighlightedBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InactiveHighlightedBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->ActiveHighlightedBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ActiveHighlightedBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DropIndicator_Below).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DropIndicator_Below)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DropIndicator_Onto).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DropIndicator_Onto)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DropIndicator_Above).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DropIndicator_Above)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->OddRowBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->OddRowBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->OddRowBackgroundHoveredBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->OddRowBackgroundHoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->EvenRowBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->EvenRowBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->EvenRowBackgroundHoveredBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->EvenRowBackgroundHoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ParentRowBackgroundHoveredBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ParentRowBackgroundHoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ParentRowBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ParentRowBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->InactiveBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->InactiveBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->InactiveHoveredBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->InactiveHoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ActiveBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ActiveBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ActiveHoveredBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ActiveHoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SelectorFocusedBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->SelectorFocusedBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254e670

FTableRowStyle * __thiscall FTableRowStyle::operator=(FTableRowStyle *this,FTableRowStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FSlateBrush::operator=(&this->SelectorFocusedBrush,&param_1->SelectorFocusedBrush);
  FSlateBrush::operator=(&this->ActiveHoveredBrush,&param_1->ActiveHoveredBrush);
  FSlateBrush::operator=(&this->ActiveBrush,&param_1->ActiveBrush);
  FSlateBrush::operator=(&this->InactiveHoveredBrush,&param_1->InactiveHoveredBrush);
  FSlateBrush::operator=(&this->InactiveBrush,&param_1->InactiveBrush);
  this->bUseParentRowBrush = param_1->bUseParentRowBrush;
  FSlateBrush::operator=(&this->ParentRowBackgroundBrush,&param_1->ParentRowBackgroundBrush);
  FSlateBrush::operator=
            (&this->ParentRowBackgroundHoveredBrush,&param_1->ParentRowBackgroundHoveredBrush);
  FSlateBrush::operator=
            (&this->EvenRowBackgroundHoveredBrush,&param_1->EvenRowBackgroundHoveredBrush);
  FSlateBrush::operator=(&this->EvenRowBackgroundBrush,&param_1->EvenRowBackgroundBrush);
  FSlateBrush::operator=(&this->OddRowBackgroundHoveredBrush,&param_1->OddRowBackgroundHoveredBrush)
  ;
  FSlateBrush::operator=(&this->OddRowBackgroundBrush,&param_1->OddRowBackgroundBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->TextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TextColor).field_0x12;
  (this->TextColor).ColorUseRule = (param_1->TextColor).ColorUseRule;
  (this->TextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TextColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SelectedTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SelectedTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SelectedTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SelectedTextColor).field_0x12;
  (this->SelectedTextColor).ColorUseRule = (param_1->SelectedTextColor).ColorUseRule;
  (this->SelectedTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SelectedTextColor).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->DropIndicator_Above,&param_1->DropIndicator_Above);
  FSlateBrush::operator=(&this->DropIndicator_Onto,&param_1->DropIndicator_Onto);
  FSlateBrush::operator=(&this->DropIndicator_Below,&param_1->DropIndicator_Below);
  FSlateBrush::operator=(&this->ActiveHighlightedBrush,&param_1->ActiveHighlightedBrush);
  FSlateBrush::operator=(&this->InactiveHighlightedBrush,&param_1->InactiveHighlightedBrush);
  return this;
}

// GetDefault @ 142580340

FTableRowStyle * __cdecl FTableRowStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTableRowStyle(&::Default);
      atexit(`FTableRowStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142586ed0

void __thiscall
FTableRowStyle::GetResources
          (FTableRowStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_78;
  FSlateBrush *local_70;
  FSlateBrush *local_68;
  FSlateBrush *local_60;
  FSlateBrush *local_58;
  FSlateBrush *local_50;
  FSlateBrush *local_48;
  FSlateBrush *local_40;
  FSlateBrush *local_38;
  FSlateBrush *local_30;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_78 = &this->SelectorFocusedBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_78;
  local_70 = &this->ActiveHoveredBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_70) &&
     ((FScriptContainerElement *)&local_70 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_70;
  local_68 = &this->ActiveBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_68;
  local_60 = &this->InactiveHoveredBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_60) &&
     ((FScriptContainerElement *)&local_60 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_60;
  local_58 = &this->InactiveBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_58;
  local_50 = &this->ParentRowBackgroundHoveredBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_50) &&
     ((FScriptContainerElement *)&local_50 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_50;
  local_48 = &this->ParentRowBackgroundBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_48;
  local_40 = &this->EvenRowBackgroundHoveredBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_40;
  local_38 = &this->EvenRowBackgroundBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38;
  local_30 = &this->OddRowBackgroundHoveredBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_30;
  local_28 = &this->OddRowBackgroundBrush;
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
  local_20 = &this->DropIndicator_Above;
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
  local_18 = &this->DropIndicator_Onto;
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
  local_10 = &this->DropIndicator_Below;
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

// GetTypeName @ 142589d90

FName __thiscall FTableRowStyle::GetTypeName(FTableRowStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// UnlinkColors @ 1425aabf0

void __thiscall FTableRowStyle::UnlinkColors(FTableRowStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->SelectorFocusedBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->SelectorFocusedBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->SelectorFocusedBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->SelectorFocusedBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->SelectorFocusedBrush).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->ActiveHoveredBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ActiveHoveredBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ActiveHoveredBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ActiveHoveredBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ActiveHoveredBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->ActiveBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ActiveBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ActiveBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ActiveBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ActiveBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->InactiveHoveredBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->InactiveHoveredBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->InactiveHoveredBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->InactiveHoveredBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->InactiveHoveredBrush).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->InactiveBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->InactiveBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->InactiveBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->InactiveBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->InactiveBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->ParentRowBackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ParentRowBackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ParentRowBackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ParentRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->ParentRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ParentRowBackgroundHoveredBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ParentRowBackgroundHoveredBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ParentRowBackgroundHoveredBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ParentRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 =
         uVar2;
    *(undefined8 *)
     ((longlong)&(this->ParentRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->EvenRowBackgroundHoveredBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->EvenRowBackgroundHoveredBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->EvenRowBackgroundHoveredBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->EvenRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 =
         uVar2;
    *(undefined8 *)
     ((longlong)&(this->EvenRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->EvenRowBackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->EvenRowBackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->EvenRowBackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->EvenRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->EvenRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->OddRowBackgroundHoveredBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->OddRowBackgroundHoveredBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->OddRowBackgroundHoveredBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->OddRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2
    ;
    *(undefined8 *)
     ((longlong)&(this->OddRowBackgroundHoveredBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->OddRowBackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->OddRowBackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->OddRowBackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->OddRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->OddRowBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->TextColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->TextColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->TextColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->TextColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->TextColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->SelectedTextColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->SelectedTextColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->SelectedTextColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->SelectedTextColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->DropIndicator_Above).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->DropIndicator_Above).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->DropIndicator_Above).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->DropIndicator_Above).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->DropIndicator_Above).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->DropIndicator_Onto).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->DropIndicator_Onto).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->DropIndicator_Onto).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->DropIndicator_Onto).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->DropIndicator_Onto).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->DropIndicator_Below).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->DropIndicator_Below).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->DropIndicator_Below).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->DropIndicator_Below).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->DropIndicator_Below).TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar3;
  }
  if ((this->ActiveHighlightedBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ActiveHighlightedBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ActiveHighlightedBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ActiveHighlightedBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->ActiveHighlightedBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->InactiveHighlightedBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->InactiveHighlightedBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->InactiveHighlightedBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->InactiveHighlightedBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->InactiveHighlightedBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  return;
}


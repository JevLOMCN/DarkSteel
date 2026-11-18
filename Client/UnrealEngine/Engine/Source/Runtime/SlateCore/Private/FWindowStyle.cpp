// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 21

// StaticStruct @ 14252f620

UScriptStruct * __cdecl FWindowStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWindowStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FWindowStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWindowStyle,(UObject *)pUVar1,L"WindowStyle");
  }
  return Z_Registration_Info_UScriptStruct_FWindowStyle.OuterSingleton;
}

// FWindowStyle @ 142549160

FWindowStyle * __thiscall FWindowStyle::FWindowStyle(FWindowStyle *this,FWindowStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined ***)this = &___7FWindowStyle__6B_;
  FButtonStyle::FButtonStyle(&this->MinimizeButtonStyle,&param_1->MinimizeButtonStyle);
  FButtonStyle::FButtonStyle(&this->MaximizeButtonStyle,&param_1->MaximizeButtonStyle);
  FButtonStyle::FButtonStyle(&this->RestoreButtonStyle,&param_1->RestoreButtonStyle);
  FButtonStyle::FButtonStyle(&this->EnterFullscreenButtonStyle,&param_1->EnterFullscreenButtonStyle)
  ;
  FButtonStyle::FButtonStyle(&this->ExitFullscreenButtonStyle,&param_1->ExitFullscreenButtonStyle);
  FButtonStyle::FButtonStyle(&this->CloseButtonStyle,&param_1->CloseButtonStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TitleTextStyle,&param_1->TitleTextStyle);
  FSlateBrush::FSlateBrush(&this->ActiveTitleBrush,&param_1->ActiveTitleBrush);
  FSlateBrush::FSlateBrush(&this->InactiveTitleBrush,&param_1->InactiveTitleBrush);
  FSlateBrush::FSlateBrush(&this->FlashTitleBrush,&param_1->FlashTitleBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->OutlineBrush,&param_1->OutlineBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->OutlineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->OutlineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->OutlineColor).field_0x12;
  (this->OutlineColor).ColorUseRule = (param_1->OutlineColor).ColorUseRule;
  (this->OutlineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->OutlineColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->BorderBrush,&param_1->BorderBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->BorderColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BorderColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BorderColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BorderColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->BorderColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->BorderColor).field_0x12;
  (this->BorderColor).ColorUseRule = (param_1->BorderColor).ColorUseRule;
  (this->BorderColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BorderColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&param_1->BackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ChildBackgroundBrush,&param_1->ChildBackgroundBrush);
  this->WindowCornerRadius = param_1->WindowCornerRadius;
  fVar4 = (param_1->BorderPadding).Top;
  fVar5 = (param_1->BorderPadding).Right;
  fVar6 = (param_1->BorderPadding).Bottom;
  (this->BorderPadding).Left = (param_1->BorderPadding).Left;
  (this->BorderPadding).Top = fVar4;
  (this->BorderPadding).Right = fVar5;
  (this->BorderPadding).Bottom = fVar6;
  return this;
}

// FWindowStyle @ 142549300

FWindowStyle * __thiscall FWindowStyle::FWindowStyle(FWindowStyle *this)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FWindowStyle__6B_;
  FButtonStyle::FButtonStyle(&this->MinimizeButtonStyle);
  FButtonStyle::FButtonStyle(&this->MaximizeButtonStyle);
  FButtonStyle::FButtonStyle(&this->RestoreButtonStyle);
  FButtonStyle::FButtonStyle(&this->EnterFullscreenButtonStyle);
  FButtonStyle::FButtonStyle(&this->ExitFullscreenButtonStyle);
  FButtonStyle::FButtonStyle(&this->CloseButtonStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TitleTextStyle);
  FSlateBrush::FSlateBrush(&this->ActiveTitleBrush);
  FSlateBrush::FSlateBrush(&this->InactiveTitleBrush);
  FSlateBrush::FSlateBrush(&this->FlashTitleBrush);
  FVar1 = FLinearColor::White;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush(&this->OutlineBrush);
  FVar1 = FLinearColor::White;
  (this->OutlineColor).ColorUseRule = UseColor_Specified;
  (this->OutlineColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush(&this->BorderBrush);
  FVar1 = FLinearColor::White;
  (this->BorderColor).ColorUseRule = UseColor_Specified;
  (this->BorderColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ChildBackgroundBrush);
  this->WindowCornerRadius = 0;
  (this->BorderPadding).Left = 5.0;
  (this->BorderPadding).Top = 5.0;
  (this->BorderPadding).Right = 5.0;
  (this->BorderPadding).Bottom = 5.0;
  return this;
}

// ~FWindowStyle @ 14254c790

void __thiscall FWindowStyle::~FWindowStyle(FWindowStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FWindowStyle__6B_;
  (this->ChildBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChildBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BorderBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BorderBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->OutlineBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->OutlineBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->FlashTitleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->FlashTitleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->InactiveTitleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->InactiveTitleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ActiveTitleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ActiveTitleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FTextBlockStyle::~FTextBlockStyle(&this->TitleTextStyle);
  FButtonStyle::~FButtonStyle(&this->CloseButtonStyle);
  FButtonStyle::~FButtonStyle(&this->ExitFullscreenButtonStyle);
  FButtonStyle::~FButtonStyle(&this->EnterFullscreenButtonStyle);
  FButtonStyle::~FButtonStyle(&this->RestoreButtonStyle);
  FButtonStyle::~FButtonStyle(&this->MaximizeButtonStyle);
  FButtonStyle::~FButtonStyle(&this->MinimizeButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 142580760

FWindowStyle * __cdecl FWindowStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FWindowStyle(&::Default);
      atexit(`FWindowStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425880b0

void __thiscall
FWindowStyle::GetResources
          (FWindowStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_48;
  FSlateBrush *local_40;
  FSlateBrush *local_38;
  FSlateBrush *local_30;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18 [2];
  
  (**(code **)(*(longlong *)&this->MinimizeButtonStyle + 8))(&this->MinimizeButtonStyle);
  (**(code **)(*(longlong *)&this->MaximizeButtonStyle + 8))(&this->MaximizeButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->RestoreButtonStyle + 8))(&this->RestoreButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->CloseButtonStyle + 8))(&this->CloseButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->TitleTextStyle + 8))(&this->TitleTextStyle,param_1);
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_48 = &this->ActiveTitleBrush;
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
  local_40 = &this->InactiveTitleBrush;
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
  local_38 = &this->FlashTitleBrush;
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
  local_30 = &this->BorderBrush;
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
  local_28 = &this->OutlineBrush;
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
  local_20 = &this->BackgroundBrush;
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
  local_18[0] = &this->ChildBackgroundBrush;
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetTypeName @ 142589e30

FName __thiscall FWindowStyle::GetTypeName(FWindowStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetActiveTitleBrush @ 142590710

FWindowStyle * __thiscall FWindowStyle::SetActiveTitleBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->ActiveTitleBrush,param_1);
  return this;
}

// SetBackgroundBrush @ 1425908d0

FWindowStyle * __thiscall FWindowStyle::SetBackgroundBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BackgroundBrush,param_1);
  return this;
}

// SetBorderBrush @ 1425909c0

FWindowStyle * __thiscall FWindowStyle::SetBorderBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BorderBrush,param_1);
  return this;
}

// SetChildBackgroundBrush @ 142590b30

FWindowStyle * __thiscall
FWindowStyle::SetChildBackgroundBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->ChildBackgroundBrush,param_1);
  return this;
}

// SetCloseButtonStyle @ 142590b60

FWindowStyle * __thiscall
FWindowStyle::SetCloseButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->CloseButtonStyle,param_1);
  return this;
}

// SetEnterFullscreenButtonStyle @ 142590bb0

FWindowStyle * __thiscall
FWindowStyle::SetEnterFullscreenButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->EnterFullscreenButtonStyle,param_1);
  return this;
}

// SetExitFullscreenButtonStyle @ 142590be0

FWindowStyle * __thiscall
FWindowStyle::SetExitFullscreenButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->ExitFullscreenButtonStyle,param_1);
  return this;
}

// SetFlashTitleBrush @ 142590c10

FWindowStyle * __thiscall FWindowStyle::SetFlashTitleBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->FlashTitleBrush,param_1);
  return this;
}

// SetInactiveTitleBrush @ 142591930

FWindowStyle * __thiscall
FWindowStyle::SetInactiveTitleBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->InactiveTitleBrush,param_1);
  return this;
}

// SetMaximizeButtonStyle @ 1425919b0

FWindowStyle * __thiscall
FWindowStyle::SetMaximizeButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->MaximizeButtonStyle,param_1);
  return this;
}

// SetMinimizeButtonStyle @ 1425919e0

FWindowStyle * __thiscall
FWindowStyle::SetMinimizeButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->MinimizeButtonStyle,param_1);
  return this;
}

// SetOutlineBrush @ 142591a40

FWindowStyle * __thiscall FWindowStyle::SetOutlineBrush(FWindowStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->OutlineBrush,param_1);
  return this;
}

// SetRestoreButtonStyle @ 142591ef0

FWindowStyle * __thiscall
FWindowStyle::SetRestoreButtonStyle(FWindowStyle *this,FButtonStyle *param_1)

{
  FButtonStyle::operator=(&this->RestoreButtonStyle,param_1);
  return this;
}

// SetTitleTextStyle @ 142592630

FWindowStyle * __thiscall
FWindowStyle::SetTitleTextStyle(FWindowStyle *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&this->TitleTextStyle,param_1);
  return this;
}


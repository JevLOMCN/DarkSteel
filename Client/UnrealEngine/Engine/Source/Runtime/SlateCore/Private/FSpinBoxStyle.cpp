// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// StaticStruct @ 14252ee60

UScriptStruct * __cdecl FSpinBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpinBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSpinBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpinBoxStyle,(UObject *)pUVar1,L"SpinBoxStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSpinBoxStyle.OuterSingleton;
}

// FSpinBoxStyle @ 1425474f0

FSpinBoxStyle * __thiscall FSpinBoxStyle::FSpinBoxStyle(FSpinBoxStyle *this,FSpinBoxStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined ***)this = &___7FSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&param_1->BackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ActiveBackgroundBrush,&param_1->ActiveBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->HoveredBackgroundBrush,&param_1->HoveredBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ActiveFillBrush,&param_1->ActiveFillBrush);
  FSlateBrush::FSlateBrush(&this->HoveredFillBrush,&param_1->HoveredFillBrush);
  FSlateBrush::FSlateBrush(&this->InactiveFillBrush,&param_1->InactiveFillBrush);
  FSlateBrush::FSlateBrush(&this->ArrowsImage,&param_1->ArrowsImage);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ForegroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar3;
  fVar4 = (param_1->TextPadding).Top;
  fVar5 = (param_1->TextPadding).Right;
  fVar6 = (param_1->TextPadding).Bottom;
  (this->TextPadding).Left = (param_1->TextPadding).Left;
  (this->TextPadding).Top = fVar4;
  (this->TextPadding).Right = fVar5;
  (this->TextPadding).Bottom = fVar6;
  fVar4 = (param_1->InsetPadding).Top;
  fVar5 = (param_1->InsetPadding).Right;
  fVar6 = (param_1->InsetPadding).Bottom;
  (this->InsetPadding).Left = (param_1->InsetPadding).Left;
  (this->InsetPadding).Top = fVar4;
  (this->InsetPadding).Right = fVar5;
  (this->InsetPadding).Bottom = fVar6;
  return this;
}

// FSpinBoxStyle @ 1425475e0

FSpinBoxStyle * __thiscall FSpinBoxStyle::FSpinBoxStyle(FSpinBoxStyle *this)

{
  TVector2<float>_u_0 local_res8;
  FMargin local_d8;
  FSlateBrush local_c8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_d8.Left = 0.0;
  local_d8.Top = 0.0;
  local_d8.Right = 0.0;
  local_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&local_c8,NoDrawType,(FName)0x0,&local_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  local_c8.bIsSet = '\0';
  local_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush(&this->ActiveBackgroundBrush,&local_c8);
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush(&this->HoveredBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ActiveFillBrush);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_d8.Left = 0.0;
  local_d8.Top = 0.0;
  local_d8.Right = 0.0;
  local_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&local_c8,NoDrawType,(FName)0x0,&local_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  local_c8.bIsSet = '\0';
  local_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush(&this->HoveredFillBrush,&local_c8);
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush(&this->InactiveFillBrush);
  FSlateBrush::FSlateBrush(&this->ArrowsImage);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->ForegroundColor).ColorTableId = Black;
  (this->TextPadding).Left = 1.0;
  (this->TextPadding).Top = 2.0;
  (this->TextPadding).Right = 1.0;
  *(undefined8 *)&(this->TextPadding).Bottom = 0x40000000;
  (this->InsetPadding).Top = 0.0;
  (this->InsetPadding).Right = 0.0;
  (this->InsetPadding).Bottom = 0.0;
  return this;
}

// ~FSpinBoxStyle @ 14254bec0

void __thiscall FSpinBoxStyle::~FSpinBoxStyle(FSpinBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FSpinBoxStyle__6B_;
  (this->ArrowsImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ArrowsImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->InactiveFillBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->InactiveFillBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HoveredFillBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HoveredFillBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ActiveFillBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ActiveFillBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HoveredBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->HoveredBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ActiveBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ActiveBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254e110

FSpinBoxStyle * __thiscall FSpinBoxStyle::operator=(FSpinBoxStyle *this,FSpinBoxStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->BackgroundBrush);
  FSlateBrush::operator=(&this->ActiveBackgroundBrush,&param_1->ActiveBackgroundBrush);
  FSlateBrush::operator=(&this->HoveredBackgroundBrush,&param_1->HoveredBackgroundBrush);
  FSlateBrush::operator=(&this->ActiveFillBrush,&param_1->ActiveFillBrush);
  FSlateBrush::operator=(&this->HoveredFillBrush,&param_1->HoveredFillBrush);
  FSlateBrush::operator=(&this->InactiveFillBrush,&param_1->InactiveFillBrush);
  FSlateBrush::operator=(&this->ArrowsImage,&param_1->ArrowsImage);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ForegroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar3;
  fVar4 = (param_1->TextPadding).Top;
  fVar5 = (param_1->TextPadding).Right;
  fVar6 = (param_1->TextPadding).Bottom;
  (this->TextPadding).Left = (param_1->TextPadding).Left;
  (this->TextPadding).Top = fVar4;
  (this->TextPadding).Right = fVar5;
  (this->TextPadding).Bottom = fVar6;
  fVar4 = (param_1->InsetPadding).Top;
  fVar5 = (param_1->InsetPadding).Right;
  fVar6 = (param_1->InsetPadding).Bottom;
  (this->InsetPadding).Left = (param_1->InsetPadding).Left;
  (this->InsetPadding).Top = fVar4;
  (this->InsetPadding).Right = fVar5;
  (this->InsetPadding).Bottom = fVar6;
  return this;
}

// GetDefault @ 142580100

FSpinBoxStyle * __cdecl FSpinBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSpinBoxStyle(&::Default);
      atexit(`FSpinBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425862e0

void __thiscall
FSpinBoxStyle::GetResources
          (FSpinBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

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
  
  local_48 = &this->BackgroundBrush;
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
  local_40 = &this->HoveredBackgroundBrush;
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
  local_38 = &this->ActiveBackgroundBrush;
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
  local_30 = &this->ActiveFillBrush;
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
  local_28 = &this->HoveredFillBrush;
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
  local_20 = &this->InactiveFillBrush;
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
  local_18[0] = &this->ArrowsImage;
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

// GetTypeName @ 142589d30

FName __thiscall FSpinBoxStyle::GetTypeName(FSpinBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// UnlinkColors @ 1425aa9a0

void __thiscall FSpinBoxStyle::UnlinkColors(FSpinBoxStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->BackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->BackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->HoveredBackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->HoveredBackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->HoveredBackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->HoveredBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->HoveredBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ActiveBackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ActiveBackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ActiveBackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ActiveBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->ActiveBackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ActiveFillBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ActiveFillBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ActiveFillBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ActiveFillBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ActiveFillBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->HoveredFillBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->HoveredFillBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->HoveredFillBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->HoveredFillBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->HoveredFillBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->InactiveFillBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->InactiveFillBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->InactiveFillBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->InactiveFillBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->InactiveFillBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->ArrowsImage).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ArrowsImage).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ArrowsImage).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ArrowsImage).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ArrowsImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ForegroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ForegroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ForegroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  return;
}


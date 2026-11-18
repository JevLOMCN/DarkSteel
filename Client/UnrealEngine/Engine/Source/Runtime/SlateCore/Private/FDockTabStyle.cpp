// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 14252f3e0

UScriptStruct * __cdecl FDockTabStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDockTabStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FDockTabStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDockTabStyle,(UObject *)pUVar1,L"DockTabStyle");
  }
  return Z_Registration_Info_UScriptStruct_FDockTabStyle.OuterSingleton;
}

// FDockTabStyle @ 1425439b0

FDockTabStyle * __thiscall FDockTabStyle::FDockTabStyle(FDockTabStyle *this,FDockTabStyle *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  
  *(undefined ***)this = &___7FDockTabStyle__6B_;
  FButtonStyle::FButtonStyle(&this->CloseButtonStyle,&param_1->CloseButtonStyle);
  FSlateBrush::FSlateBrush(&this->NormalBrush,&param_1->NormalBrush);
  FSlateBrush::FSlateBrush(&this->ColorOverlayTabBrush,&param_1->ColorOverlayTabBrush);
  FSlateBrush::FSlateBrush(&this->ColorOverlayIconBrush,&param_1->ColorOverlayIconBrush);
  FSlateBrush::FSlateBrush(&this->ForegroundBrush,&param_1->ForegroundBrush);
  FSlateBrush::FSlateBrush(&this->HoveredBrush,&param_1->HoveredBrush);
  FSlateBrush::FSlateBrush(&this->ContentAreaBrush,&param_1->ContentAreaBrush);
  FSlateBrush::FSlateBrush(&this->TabWellBrush,&param_1->TabWellBrush);
  FTextBlockStyle::FTextBlockStyle(&this->TabTextStyle,&param_1->TabTextStyle);
  fVar2 = (param_1->TabPadding).Top;
  fVar3 = (param_1->TabPadding).Right;
  fVar4 = (param_1->TabPadding).Bottom;
  (this->TabPadding).Left = (param_1->TabPadding).Left;
  (this->TabPadding).Top = fVar2;
  (this->TabPadding).Right = fVar3;
  (this->TabPadding).Bottom = fVar4;
  this->IconSize = param_1->IconSize;
  this->OverlapWidth = param_1->OverlapWidth;
  uVar1 = *(undefined8 *)((longlong)&(param_1->FlashColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FlashColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->FlashColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->FlashColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->FlashColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->FlashColor).field_0x12;
  (this->FlashColor).ColorUseRule = (param_1->FlashColor).ColorUseRule;
  (this->FlashColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->FlashColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)((longlong)&(param_1->NormalForegroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->NormalForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->NormalForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->NormalForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->NormalForegroundColor).field_0x12;
  (this->NormalForegroundColor).ColorUseRule = (param_1->NormalForegroundColor).ColorUseRule;
  (this->NormalForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->NormalForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->HoveredForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HoveredForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HoveredForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HoveredForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->HoveredForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->HoveredForegroundColor).field_0x12;
  (this->HoveredForegroundColor).ColorUseRule = (param_1->HoveredForegroundColor).ColorUseRule;
  (this->HoveredForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->HoveredForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ActiveForegroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->ActiveForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ActiveForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ActiveForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->ActiveForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ActiveForegroundColor).field_0x12;
  (this->ActiveForegroundColor).ColorUseRule = (param_1->ActiveForegroundColor).ColorUseRule;
  (this->ActiveForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ActiveForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->ForegroundForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundForegroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar5 = (param_1->ForegroundForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ForegroundForegroundColor).field_0x12;
  (this->ForegroundForegroundColor).ColorUseRule = (param_1->ForegroundForegroundColor).ColorUseRule
  ;
  (this->ForegroundForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundForegroundColor).field_0x12 = uVar6;
  this->IconBorderPadding = param_1->IconBorderPadding;
  return this;
}

// FDockTabStyle @ 142543b40

FDockTabStyle * __thiscall FDockTabStyle::FDockTabStyle(FDockTabStyle *this)

{
  FTextBlockStyle *pFVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FDockTabStyle__6B_;
  FButtonStyle::FButtonStyle(&this->CloseButtonStyle);
  FSlateBrush::FSlateBrush(&this->NormalBrush);
  FSlateBrush::FSlateBrush(&this->ColorOverlayTabBrush);
  FSlateBrush::FSlateBrush(&this->ColorOverlayIconBrush);
  FSlateBrush::FSlateBrush(&this->ForegroundBrush);
  FSlateBrush::FSlateBrush(&this->HoveredBrush);
  FSlateBrush::FSlateBrush(&this->ContentAreaBrush);
  FSlateBrush::FSlateBrush(&this->TabWellBrush);
  pFVar1 = FTextBlockStyle::GetDefault();
  FTextBlockStyle::FTextBlockStyle(&this->TabTextStyle,pFVar1);
  *(undefined4 *)&this->IconSize = 0x41800000;
  (this->TabPadding).Left = 0.0;
  (this->TabPadding).Top = 0.0;
  (this->TabPadding).Right = 0.0;
  (this->TabPadding).Bottom = 0.0;
  (this->FlashColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->IconSize).field_0x4 = 0x41800000;
  *(undefined8 *)&(this->FlashColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->FlashColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->FlashColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->NormalForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->NormalForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->NormalForegroundColor).ColorTableId = Black;
  *(undefined8 *)&(this->HoveredForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->HoveredForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->HoveredForegroundColor).ColorTableId = Black;
  *(undefined8 *)&(this->ActiveForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ActiveForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ActiveForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ActiveForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->ActiveForegroundColor).ColorTableId = Black;
  *(undefined8 *)&(this->ForegroundForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->ForegroundForegroundColor).ColorTableId = Black;
  this->IconBorderPadding = 1.0;
  return this;
}

// ~FDockTabStyle @ 14254ae60

void __thiscall FDockTabStyle::~FDockTabStyle(FDockTabStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FDockTabStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&this->TabTextStyle);
  pTVar1 = (this->TabWellBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->TabWellBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ContentAreaBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ContentAreaBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HoveredBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HoveredBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ForegroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ForegroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ColorOverlayIconBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ColorOverlayIconBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ColorOverlayTabBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->ColorOverlayTabBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->NormalBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->NormalBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&this->CloseButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257f610

FDockTabStyle * __cdecl FDockTabStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FDockTabStyle(&::Default);
      atexit(`FDockTabStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142583e10

void __thiscall
FDockTabStyle::GetResources
          (FDockTabStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

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
  
  (**(code **)(*(longlong *)&this->CloseButtonStyle + 8))(&this->CloseButtonStyle);
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_48 = &this->NormalBrush;
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
  local_40 = &this->ColorOverlayTabBrush;
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
  local_38 = &this->ColorOverlayIconBrush;
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
  local_30 = &this->ForegroundBrush;
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
  local_28 = &this->HoveredBrush;
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
  local_20 = &this->ContentAreaBrush;
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
  local_18[0] = &this->TabWellBrush;
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

// GetTypeName @ 142589b50

FName __thiscall FDockTabStyle::GetTypeName(FDockTabStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


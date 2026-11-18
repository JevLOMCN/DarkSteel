// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// StaticStruct @ 14252ebb0

UScriptStruct * __cdecl FSearchBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSearchBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSearchBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSearchBoxStyle,(UObject *)pUVar1,
                         L"SearchBoxStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSearchBoxStyle.OuterSingleton;
}

// FSearchBoxStyle @ 1425449a0

FSearchBoxStyle * __thiscall
FSearchBoxStyle::FSearchBoxStyle(FSearchBoxStyle *this,FSearchBoxStyle *param_1)

{
  bool bVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this->_padding_ = (longlong)&___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->TextBoxStyle,&param_1->TextBoxStyle);
  FSlateFontInfo::FSlateFontInfo(&this->ActiveFontInfo,&param_1->ActiveFontInfo);
  FSlateBrush::FSlateBrush(&this->UpArrowImage,&param_1->UpArrowImage);
  FSlateBrush::FSlateBrush(&this->DownArrowImage,&param_1->DownArrowImage);
  FSlateBrush::FSlateBrush(&this->GlassImage,&param_1->GlassImage);
  FSlateBrush::FSlateBrush(&this->ClearImage,&param_1->ClearImage);
  fVar3 = (param_1->ImagePadding).Top;
  fVar4 = (param_1->ImagePadding).Right;
  fVar5 = (param_1->ImagePadding).Bottom;
  (this->ImagePadding).Left = (param_1->ImagePadding).Left;
  (this->ImagePadding).Top = fVar3;
  (this->ImagePadding).Right = fVar4;
  (this->ImagePadding).Bottom = fVar5;
  (this->ImageSizeOverride).bIsSet = false;
  bVar1 = (param_1->ImageSizeOverride).bIsSet;
  (this->ImageSizeOverride).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->ImageSizeOverride).TypedValue.field0_0x0._s_0.Y;
    (this->ImageSizeOverride).TypedValue.field0_0x0._s_0.X =
         (param_1->ImageSizeOverride).TypedValue.field0_0x0._s_0.X;
    (this->ImageSizeOverride).TypedValue.field0_0x0._s_0.Y = dVar2;
  }
  this->bLeftAlignButtons_DEPRECATED = param_1->bLeftAlignButtons_DEPRECATED;
  this->bLeftAlignSearchResultButtons = param_1->bLeftAlignSearchResultButtons;
  this->bLeftAlignGlassImageAndClearButton = param_1->bLeftAlignGlassImageAndClearButton;
  return this;
}

// FSearchBoxStyle @ 142544aa0

FSearchBoxStyle * __thiscall FSearchBoxStyle::FSearchBoxStyle(FSearchBoxStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->TextBoxStyle);
  FSlateFontInfo::FSlateFontInfo(&this->ActiveFontInfo);
  FSlateBrush::FSlateBrush(&this->UpArrowImage);
  FSlateBrush::FSlateBrush(&this->DownArrowImage);
  FSlateBrush::FSlateBrush(&this->GlassImage);
  FSlateBrush::FSlateBrush(&this->ClearImage);
  (this->ImagePadding).Left = 0.0;
  (this->ImagePadding).Top = 0.0;
  (this->ImagePadding).Right = 0.0;
  (this->ImagePadding).Bottom = 0.0;
  (this->ImageSizeOverride).bIsSet = false;
  this->bLeftAlignButtons_DEPRECATED = false;
  this->bLeftAlignSearchResultButtons = false;
  this->bLeftAlignGlassImageAndClearButton = false;
  return this;
}

// ~FSearchBoxStyle @ 14254b730

void __thiscall FSearchBoxStyle::~FSearchBoxStyle(FSearchBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FSearchBoxStyle__6B_;
  (this->ClearImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClearImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->GlassImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->GlassImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->DownArrowImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DownArrowImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->UpArrowImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->UpArrowImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveFontInfo).CompositeFont.SharedReferenceCount.ReferenceController);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257fe80

FSearchBoxStyle * __cdecl FSearchBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FSearchBoxStyle__6B_;
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default.TextBoxStyle);
      FSlateFontInfo::FSlateFontInfo(&::Default.ActiveFontInfo);
      FSlateBrush::FSlateBrush(&::Default.UpArrowImage);
      FSlateBrush::FSlateBrush(&::Default.DownArrowImage);
      FSlateBrush::FSlateBrush(&::Default.GlassImage);
      FSlateBrush::FSlateBrush(&::Default.ClearImage);
      ::Default.ImageSizeOverride.bIsSet = false;
      ::Default.ImagePadding = (FMargin)ZEXT816(0);
      ::Default.bLeftAlignButtons_DEPRECATED = false;
      ::Default.bLeftAlignSearchResultButtons = false;
      ::Default.bLeftAlignGlassImageAndClearButton = false;
      atexit(`FSearchBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142585780

void __thiscall
FSearchBoxStyle::GetResources
          (FSearchBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  (**(code **)((this->TextBoxStyle)._padding_ + 8))(&this->TextBoxStyle);
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28 = &this->UpArrowImage;
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
  local_20 = &this->DownArrowImage;
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
  local_18 = &this->GlassImage;
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
  local_10 = &this->ClearImage;
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

// GetTypeName @ 142589cd0

FName __thiscall FSearchBoxStyle::GetTypeName(FSearchBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetLeftAlignButtons @ 142591960

FSearchBoxStyle * __thiscall
FSearchBoxStyle::SetLeftAlignButtons(FSearchBoxStyle *this,bool param_1)

{
  this->bLeftAlignButtons_DEPRECATED = param_1;
  this->bLeftAlignSearchResultButtons = param_1;
  this->bLeftAlignGlassImageAndClearButton = param_1;
  return this;
}

// SetTextBoxStyle @ 1425925b0

FSearchBoxStyle * __thiscall
FSearchBoxStyle::SetTextBoxStyle(FSearchBoxStyle *this,FEditableTextBoxStyle *param_1)

{
  bool bVar1;
  
  FEditableTextBoxStyle::operator=(&this->TextBoxStyle,param_1);
  bVar1 = FSlateFontInfo::HasValidFont(&this->ActiveFontInfo);
  if (!bVar1) {
    FSlateFontInfo::operator=(&this->ActiveFontInfo,&(this->TextBoxStyle).TextStyle.Font);
  }
  return this;
}


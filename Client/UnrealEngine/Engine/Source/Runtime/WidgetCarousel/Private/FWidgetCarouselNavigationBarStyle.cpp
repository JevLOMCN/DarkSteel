// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 6

// StaticStruct @ 14a77a6a0

UScriptStruct * __cdecl FWidgetCarouselNavigationBarStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WidgetCarousel();
    Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle,
                         (UObject *)pUVar1,L"WidgetCarouselNavigationBarStyle");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.OuterSingleton;
}

// FWidgetCarouselNavigationBarStyle @ 14a77b130

FWidgetCarouselNavigationBarStyle * __thiscall
FWidgetCarouselNavigationBarStyle::FWidgetCarouselNavigationBarStyle
          (FWidgetCarouselNavigationBarStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FSlateBrush::FSlateBrush(&this->HighlightBrush);
  FButtonStyle::FButtonStyle(&this->LeftButtonStyle);
  FButtonStyle::FButtonStyle(&this->CenterButtonStyle);
  FButtonStyle::FButtonStyle(&this->RightButtonStyle);
  return this;
}

// ~FWidgetCarouselNavigationBarStyle @ 14a77b1e0

void __thiscall
FWidgetCarouselNavigationBarStyle::~FWidgetCarouselNavigationBarStyle
          (FWidgetCarouselNavigationBarStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle(&this->RightButtonStyle);
  FButtonStyle::~FButtonStyle(&this->CenterButtonStyle);
  FButtonStyle::~FButtonStyle(&this->LeftButtonStyle);
  pTVar1 = (this->HighlightBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HighlightBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14a77e260

FWidgetCarouselNavigationBarStyle * __cdecl FWidgetCarouselNavigationBarStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.HighlightBrush);
      FButtonStyle::FButtonStyle(&::Default.LeftButtonStyle);
      FButtonStyle::FButtonStyle(&::Default.CenterButtonStyle);
      FButtonStyle::FButtonStyle(&::Default.RightButtonStyle);
      atexit(`FWidgetCarouselNavigationBarStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14a77e5b0

void __thiscall
FWidgetCarouselNavigationBarStyle::GetResources
          (FWidgetCarouselNavigationBarStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->HighlightBrush;
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
  (**(code **)(*(longlong *)&this->LeftButtonStyle + 8))(&this->LeftButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->CenterButtonStyle + 8))(&this->CenterButtonStyle,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a77e692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->RightButtonStyle + 8))(&this->RightButtonStyle,param_1);
  return;
}

// GetTypeName @ 14a77e8b0

FName __thiscall
FWidgetCarouselNavigationBarStyle::GetTypeName(FWidgetCarouselNavigationBarStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


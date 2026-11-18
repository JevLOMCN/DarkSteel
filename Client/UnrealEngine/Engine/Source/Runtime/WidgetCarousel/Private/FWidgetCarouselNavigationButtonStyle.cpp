// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 6

// StaticStruct @ 14a77a660

UScriptStruct * __cdecl FWidgetCarouselNavigationButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WidgetCarousel();
    Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle,
                         (UObject *)pUVar1,L"WidgetCarouselNavigationButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.OuterSingleton;
}

// FWidgetCarouselNavigationButtonStyle @ 14a77b190

FWidgetCarouselNavigationButtonStyle * __thiscall
FWidgetCarouselNavigationButtonStyle::FWidgetCarouselNavigationButtonStyle
          (FWidgetCarouselNavigationButtonStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&this->InnerButtonStyle);
  FSlateBrush::FSlateBrush(&this->NavigationButtonLeftImage);
  FSlateBrush::FSlateBrush(&this->NavigationButtonRightImage);
  return this;
}

// ~FWidgetCarouselNavigationButtonStyle @ 14a77b250

void __thiscall
FWidgetCarouselNavigationButtonStyle::~FWidgetCarouselNavigationButtonStyle
          (FWidgetCarouselNavigationButtonStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  (this->NavigationButtonRightImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationButtonRightImage).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->NavigationButtonLeftImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->NavigationButtonLeftImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&this->InnerButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14a77e320

FWidgetCarouselNavigationButtonStyle * __cdecl
FWidgetCarouselNavigationButtonStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
      FButtonStyle::FButtonStyle(&::Default.InnerButtonStyle);
      FSlateBrush::FSlateBrush(&::Default.NavigationButtonLeftImage);
      FSlateBrush::FSlateBrush(&::Default.NavigationButtonRightImage);
      atexit(`FWidgetCarouselNavigationButtonStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14a77e6a0

void __thiscall
FWidgetCarouselNavigationButtonStyle::GetResources
          (FWidgetCarouselNavigationButtonStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->NavigationButtonLeftImage;
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
  local_10 = &this->NavigationButtonRightImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
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
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
                    /* WARNING: Could not recover jumptable at 0x00014a77e81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->InnerButtonStyle + 8))(&this->InnerButtonStyle,param_1);
  return;
}

// GetTypeName @ 14a77e8d0

FName __thiscall
FWidgetCarouselNavigationButtonStyle::GetTypeName(FWidgetCarouselNavigationButtonStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


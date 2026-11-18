// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 14252eaf0

UScriptStruct * __cdecl FProgressBarStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProgressBarStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FProgressBarStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProgressBarStyle,(UObject *)pUVar1,
                         L"ProgressBarStyle");
  }
  return Z_Registration_Info_UScriptStruct_FProgressBarStyle.OuterSingleton;
}

// FProgressBarStyle @ 142544570

FProgressBarStyle * __thiscall FProgressBarStyle::FProgressBarStyle(FProgressBarStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FProgressBarStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundImage);
  FSlateBrush::FSlateBrush(&this->FillImage);
  FSlateBrush::FSlateBrush(&this->MarqueeImage);
  this->EnableFillAnimation = false;
  return this;
}

// ~FProgressBarStyle @ 14254b250

void __thiscall FProgressBarStyle::~FProgressBarStyle(FProgressBarStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FProgressBarStyle__6B_;
  (this->MarqueeImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MarqueeImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->FillImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->FillImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254dcb0

FProgressBarStyle * __thiscall
FProgressBarStyle::operator=(FProgressBarStyle *this,FProgressBarStyle *param_1)

{
  FSlateBrush::operator=(&this->BackgroundImage,&param_1->BackgroundImage);
  FSlateBrush::operator=(&this->FillImage,&param_1->FillImage);
  FSlateBrush::operator=(&this->MarqueeImage,&param_1->MarqueeImage);
  this->EnableFillAnimation = param_1->EnableFillAnimation;
  return this;
}

// GetDefault @ 14257fb90

FProgressBarStyle * __cdecl FProgressBarStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FProgressBarStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.BackgroundImage);
      FSlateBrush::FSlateBrush(&::Default.FillImage);
      FSlateBrush::FSlateBrush(&::Default.MarqueeImage);
      ::Default.EnableFillAnimation = false;
      atexit(`FProgressBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142584b50

void __thiscall
FProgressBarStyle::GetResources
          (FProgressBarStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18 [2];
  
  local_28 = &this->BackgroundImage;
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
  local_20 = &this->FillImage;
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
  local_18[0] = &this->MarqueeImage;
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

// GetTypeName @ 142589c50

FName __thiscall FProgressBarStyle::GetTypeName(FProgressBarStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


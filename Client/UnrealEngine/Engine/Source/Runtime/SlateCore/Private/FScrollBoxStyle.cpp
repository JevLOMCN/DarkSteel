// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// StaticStruct @ 14252f5a0

UScriptStruct * __cdecl FScrollBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScrollBoxStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FScrollBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScrollBoxStyle,(UObject *)pUVar1,
                         L"ScrollBoxStyle");
  }
  return Z_Registration_Info_UScriptStruct_FScrollBoxStyle.OuterSingleton;
}

// FScrollBoxStyle @ 142544910

FScrollBoxStyle * __thiscall FScrollBoxStyle::FScrollBoxStyle(FScrollBoxStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->BarThickness = 9.0;
  this->_padding_ = (longlong)&___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&this->TopShadowBrush);
  FSlateBrush::FSlateBrush(&this->BottomShadowBrush);
  FSlateBrush::FSlateBrush(&this->LeftShadowBrush);
  FSlateBrush::FSlateBrush(&this->RightShadowBrush);
  (this->HorizontalScrolledContentPadding).Right = 1.0;
  (this->HorizontalScrolledContentPadding).Bottom = 0.0;
  (this->HorizontalScrolledContentPadding).Left = 0.0;
  (this->HorizontalScrolledContentPadding).Top = 0.0;
  (this->VerticalScrolledContentPadding).Left = 0.0;
  (this->VerticalScrolledContentPadding).Top = 0.0;
  (this->VerticalScrolledContentPadding).Right = 0.0;
  (this->VerticalScrolledContentPadding).Bottom = 1.0;
  return this;
}

// ~FScrollBoxStyle @ 14254b6b0

void __thiscall FScrollBoxStyle::~FScrollBoxStyle(FScrollBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FScrollBoxStyle__6B_;
  (this->RightShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RightShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->LeftShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->LeftShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BottomShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BottomShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->TopShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->TopShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254de00

FScrollBoxStyle * __thiscall
FScrollBoxStyle::operator=(FScrollBoxStyle *this,FScrollBoxStyle *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->BarThickness = param_1->BarThickness;
  FSlateBrush::operator=(&this->TopShadowBrush,&param_1->TopShadowBrush);
  FSlateBrush::operator=(&this->BottomShadowBrush,&param_1->BottomShadowBrush);
  FSlateBrush::operator=(&this->LeftShadowBrush,&param_1->LeftShadowBrush);
  FSlateBrush::operator=(&this->RightShadowBrush,&param_1->RightShadowBrush);
  fVar1 = (param_1->HorizontalScrolledContentPadding).Top;
  fVar2 = (param_1->HorizontalScrolledContentPadding).Right;
  fVar3 = (param_1->HorizontalScrolledContentPadding).Bottom;
  (this->HorizontalScrolledContentPadding).Left = (param_1->HorizontalScrolledContentPadding).Left;
  (this->HorizontalScrolledContentPadding).Top = fVar1;
  (this->HorizontalScrolledContentPadding).Right = fVar2;
  (this->HorizontalScrolledContentPadding).Bottom = fVar3;
  fVar1 = (param_1->VerticalScrolledContentPadding).Top;
  fVar2 = (param_1->VerticalScrolledContentPadding).Right;
  fVar3 = (param_1->VerticalScrolledContentPadding).Bottom;
  (this->VerticalScrolledContentPadding).Left = (param_1->VerticalScrolledContentPadding).Left;
  (this->VerticalScrolledContentPadding).Top = fVar1;
  (this->VerticalScrolledContentPadding).Right = fVar2;
  (this->VerticalScrolledContentPadding).Bottom = fVar3;
  return this;
}

// GetDefault @ 14257fd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FScrollBoxStyle * __cdecl FScrollBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default.BarThickness = 9.0;
      ::Default._padding_ = (longlong)&___7FScrollBoxStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.TopShadowBrush);
      FSlateBrush::FSlateBrush(&::Default.BottomShadowBrush);
      FSlateBrush::FSlateBrush(&::Default.LeftShadowBrush);
      FSlateBrush::FSlateBrush(&::Default.RightShadowBrush);
      ::Default.HorizontalScrolledContentPadding = ___xmm_000000003f8000000000000000000000;
      ::Default.VerticalScrolledContentPadding = ___xmm_3f800000000000000000000000000000;
      atexit(`FScrollBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425854c0

void __thiscall
FScrollBoxStyle::GetResources
          (FScrollBoxStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_28 = &this->TopShadowBrush;
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
  local_20 = &this->BottomShadowBrush;
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
  local_18 = &this->LeftShadowBrush;
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
  local_10 = &this->RightShadowBrush;
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

// GetTypeName @ 142589cb0

FName __thiscall FScrollBoxStyle::GetTypeName(FScrollBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetBottomShadowBrush @ 142590a20

FScrollBoxStyle * __thiscall
FScrollBoxStyle::SetBottomShadowBrush(FScrollBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BottomShadowBrush,param_1);
  return this;
}

// SetLeftShadowBrush @ 142591980

FScrollBoxStyle * __thiscall
FScrollBoxStyle::SetLeftShadowBrush(FScrollBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->LeftShadowBrush,param_1);
  return this;
}

// SetRightShadowBrush @ 142591f20

FScrollBoxStyle * __thiscall
FScrollBoxStyle::SetRightShadowBrush(FScrollBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->RightShadowBrush,param_1);
  return this;
}

// SetTopShadowBrush @ 142592690

FScrollBoxStyle * __thiscall
FScrollBoxStyle::SetTopShadowBrush(FScrollBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->TopShadowBrush,param_1);
  return this;
}


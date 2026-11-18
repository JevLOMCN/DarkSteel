// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 14252edf0

UScriptStruct * __cdecl FInlineTextImageStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInlineTextImageStyle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FInlineTextImageStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInlineTextImageStyle,(UObject *)pUVar1,
                         L"InlineTextImageStyle");
  }
  return Z_Registration_Info_UScriptStruct_FInlineTextImageStyle.OuterSingleton;
}

// FInlineTextImageStyle @ 142544460

FInlineTextImageStyle * __thiscall
FInlineTextImageStyle::FInlineTextImageStyle
          (FInlineTextImageStyle *this,FInlineTextImageStyle *param_1)

{
  *(undefined ***)this = &___7FInlineTextImageStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Image,&param_1->Image);
  this->Baseline = param_1->Baseline;
  return this;
}

// FInlineTextImageStyle @ 1425444b0

FInlineTextImageStyle * __thiscall
FInlineTextImageStyle::FInlineTextImageStyle(FInlineTextImageStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FInlineTextImageStyle__6B_;
  FSlateBrush::FSlateBrush(&this->Image);
  this->Baseline = 0;
  return this;
}

// ~FInlineTextImageStyle @ 14254b1f0

void __thiscall FInlineTextImageStyle::~FInlineTextImageStyle(FInlineTextImageStyle *this)

{
  *(undefined ***)this = &___7FInlineTextImageStyle__6B_;
  (this->Image)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Image).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257fae0

FInlineTextImageStyle * __cdecl FInlineTextImageStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FInlineTextImageStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.Image);
      ::Default.Baseline = 0;
      atexit(`FInlineTextImageStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142584aa0

void __thiscall
FInlineTextImageStyle::GetResources
          (FInlineTextImageStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->Image;
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

// GetTypeName @ 142589c30

FName __thiscall FInlineTextImageStyle::GetTypeName(FInlineTextImageStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}


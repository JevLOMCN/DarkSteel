// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 14252f5e0

UScriptStruct * __cdecl FScrollBorderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScrollBorderStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FScrollBorderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScrollBorderStyle,(UObject *)pUVar1,
                         L"ScrollBorderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FScrollBorderStyle.OuterSingleton;
}

// FScrollBorderStyle @ 1425448d0

FScrollBorderStyle * __thiscall FScrollBorderStyle::FScrollBorderStyle(FScrollBorderStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FScrollBorderStyle__6B_;
  FSlateBrush::FSlateBrush(&this->TopShadowBrush);
  FSlateBrush::FSlateBrush(&this->BottomShadowBrush);
  return this;
}

// ~FScrollBorderStyle @ 14254b650

void __thiscall FScrollBorderStyle::~FScrollBorderStyle(FScrollBorderStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FScrollBorderStyle__6B_;
  (this->BottomShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BottomShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  pTVar1 = (this->TopShadowBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->TopShadowBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257fce0

FScrollBorderStyle * __cdecl FScrollBorderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FScrollBorderStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.TopShadowBrush);
      FSlateBrush::FSlateBrush(&::Default.BottomShadowBrush);
      atexit(`FScrollBorderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142585350

void __thiscall
FScrollBorderStyle::GetResources
          (FScrollBorderStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->TopShadowBrush;
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
  local_10 = &this->BottomShadowBrush;
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

// GetTypeName @ 142589c90

FName __thiscall FScrollBorderStyle::GetTypeName(FScrollBorderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetBottomShadowBrush @ 1425909f0

FScrollBorderStyle * __thiscall
FScrollBorderStyle::SetBottomShadowBrush(FScrollBorderStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BottomShadowBrush,param_1);
  return this;
}

// SetTopShadowBrush @ 142592660

FScrollBorderStyle * __thiscall
FScrollBorderStyle::SetTopShadowBrush(FScrollBorderStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->TopShadowBrush,param_1);
  return this;
}


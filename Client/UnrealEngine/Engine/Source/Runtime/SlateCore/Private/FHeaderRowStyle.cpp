// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticStruct @ 14252f1f0

UScriptStruct * __cdecl FHeaderRowStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHeaderRowStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FHeaderRowStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHeaderRowStyle,(UObject *)pUVar1,
                         L"HeaderRowStyle");
  }
  return Z_Registration_Info_UScriptStruct_FHeaderRowStyle.OuterSingleton;
}

// FHeaderRowStyle @ 142544260

FHeaderRowStyle * __thiscall FHeaderRowStyle::FHeaderRowStyle(FHeaderRowStyle *this)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FHeaderRowStyle__6B_;
  FTableColumnHeaderStyle::FTableColumnHeaderStyle(&this->ColumnStyle);
  FTableColumnHeaderStyle::FTableColumnHeaderStyle(&this->LastColumnStyle);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&this->ColumnSplitterStyle);
  (this->ColumnSplitterStyle)._padding_ = (longlong)&___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush(&(this->ColumnSplitterStyle).HandleNormalBrush);
  FSlateBrush::FSlateBrush(&(this->ColumnSplitterStyle).HandleHighlightBrush);
  this->SplitterHandleSize = 0.0;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->HorizontalSeparatorBrush,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  this->HorizontalSeparatorThickness = 0.0;
  return this;
}

// ~FHeaderRowStyle @ 14254b0b0

void __thiscall FHeaderRowStyle::~FHeaderRowStyle(FHeaderRowStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FHeaderRowStyle__6B_;
  (this->HorizontalSeparatorBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HorizontalSeparatorBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ColumnSplitterStyle).HandleHighlightBrush.ResourceHandle.Data.SharedReferenceCount
           .ReferenceController;
  (this->ColumnSplitterStyle).HandleHighlightBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  (this->ColumnSplitterStyle)._padding_ = (longlong)&___7FSplitterStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ColumnSplitterStyle).HandleNormalBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ColumnSplitterStyle).HandleNormalBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ColumnSplitterStyle);
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(&this->LastColumnStyle);
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(&this->ColumnStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257f8e0

FHeaderRowStyle * __cdecl FHeaderRowStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FHeaderRowStyle(&::Default);
      atexit(`FHeaderRowStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142584880

void __thiscall
FHeaderRowStyle::GetResources
          (FHeaderRowStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  (**(code **)((this->ColumnStyle)._padding_ + 8))(&this->ColumnStyle);
  (**(code **)((this->LastColumnStyle)._padding_ + 8))(&this->LastColumnStyle,param_1);
  (**(code **)((this->ColumnSplitterStyle)._padding_ + 8))(&this->ColumnSplitterStyle,param_1);
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18 = &this->BackgroundBrush;
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
  local_10 = &this->HorizontalSeparatorBrush;
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

// GetTypeName @ 142589bd0

FName __thiscall FHeaderRowStyle::GetTypeName(FHeaderRowStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

